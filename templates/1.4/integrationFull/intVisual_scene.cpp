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
#include "intVisual_scene.h"
#include <dom/domVisual_scene.h>

daeMetaElement * intVisual_scene::_Meta = NULL;
daeMetaElement * intVisual_scene::intEvaluate_scene::_Meta = NULL;
daeMetaElement * intVisual_scene::intEvaluate_scene::intRender::_Meta = NULL;
daeMetaElement * intVisual_scene::intEvaluate_scene::intRender::intLayer::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intVisual_scene::create(daeInt bytes)
{
	intVisual_sceneRef ref = new(bytes) intVisual_scene;
	return ref;
}

daeMetaElement *
intVisual_scene::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "visual_scene" );
	_Meta->registerClass(intVisual_scene::create, &_Meta);

	domVisual_scene::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intVisual_scene));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intVisual_scene::intEvaluate_scene::create(daeInt bytes)
{
	intVisual_scene::intEvaluate_sceneRef ref = new(bytes) intVisual_scene::intEvaluate_scene;
	return ref;
}

daeMetaElement *
intVisual_scene::intEvaluate_scene::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "evaluate_scene" );
	_Meta->registerClass(intVisual_scene::intEvaluate_scene::create, &_Meta);

	domVisual_scene::domEvaluate_scene::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intVisual_scene::intEvaluate_scene));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intVisual_scene::intEvaluate_scene::intRender::create(daeInt bytes)
{
	intVisual_scene::intEvaluate_scene::intRenderRef ref = new(bytes) intVisual_scene::intEvaluate_scene::intRender;
	return ref;
}

daeMetaElement *
intVisual_scene::intEvaluate_scene::intRender::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "render" );
	_Meta->registerClass(intVisual_scene::intEvaluate_scene::intRender::create, &_Meta);

	domVisual_scene::domEvaluate_scene::domRender::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intVisual_scene::intEvaluate_scene::intRender));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intVisual_scene::intEvaluate_scene::intRender::intLayer::create(daeInt bytes)
{
	intVisual_scene::intEvaluate_scene::intRender::intLayerRef ref = new(bytes) intVisual_scene::intEvaluate_scene::intRender::intLayer;
	return ref;
}

daeMetaElement *
intVisual_scene::intEvaluate_scene::intRender::intLayer::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "layer" );
	_Meta->registerClass(intVisual_scene::intEvaluate_scene::intRender::intLayer::create, &_Meta);

	domVisual_scene::domEvaluate_scene::domRender::domLayer::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intVisual_scene::intEvaluate_scene::intRender::intLayer));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// CONSTRUCTOR AND DESTRUCTOR
intVisual_scene::intVisual_scene() {
}

intVisual_scene::~intVisual_scene() {
}

// IMPORT

void
intVisual_scene::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intVisual_scene::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intVisual_scene::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intVisual_scene::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intVisual_scene::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intVisual_scene::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intVisual_scene::intEvaluate_scene::intEvaluate_scene() {
}

intVisual_scene::intEvaluate_scene::~intEvaluate_scene() {
}

// IMPORT

void
intVisual_scene::intEvaluate_scene::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intVisual_scene::intEvaluate_scene::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intVisual_scene::intEvaluate_scene::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intVisual_scene::intEvaluate_scene::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intVisual_scene::intEvaluate_scene::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intVisual_scene::intEvaluate_scene::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intVisual_scene::intEvaluate_scene::intRender::intRender() {
}

intVisual_scene::intEvaluate_scene::intRender::~intRender() {
}

// IMPORT

void
intVisual_scene::intEvaluate_scene::intRender::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intVisual_scene::intEvaluate_scene::intRender::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intVisual_scene::intEvaluate_scene::intRender::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intVisual_scene::intEvaluate_scene::intRender::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intVisual_scene::intEvaluate_scene::intRender::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intVisual_scene::intEvaluate_scene::intRender::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intVisual_scene::intEvaluate_scene::intRender::intLayer::intLayer() {
}

intVisual_scene::intEvaluate_scene::intRender::intLayer::~intLayer() {
}

// IMPORT

void
intVisual_scene::intEvaluate_scene::intRender::intLayer::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intVisual_scene::intEvaluate_scene::intRender::intLayer::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intVisual_scene::intEvaluate_scene::intRender::intLayer::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intVisual_scene::intEvaluate_scene::intRender::intLayer::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intVisual_scene::intEvaluate_scene::intRender::intLayer::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intVisual_scene::intEvaluate_scene::intRender::intLayer::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}


