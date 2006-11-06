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
#include "intFx_surface_common.h"
#include <dom/domFx_surface_common.h>

daeMetaElement * intFx_surface_common::_Meta = NULL;
daeMetaElement * intFx_surface_common::intFormat::_Meta = NULL;
daeMetaElement * intFx_surface_common::intSize::_Meta = NULL;
daeMetaElement * intFx_surface_common::intViewport_ratio::_Meta = NULL;
daeMetaElement * intFx_surface_common::intMip_levels::_Meta = NULL;
daeMetaElement * intFx_surface_common::intMipmap_generate::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intFx_surface_common::create(daeInt bytes)
{
	intFx_surface_commonRef ref = new(bytes) intFx_surface_common;
	return ref;
}

daeMetaElement *
intFx_surface_common::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fx_surface_common" );
	_Meta->registerClass(intFx_surface_common::create, &_Meta);

	domFx_surface_common::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_surface_common));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_surface_common::intFormat::create(daeInt bytes)
{
	intFx_surface_common::intFormatRef ref = new(bytes) intFx_surface_common::intFormat;
	return ref;
}

daeMetaElement *
intFx_surface_common::intFormat::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "format" );
	_Meta->registerClass(intFx_surface_common::intFormat::create, &_Meta);

	domFx_surface_common::domFormat::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_surface_common::intFormat));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_surface_common::intSize::create(daeInt bytes)
{
	intFx_surface_common::intSizeRef ref = new(bytes) intFx_surface_common::intSize;
	return ref;
}

daeMetaElement *
intFx_surface_common::intSize::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "size" );
	_Meta->registerClass(intFx_surface_common::intSize::create, &_Meta);

	domFx_surface_common::domSize::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_surface_common::intSize));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_surface_common::intViewport_ratio::create(daeInt bytes)
{
	intFx_surface_common::intViewport_ratioRef ref = new(bytes) intFx_surface_common::intViewport_ratio;
	return ref;
}

daeMetaElement *
intFx_surface_common::intViewport_ratio::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "viewport_ratio" );
	_Meta->registerClass(intFx_surface_common::intViewport_ratio::create, &_Meta);

	domFx_surface_common::domViewport_ratio::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_surface_common::intViewport_ratio));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_surface_common::intMip_levels::create(daeInt bytes)
{
	intFx_surface_common::intMip_levelsRef ref = new(bytes) intFx_surface_common::intMip_levels;
	return ref;
}

daeMetaElement *
intFx_surface_common::intMip_levels::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "mip_levels" );
	_Meta->registerClass(intFx_surface_common::intMip_levels::create, &_Meta);

	domFx_surface_common::domMip_levels::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_surface_common::intMip_levels));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_surface_common::intMipmap_generate::create(daeInt bytes)
{
	intFx_surface_common::intMipmap_generateRef ref = new(bytes) intFx_surface_common::intMipmap_generate;
	return ref;
}

daeMetaElement *
intFx_surface_common::intMipmap_generate::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "mipmap_generate" );
	_Meta->registerClass(intFx_surface_common::intMipmap_generate::create, &_Meta);

	domFx_surface_common::domMipmap_generate::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_surface_common::intMipmap_generate));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// CONSTRUCTOR AND DESTRUCTOR
intFx_surface_common::intFx_surface_common() {
}

intFx_surface_common::~intFx_surface_common() {
}

// IMPORT

void
intFx_surface_common::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_surface_common::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_surface_common::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_surface_common::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_surface_common::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_surface_common::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_surface_common::intFormat::intFormat() {
}

intFx_surface_common::intFormat::~intFormat() {
}

// IMPORT

void
intFx_surface_common::intFormat::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_surface_common::intFormat::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_surface_common::intFormat::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_surface_common::intFormat::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_surface_common::intFormat::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_surface_common::intFormat::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_surface_common::intSize::intSize() {
}

intFx_surface_common::intSize::~intSize() {
}

// IMPORT

void
intFx_surface_common::intSize::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_surface_common::intSize::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_surface_common::intSize::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_surface_common::intSize::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_surface_common::intSize::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_surface_common::intSize::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_surface_common::intViewport_ratio::intViewport_ratio() {
}

intFx_surface_common::intViewport_ratio::~intViewport_ratio() {
}

// IMPORT

void
intFx_surface_common::intViewport_ratio::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_surface_common::intViewport_ratio::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_surface_common::intViewport_ratio::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_surface_common::intViewport_ratio::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_surface_common::intViewport_ratio::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_surface_common::intViewport_ratio::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_surface_common::intMip_levels::intMip_levels() {
}

intFx_surface_common::intMip_levels::~intMip_levels() {
}

// IMPORT

void
intFx_surface_common::intMip_levels::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_surface_common::intMip_levels::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_surface_common::intMip_levels::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_surface_common::intMip_levels::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_surface_common::intMip_levels::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_surface_common::intMip_levels::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_surface_common::intMipmap_generate::intMipmap_generate() {
}

intFx_surface_common::intMipmap_generate::~intMipmap_generate() {
}

// IMPORT

void
intFx_surface_common::intMipmap_generate::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_surface_common::intMipmap_generate::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_surface_common::intMipmap_generate::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_surface_common::intMipmap_generate::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_surface_common::intMipmap_generate::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_surface_common::intMipmap_generate::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}


