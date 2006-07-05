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

#ifndef __intNode_h__
#define __intNode_h__

#include <dae/daeIntegrationObject.h>
#include <dae/daeMetaElement.h>

class intNode;

typedef daeSmartRef<intNode> intNodeRef;
typedef daeTArray<intNodeRef> intNodeArray;

/**
 * Nodes embody the hierarchical relationship of elements in the scene. The
 * node element  declares a point of interest in the scene. A node denotes
 * one point on a branch of the scene graph. The node element is essentially
 * the root of a sub graph of the entire scene graph. The node element represents
 * a context in which the child transform elements are composed in  the order
 * that they occur. All the other child elements are affected equally by the
 * accumulated transform in the scope of the node element. The transform elements
 * transform the  coordinate system of the node element. Mathematically, this
 * means that the transform elements  are converted to matrices and post-multiplied
 * in the order they are specified to compose the  coordinate system.
 */
class intNode : public daeIntegrationObject
{
public: // Constuctor and Destructor
	/**
	 * Default Constructor.
	 */
	intNode();
	 
	/**
	 * Default Destructor.
	 */
	~intNode();
	 
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
