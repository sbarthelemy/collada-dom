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
#include "intSkin.h"
#include <dom/domSkin.h>

daeMetaElement * intSkin::_Meta = NULL;
daeMetaElement * intSkin::intBind_shape_matrix::_Meta = NULL;
daeMetaElement * intSkin::intJoints::_Meta = NULL;
daeMetaElement * intSkin::intVertex_weights::_Meta = NULL;
daeMetaElement * intSkin::intVertex_weights::intVcount::_Meta = NULL;
daeMetaElement * intSkin::intVertex_weights::intV::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intSkin::create(daeInt bytes)
{
	intSkinRef ref = new(bytes) intSkin;
	return ref;
}

daeMetaElement *
intSkin::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "skin" );
	_Meta->registerClass(intSkin::create, &_Meta);

	domSkin::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intSkin));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intSkin::intBind_shape_matrix::create(daeInt bytes)
{
	intSkin::intBind_shape_matrixRef ref = new(bytes) intSkin::intBind_shape_matrix;
	return ref;
}

daeMetaElement *
intSkin::intBind_shape_matrix::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bind_shape_matrix" );
	_Meta->registerClass(intSkin::intBind_shape_matrix::create, &_Meta);

	domSkin::domBind_shape_matrix::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intSkin::intBind_shape_matrix));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intSkin::intJoints::create(daeInt bytes)
{
	intSkin::intJointsRef ref = new(bytes) intSkin::intJoints;
	return ref;
}

daeMetaElement *
intSkin::intJoints::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "joints" );
	_Meta->registerClass(intSkin::intJoints::create, &_Meta);

	domSkin::domJoints::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intSkin::intJoints));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intSkin::intVertex_weights::create(daeInt bytes)
{
	intSkin::intVertex_weightsRef ref = new(bytes) intSkin::intVertex_weights;
	return ref;
}

daeMetaElement *
intSkin::intVertex_weights::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "vertex_weights" );
	_Meta->registerClass(intSkin::intVertex_weights::create, &_Meta);

	domSkin::domVertex_weights::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intSkin::intVertex_weights));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intSkin::intVertex_weights::intVcount::create(daeInt bytes)
{
	intSkin::intVertex_weights::intVcountRef ref = new(bytes) intSkin::intVertex_weights::intVcount;
	return ref;
}

daeMetaElement *
intSkin::intVertex_weights::intVcount::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "vcount" );
	_Meta->registerClass(intSkin::intVertex_weights::intVcount::create, &_Meta);

	domSkin::domVertex_weights::domVcount::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intSkin::intVertex_weights::intVcount));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intSkin::intVertex_weights::intV::create(daeInt bytes)
{
	intSkin::intVertex_weights::intVRef ref = new(bytes) intSkin::intVertex_weights::intV;
	return ref;
}

daeMetaElement *
intSkin::intVertex_weights::intV::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "v" );
	_Meta->registerClass(intSkin::intVertex_weights::intV::create, &_Meta);

	domSkin::domVertex_weights::domV::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intSkin::intVertex_weights::intV));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// CONSTRUCTOR AND DESTRUCTOR
intSkin::intSkin() {
}

intSkin::~intSkin() {
}

// IMPORT

void
intSkin::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intSkin::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intSkin::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intSkin::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intSkin::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intSkin::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intSkin::intBind_shape_matrix::intBind_shape_matrix() {
}

intSkin::intBind_shape_matrix::~intBind_shape_matrix() {
}

// IMPORT

void
intSkin::intBind_shape_matrix::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intSkin::intBind_shape_matrix::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intSkin::intBind_shape_matrix::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intSkin::intBind_shape_matrix::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intSkin::intBind_shape_matrix::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intSkin::intBind_shape_matrix::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intSkin::intJoints::intJoints() {
}

intSkin::intJoints::~intJoints() {
}

// IMPORT

void
intSkin::intJoints::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intSkin::intJoints::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intSkin::intJoints::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intSkin::intJoints::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intSkin::intJoints::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intSkin::intJoints::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intSkin::intVertex_weights::intVertex_weights() {
}

intSkin::intVertex_weights::~intVertex_weights() {
}

// IMPORT

void
intSkin::intVertex_weights::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intSkin::intVertex_weights::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intSkin::intVertex_weights::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intSkin::intVertex_weights::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intSkin::intVertex_weights::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intSkin::intVertex_weights::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intSkin::intVertex_weights::intVcount::intVcount() {
}

intSkin::intVertex_weights::intVcount::~intVcount() {
}

// IMPORT

void
intSkin::intVertex_weights::intVcount::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intSkin::intVertex_weights::intVcount::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intSkin::intVertex_weights::intVcount::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intSkin::intVertex_weights::intVcount::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intSkin::intVertex_weights::intVcount::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intSkin::intVertex_weights::intVcount::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intSkin::intVertex_weights::intV::intV() {
}

intSkin::intVertex_weights::intV::~intV() {
}

// IMPORT

void
intSkin::intVertex_weights::intV::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intSkin::intVertex_weights::intV::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intSkin::intVertex_weights::intV::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intSkin::intVertex_weights::intV::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intSkin::intVertex_weights::intV::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intSkin::intVertex_weights::intV::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}


