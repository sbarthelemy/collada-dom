/*
 * Copyright 2006 Sony Computer Entertainment Inc.
 *
 * Licensed under the SCEA Shared Source License, Version 1.0 (the "License"); you may not use this 
 * file except in compliance with the License. You may obtain a copy of the License at:
 * http://research.scea.com/scea_shared_source_license.html
 *
 * Unless required by applicable law or agreed to in writing, software distributed under the License 
 * is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or 
 * implied. See the License for the specific language governing permissions and limitations under the 
 * License. 
 */

#include <dae/daeRawResolver.h>

#include <dae/daeURI.h>
#include <dae/daeErrorHandler.h>

daeRawResolver::daeRawResolver()
{
}

daeRawResolver::~daeRawResolver()
{
}

daeBool
daeRawResolver::resolveURI(daeURI& uri)
{
	(void)uri;
	return false;
}

daeString
daeRawResolver::getName()
{
	return "RawResolver";
}

daeBool
daeRawResolver::isExtensionSupported(daeString extension)
{
	if ((extension!=NULL) &&
		(strlen(extension) > 0) &&
		((strncmp(extension,"raw",3)==0) ||
		 (strncmp(extension,"RAW",3)==0)))
		return true;
	return false;
}
		
daeBool
daeRawResolver::isProtocolSupported(daeString protocol)
{
	if ((protocol!=NULL) &&
		(strlen(protocol) > 0) &&
		((strncmp(protocol,"file",4) == 0)))
		return true;
	return false;
}

daeBool
daeRawResolver::resolveElement(daeURI& uri, daeString typeNameHint)
{
	(void)typeNameHint;
	// Make sure the URI is validated
	if (uri.getState() == daeURI::uri_loaded)
	{
		uri.validate();
	}
	if ( uri.getFile() == NULL )
	{
		return false;
	}

	daeFixedName finalname;
	if (!uri.getPath(finalname,sizeof(finalname)))
	{
		daeErrorHandler::get()->handleError( "can't get path from URI\n" );
		return false;
	}
	FILE *rawFile = fopen(finalname+1, "rb");
	if (rawFile == NULL )
	{
		uri.setState(daeURI::uri_failed_file_not_found);
		return false;
	}
	long byteOffset = atoi( uri.getID() ); //get the fragment

	daeElement *src;
	daeElement *array;
	daeElement *accessor;
	
	accessor = uri.getContainer();
	if ( accessor == NULL )
	{
		uri.setState( daeURI::uri_failed_missing_container );
		return false;
	}
	src = accessor->getParentElement()->getParentElement();
	daeElementRefArray children;
	accessor->getChildren( children );
	bool hasInts = children[0]->hasAttribute( "type" ) && strcmp( *((daeString*)children[0]->getAttributeValue( "type" )), "int" ) == 0;

	if ( hasInts )
	{
		array = src->createAndPlace( "int_array" );
	}
	else
	{
		array = src->createAndPlace( "float_array" );
	}
	
	daeULong *countPtr = (daeULong*)accessor->getAttributeValue( "count" );
	daeULong count = countPtr != NULL ? *countPtr : 0;

	daeULong *stridePtr = (daeULong*)accessor->getAttributeValue( "stride" );
	daeULong stride = stridePtr != NULL ? *stridePtr : 1;

	*(daeULong*)(array->getAttributeValue("count")) = count*stride;
	daeFixedName arrayName;
	strcpy( arrayName, src->getID() );
	strcat( arrayName, "-array" );
	array->setAttribute( "id", arrayName );

	daeArray *valArray = (daeArray*)array->getValuePointer();
	valArray->setRawCount( (size_t)(count*stride) );

	fseek( rawFile, byteOffset, SEEK_SET );
	if ( hasInts )
	{
		daeInt val;
		for ( unsigned int i = 0; i < count*stride; i++ )
		{
			fread( &val, sizeof(daeInt), 1, rawFile );
			*(daeLong*)(valArray->getRawData()+i*sizeof(daeLong)) = (daeLong)val;
		}
	}
	else
	{
		daeFloat val;
		for ( unsigned int i = 0; i < count*stride; i++ )
		{
			fread( &val, sizeof(daeFloat), 1, rawFile );
			*(daeDouble*)(valArray->getRawData()+i*sizeof(daeDouble)) = (daeDouble)val;
		}
	}

	fclose(rawFile);
	uri.setElement( array );
	uri.resolveURI();
	return true;
}
