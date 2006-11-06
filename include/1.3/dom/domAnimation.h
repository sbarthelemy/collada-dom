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
#ifndef __domAnimation_h__
#define __domAnimation_h__

#include <dom/domTypes.h>
#include <dom/domElements.h>

#include <dom/domSource.h>
#include <dom/domSampler.h>
#include <dom/domChannel.h>

/**
 * The animation element categorizes the declaration of animation information.
 * The animation  contains elements that describe the animation's key-frame
 * data and sampler functions. Animation describes the transformation of an
 * object or value over time. A common use of  animation is to give the illusion
 * of motion. A common animation technique is called  key-frame animation.
 * A key-frame is a sampling of data at a known point in time. Using a  set
 * of key-frames and an interpolation algorithm, intermediate values are computed
 * for  times in between the key-frames, producing a smooth set of output
 * values over the interval  between the key-frames. A key-frame animation
 * engine performs these computations on the  key-frame data. An animation
 * element contains the elements that describe animation data. The actual
 * type and complexity of the data is left to the child elements to represent
 * in detail.
 */
class domAnimation : public daeElement
{
public:
	COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::ANIMATION; }
protected:  // Attributes
/**
 *  The id attribute is a text string containing the unique identifier of
 * the animation element. This value must be unique within the instance document.
 * Optional attribute. 
 */
	xsID attrId;
/**
 *  The name attribute is the text string name of this element.  Optional
 * attribute. 
 */
	xsNCName attrName;

protected:  // Elements
/**
 *  The animation element must contain one or more source elements.  @see
 * domSource
 */
	domSource_Array elemSource_array;
/**
 *  The animation element must contain one or more sampler elements.  @see
 * domSampler
 */
	domSampler_Array elemSampler_array;
/**
 *  The animation element must contain one or more channel elements.  @see
 * domChannel
 */
	domChannel_Array elemChannel_array;

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
	 * Gets the source element array.
	 * @return Returns a reference to the array of source elements.
	 */
	domSource_Array &getSource_array() { return elemSource_array; }
	/**
	 * Gets the source element array.
	 * @return Returns a constant reference to the array of source elements.
	 */
	const domSource_Array &getSource_array() const { return elemSource_array; }
	/**
	 * Gets the sampler element array.
	 * @return Returns a reference to the array of sampler elements.
	 */
	domSampler_Array &getSampler_array() { return elemSampler_array; }
	/**
	 * Gets the sampler element array.
	 * @return Returns a constant reference to the array of sampler elements.
	 */
	const domSampler_Array &getSampler_array() const { return elemSampler_array; }
	/**
	 * Gets the channel element array.
	 * @return Returns a reference to the array of channel elements.
	 */
	domChannel_Array &getChannel_array() { return elemChannel_array; }
	/**
	 * Gets the channel element array.
	 * @return Returns a constant reference to the array of channel elements.
	 */
	const domChannel_Array &getChannel_array() const { return elemChannel_array; }
protected:
	/**
	 * Constructor
	 */
	domAnimation() : attrId(), attrName(), elemSource_array(), elemSampler_array(), elemChannel_array() {}
	/**
	 * Destructor
	 */
	virtual ~domAnimation() {}
	/**
	 * Copy Constructor
	 */
	domAnimation( const domAnimation &cpy ) : daeElement() { (void)cpy; }
	/**
	 * Overloaded assignment operator
	 */
	virtual domAnimation &operator=( const domAnimation &cpy ) { (void)cpy; return *this; }

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
