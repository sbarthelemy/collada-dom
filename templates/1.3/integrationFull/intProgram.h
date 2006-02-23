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

#ifndef __intProgram_h__
#define __intProgram_h__

#include <dae/daeIntegrationObject.h>
#include <dae/daeMetaElement.h>

/** The program element declares parameters and program code that executes within the 
			application runtime environment or the graphics pipeline. Programs use the same id/url 
			linking (define/reference) facility as other elements. To define a program, specify an id 
			attribute value. To refer to a program (i.e. a "function call"), reference that id value in 
			a url attribute. Another way to refer to a program is by using a name as the URL value such 
			as: <program url="PHONG"> In this case, the name refers to a well-known or built-in program.
			It's not a URI fragment (#PHONG) because it's not in the same instance document. It's 
			implicitly defined in the COMMON profile.
*/class intProgram;

typedef daeSmartRef<intProgram> intProgramRef;
typedef daeTArray<intProgramRef> intProgramArray;

class intProgram : public daeIntegrationObject
{
public: // Constuctor and Destructor
	/**
	 * Default Constructor.
	 */
	intProgram();
	 
	/**
	 * Default Destructor.
	 */
	~intProgram();
	 
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
