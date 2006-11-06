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
#ifndef __domLibrary_h__
#define __domLibrary_h__

#include <dom/domTypes.h>
#include <dom/domElements.h>

#include <dom/domAnimation.h>
#include <dom/domCamera.h>
#include <dom/domCode.h>
#include <dom/domController.h>
#include <dom/domGeometry.h>
#include <dom/domImage.h>
#include <dom/domLight.h>
#include <dom/domMaterial.h>
#include <dom/domProgram.h>
#include <dom/domTexture.h>

/**
 * The library element declares a module of elements of a single category.
 * As data sets become larger and more complex they become harder to manipulate
 * within a single container. One  approach to manage this complexity is to
 * divide the data into smaller pieces organized by  some criteria. These
 * modular pieces can then be stored in separate resources as libraries. The
 * library element can have zero or more child elements that conform to the
 * category of  its type attribute. A library whose type attribute is 'MATERIAL'
 * must contain only material elements, for example.
 */
class domLibrary : public daeElement
{
public:
	COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::LIBRARY; }
protected:  // Attributes
/**
 *  The id attribute is a text string containing the unique identifier of
 * the library element. This value must be unique within the instance document.
 * Optional attribute. 
 */
	xsID attrId;
/**
 *  The name attribute is the text string name of the element.  Optional attribute.
 */
	xsNCName attrName;
/**
 *  The type attribute indicates the category of child elements contained.
 * Required attribute. 
 */
	domLibraryType attrType;

protected:  // Elements
	domAnimation_Array elemAnimation_array;
	domCamera_Array elemCamera_array;
	domCode_Array elemCode_array;
	domController_Array elemController_array;
	domGeometry_Array elemGeometry_array;
	domImage_Array elemImage_array;
	domLight_Array elemLight_array;
	domMaterial_Array elemMaterial_array;
	domProgram_Array elemProgram_array;
	domTexture_Array elemTexture_array;
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
	 * Gets the type attribute.
	 * @return Returns a domLibraryType of the type attribute.
	 */
	domLibraryType getType() const { return attrType; }
	/**
	 * Sets the type attribute.
	 * @param atType The new value for the type attribute.
	 */
	void setType( domLibraryType atType ) { attrType = atType;
	 _validAttributeArray[2] = true; }

	/**
	 * Gets the animation element array.
	 * @return Returns a reference to the array of animation elements.
	 */
	domAnimation_Array &getAnimation_array() { return elemAnimation_array; }
	/**
	 * Gets the animation element array.
	 * @return Returns a constant reference to the array of animation elements.
	 */
	const domAnimation_Array &getAnimation_array() const { return elemAnimation_array; }
	/**
	 * Gets the camera element array.
	 * @return Returns a reference to the array of camera elements.
	 */
	domCamera_Array &getCamera_array() { return elemCamera_array; }
	/**
	 * Gets the camera element array.
	 * @return Returns a constant reference to the array of camera elements.
	 */
	const domCamera_Array &getCamera_array() const { return elemCamera_array; }
	/**
	 * Gets the code element array.
	 * @return Returns a reference to the array of code elements.
	 */
	domCode_Array &getCode_array() { return elemCode_array; }
	/**
	 * Gets the code element array.
	 * @return Returns a constant reference to the array of code elements.
	 */
	const domCode_Array &getCode_array() const { return elemCode_array; }
	/**
	 * Gets the controller element array.
	 * @return Returns a reference to the array of controller elements.
	 */
	domController_Array &getController_array() { return elemController_array; }
	/**
	 * Gets the controller element array.
	 * @return Returns a constant reference to the array of controller elements.
	 */
	const domController_Array &getController_array() const { return elemController_array; }
	/**
	 * Gets the geometry element array.
	 * @return Returns a reference to the array of geometry elements.
	 */
	domGeometry_Array &getGeometry_array() { return elemGeometry_array; }
	/**
	 * Gets the geometry element array.
	 * @return Returns a constant reference to the array of geometry elements.
	 */
	const domGeometry_Array &getGeometry_array() const { return elemGeometry_array; }
	/**
	 * Gets the image element array.
	 * @return Returns a reference to the array of image elements.
	 */
	domImage_Array &getImage_array() { return elemImage_array; }
	/**
	 * Gets the image element array.
	 * @return Returns a constant reference to the array of image elements.
	 */
	const domImage_Array &getImage_array() const { return elemImage_array; }
	/**
	 * Gets the light element array.
	 * @return Returns a reference to the array of light elements.
	 */
	domLight_Array &getLight_array() { return elemLight_array; }
	/**
	 * Gets the light element array.
	 * @return Returns a constant reference to the array of light elements.
	 */
	const domLight_Array &getLight_array() const { return elemLight_array; }
	/**
	 * Gets the material element array.
	 * @return Returns a reference to the array of material elements.
	 */
	domMaterial_Array &getMaterial_array() { return elemMaterial_array; }
	/**
	 * Gets the material element array.
	 * @return Returns a constant reference to the array of material elements.
	 */
	const domMaterial_Array &getMaterial_array() const { return elemMaterial_array; }
	/**
	 * Gets the program element array.
	 * @return Returns a reference to the array of program elements.
	 */
	domProgram_Array &getProgram_array() { return elemProgram_array; }
	/**
	 * Gets the program element array.
	 * @return Returns a constant reference to the array of program elements.
	 */
	const domProgram_Array &getProgram_array() const { return elemProgram_array; }
	/**
	 * Gets the texture element array.
	 * @return Returns a reference to the array of texture elements.
	 */
	domTexture_Array &getTexture_array() { return elemTexture_array; }
	/**
	 * Gets the texture element array.
	 * @return Returns a constant reference to the array of texture elements.
	 */
	const domTexture_Array &getTexture_array() const { return elemTexture_array; }
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
	domLibrary() : attrId(), attrName(), attrType(), elemAnimation_array(), elemCamera_array(), elemCode_array(), elemController_array(), elemGeometry_array(), elemImage_array(), elemLight_array(), elemMaterial_array(), elemProgram_array(), elemTexture_array() {}
	/**
	 * Destructor
	 */
	virtual ~domLibrary() {}
	/**
	 * Copy Constructor
	 */
	domLibrary( const domLibrary &cpy ) : daeElement() { (void)cpy; }
	/**
	 * Overloaded assignment operator
	 */
	virtual domLibrary &operator=( const domLibrary &cpy ) { (void)cpy; return *this; }

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
