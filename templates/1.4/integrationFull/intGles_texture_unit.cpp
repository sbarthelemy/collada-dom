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
#include "intGles_texture_unit.h"
#include <dom/domGles_texture_unit.h>

daeMetaElement * intGles_texture_unit::_Meta = NULL;
daeMetaElement * intGles_texture_unit::intSurface::_Meta = NULL;
daeMetaElement * intGles_texture_unit::intSampler_state::_Meta = NULL;
daeMetaElement * intGles_texture_unit::intTexcoord::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intGles_texture_unit::create(daeInt bytes)
{
	intGles_texture_unitRef ref = new(bytes) intGles_texture_unit;
	return ref;
}

daeMetaElement *
intGles_texture_unit::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "gles_texture_unit" );
	_Meta->registerClass(intGles_texture_unit::create, &_Meta);

	domGles_texture_unit::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_texture_unit));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_texture_unit::intSurface::create(daeInt bytes)
{
	intGles_texture_unit::intSurfaceRef ref = new(bytes) intGles_texture_unit::intSurface;
	return ref;
}

daeMetaElement *
intGles_texture_unit::intSurface::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "surface" );
	_Meta->registerClass(intGles_texture_unit::intSurface::create, &_Meta);

	domGles_texture_unit::domSurface::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_texture_unit::intSurface));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_texture_unit::intSampler_state::create(daeInt bytes)
{
	intGles_texture_unit::intSampler_stateRef ref = new(bytes) intGles_texture_unit::intSampler_state;
	return ref;
}

daeMetaElement *
intGles_texture_unit::intSampler_state::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "sampler_state" );
	_Meta->registerClass(intGles_texture_unit::intSampler_state::create, &_Meta);

	domGles_texture_unit::domSampler_state::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_texture_unit::intSampler_state));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_texture_unit::intTexcoord::create(daeInt bytes)
{
	intGles_texture_unit::intTexcoordRef ref = new(bytes) intGles_texture_unit::intTexcoord;
	return ref;
}

daeMetaElement *
intGles_texture_unit::intTexcoord::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "texcoord" );
	_Meta->registerClass(intGles_texture_unit::intTexcoord::create, &_Meta);

	domGles_texture_unit::domTexcoord::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_texture_unit::intTexcoord));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// CONSTRUCTOR AND DESTRUCTOR
intGles_texture_unit::intGles_texture_unit() {
}

intGles_texture_unit::~intGles_texture_unit() {
}

// IMPORT

void
intGles_texture_unit::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_texture_unit::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_texture_unit::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_texture_unit::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_texture_unit::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_texture_unit::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_texture_unit::intSurface::intSurface() {
}

intGles_texture_unit::intSurface::~intSurface() {
}

// IMPORT

void
intGles_texture_unit::intSurface::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_texture_unit::intSurface::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_texture_unit::intSurface::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_texture_unit::intSurface::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_texture_unit::intSurface::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_texture_unit::intSurface::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_texture_unit::intSampler_state::intSampler_state() {
}

intGles_texture_unit::intSampler_state::~intSampler_state() {
}

// IMPORT

void
intGles_texture_unit::intSampler_state::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_texture_unit::intSampler_state::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_texture_unit::intSampler_state::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_texture_unit::intSampler_state::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_texture_unit::intSampler_state::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_texture_unit::intSampler_state::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_texture_unit::intTexcoord::intTexcoord() {
}

intGles_texture_unit::intTexcoord::~intTexcoord() {
}

// IMPORT

void
intGles_texture_unit::intTexcoord::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_texture_unit::intTexcoord::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_texture_unit::intTexcoord::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_texture_unit::intTexcoord::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_texture_unit::intTexcoord::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_texture_unit::intTexcoord::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}


