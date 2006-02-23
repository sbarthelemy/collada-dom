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
#include <dom/domEntry.h>

daeElementRef
domEntry::create(daeInt bytes)
{
	domEntryRef ref = new(bytes) domEntry;
	return ref;
}


daeMetaElement *
domEntry::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "entry" );
	_Meta->setStaticPointerAddress(&domEntry::_Meta);
	_Meta->registerConstructor(domEntry::create);

	// Add elements: param
    _Meta->appendArrayElement(domEntry::domParam::registerElement(),daeOffsetOf(domEntry,elemParam_array));

	//	Add attribute: function
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "function" );
		ma->setType( daeAtomicType::get("xsNMTOKEN"));
		ma->setOffset( daeOffsetOf( domEntry , attrFunction ));
		ma->setContainer( _Meta );
		ma->setIsRequired( true );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: semantic
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "semantic" );
		ma->setType( daeAtomicType::get("xsNMTOKEN"));
		ma->setOffset( daeOffsetOf( domEntry , attrSemantic ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domEntry));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domEntry::domParam::create(daeInt bytes)
{
	domEntry::domParamRef ref = new(bytes) domEntry::domParam;
	return ref;
}


daeMetaElement *
domEntry::domParam::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "param" );
	_Meta->setStaticPointerAddress(&domEntry::domParam::_Meta);
	_Meta->registerConstructor(domEntry::domParam::create);

	//	Add attribute: _value
 	{
		daeMetaAttribute *ma = new daeMetaAttribute;
		ma->setName( "_value" );
		ma->setType( daeAtomicType::get("xsString"));
		ma->setOffset( daeOffsetOf( domEntry::domParam , _value ));
		ma->setContainer( _Meta );
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: id
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "id" );
		ma->setType( daeAtomicType::get("xsID"));
		ma->setOffset( daeOffsetOf( domEntry::domParam , attrId ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: name
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "name" );
		ma->setType( daeAtomicType::get("xsNCName"));
		ma->setOffset( daeOffsetOf( domEntry::domParam , attrName ));
		ma->setContainer( _Meta );
		ma->setIsRequired( true );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: qualifier
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "qualifier" );
		ma->setType( daeAtomicType::get("xsNMTOKEN"));
		ma->setOffset( daeOffsetOf( domEntry::domParam , attrQualifier ));
		ma->setContainer( _Meta );
		ma->setIsRequired( true );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: semantic
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "semantic" );
		ma->setType( daeAtomicType::get("xsToken"));
		ma->setOffset( daeOffsetOf( domEntry::domParam , attrSemantic ));
		ma->setContainer( _Meta );
		ma->setIsRequired( true );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: type
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "type" );
		ma->setType( daeAtomicType::get("xsNMTOKEN"));
		ma->setOffset( daeOffsetOf( domEntry::domParam , attrType ));
		ma->setContainer( _Meta );
		ma->setIsRequired( true );
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domEntry::domParam));
	_Meta->validate();

	return _Meta;
}


daeMetaElement * domEntry::_Meta = NULL;
daeMetaElement * domEntry::domParam::_Meta = NULL;


