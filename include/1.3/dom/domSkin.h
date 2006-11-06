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
#ifndef __domSkin_h__
#define __domSkin_h__

#include <dom/domTypes.h>
#include <dom/domElements.h>

#include <dom/domSource.h>
#include <dom/domVertices.h>

/**
 * The skin element contains vertex and primitive information sufficient to
 * describe  blend-weight skinning. The skinning information is stored outside
 * of the affected geometry,  under the skin element. This decoupling allows
 * skeletons to 'skin' multiple geometries and  different instances of a geometry
 * element to be modified by different skeletons.  * Bind-shape: represented
 * with a source, the same way as mesh vertex positions.  * Influences / joints:
 * a combiner represents the variable-length influence lists for each  vertex.
 * * Bind-pose: to avoid inverting matrices on import, COLLADA stores the
 * inverse of the  bind-matrices. The matrices are per-node (they are the
 * same for each vertex that is  influenced by a certain node). This is represented
 * by two matching arrays (one for the  nodes and one for the matrices) and
 * combined by the joints element. Note that any node can  be an influence,
 * not only joints. The name of the joints element was chosen for familiarity
 * reasons. There must be a one-to-one correspondence between the vertices
 * in skin and the mesh  vertices. Naturally, if a mesh is exported in its
 * bind-shape (the skeleton was not moved  after binding), the bindshape positions
 * in the skin will be the same as the vertex positions  under the targeted
 * mesh. Also, the skeleton's transforms will result in matrices that, after
 * inverting, will match the inverse-bind matrices in the skin.
 */
class domSkin : public daeElement
{
public:
	COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::SKIN; }
protected:  // Attributes
/**
 *  The id attribute is a text string containing the unique identifier of
 * the skin  element. This value must be unique within the instance document.
 * Optional attribute. 
 */
	xsID attrId;
/**
 *  The name attribute is the text string name of this element.  Optional
 * attribute. 
 */
	xsNCName attrName;

protected:  // Elements
/**
 *  The source element must occur one or more times. The source elements provide
 * the bulk of the skin's vertex data.  @see domSource
 */
	domSource_Array elemSource_array;
/**
 *  The vertices element must occur exactly one time. The vertices element
 * describes the skin vertices that are formed from the vertex data.  @see
 * domVertices
 */
	domVerticesRef elemVertices;

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
	 * Gets the source element array.
	 * @return Returns a reference to the array of source elements.
	 */
	domSource_Array &getSource_array() { return elemSource_array; }
	/**
	 * Gets the source element array.
	 * @return Returns a constant reference to the array of source elements.
	 */
	const domSource_Array &getSource_array() const { return elemSource_array; }
	/**
	 * Gets the vertices element.
	 * @return a daeSmartRef to the vertices element.
	 */
	const domVerticesRef getVertices() const { return elemVertices; }
protected:
	/**
	 * Constructor
	 */
	domSkin() : attrId(), attrName(), elemSource_array(), elemVertices() {}
	/**
	 * Destructor
	 */
	virtual ~domSkin() {}
	/**
	 * Copy Constructor
	 */
	domSkin( const domSkin &cpy ) : daeElement() { (void)cpy; }
	/**
	 * Overloaded assignment operator
	 */
	virtual domSkin &operator=( const domSkin &cpy ) { (void)cpy; return *this; }

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
