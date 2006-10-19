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
#ifndef __domCg_sampler3D_h__
#define __domCg_sampler3D_h__

#include <dom/domTypes.h>
#include <dom/domElements.h>

#include <dom/domFx_sampler3D_common.h>

class domCg_sampler3D_complexType : public domFx_sampler3D_common_complexType
{

protected:
	/**
	 * Constructor
	 */
	domCg_sampler3D_complexType() {}
	/**
	 * Destructor
	 */
	virtual ~domCg_sampler3D_complexType() {}
	/**
	 * Copy Constructor
	 */
	domCg_sampler3D_complexType( const domCg_sampler3D_complexType &cpy ) : domFx_sampler3D_common_complexType() { (void)cpy; }
	/**
	 * Overloaded assignment operator
	 */
	virtual domCg_sampler3D_complexType &operator=( const domCg_sampler3D_complexType &cpy ) { (void)cpy; return *this; }
};

/**
 * An element of type domCg_sampler3D_complexType.
 */
class domCg_sampler3D : public daeElement, public domCg_sampler3D_complexType
{
public:
	COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::CG_SAMPLER3D; }
protected:
	/**
	 * Constructor
	 */
	domCg_sampler3D() {}
	/**
	 * Destructor
	 */
	virtual ~domCg_sampler3D() {}
	/**
	 * Copy Constructor
	 */
	domCg_sampler3D( const domCg_sampler3D &cpy ) : daeElement(), domCg_sampler3D_complexType() { (void)cpy; }
	/**
	 * Overloaded assignment operator
	 */
	virtual domCg_sampler3D &operator=( const domCg_sampler3D &cpy ) { (void)cpy; return *this; }

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
