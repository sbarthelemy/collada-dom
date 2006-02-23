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
#include <dom/domPolygons.h>

daeElementRef
domPolygons::create(daeInt bytes)
{
	domPolygonsRef ref = new(bytes) domPolygons;
	ref->attrMaterial.setContainer( (domPolygons*)ref );
	return ref;
}


daeMetaElement *
domPolygons::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "polygons" );
	_Meta->setStaticPointerAddress(&domPolygons::_Meta);
	_Meta->registerConstructor(domPolygons::create);

	// Add elements: param, input, p
    _Meta->appendArrayElement(domParam::registerElement(),daeOffsetOf(domPolygons,elemParam_array));
    _Meta->appendArrayElement(domInput::registerElement(),daeOffsetOf(domPolygons,elemInput_array));
    _Meta->appendArrayElement(domPolygons::domP::registerElement(),daeOffsetOf(domPolygons,elemP_array));

	//	Add attribute: count
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "count" );
		ma->setType( daeAtomicType::get("xsNonNegativeInteger"));
		ma->setOffset( daeOffsetOf( domPolygons , attrCount ));
		ma->setContainer( _Meta );
		ma->setIsRequired( true );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: material
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "material" );
		ma->setType( daeAtomicType::get("xsAnyURI"));
		ma->setOffset( daeOffsetOf( domPolygons , attrMaterial ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domPolygons));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domPolygons::domP::create(daeInt bytes)
{
	domPolygons::domPRef ref = new(bytes) domPolygons::domP;
	return ref;
}


daeMetaElement *
domPolygons::domP::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "p" );
	_Meta->setStaticPointerAddress(&domPolygons::domP::_Meta);
	_Meta->registerConstructor(domPolygons::domP::create);

	// Add elements: h
    _Meta->appendArrayElement(domPolygons::domP::domH::registerElement(),daeOffsetOf(domPolygons::domP,elemH_array));
	//	Add attribute: _value
 	{
		daeMetaAttribute *ma = new daeMetaArrayAttribute;
		ma->setName( "_value" );
		ma->setType( daeAtomicType::get("ListOfInts"));
		ma->setOffset( daeOffsetOf( domPolygons::domP , _value ));
		ma->setContainer( _Meta );
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domPolygons::domP));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domPolygons::domP::domH::create(daeInt bytes)
{
	domPolygons::domP::domHRef ref = new(bytes) domPolygons::domP::domH;
	return ref;
}


daeMetaElement *
domPolygons::domP::domH::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "h" );
	_Meta->setStaticPointerAddress(&domPolygons::domP::domH::_Meta);
	_Meta->registerConstructor(domPolygons::domP::domH::create);

	//	Add attribute: _value
 	{
		daeMetaAttribute *ma = new daeMetaArrayAttribute;
		ma->setName( "_value" );
		ma->setType( daeAtomicType::get("ListOfInts"));
		ma->setOffset( daeOffsetOf( domPolygons::domP::domH , _value ));
		ma->setContainer( _Meta );
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domPolygons::domP::domH));
	_Meta->validate();

	return _Meta;
}


daeMetaElement * domPolygons::_Meta = NULL;
daeMetaElement * domPolygons::domP::_Meta = NULL;
daeMetaElement * domPolygons::domP::domH::_Meta = NULL;


