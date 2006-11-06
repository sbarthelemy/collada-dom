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
#ifndef __domArray_h__
#define __domArray_h__

#include <dom/domTypes.h>
#include <dom/domElements.h>


/**
 * The array element declares the storage for a homogenous array of generic
 * data values. The array element is deprecated in this version of COLLADA
 * and may be removed in the future.
 */
class domArray : public daeElement
{
public:
	COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::ARRAY; }
protected:  // Attributes
/**
 *  The id attribute is a text string containing the unique identifier of
 * the  array element. This value must be unique within the instance document.
 * Optional attribute. 
 */
	xsID attrId;
/**
 *  The name attribute is the text string name of this element.  Optional
 * attribute. 
 */
	xsNCName attrName;
/**
 *  The count attribute indicates the number of values in the array.  Required
 * attribute. 
 */
	xsNonNegativeInteger attrCount;
/**
 *  The type attribute indicates the data type, such as floating-point or
 * integer numbers of the values contained in the array. The array may also
 * contain a list of names or tokens conforming to the XML Schema Language
 * derived types xs:Name and xs:token, respectively.  Required attribute.
 */
	domArrayTypes attrType;
/**
 *  The minInclusive attribute indicates the smallest integer value that can
 * be  contained in the array.  The default value is -2147483648.  Optional
 * attribute. 
 */
	xsInteger attrMinInclusive;
/**
 *  The maxInclusive attribute indicates the largest integer value that can
 * be  contained in the array.  The default value is 2147483647.  Optional
 * attribute. 
 */
	xsInteger attrMaxInclusive;
/**
 *  The digits attribute indicates the number of significant decimal digits
 * of  the float values that can be contained in the array.  The default value
 * is 6.  Optional attribute. 
 */
	xsShort attrDigits;
/**
 *  The magnitude attribute indicates the largest exponent of the float values
 * that can be contained in the array.  The default value is 38.  Optional
 * attribute. 
 */
	xsShort attrMagnitude;

protected:  // Value
	/**
	 * The domListOfTokens value of the text data of this element. 
	 */
	domListOfTokens _value;

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
	 * Gets the count attribute.
	 * @return Returns a xsNonNegativeInteger of the count attribute.
	 */
	xsNonNegativeInteger getCount() const { return attrCount; }
	/**
	 * Sets the count attribute.
	 * @param atCount The new value for the count attribute.
	 */
	void setCount( xsNonNegativeInteger atCount ) { attrCount = atCount;
	 _validAttributeArray[2] = true; }

	/**
	 * Gets the type attribute.
	 * @return Returns a domArrayTypes of the type attribute.
	 */
	domArrayTypes getType() const { return attrType; }
	/**
	 * Sets the type attribute.
	 * @param atType The new value for the type attribute.
	 */
	void setType( domArrayTypes atType ) { attrType = atType;
	 _validAttributeArray[3] = true; }

	/**
	 * Gets the minInclusive attribute.
	 * @return Returns a xsInteger of the minInclusive attribute.
	 */
	xsInteger getMinInclusive() const { return attrMinInclusive; }
	/**
	 * Sets the minInclusive attribute.
	 * @param atMinInclusive The new value for the minInclusive attribute.
	 */
	void setMinInclusive( xsInteger atMinInclusive ) { attrMinInclusive = atMinInclusive;
	 _validAttributeArray[4] = true; }

	/**
	 * Gets the maxInclusive attribute.
	 * @return Returns a xsInteger of the maxInclusive attribute.
	 */
	xsInteger getMaxInclusive() const { return attrMaxInclusive; }
	/**
	 * Sets the maxInclusive attribute.
	 * @param atMaxInclusive The new value for the maxInclusive attribute.
	 */
	void setMaxInclusive( xsInteger atMaxInclusive ) { attrMaxInclusive = atMaxInclusive;
	 _validAttributeArray[5] = true; }

	/**
	 * Gets the digits attribute.
	 * @return Returns a xsShort of the digits attribute.
	 */
	xsShort getDigits() const { return attrDigits; }
	/**
	 * Sets the digits attribute.
	 * @param atDigits The new value for the digits attribute.
	 */
	void setDigits( xsShort atDigits ) { attrDigits = atDigits;
	 _validAttributeArray[6] = true; }

	/**
	 * Gets the magnitude attribute.
	 * @return Returns a xsShort of the magnitude attribute.
	 */
	xsShort getMagnitude() const { return attrMagnitude; }
	/**
	 * Sets the magnitude attribute.
	 * @param atMagnitude The new value for the magnitude attribute.
	 */
	void setMagnitude( xsShort atMagnitude ) { attrMagnitude = atMagnitude;
	 _validAttributeArray[7] = true; }

	/**
	 * Gets the _value array.
	 * @return Returns a domListOfTokens reference of the _value array.
	 */
	domListOfTokens &getValue() { return _value; }
	/**
	 * Gets the _value array.
	 * @return Returns a constant domListOfTokens reference of the _value array.
	 */
	const domListOfTokens &getValue() const { return _value; }
	/**
	 * Sets the _value array.
	 * @param val The new value for the _value array.
	 */
	void setValue( const domListOfTokens &val ) { _value = val; }

protected:
	/**
	 * Constructor
	 */
	domArray() : attrId(), attrName(), attrCount(), attrType(), attrMinInclusive(), attrMaxInclusive(), attrDigits(), attrMagnitude(), _value() {}
	/**
	 * Destructor
	 */
	virtual ~domArray() {}
	/**
	 * Copy Constructor
	 */
	domArray( const domArray &cpy ) : daeElement() { (void)cpy; }
	/**
	 * Overloaded assignment operator
	 */
	virtual domArray &operator=( const domArray &cpy ) { (void)cpy; return *this; }

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
