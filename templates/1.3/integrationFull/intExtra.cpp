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
#include "intExtra.h"
#include <dom/domExtra.h>

daeMetaElement * intExtra::_Meta = NULL;
daeMetaElement * intExtra::intTechnique::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intExtra::create(daeInt bytes)
{
	intExtraRef ref = new(bytes) intExtra;
	return ref;
}

daeMetaElement *
intExtra::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "extra" );
	_Meta->setStaticPointerAddress(&intExtra::_Meta);
	_Meta->registerConstructor(intExtra::create);

	domExtra::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intExtra));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intExtra::intTechnique::create(daeInt bytes)
{
	intExtra::intTechniqueRef ref = new(bytes) intExtra::intTechnique;
	return ref;
}

daeMetaElement *
intExtra::intTechnique::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "technique" );
	_Meta->setStaticPointerAddress(&intExtra::intTechnique::_Meta);
	_Meta->registerConstructor(intExtra::intTechnique::create);

	domExtra::domTechnique::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intExtra::intTechnique));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// CONSTRUCTOR AND DESTRUCTOR
intExtra::intExtra() {
}

intExtra::~intExtra() {
}

// IMPORT

void
intExtra::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intExtra::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intExtra::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intExtra::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intExtra::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intExtra::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intExtra::intTechnique::intTechnique() {
}

intExtra::intTechnique::~intTechnique() {
}

// IMPORT

void
intExtra::intTechnique::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intExtra::intTechnique::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intExtra::intTechnique::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intExtra::intTechnique::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intExtra::intTechnique::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intExtra::intTechnique::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}


