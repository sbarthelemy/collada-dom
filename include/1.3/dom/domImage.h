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
#ifndef __domImage_h__
#define __domImage_h__

#include <dom/domTypes.h>
#include <dom/domElements.h>


/**
 * Images embody the graphical representation of a scene or object. The image
 * element declares  the storage for the graphical representation of an object.
 * The image element best describes  raster image data, but can conceivably
 * handle other forms of imagery. The image element may  contain a sequence
 * of hexadecimal, binary octets representing the embedded image data. These
 * values are interpreted at pixel values according to the format attribute.
 */
class domImage : public daeElement
{
public:
	COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::IMAGE; }
protected:  // Attributes
/**
 *  The id attribute is a text string containing the unique identifier of
 * the  image element. This value must be unique within the instance document.
 * Optional attribute. 
 */
	xsID attrId;
/**
 *  The name attribute is the text string name of this element.  Optional
 * attribute. 
 */
	xsNCName attrName;
/**
 *  The source attribute is a valid URL of the image source data. If this
 * attribute is present, then it refers to an image asset that may contain
 * information about the dimensions and format of the image.  Optional attribute.
 */
	xsAnyURI attrSource;
/**
 *  The format attribute is a text string value that indicates the image format.
 * Optional attribute. 
 */
	xsString attrFormat;
/**
 *  The height attribute is an integer value that indicates the height of
 * the  image in pixel units.  Optional attribute. 
 */
	xsNonNegativeInteger attrHeight;
/**
 *  The width attribute is an integer value that indicates the width of the
 * image in pixel units.  Optional attribute. 
 */
	xsNonNegativeInteger attrWidth;
/**
 *  The depth attribute is an integer value that indicates the depth of the
 * image in pixel units. A 2-D image has a depth of 1, which is also the 
 * default value.  Optional attribute. 
 */
	xsNonNegativeInteger attrDepth;

protected:  // Value
	/**
	 * The domListOfHexBinary value of the text data of this element. 
	 */
	domListOfHexBinary _value;

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
	 _validAttributeArray[2] = true; }

	/**
	 * Gets the format attribute.
	 * @return Returns a xsString of the format attribute.
	 */
	xsString getFormat() const { return attrFormat; }
	/**
	 * Sets the format attribute.
	 * @param atFormat The new value for the format attribute.
	 */
	void setFormat( xsString atFormat ) { *(daeStringRef*)&attrFormat = atFormat;
	 _validAttributeArray[3] = true; }

	/**
	 * Gets the height attribute.
	 * @return Returns a xsNonNegativeInteger of the height attribute.
	 */
	xsNonNegativeInteger getHeight() const { return attrHeight; }
	/**
	 * Sets the height attribute.
	 * @param atHeight The new value for the height attribute.
	 */
	void setHeight( xsNonNegativeInteger atHeight ) { attrHeight = atHeight;
	 _validAttributeArray[4] = true; }

	/**
	 * Gets the width attribute.
	 * @return Returns a xsNonNegativeInteger of the width attribute.
	 */
	xsNonNegativeInteger getWidth() const { return attrWidth; }
	/**
	 * Sets the width attribute.
	 * @param atWidth The new value for the width attribute.
	 */
	void setWidth( xsNonNegativeInteger atWidth ) { attrWidth = atWidth;
	 _validAttributeArray[5] = true; }

	/**
	 * Gets the depth attribute.
	 * @return Returns a xsNonNegativeInteger of the depth attribute.
	 */
	xsNonNegativeInteger getDepth() const { return attrDepth; }
	/**
	 * Sets the depth attribute.
	 * @param atDepth The new value for the depth attribute.
	 */
	void setDepth( xsNonNegativeInteger atDepth ) { attrDepth = atDepth;
	 _validAttributeArray[6] = true; }

	/**
	 * Gets the _value array.
	 * @return Returns a domListOfHexBinary reference of the _value array.
	 */
	domListOfHexBinary &getValue() { return _value; }
	/**
	 * Gets the _value array.
	 * @return Returns a constant domListOfHexBinary reference of the _value array.
	 */
	const domListOfHexBinary &getValue() const { return _value; }
	/**
	 * Sets the _value array.
	 * @param val The new value for the _value array.
	 */
	void setValue( const domListOfHexBinary &val ) { _value = val; }

protected:
	/**
	 * Constructor
	 */
	domImage() : attrId(), attrName(), attrSource(), attrFormat(), attrHeight(), attrWidth(), attrDepth(), _value() {}
	/**
	 * Destructor
	 */
	virtual ~domImage() {}
	/**
	 * Copy Constructor
	 */
	domImage( const domImage &cpy ) : daeElement() { (void)cpy; }
	/**
	 * Overloaded assignment operator
	 */
	virtual domImage &operator=( const domImage &cpy ) { (void)cpy; return *this; }

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
