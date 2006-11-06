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
#include "intFx_surface_init_common.h"
#include <dom/domFx_surface_init_common.h>

daeMetaElement * intFx_surface_init_common::_Meta = NULL;
daeMetaElement * intFx_surface_init_common::intInit_as_null::_Meta = NULL;
daeMetaElement * intFx_surface_init_common::intInit_as_target::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intFx_surface_init_common::create(daeInt bytes)
{
	intFx_surface_init_commonRef ref = new(bytes) intFx_surface_init_common;
	return ref;
}

daeMetaElement *
intFx_surface_init_common::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fx_surface_init_common" );
	_Meta->registerClass(intFx_surface_init_common::create, &_Meta);

	domFx_surface_init_common::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_surface_init_common));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_surface_init_common::intInit_as_null::create(daeInt bytes)
{
	intFx_surface_init_common::intInit_as_nullRef ref = new(bytes) intFx_surface_init_common::intInit_as_null;
	return ref;
}

daeMetaElement *
intFx_surface_init_common::intInit_as_null::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "init_as_null" );
	_Meta->registerClass(intFx_surface_init_common::intInit_as_null::create, &_Meta);

	domFx_surface_init_common::domInit_as_null::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_surface_init_common::intInit_as_null));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_surface_init_common::intInit_as_target::create(daeInt bytes)
{
	intFx_surface_init_common::intInit_as_targetRef ref = new(bytes) intFx_surface_init_common::intInit_as_target;
	return ref;
}

daeMetaElement *
intFx_surface_init_common::intInit_as_target::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "init_as_target" );
	_Meta->registerClass(intFx_surface_init_common::intInit_as_target::create, &_Meta);

	domFx_surface_init_common::domInit_as_target::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_surface_init_common::intInit_as_target));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// CONSTRUCTOR AND DESTRUCTOR
intFx_surface_init_common::intFx_surface_init_common() {
}

intFx_surface_init_common::~intFx_surface_init_common() {
}

// IMPORT

void
intFx_surface_init_common::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_surface_init_common::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_surface_init_common::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_surface_init_common::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_surface_init_common::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_surface_init_common::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_surface_init_common::intInit_as_null::intInit_as_null() {
}

intFx_surface_init_common::intInit_as_null::~intInit_as_null() {
}

// IMPORT

void
intFx_surface_init_common::intInit_as_null::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_surface_init_common::intInit_as_null::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_surface_init_common::intInit_as_null::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_surface_init_common::intInit_as_null::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_surface_init_common::intInit_as_null::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_surface_init_common::intInit_as_null::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_surface_init_common::intInit_as_target::intInit_as_target() {
}

intFx_surface_init_common::intInit_as_target::~intInit_as_target() {
}

// IMPORT

void
intFx_surface_init_common::intInit_as_target::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_surface_init_common::intInit_as_target::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_surface_init_common::intInit_as_target::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_surface_init_common::intInit_as_target::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_surface_init_common::intInit_as_target::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_surface_init_common::intInit_as_target::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}


