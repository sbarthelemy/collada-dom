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
#include "intFx_annotate_type_common.h"
#include <dom/domFx_annotate_type_common.h>

daeMetaElement * intFx_annotate_type_common::_Meta = NULL;
daeMetaElement * intFx_annotate_type_common::intBool::_Meta = NULL;
daeMetaElement * intFx_annotate_type_common::intBool2::_Meta = NULL;
daeMetaElement * intFx_annotate_type_common::intBool3::_Meta = NULL;
daeMetaElement * intFx_annotate_type_common::intBool4::_Meta = NULL;
daeMetaElement * intFx_annotate_type_common::intInt::_Meta = NULL;
daeMetaElement * intFx_annotate_type_common::intInt2::_Meta = NULL;
daeMetaElement * intFx_annotate_type_common::intInt3::_Meta = NULL;
daeMetaElement * intFx_annotate_type_common::intInt4::_Meta = NULL;
daeMetaElement * intFx_annotate_type_common::intFloat::_Meta = NULL;
daeMetaElement * intFx_annotate_type_common::intFloat2::_Meta = NULL;
daeMetaElement * intFx_annotate_type_common::intFloat3::_Meta = NULL;
daeMetaElement * intFx_annotate_type_common::intFloat4::_Meta = NULL;
daeMetaElement * intFx_annotate_type_common::intFloat2x2::_Meta = NULL;
daeMetaElement * intFx_annotate_type_common::intFloat3x3::_Meta = NULL;
daeMetaElement * intFx_annotate_type_common::intFloat4x4::_Meta = NULL;
daeMetaElement * intFx_annotate_type_common::intString::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intFx_annotate_type_common::create(daeInt bytes)
{
	intFx_annotate_type_commonRef ref = new(bytes) intFx_annotate_type_common;
	return ref;
}

daeMetaElement *
intFx_annotate_type_common::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fx_annotate_type_common" );
	_Meta->registerConstructor(intFx_annotate_type_common::create);

	domFx_annotate_type_common::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_annotate_type_common));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_annotate_type_common::intBool::create(daeInt bytes)
{
	intFx_annotate_type_common::intBoolRef ref = new(bytes) intFx_annotate_type_common::intBool;
	return ref;
}

daeMetaElement *
intFx_annotate_type_common::intBool::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bool" );
	_Meta->registerConstructor(intFx_annotate_type_common::intBool::create);

	domFx_annotate_type_common::domBool::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_annotate_type_common::intBool));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_annotate_type_common::intBool2::create(daeInt bytes)
{
	intFx_annotate_type_common::intBool2Ref ref = new(bytes) intFx_annotate_type_common::intBool2;
	return ref;
}

daeMetaElement *
intFx_annotate_type_common::intBool2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bool2" );
	_Meta->registerConstructor(intFx_annotate_type_common::intBool2::create);

	domFx_annotate_type_common::domBool2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_annotate_type_common::intBool2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_annotate_type_common::intBool3::create(daeInt bytes)
{
	intFx_annotate_type_common::intBool3Ref ref = new(bytes) intFx_annotate_type_common::intBool3;
	return ref;
}

daeMetaElement *
intFx_annotate_type_common::intBool3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bool3" );
	_Meta->registerConstructor(intFx_annotate_type_common::intBool3::create);

	domFx_annotate_type_common::domBool3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_annotate_type_common::intBool3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_annotate_type_common::intBool4::create(daeInt bytes)
{
	intFx_annotate_type_common::intBool4Ref ref = new(bytes) intFx_annotate_type_common::intBool4;
	return ref;
}

daeMetaElement *
intFx_annotate_type_common::intBool4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bool4" );
	_Meta->registerConstructor(intFx_annotate_type_common::intBool4::create);

	domFx_annotate_type_common::domBool4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_annotate_type_common::intBool4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_annotate_type_common::intInt::create(daeInt bytes)
{
	intFx_annotate_type_common::intIntRef ref = new(bytes) intFx_annotate_type_common::intInt;
	return ref;
}

