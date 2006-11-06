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
#ifndef __domInstance_h__
#define __domInstance_h__

#include <dom/domTypes.h>
#include <dom/domElements.h>


/**
 * The instance element declares the instantiation of a node, an object or
 * the contents of  another COLLADA resource.
 */
class domInstance : public daeElement
{
public:
	COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::INSTANCE; }
protected:  // Attribute
/**
 *  The url attribute indicates the URL of the location of the object to instance.
 * When the url attribute indicates a geometry element then the instantiation
 * does not  resolve any controller elements that may target the geometry
 * element. When the url  attribute indicates a controller element then the
 * instantiation resolves the  controller element and its target, such as
 * a geometry element.  Required attribute. 
 */
	xsAnyURI attrUrl;


public:	//Accessors and Mutators
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
	 _validAttributeArray[0] = true; }

protected:
	/**
	 * Constructor
	 */
	domInstance() : attrUrl() {}
	/**
	 * Destructor
	 */
	virtual ~domInstance() {}
	/**
	 * Copy Constructor
	 */
	domInstance( const domInstance &cpy ) : daeElement() { (void)cpy; }
	/**
	 * Overloaded assignment operator
	 */
	virtual domInstance &operator=( const domInstance &cpy ) { (void)cpy; return *this; }

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
