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
#include "intTapered_capsule.h"
#include <dom/domTapered_capsule.h>

daeMetaElement * intTapered_capsule::_Meta = NULL;
daeMetaElement * intTapered_capsule::intHeight::_Meta = NULL;
daeMetaElement * intTapered_capsule::intRadius1::_Meta = NULL;
daeMetaElement * intTapered_capsule::intRadius2::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intTapered_capsule::create(daeInt bytes)
{
	intTapered_capsuleRef ref = new(bytes) intTapered_capsule;
	return ref;
}

daeMetaElement *
intTapered_capsule::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "tapered_capsule" );
	_Meta->registerClass(intTapered_capsule::create, &_Meta);

	domTapered_capsule::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intTapered_capsule));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intTapered_capsule::intHeight::create(daeInt bytes)
{
	intTapered_capsule::intHeightRef ref = new(bytes) intTapered_capsule::intHeight;
	return ref;
}

daeMetaElement *
intTapered_capsule::intHeight::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "height" );
	_Meta->registerClass(intTapered_capsule::intHeight::create, &_Meta);

	domTapered_capsule::domHeight::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intTapered_capsule::intHeight));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intTapered_capsule::intRadius1::create(daeInt bytes)
{
	intTapered_capsule::intRadius1Ref ref = new(bytes) intTapered_capsule::intRadius1;
	return ref;
}

daeMetaElement *
intTapered_capsule::intRadius1::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "radius1" );
	_Meta->registerClass(intTapered_capsule::intRadius1::create, &_Meta);

	domTapered_capsule::domRadius1::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intTapered_capsule::intRadius1));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intTapered_capsule::intRadius2::create(daeInt bytes)
{
	intTapered_capsule::intRadius2Ref ref = new(bytes) intTapered_capsule::intRadius2;
	return ref;
}

daeMetaElement *
intTapered_capsule::intRadius2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "radius2" );
	_Meta->registerClass(intTapered_capsule::intRadius2::create, &_Meta);

	domTapered_capsule::domRadius2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intTapered_capsule::intRadius2));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// CONSTRUCTOR AND DESTRUCTOR
intTapered_capsule::intTapered_capsule() {
}

intTapered_capsule::~intTapered_capsule() {
}

// IMPORT

void
intTapered_capsule::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intTapered_capsule::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intTapered_capsule::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intTapered_capsule::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intTapered_capsule::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intTapered_capsule::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intTapered_capsule::intHeight::intHeight() {
}

intTapered_capsule::intHeight::~intHeight() {
}

// IMPORT

void
intTapered_capsule::intHeight::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intTapered_capsule::intHeight::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intTapered_capsule::intHeight::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intTapered_capsule::intHeight::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intTapered_capsule::intHeight::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intTapered_capsule::intHeight::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intTapered_capsule::intRadius1::intRadius1() {
}

intTapered_capsule::intRadius1::~intRadius1() {
}

// IMPORT

void
intTapered_capsule::intRadius1::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intTapered_capsule::intRadius1::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intTapered_capsule::intRadius1::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intTapered_capsule::intRadius1::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intTapered_capsule::intRadius1::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intTapered_capsule::intRadius1::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intTapered_capsule::intRadius2::intRadius2() {
}

intTapered_capsule::intRadius2::~intRadius2() {
}

// IMPORT

void
intTapered_capsule::intRadius2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intTapered_capsule::intRadius2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intTapered_capsule::intRadius2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intTapered_capsule::intRadius2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intTapered_capsule::intRadius2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intTapered_capsule::intRadius2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}


