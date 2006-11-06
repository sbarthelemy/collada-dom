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
#include "intFx_surface_init_cube_common.h"
#include <dom/domFx_surface_init_cube_common.h>

daeMetaElement * intFx_surface_init_cube_common::_Meta = NULL;
daeMetaElement * intFx_surface_init_cube_common::intAll::_Meta = NULL;
daeMetaElement * intFx_surface_init_cube_common::intPrimary::_Meta = NULL;
daeMetaElement * intFx_surface_init_cube_common::intPrimary::intOrder::_Meta = NULL;
daeMetaElement * intFx_surface_init_cube_common::intFace::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intFx_surface_init_cube_common::create(daeInt bytes)
{
	intFx_surface_init_cube_commonRef ref = new(bytes) intFx_surface_init_cube_common;
	return ref;
}

daeMetaElement *
intFx_surface_init_cube_common::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fx_surface_init_cube_common" );
	_Meta->registerClass(intFx_surface_init_cube_common::create, &_Meta);

	domFx_surface_init_cube_common::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_surface_init_cube_common));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_surface_init_cube_common::intAll::create(daeInt bytes)
{
	intFx_surface_init_cube_common::intAllRef ref = new(bytes) intFx_surface_init_cube_common::intAll;
	return ref;
}

daeMetaElement *
intFx_surface_init_cube_common::intAll::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "all" );
	_Meta->registerClass(intFx_surface_init_cube_common::intAll::create, &_Meta);

	domFx_surface_init_cube_common::domAll::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_surface_init_cube_common::intAll));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_surface_init_cube_common::intPrimary::create(daeInt bytes)
{
	intFx_surface_init_cube_common::intPrimaryRef ref = new(bytes) intFx_surface_init_cube_common::intPrimary;
	return ref;
}

daeMetaElement *
intFx_surface_init_cube_common::intPrimary::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "primary" );
	_Meta->registerClass(intFx_surface_init_cube_common::intPrimary::create, &_Meta);

	domFx_surface_init_cube_common::domPrimary::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_surface_init_cube_common::intPrimary));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_surface_init_cube_common::intPrimary::intOrder::create(daeInt bytes)
{
	intFx_surface_init_cube_common::intPrimary::intOrderRef ref = new(bytes) intFx_surface_init_cube_common::intPrimary::intOrder;
	return ref;
}

daeMetaElement *
intFx_surface_init_cube_common::intPrimary::intOrder::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "order" );
	_Meta->registerClass(intFx_surface_init_cube_common::intPrimary::intOrder::create, &_Meta);

	domFx_surface_init_cube_common::domPrimary::domOrder::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_surface_init_cube_common::intPrimary::intOrder));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_surface_init_cube_common::intFace::create(daeInt bytes)
{
	intFx_surface_init_cube_common::intFaceRef ref = new(bytes) intFx_surface_init_cube_common::intFace;
	return ref;
}

daeMetaElement *
intFx_surface_init_cube_common::intFace::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "face" );
	_Meta->registerClass(intFx_surface_init_cube_common::intFace::create, &_Meta);

	domFx_surface_init_cube_common::domFace::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_surface_init_cube_common::intFace));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// CONSTRUCTOR AND DESTRUCTOR
intFx_surface_init_cube_common::intFx_surface_init_cube_common() {
}

intFx_surface_init_cube_common::~intFx_surface_init_cube_common() {
}

// IMPORT

void
intFx_surface_init_cube_common::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_surface_init_cube_common::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_surface_init_cube_common::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_surface_init_cube_common::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_surface_init_cube_common::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_surface_init_cube_common::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_surface_init_cube_common::intAll::intAll() {
}

intFx_surface_init_cube_common::intAll::~intAll() {
}

// IMPORT

void
intFx_surface_init_cube_common::intAll::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_surface_init_cube_common::intAll::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_surface_init_cube_common::intAll::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_surface_init_cube_common::intAll::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_surface_init_cube_common::intAll::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_surface_init_cube_common::intAll::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_surface_init_cube_common::intPrimary::intPrimary() {
}

intFx_surface_init_cube_common::intPrimary::~intPrimary() {
}

// IMPORT

void
intFx_surface_init_cube_common::intPrimary::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_surface_init_cube_common::intPrimary::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_surface_init_cube_common::intPrimary::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_surface_init_cube_common::intPrimary::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_surface_init_cube_common::intPrimary::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_surface_init_cube_common::intPrimary::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_surface_init_cube_common::intPrimary::intOrder::intOrder() {
}

intFx_surface_init_cube_common::intPrimary::intOrder::~intOrder() {
}

// IMPORT

void
intFx_surface_init_cube_common::intPrimary::intOrder::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_surface_init_cube_common::intPrimary::intOrder::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_surface_init_cube_common::intPrimary::intOrder::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_surface_init_cube_common::intPrimary::intOrder::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_surface_init_cube_common::intPrimary::intOrder::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_surface_init_cube_common::intPrimary::intOrder::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_surface_init_cube_common::intFace::intFace() {
}

intFx_surface_init_cube_common::intFace::~intFace() {
}

// IMPORT

void
intFx_surface_init_cube_common::intFace::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_surface_init_cube_common::intFace::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_surface_init_cube_common::intFace::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_surface_init_cube_common::intFace::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_surface_init_cube_common::intFace::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_surface_init_cube_common::intFace::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}


