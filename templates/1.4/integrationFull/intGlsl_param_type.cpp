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
#include "intGlsl_param_type.h"
#include <dom/domGlsl_param_type.h>

daeMetaElement * intGlsl_param_type::_Meta = NULL;
daeMetaElement * intGlsl_param_type::intBool::_Meta = NULL;
daeMetaElement * intGlsl_param_type::intBool2::_Meta = NULL;
daeMetaElement * intGlsl_param_type::intBool3::_Meta = NULL;
daeMetaElement * intGlsl_param_type::intBool4::_Meta = NULL;
daeMetaElement * intGlsl_param_type::intFloat::_Meta = NULL;
daeMetaElement * intGlsl_param_type::intFloat2::_Meta = NULL;
daeMetaElement * intGlsl_param_type::intFloat3::_Meta = NULL;
daeMetaElement * intGlsl_param_type::intFloat4::_Meta = NULL;
daeMetaElement * intGlsl_param_type::intFloat2x2::_Meta = NULL;
daeMetaElement * intGlsl_param_type::intFloat3x3::_Meta = NULL;
daeMetaElement * intGlsl_param_type::intFloat4x4::_Meta = NULL;
daeMetaElement * intGlsl_param_type::intInt::_Meta = NULL;
daeMetaElement * intGlsl_param_type::intInt2::_Meta = NULL;
daeMetaElement * intGlsl_param_type::intInt3::_Meta = NULL;
daeMetaElement * intGlsl_param_type::intInt4::_Meta = NULL;
daeMetaElement * intGlsl_param_type::intEnum::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intGlsl_param_type::create(daeInt bytes)
{
	intGlsl_param_typeRef ref = new(bytes) intGlsl_param_type;
	return ref;
}

daeMetaElement *
intGlsl_param_type::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "glsl_param_type" );
	_Meta->registerClass(intGlsl_param_type::create, &_Meta);

	domGlsl_param_type::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGlsl_param_type));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGlsl_param_type::intBool::create(daeInt bytes)
{
	intGlsl_param_type::intBoolRef ref = new(bytes) intGlsl_param_type::intBool;
	return ref;
}

daeMetaElement *
intGlsl_param_type::intBool::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bool" );
	_Meta->registerClass(intGlsl_param_type::intBool::create, &_Meta);

	domGlsl_param_type::domBool::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGlsl_param_type::intBool));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGlsl_param_type::intBool2::create(daeInt bytes)
{
	intGlsl_param_type::intBool2Ref ref = new(bytes) intGlsl_param_type::intBool2;
	return ref;
}

daeMetaElement *
intGlsl_param_type::intBool2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bool2" );
	_Meta->registerClass(intGlsl_param_type::intBool2::create, &_Meta);

	domGlsl_param_type::domBool2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGlsl_param_type::intBool2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGlsl_param_type::intBool3::create(daeInt bytes)
{
	intGlsl_param_type::intBool3Ref ref = new(bytes) intGlsl_param_type::intBool3;
	return ref;
}

daeMetaElement *
intGlsl_param_type::intBool3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bool3" );
	_Meta->registerClass(intGlsl_param_type::intBool3::create, &_Meta);

	domGlsl_param_type::domBool3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGlsl_param_type::intBool3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGlsl_param_type::intBool4::create(daeInt bytes)
{
	intGlsl_param_type::intBool4Ref ref = new(bytes) intGlsl_param_type::intBool4;
	return ref;
}

daeMetaElement *
intGlsl_param_type::intBool4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bool4" );
	_Meta->registerClass(intGlsl_param_type::intBool4::create, &_Meta);

	domGlsl_param_type::domBool4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGlsl_param_type::intBool4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGlsl_param_type::intFloat::create(daeInt bytes)
{
	intGlsl_param_type::intFloatRef ref = new(bytes) intGlsl_param_type::intFloat;
	return ref;
}

