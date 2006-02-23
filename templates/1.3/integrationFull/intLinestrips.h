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

#ifndef __intLinestrips_h__
#define __intLinestrips_h__

#include <dae/daeIntegrationObject.h>
#include <dae/daeMetaElement.h>

/** The linestrips element declares a binding of geometric primitives and vertex attributes for 
			a mesh element. The linestrips element provides the information needed to bind vertex 
			attributes together and then organize those vertices into connected line-strips. The vertex 
			information is supplied in distinct attribute arrays of the mesh element that are then 
			indexed by the linestrips element. Each line-strip described by the mesh has an arbitrary 
			number of vertices. Each line segment within the line-strip is formed from the current 
			vertex and the preceding vertex. A linestrips element contains a sequence of p elements, 
			where 'p' stands for primitive. Each p element describes the vertex attributes for an 
			arbitrary number of connected line segments.
*/class intLinestrips;

typedef daeSmartRef<intLinestrips> intLinestripsRef;
typedef daeTArray<intLinestripsRef> intLinestripsArray;

class intLinestrips : public daeIntegrationObject
{
public: // Constuctor and Destructor
	/**
	 * Default Constructor.
	 */
	intLinestrips();
	 
	/**
	 * Default Destructor.
	 */
	~intLinestrips();
	 
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
/** Primitive element. @brief The first two indices form a line. 
						@brief Each subsequent index extends the line from the previous index.
						Each p element contains indices that reference into the source elements. These 
						indices are position dependent and reference the contents of the source elements
						according to the order of the input elements. Here is an example of this: The 
						first index references the first unique input element; the second index references 
						the second unique input element, and so on. This is a simple form of compression 
						that reduces the number of indices required in each p element. The input elements 
						are uniquely identified by their idx attribute values. A complete sampling of a 
						single vertex is completed by gathering one value from each input using the 
						associated index in the p element.
*/class intP;

typedef daeSmartRef<intP> intPRef;
typedef daeTArray<intPRef> intPArray;

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
