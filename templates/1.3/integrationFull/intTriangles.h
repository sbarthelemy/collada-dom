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

#ifndef __intTriangles_h__
#define __intTriangles_h__

#include <dae/daeIntegrationObject.h>
#include <dae/daeMetaElement.h>

class intTriangles;

typedef daeSmartRef<intTriangles> intTrianglesRef;
typedef daeTArray<intTrianglesRef> intTrianglesArray;

/**
 * The triangles element declares the binding of geometric primitives and
 * vertex attributes  for a mesh element. The triangles element provides the
 * information needed to bind vertex  attributes together and then organize
 * those vertices into individual triangles. The vertex  array information
 * is supplied in distinct attribute arrays that are then indexed by the 
 * triangles element. Each triangle described by the mesh has three vertices.
 * The first triangle  is formed from the first, second, and third vertices.
 * The second triangle is formed from the  fourth, fifth, and sixth vertices,
 * and so on. A triangles element contains a sequence of p  elements, where
 * 'p' stands for primitive. Each p element describes the vertex attributes
 * for  an individual triangle.
 */
class intTriangles : public daeIntegrationObject
{
public: // Constuctor and Destructor
	/**
	 * Default Constructor.
	 */
	intTriangles();
	 
	/**
	 * Default Destructor.
	 */
	~intTriangles();
	 
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
 * Primitive element. @brief Every three indices form a triangle. Each p element
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

};

};

#endif
