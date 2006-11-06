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

#include <dae/daeDom.h>
#include <dom/domArray.h>
#include <dae/daeMetaCMPolicy.h>
#include <dae/daeMetaSequence.h>
#include <dae/daeMetaChoice.h>
#include <dae/daeMetaGroup.h>
#include <dae/daeMetaAny.h>
#include <dae/daeMetaElementAttribute.h>

daeElementRef
domArray::create(daeInt bytes)
{
	domArrayRef ref = new(bytes) domArray;
	return ref;
}


daeMetaElement *
domArray::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "array" );
	_Meta->registerClass(domArray::create, &_Meta);

	//	Add attribute: _value
 	{
		daeMetaAttribute *ma = new daeMetaArrayAttribute;
		ma->setName( "_value" );
		ma->setType( daeAtomicType::get("ListOfTokens"));
		ma->setOffset( daeOffsetOf( domArray , _value ));
		ma->setContainer( _Meta );
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: id
 	{
		daeMetaAttribute *ma = new daeMetaAttribute;
		ma->setName( "id" );
		ma->setType( daeAtomicType::get("xsID"));
		ma->setOffset( daeOffsetOf( domArray , attrId ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: name
 	{
		daeMetaAttribute *ma = new daeMetaAttribute;
		ma->setName( "name" );
		ma->setType( daeAtomicType::get("xsNCName"));
		ma->setOffset( daeOffsetOf( domArray , attrName ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: count
 	{
		daeMetaAttribute *ma = new daeMetaAttribute;
		ma->setName( "count" );
		ma->setType( daeAtomicType::get("xsNonNegativeInteger"));
		ma->setOffset( daeOffsetOf( domArray , attrCount ));
		ma->setContainer( _Meta );
		ma->setIsRequired( true );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: type
 	{
		daeMetaAttribute *ma = new daeMetaAttribute;
		ma->setName( "type" );
		ma->setType( daeAtomicType::get("ArrayTypes"));
		ma->setOffset( daeOffsetOf( domArray , attrType ));
		ma->setContainer( _Meta );
		ma->setIsRequired( true );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: minInclusive
 	{
		daeMetaAttribute *ma = new daeMetaAttribute;
		ma->setName( "minInclusive" );
		ma->setType( daeAtomicType::get("xsInteger"));
		ma->setOffset( daeOffsetOf( domArray , attrMinInclusive ));
		ma->setContainer( _Meta );
		ma->setDefault( "-2147483648");
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: maxInclusive
 	{
		daeMetaAttribute *ma = new daeMetaAttribute;
		ma->setName( "maxInclusive" );
		ma->setType( daeAtomicType::get("xsInteger"));
		ma->setOffset( daeOffsetOf( domArray , attrMaxInclusive ));
		ma->setContainer( _Meta );
		ma->setDefault( "2147483647");
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: digits
 	{
		daeMetaAttribute *ma = new daeMetaAttribute;
		ma->setName( "digits" );
		ma->setType( daeAtomicType::get("xsShort"));
		ma->setOffset( daeOffsetOf( domArray , attrDigits ));
		ma->setContainer( _Meta );
		ma->setDefault( "6");
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: magnitude
 	{
		daeMetaAttribute *ma = new daeMetaAttribute;
		ma->setName( "magnitude" );
		ma->setType( daeAtomicType::get("xsShort"));
		ma->setOffset( daeOffsetOf( domArray , attrMagnitude ));
		ma->setContainer( _Meta );
		ma->setDefault( "38");
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domArray));
	_Meta->validate();

	return _Meta;
}


daeMetaElement * domArray::_Meta = NULL;


