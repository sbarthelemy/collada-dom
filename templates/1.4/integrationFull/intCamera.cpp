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
#include "intCamera.h"
#include <dom/domCamera.h>

daeMetaElement * intCamera::_Meta = NULL;
daeMetaElement * intCamera::intOptics::_Meta = NULL;
daeMetaElement * intCamera::intOptics::intTechnique_common::_Meta = NULL;
daeMetaElement * intCamera::intOptics::intTechnique_common::intOrthographic::_Meta = NULL;
daeMetaElement * intCamera::intOptics::intTechnique_common::intPerspective::_Meta = NULL;
daeMetaElement * intCamera::intImager::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intCamera::create(daeInt bytes)
{
	intCameraRef ref = new(bytes) intCamera;
	return ref;
}

daeMetaElement *
intCamera::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "camera" );
	_Meta->registerClass(intCamera::create, &_Meta);

	domCamera::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCamera));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCamera::intOptics::create(daeInt bytes)
{
	intCamera::intOpticsRef ref = new(bytes) intCamera::intOptics;
	return ref;
}

daeMetaElement *
intCamera::intOptics::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "optics" );
	_Meta->registerClass(intCamera::intOptics::create, &_Meta);

	domCamera::domOptics::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCamera::intOptics));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCamera::intOptics::intTechnique_common::create(daeInt bytes)
{
	intCamera::intOptics::intTechnique_commonRef ref = new(bytes) intCamera::intOptics::intTechnique_common;
	return ref;
}

daeMetaElement *
intCamera::intOptics::intTechnique_common::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "technique_common" );
	_Meta->registerClass(intCamera::intOptics::intTechnique_common::create, &_Meta);

	domCamera::domOptics::domTechnique_common::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCamera::intOptics::intTechnique_common));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCamera::intOptics::intTechnique_common::intOrthographic::create(daeInt bytes)
{
	intCamera::intOptics::intTechnique_common::intOrthographicRef ref = new(bytes) intCamera::intOptics::intTechnique_common::intOrthographic;
	return ref;
}

daeMetaElement *
intCamera::intOptics::intTechnique_common::intOrthographic::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "orthographic" );
	_Meta->registerClass(intCamera::intOptics::intTechnique_common::intOrthographic::create, &_Meta);

	domCamera::domOptics::domTechnique_common::domOrthographic::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCamera::intOptics::intTechnique_common::intOrthographic));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCamera::intOptics::intTechnique_common::intPerspective::create(daeInt bytes)
{
	intCamera::intOptics::intTechnique_common::intPerspectiveRef ref = new(bytes) intCamera::intOptics::intTechnique_common::intPerspective;
	return ref;
}

daeMetaElement *
intCamera::intOptics::intTechnique_common::intPerspective::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "perspective" );
	_Meta->registerClass(intCamera::intOptics::intTechnique_common::intPerspective::create, &_Meta);

	domCamera::domOptics::domTechnique_common::domPerspective::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCamera::intOptics::intTechnique_common::intPerspective));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCamera::intImager::create(daeInt bytes)
{
	intCamera::intImagerRef ref = new(bytes) intCamera::intImager;
	return ref;
}

daeMetaElement *
intCamera::intImager::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "imager" );
	_Meta->registerClass(intCamera::intImager::create, &_Meta);

	domCamera::domImager::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCamera::intImager));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// CONSTRUCTOR AND DESTRUCTOR
intCamera::intCamera() {
}

intCamera::~intCamera() {
}

// IMPORT

void
intCamera::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCamera::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCamera::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCamera::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCamera::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCamera::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCamera::intOptics::intOptics() {
}

intCamera::intOptics::~intOptics() {
}

// IMPORT

void
intCamera::intOptics::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCamera::intOptics::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCamera::intOptics::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCamera::intOptics::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCamera::intOptics::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCamera::intOptics::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCamera::intOptics::intTechnique_common::intTechnique_common() {
}

intCamera::intOptics::intTechnique_common::~intTechnique_common() {
}

// IMPORT

void
intCamera::intOptics::intTechnique_common::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCamera::intOptics::intTechnique_common::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCamera::intOptics::intTechnique_common::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCamera::intOptics::intTechnique_common::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCamera::intOptics::intTechnique_common::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCamera::intOptics::intTechnique_common::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCamera::intOptics::intTechnique_common::intOrthographic::intOrthographic() {
}

intCamera::intOptics::intTechnique_common::intOrthographic::~intOrthographic() {
}

// IMPORT

void
intCamera::intOptics::intTechnique_common::intOrthographic::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCamera::intOptics::intTechnique_common::intOrthographic::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCamera::intOptics::intTechnique_common::intOrthographic::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCamera::intOptics::intTechnique_common::intOrthographic::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCamera::intOptics::intTechnique_common::intOrthographic::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCamera::intOptics::intTechnique_common::intOrthographic::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCamera::intOptics::intTechnique_common::intPerspective::intPerspective() {
}

intCamera::intOptics::intTechnique_common::intPerspective::~intPerspective() {
}

// IMPORT

void
intCamera::intOptics::intTechnique_common::intPerspective::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCamera::intOptics::intTechnique_common::intPerspective::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCamera::intOptics::intTechnique_common::intPerspective::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCamera::intOptics::intTechnique_common::intPerspective::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCamera::intOptics::intTechnique_common::intPerspective::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCamera::intOptics::intTechnique_common::intPerspective::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCamera::intImager::intImager() {
}

intCamera::intImager::~intImager() {
}

// IMPORT

void
intCamera::intImager::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCamera::intImager::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCamera::intImager::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCamera::intImager::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCamera::intImager::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCamera::intImager::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}


