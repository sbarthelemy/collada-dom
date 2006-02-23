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

#ifndef __intTechnique_h__
#define __intTechnique_h__

#include <dae/daeIntegrationObject.h>
#include <dae/daeMetaElement.h>

class intTechnique;

typedef daeSmartRef<intTechnique> intTechniqueRef;
typedef daeTArray<intTechniqueRef> intTechniqueArray;

/**
 * The technique element declares the information used to process some portion
 * of the content. Each  technique conforms to an associated profile. Techniques
 * generally act as a “switch”. If more than  one is present for a particular
 * portion of content, on import, one or the other is picked, but  usually
 * not both. Selection should be based on which profile the importing application
 * can support. Techniques contain application data and programs, making them
 * assets that can be managed as a unit.
 */
class intTechnique : public daeIntegrationObject
{
public: // Constuctor and Destructor
	/**
	 * Default Constructor.
	 */
	intTechnique();
	 
	/**
	 * Default Destructor.
	 */
	~intTechnique();
	 
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
