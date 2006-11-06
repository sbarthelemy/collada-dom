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
#include "intAsset.h"
#include <dom/domAsset.h>

daeMetaElement * intAsset::_Meta = NULL;
daeMetaElement * intAsset::intContributor::_Meta = NULL;
daeMetaElement * intAsset::intContributor::intAuthor::_Meta = NULL;
daeMetaElement * intAsset::intContributor::intAuthoring_tool::_Meta = NULL;
daeMetaElement * intAsset::intContributor::intComments::_Meta = NULL;
daeMetaElement * intAsset::intContributor::intCopyright::_Meta = NULL;
daeMetaElement * intAsset::intContributor::intSource_data::_Meta = NULL;
daeMetaElement * intAsset::intCreated::_Meta = NULL;
daeMetaElement * intAsset::intKeywords::_Meta = NULL;
daeMetaElement * intAsset::intModified::_Meta = NULL;
daeMetaElement * intAsset::intRevision::_Meta = NULL;
daeMetaElement * intAsset::intSubject::_Meta = NULL;
daeMetaElement * intAsset::intTitle::_Meta = NULL;
daeMetaElement * intAsset::intUnit::_Meta = NULL;
daeMetaElement * intAsset::intUp_axis::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intAsset::create(daeInt bytes)
{
	intAssetRef ref = new(bytes) intAsset;
	return ref;
}

daeMetaElement *
intAsset::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "asset" );
	_Meta->registerClass(intAsset::create, &_Meta);

	domAsset::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intAsset));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intAsset::intContributor::create(daeInt bytes)
{
	intAsset::intContributorRef ref = new(bytes) intAsset::intContributor;
	return ref;
}

daeMetaElement *
intAsset::intContributor::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "contributor" );
	_Meta->registerClass(intAsset::intContributor::create, &_Meta);

	domAsset::domContributor::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intAsset::intContributor));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intAsset::intContributor::intAuthor::create(daeInt bytes)
{
	intAsset::intContributor::intAuthorRef ref = new(bytes) intAsset::intContributor::intAuthor;
	return ref;
}

daeMetaElement *
intAsset::intContributor::intAuthor::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "author" );
	_Meta->registerClass(intAsset::intContributor::intAuthor::create, &_Meta);

	domAsset::domContributor::domAuthor::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intAsset::intContributor::intAuthor));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intAsset::intContributor::intAuthoring_tool::create(daeInt bytes)
{
	intAsset::intContributor::intAuthoring_toolRef ref = new(bytes) intAsset::intContributor::intAuthoring_tool;
	return ref;
}

daeMetaElement *
intAsset::intContributor::intAuthoring_tool::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "authoring_tool" );
	_Meta->registerClass(intAsset::intContributor::intAuthoring_tool::create, &_Meta);

	domAsset::domContributor::domAuthoring_tool::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intAsset::intContributor::intAuthoring_tool));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intAsset::intContributor::intComments::create(daeInt bytes)
{
	intAsset::intContributor::intCommentsRef ref = new(bytes) intAsset::intContributor::intComments;
	return ref;
}

daeMetaElement *
intAsset::intContributor::intComments::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "comments" );
	_Meta->registerClass(intAsset::intContributor::intComments::create, &_Meta);

	domAsset::domContributor::domComments::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intAsset::intContributor::intComments));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intAsset::intContributor::intCopyright::create(daeInt bytes)
{
	intAsset::intContributor::intCopyrightRef ref = new(bytes) intAsset::intContributor::intCopyright;
	return ref;
}

daeMetaElement *
intAsset::intContributor::intCopyright::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "copyright" );
	_Meta->registerClass(intAsset::intContributor::intCopyright::create, &_Meta);

	domAsset::domContributor::domCopyright::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intAsset::intContributor::intCopyright));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intAsset::intContributor::intSource_data::create(daeInt bytes)
{
	intAsset::intContributor::intSource_dataRef ref = new(bytes) intAsset::intContributor::intSource_data;
	return ref;
}

