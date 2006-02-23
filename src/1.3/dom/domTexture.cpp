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
#include <dom/domTexture.h>

daeElementRef
domTexture::create(daeInt bytes)
{
	domTextureRef ref = new(bytes) domTexture;
	return ref;
}


daeMetaElement *
domTexture::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "texture" );
	_Meta->setStaticPointerAddress(&domTexture::_Meta);
	_Meta->registerConstructor(domTexture::create);

	// Add elements: asset, param, technique
    _Meta->appendElement(domAsset::registerElement(),daeOffsetOf(domTexture,elemAsset));
    _Meta->appendArrayElement(domParam::registerElement(),daeOffsetOf(domTexture,elemParam_array));
    _Meta->appendArrayElement(domTexture::domTechnique::registerElement(),daeOffsetOf(domTexture,elemTechnique_array));

	//	Add attribute: id
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "id" );
		ma->setType( daeAtomicType::get("xsID"));
		ma->setOffset( daeOffsetOf( domTexture , attrId ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: name
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "name" );
		ma->setType( daeAtomicType::get("xsNCName"));
		ma->setOffset( daeOffsetOf( domTexture , attrName ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domTexture));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domTexture::domTechnique::create(daeInt bytes)
{
	domTexture::domTechniqueRef ref = new(bytes) domTexture::domTechnique;
	return ref;
}


daeMetaElement *
domTexture::domTechnique::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "technique" );
	_Meta->setStaticPointerAddress(&domTexture::domTechnique::_Meta);
	_Meta->registerConstructor(domTexture::domTechnique::create);

	// Add elements: asset, param, input, program
    _Meta->appendElement(domAsset::registerElement(),daeOffsetOf(domTexture::domTechnique,elemAsset));
    _Meta->appendArrayElement(domParam::registerElement(),daeOffsetOf(domTexture::domTechnique,elemParam_array));
    _Meta->appendArrayElement(domTexture::domTechnique::domInput::registerElement(),daeOffsetOf(domTexture::domTechnique,elemInput_array));
    _Meta->appendElement(domProgram::registerElement(),daeOffsetOf(domTexture::domTechnique,elemProgram));

	//	Add attribute: profile
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "profile" );
		ma->setType( daeAtomicType::get("xsString"));
		ma->setOffset( daeOffsetOf( domTexture::domTechnique , attrProfile ));
		ma->setContainer( _Meta );
		ma->setIsRequired( true );
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domTexture::domTechnique));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domTexture::domTechnique::domInput::create(daeInt bytes)
{
	domTexture::domTechnique::domInputRef ref = new(bytes) domTexture::domTechnique::domInput;
	ref->attrSource.setContainer( (domTexture::domTechnique::domInput*)ref );
	return ref;
}


daeMetaElement *
domTexture::domTechnique::domInput::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "input" );
	_Meta->setStaticPointerAddress(&domTexture::domTechnique::domInput::_Meta);
	_Meta->registerConstructor(domTexture::domTechnique::domInput::create);


	//	Add attribute: semantic
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "semantic" );
		ma->setType( daeAtomicType::get("xsNMTOKEN"));
		ma->setOffset( daeOffsetOf( domTexture::domTechnique::domInput , attrSemantic ));
		ma->setContainer( _Meta );
		ma->setIsRequired( true );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: source
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "source" );
		ma->setType( daeAtomicType::get("xsAnyURI"));
		ma->setOffset( daeOffsetOf( domTexture::domTechnique::domInput , attrSource ));
		ma->setContainer( _Meta );
		ma->setIsRequired( true );
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domTexture::domTechnique::domInput));
	_Meta->validate();

	return _Meta;
}


daeMetaElement * domTexture::_Meta = NULL;
daeMetaElement * domTexture::domTechnique::_Meta = NULL;
daeMetaElement * domTexture::domTechnique::domInput::_Meta = NULL;


