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

#ifndef __intSkew_h__
#define __intSkew_h__

#include <dae/daeIntegrationObject.h>
#include <dae/daeMetaElement.h>

class intSkew;

typedef daeSmartRef<intSkew> intSkewRef;
typedef daeTArray<intSkewRef> intSkewArray;

/**
 * The skew element contains an angle and two mathematical vectors that represent
 * the axis of  rotation and the axis of translation. Skew (shear) deforms
 * an object along one axis of a  coordinated system. It translates values
 * along the affected axis in a direction that is  parallel to that axis.
 * Computer graphics techniques apply a skew or shear transformation in  order
 * to deform objects or to correct distortion in images. As in the RenderMan®
 * specification, the skew element contains a list of seven floating-point
 * values. These values  are organized into an angle in degrees with two column
 * vectors specifying the axes of  rotation and translation.
 */
class intSkew : public daeIntegrationObject
{
public: // Constuctor and Destructor
	/**
	 * Default Constructor.
	 */
	intSkew();
	 
	/**
	 * Default Destructor.
	 */
	~intSkew();
	 
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
