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
#include <dae/daeMetaCMPolicy.h>
#include <dae/daeMetaSequence.h>
#include <dae/daeMetaChoice.h>
#include <dae/daeMetaGroup.h>
#include <dae/daeMetaAny.h>
#include <dae/daeMetaElementAttribute.h>

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
	_Meta->registerConstructor(domCamera::create);

	daeMetaCMPolicy *cm = NULL;
	daeMetaElementAttribute *mea = NULL;
	cm = new daeMetaSequence( _Meta, cm, 0, 1, 1 );

	mea = new daeMetaElementArrayAttribute( _Meta, cm, 0, 1, -1 );
	mea->setName( "technique" );
	mea->setOffset( daeOffsetOf(domCamera,elemTechnique_array) );
	mea->setElementType( domCamera::domTechnique::registerElement() );
	cm->appendChild( mea );
	
	cm->setMaxOrdinal( 0 );
	_Meta->setCMRoot( cm );	

	//	Add attribute: id
 	{
		daeMetaAttribute *ma = new daeMetaAttribute;
		ma->setName( "id" );
		ma->setType( daeAtomicType::get("xsID"));
		ma->setOffset( daeOffsetOf( domCamera , attrId ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: name
 	{
		daeMetaAttribute *ma = new daeMetaAttribute;
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
	_Meta->registerConstructor(domCamera::domTechnique::create);

	_Meta->setIsInnerClass( true );
	daeMetaCMPolicy *cm = NULL;
	daeMetaElementAttribute *mea = NULL;
	cm = new daeMetaSequence( _Meta, cm, 0, 1, 1 );

	mea = new daeMetaElementAttribute( _Meta, cm, 0, 0, 1 );
	mea->setName( "asset" );
	mea->setOffset( daeOffsetOf(domCamera::domTechnique,elemAsset) );
	mea->setElementType( domAsset::registerElement() );
	cm->appendChild( mea );
	
	mea = new daeMetaElementAttribute( _Meta, cm, 1, 1, 1 );
	mea->setName( "optics" );
	mea->setOffset( daeOffsetOf(domCamera::domTechnique,elemOptics) );
	mea->setElementType( domCamera::domTechnique::domOptics::registerElement() );
	cm->appendChild( mea );
	
	mea = new daeMetaElementAttribute( _Meta, cm, 2, 0, 1 );
	mea->setName( "imager" );
	mea->setOffset( daeOffsetOf(domCamera::domTechnique,elemImager) );
	mea->setElementType( domCamera::domTechnique::domImager::registerElement() );
	cm->appendChild( mea );
	
	cm->setMaxOrdinal( 2 );
	_Meta->setCMRoot( cm );	

	//	Add attribute: profile
 	{
		daeMetaAttribute *ma = new daeMetaAttribute;
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
	_Meta->registerConstructor(domCamera::domTechnique::domOptics::create);

	_Meta->setIsInnerClass( true );
	daeMetaCMPolicy *cm = NULL;
	daeMetaElementAttribute *mea = NULL;
	cm = new daeMetaSequence( _Meta, cm, 0, 1, 1 );

	mea = new daeMetaElementAttribute( _Meta, cm, 0, 1, 1 );
	mea->setName( "program" );
	mea->setOffset( daeOffsetOf(domCamera::domTechnique::domOptics,elemProgram) );
	mea->setElementType( domProgram::registerElement() );
	cm->appendChild( mea );
	
	cm->setMaxOrdinal( 0 );
	_Meta->setCMRoot( cm );	
	
	
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
	_Meta->registerConstructor(domCamera::domTechnique::domImager::create);

	_Meta->setIsInnerClass( true );
	daeMetaCMPolicy *cm = NULL;
	daeMetaElementAttribute *mea = NULL;
	cm = new daeMetaSequence( _Meta, cm, 0, 1, 1 );

	mea = new daeMetaElementAttribute( _Meta, cm, 0, 1, 1 );
	mea->setName( "program" );
	mea->setOffset( daeOffsetOf(domCamera::domTechnique::domImager,elemProgram) );
	mea->setElementType( domProgram::registerElement() );
	cm->appendChild( mea );
	
	cm->setMaxOrdinal( 0 );
	_Meta->setCMRoot( cm );	
	
	
	_Meta->setElementSize(sizeof(domCamera::domTechnique::domImager));
	_Meta->validate();

	return _Meta;
}


daeMetaElement * domCamera::_Meta = NULL;
daeMetaElement * domCamera::domTechnique::_Meta = NULL;
daeMetaElement * domCamera::domTechnique::domOptics::_Meta = NULL;
daeMetaElement * domCamera::domTechnique::domImager::_Meta = NULL;


