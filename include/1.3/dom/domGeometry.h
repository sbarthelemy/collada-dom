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
#ifndef __domGeometry_h__
#define __domGeometry_h__

#include <dom/domTypes.h>
#include <dom/domElements.h>

#include <dom/domMesh.h>
#include <dom/domExtra.h>

/**
 * Geometry describes the visual shape and appearance of an object in the
 * scene. The geometry element categorizes the declaration of geometric information.
 * Geometry is a branch of  mathematics that deals with the measurement, properties,
 * and relationships of points, lines, angles, surfaces, and solids. The geometry
 * element contains a declaration of a mesh. A  geometry element contains
 * the elements that describe geometric data. The actual type and  complexity
 * of the data is left to the child elements to represent in detail.
 */
class domGeometry : public daeElement
{
public:
	COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::GEOMETRY; }
protected:  // Attributes
/**
 *  The id attribute is a text string containing the unique identifier of
 * the geometry element. This value must be unique within the instance document.
 * Optional attribute. 
 */
	xsID attrId;
/**
 *  The name attribute is a text string containing the name of the geometry
 * element.  Optional attribute. 
 */
	xsNCName attrName;

protected:  // Elements
/**
 *  The mesh element must occur exactly one time.  @see domMesh
 */
	domMeshRef elemMesh;
/**
 *  The geometry element can contain zero or more extra elements.  @see domExtra
 */
	domExtra_Array elemExtra_array;

public:	//Accessors and Mutators
	/**
	 * Gets the id attribute.
	 * @return Returns a xsID of the id attribute.
	 */
	xsID getId() const { return attrId; }
	/**
	 * Sets the id attribute.
	 * @param atId The new value for the id attribute.
	 */
	void setId( xsID atId ) { *(daeStringRef*)&attrId = atId;
	 _validAttributeArray[0] = true; }

	/**
	 * Gets the name attribute.
	 * @return Returns a xsNCName of the name attribute.
	 */
	xsNCName getName() const { return attrName; }
	/**
	 * Sets the name attribute.
	 * @param atName The new value for the name attribute.
	 */
	void setName( xsNCName atName ) { *(daeStringRef*)&attrName = atName;
	 _validAttributeArray[1] = true; }

	/**
	 * Gets the mesh element.
	 * @return a daeSmartRef to the mesh element.
	 */
	const domMeshRef getMesh() const { return elemMesh; }
	/**
	 * Gets the extra element array.
	 * @return Returns a reference to the array of extra elements.
	 */
	domExtra_Array &getExtra_array() { return elemExtra_array; }
	/**
	 * Gets the extra element array.
	 * @return Returns a constant reference to the array of extra elements.
	 */
	const domExtra_Array &getExtra_array() const { return elemExtra_array; }
protected:
	/**
	 * Constructor
	 */
	domGeometry() : attrId(), attrName(), elemMesh(), elemExtra_array() {}
	/**
	 * Destructor
	 */
	virtual ~domGeometry() {}
	/**
	 * Copy Constructor
	 */
	domGeometry( const domGeometry &cpy ) : daeElement() { (void)cpy; }
	/**
	 * Overloaded assignment operator
	 */
	virtual domGeometry &operator=( const domGeometry &cpy ) { (void)cpy; return *this; }

public: // STATIC METHODS
	/**
	 * Creates an instance of this class and returns a daeElementRef referencing it.
	 * @param bytes The size allocated for this instance.
	 * @return a daeElementRef referencing an instance of this object.
	 */
	static DLLSPEC daeElementRef create(daeInt bytes);
	/**
	 * Creates a daeMetaElement object that describes this element in the meta object reflection framework.
	 * If a daeMetaElement already exists it will return that instead of creating a new one. 
	 * @return A daeMetaElement describing this COLLADA element.
	 */
	static DLLSPEC daeMetaElement* registerElement();

public: // STATIC MEMBERS
	/**
	 * The daeMetaElement that describes this element in the meta object reflection framework.
	 */
	static DLLSPEC daeMetaElement* _Meta;
};


#endif
