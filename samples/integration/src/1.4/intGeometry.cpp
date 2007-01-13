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

#include "dae/daeDom.h"
#include "../../intGeometry.h"
#include "dom/domGeometry.h"
#include "../../myGeometry.h"

daeMetaElement * intGeometry::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intGeometry::create(daeInt bytes)
{
	intGeometryRef ref = new(bytes) intGeometry;
	return ref;
}

daeMetaElement *
intGeometry::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "geometry" );
	_Meta->registerClass(intGeometry::create, &_Meta);

	domGeometry::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGeometry));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// IMPORT

void
intGeometry::createFrom(daeElementRef element)
{
	// This code creates a user defined class when a domGeometry object is encountered
	// during loading of a COLLADA document.

	// Create my class to hold geometry information and initialize it as empty
	_object = new myGeometry();
	_object->_pVertices = NULL;
	_element = element;
}

void
intGeometry::fromCOLLADA()
{
	// This code translates from a COLLADA element to a user provided structure

	// Note: this is a very simple example of an integration class that converts
	// a collada GEOMETRY to a user class.  It gets vertex and connectivity data
	// from the polygons and float array found inside the geometry.  The example
	// only supports one float array and one polygons per domGeometry and makes
	// some assumptions about their format to keep the example simple.
	// If you were doing this for a real application you would probably want to 
	// have seperate integration objects for geometry, mesh, polygons...etc.
	// so you could support multiple polygons, techniques, flexible input formats...etc.

	// Get a properly typed pointer to the COLLADA domGeometry element (this is the element that called us)
	domGeometry* geometryElement = (domGeometry*)(domElement*)_element;

	// Get a pointer to the domGeometry's domMesh element
	domMesh *meshElement = geometryElement->getMesh();

	// Get a pointer to the user defined geometry object that was automatically created during load
	// by calling createFrom
	myGeometry *local = (myGeometry *)_object;

	// Get a pointer to the domPolygons in this domMesh.  To simplify this example, 
	// we will only handle a domMesh that has a single domPolygons
	if(meshElement->getPolygons_array().getCount() != 1)
	{
		fprintf(stderr,"this example only supports one domPolygons per domMesh\n");
		return;
	}
	domPolygons *polygons	 = meshElement->getPolygons_array()[0];
	int			polygonCount = polygons->getCount();

	// To simplify this example we assume the domPolygons has only one domInput

	if(polygons->getInput_array().getCount() != 1)
	{
		fprintf(stderr,"this example only supports one domInput per domPolygons\n");
		return;
	}

	// Loop over all the polygons in the domPolygons element

	for (int i=0;i<polygonCount;i++)
	{
		myPolygon myPoly;
		// Get pointer to this polygon (domP)
		domP *poly = polygons->getP_array()[i];
		// Get the number of indices from the domP and save it in my structure
		myPoly._iIndexCount = poly->getValue().getCount();
		// You can modify the data as you copy it from the COLLADA object to your object, 
		// here we repeat the first index in list as the last index, to form a closed loop
		// that can be drawn as a line strip.
		myPoly._iIndexCount++; 
		myPoly._pIndexes = new unsigned short[myPoly._iIndexCount];
		// Copy all the indices from the domP into my structure
		int j = 0;
		for (j=0;j<myPoly._iIndexCount-1;j++)
			myPoly._pIndexes[j] = poly->getValue()[j];
		// Repeat the first index at the end of the list to create a closed loop
		myPoly._pIndexes[j] = myPoly._pIndexes[0];
		// Push this polygon into the list of polygons in my structure
		local->_vPolygons.push_back(myPoly);
	}

	// Now copy the vertices we are going to use into myGeometry, to keep things simple
	// we will assume there is only one domSource and domFloatArray in the domMesh, that it is the
	// array of vertices and that it is in X, Y, Z format.  A real app would find the 
	// vertices by starting with domPolygons and following the links through the domInput, domVertices
	// domSource domFloat_array and domTechnique.

	if(meshElement->getSource_array().getCount() != 1)
	{
		fprintf(stderr,"this sample only supports one source array per domMesh\n");
		return;
	}
	domSource *source = meshElement->getSource_array()[0];

	if(source->getFloat_array() == NULL )
	{
		fprintf(stderr,"this sample only supports a single float array source\n");
	}
	domFloat_array *floatArray = source->getFloat_array(); 
	
	// Assume there are 3 values per vertex with a stride of 3
	local->_iVertexCount = floatArray->getCount()/3;
	local->_pVertices = new float[local->_iVertexCount*3];

	// Copy the vertices into my structure one-by-one (converts from COLLADA's doubles to floats)
	for ( unsigned int i = 0; i < local->_iVertexCount*3; i++ ) {
		local->_pVertices[i] = floatArray->getValue()[i];
	}
}

