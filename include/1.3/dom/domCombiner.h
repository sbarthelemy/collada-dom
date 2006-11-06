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
#ifndef __domCombiner_h__
#define __domCombiner_h__

#include <dom/domTypes.h>
#include <dom/domElements.h>

#include <dom/domInput.h>

/**
 * The combiner element declares the aggregation of input streams. The combiner
 * element  aggregates input data streams into arrays of data structures.
 * The resulting data structures  provide a logical organization of the input
 * streams for higher-level elements. A combiner element contains a sequence
 * of v elements, where 'v' stands for value. Each v  element describes the
 * values for an arbitrary number of data structures. Each v element  contains
 * indices that reference into the input elements. These indices are position
 * dependent  and reference the accessor elements according to the order of
 * the input elements. Here is an  example of this: The first index references
 * the first unique input element; the second index references the second
 * unique input element, and so on. This is a simple form of compression 
 * that reduces the number of indices required in each v element. The input
 * elements are  uniquely identified by their idx attribute values. A complete
 * sampling of an aggregate value  is completed by gathering one value from
 * each input using the associated index in the v element.
 */
class domCombiner : public daeElement
{
public:
	COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::COMBINER; }
public:
	class domV;

	typedef daeSmartRef<domV> domVRef;
	typedef daeTArray<domVRef> domV_Array;

/**
 * Variable length value element. The indices form the source's output aggregated
 * by the number of inputs. The v element must occur one or more times.
 */
	class domV : public daeElement
	{
	public:
		COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::V; }

	protected:  // Value
		/**
		 * The domListOfInts value of the text data of this element. 
		 */
		domListOfInts _value;

	public:	//Accessors and Mutators
		/**
		 * Gets the _value array.
		 * @return Returns a domListOfInts reference of the _value array.
		 */
		domListOfInts &getValue() { return _value; }
		/**
		 * Gets the _value array.
		 * @return Returns a constant domListOfInts reference of the _value array.
		 */
		const domListOfInts &getValue() const { return _value; }
		/**
		 * Sets the _value array.
		 * @param val The new value for the _value array.
		 */
		void setValue( const domListOfInts &val ) { _value = val; }

	protected:
		/**
		 * Constructor
		 */
		domV() : _value() {}
		/**
		 * Destructor
		 */
		virtual ~domV() {}
		/**
		 * Copy Constructor
		 */
		domV( const domV &cpy ) : daeElement() { (void)cpy; }
		/**
		 * Overloaded assignment operator
		 */
		virtual domV &operator=( const domV &cpy ) { (void)cpy; return *this; }

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


protected:  // Attribute
/**
 *  The count attribute indicates the number of value elements.  Required
 * attribute. 
 */
	xsNonNegativeInteger attrCount;

protected:  // Elements
/**
 *  The input element must occur two or more times. There must be at least
 * two things  to combine.  @see domInput
 */
	domInput_Array elemInput_array;
/**
 * Variable length value element. The indices form the source's output aggregated
 * by the number of inputs. The v element must occur one or more times. @see
 * domV
 */
	domV_Array elemV_array;

public:	//Accessors and Mutators
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
	 _validAttributeArray[0] = true; }

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
	/**
	 * Gets the v element array.
	 * @return Returns a reference to the array of v elements.
	 */
	domV_Array &getV_array() { return elemV_array; }
	/**
	 * Gets the v element array.
	 * @return Returns a constant reference to the array of v elements.
	 */
	const domV_Array &getV_array() const { return elemV_array; }
protected:
	/**
	 * Constructor
	 */
	domCombiner() : attrCount(), elemInput_array(), elemV_array() {}
	/**
	 * Destructor
	 */
	virtual ~domCombiner() {}
	/**
	 * Copy Constructor
	 */
	domCombiner( const domCombiner &cpy ) : daeElement() { (void)cpy; }
	/**
	 * Overloaded assignment operator
	 */
	virtual domCombiner &operator=( const domCombiner &cpy ) { (void)cpy; return *this; }

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
