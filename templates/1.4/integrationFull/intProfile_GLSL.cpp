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
#include "intProfile_GLSL.h"
#include <dom/domProfile_GLSL.h>

daeMetaElement * intProfile_GLSL::_Meta = NULL;
daeMetaElement * intProfile_GLSL::intTechnique::_Meta = NULL;
daeMetaElement * intProfile_GLSL::intTechnique::intPass::_Meta = NULL;
daeMetaElement * intProfile_GLSL::intTechnique::intPass::intDraw::_Meta = NULL;
daeMetaElement * intProfile_GLSL::intTechnique::intPass::intShader::_Meta = NULL;
daeMetaElement * intProfile_GLSL::intTechnique::intPass::intShader::intCompiler_target::_Meta = NULL;
daeMetaElement * intProfile_GLSL::intTechnique::intPass::intShader::intCompiler_options::_Meta = NULL;
daeMetaElement * intProfile_GLSL::intTechnique::intPass::intShader::intName::_Meta = NULL;
daeMetaElement * intProfile_GLSL::intTechnique::intPass::intShader::intBind::_Meta = NULL;
daeMetaElement * intProfile_GLSL::intTechnique::intPass::intShader::intBind::intParam::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intProfile_GLSL::create(daeInt bytes)
{
	intProfile_GLSLRef ref = new(bytes) intProfile_GLSL;
	return ref;
}

daeMetaElement *
intProfile_GLSL::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "profile_GLSL" );
	_Meta->registerClass(intProfile_GLSL::create, &_Meta);

	domProfile_GLSL::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_GLSL));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intProfile_GLSL::intTechnique::create(daeInt bytes)
{
	intProfile_GLSL::intTechniqueRef ref = new(bytes) intProfile_GLSL::intTechnique;
	return ref;
}

daeMetaElement *
intProfile_GLSL::intTechnique::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "technique" );
	_Meta->registerClass(intProfile_GLSL::intTechnique::create, &_Meta);

	domProfile_GLSL::domTechnique::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_GLSL::intTechnique));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intProfile_GLSL::intTechnique::intPass::create(daeInt bytes)
{
	intProfile_GLSL::intTechnique::intPassRef ref = new(bytes) intProfile_GLSL::intTechnique::intPass;
	return ref;
}

daeMetaElement *
intProfile_GLSL::intTechnique::intPass::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "pass" );
	_Meta->registerClass(intProfile_GLSL::intTechnique::intPass::create, &_Meta);

	domProfile_GLSL::domTechnique::domPass::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_GLSL::intTechnique::intPass));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intProfile_GLSL::intTechnique::intPass::intDraw::create(daeInt bytes)
{
	intProfile_GLSL::intTechnique::intPass::intDrawRef ref = new(bytes) intProfile_GLSL::intTechnique::intPass::intDraw;
	return ref;
}

daeMetaElement *
intProfile_GLSL::intTechnique::intPass::intDraw::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "draw" );
	_Meta->registerClass(intProfile_GLSL::intTechnique::intPass::intDraw::create, &_Meta);

	domProfile_GLSL::domTechnique::domPass::domDraw::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_GLSL::intTechnique::intPass::intDraw));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intProfile_GLSL::intTechnique::intPass::intShader::create(daeInt bytes)
{
	intProfile_GLSL::intTechnique::intPass::intShaderRef ref = new(bytes) intProfile_GLSL::intTechnique::intPass::intShader;
	return ref;
}

daeMetaElement *
intProfile_GLSL::intTechnique::intPass::intShader::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "shader" );
	_Meta->registerClass(intProfile_GLSL::intTechnique::intPass::intShader::create, &_Meta);

	domProfile_GLSL::domTechnique::domPass::domShader::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_GLSL::intTechnique::intPass::intShader));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intProfile_GLSL::intTechnique::intPass::intShader::intCompiler_target::create(daeInt bytes)
{
	intProfile_GLSL::intTechnique::intPass::intShader::intCompiler_targetRef ref = new(bytes) intProfile_GLSL::intTechnique::intPass::intShader::intCompiler_target;
	return ref;
}

