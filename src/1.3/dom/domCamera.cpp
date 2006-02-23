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
#include <dom/domCamera.h>

daeElementRef
domCamera::create(daeInt bytes)
{
	domCameraRef ref = new(bytes) domCamera;
	return ref;
}


daeMetaElement *
domCamera::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "camera" );
	_Meta->setStaticPointerAddress(&domCamera::_Meta);
	_Meta->registerConstructor(domCamera::create);

	// Add elements: technique
    _Meta->appendArrayElement(domCamera::domTechnique::registerElement(),daeOffsetOf(domCamera,elemTechnique_array));

	//	Add attribute: id
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "id" );
		ma->setType( daeAtomicType::get("xsID"));
		ma->setOffset( daeOffsetOf( domCamera , attrId ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: name
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "name" );
		ma->setType( daeAtomicType::get("xsNCName"));
		ma->setOffset( daeOffsetOf( domCamera , attrName ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domCamera));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domCamera::domTechnique::create(daeInt bytes)
{
	domCamera::domTechniqueRef ref = new(bytes) domCamera::domTechnique;
	return ref;
}


daeMetaElement *
domCamera::domTechnique::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "technique" );
	_Meta->setStaticPointerAddress(&domCamera::domTechnique::_Meta);
	_Meta->registerConstructor(domCamera::domTechnique::create);

	// Add elements: asset, optics, imager
    _Meta->appendElement(domAsset::registerElement(),daeOffsetOf(domCamera::domTechnique,elemAsset));
    _Meta->appendElement(domCamera::domTechnique::domOptics::registerElement(),daeOffsetOf(domCamera::domTechnique,elemOptics));
    _Meta->appendElement(domCamera::domTechnique::domImager::registerElement(),daeOffsetOf(domCamera::domTechnique,elemImager));

	//	Add attribute: profile
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "profile" );
		ma->setType( daeAtomicType::get("xsString"));
		ma->setOffset( daeOffsetOf( domCamera::domTechnique , attrProfile ));
		ma->setContainer( _Meta );
		ma->setIsRequired( true );
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domCamera::domTechnique));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domCamera::domTechnique::domOptics::create(daeInt bytes)
{
	domCamera::domTechnique::domOpticsRef ref = new(bytes) domCamera::domTechnique::domOptics;
	return ref;
}


daeMetaElement *
domCamera::domTechnique::domOptics::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "optics" );
	_Meta->setStaticPointerAddress(&domCamera::domTechnique::domOptics::_Meta);
	_Meta->registerConstructor(domCamera::domTechnique::domOptics::create);

	// Add elements: program
    _Meta->appendElement(domProgram::registerElement(),daeOffsetOf(domCamera::domTechnique::domOptics,elemProgram));
	
	
	_Meta->setElementSize(sizeof(domCamera::domTechnique::domOptics));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domCamera::domTechnique::domImager::create(daeInt bytes)
{
	domCamera::domTechnique::domImagerRef ref = new(bytes) domCamera::domTechnique::domImager;
	return ref;
}


daeMetaElement *
domCamera::domTechnique::domImager::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "imager" );
	_Meta->setStaticPointerAddress(&domCamera::domTechnique::domImager::_Meta);
	_Meta->registerConstructor(domCamera::domTechnique::domImager::create);

	// Add elements: program
    _Meta->appendElement(domProgram::registerElement(),daeOffsetOf(domCamera::domTechnique::domImager,elemProgram));
	
	
	_Meta->setElementSize(sizeof(domCamera::domTechnique::domImager));
	_Meta->validate();

	return _Meta;
}


daeMetaElement * domCamera::_Meta = NULL;
daeMetaElement * domCamera::domTechnique::_Meta = NULL;
daeMetaElement * domCamera::domTechnique::domOptics::_Meta = NULL;
daeMetaElement * domCamera::domTechnique::domImager::_Meta = NULL;