daeMetaElement *
intAsset::intContributor::intSource_data::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "source_data" );
	_Meta->registerClass(intAsset::intContributor::intSource_data::create, &_Meta);

	domAsset::domContributor::domSource_data::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intAsset::intContributor::intSource_data));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intAsset::intCreated::create(daeInt bytes)
{
	intAsset::intCreatedRef ref = new(bytes) intAsset::intCreated;
	return ref;
}

daeMetaElement *
intAsset::intCreated::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "created" );
	_Meta->registerClass(intAsset::intCreated::create, &_Meta);

	domAsset::domCreated::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intAsset::intCreated));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intAsset::intKeywords::create(daeInt bytes)
{
	intAsset::intKeywordsRef ref = new(bytes) intAsset::intKeywords;
	return ref;
}

daeMetaElement *
intAsset::intKeywords::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "keywords" );
	_Meta->registerClass(intAsset::intKeywords::create, &_Meta);

	domAsset::domKeywords::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intAsset::intKeywords));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intAsset::intModified::create(daeInt bytes)
{
	intAsset::intModifiedRef ref = new(bytes) intAsset::intModified;
	return ref;
}

daeMetaElement *
intAsset::intModified::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "modified" );
	_Meta->registerClass(intAsset::intModified::create, &_Meta);

	domAsset::domModified::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intAsset::intModified));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intAsset::intRevision::create(daeInt bytes)
{
	intAsset::intRevisionRef ref = new(bytes) intAsset::intRevision;
	return ref;
}

daeMetaElement *
intAsset::intRevision::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "revision" );
	_Meta->registerClass(intAsset::intRevision::create, &_Meta);

	domAsset::domRevision::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intAsset::intRevision));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intAsset::intSubject::create(daeInt bytes)
{
	intAsset::intSubjectRef ref = new(bytes) intAsset::intSubject;
	return ref;
}

daeMetaElement *
intAsset::intSubject::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "subject" );
	_Meta->registerClass(intAsset::intSubject::create, &_Meta);

	domAsset::domSubject::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intAsset::intSubject));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intAsset::intTitle::create(daeInt bytes)
{
	intAsset::intTitleRef ref = new(bytes) intAsset::intTitle;
	return ref;
}

daeMetaElement *
intAsset::intTitle::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "title" );
	_Meta->registerClass(intAsset::intTitle::create, &_Meta);

	domAsset::domTitle::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intAsset::intTitle));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intAsset::intUnit::create(daeInt bytes)
{
	intAsset::intUnitRef ref = new(bytes) intAsset::intUnit;
	return ref;
}

daeMetaElement *
intAsset::intUnit::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "unit" );
	_Meta->registerClass(intAsset::intUnit::create, &_Meta);

	domAsset::domUnit::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intAsset::intUnit));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intAsset::intUp_axis::create(daeInt bytes)
{
	intAsset::intUp_axisRef ref = new(bytes) intAsset::intUp_axis;
	return ref;
}

daeMetaElement *
intAsset::intUp_axis::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "up_axis" );
	_Meta->registerClass(intAsset::intUp_axis::create, &_Meta);

	domAsset::domUp_axis::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intAsset::intUp_axis));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// CONSTRUCTOR AND DESTRUCTOR
intAsset::intAsset() {
}

intAsset::~intAsset() {
}

// IMPORT

void
intAsset::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intAsset::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intAsset::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intAsset::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intAsset::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intAsset::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intAsset::intContributor::intContributor() {
}

intAsset::intContributor::~intContributor() {
}

// IMPORT

void
intAsset::intContributor::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intAsset::intContributor::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intAsset::intContributor::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intAsset::intContributor::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intAsset::intContributor::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intAsset::intContributor::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intAsset::intContributor::intAuthor::intAuthor() {
}

intAsset::intContributor::intAuthor::~intAuthor() {
}

// IMPORT

void
intAsset::intContributor::intAuthor::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intAsset::intContributor::intAuthor::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intAsset::intContributor::intAuthor::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intAsset::intContributor::intAuthor::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intAsset::intContributor::intAuthor::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intAsset::intContributor::intAuthor::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intAsset::intContributor::intAuthoring_tool::intAuthoring_tool() {
}

