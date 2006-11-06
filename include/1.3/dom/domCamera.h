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
#ifndef __domCamera_h__
#define __domCamera_h__

#include <dom/domTypes.h>
#include <dom/domElements.h>

#include <dom/domAsset.h>
#include <dom/domProgram.h>

class domCamera : public daeElement
{
public:
	COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::CAMERA; }
public:
	class domTechnique;

	typedef daeSmartRef<domTechnique> domTechniqueRef;
	typedef daeTArray<domTechniqueRef> domTechnique_Array;

/**
 * The camera element contains one or more technique elements that describe
 * its  operating parameters for optics and imaging. The camera technique
 * element must  contain an optics element and zero or more imager elements.
 * The optics and  imager elements each contain a program element. For simple
 * cameras, a generic  technique need only contain an optics element that
 * describes the field of view  and viewing frustum using canonical parameters.
 */
	class domTechnique : public daeElement
	{
	public:
		COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::TECHNIQUE; }
	public:
		class domOptics;

		typedef daeSmartRef<domOptics> domOpticsRef;
		typedef daeTArray<domOpticsRef> domOptics_Array;

/**
 */
		class domOptics : public daeElement
		{
		public:
			COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::OPTICS; }

		protected:  // Element
			domProgramRef elemProgram;

		public:	//Accessors and Mutators
			/**
			 * Gets the program element.
			 * @return a daeSmartRef to the program element.
			 */
			const domProgramRef getProgram() const { return elemProgram; }
		protected:
			/**
			 * Constructor
			 */
			domOptics() : elemProgram() {}
			/**
			 * Destructor
			 */
			virtual ~domOptics() {}
			/**
			 * Copy Constructor
			 */
			domOptics( const domOptics &cpy ) : daeElement() { (void)cpy; }
			/**
			 * Overloaded assignment operator
			 */
			virtual domOptics &operator=( const domOptics &cpy ) { (void)cpy; return *this; }

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

		class domImager;

		typedef daeSmartRef<domImager> domImagerRef;
		typedef daeTArray<domImagerRef> domImager_Array;

/**
 */
		class domImager : public daeElement
		{
		public:
			COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::IMAGER; }

		protected:  // Element
			domProgramRef elemProgram;

		public:	//Accessors and Mutators
			/**
			 * Gets the program element.
			 * @return a daeSmartRef to the program element.
			 */
			const domProgramRef getProgram() const { return elemProgram; }
		protected:
			/**
			 * Constructor
			 */
			domImager() : elemProgram() {}
			/**
			 * Destructor
			 */
			virtual ~domImager() {}
			/**
			 * Copy Constructor
			 */
			domImager( const domImager &cpy ) : daeElement() { (void)cpy; }
			/**
			 * Overloaded assignment operator
			 */
			virtual domImager &operator=( const domImager &cpy ) { (void)cpy; return *this; }

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
 *  The profile attribute indicates the type of profile. This is a vendor
 * defined character string that indicates the platform or capability  target
 * for the technique.  Required attribute. 
 */
		xsString attrProfile;

	protected:  // Elements
/**
 *  The asset element may occur zero or one time.  @see domAsset
 */
		domAssetRef elemAsset;
/**
 *  @see domOptics
 */
		domOpticsRef elemOptics;
/**
 *  @see domImager
 */
		domImagerRef elemImager;

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
		 * Gets the optics element.
		 * @return a daeSmartRef to the optics element.
		 */
		const domOpticsRef getOptics() const { return elemOptics; }
		/**
		 * Gets the imager element.
		 * @return a daeSmartRef to the imager element.
		 */
		const domImagerRef getImager() const { return elemImager; }
	protected:
		/**
		 * Constructor
		 */
		domTechnique() : attrProfile(), elemAsset(), elemOptics(), elemImager() {}
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
 * the camera  element. This value must be unique within the instance document.
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
 * The camera element contains one or more technique elements that describe
 * its  operating parameters for optics and imaging. The camera technique
 * element must  contain an optics element and zero or more imager elements.
 * The optics and  imager elements each contain a program element. For simple
 * cameras, a generic  technique need only contain an optics element that
 * describes the field of view  and viewing frustum using canonical parameters.
 * @see domTechnique
 */
	domTechnique_Array elemTechnique_array;

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
	 * Gets the technique element array.
	 * @return Returns a reference to the array of technique elements.
	 */
	domTechnique_Array &getTechnique_array() { return elemTechnique_array; }
	/**
	 * Gets the technique element array.
	 * @return Returns a constant reference to the array of technique elements.
	 */
	const domTechnique_Array &getTechnique_array() const { return elemTechnique_array; }
protected:
	/**
	 * Constructor
	 */
	domCamera() : attrId(), attrName(), elemTechnique_array() {}
	/**
	 * Destructor
	 */
	virtual ~domCamera() {}
	/**
	 * Copy Constructor
	 */
	domCamera( const domCamera &cpy ) : daeElement() { (void)cpy; }
	/**
	 * Overloaded assignment operator
	 */
	virtual domCamera &operator=( const domCamera &cpy ) { (void)cpy; return *this; }

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
