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
#ifndef __domScene_h__
#define __domScene_h__

#include <dom/domTypes.h>
#include <dom/domElements.h>

#include <dom/domLookat.h>
#include <dom/domMatrix.h>
#include <dom/domPerspective.h>
#include <dom/domRotate.h>
#include <dom/domScale.h>
#include <dom/domSkew.h>
#include <dom/domTranslate.h>
#include <dom/domBoundingbox.h>
#include <dom/domNode.h>
#include <dom/domExtra.h>

/**
 * The scene embodies the entire set of information that can be visualized
 * from the contents of  a COLLADA resource. The scene element declares the
 * base of the scene hierarchy or scene graph.  The scene contains elements
 * that comprise much of the visual and transformational information  content
 * as created by the authoring tools. The hierarchical structure of the scene
 * is  organized into a scene graph. A scene graph is a directed acyclic graph
 * (DAG) or tree data  structure that contains nodes of visual information
 * and related data. The structure of the  scene graph contributes to optimal
 * processing and rendering of the data and is therefore widely used in the
 * computer graphics domain.
 */
class domScene : public daeElement
{
public:
	COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::SCENE; }
protected:  // Attributes
/**
 *  The id attribute is a text string containing the unique identifier of
 * the scene  element. This value must be unique within the instance document.
 * Optional attribute. 
 */
	xsID attrId;
/**
 *  The name attribute is a text string containing the name of the scene element.
 * Optional attribute. 
 */
	xsNCName attrName;

protected:  // Elements
/**
 *  Allows the scene to express a lookat transform  @see domLookat
 */
	domLookat_Array elemLookat_array;
/**
 *  Allows the scene to express a matrix transform  @see domMatrix
 */
	domMatrix_Array elemMatrix_array;
/**
 *  Allows the scene to express a perspective transform  @see domPerspective
 */
	domPerspective_Array elemPerspective_array;
/**
 *  Allows the scene to express a rotational transform  @see domRotate
 */
	domRotate_Array elemRotate_array;
/**
 *  Allows the scene to express a scale transform  @see domScale
 */
	domScale_Array elemScale_array;
/**
 *  Allows the scene to express a skew transform  @see domSkew
 */
	domSkew_Array elemSkew_array;
/**
 *  Allows the scene to express a translational transform  @see domTranslate
 */
	domTranslate_Array elemTranslate_array;
/**
 *  Allows the scene to express a bounding box  @see domBoundingbox
 */
	domBoundingbox_Array elemBoundingbox_array;
/**
 *  Allows the scene to recursively define hierarchy  @see domNode
 */
	domNode_Array elemNode_array;
/**
 *  Allows the scene to define extra information  @see domExtra
 */
	domExtra_Array elemExtra_array;
	/**
	 * Used to preserve order in elements that do not specify strict sequencing of sub-elements.
	 */
	daeElementRefArray _contents;
	/**
	 * Used to preserve order in elements that have a complex content model.
	 */
	daeUIntArray       _contentsOrder;


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
	 * Gets the lookat element array.
	 * @return Returns a reference to the array of lookat elements.
	 */
	domLookat_Array &getLookat_array() { return elemLookat_array; }
	/**
	 * Gets the lookat element array.
	 * @return Returns a constant reference to the array of lookat elements.
	 */
	const domLookat_Array &getLookat_array() const { return elemLookat_array; }
	/**
	 * Gets the matrix element array.
	 * @return Returns a reference to the array of matrix elements.
	 */
	domMatrix_Array &getMatrix_array() { return elemMatrix_array; }
	/**
	 * Gets the matrix element array.
	 * @return Returns a constant reference to the array of matrix elements.
	 */
	const domMatrix_Array &getMatrix_array() const { return elemMatrix_array; }
	/**
	 * Gets the perspective element array.
	 * @return Returns a reference to the array of perspective elements.
	 */
	domPerspective_Array &getPerspective_array() { return elemPerspective_array; }
	/**
	 * Gets the perspective element array.
	 * @return Returns a constant reference to the array of perspective elements.
	 */
	const domPerspective_Array &getPerspective_array() const { return elemPerspective_array; }
	/**
	 * Gets the rotate element array.
	 * @return Returns a reference to the array of rotate elements.
	 */
	domRotate_Array &getRotate_array() { return elemRotate_array; }
	/**
	 * Gets the rotate element array.
	 * @return Returns a constant reference to the array of rotate elements.
	 */
	const domRotate_Array &getRotate_array() const { return elemRotate_array; }
	/**
	 * Gets the scale element array.
	 * @return Returns a reference to the array of scale elements.
	 */
	domScale_Array &getScale_array() { return elemScale_array; }
	/**
	 * Gets the scale element array.
	 * @return Returns a constant reference to the array of scale elements.
	 */
	const domScale_Array &getScale_array() const { return elemScale_array; }
	/**
	 * Gets the skew element array.
	 * @return Returns a reference to the array of skew elements.
	 */
	domSkew_Array &getSkew_array() { return elemSkew_array; }
	/**
	 * Gets the skew element array.
	 * @return Returns a constant reference to the array of skew elements.
	 */
	const domSkew_Array &getSkew_array() const { return elemSkew_array; }
	/**
	 * Gets the translate element array.
	 * @return Returns a reference to the array of translate elements.
	 */
	domTranslate_Array &getTranslate_array() { return elemTranslate_array; }
	/**
	 * Gets the translate element array.
	 * @return Returns a constant reference to the array of translate elements.
	 */
	const domTranslate_Array &getTranslate_array() const { return elemTranslate_array; }
	/**
	 * Gets the boundingbox element array.
	 * @return Returns a reference to the array of boundingbox elements.
	 */
	domBoundingbox_Array &getBoundingbox_array() { return elemBoundingbox_array; }
	/**
	 * Gets the boundingbox element array.
	 * @return Returns a constant reference to the array of boundingbox elements.
	 */
	const domBoundingbox_Array &getBoundingbox_array() const { return elemBoundingbox_array; }
	/**
	 * Gets the node element array.
	 * @return Returns a reference to the array of node elements.
	 */
	domNode_Array &getNode_array() { return elemNode_array; }
	/**
	 * Gets the node element array.
	 * @return Returns a constant reference to the array of node elements.
	 */
	const domNode_Array &getNode_array() const { return elemNode_array; }
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
	/**
	 * Gets the _contents array.
	 * @return Returns a reference to the _contents element array.
	 */
	daeElementRefArray &getContents() { return _contents; }
	/**
	 * Gets the _contents array.
	 * @return Returns a constant reference to the _contents element array.
	 */
	const daeElementRefArray &getContents() const { return _contents; }

protected:
	/**
	 * Constructor
	 */
	domScene() : attrId(), attrName(), elemLookat_array(), elemMatrix_array(), elemPerspective_array(), elemRotate_array(), elemScale_array(), elemSkew_array(), elemTranslate_array(), elemBoundingbox_array(), elemNode_array(), elemExtra_array() {}
	/**
	 * Destructor
	 */
	virtual ~domScene() {}
	/**
	 * Copy Constructor
	 */
	domScene( const domScene &cpy ) : daeElement() { (void)cpy; }
	/**
	 * Overloaded assignment operator
	 */
	virtual domScene &operator=( const domScene &cpy ) { (void)cpy; return *this; }

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
