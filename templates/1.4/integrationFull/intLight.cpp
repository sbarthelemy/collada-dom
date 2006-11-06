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
#include "intLight.h"
#include <dom/domLight.h>

daeMetaElement * intLight::_Meta = NULL;
daeMetaElement * intLight::intTechnique_common::_Meta = NULL;
daeMetaElement * intLight::intTechnique_common::intAmbient::_Meta = NULL;
daeMetaElement * intLight::intTechnique_common::intDirectional::_Meta = NULL;
daeMetaElement * intLight::intTechnique_common::intPoint::_Meta = NULL;
daeMetaElement * intLight::intTechnique_common::intSpot::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intLight::create(daeInt bytes)
{
	intLightRef ref = new(bytes) intLight;
	return ref;
}

daeMetaElement *
intLight::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "light" );
	_Meta->registerClass(intLight::create, &_Meta);

	domLight::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intLight));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intLight::intTechnique_common::create(daeInt bytes)
{
	intLight::intTechnique_commonRef ref = new(bytes) intLight::intTechnique_common;
	return ref;
}

daeMetaElement *
intLight::intTechnique_common::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "technique_common" );
	_Meta->registerClass(intLight::intTechnique_common::create, &_Meta);

	domLight::domTechnique_common::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intLight::intTechnique_common));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intLight::intTechnique_common::intAmbient::create(daeInt bytes)
{
	intLight::intTechnique_common::intAmbientRef ref = new(bytes) intLight::intTechnique_common::intAmbient;
	return ref;
}

daeMetaElement *
intLight::intTechnique_common::intAmbient::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "ambient" );
	_Meta->registerClass(intLight::intTechnique_common::intAmbient::create, &_Meta);

	domLight::domTechnique_common::domAmbient::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intLight::intTechnique_common::intAmbient));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intLight::intTechnique_common::intDirectional::create(daeInt bytes)
{
	intLight::intTechnique_common::intDirectionalRef ref = new(bytes) intLight::intTechnique_common::intDirectional;
	return ref;
}

daeMetaElement *
intLight::intTechnique_common::intDirectional::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "directional" );
	_Meta->registerClass(intLight::intTechnique_common::intDirectional::create, &_Meta);

	domLight::domTechnique_common::domDirectional::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intLight::intTechnique_common::intDirectional));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intLight::intTechnique_common::intPoint::create(daeInt bytes)
{
	intLight::intTechnique_common::intPointRef ref = new(bytes) intLight::intTechnique_common::intPoint;
	return ref;
}

daeMetaElement *
intLight::intTechnique_common::intPoint::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "point" );
	_Meta->registerClass(intLight::intTechnique_common::intPoint::create, &_Meta);

	domLight::domTechnique_common::domPoint::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intLight::intTechnique_common::intPoint));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intLight::intTechnique_common::intSpot::create(daeInt bytes)
{
	intLight::intTechnique_common::intSpotRef ref = new(bytes) intLight::intTechnique_common::intSpot;
	return ref;
}

daeMetaElement *
intLight::intTechnique_common::intSpot::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "spot" );
	_Meta->registerClass(intLight::intTechnique_common::intSpot::create, &_Meta);

	domLight::domTechnique_common::domSpot::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intLight::intTechnique_common::intSpot));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// CONSTRUCTOR AND DESTRUCTOR
intLight::intLight() {
}

intLight::~intLight() {
}

// IMPORT

void
intLight::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intLight::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intLight::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intLight::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intLight::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intLight::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intLight::intTechnique_common::intTechnique_common() {
}

intLight::intTechnique_common::~intTechnique_common() {
}

// IMPORT

void
intLight::intTechnique_common::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intLight::intTechnique_common::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intLight::intTechnique_common::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intLight::intTechnique_common::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intLight::intTechnique_common::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intLight::intTechnique_common::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intLight::intTechnique_common::intAmbient::intAmbient() {
}

intLight::intTechnique_common::intAmbient::~intAmbient() {
}

// IMPORT

void
intLight::intTechnique_common::intAmbient::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intLight::intTechnique_common::intAmbient::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intLight::intTechnique_common::intAmbient::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intLight::intTechnique_common::intAmbient::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intLight::intTechnique_common::intAmbient::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intLight::intTechnique_common::intAmbient::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intLight::intTechnique_common::intDirectional::intDirectional() {
}

intLight::intTechnique_common::intDirectional::~intDirectional() {
}

// IMPORT

void
intLight::intTechnique_common::intDirectional::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intLight::intTechnique_common::intDirectional::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intLight::intTechnique_common::intDirectional::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intLight::intTechnique_common::intDirectional::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intLight::intTechnique_common::intDirectional::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intLight::intTechnique_common::intDirectional::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intLight::intTechnique_common::intPoint::intPoint() {
}

intLight::intTechnique_common::intPoint::~intPoint() {
}

// IMPORT

void
intLight::intTechnique_common::intPoint::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intLight::intTechnique_common::intPoint::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intLight::intTechnique_common::intPoint::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intLight::intTechnique_common::intPoint::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intLight::intTechnique_common::intPoint::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intLight::intTechnique_common::intPoint::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intLight::intTechnique_common::intSpot::intSpot() {
}

intLight::intTechnique_common::intSpot::~intSpot() {
}

// IMPORT

void
intLight::intTechnique_common::intSpot::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intLight::intTechnique_common::intSpot::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intLight::intTechnique_common::intSpot::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intLight::intTechnique_common::intSpot::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intLight::intTechnique_common::intSpot::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intLight::intTechnique_common::intSpot::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}


