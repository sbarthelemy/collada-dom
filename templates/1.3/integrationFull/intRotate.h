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

#ifndef __intRotate_h__
#define __intRotate_h__

#include <dae/daeIntegrationObject.h>
#include <dae/daeMetaElement.h>

class intRotate;

typedef daeSmartRef<intRotate> intRotateRef;
typedef daeTArray<intRotateRef> intRotateArray;

/**
 * The rotate element contains an angle and a mathematical vector that represents
 * the axis of  rotation. Rotations change the orientation of objects in a
 * coordinated system without any  translation. Computer graphics techniques
 * apply a rotational transformation in order to  orient or otherwise move
 * values with respect to a coordinated system. Conversely, rotation  can
 * mean the translation of the coordinated axes about the local origin. The
 * rotate element contains a list of four floating-point values, similar to
 * rotations in the OpenGL® and  RenderMan® specification. These values
 * are organized into a column vector [ X, Y, Z ]  specifying the axis of
 * rotation and an angle in degrees.
 */
class intRotate : public daeIntegrationObject
{
public: // Constuctor and Destructor
	/**
	 * Default Constructor.
	 */
	intRotate();
	 
	/**
	 * Default Destructor.
	 */
	~intRotate();
	 
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
