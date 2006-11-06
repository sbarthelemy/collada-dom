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
#include "intGlsl_surface_type.h"
#include <dom/domGlsl_surface_type.h>

daeMetaElement * intGlsl_surface_type::_Meta = NULL;
daeMetaElement * intGlsl_surface_type::intGenerator::_Meta = NULL;
daeMetaElement * intGlsl_surface_type::intGenerator::intName::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intGlsl_surface_type::create(daeInt bytes)
{
	intGlsl_surface_typeRef ref = new(bytes) intGlsl_surface_type;
	return ref;
}

daeMetaElement *
intGlsl_surface_type::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "glsl_surface_type" );
	_Meta->registerClass(intGlsl_surface_type::create, &_Meta);

	domGlsl_surface_type::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGlsl_surface_type));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGlsl_surface_type::intGenerator::create(daeInt bytes)
{
	intGlsl_surface_type::intGeneratorRef ref = new(bytes) intGlsl_surface_type::intGenerator;
	return ref;
}

daeMetaElement *
intGlsl_surface_type::intGenerator::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "generator" );
	_Meta->registerClass(intGlsl_surface_type::intGenerator::create, &_Meta);

	domGlsl_surface_type::domGenerator::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGlsl_surface_type::intGenerator));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGlsl_surface_type::intGenerator::intName::create(daeInt bytes)
{
	intGlsl_surface_type::intGenerator::intNameRef ref = new(bytes) intGlsl_surface_type::intGenerator::intName;
	return ref;
}

daeMetaElement *
intGlsl_surface_type::intGenerator::intName::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "name" );
	_Meta->registerClass(intGlsl_surface_type::intGenerator::intName::create, &_Meta);

	domGlsl_surface_type::domGenerator::domName::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGlsl_surface_type::intGenerator::intName));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// CONSTRUCTOR AND DESTRUCTOR
intGlsl_surface_type::intGlsl_surface_type() {
}

intGlsl_surface_type::~intGlsl_surface_type() {
}

// IMPORT

void
intGlsl_surface_type::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGlsl_surface_type::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGlsl_surface_type::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGlsl_surface_type::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGlsl_surface_type::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGlsl_surface_type::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGlsl_surface_type::intGenerator::intGenerator() {
}

intGlsl_surface_type::intGenerator::~intGenerator() {
}

// IMPORT

void
intGlsl_surface_type::intGenerator::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGlsl_surface_type::intGenerator::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGlsl_surface_type::intGenerator::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGlsl_surface_type::intGenerator::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGlsl_surface_type::intGenerator::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGlsl_surface_type::intGenerator::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGlsl_surface_type::intGenerator::intName::intName() {
}

intGlsl_surface_type::intGenerator::intName::~intName() {
}

// IMPORT

void
intGlsl_surface_type::intGenerator::intName::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGlsl_surface_type::intGenerator::intName::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGlsl_surface_type::intGenerator::intName::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGlsl_surface_type::intGenerator::intName::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGlsl_surface_type::intGenerator::intName::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGlsl_surface_type::intGenerator::intName::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}


