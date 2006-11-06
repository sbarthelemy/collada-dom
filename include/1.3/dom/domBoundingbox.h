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
#ifndef __domBoundingbox_h__
#define __domBoundingbox_h__

#include <dom/domTypes.h>
#include <dom/domElements.h>


/**
 * -DEPRECATED- The boundingbox element declares an axially aligned bounding
 * box that  encompasses the geometric extent of a node in the scene graph.
 * If the boundingbox is  transformed by rotate elements then the resulting
 * bounding box is an axial aligned box that  encompasses the original bounding
 * box.
 */
class domBoundingbox : public daeElement
{
public:
	COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::BOUNDINGBOX; }
public:
	class domMin;

	typedef daeSmartRef<domMin> domMinRef;
	typedef daeTArray<domMinRef> domMin_Array;

/**
 * The min element contains three floating-point values for the minimum corner
 * of  the box.
 */
	class domMin : public daeElement
	{
	public:
		COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::MIN; }
	protected:  // Attribute
/**
 *  The sid attribute is a text string containing the sub-identifier  of the
 * min element. This value must be unique within the scope  of the parent
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
		domMin() : attrSid(), _value() {}
		/**
		 * Destructor
		 */
		virtual ~domMin() {}
		/**
		 * Copy Constructor
		 */
		domMin( const domMin &cpy ) : daeElement() { (void)cpy; }
		/**
		 * Overloaded assignment operator
		 */
		virtual domMin &operator=( const domMin &cpy ) { (void)cpy; return *this; }

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

	class domMax;

	typedef daeSmartRef<domMax> domMaxRef;
	typedef daeTArray<domMaxRef> domMax_Array;

/**
 * The max element contains three floating-point values for the maximum corner
 * of  the box.
 */
	class domMax : public daeElement
	{
	public:
		COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::MAX; }
	protected:  // Attribute
/**
 *  The sid attribute is a text string containing the sub-identifier  of the
 * max element. This value must be unique within the scope  of the parent
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
		domMax() : attrSid(), _value() {}
		/**
		 * Destructor
		 */
		virtual ~domMax() {}
		/**
		 * Copy Constructor
		 */
		domMax( const domMax &cpy ) : daeElement() { (void)cpy; }
		/**
		 * Overloaded assignment operator
		 */
		virtual domMax &operator=( const domMax &cpy ) { (void)cpy; return *this; }

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
 *  The sid attribute is a text string containing the sub-identifier of the
 * boundingbox  element. This value must be unique within the scope of the
 * parent element.  Optional attribute. 
 */
	xsNCName attrSid;

protected:  // Elements
/**
 * The min element contains three floating-point values for the minimum corner
 * of  the box. @see domMin
 */
	domMinRef elemMin;
/**
 * The max element contains three floating-point values for the maximum corner
 * of  the box. @see domMax
 */
	domMaxRef elemMax;

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
	 * Gets the min element.
	 * @return a daeSmartRef to the min element.
	 */
	const domMinRef getMin() const { return elemMin; }
	/**
	 * Gets the max element.
	 * @return a daeSmartRef to the max element.
	 */
	const domMaxRef getMax() const { return elemMax; }
protected:
	/**
	 * Constructor
	 */
	domBoundingbox() : attrSid(), elemMin(), elemMax() {}
	/**
	 * Destructor
	 */
	virtual ~domBoundingbox() {}
	/**
	 * Copy Constructor
	 */
	domBoundingbox( const domBoundingbox &cpy ) : daeElement() { (void)cpy; }
	/**
	 * Overloaded assignment operator
	 */
	virtual domBoundingbox &operator=( const domBoundingbox &cpy ) { (void)cpy; return *this; }

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
