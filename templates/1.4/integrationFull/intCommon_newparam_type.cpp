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
#include "intCommon_newparam_type.h"
#include <dom/domCommon_newparam_type.h>

daeMetaElement * intCommon_newparam_type::_Meta = NULL;
daeMetaElement * intCommon_newparam_type::intSemantic::_Meta = NULL;
daeMetaElement * intCommon_newparam_type::intFloat::_Meta = NULL;
daeMetaElement * intCommon_newparam_type::intFloat2::_Meta = NULL;
daeMetaElement * intCommon_newparam_type::intFloat3::_Meta = NULL;
daeMetaElement * intCommon_newparam_type::intFloat4::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intCommon_newparam_type::create(daeInt bytes)
{
	intCommon_newparam_typeRef ref = new(bytes) intCommon_newparam_type;
	return ref;
}

daeMetaElement *
intCommon_newparam_type::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "common_newparam_type" );
	_Meta->registerClass(intCommon_newparam_type::create, &_Meta);

	domCommon_newparam_type::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCommon_newparam_type));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCommon_newparam_type::intSemantic::create(daeInt bytes)
{
	intCommon_newparam_type::intSemanticRef ref = new(bytes) intCommon_newparam_type::intSemantic;
	return ref;
}

daeMetaElement *
intCommon_newparam_type::intSemantic::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "semantic" );
	_Meta->registerClass(intCommon_newparam_type::intSemantic::create, &_Meta);

	domCommon_newparam_type::domSemantic::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCommon_newparam_type::intSemantic));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCommon_newparam_type::intFloat::create(daeInt bytes)
{
	intCommon_newparam_type::intFloatRef ref = new(bytes) intCommon_newparam_type::intFloat;
	return ref;
}

daeMetaElement *
intCommon_newparam_type::intFloat::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float" );
	_Meta->registerClass(intCommon_newparam_type::intFloat::create, &_Meta);

	domCommon_newparam_type::domFloat::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCommon_newparam_type::intFloat));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCommon_newparam_type::intFloat2::create(daeInt bytes)
{
	intCommon_newparam_type::intFloat2Ref ref = new(bytes) intCommon_newparam_type::intFloat2;
	return ref;
}

daeMetaElement *
intCommon_newparam_type::intFloat2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float2" );
	_Meta->registerClass(intCommon_newparam_type::intFloat2::create, &_Meta);

	domCommon_newparam_type::domFloat2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCommon_newparam_type::intFloat2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCommon_newparam_type::intFloat3::create(daeInt bytes)
{
	intCommon_newparam_type::intFloat3Ref ref = new(bytes) intCommon_newparam_type::intFloat3;
	return ref;
}

daeMetaElement *
intCommon_newparam_type::intFloat3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float3" );
	_Meta->registerClass(intCommon_newparam_type::intFloat3::create, &_Meta);

	domCommon_newparam_type::domFloat3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCommon_newparam_type::intFloat3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCommon_newparam_type::intFloat4::create(daeInt bytes)
{
	intCommon_newparam_type::intFloat4Ref ref = new(bytes) intCommon_newparam_type::intFloat4;
	return ref;
}

daeMetaElement *
intCommon_newparam_type::intFloat4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float4" );
	_Meta->registerClass(intCommon_newparam_type::intFloat4::create, &_Meta);

	domCommon_newparam_type::domFloat4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCommon_newparam_type::intFloat4));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// CONSTRUCTOR AND DESTRUCTOR
intCommon_newparam_type::intCommon_newparam_type() {
}

intCommon_newparam_type::~intCommon_newparam_type() {
}

// IMPORT

void
intCommon_newparam_type::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCommon_newparam_type::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCommon_newparam_type::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCommon_newparam_type::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCommon_newparam_type::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCommon_newparam_type::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCommon_newparam_type::intSemantic::intSemantic() {
}

intCommon_newparam_type::intSemantic::~intSemantic() {
}

// IMPORT

void
intCommon_newparam_type::intSemantic::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCommon_newparam_type::intSemantic::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCommon_newparam_type::intSemantic::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCommon_newparam_type::intSemantic::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCommon_newparam_type::intSemantic::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCommon_newparam_type::intSemantic::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCommon_newparam_type::intFloat::intFloat() {
}

intCommon_newparam_type::intFloat::~intFloat() {
}

// IMPORT

void
intCommon_newparam_type::intFloat::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCommon_newparam_type::intFloat::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCommon_newparam_type::intFloat::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCommon_newparam_type::intFloat::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCommon_newparam_type::intFloat::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCommon_newparam_type::intFloat::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCommon_newparam_type::intFloat2::intFloat2() {
}

intCommon_newparam_type::intFloat2::~intFloat2() {
}

// IMPORT

void
intCommon_newparam_type::intFloat2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCommon_newparam_type::intFloat2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCommon_newparam_type::intFloat2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCommon_newparam_type::intFloat2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCommon_newparam_type::intFloat2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCommon_newparam_type::intFloat2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCommon_newparam_type::intFloat3::intFloat3() {
}

intCommon_newparam_type::intFloat3::~intFloat3() {
}

// IMPORT

void
intCommon_newparam_type::intFloat3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCommon_newparam_type::intFloat3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCommon_newparam_type::intFloat3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCommon_newparam_type::intFloat3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCommon_newparam_type::intFloat3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCommon_newparam_type::intFloat3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCommon_newparam_type::intFloat4::intFloat4() {
}

intCommon_newparam_type::intFloat4::~intFloat4() {
}

// IMPORT

void
intCommon_newparam_type::intFloat4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCommon_newparam_type::intFloat4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCommon_newparam_type::intFloat4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCommon_newparam_type::intFloat4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCommon_newparam_type::intFloat4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCommon_newparam_type::intFloat4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}


