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
#ifndef __domLight_h__
#define __domLight_h__

#include <dom/domTypes.h>
#include <dom/domElements.h>

#include <dom/domAsset.h>
#include <dom/domParam.h>

/**
 * The light element declares a light source that illuminates the scene. The
 * light element may be referenced by an instance element to position and
 * orient the light in the scene. A light that is not instantiated in the
 * scene is not active. If the type  attribute value is 'DIRECTIONAL' or 'SPOT'
 * then the light's default direction vector in  local coordinates is [0,0,-1],
 * pointing down the -Z axis. If the type attribute value is  'POINT' or 'SPOT'
 * then two additional param elements are required: one named 'ATTENUATION',
 * and one named 'ATTENUATION_SCALE', as defined in the COMMON Profile. If
 * the type attribute  value is 'SPOT' then all the param elements required
 * by 'POINT' are required. In addition  three more param elements are required:
 * one named 'ANGLE' for the cone shape, one named  'FALLOFF', and one named
 * 'FALLOFF_SCALE', as defined in the COMMON Profile.
 */
class domLight : public daeElement
{
public:
	COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::LIGHT; }
protected:  // Attributes
/**
 *  The id attribute is a text string containing the unique identifier of
 * the light  element. This value must be unique within the instance document.
 * Optional attribute. 
 */
	xsID attrId;
/**
 *  The name attribute is the text string name of this element.  Optional
 * attribute. 
 */
	xsNCName attrName;
/**
 *  The type attribute indicates the basic type of light source.  The default
 * value is 'POINT'. Optional attribute. 
 */
	domLightType attrType;

protected:  // Elements
/**
 *  The asset element may occur zero or one time.  @see domAsset
 */
	domAssetRef elemAsset;
/**
 *  The child param elements describe the values that the light contributes
 * to a  material's computation. The name attribute of one of the param elements
 * must  have the value 'COLOR' as it is defined in the COMMON Profile for
 * all light  types. The 'COLOR' value of the light element modulates the
 * COMMON Profile  parameters named 'AMBIENT', 'DIFFUSE', and 'SPECULAR' of
 * a material element,  according to the type attribute value of the light
 * element. If the type  attribute value is 'AMBIENT' then the material's
 * 'AMBIENT' parameter is  modulated. If the type attribute value is 'DIRECTIONAL',
 * 'POINT', or 'SPOT'  then the material's 'DIFFUSE' and 'SPECULAR' parmeters
 * are modulated.  @see domParam
 */
	domParam_Array elemParam_array;

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
	 * @return Returns a domLightType of the type attribute.
	 */
	domLightType getType() const { return attrType; }
	/**
	 * Sets the type attribute.
	 * @param atType The new value for the type attribute.
	 */
	void setType( domLightType atType ) { attrType = atType;
	 _validAttributeArray[2] = true; }

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
protected:
	/**
	 * Constructor
	 */
	domLight() : attrId(), attrName(), attrType(), elemAsset(), elemParam_array() {}
	/**
	 * Destructor
	 */
	virtual ~domLight() {}
	/**
	 * Copy Constructor
	 */
	domLight( const domLight &cpy ) : daeElement() { (void)cpy; }
	/**
	 * Overloaded assignment operator
	 */
	virtual domLight &operator=( const domLight &cpy ) { (void)cpy; return *this; }

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
