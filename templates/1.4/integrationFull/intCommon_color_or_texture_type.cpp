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
#include "intCommon_color_or_texture_type.h"
#include <dom/domCommon_color_or_texture_type.h>

daeMetaElement * intCommon_color_or_texture_type::_Meta = NULL;
daeMetaElement * intCommon_color_or_texture_type::intColor::_Meta = NULL;
daeMetaElement * intCommon_color_or_texture_type::intParam::_Meta = NULL;
daeMetaElement * intCommon_color_or_texture_type::intTexture::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intCommon_color_or_texture_type::create(daeInt bytes)
{
	intCommon_color_or_texture_typeRef ref = new(bytes) intCommon_color_or_texture_type;
	return ref;
}

daeMetaElement *
intCommon_color_or_texture_type::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "common_color_or_texture_type" );
	_Meta->registerClass(intCommon_color_or_texture_type::create, &_Meta);

	domCommon_color_or_texture_type::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCommon_color_or_texture_type));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCommon_color_or_texture_type::intColor::create(daeInt bytes)
{
	intCommon_color_or_texture_type::intColorRef ref = new(bytes) intCommon_color_or_texture_type::intColor;
	return ref;
}

daeMetaElement *
intCommon_color_or_texture_type::intColor::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "color" );
	_Meta->registerClass(intCommon_color_or_texture_type::intColor::create, &_Meta);

	domCommon_color_or_texture_type::domColor::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCommon_color_or_texture_type::intColor));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCommon_color_or_texture_type::intParam::create(daeInt bytes)
{
	intCommon_color_or_texture_type::intParamRef ref = new(bytes) intCommon_color_or_texture_type::intParam;
	return ref;
}

daeMetaElement *
intCommon_color_or_texture_type::intParam::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "param" );
	_Meta->registerClass(intCommon_color_or_texture_type::intParam::create, &_Meta);

	domCommon_color_or_texture_type::domParam::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCommon_color_or_texture_type::intParam));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCommon_color_or_texture_type::intTexture::create(daeInt bytes)
{
	intCommon_color_or_texture_type::intTextureRef ref = new(bytes) intCommon_color_or_texture_type::intTexture;
	return ref;
}

daeMetaElement *
intCommon_color_or_texture_type::intTexture::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "texture" );
	_Meta->registerClass(intCommon_color_or_texture_type::intTexture::create, &_Meta);

	domCommon_color_or_texture_type::domTexture::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCommon_color_or_texture_type::intTexture));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// CONSTRUCTOR AND DESTRUCTOR
intCommon_color_or_texture_type::intCommon_color_or_texture_type() {
}

intCommon_color_or_texture_type::~intCommon_color_or_texture_type() {
}

// IMPORT

void
intCommon_color_or_texture_type::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCommon_color_or_texture_type::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCommon_color_or_texture_type::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCommon_color_or_texture_type::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCommon_color_or_texture_type::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCommon_color_or_texture_type::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCommon_color_or_texture_type::intColor::intColor() {
}

intCommon_color_or_texture_type::intColor::~intColor() {
}

// IMPORT

void
intCommon_color_or_texture_type::intColor::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCommon_color_or_texture_type::intColor::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCommon_color_or_texture_type::intColor::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCommon_color_or_texture_type::intColor::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCommon_color_or_texture_type::intColor::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCommon_color_or_texture_type::intColor::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCommon_color_or_texture_type::intParam::intParam() {
}

intCommon_color_or_texture_type::intParam::~intParam() {
}

// IMPORT

void
intCommon_color_or_texture_type::intParam::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCommon_color_or_texture_type::intParam::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCommon_color_or_texture_type::intParam::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCommon_color_or_texture_type::intParam::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCommon_color_or_texture_type::intParam::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCommon_color_or_texture_type::intParam::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCommon_color_or_texture_type::intTexture::intTexture() {
}

intCommon_color_or_texture_type::intTexture::~intTexture() {
}

// IMPORT

void
intCommon_color_or_texture_type::intTexture::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCommon_color_or_texture_type::intTexture::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCommon_color_or_texture_type::intTexture::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCommon_color_or_texture_type::intTexture::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCommon_color_or_texture_type::intTexture::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCommon_color_or_texture_type::intTexture::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}


