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
#include "intTapered_cylinder.h"
#include <dom/domTapered_cylinder.h>

daeMetaElement * intTapered_cylinder::_Meta = NULL;
daeMetaElement * intTapered_cylinder::intHeight::_Meta = NULL;
daeMetaElement * intTapered_cylinder::intRadius1::_Meta = NULL;
daeMetaElement * intTapered_cylinder::intRadius2::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intTapered_cylinder::create(daeInt bytes)
{
	intTapered_cylinderRef ref = new(bytes) intTapered_cylinder;
	return ref;
}

daeMetaElement *
intTapered_cylinder::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "tapered_cylinder" );
	_Meta->registerClass(intTapered_cylinder::create, &_Meta);

	domTapered_cylinder::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intTapered_cylinder));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intTapered_cylinder::intHeight::create(daeInt bytes)
{
	intTapered_cylinder::intHeightRef ref = new(bytes) intTapered_cylinder::intHeight;
	return ref;
}

daeMetaElement *
intTapered_cylinder::intHeight::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "height" );
	_Meta->registerClass(intTapered_cylinder::intHeight::create, &_Meta);

	domTapered_cylinder::domHeight::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intTapered_cylinder::intHeight));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intTapered_cylinder::intRadius1::create(daeInt bytes)
{
	intTapered_cylinder::intRadius1Ref ref = new(bytes) intTapered_cylinder::intRadius1;
	return ref;
}

daeMetaElement *
intTapered_cylinder::intRadius1::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "radius1" );
	_Meta->registerClass(intTapered_cylinder::intRadius1::create, &_Meta);

	domTapered_cylinder::domRadius1::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intTapered_cylinder::intRadius1));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intTapered_cylinder::intRadius2::create(daeInt bytes)
{
	intTapered_cylinder::intRadius2Ref ref = new(bytes) intTapered_cylinder::intRadius2;
	return ref;
}

daeMetaElement *
intTapered_cylinder::intRadius2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "radius2" );
	_Meta->registerClass(intTapered_cylinder::intRadius2::create, &_Meta);

	domTapered_cylinder::domRadius2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intTapered_cylinder::intRadius2));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// CONSTRUCTOR AND DESTRUCTOR
intTapered_cylinder::intTapered_cylinder() {
}

intTapered_cylinder::~intTapered_cylinder() {
}

// IMPORT

void
intTapered_cylinder::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intTapered_cylinder::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intTapered_cylinder::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intTapered_cylinder::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intTapered_cylinder::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intTapered_cylinder::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intTapered_cylinder::intHeight::intHeight() {
}

intTapered_cylinder::intHeight::~intHeight() {
}

// IMPORT

void
intTapered_cylinder::intHeight::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intTapered_cylinder::intHeight::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intTapered_cylinder::intHeight::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intTapered_cylinder::intHeight::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intTapered_cylinder::intHeight::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intTapered_cylinder::intHeight::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intTapered_cylinder::intRadius1::intRadius1() {
}

intTapered_cylinder::intRadius1::~intRadius1() {
}

// IMPORT

void
intTapered_cylinder::intRadius1::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intTapered_cylinder::intRadius1::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intTapered_cylinder::intRadius1::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intTapered_cylinder::intRadius1::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intTapered_cylinder::intRadius1::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intTapered_cylinder::intRadius1::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intTapered_cylinder::intRadius2::intRadius2() {
}

intTapered_cylinder::intRadius2::~intRadius2() {
}

// IMPORT

void
intTapered_cylinder::intRadius2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intTapered_cylinder::intRadius2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intTapered_cylinder::intRadius2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intTapered_cylinder::intRadius2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intTapered_cylinder::intRadius2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intTapered_cylinder::intRadius2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}