daeMetaElement *
intGlsl_param_type::intFloat::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float" );
	_Meta->registerClass(intGlsl_param_type::intFloat::create, &_Meta);

	domGlsl_param_type::domFloat::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGlsl_param_type::intFloat));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGlsl_param_type::intFloat2::create(daeInt bytes)
{
	intGlsl_param_type::intFloat2Ref ref = new(bytes) intGlsl_param_type::intFloat2;
	return ref;
}

daeMetaElement *
intGlsl_param_type::intFloat2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float2" );
	_Meta->registerClass(intGlsl_param_type::intFloat2::create, &_Meta);

	domGlsl_param_type::domFloat2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGlsl_param_type::intFloat2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGlsl_param_type::intFloat3::create(daeInt bytes)
{
	intGlsl_param_type::intFloat3Ref ref = new(bytes) intGlsl_param_type::intFloat3;
	return ref;
}

daeMetaElement *
intGlsl_param_type::intFloat3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float3" );
	_Meta->registerClass(intGlsl_param_type::intFloat3::create, &_Meta);

	domGlsl_param_type::domFloat3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGlsl_param_type::intFloat3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGlsl_param_type::intFloat4::create(daeInt bytes)
{
	intGlsl_param_type::intFloat4Ref ref = new(bytes) intGlsl_param_type::intFloat4;
	return ref;
}

daeMetaElement *
intGlsl_param_type::intFloat4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float4" );
	_Meta->registerClass(intGlsl_param_type::intFloat4::create, &_Meta);

	domGlsl_param_type::domFloat4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGlsl_param_type::intFloat4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGlsl_param_type::intFloat2x2::create(daeInt bytes)
{
	intGlsl_param_type::intFloat2x2Ref ref = new(bytes) intGlsl_param_type::intFloat2x2;
	return ref;
}

daeMetaElement *
intGlsl_param_type::intFloat2x2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float2x2" );
	_Meta->registerClass(intGlsl_param_type::intFloat2x2::create, &_Meta);

	domGlsl_param_type::domFloat2x2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGlsl_param_type::intFloat2x2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGlsl_param_type::intFloat3x3::create(daeInt bytes)
{
	intGlsl_param_type::intFloat3x3Ref ref = new(bytes) intGlsl_param_type::intFloat3x3;
	return ref;
}

daeMetaElement *
intGlsl_param_type::intFloat3x3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float3x3" );
	_Meta->registerClass(intGlsl_param_type::intFloat3x3::create, &_Meta);

	domGlsl_param_type::domFloat3x3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGlsl_param_type::intFloat3x3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGlsl_param_type::intFloat4x4::create(daeInt bytes)
{
	intGlsl_param_type::intFloat4x4Ref ref = new(bytes) intGlsl_param_type::intFloat4x4;
	return ref;
}

daeMetaElement *
intGlsl_param_type::intFloat4x4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float4x4" );
	_Meta->registerClass(intGlsl_param_type::intFloat4x4::create, &_Meta);

	domGlsl_param_type::domFloat4x4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGlsl_param_type::intFloat4x4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGlsl_param_type::intInt::create(daeInt bytes)
{
	intGlsl_param_type::intIntRef ref = new(bytes) intGlsl_param_type::intInt;
	return ref;
}

daeMetaElement *
intGlsl_param_type::intInt::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "int" );
	_Meta->registerClass(intGlsl_param_type::intInt::create, &_Meta);

	domGlsl_param_type::domInt::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGlsl_param_type::intInt));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGlsl_param_type::intInt2::create(daeInt bytes)
{
	intGlsl_param_type::intInt2Ref ref = new(bytes) intGlsl_param_type::intInt2;
	return ref;
}

