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
#include "intProfile_GLES.h"
#include <dom/domProfile_GLES.h>

daeMetaElement * intProfile_GLES::_Meta = NULL;
daeMetaElement * intProfile_GLES::intTechnique::_Meta = NULL;
daeMetaElement * intProfile_GLES::intTechnique::intSetparam::_Meta = NULL;
daeMetaElement * intProfile_GLES::intTechnique::intPass::_Meta = NULL;
daeMetaElement * intProfile_GLES::intTechnique::intPass::intColor_target::_Meta = NULL;
daeMetaElement * intProfile_GLES::intTechnique::intPass::intDepth_target::_Meta = NULL;
daeMetaElement * intProfile_GLES::intTechnique::intPass::intStencil_target::_Meta = NULL;
daeMetaElement * intProfile_GLES::intTechnique::intPass::intColor_clear::_Meta = NULL;
daeMetaElement * intProfile_GLES::intTechnique::intPass::intDepth_clear::_Meta = NULL;
daeMetaElement * intProfile_GLES::intTechnique::intPass::intStencil_clear::_Meta = NULL;
daeMetaElement * intProfile_GLES::intTechnique::intPass::intDraw::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intProfile_GLES::create(daeInt bytes)
{
	intProfile_GLESRef ref = new(bytes) intProfile_GLES;
	return ref;
}

daeMetaElement *
intProfile_GLES::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "profile_GLES" );
	_Meta->registerClass(intProfile_GLES::create, &_Meta);

	domProfile_GLES::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_GLES));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intProfile_GLES::intTechnique::create(daeInt bytes)
{
	intProfile_GLES::intTechniqueRef ref = new(bytes) intProfile_GLES::intTechnique;
	return ref;
}

daeMetaElement *
intProfile_GLES::intTechnique::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "technique" );
	_Meta->registerClass(intProfile_GLES::intTechnique::create, &_Meta);

	domProfile_GLES::domTechnique::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_GLES::intTechnique));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intProfile_GLES::intTechnique::intSetparam::create(daeInt bytes)
{
	intProfile_GLES::intTechnique::intSetparamRef ref = new(bytes) intProfile_GLES::intTechnique::intSetparam;
	return ref;
}

daeMetaElement *
intProfile_GLES::intTechnique::intSetparam::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "setparam" );
	_Meta->registerClass(intProfile_GLES::intTechnique::intSetparam::create, &_Meta);

	domProfile_GLES::domTechnique::domSetparam::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_GLES::intTechnique::intSetparam));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intProfile_GLES::intTechnique::intPass::create(daeInt bytes)
{
	intProfile_GLES::intTechnique::intPassRef ref = new(bytes) intProfile_GLES::intTechnique::intPass;
	return ref;
}

daeMetaElement *
intProfile_GLES::intTechnique::intPass::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "pass" );
	_Meta->registerClass(intProfile_GLES::intTechnique::intPass::create, &_Meta);

	domProfile_GLES::domTechnique::domPass::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_GLES::intTechnique::intPass));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intProfile_GLES::intTechnique::intPass::intColor_target::create(daeInt bytes)
{
	intProfile_GLES::intTechnique::intPass::intColor_targetRef ref = new(bytes) intProfile_GLES::intTechnique::intPass::intColor_target;
	return ref;
}

daeMetaElement *
intProfile_GLES::intTechnique::intPass::intColor_target::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "color_target" );
	_Meta->registerClass(intProfile_GLES::intTechnique::intPass::intColor_target::create, &_Meta);

	domProfile_GLES::domTechnique::domPass::domColor_target::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_GLES::intTechnique::intPass::intColor_target));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intProfile_GLES::intTechnique::intPass::intDepth_target::create(daeInt bytes)
{
	intProfile_GLES::intTechnique::intPass::intDepth_targetRef ref = new(bytes) intProfile_GLES::intTechnique::intPass::intDepth_target;
	return ref;
}

daeMetaElement *
intProfile_GLES::intTechnique::intPass::intDepth_target::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "depth_target" );
	_Meta->registerClass(intProfile_GLES::intTechnique::intPass::intDepth_target::create, &_Meta);

	domProfile_GLES::domTechnique::domPass::domDepth_target::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_GLES::intTechnique::intPass::intDepth_target));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intProfile_GLES::intTechnique::intPass::intStencil_target::create(daeInt bytes)
{
	intProfile_GLES::intTechnique::intPass::intStencil_targetRef ref = new(bytes) intProfile_GLES::intTechnique::intPass::intStencil_target;
	return ref;
}

