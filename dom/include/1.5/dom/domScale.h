#ifndef __domScale_h__
#define __domScale_h__

#include <dae/daeDocument.h>
#include <dom/domTypes.h>
#include <dom/domElements.h>

#include <dom/domTargetable_float3.h>
class DAE;

/**
 * The scale element contains a mathematical vector that represents the relative
 * proportions of the  X, Y and Z axes of a coordinated system.
 */
class domScale : public daeElement
{
public:
	virtual COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::SCALE; }
	static daeInt ID() { return 16; }
	virtual daeInt typeID() const { return ID(); }


public:	//Accessors and Mutators
	/**
	 * Gets the value of this element.
	 * @return a domTargetable_float3Ref of the value.
	 */
	domTargetable_float3Ref& getValue() { return _value; }
	/**
	 * Sets the _value of this element.
	 * @param val The new value for this element.
	 */
	void setValue( const domTargetable_float3Ref& val ) { _value = val; }

protected:  // Value
	/**
	 * The domTargetable_float3 value of the text data of this element. 
	 */
	domTargetable_float3Ref _value;
protected:
	/**
	 * Constructor
	 */
	domScale(DAE& dae) : daeElement(dae), _value() {}
	/**
	 * Destructor
	 */
	virtual ~domScale() {}
	/**
	 * Overloaded assignment operator
	 */
	virtual domScale &operator=( const domScale &cpy ) { (void)cpy; return *this; }

public: // STATIC METHODS
	/**
	 * Creates an instance of this class and returns a daeElementRef referencing it.
	 * @return a daeElementRef referencing an instance of this object.
	 */
	static DLLSPEC daeElementRef create(DAE& dae);
	/**
	 * Creates a daeMetaElement object that describes this element in the meta object reflection framework.
	 * If a daeMetaElement already exists it will return that instead of creating a new one. 
	 * @return A daeMetaElement describing this COLLADA element.
	 */
	static DLLSPEC daeMetaElement* registerElement(DAE& dae);
};


#endif
