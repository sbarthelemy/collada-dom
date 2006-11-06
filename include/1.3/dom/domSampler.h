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
#ifndef __domSampler_h__
#define __domSampler_h__

#include <dom/domTypes.h>
#include <dom/domElements.h>


/**
 * The sampler element declares an N-dimensional function. Animation function
 * curves are  represented by 1-D sampler elements in COLLADA. The sampler
 * defines sampling points and how  to interpolate between them. When used
 * to compute values for an animation channel, the  sampling points are the
 * animation key-frames. Sampling points (key-frames) are input data  sources
 * to the sampler. Animation channels direct the output data values of the
 * sampler to  their targets. COLLADA recognizes the following interpolation
 * types: LINEAR, BEZIER,  CARDINAL, HERMITE, BSPLINE.
 */
class domSampler : public daeElement
{
public:
	COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::SAMPLER; }
public:
	class domInput;

	typedef daeSmartRef<domInput> domInputRef;
	typedef daeTArray<domInputRef> domInput_Array;

/**
 * The input element must appear one or more times. Sampling points are described
 * by the input elements that refer to source elements. The semantic attribute
 * of  the input element can be one of: INPUT, INTERPOLATION, IN_TANGENT,
 * OUT_TANGENT,  and OUTPUT.
 */
	class domInput : public daeElement
	{
	public:
		COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::INPUT; }
	protected:  // Attributes
/**
 *  The semantic attribute is the user-defined meaning of the input connection.
 * Required attribute. 
 */
		xsNMTOKEN attrSemantic;
/**
 *  The source attribute indicates the location of the data source.  Required
 * attribute. 
 */
		xsAnyURI attrSource;


	public:	//Accessors and Mutators
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
	 _validAttributeArray[0] = true; }

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
	 _validAttributeArray[1] = true; }

	protected:
		/**
		 * Constructor
		 */
		domInput() : attrSemantic(), attrSource() {}
		/**
		 * Destructor
		 */
		virtual ~domInput() {}
		/**
		 * Copy Constructor
		 */
		domInput( const domInput &cpy ) : daeElement() { (void)cpy; }
		/**
		 * Overloaded assignment operator
		 */
		virtual domInput &operator=( const domInput &cpy ) { (void)cpy; return *this; }

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


protected:  // Attributes
/**
 *  The id attribute is a text string containing the unique identifier of
 * the sampler  element. This value must be unique within the instance document.
 * Optional attribute. 
 */
	xsID attrId;
/**
 *  The name attribute is the text string name of this element.  Optional
 * attribute. 
 */
	xsNCName attrName;

protected:  // Element
/**
 * The input element must appear one or more times. Sampling points are described
 * by the input elements that refer to source elements. The semantic attribute
 * of  the input element can be one of: INPUT, INTERPOLATION, IN_TANGENT,
 * OUT_TANGENT,  and OUTPUT. @see domInput
 */
	domInput_Array elemInput_array;

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
	 * Gets the input element array.
	 * @return Returns a reference to the array of input elements.
	 */
	domInput_Array &getInput_array() { return elemInput_array; }
	/**
	 * Gets the input element array.
	 * @return Returns a constant reference to the array of input elements.
	 */
	const domInput_Array &getInput_array() const { return elemInput_array; }
protected:
	/**
	 * Constructor
	 */
	domSampler() : attrId(), attrName(), elemInput_array() {}
	/**
	 * Destructor
	 */
	virtual ~domSampler() {}
	/**
	 * Copy Constructor
	 */
	domSampler( const domSampler &cpy ) : daeElement() { (void)cpy; }
	/**
	 * Overloaded assignment operator
	 */
	virtual domSampler &operator=( const domSampler &cpy ) { (void)cpy; return *this; }

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
