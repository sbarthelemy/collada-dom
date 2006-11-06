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
#ifndef __domPass_h__
#define __domPass_h__

#include <dom/domTypes.h>
#include <dom/domElements.h>

#include <dom/domParam.h>
#include <dom/domProgram.h>

/**
 * A pass describes an algorithm that is executed during a single iteration
 * of the rendering  engine. The pass element declares the information required
 * to execute a rendering pass.
 */
class domPass : public daeElement
{
public:
	COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::PASS; }
public:
	class domInput;

	typedef daeSmartRef<domInput> domInputRef;
	typedef daeTArray<domInputRef> domInput_Array;

/**
 * The input element may occur zero or more times. The input element must
 * not have  the idx attribute when it is the child of a pass element.
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



protected:  // Elements
/**
 *  The param element may occur zero or more times. A param element specified
 * as a  child of the pass element is in the scope of only that pass.  @see
 * domParam
 */
	domParam_Array elemParam_array;
/**
 * The input element may occur zero or more times. The input element must
 * not have  the idx attribute when it is the child of a pass element. @see
 * domInput
 */
	domInput_Array elemInput_array;
/**
 *  The program element may occur zero or one time.  @see domProgram
 */
	domProgramRef elemProgram;

public:	//Accessors and Mutators
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
	 * Gets the program element.
	 * @return a daeSmartRef to the program element.
	 */
	const domProgramRef getProgram() const { return elemProgram; }
protected:
	/**
	 * Constructor
	 */
	domPass() : elemParam_array(), elemInput_array(), elemProgram() {}
	/**
	 * Destructor
	 */
	virtual ~domPass() {}
	/**
	 * Copy Constructor
	 */
	domPass( const domPass &cpy ) : daeElement() { (void)cpy; }
	/**
	 * Overloaded assignment operator
	 */
	virtual domPass &operator=( const domPass &cpy ) { (void)cpy; return *this; }

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
