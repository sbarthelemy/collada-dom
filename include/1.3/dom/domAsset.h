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
#ifndef __domAsset_h__
#define __domAsset_h__

#include <dom/domTypes.h>
#include <dom/domElements.h>


/**
 * The asset element defines asset management information regarding its parent
 * element. Computers store vast amounts of information. An asset is a set
 * of information that is  organized into a distinct collection and managed
 * as a unit. A wide range of attributes  describes assets so that the information
 * can be maintained and understood by software  tools and humans.
 */
class domAsset : public daeElement
{
public:
	COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::ASSET; }
public:
	class domAuthor;

	typedef daeSmartRef<domAuthor> domAuthorRef;
	typedef daeTArray<domAuthorRef> domAuthor_Array;

/**
 * The author element contains the name of an author of the parent element.
 * The  author element may appear zero or more times.
 */
	class domAuthor : public daeElement
	{
	public:
		COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::AUTHOR; }

	protected:  // Value
		/**
		 * The xsString value of the text data of this element. 
		 */
		xsString _value;

	public:	//Accessors and Mutators
		/**
		 * Gets the value of this element.
		 * @return Returns a xsString of the value.
		 */
		xsString getValue() const { return _value; }
		/**
		 * Sets the _value of this element.
		 * @param val The new value for this element.
		 */
		void setValue( xsString val ) { *(daeStringRef*)&_value = val; }

	protected:
		/**
		 * Constructor
		 */
		domAuthor() : _value() {}
		/**
		 * Destructor
		 */
		virtual ~domAuthor() {}
		/**
		 * Copy Constructor
		 */
		domAuthor( const domAuthor &cpy ) : daeElement() { (void)cpy; }
		/**
		 * Overloaded assignment operator
		 */
		virtual domAuthor &operator=( const domAuthor &cpy ) { (void)cpy; return *this; }

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

	class domAuthoring_tool;

	typedef daeSmartRef<domAuthoring_tool> domAuthoring_toolRef;
	typedef daeTArray<domAuthoring_toolRef> domAuthoring_tool_Array;

/**
 * The authoring_tool element contains the name of an application or tools
 * used to  create the parent element. The authoring_tool element may appear
 * zero or one time.
 */
	class domAuthoring_tool : public daeElement
	{
	public:
		COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::AUTHORING_TOOL; }

	protected:  // Value
		/**
		 * The xsString value of the text data of this element. 
		 */
		xsString _value;

	public:	//Accessors and Mutators
		/**
		 * Gets the value of this element.
		 * @return Returns a xsString of the value.
		 */
		xsString getValue() const { return _value; }
		/**
		 * Sets the _value of this element.
		 * @param val The new value for this element.
		 */
		void setValue( xsString val ) { *(daeStringRef*)&_value = val; }

	protected:
		/**
		 * Constructor
		 */
		domAuthoring_tool() : _value() {}
		/**
		 * Destructor
		 */
		virtual ~domAuthoring_tool() {}
		/**
		 * Copy Constructor
		 */
		domAuthoring_tool( const domAuthoring_tool &cpy ) : daeElement() { (void)cpy; }
		/**
		 * Overloaded assignment operator
		 */
		virtual domAuthoring_tool &operator=( const domAuthoring_tool &cpy ) { (void)cpy; return *this; }

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

	class domCreated;

	typedef daeSmartRef<domCreated> domCreatedRef;
	typedef daeTArray<domCreatedRef> domCreated_Array;

/**
 * The created element contains the date and time that the parent element
 * was  created and represented in an ISO 8601 format. The created element
 * may appear  zero or one time.
 */
	class domCreated : public daeElement
	{
	public:
		COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::CREATED; }

	protected:  // Value
		/**
		 * The xsDateTime value of the text data of this element. 
		 */
		xsDateTime _value;

	public:	//Accessors and Mutators
		/**
		 * Gets the value of this element.
		 * @return Returns a xsDateTime of the value.
		 */
		xsDateTime getValue() const { return _value; }
		/**
		 * Sets the _value of this element.
		 * @param val The new value for this element.
		 */
		void setValue( xsDateTime val ) { *(daeStringRef*)&_value = val; }

	protected:
		/**
		 * Constructor
		 */
		domCreated() : _value() {}
		/**
		 * Destructor
		 */
		virtual ~domCreated() {}
		/**
		 * Copy Constructor
		 */
		domCreated( const domCreated &cpy ) : daeElement() { (void)cpy; }
		/**
		 * Overloaded assignment operator
		 */
		virtual domCreated &operator=( const domCreated &cpy ) { (void)cpy; return *this; }

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

	class domModified;

	typedef daeSmartRef<domModified> domModifiedRef;
	typedef daeTArray<domModifiedRef> domModified_Array;

