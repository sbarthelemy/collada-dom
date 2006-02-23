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
#include "intTexture.h"
#include <dom/domTexture.h>

daeMetaElement * intTexture::_Meta = NULL;
daeMetaElement * intTexture::intTechnique::_Meta = NULL;
daeMetaElement * intTexture::intTechnique::intInput::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intTexture::create(daeInt bytes)
{
	intTextureRef ref = new(bytes) intTexture;
	return ref;
}

daeMetaElement *
intTexture::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "texture" );
	_Meta->setStaticPointerAddress(&intTexture::_Meta);
	_Meta->registerConstructor(intTexture::create);

	domTexture::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intTexture));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intTexture::intTechnique::create(daeInt bytes)
{
	intTexture::intTechniqueRef ref = new(bytes) intTexture::intTechnique;
	return ref;
}

daeMetaElement *
intTexture::intTechnique::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "technique" );
	_Meta->setStaticPointerAddress(&intTexture::intTechnique::_Meta);
	_Meta->registerConstructor(intTexture::intTechnique::create);

	domTexture::domTechnique::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intTexture::intTechnique));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intTexture::intTechnique::intInput::create(daeInt bytes)
{
	intTexture::intTechnique::intInputRef ref = new(bytes) intTexture::intTechnique::intInput;
	return ref;
}

daeMetaElement *
intTexture::intTechnique::intInput::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "input" );
	_Meta->setStaticPointerAddress(&intTexture::intTechnique::intInput::_Meta);
	_Meta->registerConstructor(intTexture::intTechnique::intInput::create);

	domTexture::domTechnique::domInput::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intTexture::intTechnique::intInput));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// CONSTRUCTOR AND DESTRUCTOR
intTexture::intTexture() {
}

intTexture::~intTexture() {
}

// IMPORT

void
intTexture::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intTexture::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intTexture::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intTexture::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intTexture::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intTexture::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intTexture::intTechnique::intTechnique() {
}

intTexture::intTechnique::~intTechnique() {
}

// IMPORT

void
intTexture::intTechnique::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intTexture::intTechnique::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intTexture::intTechnique::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intTexture::intTechnique::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intTexture::intTechnique::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intTexture::intTechnique::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intTexture::intTechnique::intInput::intInput() {
}

intTexture::intTechnique::intInput::~intInput() {
}

// IMPORT

void
intTexture::intTechnique::intInput::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intTexture::intTechnique::intInput::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intTexture::intTechnique::intInput::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intTexture::intTechnique::intInput::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intTexture::intTechnique::intInput::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intTexture::intTechnique::intInput::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}


