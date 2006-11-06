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
#ifndef __domController_h__
#define __domController_h__

#include <dom/domTypes.h>
#include <dom/domElements.h>

#include <dom/domSkin.h>

/**
 * The controller element categorizes the declaration of generic control information.
 * A  controller is a device or mechanism that manages and directs the operations
 * of another  object. A controller element contains the elements that describe
 * control data. The actual type and complexity of the data is left to the
 * child elements to represent in detail.
 */
class domController : public daeElement
{
public:
	COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::CONTROLLER; }
protected:  // Attributes
/**
 *  The id attribute is a text string containing the unique identifier of
 * the controller element. This value must be unique within the instance document.
 * Optional attribute. 
 */
	xsID attrId;
/**
 *  The name attribute is the text string name of this element.  Optional
 * attribute. 
 */
	xsNCName attrName;
/**
 *  The target attribute indicates the ID of the geometry element bound to
 * the controller. Required attribute. 
 */
	xsIDREF attrTarget;

protected:  // Element
/**
 *  The skin element must occur exactly one time.  @see domSkin
 */
	domSkinRef elemSkin;

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
	 * Gets the target attribute.
	 * @return Returns a xsIDREF reference of the target attribute.
	 */
	xsIDREF &getTarget() { return attrTarget; }
	/**
	 * Gets the target attribute.
	 * @return Returns a constant xsIDREF reference of the target attribute.
	 */
	const xsIDREF &getTarget() const{ return attrTarget; }
	/**
	 * Sets the target attribute.
	 * @param atTarget The new value for the target attribute.
	 */
	void setTarget( const xsIDREF &atTarget ) { attrTarget = atTarget;
	 _validAttributeArray[2] = true; }

	/**
	 * Gets the skin element.
	 * @return a daeSmartRef to the skin element.
	 */
	const domSkinRef getSkin() const { return elemSkin; }
protected:
	/**
	 * Constructor
	 */
	domController() : attrId(), attrName(), attrTarget(), elemSkin() {}
	/**
	 * Destructor
	 */
	virtual ~domController() {}
	/**
	 * Copy Constructor
	 */
	domController( const domController &cpy ) : daeElement() { (void)cpy; }
	/**
	 * Overloaded assignment operator
	 */
	virtual domController &operator=( const domController &cpy ) { (void)cpy; return *this; }

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
