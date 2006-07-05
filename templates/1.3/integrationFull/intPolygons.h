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

#ifndef __intPolygons_h__
#define __intPolygons_h__

#include <dae/daeIntegrationObject.h>
#include <dae/daeMetaElement.h>

class intPolygons;

typedef daeSmartRef<intPolygons> intPolygonsRef;
typedef daeTArray<intPolygonsRef> intPolygonsArray;

/**
 * The polygons element declares the binding of geometric primitives and vertex
 * attributes for  a mesh element. The polygons element provides the information
 * needed to bind vertex  attributes together and then organize those vertices
 * into individual polygons. (A polygon  is a closed plane figure bounded
 * by straight lines or a closed figure on a sphere bounded  by arcs of great
 * circles per Merriam-Webster's 10th edition Dictionary). The vertex array
 * information is supplied in distinct attribute arrays of the mesh element
 * that are then indexed by the polygons element. The polygons described can
 * contain arbitrary numbers of  vertices. Ideally, they would describe convex
 * shapes, but they may be concave as well. The  polygons may also contain
 * holes. The winding order of vertices produced is counter-clockwise and
 * describe the front side of each polygon. If the primitives are assembled
 * without vertex  normals then the application may generate per-primitive
 * normals to enable lighting. A  polygons element contains a sequence of
 * p elements, where 'p' stands for primitive. Each p element describes the
 * vertex attributes for an individual polygon.
 */
class intPolygons : public daeIntegrationObject
{
public: // Constuctor and Destructor
	/**
	 * Default Constructor.
	 */
	intPolygons();
	 
	/**
	 * Default Destructor.
	 */
	~intPolygons();
	 
protected: // VIRTUAL INTEGRATION INTERFACE

// IMPORT FROM COLLADA	
	// This Method is used to create tool/runtime object
	virtual void createFrom(daeElementRef element);

	// This method translate from COLLADA to tool/runtime object
	virtual void fromCOLLADA();

	// This method is used as a second pass post process on tool/runtime objs
	virtual void fromCOLLADAPostProcess();

// EXPORT TO COLLADA	
	// This Method is used to create COLLADA objects
	virtual void createTo(void* userData);

	// This method translate to COLLADA from tool/runtime object
	virtual void toCOLLADA();

	// This method is used as a second pass post process on COLLADA dom
	virtual void toCOLLADAPostProcess();

public: // STATIC METHODS
	static daeElementRef create(daeInt bytes);
	static daeMetaElement* registerElement();
	
public: // STATIC MEMBERS
	static daeMetaElement* _Meta;

public:
class intP;

typedef daeSmartRef<intP> intPRef;
typedef daeTArray<intPRef> intPArray;

/**
 * Primitive element. @brief All the indices form a polygon. Each p element
 * contains indices that reference into the source elements. These  indices
 * are position dependent and reference the contents of the source elements
 * according to the order of the input elements. Here is an example of this:
 * The  first index references the first unique input element; the second
 * index references  the second unique input element, and so on. This is a
 * simple form of compression  that reduces the number of indices required
 * in each p element. The input elements  are uniquely identified by their
 * idx attribute values. A complete sampling of a  single vertex is completed
 * by gathering one value from each input using the  associated index in the
 * p element.
 */
class intP : public daeIntegrationObject
{
public: // Constuctor and Destructor
	/**
	 * Default Constructor.
	 */
	intP();
	 
	/**
	 * Default Destructor.
	 */
	~intP();
	 
protected: // VIRTUAL INTEGRATION INTERFACE

// IMPORT FROM COLLADA	
	// This Method is used to create tool/runtime object
	virtual void createFrom(daeElementRef element);

	// This method translate from COLLADA to tool/runtime object
	virtual void fromCOLLADA();

	// This method is used as a second pass post process on tool/runtime objs
	virtual void fromCOLLADAPostProcess();

// EXPORT TO COLLADA	
	// This Method is used to create COLLADA objects
	virtual void createTo(void* userData);

	// This method translate to COLLADA from tool/runtime object
	virtual void toCOLLADA();

	// This method is used as a second pass post process on COLLADA dom
	virtual void toCOLLADAPostProcess();

public: // STATIC METHODS
	static daeElementRef create(daeInt bytes);
	static daeMetaElement* registerElement();
	
public: // STATIC MEMBERS
	static daeMetaElement* _Meta;

public:
class intH;

typedef daeSmartRef<intH> intHRef;
typedef daeTArray<intHRef> intHArray;

/**
 * Contour Separator. Primitives after this each describe a hole. A hole in
 * the polygon is indicated by an h element that acts as a  contour separator.
 * Any indices following the h element describe the  hole, up to the next
 * h element, or the close of the p element.  Consequently, h elements are
 * the last data inside a p element.
 */
class intH : public daeIntegrationObject
{
public: // Constuctor and Destructor
	/**
	 * Default Constructor.
	 */
	intH();
	 
	/**
	 * Default Destructor.
	 */
	~intH();
	 
protected: // VIRTUAL INTEGRATION INTERFACE

// IMPORT FROM COLLADA	
	// This Method is used to create tool/runtime object
	virtual void createFrom(daeElementRef element);

	// This method translate from COLLADA to tool/runtime object
	virtual void fromCOLLADA();

	// This method is used as a second pass post process on tool/runtime objs
	virtual void fromCOLLADAPostProcess();

// EXPORT TO COLLADA	
	// This Method is used to create COLLADA objects
	virtual void createTo(void* userData);

	// This method translate to COLLADA from tool/runtime object
	virtual void toCOLLADA();

	// This method is used as a second pass post process on COLLADA dom
	virtual void toCOLLADAPostProcess();

public: // STATIC METHODS
	static daeElementRef create(daeInt bytes);
	static daeMetaElement* registerElement();
	
public: // STATIC MEMBERS
	static daeMetaElement* _Meta;

};

};

};

#endif
