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
#include "intFx_surface_format_hint_common.h"
#include <dom/domFx_surface_format_hint_common.h>

daeMetaElement * intFx_surface_format_hint_common::_Meta = NULL;
daeMetaElement * intFx_surface_format_hint_common::intChannels::_Meta = NULL;
daeMetaElement * intFx_surface_format_hint_common::intRange::_Meta = NULL;
daeMetaElement * intFx_surface_format_hint_common::intPrecision::_Meta = NULL;
daeMetaElement * intFx_surface_format_hint_common::intOption::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intFx_surface_format_hint_common::create(daeInt bytes)
{
	intFx_surface_format_hint_commonRef ref = new(bytes) intFx_surface_format_hint_common;
	return ref;
}

daeMetaElement *
intFx_surface_format_hint_common::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fx_surface_format_hint_common" );
	_Meta->registerClass(intFx_surface_format_hint_common::create, &_Meta);

	domFx_surface_format_hint_common::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_surface_format_hint_common));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_surface_format_hint_common::intChannels::create(daeInt bytes)
{
	intFx_surface_format_hint_common::intChannelsRef ref = new(bytes) intFx_surface_format_hint_common::intChannels;
	return ref;
}

daeMetaElement *
intFx_surface_format_hint_common::intChannels::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "channels" );
	_Meta->registerClass(intFx_surface_format_hint_common::intChannels::create, &_Meta);

	domFx_surface_format_hint_common::domChannels::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_surface_format_hint_common::intChannels));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_surface_format_hint_common::intRange::create(daeInt bytes)
{
	intFx_surface_format_hint_common::intRangeRef ref = new(bytes) intFx_surface_format_hint_common::intRange;
	return ref;
}

daeMetaElement *
intFx_surface_format_hint_common::intRange::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "range" );
	_Meta->registerClass(intFx_surface_format_hint_common::intRange::create, &_Meta);

	domFx_surface_format_hint_common::domRange::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_surface_format_hint_common::intRange));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_surface_format_hint_common::intPrecision::create(daeInt bytes)
{
	intFx_surface_format_hint_common::intPrecisionRef ref = new(bytes) intFx_surface_format_hint_common::intPrecision;
	return ref;
}

daeMetaElement *
intFx_surface_format_hint_common::intPrecision::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "precision" );
	_Meta->registerClass(intFx_surface_format_hint_common::intPrecision::create, &_Meta);

	domFx_surface_format_hint_common::domPrecision::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_surface_format_hint_common::intPrecision));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_surface_format_hint_common::intOption::create(daeInt bytes)
{
	intFx_surface_format_hint_common::intOptionRef ref = new(bytes) intFx_surface_format_hint_common::intOption;
	return ref;
}

daeMetaElement *
intFx_surface_format_hint_common::intOption::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "option" );
	_Meta->registerClass(intFx_surface_format_hint_common::intOption::create, &_Meta);

	domFx_surface_format_hint_common::domOption::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_surface_format_hint_common::intOption));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// CONSTRUCTOR AND DESTRUCTOR
intFx_surface_format_hint_common::intFx_surface_format_hint_common() {
}

intFx_surface_format_hint_common::~intFx_surface_format_hint_common() {
}

// IMPORT

void
intFx_surface_format_hint_common::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_surface_format_hint_common::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_surface_format_hint_common::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_surface_format_hint_common::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_surface_format_hint_common::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_surface_format_hint_common::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_surface_format_hint_common::intChannels::intChannels() {
}

intFx_surface_format_hint_common::intChannels::~intChannels() {
}

// IMPORT

void
intFx_surface_format_hint_common::intChannels::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_surface_format_hint_common::intChannels::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_surface_format_hint_common::intChannels::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_surface_format_hint_common::intChannels::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_surface_format_hint_common::intChannels::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_surface_format_hint_common::intChannels::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_surface_format_hint_common::intRange::intRange() {
}

intFx_surface_format_hint_common::intRange::~intRange() {
}

// IMPORT

void
intFx_surface_format_hint_common::intRange::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_surface_format_hint_common::intRange::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_surface_format_hint_common::intRange::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_surface_format_hint_common::intRange::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_surface_format_hint_common::intRange::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_surface_format_hint_common::intRange::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_surface_format_hint_common::intPrecision::intPrecision() {
}

intFx_surface_format_hint_common::intPrecision::~intPrecision() {
}

// IMPORT

void
intFx_surface_format_hint_common::intPrecision::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_surface_format_hint_common::intPrecision::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_surface_format_hint_common::intPrecision::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_surface_format_hint_common::intPrecision::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_surface_format_hint_common::intPrecision::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_surface_format_hint_common::intPrecision::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_surface_format_hint_common::intOption::intOption() {
}

intFx_surface_format_hint_common::intOption::~intOption() {
}

// IMPORT

void
intFx_surface_format_hint_common::intOption::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_surface_format_hint_common::intOption::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_surface_format_hint_common::intOption::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_surface_format_hint_common::intOption::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_surface_format_hint_common::intOption::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_surface_format_hint_common::intOption::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}