daeMetaElement *
intGlsl_param_type::intInt2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "int2" );
	_Meta->registerClass(intGlsl_param_type::intInt2::create, &_Meta);

	domGlsl_param_type::domInt2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGlsl_param_type::intInt2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGlsl_param_type::intInt3::create(daeInt bytes)
{
	intGlsl_param_type::intInt3Ref ref = new(bytes) intGlsl_param_type::intInt3;
	return ref;
}

daeMetaElement *
intGlsl_param_type::intInt3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "int3" );
	_Meta->registerClass(intGlsl_param_type::intInt3::create, &_Meta);

	domGlsl_param_type::domInt3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGlsl_param_type::intInt3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGlsl_param_type::intInt4::create(daeInt bytes)
{
	intGlsl_param_type::intInt4Ref ref = new(bytes) intGlsl_param_type::intInt4;
	return ref;
}

daeMetaElement *
intGlsl_param_type::intInt4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "int4" );
	_Meta->registerClass(intGlsl_param_type::intInt4::create, &_Meta);

	domGlsl_param_type::domInt4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGlsl_param_type::intInt4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGlsl_param_type::intEnum::create(daeInt bytes)
{
	intGlsl_param_type::intEnumRef ref = new(bytes) intGlsl_param_type::intEnum;
	return ref;
}

daeMetaElement *
intGlsl_param_type::intEnum::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "enum" );
	_Meta->registerClass(intGlsl_param_type::intEnum::create, &_Meta);

	domGlsl_param_type::domEnum::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGlsl_param_type::intEnum));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// CONSTRUCTOR AND DESTRUCTOR
intGlsl_param_type::intGlsl_param_type() {
}

intGlsl_param_type::~intGlsl_param_type() {
}

// IMPORT

void
intGlsl_param_type::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGlsl_param_type::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGlsl_param_type::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGlsl_param_type::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGlsl_param_type::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGlsl_param_type::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGlsl_param_type::intBool::intBool() {
}

intGlsl_param_type::intBool::~intBool() {
}

// IMPORT

void
intGlsl_param_type::intBool::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGlsl_param_type::intBool::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGlsl_param_type::intBool::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGlsl_param_type::intBool::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGlsl_param_type::intBool::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGlsl_param_type::intBool::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGlsl_param_type::intBool2::intBool2() {
}

intGlsl_param_type::intBool2::~intBool2() {
}

// IMPORT

void
intGlsl_param_type::intBool2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGlsl_param_type::intBool2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGlsl_param_type::intBool2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGlsl_param_type::intBool2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGlsl_param_type::intBool2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGlsl_param_type::intBool2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGlsl_param_type::intBool3::intBool3() {
}

intGlsl_param_type::intBool3::~intBool3() {
}

// IMPORT

void
intGlsl_param_type::intBool3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGlsl_param_type::intBool3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGlsl_param_type::intBool3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGlsl_param_type::intBool3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGlsl_param_type::intBool3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGlsl_param_type::intBool3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGlsl_param_type::intBool4::intBool4() {
}

intGlsl_param_type::intBool4::~intBool4() {
}

// IMPORT

void
intGlsl_param_type::intBool4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGlsl_param_type::intBool4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGlsl_param_type::intBool4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGlsl_param_type::intBool4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGlsl_param_type::intBool4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGlsl_param_type::intBool4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGlsl_param_type::intFloat::intFloat() {
}

intGlsl_param_type::intFloat::~intFloat() {
}

// IMPORT

void
intGlsl_param_type::intFloat::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGlsl_param_type::intFloat::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGlsl_param_type::intFloat::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGlsl_param_type::intFloat::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGlsl_param_type::intFloat::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGlsl_param_type::intFloat::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGlsl_param_type::intFloat2::intFloat2() {
}

intGlsl_param_type::intFloat2::~intFloat2() {
}

// IMPORT

void
intGlsl_param_type::intFloat2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGlsl_param_type::intFloat2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGlsl_param_type::intFloat2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGlsl_param_type::intFloat2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGlsl_param_type::intFloat2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGlsl_param_type::intFloat2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGlsl_param_type::intFloat3::intFloat3() {
}

