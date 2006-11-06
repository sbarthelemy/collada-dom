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
#include "intFx_sampler3D_common.h"
#include <dom/domFx_sampler3D_common.h>

daeMetaElement * intFx_sampler3D_common::_Meta = NULL;
daeMetaElement * intFx_sampler3D_common::intSource::_Meta = NULL;
daeMetaElement * intFx_sampler3D_common::intWrap_s::_Meta = NULL;
daeMetaElement * intFx_sampler3D_common::intWrap_t::_Meta = NULL;
daeMetaElement * intFx_sampler3D_common::intWrap_p::_Meta = NULL;
daeMetaElement * intFx_sampler3D_common::intMinfilter::_Meta = NULL;
daeMetaElement * intFx_sampler3D_common::intMagfilter::_Meta = NULL;
daeMetaElement * intFx_sampler3D_common::intMipfilter::_Meta = NULL;
daeMetaElement * intFx_sampler3D_common::intBorder_color::_Meta = NULL;
daeMetaElement * intFx_sampler3D_common::intMipmap_maxlevel::_Meta = NULL;
daeMetaElement * intFx_sampler3D_common::intMipmap_bias::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intFx_sampler3D_common::create(daeInt bytes)
{
	intFx_sampler3D_commonRef ref = new(bytes) intFx_sampler3D_common;
	return ref;
}

daeMetaElement *
intFx_sampler3D_common::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fx_sampler3D_common" );
	_Meta->registerClass(intFx_sampler3D_common::create, &_Meta);

	domFx_sampler3D_common::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_sampler3D_common));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_sampler3D_common::intSource::create(daeInt bytes)
{
	intFx_sampler3D_common::intSourceRef ref = new(bytes) intFx_sampler3D_common::intSource;
	return ref;
}

daeMetaElement *
intFx_sampler3D_common::intSource::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "source" );
	_Meta->registerClass(intFx_sampler3D_common::intSource::create, &_Meta);

	domFx_sampler3D_common::domSource::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_sampler3D_common::intSource));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_sampler3D_common::intWrap_s::create(daeInt bytes)
{
	intFx_sampler3D_common::intWrap_sRef ref = new(bytes) intFx_sampler3D_common::intWrap_s;
	return ref;
}

daeMetaElement *
intFx_sampler3D_common::intWrap_s::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "wrap_s" );
	_Meta->registerClass(intFx_sampler3D_common::intWrap_s::create, &_Meta);

	domFx_sampler3D_common::domWrap_s::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_sampler3D_common::intWrap_s));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_sampler3D_common::intWrap_t::create(daeInt bytes)
{
	intFx_sampler3D_common::intWrap_tRef ref = new(bytes) intFx_sampler3D_common::intWrap_t;
	return ref;
}

daeMetaElement *
intFx_sampler3D_common::intWrap_t::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "wrap_t" );
	_Meta->registerClass(intFx_sampler3D_common::intWrap_t::create, &_Meta);

	domFx_sampler3D_common::domWrap_t::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_sampler3D_common::intWrap_t));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_sampler3D_common::intWrap_p::create(daeInt bytes)
{
	intFx_sampler3D_common::intWrap_pRef ref = new(bytes) intFx_sampler3D_common::intWrap_p;
	return ref;
}

daeMetaElement *
intFx_sampler3D_common::intWrap_p::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "wrap_p" );
	_Meta->registerClass(intFx_sampler3D_common::intWrap_p::create, &_Meta);

	domFx_sampler3D_common::domWrap_p::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_sampler3D_common::intWrap_p));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_sampler3D_common::intMinfilter::create(daeInt bytes)
{
	intFx_sampler3D_common::intMinfilterRef ref = new(bytes) intFx_sampler3D_common::intMinfilter;
	return ref;
}

daeMetaElement *
intFx_sampler3D_common::intMinfilter::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "minfilter" );
	_Meta->registerClass(intFx_sampler3D_common::intMinfilter::create, &_Meta);

	domFx_sampler3D_common::domMinfilter::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_sampler3D_common::intMinfilter));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_sampler3D_common::intMagfilter::create(daeInt bytes)
{
	intFx_sampler3D_common::intMagfilterRef ref = new(bytes) intFx_sampler3D_common::intMagfilter;
	return ref;
}

daeMetaElement *
intFx_sampler3D_common::intMagfilter::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "magfilter" );
	_Meta->registerClass(intFx_sampler3D_common::intMagfilter::create, &_Meta);

	domFx_sampler3D_common::domMagfilter::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_sampler3D_common::intMagfilter));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_sampler3D_common::intMipfilter::create(daeInt bytes)
{
	intFx_sampler3D_common::intMipfilterRef ref = new(bytes) intFx_sampler3D_common::intMipfilter;
	return ref;
}

daeMetaElement *
intFx_sampler3D_common::intMipfilter::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "mipfilter" );
	_Meta->registerClass(intFx_sampler3D_common::intMipfilter::create, &_Meta);

	domFx_sampler3D_common::domMipfilter::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_sampler3D_common::intMipfilter));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_sampler3D_common::intBorder_color::create(daeInt bytes)
{
	intFx_sampler3D_common::intBorder_colorRef ref = new(bytes) intFx_sampler3D_common::intBorder_color;
	return ref;
}

daeMetaElement *
intFx_sampler3D_common::intBorder_color::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "border_color" );
	_Meta->registerClass(intFx_sampler3D_common::intBorder_color::create, &_Meta);

	domFx_sampler3D_common::domBorder_color::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_sampler3D_common::intBorder_color));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_sampler3D_common::intMipmap_maxlevel::create(daeInt bytes)
{
	intFx_sampler3D_common::intMipmap_maxlevelRef ref = new(bytes) intFx_sampler3D_common::intMipmap_maxlevel;
	return ref;
}

