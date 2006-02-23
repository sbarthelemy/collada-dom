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

#ifndef __intAnimation_h__
#define __intAnimation_h__

#include <dae/daeIntegrationObject.h>
#include <dae/daeMetaElement.h>

/** The animation element categorizes the declaration of animation information. The animation 
			contains elements that describe the animation's key-frame data and sampler functions.
			Animation describes the transformation of an object or value over time. A common use of 
			animation is to give the illusion of motion. A common animation technique is called 
			key-frame animation. A key-frame is a sampling of data at a known point in time. Using a 
			set of key-frames and an interpolation algorithm, intermediate values are computed for 
			times in between the key-frames, producing a smooth set of output values over the interval 
			between the key-frames. A key-frame animation engine performs these computations on the 
			key-frame data. An animation element contains the elements that describe animation data. The
			actual type and complexity of the data is left to the child elements to represent in detail.
*/class intAnimation;

typedef daeSmartRef<intAnimation> intAnimationRef;
typedef daeTArray<intAnimationRef> intAnimationArray;

class intAnimation : public daeIntegrationObject
{
public: // Constuctor and Destructor
	/**
	 * Default Constructor.
	 */
	intAnimation();
	 
	/**
	 * Default Destructor.
	 */
	~intAnimation();
	 
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

#endif