void
intGeometry::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGeometry::createTo(void *userData)
{
	// This function would create new COLLADA elements from a user defined object
	// It is NOT called automatically by the COLLADA DOM, the user needs to call
	// this when the create a user
}

void
intGeometry::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;

	// This code takes data from a user defined object and puts it back into the appropriate
	// collada objects.

	// Get a pointer to the COLLADA domGeometry element (this is the element that called us)
	domGeometry* geometryElement = (domGeometry*)(domElement*)_element;

	// Get a pointer to the domGeometry's domMesh element
	domMesh *meshElement = geometryElement->getMesh();

	// Get a pointer to my object that's assocated with this collada object
	myGeometry *local = (myGeometry *)_object;

	// Get a pointer to the domPolygons in this domMesh.  To simplify this example, 
	// we will only handle a domMesh that has a single domPolygons
	if(meshElement->getPolygons_array().getCount() != 1)
	{
		fprintf(stderr,"this example only supports one domPolygons per domMesh\n");
		return;
	}
	domPolygons *polygons	 = meshElement->getPolygons_array()[0];
	int			polygonCount = local->_vPolygons.size();

	// To simplify this example we assume the domPolygons has only one domInput

	if(polygons->getInput_array().getCount() != 1)
	{
		fprintf(stderr,"this example only supports one domInput per domPolygons\n");
		return;
	}
	// Loop over all the polygons in the domPolygons element and put the data from
	// myGeometry back into it.  For the purposes of the example, assume the number
	// of polygons and indices hasn't changed so we can just update the values in-place

	polygons->setCount(polygonCount);
	for (int i=0;i<polygonCount;i++)
	{
		// Get pointer to this polygon (domP)
		domP *poly = polygons->getP_array()[i];
		// Copy all the indices from my structure back to the domP
		for (int j=0;j< local->_vPolygons[i]._iIndexCount-1;j++)
			poly->getValue()[j] = local->_vPolygons[i]._pIndexes[j] ;
	}

	// Now copy the vertices from myGeometry back to the source, assume the number of 
	// vertices hasn't changed so we can just update them in place.
	if(meshElement->getSource_array().getCount() != 1)
	{
		fprintf(stderr,"this sample only supports one source array per domMesh\n");
		return;
	}
	domSource *source = meshElement->getSource_array()[0];

	if(source->getFloat_array() == NULL)
	{
		fprintf(stderr,"this sample only supports a single float array source\n");
	}
	domFloat_array *floatArray = source->getFloat_array(); 
	
	// Copy the vertices into from myGeometry back into the COLLADA float array
	floatArray->setCount(local->_iVertexCount*3);
	for ( unsigned int i = 0; i < local->_iVertexCount*3; i++ ) {
		floatArray->getValue()[i] = local->_pVertices[i];
	}
}

void
intGeometry::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// ********************************************************
// ***** USER CODE ****************************************
// ********************************************************
intGeometry::~intGeometry()
{
	if (_object && _object->_pVertices)
	{
		delete[] _object->_pVertices;
		int i;
		for (i=0;i<(int)_object->_vPolygons.size();i++)
		{
			delete[] _object->_vPolygons[i]._pIndexes;
		}
		delete _object;
	}
}
