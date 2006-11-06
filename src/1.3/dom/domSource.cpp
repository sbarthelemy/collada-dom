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
#include <dom/domSource.h>
#include <dae/daeMetaCMPolicy.h>
#include <dae/daeMetaSequence.h>
#include <dae/daeMetaChoice.h>
#include <dae/daeMetaGroup.h>
#include <dae/daeMetaAny.h>
#include <dae/daeMetaElementAttribute.h>

daeElementRef
domSource::create(daeInt bytes)
{
	domSourceRef ref = new(bytes) domSource;
	return ref;
}


daeMetaElement *
domSource::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "source" );
	_Meta->registerClass(domSource::create, &_Meta);

	daeMetaCMPolicy *cm = NULL;
	daeMetaElementAttribute *mea = NULL;
	cm = new daeMetaSequence( _Meta, cm, 0, 1, 1 );

	cm = new daeMetaChoice( _Meta, cm, 0, 0, -1 );

	mea = new daeMetaElementArrayAttribute( _Meta, cm, 0, 1, 1 );
	mea->setName( "array" );
	mea->setOffset( daeOffsetOf(domSource,elemArray_array) );
	mea->setElementType( domArray::registerElement() );
	cm->appendChild( mea );
	
	mea = new daeMetaElementArrayAttribute( _Meta, cm, 0, 1, 1 );
	mea->setName( "bool_array" );
	mea->setOffset( daeOffsetOf(domSource,elemBool_array_array) );
	mea->setElementType( domBool_array::registerElement() );
	cm->appendChild( mea );
	
	mea = new daeMetaElementArrayAttribute( _Meta, cm, 0, 1, 1 );
	mea->setName( "float_array" );
	mea->setOffset( daeOffsetOf(domSource,elemFloat_array_array) );
	mea->setElementType( domFloat_array::registerElement() );
	cm->appendChild( mea );
	
	mea = new daeMetaElementArrayAttribute( _Meta, cm, 0, 1, 1 );
	mea->setName( "int_array" );
	mea->setOffset( daeOffsetOf(domSource,elemInt_array_array) );
	mea->setElementType( domInt_array::registerElement() );
	cm->appendChild( mea );
	
	mea = new daeMetaElementArrayAttribute( _Meta, cm, 0, 1, 1 );
	mea->setName( "Name_array" );
	mea->setOffset( daeOffsetOf(domSource,elemName_array_array) );
	mea->setElementType( domName_array::registerElement() );
	cm->appendChild( mea );
	
	cm->setMaxOrdinal( 0 );
	cm->getParent()->appendChild( cm );
	cm = cm->getParent();
	
	mea = new daeMetaElementArrayAttribute( _Meta, cm, 3001, 1, -1 );
	mea->setName( "technique" );
	mea->setOffset( daeOffsetOf(domSource,elemTechnique_array) );
	mea->setElementType( domSource::domTechnique::registerElement() );
	cm->appendChild( mea );
	
	cm->setMaxOrdinal( 3001 );
	_Meta->setCMRoot( cm );	
	// Ordered list of sub-elements
    _Meta->addContents(daeOffsetOf(domSource,_contents));
    _Meta->addContentsOrder(daeOffsetOf(domSource,_contentsOrder));


	//	Add attribute: id
 	{
		daeMetaAttribute *ma = new daeMetaAttribute;
		ma->setName( "id" );
		ma->setType( daeAtomicType::get("xsID"));
		ma->setOffset( daeOffsetOf( domSource , attrId ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: name
 	{
		daeMetaAttribute *ma = new daeMetaAttribute;
		ma->setName( "name" );
		ma->setType( daeAtomicType::get("xsNCName"));
		ma->setOffset( daeOffsetOf( domSource , attrName ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domSource));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domSource::domTechnique::create(daeInt bytes)
{
	domSource::domTechniqueRef ref = new(bytes) domSource::domTechnique;
	return ref;
}


daeMetaElement *
domSource::domTechnique::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "technique" );
	_Meta->registerClass(domSource::domTechnique::create, &_Meta);

	_Meta->setIsInnerClass( true );
	daeMetaCMPolicy *cm = NULL;
	daeMetaElementAttribute *mea = NULL;
	cm = new daeMetaSequence( _Meta, cm, 0, 1, 1 );

	mea = new daeMetaElementAttribute( _Meta, cm, 0, 0, 1 );
	mea->setName( "asset" );
	mea->setOffset( daeOffsetOf(domSource::domTechnique,elemAsset) );
	mea->setElementType( domAsset::registerElement() );
	cm->appendChild( mea );
	
	mea = new daeMetaElementArrayAttribute( _Meta, cm, 1, 0, -1 );
	mea->setName( "param" );
	mea->setOffset( daeOffsetOf(domSource::domTechnique,elemParam_array) );
	mea->setElementType( domParam::registerElement() );
	cm->appendChild( mea );
	
	mea = new daeMetaElementArrayAttribute( _Meta, cm, 2, 0, -1 );
	mea->setName( "accessor" );
	mea->setOffset( daeOffsetOf(domSource::domTechnique,elemAccessor_array) );
	mea->setElementType( domAccessor::registerElement() );
	cm->appendChild( mea );
	
	mea = new daeMetaElementAttribute( _Meta, cm, 3, 0, 1 );
	mea->setName( "combiner" );
	mea->setOffset( daeOffsetOf(domSource::domTechnique,elemCombiner) );
	mea->setElementType( domCombiner::registerElement() );
	cm->appendChild( mea );
	
	mea = new daeMetaElementAttribute( _Meta, cm, 4, 0, 1 );
	mea->setName( "joints" );
	mea->setOffset( daeOffsetOf(domSource::domTechnique,elemJoints) );
	mea->setElementType( domJoints::registerElement() );
	cm->appendChild( mea );
	
	mea = new daeMetaElementAttribute( _Meta, cm, 5, 0, 1 );
	mea->setName( "program" );
	mea->setOffset( daeOffsetOf(domSource::domTechnique,elemProgram) );
	mea->setElementType( domProgram::registerElement() );
	cm->appendChild( mea );
	
	cm->setMaxOrdinal( 5 );
	_Meta->setCMRoot( cm );	

	//	Add attribute: profile
 	{
		daeMetaAttribute *ma = new daeMetaAttribute;
		ma->setName( "profile" );
		ma->setType( daeAtomicType::get("xsString"));
		ma->setOffset( daeOffsetOf( domSource::domTechnique , attrProfile ));
		ma->setContainer( _Meta );
		ma->setIsRequired( true );
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domSource::domTechnique));
	_Meta->validate();

	return _Meta;
}


daeMetaElement * domSource::_Meta = NULL;
daeMetaElement * domSource::domTechnique::_Meta = NULL;


