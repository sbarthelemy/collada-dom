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
#ifndef __domCode_h__
#define __domCode_h__

#include <dom/domTypes.h>
#include <dom/domElements.h>


/**
 * The code element declares the executable code for a program element. The
 * code element may  contain a text string value. This string value is interpreted
 * as source code.
 */
class domCode : public daeElement
{
public:
	COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::CODE; }
protected:  // Attributes
/**
 *  The id attribute is a text string containing the unique identifier of
 * the  code element. This value must be unique within the instance document.
 * Optional attribute. 
 */
	xsID attrId;
/**
 *  The lang attribute indicates the programming language that the code is
 * stored in.  Required attribute. 
 */
	xsNMTOKEN attrLang;
/**
 *  The profile attribute indicates the type of profile. This is a vendor
 * defined character string that indicates the platform or capability target
 * for the code.  Optional attribute. 
 */
	xsString attrProfile;
/**
 *  The semantic attribute is the user-defined meaning of the code.  Optional
 * attribute. 
 */
	xsNMTOKEN attrSemantic;
/**
 *  The url attribute is a valid URL to the location of the code resource.
 * Optional attribute. 
 */
	xsAnyURI attrUrl;

protected:  // Value
	/**
	 * The xsString value of the text data of this element. 
	 */
	xsString _value;

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
	 * Gets the lang attribute.
	 * @return Returns a xsNMTOKEN of the lang attribute.
	 */
	xsNMTOKEN getLang() const { return attrLang; }
	/**
	 * Sets the lang attribute.
	 * @param atLang The new value for the lang attribute.
	 */
	void setLang( xsNMTOKEN atLang ) { *(daeStringRef*)&attrLang = atLang;
	 _validAttributeArray[1] = true; }

	/**
	 * Gets the profile attribute.
	 * @return Returns a xsString of the profile attribute.
	 */
	xsString getProfile() const { return attrProfile; }
	/**
	 * Sets the profile attribute.
	 * @param atProfile The new value for the profile attribute.
	 */
	void setProfile( xsString atProfile ) { *(daeStringRef*)&attrProfile = atProfile;
	 _validAttributeArray[2] = true; }

	/**
	 * Gets the semantic attribute.
	 * @return Returns a xsNMTOKEN of the semantic attribute.
	 */
	xsNMTOKEN getSemantic() const { return attrSemantic; }
	/**
	 * Sets the semantic attribute.
	 * @param atSemantic The new value for the semantic attribute.
	 */
	void setSemantic( xsNMTOKEN atSemantic ) { *(daeStringRef*)&attrSemantic = atSemantic;
	 _validAttributeArray[3] = true; }

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
	 _validAttributeArray[4] = true; }

	/**
	 * Gets the value of this element.
	 * @return Returns a xsString of the value.
	 */
	xsString getValue() const { return _value; }
	/**
	 * Sets the _value of this element.
	 * @param val The new value for this element.
	 */
	void setValue( xsString val ) { *(daeStringRef*)&_value = val; }

protected:
	/**
	 * Constructor
	 */
	domCode() : attrId(), attrLang(), attrProfile(), attrSemantic(), attrUrl(), _value() {}
	/**
	 * Destructor
	 */
	virtual ~domCode() {}
	/**
	 * Copy Constructor
	 */
	domCode( const domCode &cpy ) : daeElement() { (void)cpy; }
	/**
	 * Overloaded assignment operator
	 */
	virtual domCode &operator=( const domCode &cpy ) { (void)cpy; return *this; }

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
