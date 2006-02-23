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

#ifndef __intLookat_h__
#define __intLookat_h__

#include <dae/daeIntegrationObject.h>
#include <dae/daeMetaElement.h>

/** The lookat element contains a position and orientation transformation suitable for aiming a 
			camera. Positioning and orienting a camera or object in the scene is often complicated when 
			using a matrix. A lookat transform is an intuitive way to specify an eye position, interest 
			point, and orientation. The lookat element contains a list of 9 floating-point values. As 
			in the OpenGL® Utilities (GLU) implementation, these values are organized into three vectors 
			as follows:
			* Eye position is given as Px, Py, Pz.
			* Interest point is given as Ix, Iy, Iz.
			* Up-axis direction is given as UPx, UPy, UPz.
			When computing the equivalent (viewing) matrix the interest point is mapped to the negative 
			Z-axis and the eye position to the origin. The up-axis is mapped to the positive Y-axis of 
			the viewing plane. The values are specified in local, object coordinates.
*/class intLookat;

typedef daeSmartRef<intLookat> intLookatRef;
typedef daeTArray<intLookatRef> intLookatArray;

class intLookat : public daeIntegrationObject
{
public: // Constuctor and Destructor
	/**
	 * Default Constructor.
	 */
	intLookat();
	 
	/**
	 * Default Destructor.
	 */
	~intLookat();
	 
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