daeMetaElement *
intFx_annotate_type_common::intInt::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "int" );
	_Meta->registerConstructor(intFx_annotate_type_common::intInt::create);

	domFx_annotate_type_common::domInt::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_annotate_type_common::intInt));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_annotate_type_common::intInt2::create(daeInt bytes)
{
	intFx_annotate_type_common::intInt2Ref ref = new(bytes) intFx_annotate_type_common::intInt2;
	return ref;
}

daeMetaElement *
intFx_annotate_type_common::intInt2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "int2" );
	_Meta->registerConstructor(intFx_annotate_type_common::intInt2::create);

	domFx_annotate_type_common::domInt2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_annotate_type_common::intInt2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_annotate_type_common::intInt3::create(daeInt bytes)
{
	intFx_annotate_type_common::intInt3Ref ref = new(bytes) intFx_annotate_type_common::intInt3;
	return ref;
}

daeMetaElement *
intFx_annotate_type_common::intInt3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "int3" );
	_Meta->registerConstructor(intFx_annotate_type_common::intInt3::create);

	domFx_annotate_type_common::domInt3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_annotate_type_common::intInt3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_annotate_type_common::intInt4::create(daeInt bytes)
{
	intFx_annotate_type_common::intInt4Ref ref = new(bytes) intFx_annotate_type_common::intInt4;
	return ref;
}

daeMetaElement *
intFx_annotate_type_common::intInt4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "int4" );
	_Meta->registerConstructor(intFx_annotate_type_common::intInt4::create);

	domFx_annotate_type_common::domInt4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_annotate_type_common::intInt4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_annotate_type_common::intFloat::create(daeInt bytes)
{
	intFx_annotate_type_common::intFloatRef ref = new(bytes) intFx_annotate_type_common::intFloat;
	return ref;
}

daeMetaElement *
intFx_annotate_type_common::intFloat::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float" );
	_Meta->registerConstructor(intFx_annotate_type_common::intFloat::create);

	domFx_annotate_type_common::domFloat::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_annotate_type_common::intFloat));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_annotate_type_common::intFloat2::create(daeInt bytes)
{
	intFx_annotate_type_common::intFloat2Ref ref = new(bytes) intFx_annotate_type_common::intFloat2;
	return ref;
}

daeMetaElement *
intFx_annotate_type_common::intFloat2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float2" );
	_Meta->registerConstructor(intFx_annotate_type_common::intFloat2::create);

	domFx_annotate_type_common::domFloat2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_annotate_type_common::intFloat2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_annotate_type_common::intFloat3::create(daeInt bytes)
{
	intFx_annotate_type_common::intFloat3Ref ref = new(bytes) intFx_annotate_type_common::intFloat3;
	return ref;
}

daeMetaElement *
intFx_annotate_type_common::intFloat3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float3" );
	_Meta->registerConstructor(intFx_annotate_type_common::intFloat3::create);

	domFx_annotate_type_common::domFloat3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_annotate_type_common::intFloat3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_annotate_type_common::intFloat4::create(daeInt bytes)
{
	intFx_annotate_type_common::intFloat4Ref ref = new(bytes) intFx_annotate_type_common::intFloat4;
	return ref;
}

daeMetaElement *
intFx_annotate_type_common::intFloat4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float4" );
	_Meta->registerConstructor(intFx_annotate_type_common::intFloat4::create);

	domFx_annotate_type_common::domFloat4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_annotate_type_common::intFloat4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_annotate_type_common::intFloat2x2::create(daeInt bytes)
{
	intFx_annotate_type_common::intFloat2x2Ref ref = new(bytes) intFx_annotate_type_common::intFloat2x2;
	return ref;
}

daeMetaElement *
intFx_annotate_type_common::intFloat2x2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float2x2" );
	_Meta->registerConstructor(intFx_annotate_type_common::intFloat2x2::create);

	domFx_annotate_type_common::domFloat2x2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_annotate_type_common::intFloat2x2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_annotate_type_common::intFloat3x3::create(daeInt bytes)
{
	intFx_annotate_type_common::intFloat3x3Ref ref = new(bytes) intFx_annotate_type_common::intFloat3x3;
	return ref;
}

