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
#include "intRigid_body.h"
#include <dom/domRigid_body.h>

daeMetaElement * intRigid_body::_Meta = NULL;
daeMetaElement * intRigid_body::intTechnique_common::_Meta = NULL;
daeMetaElement * intRigid_body::intTechnique_common::intDynamic::_Meta = NULL;
daeMetaElement * intRigid_body::intTechnique_common::intMass_frame::_Meta = NULL;
daeMetaElement * intRigid_body::intTechnique_common::intShape::_Meta = NULL;
daeMetaElement * intRigid_body::intTechnique_common::intShape::intHollow::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intRigid_body::create(daeInt bytes)
{
	intRigid_bodyRef ref = new(bytes) intRigid_body;
	return ref;
}

daeMetaElement *
intRigid_body::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "rigid_body" );
	_Meta->registerClass(intRigid_body::create, &_Meta);

	domRigid_body::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intRigid_body));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intRigid_body::intTechnique_common::create(daeInt bytes)
{
	intRigid_body::intTechnique_commonRef ref = new(bytes) intRigid_body::intTechnique_common;
	return ref;
}

daeMetaElement *
intRigid_body::intTechnique_common::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "technique_common" );
	_Meta->registerClass(intRigid_body::intTechnique_common::create, &_Meta);

	domRigid_body::domTechnique_common::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intRigid_body::intTechnique_common));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intRigid_body::intTechnique_common::intDynamic::create(daeInt bytes)
{
	intRigid_body::intTechnique_common::intDynamicRef ref = new(bytes) intRigid_body::intTechnique_common::intDynamic;
	return ref;
}

daeMetaElement *
intRigid_body::intTechnique_common::intDynamic::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "dynamic" );
	_Meta->registerClass(intRigid_body::intTechnique_common::intDynamic::create, &_Meta);

	domRigid_body::domTechnique_common::domDynamic::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intRigid_body::intTechnique_common::intDynamic));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intRigid_body::intTechnique_common::intMass_frame::create(daeInt bytes)
{
	intRigid_body::intTechnique_common::intMass_frameRef ref = new(bytes) intRigid_body::intTechnique_common::intMass_frame;
	return ref;
}

daeMetaElement *
intRigid_body::intTechnique_common::intMass_frame::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "mass_frame" );
	_Meta->registerClass(intRigid_body::intTechnique_common::intMass_frame::create, &_Meta);

	domRigid_body::domTechnique_common::domMass_frame::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intRigid_body::intTechnique_common::intMass_frame));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intRigid_body::intTechnique_common::intShape::create(daeInt bytes)
{
	intRigid_body::intTechnique_common::intShapeRef ref = new(bytes) intRigid_body::intTechnique_common::intShape;
	return ref;
}

daeMetaElement *
intRigid_body::intTechnique_common::intShape::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "shape" );
	_Meta->registerClass(intRigid_body::intTechnique_common::intShape::create, &_Meta);

	domRigid_body::domTechnique_common::domShape::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intRigid_body::intTechnique_common::intShape));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intRigid_body::intTechnique_common::intShape::intHollow::create(daeInt bytes)
{
	intRigid_body::intTechnique_common::intShape::intHollowRef ref = new(bytes) intRigid_body::intTechnique_common::intShape::intHollow;
	return ref;
}

daeMetaElement *
intRigid_body::intTechnique_common::intShape::intHollow::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "hollow" );
	_Meta->registerClass(intRigid_body::intTechnique_common::intShape::intHollow::create, &_Meta);

	domRigid_body::domTechnique_common::domShape::domHollow::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intRigid_body::intTechnique_common::intShape::intHollow));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// CONSTRUCTOR AND DESTRUCTOR
intRigid_body::intRigid_body() {
}

intRigid_body::~intRigid_body() {
}

// IMPORT

void
intRigid_body::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intRigid_body::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intRigid_body::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intRigid_body::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intRigid_body::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intRigid_body::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intRigid_body::intTechnique_common::intTechnique_common() {
}

intRigid_body::intTechnique_common::~intTechnique_common() {
}

// IMPORT

void
intRigid_body::intTechnique_common::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intRigid_body::intTechnique_common::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intRigid_body::intTechnique_common::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intRigid_body::intTechnique_common::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intRigid_body::intTechnique_common::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intRigid_body::intTechnique_common::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intRigid_body::intTechnique_common::intDynamic::intDynamic() {
}

intRigid_body::intTechnique_common::intDynamic::~intDynamic() {
}

// IMPORT

void
intRigid_body::intTechnique_common::intDynamic::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intRigid_body::intTechnique_common::intDynamic::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intRigid_body::intTechnique_common::intDynamic::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intRigid_body::intTechnique_common::intDynamic::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intRigid_body::intTechnique_common::intDynamic::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intRigid_body::intTechnique_common::intDynamic::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intRigid_body::intTechnique_common::intMass_frame::intMass_frame() {
}

intRigid_body::intTechnique_common::intMass_frame::~intMass_frame() {
}

// IMPORT

void
intRigid_body::intTechnique_common::intMass_frame::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intRigid_body::intTechnique_common::intMass_frame::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intRigid_body::intTechnique_common::intMass_frame::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intRigid_body::intTechnique_common::intMass_frame::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intRigid_body::intTechnique_common::intMass_frame::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intRigid_body::intTechnique_common::intMass_frame::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intRigid_body::intTechnique_common::intShape::intShape() {
}

intRigid_body::intTechnique_common::intShape::~intShape() {
}

// IMPORT

void
intRigid_body::intTechnique_common::intShape::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intRigid_body::intTechnique_common::intShape::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intRigid_body::intTechnique_common::intShape::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intRigid_body::intTechnique_common::intShape::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intRigid_body::intTechnique_common::intShape::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intRigid_body::intTechnique_common::intShape::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intRigid_body::intTechnique_common::intShape::intHollow::intHollow() {
}

intRigid_body::intTechnique_common::intShape::intHollow::~intHollow() {
}

// IMPORT

void
intRigid_body::intTechnique_common::intShape::intHollow::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intRigid_body::intTechnique_common::intShape::intHollow::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intRigid_body::intTechnique_common::intShape::intHollow::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intRigid_body::intTechnique_common::intShape::intHollow::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intRigid_body::intTechnique_common::intShape::intHollow::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intRigid_body::intTechnique_common::intShape::intHollow::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}


