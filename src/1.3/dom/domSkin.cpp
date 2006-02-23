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
#include <dom/domSkin.h>

daeElementRef
domSkin::create(daeInt bytes)
{
	domSkinRef ref = new(bytes) domSkin;
	return ref;
}


daeMetaElement *
domSkin::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "skin" );
	_Meta->setStaticPointerAddress(&domSkin::_Meta);
	_Meta->registerConstructor(domSkin::create);

	// Add elements: source, vertices
    _Meta->appendArrayElement(domSource::registerElement(),daeOffsetOf(domSkin,elemSource_array));
    _Meta->appendElement(domVertices::registerElement(),daeOffsetOf(domSkin,elemVertices));

	//	Add attribute: id
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "id" );
		ma->setType( daeAtomicType::get("xsID"));
		ma->setOffset( daeOffsetOf( domSkin , attrId ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: name
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "name" );
		ma->setType( daeAtomicType::get("xsNCName"));
		ma->setOffset( daeOffsetOf( domSkin , attrName ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domSkin));
	_Meta->validate();

	return _Meta;
}


daeMetaElement * domSkin::_Meta = NULL;


