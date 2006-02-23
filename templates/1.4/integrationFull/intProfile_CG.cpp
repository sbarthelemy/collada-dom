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
#include "intProfile_CG.h"
#include <dom/domProfile_CG.h>

daeMetaElement * intProfile_CG::_Meta = NULL;
daeMetaElement * intProfile_CG::intTechnique::_Meta = NULL;
daeMetaElement * intProfile_CG::intTechnique::intPass::_Meta = NULL;
daeMetaElement * intProfile_CG::intTechnique::intPass::intDraw::_Meta = NULL;
daeMetaElement * intProfile_CG::intTechnique::intPass::intShader::_Meta = NULL;
daeMetaElement * intProfile_CG::intTechnique::intPass::intShader::intCompiler_target::_Meta = NULL;
daeMetaElement * intProfile_CG::intTechnique::intPass::intShader::intCompiler_options::_Meta = NULL;
daeMetaElement * intProfile_CG::intTechnique::intPass::intShader::intName::_Meta = NULL;
daeMetaElement * intProfile_CG::intTechnique::intPass::intShader::intBind::_Meta = NULL;
daeMetaElement * intProfile_CG::intTechnique::intPass::intShader::intBind::intParam::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intProfile_CG::create(daeInt bytes)
{
	intProfile_CGRef ref = new(bytes) intProfile_CG;
	return ref;
}

daeMetaElement *
intProfile_CG::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "profile_CG" );
	_Meta->setStaticPointerAddress(&intProfile_CG::_Meta);
	_Meta->registerConstructor(intProfile_CG::create);

	domProfile_CG::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_CG));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intProfile_CG::intTechnique::create(daeInt bytes)
{
	intProfile_CG::intTechniqueRef ref = new(bytes) intProfile_CG::intTechnique;
	return ref;
}

daeMetaElement *
intProfile_CG::intTechnique::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "technique" );
	_Meta->setStaticPointerAddress(&intProfile_CG::intTechnique::_Meta);
	_Meta->registerConstructor(intProfile_CG::intTechnique::create);

	domProfile_CG::domTechnique::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_CG::intTechnique));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intProfile_CG::intTechnique::intPass::create(daeInt bytes)
{
	intProfile_CG::intTechnique::intPassRef ref = new(bytes) intProfile_CG::intTechnique::intPass;
	return ref;
}

daeMetaElement *
intProfile_CG::intTechnique::intPass::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "pass" );
	_Meta->setStaticPointerAddress(&intProfile_CG::intTechnique::intPass::_Meta);
	_Meta->registerConstructor(intProfile_CG::intTechnique::intPass::create);

	domProfile_CG::domTechnique::domPass::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_CG::intTechnique::intPass));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intProfile_CG::intTechnique::intPass::intDraw::create(daeInt bytes)
{
	intProfile_CG::intTechnique::intPass::intDrawRef ref = new(bytes) intProfile_CG::intTechnique::intPass::intDraw;
	return ref;
}

daeMetaElement *
intProfile_CG::intTechnique::intPass::intDraw::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "draw" );
	_Meta->setStaticPointerAddress(&intProfile_CG::intTechnique::intPass::intDraw::_Meta);
	_Meta->registerConstructor(intProfile_CG::intTechnique::intPass::intDraw::create);

	domProfile_CG::domTechnique::domPass::domDraw::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_CG::intTechnique::intPass::intDraw));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intProfile_CG::intTechnique::intPass::intShader::create(daeInt bytes)
{
	intProfile_CG::intTechnique::intPass::intShaderRef ref = new(bytes) intProfile_CG::intTechnique::intPass::intShader;
	return ref;
}

daeMetaElement *
intProfile_CG::intTechnique::intPass::intShader::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "shader" );
	_Meta->setStaticPointerAddress(&intProfile_CG::intTechnique::intPass::intShader::_Meta);
	_Meta->registerConstructor(intProfile_CG::intTechnique::intPass::intShader::create);

	domProfile_CG::domTechnique::domPass::domShader::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_CG::intTechnique::intPass::intShader));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intProfile_CG::intTechnique::intPass::intShader::intCompiler_target::create(daeInt bytes)
{
	intProfile_CG::intTechnique::intPass::intShader::intCompiler_targetRef ref = new(bytes) intProfile_CG::intTechnique::intPass::intShader::intCompiler_target;
	return ref;
}

