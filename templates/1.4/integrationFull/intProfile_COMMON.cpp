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
#include "intProfile_COMMON.h"
#include <dom/domProfile_COMMON.h>

daeMetaElement * intProfile_COMMON::_Meta = NULL;
daeMetaElement * intProfile_COMMON::intTechnique::_Meta = NULL;
daeMetaElement * intProfile_COMMON::intTechnique::intConstant::_Meta = NULL;
daeMetaElement * intProfile_COMMON::intTechnique::intLambert::_Meta = NULL;
daeMetaElement * intProfile_COMMON::intTechnique::intPhong::_Meta = NULL;
daeMetaElement * intProfile_COMMON::intTechnique::intBlinn::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intProfile_COMMON::create(daeInt bytes)
{
	intProfile_COMMONRef ref = new(bytes) intProfile_COMMON;
	return ref;
}

daeMetaElement *
intProfile_COMMON::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "profile_COMMON" );
	_Meta->registerClass(intProfile_COMMON::create, &_Meta);

	domProfile_COMMON::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_COMMON));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intProfile_COMMON::intTechnique::create(daeInt bytes)
{
	intProfile_COMMON::intTechniqueRef ref = new(bytes) intProfile_COMMON::intTechnique;
	return ref;
}

daeMetaElement *
intProfile_COMMON::intTechnique::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "technique" );
	_Meta->registerClass(intProfile_COMMON::intTechnique::create, &_Meta);

	domProfile_COMMON::domTechnique::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_COMMON::intTechnique));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intProfile_COMMON::intTechnique::intConstant::create(daeInt bytes)
{
	intProfile_COMMON::intTechnique::intConstantRef ref = new(bytes) intProfile_COMMON::intTechnique::intConstant;
	return ref;
}

daeMetaElement *
intProfile_COMMON::intTechnique::intConstant::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "constant" );
	_Meta->registerClass(intProfile_COMMON::intTechnique::intConstant::create, &_Meta);

	domProfile_COMMON::domTechnique::domConstant::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_COMMON::intTechnique::intConstant));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intProfile_COMMON::intTechnique::intLambert::create(daeInt bytes)
{
	intProfile_COMMON::intTechnique::intLambertRef ref = new(bytes) intProfile_COMMON::intTechnique::intLambert;
	return ref;
}

daeMetaElement *
intProfile_COMMON::intTechnique::intLambert::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "lambert" );
	_Meta->registerClass(intProfile_COMMON::intTechnique::intLambert::create, &_Meta);

	domProfile_COMMON::domTechnique::domLambert::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_COMMON::intTechnique::intLambert));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intProfile_COMMON::intTechnique::intPhong::create(daeInt bytes)
{
	intProfile_COMMON::intTechnique::intPhongRef ref = new(bytes) intProfile_COMMON::intTechnique::intPhong;
	return ref;
}

daeMetaElement *
intProfile_COMMON::intTechnique::intPhong::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "phong" );
	_Meta->registerClass(intProfile_COMMON::intTechnique::intPhong::create, &_Meta);

	domProfile_COMMON::domTechnique::domPhong::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_COMMON::intTechnique::intPhong));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intProfile_COMMON::intTechnique::intBlinn::create(daeInt bytes)
{
	intProfile_COMMON::intTechnique::intBlinnRef ref = new(bytes) intProfile_COMMON::intTechnique::intBlinn;
	return ref;
}

daeMetaElement *
intProfile_COMMON::intTechnique::intBlinn::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "blinn" );
	_Meta->registerClass(intProfile_COMMON::intTechnique::intBlinn::create, &_Meta);

	domProfile_COMMON::domTechnique::domBlinn::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_COMMON::intTechnique::intBlinn));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// CONSTRUCTOR AND DESTRUCTOR
intProfile_COMMON::intProfile_COMMON() {
}

intProfile_COMMON::~intProfile_COMMON() {
}

// IMPORT

void
intProfile_COMMON::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_COMMON::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_COMMON::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_COMMON::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_COMMON::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_COMMON::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intProfile_COMMON::intTechnique::intTechnique() {
}

intProfile_COMMON::intTechnique::~intTechnique() {
}

// IMPORT

void
intProfile_COMMON::intTechnique::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_COMMON::intTechnique::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_COMMON::intTechnique::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_COMMON::intTechnique::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_COMMON::intTechnique::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_COMMON::intTechnique::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intProfile_COMMON::intTechnique::intConstant::intConstant() {
}

intProfile_COMMON::intTechnique::intConstant::~intConstant() {
}

// IMPORT

void
intProfile_COMMON::intTechnique::intConstant::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_COMMON::intTechnique::intConstant::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_COMMON::intTechnique::intConstant::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_COMMON::intTechnique::intConstant::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_COMMON::intTechnique::intConstant::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_COMMON::intTechnique::intConstant::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intProfile_COMMON::intTechnique::intLambert::intLambert() {
}

intProfile_COMMON::intTechnique::intLambert::~intLambert() {
}

// IMPORT

void
intProfile_COMMON::intTechnique::intLambert::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_COMMON::intTechnique::intLambert::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_COMMON::intTechnique::intLambert::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_COMMON::intTechnique::intLambert::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_COMMON::intTechnique::intLambert::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_COMMON::intTechnique::intLambert::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intProfile_COMMON::intTechnique::intPhong::intPhong() {
}

intProfile_COMMON::intTechnique::intPhong::~intPhong() {
}

// IMPORT

void
intProfile_COMMON::intTechnique::intPhong::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_COMMON::intTechnique::intPhong::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_COMMON::intTechnique::intPhong::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_COMMON::intTechnique::intPhong::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_COMMON::intTechnique::intPhong::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_COMMON::intTechnique::intPhong::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intProfile_COMMON::intTechnique::intBlinn::intBlinn() {
}

intProfile_COMMON::intTechnique::intBlinn::~intBlinn() {
}

// IMPORT

void
intProfile_COMMON::intTechnique::intBlinn::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_COMMON::intTechnique::intBlinn::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_COMMON::intTechnique::intBlinn::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_COMMON::intTechnique::intBlinn::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_COMMON::intTechnique::intBlinn::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_COMMON::intTechnique::intBlinn::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}