intGlsl_param_type::intFloat3::~intFloat3() {
}

// IMPORT

void
intGlsl_param_type::intFloat3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGlsl_param_type::intFloat3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGlsl_param_type::intFloat3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGlsl_param_type::intFloat3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGlsl_param_type::intFloat3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGlsl_param_type::intFloat3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGlsl_param_type::intFloat4::intFloat4() {
}

intGlsl_param_type::intFloat4::~intFloat4() {
}

// IMPORT

void
intGlsl_param_type::intFloat4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGlsl_param_type::intFloat4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGlsl_param_type::intFloat4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGlsl_param_type::intFloat4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGlsl_param_type::intFloat4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGlsl_param_type::intFloat4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGlsl_param_type::intFloat2x2::intFloat2x2() {
}

intGlsl_param_type::intFloat2x2::~intFloat2x2() {
}

// IMPORT

void
intGlsl_param_type::intFloat2x2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGlsl_param_type::intFloat2x2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGlsl_param_type::intFloat2x2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGlsl_param_type::intFloat2x2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGlsl_param_type::intFloat2x2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGlsl_param_type::intFloat2x2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGlsl_param_type::intFloat3x3::intFloat3x3() {
}

intGlsl_param_type::intFloat3x3::~intFloat3x3() {
}

// IMPORT

void
intGlsl_param_type::intFloat3x3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGlsl_param_type::intFloat3x3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGlsl_param_type::intFloat3x3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGlsl_param_type::intFloat3x3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGlsl_param_type::intFloat3x3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGlsl_param_type::intFloat3x3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGlsl_param_type::intFloat4x4::intFloat4x4() {
}

intGlsl_param_type::intFloat4x4::~intFloat4x4() {
}

// IMPORT

void
intGlsl_param_type::intFloat4x4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGlsl_param_type::intFloat4x4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGlsl_param_type::intFloat4x4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGlsl_param_type::intFloat4x4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGlsl_param_type::intFloat4x4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGlsl_param_type::intFloat4x4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGlsl_param_type::intInt::intInt() {
}

intGlsl_param_type::intInt::~intInt() {
}

// IMPORT

void
intGlsl_param_type::intInt::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGlsl_param_type::intInt::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGlsl_param_type::intInt::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGlsl_param_type::intInt::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGlsl_param_type::intInt::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGlsl_param_type::intInt::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGlsl_param_type::intInt2::intInt2() {
}

intGlsl_param_type::intInt2::~intInt2() {
}

// IMPORT

void
intGlsl_param_type::intInt2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGlsl_param_type::intInt2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGlsl_param_type::intInt2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGlsl_param_type::intInt2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGlsl_param_type::intInt2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGlsl_param_type::intInt2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGlsl_param_type::intInt3::intInt3() {
}

intGlsl_param_type::intInt3::~intInt3() {
}

// IMPORT

void
intGlsl_param_type::intInt3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGlsl_param_type::intInt3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGlsl_param_type::intInt3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGlsl_param_type::intInt3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGlsl_param_type::intInt3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGlsl_param_type::intInt3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGlsl_param_type::intInt4::intInt4() {
}

intGlsl_param_type::intInt4::~intInt4() {
}

// IMPORT

void
intGlsl_param_type::intInt4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGlsl_param_type::intInt4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGlsl_param_type::intInt4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGlsl_param_type::intInt4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGlsl_param_type::intInt4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGlsl_param_type::intInt4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGlsl_param_type::intEnum::intEnum() {
}

intGlsl_param_type::intEnum::~intEnum() {
}

// IMPORT

void
intGlsl_param_type::intEnum::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGlsl_param_type::intEnum::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGlsl_param_type::intEnum::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGlsl_param_type::intEnum::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGlsl_param_type::intEnum::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGlsl_param_type::intEnum::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}


