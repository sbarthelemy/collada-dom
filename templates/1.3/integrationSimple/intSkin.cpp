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
#include "intSkin.h"
#include <dom/domSkin.h>

daeMetaElement * intSkin::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intSkin::create(daeInt bytes)
{
	intSkinRef ref = new(bytes) intSkin;
	return ref;
}

daeMetaElement *
intSkin::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "skin" );
	_Meta->registerConstructor(intSkin::create);

	domSkin::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intSkin));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// CONSTRUCTOR AND DESTRUCTOR
intSkin::intSkin() {
}

intSkin::~intSkin() {
}

// IMPORT

void
intSkin::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intSkin::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intSkin::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intSkin::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intSkin::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intSkin::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}