daeMetaElement *
intProfile_CG::intTechnique::intPass::intShader::intCompiler_target::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "compiler_target" );
	_Meta->setStaticPointerAddress(&intProfile_CG::intTechnique::intPass::intShader::intCompiler_target::_Meta);
	_Meta->registerConstructor(intProfile_CG::intTechnique::intPass::intShader::intCompiler_target::create);

	domProfile_CG::domTechnique::domPass::domShader::domCompiler_target::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_CG::intTechnique::intPass::intShader::intCompiler_target));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intProfile_CG::intTechnique::intPass::intShader::intCompiler_options::create(daeInt bytes)
{
	intProfile_CG::intTechnique::intPass::intShader::intCompiler_optionsRef ref = new(bytes) intProfile_CG::intTechnique::intPass::intShader::intCompiler_options;
	return ref;
}

daeMetaElement *
intProfile_CG::intTechnique::intPass::intShader::intCompiler_options::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "compiler_options" );
	_Meta->setStaticPointerAddress(&intProfile_CG::intTechnique::intPass::intShader::intCompiler_options::_Meta);
	_Meta->registerConstructor(intProfile_CG::intTechnique::intPass::intShader::intCompiler_options::create);

	domProfile_CG::domTechnique::domPass::domShader::domCompiler_options::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_CG::intTechnique::intPass::intShader::intCompiler_options));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intProfile_CG::intTechnique::intPass::intShader::intName::create(daeInt bytes)
{
	intProfile_CG::intTechnique::intPass::intShader::intNameRef ref = new(bytes) intProfile_CG::intTechnique::intPass::intShader::intName;
	return ref;
}

daeMetaElement *
intProfile_CG::intTechnique::intPass::intShader::intName::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "name" );
	_Meta->setStaticPointerAddress(&intProfile_CG::intTechnique::intPass::intShader::intName::_Meta);
	_Meta->registerConstructor(intProfile_CG::intTechnique::intPass::intShader::intName::create);

	domProfile_CG::domTechnique::domPass::domShader::domName::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_CG::intTechnique::intPass::intShader::intName));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intProfile_CG::intTechnique::intPass::intShader::intBind::create(daeInt bytes)
{
	intProfile_CG::intTechnique::intPass::intShader::intBindRef ref = new(bytes) intProfile_CG::intTechnique::intPass::intShader::intBind;
	return ref;
}

daeMetaElement *
intProfile_CG::intTechnique::intPass::intShader::intBind::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bind" );
	_Meta->setStaticPointerAddress(&intProfile_CG::intTechnique::intPass::intShader::intBind::_Meta);
	_Meta->registerConstructor(intProfile_CG::intTechnique::intPass::intShader::intBind::create);

	domProfile_CG::domTechnique::domPass::domShader::domBind::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_CG::intTechnique::intPass::intShader::intBind));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intProfile_CG::intTechnique::intPass::intShader::intBind::intParam::create(daeInt bytes)
{
	intProfile_CG::intTechnique::intPass::intShader::intBind::intParamRef ref = new(bytes) intProfile_CG::intTechnique::intPass::intShader::intBind::intParam;
	return ref;
}

daeMetaElement *
intProfile_CG::intTechnique::intPass::intShader::intBind::intParam::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "param" );
	_Meta->setStaticPointerAddress(&intProfile_CG::intTechnique::intPass::intShader::intBind::intParam::_Meta);
	_Meta->registerConstructor(intProfile_CG::intTechnique::intPass::intShader::intBind::intParam::create);

	domProfile_CG::domTechnique::domPass::domShader::domBind::domParam::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intProfile_CG::intTechnique::intPass::intShader::intBind::intParam));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// CONSTRUCTOR AND DESTRUCTOR
intProfile_CG::intProfile_CG() {
}

intProfile_CG::~intProfile_CG() {
}

// IMPORT

void
intProfile_CG::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_CG::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_CG::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_CG::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_CG::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_CG::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intProfile_CG::intTechnique::intTechnique() {
}

intProfile_CG::intTechnique::~intTechnique() {
}

// IMPORT

void
intProfile_CG::intTechnique::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_CG::intTechnique::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_CG::intTechnique::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_CG::intTechnique::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_CG::intTechnique::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_CG::intTechnique::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intProfile_CG::intTechnique::intPass::intPass() {
}