daeMetaElement *
intFx_sampler3D_common::intMipmap_maxlevel::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "mipmap_maxlevel" );
	_Meta->registerClass(intFx_sampler3D_common::intMipmap_maxlevel::create, &_Meta);

	domFx_sampler3D_common::domMipmap_maxlevel::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_sampler3D_common::intMipmap_maxlevel));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_sampler3D_common::intMipmap_bias::create(daeInt bytes)
{
	intFx_sampler3D_common::intMipmap_biasRef ref = new(bytes) intFx_sampler3D_common::intMipmap_bias;
	return ref;
}

daeMetaElement *
intFx_sampler3D_common::intMipmap_bias::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "mipmap_bias" );
	_Meta->registerClass(intFx_sampler3D_common::intMipmap_bias::create, &_Meta);

	domFx_sampler3D_common::domMipmap_bias::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_sampler3D_common::intMipmap_bias));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// CONSTRUCTOR AND DESTRUCTOR
intFx_sampler3D_common::intFx_sampler3D_common() {
}

intFx_sampler3D_common::~intFx_sampler3D_common() {
}

// IMPORT

void
intFx_sampler3D_common::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_sampler3D_common::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_sampler3D_common::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_sampler3D_common::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_sampler3D_common::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_sampler3D_common::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_sampler3D_common::intSource::intSource() {
}

intFx_sampler3D_common::intSource::~intSource() {
}

// IMPORT

void
intFx_sampler3D_common::intSource::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_sampler3D_common::intSource::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_sampler3D_common::intSource::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_sampler3D_common::intSource::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_sampler3D_common::intSource::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_sampler3D_common::intSource::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_sampler3D_common::intWrap_s::intWrap_s() {
}

intFx_sampler3D_common::intWrap_s::~intWrap_s() {
}

// IMPORT

void
intFx_sampler3D_common::intWrap_s::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_sampler3D_common::intWrap_s::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_sampler3D_common::intWrap_s::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_sampler3D_common::intWrap_s::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_sampler3D_common::intWrap_s::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_sampler3D_common::intWrap_s::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_sampler3D_common::intWrap_t::intWrap_t() {
}

intFx_sampler3D_common::intWrap_t::~intWrap_t() {
}

// IMPORT

void
intFx_sampler3D_common::intWrap_t::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_sampler3D_common::intWrap_t::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_sampler3D_common::intWrap_t::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_sampler3D_common::intWrap_t::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_sampler3D_common::intWrap_t::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_sampler3D_common::intWrap_t::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_sampler3D_common::intWrap_p::intWrap_p() {
}

intFx_sampler3D_common::intWrap_p::~intWrap_p() {
}

// IMPORT

void
intFx_sampler3D_common::intWrap_p::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_sampler3D_common::intWrap_p::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_sampler3D_common::intWrap_p::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_sampler3D_common::intWrap_p::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_sampler3D_common::intWrap_p::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_sampler3D_common::intWrap_p::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_sampler3D_common::intMinfilter::intMinfilter() {
}

intFx_sampler3D_common::intMinfilter::~intMinfilter() {
}

// IMPORT

void
intFx_sampler3D_common::intMinfilter::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_sampler3D_common::intMinfilter::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_sampler3D_common::intMinfilter::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_sampler3D_common::intMinfilter::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_sampler3D_common::intMinfilter::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_sampler3D_common::intMinfilter::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_sampler3D_common::intMagfilter::intMagfilter() {
}

intFx_sampler3D_common::intMagfilter::~intMagfilter() {
}

// IMPORT

void
intFx_sampler3D_common::intMagfilter::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_sampler3D_common::intMagfilter::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_sampler3D_common::intMagfilter::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_sampler3D_common::intMagfilter::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_sampler3D_common::intMagfilter::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_sampler3D_common::intMagfilter::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_sampler3D_common::intMipfilter::intMipfilter() {
}

intFx_sampler3D_common::intMipfilter::~intMipfilter() {
}

// IMPORT

void
intFx_sampler3D_common::intMipfilter::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_sampler3D_common::intMipfilter::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_sampler3D_common::intMipfilter::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_sampler3D_common::intMipfilter::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_sampler3D_common::intMipfilter::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_sampler3D_common::intMipfilter::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_sampler3D_common::intBorder_color::intBorder_color() {
}

intFx_sampler3D_common::intBorder_color::~intBorder_color() {
}

// IMPORT

void
intFx_sampler3D_common::intBorder_color::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_sampler3D_common::intBorder_color::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_sampler3D_common::intBorder_color::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_sampler3D_common::intBorder_color::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_sampler3D_common::intBorder_color::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_sampler3D_common::intBorder_color::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_sampler3D_common::intMipmap_maxlevel::intMipmap_maxlevel() {
}

intFx_sampler3D_common::intMipmap_maxlevel::~intMipmap_maxlevel() {
}

// IMPORT

void
intFx_sampler3D_common::intMipmap_maxlevel::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_sampler3D_common::intMipmap_maxlevel::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_sampler3D_common::intMipmap_maxlevel::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_sampler3D_common::intMipmap_maxlevel::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_sampler3D_common::intMipmap_maxlevel::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_sampler3D_common::intMipmap_maxlevel::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_sampler3D_common::intMipmap_bias::intMipmap_bias() {
}

intFx_sampler3D_common::intMipmap_bias::~intMipmap_bias() {
}

// IMPORT

void
intFx_sampler3D_common::intMipmap_bias::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_sampler3D_common::intMipmap_bias::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_sampler3D_common::intMipmap_bias::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_sampler3D_common::intMipmap_bias::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_sampler3D_common::intMipmap_bias::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_sampler3D_common::intMipmap_bias::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}


