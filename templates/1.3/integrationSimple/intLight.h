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

#ifndef __intLight_h__
#define __intLight_h__

#include <dae/daeIntegrationObject.h>
#include <dae/daeMetaElement.h>

/** The light element declares a light source that illuminates the scene.
			The light element may be referenced by an instance element to position and orient the light
			in the scene. A light that is not instantiated in the scene is not active. If the type 
			attribute value is 'DIRECTIONAL' or 'SPOT' then the light's default direction vector in 
			local coordinates is [0,0,-1], pointing down the -Z axis. If the type attribute value is 
			'POINT' or 'SPOT' then two additional param elements are required: one named 'ATTENUATION', 
			and one named 'ATTENUATION_SCALE', as defined in the COMMON Profile. If the type attribute 
			value is 'SPOT' then all the param elements required by 'POINT' are required. In addition 
			three more param elements are required: one named 'ANGLE' for the cone shape, one named 
			'FALLOFF', and one named 'FALLOFF_SCALE', as defined in the COMMON Profile.
*/class intLight;

typedef daeSmartRef<intLight> intLightRef;
typedef daeTArray<intLightRef> intLightArray;

class intLight : public daeIntegrationObject
{
public: // Constuctor and Destructor
	/**
	 * Default Constructor.
	 */
	intLight();
	 
	/**
	 * Default Destructor.
	 */
	~intLight();
	 
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
