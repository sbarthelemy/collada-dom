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
#ifndef __domScale_h__
#define __domScale_h__

#include <dom/domTypes.h>
#include <dom/domElements.h>


/**
 * The scale element contains a mathematical vector that represents the relative
 * proportions of  the X, Y and Z axes of a coordinated system. Scaling changes
 * the size of objects in a  coordinated system without any rotation or translation.
 * Computer graphics techniques apply a  scale transformation in order to
 * change the size or proportions of values with respect to a  coordinate
 * system axis. The scale element contains a list of three floating-point
 * values.  These values are organized into a column vector suitable for matrix
 * composition.
 */
class domScale : public daeElement
{
public:
	COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::SCALE; }
protected:  // Attribute
/**
 *  The sid attribute is a text string value containing the sub-identifier
 * of  this element. This value must be unique within the scope of the parent
 * element.  Optional attribute. 
 */
	xsNCName attrSid;

protected:  // Value
	/**
	 * The domFloat3 value of the text data of this element. 
	 */
	domFloat3 _value;

public:	//Accessors and Mutators
	/**
	 * Gets the sid attribute.
	 * @return Returns a xsNCName of the sid attribute.
	 */
	xsNCName getSid() const { return attrSid; }
	/**
	 * Sets the sid attribute.
	 * @param atSid The new value for the sid attribute.
	 */
	void setSid( xsNCName atSid ) { *(daeStringRef*)&attrSid = atSid;
	 _validAttributeArray[0] = true; }

	/**
	 * Gets the _value array.
	 * @return Returns a domFloat3 reference of the _value array.
	 */
	domFloat3 &getValue() { return _value; }
	/**
	 * Gets the _value array.
	 * @return Returns a constant domFloat3 reference of the _value array.
	 */
	const domFloat3 &getValue() const { return _value; }
	/**
	 * Sets the _value array.
	 * @param val The new value for the _value array.
	 */
	void setValue( const domFloat3 &val ) { _value = val; }

protected:
	/**
	 * Constructor
	 */
	domScale() : attrSid(), _value() {}
	/**
	 * Destructor
	 */
	virtual ~domScale() {}
	/**
	 * Copy Constructor
	 */
	domScale( const domScale &cpy ) : daeElement() { (void)cpy; }
	/**
	 * Overloaded assignment operator
	 */
	virtual domScale &operator=( const domScale &cpy ) { (void)cpy; return *this; }

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
