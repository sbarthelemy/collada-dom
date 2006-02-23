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
#include <dom/domCombiner.h>

daeElementRef
domCombiner::create(daeInt bytes)
{
	domCombinerRef ref = new(bytes) domCombiner;
	return ref;
}


daeMetaElement *
domCombiner::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "combiner" );
	_Meta->setStaticPointerAddress(&domCombiner::_Meta);
	_Meta->registerConstructor(domCombiner::create);

	// Add elements: input, v
    _Meta->appendArrayElement(domInput::registerElement(),daeOffsetOf(domCombiner,elemInput_array));
    _Meta->appendArrayElement(domCombiner::domV::registerElement(),daeOffsetOf(domCombiner,elemV_array));

	//	Add attribute: count
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "count" );
		ma->setType( daeAtomicType::get("xsNonNegativeInteger"));
		ma->setOffset( daeOffsetOf( domCombiner , attrCount ));
		ma->setContainer( _Meta );
		ma->setIsRequired( true );
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domCombiner));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domCombiner::domV::create(daeInt bytes)
{
	domCombiner::domVRef ref = new(bytes) domCombiner::domV;
	return ref;
}


daeMetaElement *
domCombiner::domV::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "v" );
	_Meta->setStaticPointerAddress(&domCombiner::domV::_Meta);
	_Meta->registerConstructor(domCombiner::domV::create);

	//	Add attribute: _value
 	{
		daeMetaAttribute *ma = new daeMetaArrayAttribute;
		ma->setName( "_value" );
		ma->setType( daeAtomicType::get("ListOfInts"));
		ma->setOffset( daeOffsetOf( domCombiner::domV , _value ));
		ma->setContainer( _Meta );
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domCombiner::domV));
	_Meta->validate();

	return _Meta;
}


daeMetaElement * domCombiner::_Meta = NULL;
daeMetaElement * domCombiner::domV::_Meta = NULL;


