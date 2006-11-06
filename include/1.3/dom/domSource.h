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
#ifndef __domSource_h__
#define __domSource_h__

#include <dom/domTypes.h>
#include <dom/domElements.h>

#include <dom/domArray.h>
#include <dom/domBool_array.h>
#include <dom/domFloat_array.h>
#include <dom/domInt_array.h>
#include <dom/domName_array.h>
#include <dom/domAsset.h>
#include <dom/domParam.h>
#include <dom/domAccessor.h>
#include <dom/domCombiner.h>
#include <dom/domJoints.h>
#include <dom/domProgram.h>

/**
 * The source element declares a data repository that provides values according
 * to the  semantics of an input element that refers to it. A data source
 * is a well-known source of information that can be accessed through an 
 * established communication channel. The data source provides access methods
 * to the information.  These access methods implement various techniques
 * according to the representation of the  information. The information may
 * be stored locally as an array of data or a program that  generates the
 * data. One of the array elements (array, bool_array, float_array, int_array,
 * or Name_array) may  occur zero or more times.
 */
class domSource : public daeElement
{
public:
	COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::SOURCE; }
public:
	class domTechnique;

	typedef daeSmartRef<domTechnique> domTechniqueRef;
	typedef daeTArray<domTechniqueRef> domTechnique_Array;

/**
 * The technique element must occur one or more times. Within the technique
 * element,  the common profile's accessor elements describe the output of
 * the source element.  The output is assembled from the accessor elements
 * in the order they are specified.
 */
	class domTechnique : public daeElement
	{
	public:
		COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::TECHNIQUE; }
	protected:  // Attribute
/**
 *  The profile attribute indicates the type of profile. This is a vendor
 * defined character string that indicates the platform or capability target
 * for the technique.  Required attribute. 
 */
		xsString attrProfile;

	protected:  // Elements
/**
 *  The asset element may occur zero or one time.  @see domAsset
 */
		domAssetRef elemAsset;
/**
 *  The param element may occur zero or more times.  @see domParam
 */
		domParam_Array elemParam_array;
/**
 *  The accessor element may occur zero or more times.  @see domAccessor
 */
		domAccessor_Array elemAccessor_array;
/**
 *  The combiner element may occur zero or one time.  @see domCombiner
 */
		domCombinerRef elemCombiner;
/**
 *  The joints element may occur zero or one time.  @see domJoints
 */
		domJointsRef elemJoints;
/**
 *  The program element may occur zero or one time.  @see domProgram
 */
		domProgramRef elemProgram;

	public:	//Accessors and Mutators
		/**
		 * Gets the profile attribute.
		 * @return Returns a xsString of the profile attribute.
		 */
		xsString getProfile() const { return attrProfile; }
		/**
		 * Sets the profile attribute.
		 * @param atProfile The new value for the profile attribute.
		 */
		void setProfile( xsString atProfile ) { *(daeStringRef*)&attrProfile = atProfile;	
	 _validAttributeArray[0] = true; }

		/**
		 * Gets the asset element.
		 * @return a daeSmartRef to the asset element.
		 */
		const domAssetRef getAsset() const { return elemAsset; }
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
		 * Gets the accessor element array.
		 * @return Returns a reference to the array of accessor elements.
		 */
		domAccessor_Array &getAccessor_array() { return elemAccessor_array; }
		/**
		 * Gets the accessor element array.
		 * @return Returns a constant reference to the array of accessor elements.
		 */
		const domAccessor_Array &getAccessor_array() const { return elemAccessor_array; }
		/**
		 * Gets the combiner element.
		 * @return a daeSmartRef to the combiner element.
		 */
		const domCombinerRef getCombiner() const { return elemCombiner; }
		/**
		 * Gets the joints element.
		 * @return a daeSmartRef to the joints element.
		 */
		const domJointsRef getJoints() const { return elemJoints; }
		/**
		 * Gets the program element.
		 * @return a daeSmartRef to the program element.
		 */
		const domProgramRef getProgram() const { return elemProgram; }
	protected:
		/**
		 * Constructor
		 */
		domTechnique() : attrProfile(), elemAsset(), elemParam_array(), elemAccessor_array(), elemCombiner(), elemJoints(), elemProgram() {}
		/**
		 * Destructor
		 */
		virtual ~domTechnique() {}
		/**
		 * Copy Constructor
		 */
		domTechnique( const domTechnique &cpy ) : daeElement() { (void)cpy; }
		/**
		 * Overloaded assignment operator
		 */
		virtual domTechnique &operator=( const domTechnique &cpy ) { (void)cpy; return *this; }

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
 * the source  element. This value must be unique within the instance document.
 * Optional attribute. 
 */
	xsID attrId;