daeMetaElement *
intProfile_GLSL::intTechnique::intPass::intShader::intCompiler_target::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "compiler_target" );
	_Meta->registerClass(intProfile_GLSL::intTechnique::intPass::intShader::intCompiler_target::create, &_Meta);

	domProfile_GLSL::domTechnique::domPass::domShader::domCompiler_target::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_GLSL::intTechnique::intPass::intShader::intCompiler_target));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intProfile_GLSL::intTechnique::intPass::intShader::intCompiler_options::create(daeInt bytes)
{
	intProfile_GLSL::intTechnique::intPass::intShader::intCompiler_optionsRef ref = new(bytes) intProfile_GLSL::intTechnique::intPass::intShader::intCompiler_options;
	return ref;
}

daeMetaElement *
intProfile_GLSL::intTechnique::intPass::intShader::intCompiler_options::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "compiler_options" );
	_Meta->registerClass(intProfile_GLSL::intTechnique::intPass::intShader::intCompiler_options::create, &_Meta);

	domProfile_GLSL::domTechnique::domPass::domShader::domCompiler_options::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_GLSL::intTechnique::intPass::intShader::intCompiler_options));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intProfile_GLSL::intTechnique::intPass::intShader::intName::create(daeInt bytes)
{
	intProfile_GLSL::intTechnique::intPass::intShader::intNameRef ref = new(bytes) intProfile_GLSL::intTechnique::intPass::intShader::intName;
	return ref;
}

daeMetaElement *
intProfile_GLSL::intTechnique::intPass::intShader::intName::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "name" );
	_Meta->registerClass(intProfile_GLSL::intTechnique::intPass::intShader::intName::create, &_Meta);

	domProfile_GLSL::domTechnique::domPass::domShader::domName::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_GLSL::intTechnique::intPass::intShader::intName));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intProfile_GLSL::intTechnique::intPass::intShader::intBind::create(daeInt bytes)
{
	intProfile_GLSL::intTechnique::intPass::intShader::intBindRef ref = new(bytes) intProfile_GLSL::intTechnique::intPass::intShader::intBind;
	return ref;
}

daeMetaElement *
intProfile_GLSL::intTechnique::intPass::intShader::intBind::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bind" );
	_Meta->registerClass(intProfile_GLSL::intTechnique::intPass::intShader::intBind::create, &_Meta);

	domProfile_GLSL::domTechnique::domPass::domShader::domBind::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_GLSL::intTechnique::intPass::intShader::intBind));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intProfile_GLSL::intTechnique::intPass::intShader::intBind::intParam::create(daeInt bytes)
{
	intProfile_GLSL::intTechnique::intPass::intShader::intBind::intParamRef ref = new(bytes) intProfile_GLSL::intTechnique::intPass::intShader::intBind::intParam;
	return ref;
}

daeMetaElement *
intProfile_GLSL::intTechnique::intPass::intShader::intBind::intParam::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "param" );
	_Meta->registerClass(intProfile_GLSL::intTechnique::intPass::intShader::intBind::intParam::create, &_Meta);

	domProfile_GLSL::domTechnique::domPass::domShader::domBind::domParam::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_GLSL::intTechnique::intPass::intShader::intBind::intParam));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// CONSTRUCTOR AND DESTRUCTOR
intProfile_GLSL::intProfile_GLSL() {
}

intProfile_GLSL::~intProfile_GLSL() {
}

// IMPORT

void
intProfile_GLSL::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_GLSL::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_GLSL::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_GLSL::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_GLSL::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_GLSL::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intProfile_GLSL::intTechnique::intTechnique() {
}

intProfile_GLSL::intTechnique::~intTechnique() {
}

// IMPORT

void
intProfile_GLSL::intTechnique::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_GLSL::intTechnique::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_GLSL::intTechnique::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_GLSL::intTechnique::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_GLSL::intTechnique::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_GLSL::intTechnique::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intProfile_GLSL::intTechnique::intPass::intPass() {
}

intProfile_GLSL::intTechnique::intPass::~intPass() {
}

// IMPORT

void
intProfile_GLSL::intTechnique::intPass::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_GLSL::intTechnique::intPass::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_GLSL::intTechnique::intPass::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_GLSL::intTechnique::intPass::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_GLSL::intTechnique::intPass::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_GLSL::intTechnique::intPass::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intProfile_GLSL::intTechnique::intPass::intDraw::intDraw() {
}

