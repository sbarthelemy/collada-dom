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
#ifndef __domParam_h__
#define __domParam_h__

#include <dom/domTypes.h>
#include <dom/domElements.h>


/**
 * The param element declares parametric information regarding its parent
 * element. The param element describes parameters for generic data flow,
 * program data, and entry points. A functional or programmatical format requires
 * a means for users to specify parametric  information. This information
 * represents function parameter (argument) data. The basic  declaration of
 * a parameter describes the name, data type, and value data of the parameter.
 * That parameter name identifies it to the function or program. The parameter
 * type indicates  the encoding of its value. The parameter value is the actual
 * data.
 */
class domParam : public daeElement
{
public:
	COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::PARAM; }
protected:  // Attributes
/**
 *  The id attribute is a text string containing the unique identifier of
 * the  param element. This value must be unique within the instance document.
 * Optional attribute. 
 */
	xsID attrId;
/**
 *  The name attribute is the text string name of this element.  Optional
 * attribute. 
 */
	xsNCName attrName;
/**
 *  The sid attribute is a text string value containing the sub-identifier
 * of  this element. This value must be unique within the scope of the parent
 * element.  Optional attribute. 
 */
	xsNCName attrSid;
/**
 *  The flow attribute indicates the direction of data flow.  Optional attribute.
 */
	domFlowType attrFlow;
/**
 *  The semantic attribute is the user-defined meaning of the parameter. 
 * Optional attribute. 
 */
	xsToken attrSemantic;
/**
 *  The type attribute indicates the type of the value data. This text string
 * must  be understood by the application.  Required attribute. 
 */
	xsNMTOKEN attrType;

protected:  // Value
	/**
	 * The xsString value of the text data of this element. 
	 */
	xsString _value;

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
	 * Gets the sid attribute.
	 * @return Returns a xsNCName of the sid attribute.
	 */
	xsNCName getSid() const { return attrSid; }
	/**
	 * Sets the sid attribute.
	 * @param atSid The new value for the sid attribute.
	 */
	void setSid( xsNCName atSid ) { *(daeStringRef*)&attrSid = atSid;
	 _validAttributeArray[2] = true; }

	/**
	 * Gets the flow attribute.
	 * @return Returns a domFlowType of the flow attribute.
	 */
	domFlowType getFlow() const { return attrFlow; }
	/**
	 * Sets the flow attribute.
	 * @param atFlow The new value for the flow attribute.
	 */
	void setFlow( domFlowType atFlow ) { attrFlow = atFlow;
	 _validAttributeArray[3] = true; }

	/**
	 * Gets the semantic attribute.
	 * @return Returns a xsToken of the semantic attribute.
	 */
	xsToken getSemantic() const { return attrSemantic; }
	/**
	 * Sets the semantic attribute.
	 * @param atSemantic The new value for the semantic attribute.
	 */
	void setSemantic( xsToken atSemantic ) { *(daeStringRef*)&attrSemantic = atSemantic;
	 _validAttributeArray[4] = true; }

	/**
	 * Gets the type attribute.
	 * @return Returns a xsNMTOKEN of the type attribute.
	 */
	xsNMTOKEN getType() const { return attrType; }
	/**
	 * Sets the type attribute.
	 * @param atType The new value for the type attribute.
	 */
	void setType( xsNMTOKEN atType ) { *(daeStringRef*)&attrType = atType;
	 _validAttributeArray[5] = true; }

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
	domParam() : attrId(), attrName(), attrSid(), attrFlow(), attrSemantic(), attrType(), _value() {}
	/**
	 * Destructor
	 */
	virtual ~domParam() {}
	/**
	 * Copy Constructor
	 */
	domParam( const domParam &cpy ) : daeElement() { (void)cpy; }
	/**
	 * Overloaded assignment operator
	 */
	virtual domParam &operator=( const domParam &cpy ) { (void)cpy; return *this; }

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
