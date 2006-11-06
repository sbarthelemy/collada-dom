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
#include "intRigid_constraint.h"
#include <dom/domRigid_constraint.h>

daeMetaElement * intRigid_constraint::_Meta = NULL;
daeMetaElement * intRigid_constraint::intRef_attachment::_Meta = NULL;
daeMetaElement * intRigid_constraint::intAttachment::_Meta = NULL;
daeMetaElement * intRigid_constraint::intTechnique_common::_Meta = NULL;
daeMetaElement * intRigid_constraint::intTechnique_common::intEnabled::_Meta = NULL;
daeMetaElement * intRigid_constraint::intTechnique_common::intInterpenetrate::_Meta = NULL;
daeMetaElement * intRigid_constraint::intTechnique_common::intLimits::_Meta = NULL;
daeMetaElement * intRigid_constraint::intTechnique_common::intLimits::intSwing_cone_and_twist::_Meta = NULL;
daeMetaElement * intRigid_constraint::intTechnique_common::intLimits::intLinear::_Meta = NULL;
daeMetaElement * intRigid_constraint::intTechnique_common::intSpring::_Meta = NULL;
daeMetaElement * intRigid_constraint::intTechnique_common::intSpring::intAngular::_Meta = NULL;
daeMetaElement * intRigid_constraint::intTechnique_common::intSpring::intLinear::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intRigid_constraint::create(daeInt bytes)
{
	intRigid_constraintRef ref = new(bytes) intRigid_constraint;
	return ref;
}

daeMetaElement *
intRigid_constraint::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "rigid_constraint" );
	_Meta->registerClass(intRigid_constraint::create, &_Meta);

	domRigid_constraint::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intRigid_constraint));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intRigid_constraint::intRef_attachment::create(daeInt bytes)
{
	intRigid_constraint::intRef_attachmentRef ref = new(bytes) intRigid_constraint::intRef_attachment;
	return ref;
}

daeMetaElement *
intRigid_constraint::intRef_attachment::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "ref_attachment" );
	_Meta->registerClass(intRigid_constraint::intRef_attachment::create, &_Meta);

	domRigid_constraint::domRef_attachment::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intRigid_constraint::intRef_attachment));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intRigid_constraint::intAttachment::create(daeInt bytes)
{
	intRigid_constraint::intAttachmentRef ref = new(bytes) intRigid_constraint::intAttachment;
	return ref;
}

daeMetaElement *
intRigid_constraint::intAttachment::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "attachment" );
	_Meta->registerClass(intRigid_constraint::intAttachment::create, &_Meta);

	domRigid_constraint::domAttachment::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intRigid_constraint::intAttachment));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intRigid_constraint::intTechnique_common::create(daeInt bytes)
{
	intRigid_constraint::intTechnique_commonRef ref = new(bytes) intRigid_constraint::intTechnique_common;
	return ref;
}

daeMetaElement *
intRigid_constraint::intTechnique_common::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "technique_common" );
	_Meta->registerClass(intRigid_constraint::intTechnique_common::create, &_Meta);

	domRigid_constraint::domTechnique_common::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intRigid_constraint::intTechnique_common));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intRigid_constraint::intTechnique_common::intEnabled::create(daeInt bytes)
{
	intRigid_constraint::intTechnique_common::intEnabledRef ref = new(bytes) intRigid_constraint::intTechnique_common::intEnabled;
	return ref;
}

daeMetaElement *
intRigid_constraint::intTechnique_common::intEnabled::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "enabled" );
	_Meta->registerClass(intRigid_constraint::intTechnique_common::intEnabled::create, &_Meta);

	domRigid_constraint::domTechnique_common::domEnabled::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intRigid_constraint::intTechnique_common::intEnabled));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intRigid_constraint::intTechnique_common::intInterpenetrate::create(daeInt bytes)
{
	intRigid_constraint::intTechnique_common::intInterpenetrateRef ref = new(bytes) intRigid_constraint::intTechnique_common::intInterpenetrate;
	return ref;
}

daeMetaElement *
intRigid_constraint::intTechnique_common::intInterpenetrate::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "interpenetrate" );
	_Meta->registerClass(intRigid_constraint::intTechnique_common::intInterpenetrate::create, &_Meta);

	domRigid_constraint::domTechnique_common::domInterpenetrate::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intRigid_constraint::intTechnique_common::intInterpenetrate));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intRigid_constraint::intTechnique_common::intLimits::create(daeInt bytes)
{
	intRigid_constraint::intTechnique_common::intLimitsRef ref = new(bytes) intRigid_constraint::intTechnique_common::intLimits;
	return ref;
}

daeMetaElement *
intRigid_constraint::intTechnique_common::intLimits::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "limits" );
	_Meta->registerClass(intRigid_constraint::intTechnique_common::intLimits::create, &_Meta);

	domRigid_constraint::domTechnique_common::domLimits::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intRigid_constraint::intTechnique_common::intLimits));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intRigid_constraint::intTechnique_common::intLimits::intSwing_cone_and_twist::create(daeInt bytes)
{
	intRigid_constraint::intTechnique_common::intLimits::intSwing_cone_and_twistRef ref = new(bytes) intRigid_constraint::intTechnique_common::intLimits::intSwing_cone_and_twist;
	return ref;
}

