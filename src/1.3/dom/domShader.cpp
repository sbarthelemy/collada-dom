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
#include <dom/domShader.h>

daeElementRef
domShader::create(daeInt bytes)
{
	domShaderRef ref = new(bytes) domShader;
	return ref;
}


daeMetaElement *
domShader::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "shader" );
	_Meta->setStaticPointerAddress(&domShader::_Meta);
	_Meta->registerConstructor(domShader::create);

	// Add elements: param, technique
    _Meta->appendArrayElement(domParam::registerElement(),daeOffsetOf(domShader,elemParam_array));
    _Meta->appendArrayElement(domShader::domTechnique::registerElement(),daeOffsetOf(domShader,elemTechnique_array));

	//	Add attribute: id
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "id" );
		ma->setType( daeAtomicType::get("xsID"));
		ma->setOffset( daeOffsetOf( domShader , attrId ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: name
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "name" );
		ma->setType( daeAtomicType::get("xsNCName"));
		ma->setOffset( daeOffsetOf( domShader , attrName ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domShader));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domShader::domTechnique::create(daeInt bytes)
{
	domShader::domTechniqueRef ref = new(bytes) domShader::domTechnique;
	return ref;
}


daeMetaElement *
domShader::domTechnique::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "technique" );
	_Meta->setStaticPointerAddress(&domShader::domTechnique::_Meta);
	_Meta->registerConstructor(domShader::domTechnique::create);

	// Add elements: asset, param, pass, program
    _Meta->appendElement(domAsset::registerElement(),daeOffsetOf(domShader::domTechnique,elemAsset));
    _Meta->appendArrayElement(domParam::registerElement(),daeOffsetOf(domShader::domTechnique,elemParam_array));
    _Meta->appendArrayElement(domPass::registerElement(),daeOffsetOf(domShader::domTechnique,elemPass_array));
    _Meta->appendElement(domProgram::registerElement(),daeOffsetOf(domShader::domTechnique,elemProgram));

	//	Add attribute: profile
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "profile" );
		ma->setType( daeAtomicType::get("xsString"));
		ma->setOffset( daeOffsetOf( domShader::domTechnique , attrProfile ));
		ma->setContainer( _Meta );
		ma->setIsRequired( true );
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domShader::domTechnique));
	_Meta->validate();

	return _Meta;
}


daeMetaElement * domShader::_Meta = NULL;
daeMetaElement * domShader::domTechnique::_Meta = NULL;


