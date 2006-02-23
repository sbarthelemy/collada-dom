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

#ifndef __intGeometry_h__
#define __intGeometry_h__

#include "dae/daeIntegrationObject.h"
#include "dae/daeMetaElement.h"


class intGeometry;
class myGeometry;

typedef daeSmartRef<intGeometry> intGeometryRef;
typedef daeTArray<intGeometryRef> intGeometryArray;

class intGeometry : public daeIntegrationObject
{
public: // VIRTUAL INTEGRATION INTERFACE
	// This Method is used to create tool/runtime object
	virtual void createFrom(daeElementRef element);

	// This method translate from COLLADA to tool/runtime object
	virtual void fromCOLLADA();

	// This method is used as a second pass post process on tool/runtime objs
	virtual void fromCOLLADAPostProcess();

		// This Method is used to create tool/runtime object
	virtual void createTo(void *userData);

	// This method translate from COLLADA to tool/runtime object
	virtual void toCOLLADA();

	// This method is used as a second pass post process on tool/runtime objs
	virtual void toCOLLADAPostProcess();

public: // STATIC METHODS
	static daeElementRef create(daeInt bytes);
	static daeMetaElement * registerElement();
	
public: // STATIC MEMBERS
	static daeMetaElement* _Meta;

public: // USER CODE
	virtual ~intGeometry();
	myGeometry *getGeometry() { return _object; }

private: // USER CODE
	myGeometry *_object;
	daeElement* _element;
};

#endif