intAsset::intContributor::intAuthoring_tool::~intAuthoring_tool() {
}

// IMPORT

void
intAsset::intContributor::intAuthoring_tool::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intAsset::intContributor::intAuthoring_tool::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intAsset::intContributor::intAuthoring_tool::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intAsset::intContributor::intAuthoring_tool::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intAsset::intContributor::intAuthoring_tool::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intAsset::intContributor::intAuthoring_tool::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intAsset::intContributor::intComments::intComments() {
}

intAsset::intContributor::intComments::~intComments() {
}

// IMPORT

void
intAsset::intContributor::intComments::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intAsset::intContributor::intComments::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intAsset::intContributor::intComments::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intAsset::intContributor::intComments::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intAsset::intContributor::intComments::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intAsset::intContributor::intComments::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intAsset::intContributor::intCopyright::intCopyright() {
}

intAsset::intContributor::intCopyright::~intCopyright() {
}

// IMPORT

void
intAsset::intContributor::intCopyright::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intAsset::intContributor::intCopyright::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intAsset::intContributor::intCopyright::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intAsset::intContributor::intCopyright::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intAsset::intContributor::intCopyright::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intAsset::intContributor::intCopyright::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intAsset::intContributor::intSource_data::intSource_data() {
}

intAsset::intContributor::intSource_data::~intSource_data() {
}

// IMPORT

void
intAsset::intContributor::intSource_data::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intAsset::intContributor::intSource_data::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intAsset::intContributor::intSource_data::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intAsset::intContributor::intSource_data::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intAsset::intContributor::intSource_data::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intAsset::intContributor::intSource_data::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intAsset::intCreated::intCreated() {
}

intAsset::intCreated::~intCreated() {
}

// IMPORT

void
intAsset::intCreated::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intAsset::intCreated::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intAsset::intCreated::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intAsset::intCreated::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intAsset::intCreated::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intAsset::intCreated::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intAsset::intKeywords::intKeywords() {
}

intAsset::intKeywords::~intKeywords() {
}

// IMPORT

void
intAsset::intKeywords::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intAsset::intKeywords::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intAsset::intKeywords::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intAsset::intKeywords::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intAsset::intKeywords::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intAsset::intKeywords::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intAsset::intModified::intModified() {
}

intAsset::intModified::~intModified() {
}

// IMPORT

void
intAsset::intModified::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intAsset::intModified::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intAsset::intModified::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intAsset::intModified::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intAsset::intModified::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intAsset::intModified::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intAsset::intRevision::intRevision() {
}

intAsset::intRevision::~intRevision() {
}

// IMPORT

void
intAsset::intRevision::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intAsset::intRevision::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intAsset::intRevision::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intAsset::intRevision::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intAsset::intRevision::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intAsset::intRevision::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intAsset::intSubject::intSubject() {
}

intAsset::intSubject::~intSubject() {
}

// IMPORT

void
intAsset::intSubject::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intAsset::intSubject::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intAsset::intSubject::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intAsset::intSubject::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intAsset::intSubject::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intAsset::intSubject::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intAsset::intTitle::intTitle() {
}

intAsset::intTitle::~intTitle() {
}

// IMPORT

void
intAsset::intTitle::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intAsset::intTitle::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intAsset::intTitle::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intAsset::intTitle::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intAsset::intTitle::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intAsset::intTitle::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intAsset::intUnit::intUnit() {
}

intAsset::intUnit::~intUnit() {
}

// IMPORT

void
intAsset::intUnit::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intAsset::intUnit::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intAsset::intUnit::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intAsset::intUnit::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intAsset::intUnit::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intAsset::intUnit::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intAsset::intUp_axis::intUp_axis() {
}

intAsset::intUp_axis::~intUp_axis() {
}

// IMPORT

void
intAsset::intUp_axis::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intAsset::intUp_axis::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intAsset::intUp_axis::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intAsset::intUp_axis::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intAsset::intUp_axis::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intAsset::intUp_axis::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}