/**
 * The modified element contains the date and time that the parent element
 * was last modified and represented in an ISO 8601 format. The modified element
 * may appear  zero or one time.
 */
	class domModified : public daeElement
	{
	public:
		COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::MODIFIED; }

	protected:  // Value
		/**
		 * The xsDateTime value of the text data of this element. 
		 */
		xsDateTime _value;

	public:	//Accessors and Mutators
		/**
		 * Gets the value of this element.
		 * @return Returns a xsDateTime of the value.
		 */
		xsDateTime getValue() const { return _value; }
		/**
		 * Sets the _value of this element.
		 * @param val The new value for this element.
		 */
		void setValue( xsDateTime val ) { *(daeStringRef*)&_value = val; }

	protected:
		/**
		 * Constructor
		 */
		domModified() : _value() {}
		/**
		 * Destructor
		 */
		virtual ~domModified() {}
		/**
		 * Copy Constructor
		 */
		domModified( const domModified &cpy ) : daeElement() { (void)cpy; }
		/**
		 * Overloaded assignment operator
		 */
		virtual domModified &operator=( const domModified &cpy ) { (void)cpy; return *this; }

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

	class domRevision;

	typedef daeSmartRef<domRevision> domRevisionRef;
	typedef daeTArray<domRevisionRef> domRevision_Array;

/**
 * The revision element contains the revision information for the parent element.
 * The revision element may appear zero or one time.
 */
	class domRevision : public daeElement
	{
	public:
		COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::REVISION; }

	protected:  // Value
		/**
		 * The xsString value of the text data of this element. 
		 */
		xsString _value;

	public:	//Accessors and Mutators
		/**
		 * Gets the value of this element.
		 * @return Returns a xsString of the value.
		 */
		xsString getValue() const { return _value; }
		/**
		 * Sets the _value of this element.
		 * @param val The new value for this element.
		 */
		void setValue( xsString val ) { *(daeStringRef*)&_value = val; }

	protected:
		/**
		 * Constructor
		 */
		domRevision() : _value() {}
		/**
		 * Destructor
		 */
		virtual ~domRevision() {}
		/**
		 * Copy Constructor
		 */
		domRevision( const domRevision &cpy ) : daeElement() { (void)cpy; }
		/**
		 * Overloaded assignment operator
		 */
		virtual domRevision &operator=( const domRevision &cpy ) { (void)cpy; return *this; }

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

	class domSource_data;

	typedef daeSmartRef<domSource_data> domSource_dataRef;
	typedef daeTArray<domSource_dataRef> domSource_data_Array;

/**
 * The source_data element contains the URI to the source data from which
 * the  parent element was created. The source_data element may appear zero
 * or one time.
 */
	class domSource_data : public daeElement
	{
	public:
		COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::SOURCE_DATA; }

	protected:  // Value
		/**
		 * The xsAnyURI value of the text data of this element. 
		 */
		xsAnyURI _value;

	public:	//Accessors and Mutators
		/**
		 * Gets the value of this element.
		 * @return Returns a xsAnyURI of the value.
		 */
		xsAnyURI &getValue() { return _value; }
		/**
		 * Gets the value of this element.
		 * @return Returns a constant xsAnyURI of the value.
		 */
		const xsAnyURI &getValue() const { return _value; }
		/**
		 * Sets the _value of this element.
		 * @param val The new value for this element.
		 */
		void setValue( const xsAnyURI &val ) { _value = val; }

	protected:
		/**
		 * Constructor
		 */
		domSource_data() : _value() {}
		/**
		 * Destructor
		 */
		virtual ~domSource_data() {}
		/**
		 * Copy Constructor
		 */
		domSource_data( const domSource_data &cpy ) : daeElement() { (void)cpy; }
		/**
		 * Overloaded assignment operator
		 */
		virtual domSource_data &operator=( const domSource_data &cpy ) { (void)cpy; return *this; }

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

	class domCopyright;

	typedef daeSmartRef<domCopyright> domCopyrightRef;
	typedef daeTArray<domCopyrightRef> domCopyright_Array;

