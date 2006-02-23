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
#include <dom/domTriangles.h>

daeElementRef
domTriangles::create(daeInt bytes)
{
	domTrianglesRef ref = new(bytes) domTriangles;
	ref->attrMaterial.setContainer( (domTriangles*)ref );
	return ref;
}


daeMetaElement *
domTriangles::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "triangles" );
	_Meta->setStaticPointerAddress(&domTriangles::_Meta);
	_Meta->registerConstructor(domTriangles::create);

	// Add elements: param, input, p
    _Meta->appendArrayElement(domParam::registerElement(),daeOffsetOf(domTriangles,elemParam_array));
    _Meta->appendArrayElement(domInput::registerElement(),daeOffsetOf(domTriangles,elemInput_array));
    _Meta->appendArrayElement(domTriangles::domP::registerElement(),daeOffsetOf(domTriangles,elemP_array));

	//	Add attribute: count
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "count" );
		ma->setType( daeAtomicType::get("xsNonNegativeInteger"));
		ma->setOffset( daeOffsetOf( domTriangles , attrCount ));
		ma->setContainer( _Meta );
		ma->setIsRequired( true );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: material
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "material" );
		ma->setType( daeAtomicType::get("xsAnyURI"));
		ma->setOffset( daeOffsetOf( domTriangles , attrMaterial ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domTriangles));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domTriangles::domP::create(daeInt bytes)
{
	domTriangles::domPRef ref = new(bytes) domTriangles::domP;
	return ref;
}


daeMetaElement *
domTriangles::domP::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "p" );
	_Meta->setStaticPointerAddress(&domTriangles::domP::_Meta);
	_Meta->registerConstructor(domTriangles::domP::create);

	//	Add attribute: _value
 	{
		daeMetaAttribute *ma = new daeMetaArrayAttribute;
		ma->setName( "_value" );
		ma->setType( daeAtomicType::get("ListOfInts"));
		ma->setOffset( daeOffsetOf( domTriangles::domP , _value ));
		ma->setContainer( _Meta );
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domTriangles::domP));
	_Meta->validate();

	return _Meta;
}


daeMetaElement * domTriangles::_Meta = NULL;
daeMetaElement * domTriangles::domP::_Meta = NULL;