daeMetaElement *
intRigid_constraint::intTechnique_common::intLimits::intSwing_cone_and_twist::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "swing_cone_and_twist" );
	_Meta->registerClass(intRigid_constraint::intTechnique_common::intLimits::intSwing_cone_and_twist::create, &_Meta);

	domRigid_constraint::domTechnique_common::domLimits::domSwing_cone_and_twist::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intRigid_constraint::intTechnique_common::intLimits::intSwing_cone_and_twist));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intRigid_constraint::intTechnique_common::intLimits::intLinear::create(daeInt bytes)
{
	intRigid_constraint::intTechnique_common::intLimits::intLinearRef ref = new(bytes) intRigid_constraint::intTechnique_common::intLimits::intLinear;
	return ref;
}

daeMetaElement *
intRigid_constraint::intTechnique_common::intLimits::intLinear::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "linear" );
	_Meta->registerClass(intRigid_constraint::intTechnique_common::intLimits::intLinear::create, &_Meta);

	domRigid_constraint::domTechnique_common::domLimits::domLinear::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intRigid_constraint::intTechnique_common::intLimits::intLinear));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intRigid_constraint::intTechnique_common::intSpring::create(daeInt bytes)
{
	intRigid_constraint::intTechnique_common::intSpringRef ref = new(bytes) intRigid_constraint::intTechnique_common::intSpring;
	return ref;
}

daeMetaElement *
intRigid_constraint::intTechnique_common::intSpring::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "spring" );
	_Meta->registerClass(intRigid_constraint::intTechnique_common::intSpring::create, &_Meta);

	domRigid_constraint::domTechnique_common::domSpring::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intRigid_constraint::intTechnique_common::intSpring));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intRigid_constraint::intTechnique_common::intSpring::intAngular::create(daeInt bytes)
{
	intRigid_constraint::intTechnique_common::intSpring::intAngularRef ref = new(bytes) intRigid_constraint::intTechnique_common::intSpring::intAngular;
	return ref;
}

daeMetaElement *
intRigid_constraint::intTechnique_common::intSpring::intAngular::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "angular" );
	_Meta->registerClass(intRigid_constraint::intTechnique_common::intSpring::intAngular::create, &_Meta);

	domRigid_constraint::domTechnique_common::domSpring::domAngular::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intRigid_constraint::intTechnique_common::intSpring::intAngular));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intRigid_constraint::intTechnique_common::intSpring::intLinear::create(daeInt bytes)
{
	intRigid_constraint::intTechnique_common::intSpring::intLinearRef ref = new(bytes) intRigid_constraint::intTechnique_common::intSpring::intLinear;
	return ref;
}

daeMetaElement *
intRigid_constraint::intTechnique_common::intSpring::intLinear::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "linear" );
	_Meta->registerClass(intRigid_constraint::intTechnique_common::intSpring::intLinear::create, &_Meta);

	domRigid_constraint::domTechnique_common::domSpring::domLinear::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intRigid_constraint::intTechnique_common::intSpring::intLinear));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// CONSTRUCTOR AND DESTRUCTOR
intRigid_constraint::intRigid_constraint() {
}

intRigid_constraint::~intRigid_constraint() {
}

// IMPORT

void
intRigid_constraint::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intRigid_constraint::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intRigid_constraint::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intRigid_constraint::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intRigid_constraint::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intRigid_constraint::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intRigid_constraint::intRef_attachment::intRef_attachment() {
}

intRigid_constraint::intRef_attachment::~intRef_attachment() {
}

// IMPORT

void
intRigid_constraint::intRef_attachment::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intRigid_constraint::intRef_attachment::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intRigid_constraint::intRef_attachment::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intRigid_constraint::intRef_attachment::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intRigid_constraint::intRef_attachment::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intRigid_constraint::intRef_attachment::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intRigid_constraint::intAttachment::intAttachment() {
}

intRigid_constraint::intAttachment::~intAttachment() {
}

// IMPORT

void
intRigid_constraint::intAttachment::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intRigid_constraint::intAttachment::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intRigid_constraint::intAttachment::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intRigid_constraint::intAttachment::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intRigid_constraint::intAttachment::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intRigid_constraint::intAttachment::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intRigid_constraint::intTechnique_common::intTechnique_common() {
}

intRigid_constraint::intTechnique_common::~intTechnique_common() {
}

// IMPORT

void
intRigid_constraint::intTechnique_common::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intRigid_constraint::intTechnique_common::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intRigid_constraint::intTechnique_common::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intRigid_constraint::intTechnique_common::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intRigid_constraint::intTechnique_common::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intRigid_constraint::intTechnique_common::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intRigid_constraint::intTechnique_common::intEnabled::intEnabled() {
}

