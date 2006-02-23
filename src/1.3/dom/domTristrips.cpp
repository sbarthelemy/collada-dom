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
#include <dom/domTristrips.h>

daeElementRef
domTristrips::create(daeInt bytes)
{
	domTristripsRef ref = new(bytes) domTristrips;
	ref->attrMaterial.setContainer( (domTristrips*)ref );
	return ref;
}


daeMetaElement *
domTristrips::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "tristrips" );
	_Meta->setStaticPointerAddress(&domTristrips::_Meta);
	_Meta->registerConstructor(domTristrips::create);

	// Add elements: param, input, p
    _Meta->appendArrayElement(domParam::registerElement(),daeOffsetOf(domTristrips,elemParam_array));
    _Meta->appendArrayElement(domInput::registerElement(),daeOffsetOf(domTristrips,elemInput_array));
    _Meta->appendArrayElement(domTristrips::domP::registerElement(),daeOffsetOf(domTristrips,elemP_array));

	//	Add attribute: count
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "count" );
		ma->setType( daeAtomicType::get("xsNonNegativeInteger"));
		ma->setOffset( daeOffsetOf( domTristrips , attrCount ));
		ma->setContainer( _Meta );
		ma->setIsRequired( true );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: material
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "material" );
		ma->setType( daeAtomicType::get("xsAnyURI"));
		ma->setOffset( daeOffsetOf( domTristrips , attrMaterial ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domTristrips));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domTristrips::domP::create(daeInt bytes)
{
	domTristrips::domPRef ref = new(bytes) domTristrips::domP;
	return ref;
}


daeMetaElement *
domTristrips::domP::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "p" );
	_Meta->setStaticPointerAddress(&domTristrips::domP::_Meta);
	_Meta->registerConstructor(domTristrips::domP::create);

	//	Add attribute: _value
 	{
		daeMetaAttribute *ma = new daeMetaArrayAttribute;
		ma->setName( "_value" );
		ma->setType( daeAtomicType::get("ListOfInts"));
		ma->setOffset( daeOffsetOf( domTristrips::domP , _value ));
		ma->setContainer( _Meta );
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domTristrips::domP));
	_Meta->validate();

	return _Meta;
}


daeMetaElement * domTristrips::_Meta = NULL;
daeMetaElement * domTristrips::domP::_Meta = NULL;


