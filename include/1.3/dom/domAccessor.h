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
#ifndef __domAccessor_h__
#define __domAccessor_h__

#include <dom/domTypes.h>
#include <dom/domElements.h>

#include <dom/domParam.h>

/**
 * The accessor element declares an access pattern to one of the array elements:
 * float_array, int_array, Name_array, bool_array, and the generic array element.
 * The accessor element describes access to arrays that are organized in either
 * an interleaved  or noninterleaved manner according to the permutations
 * of the offset and stride attributes.
 */
class domAccessor : public daeElement
{
public:
	COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::ACCESSOR; }
protected:  // Attributes
/**
 *  The id attribute is a text string containing the unique identifier of
 * the accessor  element. This value must be unique within the instance document.
 * Optional attribute. 
 */
	xsID attrId;
/**
 *  The count attribute indicates the number of times the array is accessed.
 * Required attribute. 
 */
	xsNonNegativeInteger attrCount;
/**
 *  The offset attribute indicates the index of the first value in the array
 * that is accessed.  The default value is 0.  Optional attribute. 
 */
	xsNonNegativeInteger attrOffset;
/**
 *  The source attribute indicates the location of the array to access using
 * a URL  expression.  Required attribute. 
 */
	xsAnyURI attrSource;
/**
 *  The stride attribute indicates the number of values to access per count
 * iteration  according to the type of data in the source array.  The default
 * value is 1, indicating that a single value is accessed.  Optional attribute.
 * The stride attribute must have a value equal to or greater then the number
 * of param  elements. If there are fewer param elements then indicated by
 * the stride value, the  unbound array data source values are skipped. 
 */
	xsNonNegativeInteger attrStride;

protected:  // Element
/**
 *  The param element describes the output of the accessor element sufficiently
 * to  bind that output to consumers of the data stream. The param element
 * may occur zero or more times. The number and order of param elements define
 * the output of the accessor  element. Parameters are bound to values in
 * the order they are specified.  Parameter ordering is irrelevant to the
 * array data source of the accessor  element. This means that no swizzling
 * of the data occurs. The type attribute of the param element, when it is
 * a child of the accessor  element, is restricted to the set of array types:
 * int, float, Name, bool, and  token. A param element without a name attribute
 * is unbound. This is an  indication that the value is not passed to the
 * consumer.  @see domParam
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
	 * Gets the count attribute.
	 * @return Returns a xsNonNegativeInteger of the count attribute.
	 */
	xsNonNegativeInteger getCount() const { return attrCount; }
	/**
	 * Sets the count attribute.
	 * @param atCount The new value for the count attribute.
	 */
	void setCount( xsNonNegativeInteger atCount ) { attrCount = atCount;
	 _validAttributeArray[1] = true; }

	/**
	 * Gets the offset attribute.
	 * @return Returns a xsNonNegativeInteger of the offset attribute.
	 */
	xsNonNegativeInteger getOffset() const { return attrOffset; }
	/**
	 * Sets the offset attribute.
	 * @param atOffset The new value for the offset attribute.
	 */
	void setOffset( xsNonNegativeInteger atOffset ) { attrOffset = atOffset;
	 _validAttributeArray[2] = true; }

	/**
	 * Gets the source attribute.
	 * @return Returns a xsAnyURI reference of the source attribute.
	 */
	xsAnyURI &getSource() { return attrSource; }
	/**
	 * Gets the source attribute.
	 * @return Returns a constant xsAnyURI reference of the source attribute.
	 */
	const xsAnyURI &getSource() const { return attrSource; }
	/**
	 * Sets the source attribute.
	 * @param atSource The new value for the source attribute.
	 */
	void setSource( const xsAnyURI &atSource ) { attrSource = atSource;
	 _validAttributeArray[3] = true; }

	/**
	 * Gets the stride attribute.
	 * @return Returns a xsNonNegativeInteger of the stride attribute.
	 */
	xsNonNegativeInteger getStride() const { return attrStride; }
	/**
	 * Sets the stride attribute.
	 * @param atStride The new value for the stride attribute.
	 */
	void setStride( xsNonNegativeInteger atStride ) { attrStride = atStride;
	 _validAttributeArray[4] = true; }

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
	domAccessor() : attrId(), attrCount(), attrOffset(), attrSource(), attrStride(), elemParam_array() {}
	/**
	 * Destructor
	 */
	virtual ~domAccessor() {}
	/**
	 * Copy Constructor
	 */
	domAccessor( const domAccessor &cpy ) : daeElement() { (void)cpy; }
	/**
	 * Overloaded assignment operator
	 */
	virtual domAccessor &operator=( const domAccessor &cpy ) { (void)cpy; return *this; }

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
