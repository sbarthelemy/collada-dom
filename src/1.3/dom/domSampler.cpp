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
#include <dom/domSampler.h>

daeElementRef
domSampler::create(daeInt bytes)
{
	domSamplerRef ref = new(bytes) domSampler;
	return ref;
}


daeMetaElement *
domSampler::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "sampler" );
	_Meta->setStaticPointerAddress(&domSampler::_Meta);
	_Meta->registerConstructor(domSampler::create);

	// Add elements: input
    _Meta->appendArrayElement(domSampler::domInput::registerElement(),daeOffsetOf(domSampler,elemInput_array));

	//	Add attribute: id
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "id" );
		ma->setType( daeAtomicType::get("xsID"));
		ma->setOffset( daeOffsetOf( domSampler , attrId ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: name
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "name" );
		ma->setType( daeAtomicType::get("xsNCName"));
		ma->setOffset( daeOffsetOf( domSampler , attrName ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domSampler));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domSampler::domInput::create(daeInt bytes)
{
	domSampler::domInputRef ref = new(bytes) domSampler::domInput;
	ref->attrSource.setContainer( (domSampler::domInput*)ref );
	return ref;
}


daeMetaElement *
domSampler::domInput::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "input" );
	_Meta->setStaticPointerAddress(&domSampler::domInput::_Meta);
	_Meta->registerConstructor(domSampler::domInput::create);


	//	Add attribute: semantic
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "semantic" );
		ma->setType( daeAtomicType::get("xsNMTOKEN"));
		ma->setOffset( daeOffsetOf( domSampler::domInput , attrSemantic ));
		ma->setContainer( _Meta );
		ma->setIsRequired( true );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: source
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "source" );
		ma->setType( daeAtomicType::get("xsAnyURI"));
		ma->setOffset( daeOffsetOf( domSampler::domInput , attrSource ));
		ma->setContainer( _Meta );
		ma->setIsRequired( true );
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domSampler::domInput));
	_Meta->validate();

	return _Meta;
}


daeMetaElement * domSampler::_Meta = NULL;
daeMetaElement * domSampler::domInput::_Meta = NULL;


