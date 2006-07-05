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

#ifndef __intParam_h__
#define __intParam_h__

#include <dae/daeIntegrationObject.h>
#include <dae/daeMetaElement.h>

class intParam;

typedef daeSmartRef<intParam> intParamRef;
typedef daeTArray<intParamRef> intParamArray;

/**
 * The param element declares parametric information regarding its parent
 * element. The param element describes parameters for generic data flow,
 * program data, and entry points. A functional or programmatical format requires
 * a means for users to specify parametric  information. This information
 * represents function parameter (argument) data. The basic  declaration of
 * a parameter describes the name, data type, and value data of the parameter.
 * That parameter name identifies it to the function or program. The parameter
 * type indicates  the encoding of its value. The parameter value is the actual
 * data.
 */
class intParam : public daeIntegrationObject
{
public: // Constuctor and Destructor
	/**
	 * Default Constructor.
	 */
	intParam();
	 
	/**
	 * Default Destructor.
	 */
	~intParam();
	 
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