intRigid_constraint::intTechnique_common::intEnabled::~intEnabled() {
}

// IMPORT

void
intRigid_constraint::intTechnique_common::intEnabled::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intRigid_constraint::intTechnique_common::intEnabled::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intRigid_constraint::intTechnique_common::intEnabled::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intRigid_constraint::intTechnique_common::intEnabled::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intRigid_constraint::intTechnique_common::intEnabled::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intRigid_constraint::intTechnique_common::intEnabled::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intRigid_constraint::intTechnique_common::intInterpenetrate::intInterpenetrate() {
}

intRigid_constraint::intTechnique_common::intInterpenetrate::~intInterpenetrate() {
}

// IMPORT

void
intRigid_constraint::intTechnique_common::intInterpenetrate::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intRigid_constraint::intTechnique_common::intInterpenetrate::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intRigid_constraint::intTechnique_common::intInterpenetrate::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intRigid_constraint::intTechnique_common::intInterpenetrate::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intRigid_constraint::intTechnique_common::intInterpenetrate::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intRigid_constraint::intTechnique_common::intInterpenetrate::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intRigid_constraint::intTechnique_common::intLimits::intLimits() {
}

intRigid_constraint::intTechnique_common::intLimits::~intLimits() {
}

// IMPORT

void
intRigid_constraint::intTechnique_common::intLimits::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intRigid_constraint::intTechnique_common::intLimits::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intRigid_constraint::intTechnique_common::intLimits::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intRigid_constraint::intTechnique_common::intLimits::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intRigid_constraint::intTechnique_common::intLimits::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intRigid_constraint::intTechnique_common::intLimits::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intRigid_constraint::intTechnique_common::intLimits::intSwing_cone_and_twist::intSwing_cone_and_twist() {
}

intRigid_constraint::intTechnique_common::intLimits::intSwing_cone_and_twist::~intSwing_cone_and_twist() {
}

// IMPORT

void
intRigid_constraint::intTechnique_common::intLimits::intSwing_cone_and_twist::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intRigid_constraint::intTechnique_common::intLimits::intSwing_cone_and_twist::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intRigid_constraint::intTechnique_common::intLimits::intSwing_cone_and_twist::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intRigid_constraint::intTechnique_common::intLimits::intSwing_cone_and_twist::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intRigid_constraint::intTechnique_common::intLimits::intSwing_cone_and_twist::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intRigid_constraint::intTechnique_common::intLimits::intSwing_cone_and_twist::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intRigid_constraint::intTechnique_common::intLimits::intLinear::intLinear() {
}

intRigid_constraint::intTechnique_common::intLimits::intLinear::~intLinear() {
}

// IMPORT

void
intRigid_constraint::intTechnique_common::intLimits::intLinear::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intRigid_constraint::intTechnique_common::intLimits::intLinear::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intRigid_constraint::intTechnique_common::intLimits::intLinear::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intRigid_constraint::intTechnique_common::intLimits::intLinear::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intRigid_constraint::intTechnique_common::intLimits::intLinear::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intRigid_constraint::intTechnique_common::intLimits::intLinear::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intRigid_constraint::intTechnique_common::intSpring::intSpring() {
}

intRigid_constraint::intTechnique_common::intSpring::~intSpring() {
}

// IMPORT

void
intRigid_constraint::intTechnique_common::intSpring::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intRigid_constraint::intTechnique_common::intSpring::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intRigid_constraint::intTechnique_common::intSpring::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intRigid_constraint::intTechnique_common::intSpring::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intRigid_constraint::intTechnique_common::intSpring::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intRigid_constraint::intTechnique_common::intSpring::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intRigid_constraint::intTechnique_common::intSpring::intAngular::intAngular() {
}

intRigid_constraint::intTechnique_common::intSpring::intAngular::~intAngular() {
}

// IMPORT

void
intRigid_constraint::intTechnique_common::intSpring::intAngular::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intRigid_constraint::intTechnique_common::intSpring::intAngular::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intRigid_constraint::intTechnique_common::intSpring::intAngular::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intRigid_constraint::intTechnique_common::intSpring::intAngular::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intRigid_constraint::intTechnique_common::intSpring::intAngular::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intRigid_constraint::intTechnique_common::intSpring::intAngular::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intRigid_constraint::intTechnique_common::intSpring::intLinear::intLinear() {
}

intRigid_constraint::intTechnique_common::intSpring::intLinear::~intLinear() {
}

// IMPORT

void
intRigid_constraint::intTechnique_common::intSpring::intLinear::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intRigid_constraint::intTechnique_common::intSpring::intLinear::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intRigid_constraint::intTechnique_common::intSpring::intLinear::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intRigid_constraint::intTechnique_common::intSpring::intLinear::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intRigid_constraint::intTechnique_common::intSpring::intLinear::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intRigid_constraint::intTechnique_common::intSpring::intLinear::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}