/**
 *  The name attribute is the text string name of this element.  Optional
 * attribute. 
 */
	xsNCName attrName;

protected:  // Elements
	domArray_Array elemArray_array;
	domBool_array_Array elemBool_array_array;
	domFloat_array_Array elemFloat_array_array;
	domInt_array_Array elemInt_array_array;
	domName_array_Array elemName_array_array;
/**
 * The technique element must occur one or more times. Within the technique
 * element,  the common profile's accessor elements describe the output of
 * the source element.  The output is assembled from the accessor elements
 * in the order they are specified. @see domTechnique
 */
	domTechnique_Array elemTechnique_array;
	/**
	 * Used to preserve order in elements that do not specify strict sequencing of sub-elements.
	 */
	daeElementRefArray _contents;
	/**
	 * Used to preserve order in elements that have a complex content model.
	 */
	daeUIntArray       _contentsOrder;


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
	 * Gets the array element array.
	 * @return Returns a reference to the array of array elements.
	 */
	domArray_Array &getArray_array() { return elemArray_array; }
	/**
	 * Gets the array element array.
	 * @return Returns a constant reference to the array of array elements.
	 */
	const domArray_Array &getArray_array() const { return elemArray_array; }
	/**
	 * Gets the bool_array element array.
	 * @return Returns a reference to the array of bool_array elements.
	 */
	domBool_array_Array &getBool_array_array() { return elemBool_array_array; }
	/**
	 * Gets the bool_array element array.
	 * @return Returns a constant reference to the array of bool_array elements.
	 */
	const domBool_array_Array &getBool_array_array() const { return elemBool_array_array; }
	/**
	 * Gets the float_array element array.
	 * @return Returns a reference to the array of float_array elements.
	 */
	domFloat_array_Array &getFloat_array_array() { return elemFloat_array_array; }
	/**
	 * Gets the float_array element array.
	 * @return Returns a constant reference to the array of float_array elements.
	 */
	const domFloat_array_Array &getFloat_array_array() const { return elemFloat_array_array; }
	/**
	 * Gets the int_array element array.
	 * @return Returns a reference to the array of int_array elements.
	 */
	domInt_array_Array &getInt_array_array() { return elemInt_array_array; }
	/**
	 * Gets the int_array element array.
	 * @return Returns a constant reference to the array of int_array elements.
	 */
	const domInt_array_Array &getInt_array_array() const { return elemInt_array_array; }
	/**
	 * Gets the Name_array element array.
	 * @return Returns a reference to the array of Name_array elements.
	 */
	domName_array_Array &getName_array_array() { return elemName_array_array; }
	/**
	 * Gets the Name_array element array.
	 * @return Returns a constant reference to the array of Name_array elements.
	 */
	const domName_array_Array &getName_array_array() const { return elemName_array_array; }
	/**
	 * Gets the technique element array.
	 * @return Returns a reference to the array of technique elements.
	 */
	domTechnique_Array &getTechnique_array() { return elemTechnique_array; }
	/**
	 * Gets the technique element array.
	 * @return Returns a constant reference to the array of technique elements.
	 */
	const domTechnique_Array &getTechnique_array() const { return elemTechnique_array; }
	/**
	 * Gets the _contents array.
	 * @return Returns a reference to the _contents element array.
	 */
	daeElementRefArray &getContents() { return _contents; }
	/**
	 * Gets the _contents array.
	 * @return Returns a constant reference to the _contents element array.
	 */
	const daeElementRefArray &getContents() const { return _contents; }

protected:
	/**
	 * Constructor
	 */
	domSource() : attrId(), attrName(), elemArray_array(), elemBool_array_array(), elemFloat_array_array(), elemInt_array_array(), elemName_array_array(), elemTechnique_array() {}
	/**
	 * Destructor
	 */
	virtual ~domSource() {}
	/**
	 * Copy Constructor
	 */
	domSource( const domSource &cpy ) : daeElement() { (void)cpy; }
	/**
	 * Overloaded assignment operator
	 */
	virtual domSource &operator=( const domSource &cpy ) { (void)cpy; return *this; }

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
