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
#include <dae/daeMetaCMPolicy.h>
#include <dae/daeMetaSequence.h>
#include <dae/daeMetaChoice.h>
#include <dae/daeMetaGroup.h>
#include <dae/daeMetaAny.h>
#include <dae/daeMetaElementAttribute.h>

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
	_Meta->registerClass(domCombiner::create, &_Meta);

	daeMetaCMPolicy *cm = NULL;
	daeMetaElementAttribute *mea = NULL;
	cm = new daeMetaSequence( _Meta, cm, 0, 1, 1 );

	mea = new daeMetaElementArrayAttribute( _Meta, cm, 0, 2, -1 );
	mea->setName( "input" );
	mea->setOffset( daeOffsetOf(domCombiner,elemInput_array) );
	mea->setElementType( domInput::registerElement() );
	cm->appendChild( mea );
	
	mea = new daeMetaElementArrayAttribute( _Meta, cm, 1, 1, -1 );
	mea->setName( "v" );
	mea->setOffset( daeOffsetOf(domCombiner,elemV_array) );
	mea->setElementType( domCombiner::domV::registerElement() );
	cm->appendChild( mea );
	
	cm->setMaxOrdinal( 1 );
	_Meta->setCMRoot( cm );	

	//	Add attribute: count
 	{
		daeMetaAttribute *ma = new daeMetaAttribute;
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
	_Meta->registerClass(domCombiner::domV::create, &_Meta);

	_Meta->setIsInnerClass( true );
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


