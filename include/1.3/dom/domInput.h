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
#ifndef __domInput_h__
#define __domInput_h__

#include <dom/domTypes.h>
#include <dom/domElements.h>


/**
 * The input element declares the input semantics of a data source. The input
 * element declares the input connections that a consumer requires.
 */
class domInput : public daeElement
{
public:
	COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::INPUT; }
protected:  // Attributes
/**
 *  The idx attribute uniquely identifies the input among the set of input
 * elements in  scope.  Required attribute. 
 */
	xsNonNegativeInteger attrIdx;
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
	 * Gets the idx attribute.
	 * @return Returns a xsNonNegativeInteger of the idx attribute.
	 */
	xsNonNegativeInteger getIdx() const { return attrIdx; }
	/**
	 * Sets the idx attribute.
	 * @param atIdx The new value for the idx attribute.
	 */
	void setIdx( xsNonNegativeInteger atIdx ) { attrIdx = atIdx;
	 _validAttributeArray[0] = true; }

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
	 _validAttributeArray[1] = true; }

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
	 _validAttributeArray[2] = true; }

protected:
	/**
	 * Constructor
	 */
	domInput() : attrIdx(), attrSemantic(), attrSource() {}
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


#endif
