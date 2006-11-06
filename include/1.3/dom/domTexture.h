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
#ifndef __domTexture_h__
#define __domTexture_h__

#include <dom/domTypes.h>
#include <dom/domElements.h>

#include <dom/domAsset.h>
#include <dom/domParam.h>
#include <dom/domProgram.h>

/**
 * Textures embody the visual detail of the surface of a geometric object.
 * The texture element  embodies the sampling aspects of texturing.
 */
class domTexture : public daeElement
{
public:
	COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::TEXTURE; }
public:
	class domTechnique;

	typedef daeSmartRef<domTechnique> domTechniqueRef;
	typedef daeTArray<domTechniqueRef> domTechnique_Array;

/**
 * The texture element may contain zero or more technique elements. The technique
 * elements embody its functionality such as image lookup or procedural generation.
 */
	class domTechnique : public daeElement
	{
	public:
		COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::TECHNIQUE; }
	public:
		class domInput;

		typedef daeSmartRef<domInput> domInputRef;
		typedef daeTArray<domInputRef> domInput_Array;

/**
 * The input element may occur zero or more times.
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
 *  The param element may occur zero or more times.  @see domParam
 */
		domParam_Array elemParam_array;
/**
 * The input element may occur zero or more times. @see domInput
 */
		domInput_Array elemInput_array;
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
		domTechnique() : attrProfile(), elemAsset(), elemParam_array(), elemInput_array(), elemProgram() {}
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
 * the texture  element. This value must be unique within the instance document.
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
 *  The asset element may occur zero or one time.  @see domAsset
 */
	domAssetRef elemAsset;
/**
 *  The param element may occur zero or more times. The param elements describe
 * the  texture's dataflow with the associated material.  @see domParam
 */
	domParam_Array elemParam_array;
/**
 * The texture element may contain zero or more technique elements. The technique
 * elements embody its functionality such as image lookup or procedural generation.
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
	domTexture() : attrId(), attrName(), elemAsset(), elemParam_array(), elemTechnique_array() {}
	/**
	 * Destructor
	 */
	virtual ~domTexture() {}
	/**
	 * Copy Constructor
	 */
	domTexture( const domTexture &cpy ) : daeElement() { (void)cpy; }
	/**
	 * Overloaded assignment operator
	 */
	virtual domTexture &operator=( const domTexture &cpy ) { (void)cpy; return *this; }

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
