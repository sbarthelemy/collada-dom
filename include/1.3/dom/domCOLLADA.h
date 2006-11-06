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
#ifndef __domCOLLADA_h__
#define __domCOLLADA_h__

#include <dom/domTypes.h>
#include <dom/domElements.h>

#include <dom/domAsset.h>
#include <dom/domLibrary.h>
#include <dom/domScene.h>

/**
 * The COLLADA element declares the root of the document that comprises some
 * of the content in  the COLLADA schema. The COLLADA schema is XML based;
 * therefore, it must have a 'document root element' or  document entity to
 * be a well-formed XML document.
 */
class domCOLLADA : public daeElement
{
public:
	COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::COLLADA; }
protected:  // Attribute
	/**
	 * This element may specify its own xmlns.
	 */
	xsAnyURI attrXmlns;
/**
 *  The version attribute is the COLLADA schema revision with which the instance
 * document conforms.  Required attribute. 
 */
	xsString attrVersion;

protected:  // Elements
	domAssetRef elemAsset;
	domLibrary_Array elemLibrary_array;
	domSceneRef elemScene;

public:	//Accessors and Mutators
	/**
	 * Gets the xmlns attribute.
	 * @return Returns a xsAnyURI reference of the xmlns attribute.
	 */
	xsAnyURI &getXmlns() { return attrXmlns; }
	/**
	 * Gets the xmlns attribute.
	 * @return Returns a constant xsAnyURI reference of the xmlns attribute.
	 */
	const xsAnyURI &getXmlns() const { return attrXmlns; }
	/**
	 * Sets the xmlns attribute.
	 * @param xmlns The new value for the xmlns attribute.
	 */
	void setXmlns( const xsAnyURI &xmlns ) { attrXmlns = xmlns;
	 _validAttributeArray[0] = true; }

	/**
	 * Gets the version attribute.
	 * @return Returns a xsString of the version attribute.
	 */
	xsString getVersion() const { return attrVersion; }
	/**
	 * Sets the version attribute.
	 * @param atVersion The new value for the version attribute.
	 */
	void setVersion( xsString atVersion ) { *(daeStringRef*)&attrVersion = atVersion;
	 _validAttributeArray[1] = true; }

	/**
	 * Gets the asset element.
	 * @return a daeSmartRef to the asset element.
	 */
	const domAssetRef getAsset() const { return elemAsset; }
	/**
	 * Gets the library element array.
	 * @return Returns a reference to the array of library elements.
	 */
	domLibrary_Array &getLibrary_array() { return elemLibrary_array; }
	/**
	 * Gets the library element array.
	 * @return Returns a constant reference to the array of library elements.
	 */
	const domLibrary_Array &getLibrary_array() const { return elemLibrary_array; }
	/**
	 * Gets the scene element.
	 * @return a daeSmartRef to the scene element.
	 */
	const domSceneRef getScene() const { return elemScene; }
protected:
	/**
	 * Constructor
	 */
	domCOLLADA() : attrVersion(), elemAsset(), elemLibrary_array(), elemScene() {}
	/**
	 * Destructor
	 */
	virtual ~domCOLLADA() {}
	/**
	 * Copy Constructor
	 */
	domCOLLADA( const domCOLLADA &cpy ) : daeElement() { (void)cpy; }
	/**
	 * Overloaded assignment operator
	 */
	virtual domCOLLADA &operator=( const domCOLLADA &cpy ) { (void)cpy; return *this; }

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