intProfile_GLSL::intTechnique::intPass::intDraw::~intDraw() {
}

// IMPORT

void
intProfile_GLSL::intTechnique::intPass::intDraw::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_GLSL::intTechnique::intPass::intDraw::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_GLSL::intTechnique::intPass::intDraw::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_GLSL::intTechnique::intPass::intDraw::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_GLSL::intTechnique::intPass::intDraw::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_GLSL::intTechnique::intPass::intDraw::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intProfile_GLSL::intTechnique::intPass::intShader::intShader() {
}

intProfile_GLSL::intTechnique::intPass::intShader::~intShader() {
}

// IMPORT

void
intProfile_GLSL::intTechnique::intPass::intShader::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_GLSL::intTechnique::intPass::intShader::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_GLSL::intTechnique::intPass::intShader::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_GLSL::intTechnique::intPass::intShader::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_GLSL::intTechnique::intPass::intShader::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_GLSL::intTechnique::intPass::intShader::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intProfile_GLSL::intTechnique::intPass::intShader::intCompiler_target::intCompiler_target() {
}

intProfile_GLSL::intTechnique::intPass::intShader::intCompiler_target::~intCompiler_target() {
}

// IMPORT

void
intProfile_GLSL::intTechnique::intPass::intShader::intCompiler_target::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_GLSL::intTechnique::intPass::intShader::intCompiler_target::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_GLSL::intTechnique::intPass::intShader::intCompiler_target::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_GLSL::intTechnique::intPass::intShader::intCompiler_target::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_GLSL::intTechnique::intPass::intShader::intCompiler_target::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_GLSL::intTechnique::intPass::intShader::intCompiler_target::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intProfile_GLSL::intTechnique::intPass::intShader::intCompiler_options::intCompiler_options() {
}

intProfile_GLSL::intTechnique::intPass::intShader::intCompiler_options::~intCompiler_options() {
}

// IMPORT

void
intProfile_GLSL::intTechnique::intPass::intShader::intCompiler_options::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_GLSL::intTechnique::intPass::intShader::intCompiler_options::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_GLSL::intTechnique::intPass::intShader::intCompiler_options::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_GLSL::intTechnique::intPass::intShader::intCompiler_options::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_GLSL::intTechnique::intPass::intShader::intCompiler_options::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_GLSL::intTechnique::intPass::intShader::intCompiler_options::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intProfile_GLSL::intTechnique::intPass::intShader::intName::intName() {
}

intProfile_GLSL::intTechnique::intPass::intShader::intName::~intName() {
}

// IMPORT

void
intProfile_GLSL::intTechnique::intPass::intShader::intName::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_GLSL::intTechnique::intPass::intShader::intName::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_GLSL::intTechnique::intPass::intShader::intName::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_GLSL::intTechnique::intPass::intShader::intName::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_GLSL::intTechnique::intPass::intShader::intName::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_GLSL::intTechnique::intPass::intShader::intName::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intProfile_GLSL::intTechnique::intPass::intShader::intBind::intBind() {
}

intProfile_GLSL::intTechnique::intPass::intShader::intBind::~intBind() {
}

// IMPORT

void
intProfile_GLSL::intTechnique::intPass::intShader::intBind::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_GLSL::intTechnique::intPass::intShader::intBind::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_GLSL::intTechnique::intPass::intShader::intBind::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_GLSL::intTechnique::intPass::intShader::intBind::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_GLSL::intTechnique::intPass::intShader::intBind::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_GLSL::intTechnique::intPass::intShader::intBind::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intProfile_GLSL::intTechnique::intPass::intShader::intBind::intParam::intParam() {
}

intProfile_GLSL::intTechnique::intPass::intShader::intBind::intParam::~intParam() {
}

// IMPORT

void
intProfile_GLSL::intTechnique::intPass::intShader::intBind::intParam::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_GLSL::intTechnique::intPass::intShader::intBind::intParam::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_GLSL::intTechnique::intPass::intShader::intBind::intParam::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_GLSL::intTechnique::intPass::intShader::intBind::intParam::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_GLSL::intTechnique::intPass::intShader::intBind::intParam::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_GLSL::intTechnique::intPass::intShader::intBind::intParam::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}


