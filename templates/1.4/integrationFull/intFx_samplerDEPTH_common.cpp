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
#include "intFx_samplerDEPTH_common.h"
#include <dom/domFx_samplerDEPTH_common.h>

daeMetaElement * intFx_samplerDEPTH_common::_Meta = NULL;
daeMetaElement * intFx_samplerDEPTH_common::intSource::_Meta = NULL;
daeMetaElement * intFx_samplerDEPTH_common::intWrap_s::_Meta = NULL;
daeMetaElement * intFx_samplerDEPTH_common::intWrap_t::_Meta = NULL;
daeMetaElement * intFx_samplerDEPTH_common::intMinfilter::_Meta = NULL;
daeMetaElement * intFx_samplerDEPTH_common::intMagfilter::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intFx_samplerDEPTH_common::create(daeInt bytes)
{
	intFx_samplerDEPTH_commonRef ref = new(bytes) intFx_samplerDEPTH_common;
	return ref;
}

daeMetaElement *
intFx_samplerDEPTH_common::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fx_samplerDEPTH_common" );
	_Meta->registerClass(intFx_samplerDEPTH_common::create, &_Meta);

	domFx_samplerDEPTH_common::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_samplerDEPTH_common));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_samplerDEPTH_common::intSource::create(daeInt bytes)
{
	intFx_samplerDEPTH_common::intSourceRef ref = new(bytes) intFx_samplerDEPTH_common::intSource;
	return ref;
}

daeMetaElement *
intFx_samplerDEPTH_common::intSource::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "source" );
	_Meta->registerClass(intFx_samplerDEPTH_common::intSource::create, &_Meta);

	domFx_samplerDEPTH_common::domSource::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_samplerDEPTH_common::intSource));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_samplerDEPTH_common::intWrap_s::create(daeInt bytes)
{
	intFx_samplerDEPTH_common::intWrap_sRef ref = new(bytes) intFx_samplerDEPTH_common::intWrap_s;
	return ref;
}

daeMetaElement *
intFx_samplerDEPTH_common::intWrap_s::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "wrap_s" );
	_Meta->registerClass(intFx_samplerDEPTH_common::intWrap_s::create, &_Meta);

	domFx_samplerDEPTH_common::domWrap_s::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_samplerDEPTH_common::intWrap_s));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_samplerDEPTH_common::intWrap_t::create(daeInt bytes)
{
	intFx_samplerDEPTH_common::intWrap_tRef ref = new(bytes) intFx_samplerDEPTH_common::intWrap_t;
	return ref;
}

daeMetaElement *
intFx_samplerDEPTH_common::intWrap_t::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "wrap_t" );
	_Meta->registerClass(intFx_samplerDEPTH_common::intWrap_t::create, &_Meta);

	domFx_samplerDEPTH_common::domWrap_t::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_samplerDEPTH_common::intWrap_t));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_samplerDEPTH_common::intMinfilter::create(daeInt bytes)
{
	intFx_samplerDEPTH_common::intMinfilterRef ref = new(bytes) intFx_samplerDEPTH_common::intMinfilter;
	return ref;
}

daeMetaElement *
intFx_samplerDEPTH_common::intMinfilter::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "minfilter" );
	_Meta->registerClass(intFx_samplerDEPTH_common::intMinfilter::create, &_Meta);

	domFx_samplerDEPTH_common::domMinfilter::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_samplerDEPTH_common::intMinfilter));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_samplerDEPTH_common::intMagfilter::create(daeInt bytes)
{
	intFx_samplerDEPTH_common::intMagfilterRef ref = new(bytes) intFx_samplerDEPTH_common::intMagfilter;
	return ref;
}

daeMetaElement *
intFx_samplerDEPTH_common::intMagfilter::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "magfilter" );
	_Meta->registerClass(intFx_samplerDEPTH_common::intMagfilter::create, &_Meta);

	domFx_samplerDEPTH_common::domMagfilter::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_samplerDEPTH_common::intMagfilter));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// CONSTRUCTOR AND DESTRUCTOR
intFx_samplerDEPTH_common::intFx_samplerDEPTH_common() {
}

intFx_samplerDEPTH_common::~intFx_samplerDEPTH_common() {
}

// IMPORT

void
intFx_samplerDEPTH_common::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_samplerDEPTH_common::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_samplerDEPTH_common::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_samplerDEPTH_common::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_samplerDEPTH_common::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_samplerDEPTH_common::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_samplerDEPTH_common::intSource::intSource() {
}

intFx_samplerDEPTH_common::intSource::~intSource() {
}

// IMPORT

void
intFx_samplerDEPTH_common::intSource::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_samplerDEPTH_common::intSource::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_samplerDEPTH_common::intSource::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_samplerDEPTH_common::intSource::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_samplerDEPTH_common::intSource::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_samplerDEPTH_common::intSource::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_samplerDEPTH_common::intWrap_s::intWrap_s() {
}

intFx_samplerDEPTH_common::intWrap_s::~intWrap_s() {
}

// IMPORT

void
intFx_samplerDEPTH_common::intWrap_s::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_samplerDEPTH_common::intWrap_s::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_samplerDEPTH_common::intWrap_s::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_samplerDEPTH_common::intWrap_s::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_samplerDEPTH_common::intWrap_s::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_samplerDEPTH_common::intWrap_s::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_samplerDEPTH_common::intWrap_t::intWrap_t() {
}

intFx_samplerDEPTH_common::intWrap_t::~intWrap_t() {
}

// IMPORT

void
intFx_samplerDEPTH_common::intWrap_t::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_samplerDEPTH_common::intWrap_t::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_samplerDEPTH_common::intWrap_t::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_samplerDEPTH_common::intWrap_t::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_samplerDEPTH_common::intWrap_t::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_samplerDEPTH_common::intWrap_t::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_samplerDEPTH_common::intMinfilter::intMinfilter() {
}

intFx_samplerDEPTH_common::intMinfilter::~intMinfilter() {
}

// IMPORT

void
intFx_samplerDEPTH_common::intMinfilter::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_samplerDEPTH_common::intMinfilter::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_samplerDEPTH_common::intMinfilter::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_samplerDEPTH_common::intMinfilter::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_samplerDEPTH_common::intMinfilter::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_samplerDEPTH_common::intMinfilter::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_samplerDEPTH_common::intMagfilter::intMagfilter() {
}

intFx_samplerDEPTH_common::intMagfilter::~intMagfilter() {
}

// IMPORT

void
intFx_samplerDEPTH_common::intMagfilter::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_samplerDEPTH_common::intMagfilter::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_samplerDEPTH_common::intMagfilter::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_samplerDEPTH_common::intMagfilter::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_samplerDEPTH_common::intMagfilter::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_samplerDEPTH_common::intMagfilter::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}


