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
#ifndef __domLookat_h__
#define __domLookat_h__

#include <dom/domTypes.h>
#include <dom/domElements.h>


/**
 * The lookat element contains a position and orientation transformation suitable
 * for aiming a  camera. Positioning and orienting a camera or object in the
 * scene is often complicated when  using a matrix. A lookat transform is
 * an intuitive way to specify an eye position, interest  point, and orientation.
 * The lookat element contains a list of 9 floating-point values. As  in the
 * OpenGL® Utilities (GLU) implementation, these values are organized into
 * three vectors  as follows: * Eye position is given as Px, Py, Pz. * Interest
 * point is given as Ix, Iy, Iz. * Up-axis direction is given as UPx, UPy,
 * UPz. When computing the equivalent (viewing) matrix the interest point
 * is mapped to the negative  Z-axis and the eye position to the origin. The
 * up-axis is mapped to the positive Y-axis of  the viewing plane. The values
 * are specified in local, object coordinates.
 */
class domLookat : public daeElement
{
public:
	COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::LOOKAT; }
protected:  // Attribute
/**
 *  The sid attribute is a text string value containing the sub-identifier
 * of  this element. This value must be unique within the scope of the parent
 * element.  Optional attribute. 
 */
	xsNCName attrSid;

protected:  // Value
	/**
	 * The domFloat3x3 value of the text data of this element. 
	 */
	domFloat3x3 _value;

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
	 * @return Returns a domFloat3x3 reference of the _value array.
	 */
	domFloat3x3 &getValue() { return _value; }
	/**
	 * Gets the _value array.
	 * @return Returns a constant domFloat3x3 reference of the _value array.
	 */
	const domFloat3x3 &getValue() const { return _value; }
	/**
	 * Sets the _value array.
	 * @param val The new value for the _value array.
	 */
	void setValue( const domFloat3x3 &val ) { _value = val; }

protected:
	/**
	 * Constructor
	 */
	domLookat() : attrSid(), _value() {}
	/**
	 * Destructor
	 */
	virtual ~domLookat() {}
	/**
	 * Copy Constructor
	 */
	domLookat( const domLookat &cpy ) : daeElement() { (void)cpy; }
	/**
	 * Overloaded assignment operator
	 */
	virtual domLookat &operator=( const domLookat &cpy ) { (void)cpy; return *this; }

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
