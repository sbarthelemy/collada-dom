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
#include "intGles_sampler_state.h"
#include <dom/domGles_sampler_state.h>

daeMetaElement * intGles_sampler_state::_Meta = NULL;
daeMetaElement * intGles_sampler_state::intWrap_s::_Meta = NULL;
daeMetaElement * intGles_sampler_state::intWrap_t::_Meta = NULL;
daeMetaElement * intGles_sampler_state::intMinfilter::_Meta = NULL;
daeMetaElement * intGles_sampler_state::intMagfilter::_Meta = NULL;
daeMetaElement * intGles_sampler_state::intMipfilter::_Meta = NULL;
daeMetaElement * intGles_sampler_state::intMipmap_maxlevel::_Meta = NULL;
daeMetaElement * intGles_sampler_state::intMipmap_bias::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intGles_sampler_state::create(daeInt bytes)
{
	intGles_sampler_stateRef ref = new(bytes) intGles_sampler_state;
	return ref;
}

daeMetaElement *
intGles_sampler_state::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "gles_sampler_state" );
	_Meta->registerClass(intGles_sampler_state::create, &_Meta);

	domGles_sampler_state::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_sampler_state));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_sampler_state::intWrap_s::create(daeInt bytes)
{
	intGles_sampler_state::intWrap_sRef ref = new(bytes) intGles_sampler_state::intWrap_s;
	return ref;
}

daeMetaElement *
intGles_sampler_state::intWrap_s::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "wrap_s" );
	_Meta->registerClass(intGles_sampler_state::intWrap_s::create, &_Meta);

	domGles_sampler_state::domWrap_s::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_sampler_state::intWrap_s));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_sampler_state::intWrap_t::create(daeInt bytes)
{
	intGles_sampler_state::intWrap_tRef ref = new(bytes) intGles_sampler_state::intWrap_t;
	return ref;
}

daeMetaElement *
intGles_sampler_state::intWrap_t::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "wrap_t" );
	_Meta->registerClass(intGles_sampler_state::intWrap_t::create, &_Meta);

	domGles_sampler_state::domWrap_t::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_sampler_state::intWrap_t));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_sampler_state::intMinfilter::create(daeInt bytes)
{
	intGles_sampler_state::intMinfilterRef ref = new(bytes) intGles_sampler_state::intMinfilter;
	return ref;
}

daeMetaElement *
intGles_sampler_state::intMinfilter::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "minfilter" );
	_Meta->registerClass(intGles_sampler_state::intMinfilter::create, &_Meta);

	domGles_sampler_state::domMinfilter::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_sampler_state::intMinfilter));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_sampler_state::intMagfilter::create(daeInt bytes)
{
	intGles_sampler_state::intMagfilterRef ref = new(bytes) intGles_sampler_state::intMagfilter;
	return ref;
}

daeMetaElement *
intGles_sampler_state::intMagfilter::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "magfilter" );
	_Meta->registerClass(intGles_sampler_state::intMagfilter::create, &_Meta);

	domGles_sampler_state::domMagfilter::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_sampler_state::intMagfilter));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_sampler_state::intMipfilter::create(daeInt bytes)
{
	intGles_sampler_state::intMipfilterRef ref = new(bytes) intGles_sampler_state::intMipfilter;
	return ref;
}

daeMetaElement *
intGles_sampler_state::intMipfilter::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "mipfilter" );
	_Meta->registerClass(intGles_sampler_state::intMipfilter::create, &_Meta);

	domGles_sampler_state::domMipfilter::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_sampler_state::intMipfilter));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_sampler_state::intMipmap_maxlevel::create(daeInt bytes)
{
	intGles_sampler_state::intMipmap_maxlevelRef ref = new(bytes) intGles_sampler_state::intMipmap_maxlevel;
	return ref;
}

