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
#include <dom/domLinestrips.h>

daeElementRef
domLinestrips::create(daeInt bytes)
{
	domLinestripsRef ref = new(bytes) domLinestrips;
	ref->attrMaterial.setContainer( (domLinestrips*)ref );
	return ref;
}


daeMetaElement *
domLinestrips::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "linestrips" );
	_Meta->setStaticPointerAddress(&domLinestrips::_Meta);
	_Meta->registerConstructor(domLinestrips::create);

	// Add elements: param, input, p
    _Meta->appendArrayElement(domParam::registerElement(),daeOffsetOf(domLinestrips,elemParam_array));
    _Meta->appendArrayElement(domInput::registerElement(),daeOffsetOf(domLinestrips,elemInput_array));
    _Meta->appendArrayElement(domLinestrips::domP::registerElement(),daeOffsetOf(domLinestrips,elemP_array));

	//	Add attribute: count
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "count" );
		ma->setType( daeAtomicType::get("xsNonNegativeInteger"));
		ma->setOffset( daeOffsetOf( domLinestrips , attrCount ));
		ma->setContainer( _Meta );
		ma->setIsRequired( true );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: material
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "material" );
		ma->setType( daeAtomicType::get("xsAnyURI"));
		ma->setOffset( daeOffsetOf( domLinestrips , attrMaterial ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domLinestrips));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domLinestrips::domP::create(daeInt bytes)
{
	domLinestrips::domPRef ref = new(bytes) domLinestrips::domP;
	return ref;
}


daeMetaElement *
domLinestrips::domP::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "p" );
	_Meta->setStaticPointerAddress(&domLinestrips::domP::_Meta);
	_Meta->registerConstructor(domLinestrips::domP::create);

	//	Add attribute: _value
 	{
		daeMetaAttribute *ma = new daeMetaArrayAttribute;
		ma->setName( "_value" );
		ma->setType( daeAtomicType::get("ListOfInts"));
		ma->setOffset( daeOffsetOf( domLinestrips::domP , _value ));
		ma->setContainer( _Meta );
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domLinestrips::domP));
	_Meta->validate();

	return _Meta;
}


daeMetaElement * domLinestrips::_Meta = NULL;
daeMetaElement * domLinestrips::domP::_Meta = NULL;


