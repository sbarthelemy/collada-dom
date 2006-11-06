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
#ifndef __domMaterial_h__
#define __domMaterial_h__

#include <dom/domTypes.h>
#include <dom/domElements.h>

#include <dom/domAsset.h>
#include <dom/domParam.h>
#include <dom/domShader.h>

/**
 * Materials describe the visual appearance of a geometric object. The material
 * element  categorizes the declaration of rendering appearance information.
 * The material element  contains declarations of shaders, parameters, techniques,
 * and vertex and pixel programs. A material element is the base container
 * for all rendering and shading information. The  visual appearance of a
 * geometric object is described by its material properties.
 */
class domMaterial : public daeElement
{
public:
	COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::MATERIAL; }
protected:  // Attributes
/**
 *  The id attribute is a text string containing the unique identifier of
 * the material  element. This value must be unique within the instance document.
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
 *  The material element may contain zero or one asset elements.  @see domAsset
 */
	domAssetRef elemAsset;
/**
 *  The material element may contain zero or more param elements.  @see domParam
 */
	domParam_Array elemParam_array;
/**
 *  The material element must contain one or more shader elements.  @see domShader
 */
	domShader_Array elemShader_array;

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
	 * Gets the asset element.
	 * @return a daeSmartRef to the asset element.
	 */
	const domAssetRef getAsset() const { return elemAsset; }
	/**
	 * Gets the param element array.
	 * @return Returns a reference to the array of param elements.
	 */
	domParam_Array &getParam_array() { return elemParam_array; }
	/**
	 * Gets the param element array.
	 * @return Returns a constant reference to the array of param elements.
	 */
	const domParam_Array &getParam_array() const { return elemParam_array; }
	/**
	 * Gets the shader element array.
	 * @return Returns a reference to the array of shader elements.
	 */
	domShader_Array &getShader_array() { return elemShader_array; }
	/**
	 * Gets the shader element array.
	 * @return Returns a constant reference to the array of shader elements.
	 */
	const domShader_Array &getShader_array() const { return elemShader_array; }
protected:
	/**
	 * Constructor
	 */
	domMaterial() : attrId(), attrName(), elemAsset(), elemParam_array(), elemShader_array() {}
	/**
	 * Destructor
	 */
	virtual ~domMaterial() {}
	/**
	 * Copy Constructor
	 */
	domMaterial( const domMaterial &cpy ) : daeElement() { (void)cpy; }
	/**
	 * Overloaded assignment operator
	 */
	virtual domMaterial &operator=( const domMaterial &cpy ) { (void)cpy; return *this; }

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
