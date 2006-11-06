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
#ifndef __domProgram_h__
#define __domProgram_h__

#include <dom/domTypes.h>
#include <dom/domElements.h>

#include <dom/domAsset.h>
#include <dom/domParam.h>
#include <dom/domEntry.h>
#include <dom/domCode.h>

/**
 * The program element declares parameters and program code that executes
 * within the  application runtime environment or the graphics pipeline. Programs
 * use the same id/url  linking (define/reference) facility as other elements.
 * To define a program, specify an id  attribute value. To refer to a program
 * (i.e. a "function call"), reference that id value in  a url attribute.
 * Another way to refer to a program is by using a name as the URL value such
 * as: <program url="PHONG"> In this case, the name refers to a well-known
 * or built-in program. It's not a URI fragment (#PHONG) because it's not
 * in the same instance document. It's  implicitly defined in the COMMON profile.
 */
class domProgram : public daeElement
{
public:
	COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::PROGRAM; }
protected:  // Attributes
/**
 *  The id attribute is a text string containing the unique identifier of
 * the program  element. This value must be unique within the instance document.
 * Optional attribute. 
 */
	xsID attrId;
/**
 *  The name attribute is the text string name of this element.  Optional
 * attribute. 
 */
	xsNCName attrName;
/**
 *  The url attribute is a valid URL to the location of the program resource.
 * This  resource contains information understood by the application run-time
 * according to  the technique profile in scope.  Optional attribute. 
 */
	xsAnyURI attrUrl;

protected:  // Elements
/**
 *  This element may contain an asset element.  @see domAsset
 */
	domAssetRef elemAsset;
/**
 *  The param element may occur zero or more times. A param element, specified
 * as a  child of the program element, indicates the interface to the program.
 * The value  of such a parameter may vary each time the program executes.
 * @see domParam
 */
	domParam_Array elemParam_array;
/**
 *   @see domEntry
 */
	domEntry_Array elemEntry_array;
/**
 *  The code element may occur zero or one time.  @see domCode
 */
	domCode_Array elemCode_array;

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
	 * Gets the url attribute.
	 * @return Returns a xsAnyURI reference of the url attribute.
	 */
	xsAnyURI &getUrl() { return attrUrl; }
	/**
	 * Gets the url attribute.
	 * @return Returns a constant xsAnyURI reference of the url attribute.
	 */
	const xsAnyURI &getUrl() const { return attrUrl; }
	/**
	 * Sets the url attribute.
	 * @param atUrl The new value for the url attribute.
	 */
	void setUrl( const xsAnyURI &atUrl ) { attrUrl = atUrl;
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
	/**
	 * Gets the entry element array.
	 * @return Returns a reference to the array of entry elements.
	 */
	domEntry_Array &getEntry_array() { return elemEntry_array; }
	/**
	 * Gets the entry element array.
	 * @return Returns a constant reference to the array of entry elements.
	 */
	const domEntry_Array &getEntry_array() const { return elemEntry_array; }
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
protected:
	/**
	 * Constructor
	 */
	domProgram() : attrId(), attrName(), attrUrl(), elemAsset(), elemParam_array(), elemEntry_array(), elemCode_array() {}
	/**
	 * Destructor
	 */
	virtual ~domProgram() {}
	/**
	 * Copy Constructor
	 */
	domProgram( const domProgram &cpy ) : daeElement() { (void)cpy; }
	/**
	 * Overloaded assignment operator
	 */
	virtual domProgram &operator=( const domProgram &cpy ) { (void)cpy; return *this; }

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