daeMetaElement *
intFx_annotate_type_common::intFloat3x3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float3x3" );
	_Meta->registerConstructor(intFx_annotate_type_common::intFloat3x3::create);

	domFx_annotate_type_common::domFloat3x3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_annotate_type_common::intFloat3x3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_annotate_type_common::intFloat4x4::create(daeInt bytes)
{
	intFx_annotate_type_common::intFloat4x4Ref ref = new(bytes) intFx_annotate_type_common::intFloat4x4;
	return ref;
}

daeMetaElement *
intFx_annotate_type_common::intFloat4x4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float4x4" );
	_Meta->registerConstructor(intFx_annotate_type_common::intFloat4x4::create);

	domFx_annotate_type_common::domFloat4x4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_annotate_type_common::intFloat4x4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intFx_annotate_type_common::intString::create(daeInt bytes)
{
	intFx_annotate_type_common::intStringRef ref = new(bytes) intFx_annotate_type_common::intString;
	return ref;
}

daeMetaElement *
intFx_annotate_type_common::intString::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "string" );
	_Meta->registerConstructor(intFx_annotate_type_common::intString::create);

	domFx_annotate_type_common::domString::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intFx_annotate_type_common::intString));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// CONSTRUCTOR AND DESTRUCTOR
intFx_annotate_type_common::intFx_annotate_type_common() {
}

intFx_annotate_type_common::~intFx_annotate_type_common() {
}

// IMPORT

void
intFx_annotate_type_common::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_annotate_type_common::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_annotate_type_common::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_annotate_type_common::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_annotate_type_common::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_annotate_type_common::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_annotate_type_common::intBool::intBool() {
}

intFx_annotate_type_common::intBool::~intBool() {
}

// IMPORT

void
intFx_annotate_type_common::intBool::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_annotate_type_common::intBool::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_annotate_type_common::intBool::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_annotate_type_common::intBool::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_annotate_type_common::intBool::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_annotate_type_common::intBool::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_annotate_type_common::intBool2::intBool2() {
}

intFx_annotate_type_common::intBool2::~intBool2() {
}

// IMPORT

void
intFx_annotate_type_common::intBool2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_annotate_type_common::intBool2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_annotate_type_common::intBool2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_annotate_type_common::intBool2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_annotate_type_common::intBool2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_annotate_type_common::intBool2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_annotate_type_common::intBool3::intBool3() {
}

intFx_annotate_type_common::intBool3::~intBool3() {
}

// IMPORT

void
intFx_annotate_type_common::intBool3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_annotate_type_common::intBool3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_annotate_type_common::intBool3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_annotate_type_common::intBool3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_annotate_type_common::intBool3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_annotate_type_common::intBool3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_annotate_type_common::intBool4::intBool4() {
}

intFx_annotate_type_common::intBool4::~intBool4() {
}

// IMPORT

void
intFx_annotate_type_common::intBool4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_annotate_type_common::intBool4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_annotate_type_common::intBool4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_annotate_type_common::intBool4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_annotate_type_common::intBool4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_annotate_type_common::intBool4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_annotate_type_common::intInt::intInt() {
}

intFx_annotate_type_common::intInt::~intInt() {
}

// IMPORT

void
intFx_annotate_type_common::intInt::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_annotate_type_common::intInt::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_annotate_type_common::intInt::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_annotate_type_common::intInt::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_annotate_type_common::intInt::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_annotate_type_common::intInt::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_annotate_type_common::intInt2::intInt2() {
}

intFx_annotate_type_common::intInt2::~intInt2() {
}

// IMPORT

void
intFx_annotate_type_common::intInt2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_annotate_type_common::intInt2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_annotate_type_common::intInt2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_annotate_type_common::intInt2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_annotate_type_common::intInt2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_annotate_type_common::intInt2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_annotate_type_common::intInt3::intInt3() {
}