/**
 * The copyright element contains the author's copyright information applicable
 * to  the parent element. The copyright element may appear zero or more times.
 */
	class domCopyright : public daeElement
	{
	public:
		COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::COPYRIGHT; }

	protected:  // Value
		/**
		 * The xsString value of the text data of this element. 
		 */
		xsString _value;

	public:	//Accessors and Mutators
		/**
		 * Gets the value of this element.
		 * @return Returns a xsString of the value.
		 */
		xsString getValue() const { return _value; }
		/**
		 * Sets the _value of this element.
		 * @param val The new value for this element.
		 */
		void setValue( xsString val ) { *(daeStringRef*)&_value = val; }

	protected:
		/**
		 * Constructor
		 */
		domCopyright() : _value() {}
		/**
		 * Destructor
		 */
		virtual ~domCopyright() {}
		/**
		 * Copy Constructor
		 */
		domCopyright( const domCopyright &cpy ) : daeElement() { (void)cpy; }
		/**
		 * Overloaded assignment operator
		 */
		virtual domCopyright &operator=( const domCopyright &cpy ) { (void)cpy; return *this; }

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

	class domTitle;

	typedef daeSmartRef<domTitle> domTitleRef;
	typedef daeTArray<domTitleRef> domTitle_Array;

/**
 * The title element contains the title information for the parent element.
 * The  title element may appear zero or one time.
 */
	class domTitle : public daeElement
	{
	public:
		COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::TITLE; }

	protected:  // Value
		/**
		 * The xsString value of the text data of this element. 
		 */
		xsString _value;

	public:	//Accessors and Mutators
		/**
		 * Gets the value of this element.
		 * @return Returns a xsString of the value.
		 */
		xsString getValue() const { return _value; }
		/**
		 * Sets the _value of this element.
		 * @param val The new value for this element.
		 */
		void setValue( xsString val ) { *(daeStringRef*)&_value = val; }

	protected:
		/**
		 * Constructor
		 */
		domTitle() : _value() {}
		/**
		 * Destructor
		 */
		virtual ~domTitle() {}
		/**
		 * Copy Constructor
		 */
		domTitle( const domTitle &cpy ) : daeElement() { (void)cpy; }
		/**
		 * Overloaded assignment operator
		 */
		virtual domTitle &operator=( const domTitle &cpy ) { (void)cpy; return *this; }

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

	class domSubject;

	typedef daeSmartRef<domSubject> domSubjectRef;
	typedef daeTArray<domSubjectRef> domSubject_Array;

/**
 * The subject element contains a description of the topical subject of the
 * parent  element. The subject element may appear zero or one time.
 */
	class domSubject : public daeElement
	{
	public:
		COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::SUBJECT; }

	protected:  // Value
		/**
		 * The xsString value of the text data of this element. 
		 */
		xsString _value;

	public:	//Accessors and Mutators
		/**
		 * Gets the value of this element.
		 * @return Returns a xsString of the value.
		 */
		xsString getValue() const { return _value; }
		/**
		 * Sets the _value of this element.
		 * @param val The new value for this element.
		 */
		void setValue( xsString val ) { *(daeStringRef*)&_value = val; }

	protected:
		/**
		 * Constructor
		 */
		domSubject() : _value() {}
		/**
		 * Destructor
		 */
		virtual ~domSubject() {}
		/**
		 * Copy Constructor
		 */
		domSubject( const domSubject &cpy ) : daeElement() { (void)cpy; }
		/**
		 * Overloaded assignment operator
		 */
		virtual domSubject &operator=( const domSubject &cpy ) { (void)cpy; return *this; }

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

	class domKeywords;

	typedef daeSmartRef<domKeywords> domKeywordsRef;
	typedef daeTArray<domKeywordsRef> domKeywords_Array;

/**
 * The keywords element contains a list of words used as search criteria for
 * the  parent element. The keywords element may appear zero or more times.
 */
	class domKeywords : public daeElement
	{
	public:
		COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::KEYWORDS; }

	protected:  // Value
		/**
		 * The xsString value of the text data of this element. 
		 */
		xsString _value;

	public:	//Accessors and Mutators
		/**
		 * Gets the value of this element.
		 * @return Returns a xsString of the value.
		 */
		xsString getValue() const { return _value; }
		/**
		 * Sets the _value of this element.
		 * @param val The new value for this element.
		 */
		void setValue( xsString val ) { *(daeStringRef*)&_value = val; }

	protected:
		/**
		 * Constructor
		 */
		domKeywords() : _value() {}
		/**
		 * Destructor
		 */
		virtual ~domKeywords() {}
		/**
		 * Copy Constructor
		 */
		domKeywords( const domKeywords &cpy ) : daeElement() { (void)cpy; }
		/**
		 * Overloaded assignment operator
		 */
		virtual domKeywords &operator=( const domKeywords &cpy ) { (void)cpy; return *this; }

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

	class domComments;

	typedef daeSmartRef<domComments> domCommentsRef;
	typedef daeTArray<domCommentsRef> domComments_Array;

