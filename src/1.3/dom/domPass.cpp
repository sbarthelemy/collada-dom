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
#include <dom/domPass.h>

daeElementRef
domPass::create(daeInt bytes)
{
	domPassRef ref = new(bytes) domPass;
	return ref;
}


daeMetaElement *
domPass::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "pass" );
	_Meta->setStaticPointerAddress(&domPass::_Meta);
	_Meta->registerConstructor(domPass::create);

	// Add elements: param, input, program
    _Meta->appendArrayElement(domParam::registerElement(),daeOffsetOf(domPass,elemParam_array));
    _Meta->appendArrayElement(domPass::domInput::registerElement(),daeOffsetOf(domPass,elemInput_array));
    _Meta->appendElement(domProgram::registerElement(),daeOffsetOf(domPass,elemProgram));
	
	
	_Meta->setElementSize(sizeof(domPass));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domPass::domInput::create(daeInt bytes)
{
	domPass::domInputRef ref = new(bytes) domPass::domInput;
	ref->attrSource.setContainer( (domPass::domInput*)ref );
	return ref;
}


daeMetaElement *
domPass::domInput::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "input" );
	_Meta->setStaticPointerAddress(&domPass::domInput::_Meta);
	_Meta->registerConstructor(domPass::domInput::create);


	//	Add attribute: semantic
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "semantic" );
		ma->setType( daeAtomicType::get("xsNMTOKEN"));
		ma->setOffset( daeOffsetOf( domPass::domInput , attrSemantic ));
		ma->setContainer( _Meta );
		ma->setIsRequired( true );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: source
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "source" );
		ma->setType( daeAtomicType::get("xsAnyURI"));
		ma->setOffset( daeOffsetOf( domPass::domInput , attrSource ));
		ma->setContainer( _Meta );
		ma->setIsRequired( true );
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domPass::domInput));
	_Meta->validate();

	return _Meta;
}


daeMetaElement * domPass::_Meta = NULL;
daeMetaElement * domPass::domInput::_Meta = NULL;