daeMetaElement *
intGles_sampler_state::intMipmap_maxlevel::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "mipmap_maxlevel" );
	_Meta->registerClass(intGles_sampler_state::intMipmap_maxlevel::create, &_Meta);

	domGles_sampler_state::domMipmap_maxlevel::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_sampler_state::intMipmap_maxlevel));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_sampler_state::intMipmap_bias::create(daeInt bytes)
{
	intGles_sampler_state::intMipmap_biasRef ref = new(bytes) intGles_sampler_state::intMipmap_bias;
	return ref;
}

daeMetaElement *
intGles_sampler_state::intMipmap_bias::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "mipmap_bias" );
	_Meta->registerClass(intGles_sampler_state::intMipmap_bias::create, &_Meta);

	domGles_sampler_state::domMipmap_bias::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_sampler_state::intMipmap_bias));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// CONSTRUCTOR AND DESTRUCTOR
intGles_sampler_state::intGles_sampler_state() {
}

intGles_sampler_state::~intGles_sampler_state() {
}

// IMPORT

void
intGles_sampler_state::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_sampler_state::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_sampler_state::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_sampler_state::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_sampler_state::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_sampler_state::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_sampler_state::intWrap_s::intWrap_s() {
}

intGles_sampler_state::intWrap_s::~intWrap_s() {
}

// IMPORT

void
intGles_sampler_state::intWrap_s::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_sampler_state::intWrap_s::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_sampler_state::intWrap_s::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_sampler_state::intWrap_s::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_sampler_state::intWrap_s::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_sampler_state::intWrap_s::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_sampler_state::intWrap_t::intWrap_t() {
}

intGles_sampler_state::intWrap_t::~intWrap_t() {
}

// IMPORT

void
intGles_sampler_state::intWrap_t::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_sampler_state::intWrap_t::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_sampler_state::intWrap_t::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_sampler_state::intWrap_t::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_sampler_state::intWrap_t::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_sampler_state::intWrap_t::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_sampler_state::intMinfilter::intMinfilter() {
}

intGles_sampler_state::intMinfilter::~intMinfilter() {
}

// IMPORT

void
intGles_sampler_state::intMinfilter::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_sampler_state::intMinfilter::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_sampler_state::intMinfilter::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_sampler_state::intMinfilter::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_sampler_state::intMinfilter::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_sampler_state::intMinfilter::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_sampler_state::intMagfilter::intMagfilter() {
}

intGles_sampler_state::intMagfilter::~intMagfilter() {
}

// IMPORT

void
intGles_sampler_state::intMagfilter::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_sampler_state::intMagfilter::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_sampler_state::intMagfilter::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_sampler_state::intMagfilter::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_sampler_state::intMagfilter::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_sampler_state::intMagfilter::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_sampler_state::intMipfilter::intMipfilter() {
}

intGles_sampler_state::intMipfilter::~intMipfilter() {
}

// IMPORT

void
intGles_sampler_state::intMipfilter::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_sampler_state::intMipfilter::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_sampler_state::intMipfilter::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_sampler_state::intMipfilter::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_sampler_state::intMipfilter::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_sampler_state::intMipfilter::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_sampler_state::intMipmap_maxlevel::intMipmap_maxlevel() {
}

intGles_sampler_state::intMipmap_maxlevel::~intMipmap_maxlevel() {
}

// IMPORT

void
intGles_sampler_state::intMipmap_maxlevel::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_sampler_state::intMipmap_maxlevel::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_sampler_state::intMipmap_maxlevel::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_sampler_state::intMipmap_maxlevel::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_sampler_state::intMipmap_maxlevel::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_sampler_state::intMipmap_maxlevel::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_sampler_state::intMipmap_bias::intMipmap_bias() {
}

intGles_sampler_state::intMipmap_bias::~intMipmap_bias() {
}

// IMPORT

void
intGles_sampler_state::intMipmap_bias::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_sampler_state::intMipmap_bias::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_sampler_state::intMipmap_bias::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_sampler_state::intMipmap_bias::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_sampler_state::intMipmap_bias::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_sampler_state::intMipmap_bias::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}