/**
 * The comments element contains descriptive information about the parent
 * element.  The comments element may appear zero or more times.
 */
	class domComments : public daeElement
	{
	public:
		COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::COMMENTS; }

	protected:  // Value
		/**
		 * The xsString value of the text data of this element. 
		 */
		xsString _value;

	public:	//Accessors and Mutators
		/**
		 * Gets the value of this element.
		 * @return Returns a xsString of the value.
		 */
		xsString getValue() const { return _value; }
		/**
		 * Sets the _value of this element.
		 * @param val The new value for this element.
		 */
		void setValue( xsString val ) { *(daeStringRef*)&_value = val; }

	protected:
		/**
		 * Constructor
		 */
		domComments() : _value() {}
		/**
		 * Destructor
		 */
		virtual ~domComments() {}
		/**
		 * Copy Constructor
		 */
		domComments( const domComments &cpy ) : daeElement() { (void)cpy; }
		/**
		 * Overloaded assignment operator
		 */
		virtual domComments &operator=( const domComments &cpy ) { (void)cpy; return *this; }

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

	class domUp_axis;

	typedef daeSmartRef<domUp_axis> domUp_axisRef;
	typedef daeTArray<domUp_axisRef> domUp_axis_Array;

/**
 * The up_axis element contains descriptive information about coordinate system
 * of  the geometric data. All coordinates are right-handed by definition.
 * This element  specifies which axis is considered up. The up_axis element
 * contains one of: X_UP,  Y_UP, or Z_UP. The default is the Y-axis. The up_axis
 * element may appear zero or  one time.
 */
	class domUp_axis : public daeElement
	{
	public:
		COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::UP_AXIS; }

	protected:  // Value
		/**
		 * The domUpAxisType value of the text data of this element. 
		 */
		domUpAxisType _value;

	public:	//Accessors and Mutators
		/**
		 * Gets the value of this element.
		 * @return a domUpAxisType of the value.
		 */
		domUpAxisType getValue() const { return _value; }
		/**
		 * Sets the _value of this element.
		 * @param val The new value for this element.
		 */
		void setValue( domUpAxisType val ) { _value = val; }

	protected:
		/**
		 * Constructor
		 */
		domUp_axis() : _value() {}
		/**
		 * Destructor
		 */
		virtual ~domUp_axis() {}
		/**
		 * Copy Constructor
		 */
		domUp_axis( const domUp_axis &cpy ) : daeElement() { (void)cpy; }
		/**
		 * Overloaded assignment operator
		 */
		virtual domUp_axis &operator=( const domUp_axis &cpy ) { (void)cpy; return *this; }

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

	class domUnit;

	typedef daeSmartRef<domUnit> domUnitRef;
	typedef daeTArray<domUnitRef> domUnit_Array;

/**
 * The unit element contains descriptive information about unit of measure.
 * It has  attributes for the name of the unit and the measurement with respect
 * to the  meter. The unit element may appear zero or one time. The default
 * value for the  name attribute is 'meter'. The default value for the meter
 * attribute is '1.0'.
 */
	class domUnit : public daeElement
	{
	public:
		COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::UNIT; }
	protected:  // Attributes
/**
 *  The measurement with respect to the meter. 
 */
		xsDouble attrMeter;
/**
 *  The name of the unit. 
 */
		xsNMTOKEN attrName;


	public:	//Accessors and Mutators
		/**
		 * Gets the meter attribute.
		 * @return Returns a xsDouble of the meter attribute.
		 */
		xsDouble getMeter() const { return attrMeter; }
		/**
		 * Sets the meter attribute.
		 * @param atMeter The new value for the meter attribute.
		 */
		void setMeter( xsDouble atMeter ) { attrMeter = atMeter;	
	 _validAttributeArray[0] = true; }

		/**
		 * Gets the name attribute.
		 * @return Returns a xsNMTOKEN of the name attribute.
		 */
		xsNMTOKEN getName() const { return attrName; }
		/**
		 * Sets the name attribute.
		 * @param atName The new value for the name attribute.
		 */
		void setName( xsNMTOKEN atName ) { *(daeStringRef*)&attrName = atName;	
	 _validAttributeArray[1] = true; }

	protected:
		/**
		 * Constructor
		 */
		domUnit() : attrMeter(), attrName() {}
		/**
		 * Destructor
		 */
		virtual ~domUnit() {}
		/**
		 * Copy Constructor
		 */
		domUnit( const domUnit &cpy ) : daeElement() { (void)cpy; }
		/**
		 * Overloaded assignment operator
		 */
		virtual domUnit &operator=( const domUnit &cpy ) { (void)cpy; return *this; }

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
 * The author element contains the name of an author of the parent element.
 * The  author element may appear zero or more times. @see domAuthor
 */
	domAuthor_Array elemAuthor_array;
