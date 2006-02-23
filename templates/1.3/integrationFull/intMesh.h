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

#ifndef __intMesh_h__
#define __intMesh_h__

#include <dae/daeIntegrationObject.h>
#include <dae/daeMetaElement.h>

/** The mesh element contains vertex and primitive information sufficient to describe basic 
			geometric meshes. Meshes embody a general form of geometric description that primarily 
			includes vertex and primitive information. Vertex information is the set of attributes 
			associated with a point on the surface of the mesh. Each vertex includes data for attributes
			such as:
			* Vertex position
			* Vertex color
			* Vertex normal
			* Vertex texture coordinate
			The mesh also includes a description of how the vertices are organized to form the geometric 
			shape of the mesh. The mesh vertices are collated into geometric primitives such as polygons, 
			triangles, or lines.
*/class intMesh;

typedef daeSmartRef<intMesh> intMeshRef;
typedef daeTArray<intMeshRef> intMeshArray;

class intMesh : public daeIntegrationObject
{
public: // Constuctor and Destructor
	/**
	 * Default Constructor.
	 */
	intMesh();
	 
	/**
	 * Default Destructor.
	 */
	~intMesh();
	 
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
