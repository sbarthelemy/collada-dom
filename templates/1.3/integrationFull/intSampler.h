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

#ifndef __intSampler_h__
#define __intSampler_h__

#include <dae/daeIntegrationObject.h>
#include <dae/daeMetaElement.h>

/** The sampler element declares an N-dimensional function. Animation function curves are 
			represented by 1-D sampler elements in COLLADA. The sampler defines sampling points and how 
			to interpolate between them. When used to compute values for an animation channel, the 
			sampling points are the animation key-frames. Sampling points (key-frames) are input data 
			sources to the sampler. Animation channels direct the output data values of the sampler to 
			their targets. COLLADA recognizes the following interpolation types: LINEAR, BEZIER, 
			CARDINAL, HERMITE, BSPLINE.
*/class intSampler;

typedef daeSmartRef<intSampler> intSamplerRef;
typedef daeTArray<intSamplerRef> intSamplerArray;

class intSampler : public daeIntegrationObject
{
public: // Constuctor and Destructor
	/**
	 * Default Constructor.
	 */
	intSampler();
	 
	/**
	 * Default Destructor.
	 */
	~intSampler();
	 
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
/** The input element must appear one or more times. Sampling points are described 
						by the input elements that refer to source elements. The semantic attribute of 
						the input element can be one of: INPUT, INTERPOLATION, IN_TANGENT, OUT_TANGENT, 
						and OUTPUT.
*/class intInput;

typedef daeSmartRef<intInput> intInputRef;
typedef daeTArray<intInputRef> intInputArray;

class intInput : public daeIntegrationObject
{
public: // Constuctor and Destructor
	/**
	 * Default Constructor.
	 */
	intInput();
	 
	/**
	 * Default Destructor.
	 */
	~intInput();
	 
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