/**
 * The authoring_tool element contains the name of an application or tools
 * used to  create the parent element. The authoring_tool element may appear
 * zero or one time. @see domAuthoring_tool
 */
	domAuthoring_tool_Array elemAuthoring_tool_array;
/**
 * The created element contains the date and time that the parent element
 * was  created and represented in an ISO 8601 format. The created element
 * may appear  zero or one time. @see domCreated
 */
	domCreated_Array elemCreated_array;
/**
 * The modified element contains the date and time that the parent element
 * was last modified and represented in an ISO 8601 format. The modified element
 * may appear  zero or one time. @see domModified
 */
	domModified_Array elemModified_array;
/**
 * The revision element contains the revision information for the parent element.
 * The revision element may appear zero or one time. @see domRevision
 */
	domRevision_Array elemRevision_array;
/**
 * The source_data element contains the URI to the source data from which
 * the  parent element was created. The source_data element may appear zero
 * or one time. @see domSource_data
 */
	domSource_data_Array elemSource_data_array;
/**
 * The copyright element contains the author's copyright information applicable
 * to  the parent element. The copyright element may appear zero or more times.
 * @see domCopyright
 */
	domCopyright_Array elemCopyright_array;
/**
 * The title element contains the title information for the parent element.
 * The  title element may appear zero or one time. @see domTitle
 */
	domTitle_Array elemTitle_array;
/**
 * The subject element contains a description of the topical subject of the
 * parent  element. The subject element may appear zero or one time. @see
 * domSubject
 */
	domSubject_Array elemSubject_array;
/**
 * The keywords element contains a list of words used as search criteria for
 * the  parent element. The keywords element may appear zero or more times.
 * @see domKeywords
 */
	domKeywords_Array elemKeywords_array;
/**
 * The comments element contains descriptive information about the parent
 * element.  The comments element may appear zero or more times. @see domComments
 */
	domComments_Array elemComments_array;
/**
 * The up_axis element contains descriptive information about coordinate system
 * of  the geometric data. All coordinates are right-handed by definition.
 * This element  specifies which axis is considered up. The up_axis element
 * contains one of: X_UP,  Y_UP, or Z_UP. The default is the Y-axis. The up_axis
 * element may appear zero or  one time. @see domUp_axis
 */
	domUp_axis_Array elemUp_axis_array;