intProfile_CG::intTechnique::intPass::~intPass() {
}

// IMPORT

void
intProfile_CG::intTechnique::intPass::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_CG::intTechnique::intPass::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_CG::intTechnique::intPass::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_CG::intTechnique::intPass::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_CG::intTechnique::intPass::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_CG::intTechnique::intPass::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intProfile_CG::intTechnique::intPass::intDraw::intDraw() {
}

intProfile_CG::intTechnique::intPass::intDraw::~intDraw() {
}

// IMPORT

void
intProfile_CG::intTechnique::intPass::intDraw::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_CG::intTechnique::intPass::intDraw::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_CG::intTechnique::intPass::intDraw::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_CG::intTechnique::intPass::intDraw::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_CG::intTechnique::intPass::intDraw::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_CG::intTechnique::intPass::intDraw::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intProfile_CG::intTechnique::intPass::intShader::intShader() {
}

intProfile_CG::intTechnique::intPass::intShader::~intShader() {
}

// IMPORT

void
intProfile_CG::intTechnique::intPass::intShader::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_CG::intTechnique::intPass::intShader::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_CG::intTechnique::intPass::intShader::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_CG::intTechnique::intPass::intShader::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_CG::intTechnique::intPass::intShader::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_CG::intTechnique::intPass::intShader::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intProfile_CG::intTechnique::intPass::intShader::intCompiler_target::intCompiler_target() {
}

intProfile_CG::intTechnique::intPass::intShader::intCompiler_target::~intCompiler_target() {
}

// IMPORT

void
intProfile_CG::intTechnique::intPass::intShader::intCompiler_target::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_CG::intTechnique::intPass::intShader::intCompiler_target::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_CG::intTechnique::intPass::intShader::intCompiler_target::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_CG::intTechnique::intPass::intShader::intCompiler_target::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_CG::intTechnique::intPass::intShader::intCompiler_target::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_CG::intTechnique::intPass::intShader::intCompiler_target::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intProfile_CG::intTechnique::intPass::intShader::intCompiler_options::intCompiler_options() {
}

intProfile_CG::intTechnique::intPass::intShader::intCompiler_options::~intCompiler_options() {
}

// IMPORT

void
intProfile_CG::intTechnique::intPass::intShader::intCompiler_options::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_CG::intTechnique::intPass::intShader::intCompiler_options::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_CG::intTechnique::intPass::intShader::intCompiler_options::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_CG::intTechnique::intPass::intShader::intCompiler_options::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_CG::intTechnique::intPass::intShader::intCompiler_options::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_CG::intTechnique::intPass::intShader::intCompiler_options::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intProfile_CG::intTechnique::intPass::intShader::intName::intName() {
}

intProfile_CG::intTechnique::intPass::intShader::intName::~intName() {
}

// IMPORT

void
intProfile_CG::intTechnique::intPass::intShader::intName::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_CG::intTechnique::intPass::intShader::intName::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_CG::intTechnique::intPass::intShader::intName::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_CG::intTechnique::intPass::intShader::intName::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_CG::intTechnique::intPass::intShader::intName::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_CG::intTechnique::intPass::intShader::intName::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intProfile_CG::intTechnique::intPass::intShader::intBind::intBind() {
}

intProfile_CG::intTechnique::intPass::intShader::intBind::~intBind() {
}

// IMPORT

void
intProfile_CG::intTechnique::intPass::intShader::intBind::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_CG::intTechnique::intPass::intShader::intBind::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_CG::intTechnique::intPass::intShader::intBind::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_CG::intTechnique::intPass::intShader::intBind::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_CG::intTechnique::intPass::intShader::intBind::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_CG::intTechnique::intPass::intShader::intBind::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intProfile_CG::intTechnique::intPass::intShader::intBind::intParam::intParam() {
}

intProfile_CG::intTechnique::intPass::intShader::intBind::intParam::~intParam() {
}

// IMPORT

void
intProfile_CG::intTechnique::intPass::intShader::intBind::intParam::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intProfile_CG::intTechnique::intPass::intShader::intBind::intParam::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intProfile_CG::intTechnique::intPass::intShader::intBind::intParam::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intProfile_CG::intTechnique::intPass::intShader::intBind::intParam::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intProfile_CG::intTechnique::intPass::intShader::intBind::intParam::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intProfile_CG::intTechnique::intPass::intShader::intBind::intParam::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}


