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
#ifndef __domTristrips_h__
#define __domTristrips_h__

#include <dom/domTypes.h>
#include <dom/domElements.h>

#include <dom/domParam.h>
#include <dom/domInput.h>

/**
 * The tristrips element declares the binding of geometric primitives and
 * vertex attributes for a mesh element. The tristrips element provides the
 * information needed to bind vertex  attributes together and then organize
 * those vertices into connected triangles. The vertex  array information
 * is supplied in distinct attribute arrays of the mesh element that are then
 * indexed by the tristrips element. Each triangle described by the mesh has
 * three vertices. The  first triangle is formed from first, second, and third
 * vertices. Each subsequent triangle is  formed from the current vertex,
 * reusing the previous two vertices. A tristrips element  contains a sequence
 * of p elements, where 'p' stands for primitive. Each p element describes
 * the vertex attributes for an arbitrary number of connected triangles.
 */
class domTristrips : public daeElement
{
public:
	COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::TRISTRIPS; }
public:
	class domP;

	typedef daeSmartRef<domP> domPRef;
	typedef daeTArray<domPRef> domP_Array;

/**
 * Primitive element. @brief The 1st three indices form a triangle.  @brief
 * Each subsequent index forms an additional triangle reusing the previous
 * two indices. Each p element contains indices that reference into the source
 * elements. These  indices are position dependent and reference the contents
 * of the source elements according to the order of the input elements. Here
 * is an example of this: The  first index references the first unique input
 * element; the second index references  the second unique input element,
 * and so on. This is a simple form of compression  that reduces the number
 * of indices required in each p element. The input elements  are uniquely
 * identified by their idx attribute values. A complete sampling of a  single
 * vertex is completed by gathering one value from each input using the  associated
 * index in the p element.
 */
	class domP : public daeElement
	{
	public:
		COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::P; }

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
		domP() : _value() {}
		/**
		 * Destructor
		 */
		virtual ~domP() {}
		/**
		 * Copy Constructor
		 */
		domP( const domP &cpy ) : daeElement() { (void)cpy; }
		/**
		 * Overloaded assignment operator
		 */
		virtual domP &operator=( const domP &cpy ) { (void)cpy; return *this; }

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
 *  The count attribute indicates the number of tristrip primitives.  Required
 * attribute. 
 */
	xsNonNegativeInteger attrCount;
/**
 *  The material attribute refers to the name of a material element, using
 * a URL  expression, bound to the tristrips. If the material attribute is
 * not specified  then the lighting and shading results are application defined.
 * Optional attribute. 
 */
	xsAnyURI attrMaterial;

protected:  // Elements
/**
 *  The param element may occur zero or more times.  @see domParam
 */
	domParam_Array elemParam_array;
/**
 *  The input element may occur zero or more times.  @see domInput
 */
	domInput_Array elemInput_array;
/**
 * Primitive element. @brief The 1st three indices form a triangle.  @brief
 * Each subsequent index forms an additional triangle reusing the previous
 * two indices. Each p element contains indices that reference into the source
 * elements. These  indices are position dependent and reference the contents
 * of the source elements according to the order of the input elements. Here
 * is an example of this: The  first index references the first unique input
 * element; the second index references  the second unique input element,
 * and so on. This is a simple form of compression  that reduces the number
 * of indices required in each p element. The input elements  are uniquely
 * identified by their idx attribute values. A complete sampling of a  single
 * vertex is completed by gathering one value from each input using the  associated
 * index in the p element. @see domP
 */
	domP_Array elemP_array;

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
	 * Gets the material attribute.
	 * @return Returns a xsAnyURI reference of the material attribute.
	 */
	xsAnyURI &getMaterial() { return attrMaterial; }
	/**
	 * Gets the material attribute.
	 * @return Returns a constant xsAnyURI reference of the material attribute.
	 */
	const xsAnyURI &getMaterial() const { return attrMaterial; }
	/**
	 * Sets the material attribute.
	 * @param atMaterial The new value for the material attribute.
	 */
	void setMaterial( const xsAnyURI &atMaterial ) { attrMaterial = atMaterial;
	 _validAttributeArray[1] = true; }

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
	 * Gets the p element array.
	 * @return Returns a reference to the array of p elements.
	 */
	domP_Array &getP_array() { return elemP_array; }
	/**
	 * Gets the p element array.
	 * @return Returns a constant reference to the array of p elements.
	 */
	const domP_Array &getP_array() const { return elemP_array; }
protected:
	/**
	 * Constructor
	 */
	domTristrips() : attrCount(), attrMaterial(), elemParam_array(), elemInput_array(), elemP_array() {}
	/**
	 * Destructor
	 */
	virtual ~domTristrips() {}
	/**
	 * Copy Constructor
	 */
	domTristrips( const domTristrips &cpy ) : daeElement() { (void)cpy; }
	/**
	 * Overloaded assignment operator
	 */
	virtual domTristrips &operator=( const domTristrips &cpy ) { (void)cpy; return *this; }

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