daeMetaElement *
intProfile_GLES::intTechnique::intPass::intStencil_target::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "stencil_target" );
	_Meta->registerClass(intProfile_GLES::intTechnique::intPass::intStencil_target::create, &_Meta);

	domProfile_GLES::domTechnique::domPass::domStencil_target::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_GLES::intTechnique::intPass::intStencil_target));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intProfile_GLES::intTechnique::intPass::intColor_clear::create(daeInt bytes)
{
	intProfile_GLES::intTechnique::intPass::intColor_clearRef ref = new(bytes) intProfile_GLES::intTechnique::intPass::intColor_clear;
	return ref;
}

daeMetaElement *
intProfile_GLES::intTechnique::intPass::intColor_clear::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "color_clear" );
	_Meta->registerClass(intProfile_GLES::intTechnique::intPass::intColor_clear::create, &_Meta);

	domProfile_GLES::domTechnique::domPass::domColor_clear::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_GLES::intTechnique::intPass::intColor_clear));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intProfile_GLES::intTechnique::intPass::intDepth_clear::create(daeInt bytes)
{
	intProfile_GLES::intTechnique::intPass::intDepth_clearRef ref = new(bytes) intProfile_GLES::intTechnique::intPass::intDepth_clear;
	return ref;
}

daeMetaElement *
intProfile_GLES::intTechnique::intPass::intDepth_clear::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "depth_clear" );
	_Meta->registerClass(intProfile_GLES::intTechnique::intPass::intDepth_clear::create, &_Meta);

	domProfile_GLES::domTechnique::domPass::domDepth_clear::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_GLES::intTechnique::intPass::intDepth_clear));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intProfile_GLES::intTechnique::intPass::intStencil_clear::create(daeInt bytes)
{
	intProfile_GLES::intTechnique::intPass::intStencil_clearRef ref = new(bytes) intProfile_GLES::intTechnique::intPass::intStencil_clear;
	return ref;
}

daeMetaElement *
intProfile_GLES::intTechnique::intPass::intStencil_clear::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "stencil_clear" );
	_Meta->registerClass(intProfile_GLES::intTechnique::intPass::intStencil_clear::create, &_Meta);

	domProfile_GLES::domTechnique::domPass::domStencil_clear::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_GLES::intTechnique::intPass::intStencil_clear));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intProfile_GLES::intTechnique::intPass::intDraw::create(daeInt bytes)
{
	intProfile_GLES::intTechnique::intPass::intDrawRef ref = new(bytes) intProfile_GLES::intTechnique::intPass::intDraw;
	return ref;
}

daeMetaElement *
intProfile_GLES::intTechnique::intPass::intDraw::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "draw" );
	_Meta->registerClass(intProfile_GLES::intTechnique::intPass::intDraw::create, &_Meta);

	domProfile_GLES::domTechnique::domPass::domDraw::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_GLES::intTechnique::intPass::intDraw));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// CONSTRUCTOR AND DESTRUCTOR
intProfile_GLES::intProfile_GLES() {
}

intProfile_GLES::~intProfile_GLES() {
}

// IMPORT

void
intProfile_GLES::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_GLES::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_GLES::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_GLES::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_GLES::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_GLES::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intProfile_GLES::intTechnique::intTechnique() {
}

intProfile_GLES::intTechnique::~intTechnique() {
}

// IMPORT

void
intProfile_GLES::intTechnique::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_GLES::intTechnique::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_GLES::intTechnique::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_GLES::intTechnique::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_GLES::intTechnique::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_GLES::intTechnique::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intProfile_GLES::intTechnique::intSetparam::intSetparam() {
}

intProfile_GLES::intTechnique::intSetparam::~intSetparam() {
}

// IMPORT

void
intProfile_GLES::intTechnique::intSetparam::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_GLES::intTechnique::intSetparam::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_GLES::intTechnique::intSetparam::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_GLES::intTechnique::intSetparam::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_GLES::intTechnique::intSetparam::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_GLES::intTechnique::intSetparam::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intProfile_GLES::intTechnique::intPass::intPass() {
}