intFx_annotate_type_common::intInt3::~intInt3() {
}

// IMPORT

void
intFx_annotate_type_common::intInt3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_annotate_type_common::intInt3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_annotate_type_common::intInt3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_annotate_type_common::intInt3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_annotate_type_common::intInt3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_annotate_type_common::intInt3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_annotate_type_common::intInt4::intInt4() {
}

intFx_annotate_type_common::intInt4::~intInt4() {
}

// IMPORT

void
intFx_annotate_type_common::intInt4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_annotate_type_common::intInt4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_annotate_type_common::intInt4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_annotate_type_common::intInt4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_annotate_type_common::intInt4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_annotate_type_common::intInt4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_annotate_type_common::intFloat::intFloat() {
}

intFx_annotate_type_common::intFloat::~intFloat() {
}

// IMPORT

void
intFx_annotate_type_common::intFloat::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_annotate_type_common::intFloat::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_annotate_type_common::intFloat::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_annotate_type_common::intFloat::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_annotate_type_common::intFloat::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_annotate_type_common::intFloat::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_annotate_type_common::intFloat2::intFloat2() {
}

intFx_annotate_type_common::intFloat2::~intFloat2() {
}

// IMPORT

void
intFx_annotate_type_common::intFloat2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_annotate_type_common::intFloat2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_annotate_type_common::intFloat2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_annotate_type_common::intFloat2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_annotate_type_common::intFloat2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_annotate_type_common::intFloat2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_annotate_type_common::intFloat3::intFloat3() {
}

intFx_annotate_type_common::intFloat3::~intFloat3() {
}

// IMPORT

void
intFx_annotate_type_common::intFloat3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_annotate_type_common::intFloat3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_annotate_type_common::intFloat3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_annotate_type_common::intFloat3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_annotate_type_common::intFloat3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_annotate_type_common::intFloat3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_annotate_type_common::intFloat4::intFloat4() {
}

intFx_annotate_type_common::intFloat4::~intFloat4() {
}

// IMPORT

void
intFx_annotate_type_common::intFloat4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_annotate_type_common::intFloat4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_annotate_type_common::intFloat4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_annotate_type_common::intFloat4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_annotate_type_common::intFloat4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_annotate_type_common::intFloat4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_annotate_type_common::intFloat2x2::intFloat2x2() {
}

intFx_annotate_type_common::intFloat2x2::~intFloat2x2() {
}

// IMPORT

void
intFx_annotate_type_common::intFloat2x2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_annotate_type_common::intFloat2x2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_annotate_type_common::intFloat2x2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_annotate_type_common::intFloat2x2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_annotate_type_common::intFloat2x2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_annotate_type_common::intFloat2x2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_annotate_type_common::intFloat3x3::intFloat3x3() {
}

intFx_annotate_type_common::intFloat3x3::~intFloat3x3() {
}

// IMPORT

void
intFx_annotate_type_common::intFloat3x3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_annotate_type_common::intFloat3x3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_annotate_type_common::intFloat3x3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_annotate_type_common::intFloat3x3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_annotate_type_common::intFloat3x3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_annotate_type_common::intFloat3x3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_annotate_type_common::intFloat4x4::intFloat4x4() {
}

intFx_annotate_type_common::intFloat4x4::~intFloat4x4() {
}

// IMPORT

void
intFx_annotate_type_common::intFloat4x4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_annotate_type_common::intFloat4x4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_annotate_type_common::intFloat4x4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_annotate_type_common::intFloat4x4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_annotate_type_common::intFloat4x4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_annotate_type_common::intFloat4x4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intFx_annotate_type_common::intString::intString() {
}

intFx_annotate_type_common::intString::~intString() {
}

// IMPORT

void
intFx_annotate_type_common::intString::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intFx_annotate_type_common::intString::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intFx_annotate_type_common::intString::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intFx_annotate_type_common::intString::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intFx_annotate_type_common::intString::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intFx_annotate_type_common::intString::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}