/**
 * The unit element contains descriptive information about unit of measure.
 * It has  attributes for the name of the unit and the measurement with respect
 * to the  meter. The unit element may appear zero or one time. The default
 * value for the  name attribute is 'meter'. The default value for the meter
 * attribute is '1.0'. @see domUnit
 */
	domUnit_Array elemUnit_array;
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
	 * Gets the author element array.
	 * @return Returns a reference to the array of author elements.
	 */
	domAuthor_Array &getAuthor_array() { return elemAuthor_array; }
	/**
	 * Gets the author element array.
	 * @return Returns a constant reference to the array of author elements.
	 */
	const domAuthor_Array &getAuthor_array() const { return elemAuthor_array; }
	/**
	 * Gets the authoring_tool element array.
	 * @return Returns a reference to the array of authoring_tool elements.
	 */
	domAuthoring_tool_Array &getAuthoring_tool_array() { return elemAuthoring_tool_array; }
	/**
	 * Gets the authoring_tool element array.
	 * @return Returns a constant reference to the array of authoring_tool elements.
	 */
	const domAuthoring_tool_Array &getAuthoring_tool_array() const { return elemAuthoring_tool_array; }
	/**
	 * Gets the created element array.
	 * @return Returns a reference to the array of created elements.
	 */
	domCreated_Array &getCreated_array() { return elemCreated_array; }
	/**
	 * Gets the created element array.
	 * @return Returns a constant reference to the array of created elements.
	 */
	const domCreated_Array &getCreated_array() const { return elemCreated_array; }
	/**
	 * Gets the modified element array.
	 * @return Returns a reference to the array of modified elements.
	 */
	domModified_Array &getModified_array() { return elemModified_array; }
	/**
	 * Gets the modified element array.
	 * @return Returns a constant reference to the array of modified elements.
	 */
	const domModified_Array &getModified_array() const { return elemModified_array; }
	/**
	 * Gets the revision element array.
	 * @return Returns a reference to the array of revision elements.
	 */
	domRevision_Array &getRevision_array() { return elemRevision_array; }
	/**
	 * Gets the revision element array.
	 * @return Returns a constant reference to the array of revision elements.
	 */
	const domRevision_Array &getRevision_array() const { return elemRevision_array; }
	/**
	 * Gets the source_data element array.
	 * @return Returns a reference to the array of source_data elements.
	 */
	domSource_data_Array &getSource_data_array() { return elemSource_data_array; }
	/**
	 * Gets the source_data element array.
	 * @return Returns a constant reference to the array of source_data elements.
	 */
	const domSource_data_Array &getSource_data_array() const { return elemSource_data_array; }
	/**
	 * Gets the copyright element array.
	 * @return Returns a reference to the array of copyright elements.
	 */
	domCopyright_Array &getCopyright_array() { return elemCopyright_array; }
	/**
	 * Gets the copyright element array.
	 * @return Returns a constant reference to the array of copyright elements.
	 */
	const domCopyright_Array &getCopyright_array() const { return elemCopyright_array; }
	/**
	 * Gets the title element array.
	 * @return Returns a reference to the array of title elements.
	 */
	domTitle_Array &getTitle_array() { return elemTitle_array; }
	/**
	 * Gets the title element array.
	 * @return Returns a constant reference to the array of title elements.
	 */
	const domTitle_Array &getTitle_array() const { return elemTitle_array; }
	/**
	 * Gets the subject element array.
	 * @return Returns a reference to the array of subject elements.
	 */
	domSubject_Array &getSubject_array() { return elemSubject_array; }
	/**
	 * Gets the subject element array.
	 * @return Returns a constant reference to the array of subject elements.
	 */
	const domSubject_Array &getSubject_array() const { return elemSubject_array; }
	/**
	 * Gets the keywords element array.
	 * @return Returns a reference to the array of keywords elements.
	 */
	domKeywords_Array &getKeywords_array() { return elemKeywords_array; }
	/**
	 * Gets the keywords element array.
	 * @return Returns a constant reference to the array of keywords elements.
	 */
	const domKeywords_Array &getKeywords_array() const { return elemKeywords_array; }
	/**
	 * Gets the comments element array.
	 * @return Returns a reference to the array of comments elements.
	 */
	domComments_Array &getComments_array() { return elemComments_array; }
	/**
	 * Gets the comments element array.
	 * @return Returns a constant reference to the array of comments elements.
	 */
	const domComments_Array &getComments_array() const { return elemComments_array; }
	/**
	 * Gets the up_axis element array.
	 * @return Returns a reference to the array of up_axis elements.
	 */
	domUp_axis_Array &getUp_axis_array() { return elemUp_axis_array; }
	/**
	 * Gets the up_axis element array.
	 * @return Returns a constant reference to the array of up_axis elements.
	 */
	const domUp_axis_Array &getUp_axis_array() const { return elemUp_axis_array; }
	/**
	 * Gets the unit element array.
	 * @return Returns a reference to the array of unit elements.
	 */
	domUnit_Array &getUnit_array() { return elemUnit_array; }
	/**
	 * Gets the unit element array.
	 * @return Returns a constant reference to the array of unit elements.
	 */
	const domUnit_Array &getUnit_array() const { return elemUnit_array; }
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
	domAsset() : elemAuthor_array(), elemAuthoring_tool_array(), elemCreated_array(), elemModified_array(), elemRevision_array(), elemSource_data_array(), elemCopyright_array(), elemTitle_array(), elemSubject_array(), elemKeywords_array(), elemComments_array(), elemUp_axis_array(), elemUnit_array() {}
	/**
	 * Destructor
	 */
	virtual ~domAsset() {}
	/**
	 * Copy Constructor
	 */
	domAsset( const domAsset &cpy ) : daeElement() { (void)cpy; }
	/**
	 * Overloaded assignment operator
	 */
	virtual domAsset &operator=( const domAsset &cpy ) { (void)cpy; return *this; }

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