intProfile_GLES::intTechnique::intPass::~intPass() {
}

// IMPORT

void
intProfile_GLES::intTechnique::intPass::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_GLES::intTechnique::intPass::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_GLES::intTechnique::intPass::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_GLES::intTechnique::intPass::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_GLES::intTechnique::intPass::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_GLES::intTechnique::intPass::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intProfile_GLES::intTechnique::intPass::intColor_target::intColor_target() {
}

intProfile_GLES::intTechnique::intPass::intColor_target::~intColor_target() {
}

// IMPORT

void
intProfile_GLES::intTechnique::intPass::intColor_target::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_GLES::intTechnique::intPass::intColor_target::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_GLES::intTechnique::intPass::intColor_target::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_GLES::intTechnique::intPass::intColor_target::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_GLES::intTechnique::intPass::intColor_target::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_GLES::intTechnique::intPass::intColor_target::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intProfile_GLES::intTechnique::intPass::intDepth_target::intDepth_target() {
}

intProfile_GLES::intTechnique::intPass::intDepth_target::~intDepth_target() {
}

// IMPORT

void
intProfile_GLES::intTechnique::intPass::intDepth_target::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_GLES::intTechnique::intPass::intDepth_target::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_GLES::intTechnique::intPass::intDepth_target::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_GLES::intTechnique::intPass::intDepth_target::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_GLES::intTechnique::intPass::intDepth_target::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_GLES::intTechnique::intPass::intDepth_target::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intProfile_GLES::intTechnique::intPass::intStencil_target::intStencil_target() {
}

intProfile_GLES::intTechnique::intPass::intStencil_target::~intStencil_target() {
}

// IMPORT

void
intProfile_GLES::intTechnique::intPass::intStencil_target::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_GLES::intTechnique::intPass::intStencil_target::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_GLES::intTechnique::intPass::intStencil_target::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_GLES::intTechnique::intPass::intStencil_target::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_GLES::intTechnique::intPass::intStencil_target::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_GLES::intTechnique::intPass::intStencil_target::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intProfile_GLES::intTechnique::intPass::intColor_clear::intColor_clear() {
}

intProfile_GLES::intTechnique::intPass::intColor_clear::~intColor_clear() {
}

// IMPORT

void
intProfile_GLES::intTechnique::intPass::intColor_clear::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_GLES::intTechnique::intPass::intColor_clear::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_GLES::intTechnique::intPass::intColor_clear::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_GLES::intTechnique::intPass::intColor_clear::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_GLES::intTechnique::intPass::intColor_clear::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_GLES::intTechnique::intPass::intColor_clear::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intProfile_GLES::intTechnique::intPass::intDepth_clear::intDepth_clear() {
}

intProfile_GLES::intTechnique::intPass::intDepth_clear::~intDepth_clear() {
}

// IMPORT

void
intProfile_GLES::intTechnique::intPass::intDepth_clear::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_GLES::intTechnique::intPass::intDepth_clear::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_GLES::intTechnique::intPass::intDepth_clear::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_GLES::intTechnique::intPass::intDepth_clear::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_GLES::intTechnique::intPass::intDepth_clear::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_GLES::intTechnique::intPass::intDepth_clear::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intProfile_GLES::intTechnique::intPass::intStencil_clear::intStencil_clear() {
}

intProfile_GLES::intTechnique::intPass::intStencil_clear::~intStencil_clear() {
}

// IMPORT

void
intProfile_GLES::intTechnique::intPass::intStencil_clear::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_GLES::intTechnique::intPass::intStencil_clear::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_GLES::intTechnique::intPass::intStencil_clear::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_GLES::intTechnique::intPass::intStencil_clear::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_GLES::intTechnique::intPass::intStencil_clear::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_GLES::intTechnique::intPass::intStencil_clear::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intProfile_GLES::intTechnique::intPass::intDraw::intDraw() {
}

intProfile_GLES::intTechnique::intPass::intDraw::~intDraw() {
}

// IMPORT

void
intProfile_GLES::intTechnique::intPass::intDraw::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_GLES::intTechnique::intPass::intDraw::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_GLES::intTechnique::intPass::intDraw::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_GLES::intTechnique::intPass::intDraw::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_GLES::intTechnique::intPass::intDraw::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_GLES::intTechnique::intPass::intDraw::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}


