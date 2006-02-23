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
#include <dom/domLibrary.h>

daeElementRef
domLibrary::create(daeInt bytes)
{
	domLibraryRef ref = new(bytes) domLibrary;
	return ref;
}


daeMetaElement *
domLibrary::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "library" );
	_Meta->setStaticPointerAddress(&domLibrary::_Meta);
	_Meta->registerConstructor(domLibrary::create);

	// Add elements: animation, camera, code, controller, geometry, image, light, material, program, texture
    _Meta->appendArrayElement(domAnimation::registerElement(),daeOffsetOf(domLibrary,elemAnimation_array));
    _Meta->appendArrayElement(domCamera::registerElement(),daeOffsetOf(domLibrary,elemCamera_array));
    _Meta->appendArrayElement(domCode::registerElement(),daeOffsetOf(domLibrary,elemCode_array));
    _Meta->appendArrayElement(domController::registerElement(),daeOffsetOf(domLibrary,elemController_array));
    _Meta->appendArrayElement(domGeometry::registerElement(),daeOffsetOf(domLibrary,elemGeometry_array));
    _Meta->appendArrayElement(domImage::registerElement(),daeOffsetOf(domLibrary,elemImage_array));
    _Meta->appendArrayElement(domLight::registerElement(),daeOffsetOf(domLibrary,elemLight_array));
    _Meta->appendArrayElement(domMaterial::registerElement(),daeOffsetOf(domLibrary,elemMaterial_array));
    _Meta->appendArrayElement(domProgram::registerElement(),daeOffsetOf(domLibrary,elemProgram_array));
    _Meta->appendArrayElement(domTexture::registerElement(),daeOffsetOf(domLibrary,elemTexture_array));
	// Ordered list of sub-elements
    _Meta->addContents(daeOffsetOf(domLibrary,_contents));


	//	Add attribute: id
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "id" );
		ma->setType( daeAtomicType::get("xsID"));
		ma->setOffset( daeOffsetOf( domLibrary , attrId ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: name
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "name" );
		ma->setType( daeAtomicType::get("xsNCName"));
		ma->setOffset( daeOffsetOf( domLibrary , attrName ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: type
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "type" );
		ma->setType( daeAtomicType::get("LibraryType"));
		ma->setOffset( daeOffsetOf( domLibrary , attrType ));
		ma->setContainer( _Meta );
		ma->setIsRequired( true );
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domLibrary));
	_Meta->validate();

	return _Meta;
}


daeMetaElement * domLibrary::_Meta = NULL;


