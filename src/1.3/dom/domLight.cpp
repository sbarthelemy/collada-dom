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
#include <dom/domLight.h>

daeElementRef
domLight::create(daeInt bytes)
{
	domLightRef ref = new(bytes) domLight;
	return ref;
}


daeMetaElement *
domLight::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "light" );
	_Meta->setStaticPointerAddress(&domLight::_Meta);
	_Meta->registerConstructor(domLight::create);

	// Add elements: asset, param
    _Meta->appendElement(domAsset::registerElement(),daeOffsetOf(domLight,elemAsset));
    _Meta->appendArrayElement(domParam::registerElement(),daeOffsetOf(domLight,elemParam_array));

	//	Add attribute: id
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "id" );
		ma->setType( daeAtomicType::get("xsID"));
		ma->setOffset( daeOffsetOf( domLight , attrId ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: name
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "name" );
		ma->setType( daeAtomicType::get("xsNCName"));
		ma->setOffset( daeOffsetOf( domLight , attrName ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: type
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "type" );
		ma->setType( daeAtomicType::get("LightType"));
		ma->setOffset( daeOffsetOf( domLight , attrType ));
		ma->setContainer( _Meta );
		ma->setDefault( "POINT");
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domLight));
	_Meta->validate();

	return _Meta;
}


daeMetaElement * domLight::_Meta = NULL;


