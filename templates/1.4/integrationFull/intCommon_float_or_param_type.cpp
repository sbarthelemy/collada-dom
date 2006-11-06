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
#include "intCommon_float_or_param_type.h"
#include <dom/domCommon_float_or_param_type.h>

daeMetaElement * intCommon_float_or_param_type::_Meta = NULL;
daeMetaElement * intCommon_float_or_param_type::intFloat::_Meta = NULL;
daeMetaElement * intCommon_float_or_param_type::intParam::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intCommon_float_or_param_type::create(daeInt bytes)
{
	intCommon_float_or_param_typeRef ref = new(bytes) intCommon_float_or_param_type;
	return ref;
}

daeMetaElement *
intCommon_float_or_param_type::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "common_float_or_param_type" );
	_Meta->registerClass(intCommon_float_or_param_type::create, &_Meta);

	domCommon_float_or_param_type::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCommon_float_or_param_type));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCommon_float_or_param_type::intFloat::create(daeInt bytes)
{
	intCommon_float_or_param_type::intFloatRef ref = new(bytes) intCommon_float_or_param_type::intFloat;
	return ref;
}

daeMetaElement *
intCommon_float_or_param_type::intFloat::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float" );
	_Meta->registerClass(intCommon_float_or_param_type::intFloat::create, &_Meta);

	domCommon_float_or_param_type::domFloat::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCommon_float_or_param_type::intFloat));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCommon_float_or_param_type::intParam::create(daeInt bytes)
{
	intCommon_float_or_param_type::intParamRef ref = new(bytes) intCommon_float_or_param_type::intParam;
	return ref;
}

daeMetaElement *
intCommon_float_or_param_type::intParam::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "param" );
	_Meta->registerClass(intCommon_float_or_param_type::intParam::create, &_Meta);

	domCommon_float_or_param_type::domParam::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCommon_float_or_param_type::intParam));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// CONSTRUCTOR AND DESTRUCTOR
intCommon_float_or_param_type::intCommon_float_or_param_type() {
}

intCommon_float_or_param_type::~intCommon_float_or_param_type() {
}

// IMPORT

void
intCommon_float_or_param_type::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCommon_float_or_param_type::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCommon_float_or_param_type::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCommon_float_or_param_type::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCommon_float_or_param_type::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCommon_float_or_param_type::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCommon_float_or_param_type::intFloat::intFloat() {
}

intCommon_float_or_param_type::intFloat::~intFloat() {
}

// IMPORT

void
intCommon_float_or_param_type::intFloat::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCommon_float_or_param_type::intFloat::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCommon_float_or_param_type::intFloat::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCommon_float_or_param_type::intFloat::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCommon_float_or_param_type::intFloat::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCommon_float_or_param_type::intFloat::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCommon_float_or_param_type::intParam::intParam() {
}

intCommon_float_or_param_type::intParam::~intParam() {
}

// IMPORT

void
intCommon_float_or_param_type::intParam::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCommon_float_or_param_type::intParam::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCommon_float_or_param_type::intParam::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCommon_float_or_param_type::intParam::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCommon_float_or_param_type::intParam::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCommon_float_or_param_type::intParam::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}


