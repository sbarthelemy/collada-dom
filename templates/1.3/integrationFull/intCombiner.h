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

#ifndef __intCombiner_h__
#define __intCombiner_h__

#include <dae/daeIntegrationObject.h>
#include <dae/daeMetaElement.h>

class intCombiner;

typedef daeSmartRef<intCombiner> intCombinerRef;
typedef daeTArray<intCombinerRef> intCombinerArray;

/**
 * The combiner element declares the aggregation of input streams. The combiner
 * element  aggregates input data streams into arrays of data structures.
 * The resulting data structures  provide a logical organization of the input
 * streams for higher-level elements. A combiner element contains a sequence
 * of v elements, where 'v' stands for value. Each v  element describes the
 * values for an arbitrary number of data structures. Each v element  contains
 * indices that reference into the input elements. These indices are position
 * dependent  and reference the accessor elements according to the order of
 * the input elements. Here is an  example of this: The first index references
 * the first unique input element; the second index references the second
 * unique input element, and so on. This is a simple form of compression 
 * that reduces the number of indices required in each v element. The input
 * elements are  uniquely identified by their idx attribute values. A complete
 * sampling of an aggregate value  is completed by gathering one value from
 * each input using the associated index in the v element.
 */
class intCombiner : public daeIntegrationObject
{
public: // Constuctor and Destructor
	/**
	 * Default Constructor.
	 */
	intCombiner();
	 
	/**
	 * Default Destructor.
	 */
	~intCombiner();
	 
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
class intV;

typedef daeSmartRef<intV> intVRef;
typedef daeTArray<intVRef> intVArray;

/**
 * Variable length value element. The indices form the source's output aggregated
 * by the number of inputs. The v element must occur one or more times.
 */
class intV : public daeIntegrationObject
{
public: // Constuctor and Destructor
	/**
	 * Default Constructor.
	 */
	intV();
	 
	/**
	 * Default Destructor.
	 */
	~intV();
	 
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
