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

#ifndef __intLight_h__
#define __intLight_h__

#include <dae/daeIntegrationObject.h>
#include <dae/daeMetaElement.h>

class intLight;

typedef daeSmartRef<intLight> intLightRef;
typedef daeTArray<intLightRef> intLightArray;

/**
 * The light element declares a light source that illuminates the scene. Light
 * sources have many different properties and radiate light in many different
 * patterns and  frequencies.
 */
class intLight : public daeIntegrationObject
{
public: // Constuctor and Destructor
	/**
	 * Default Constructor.
	 */
	intLight();
	 
	/**
	 * Default Destructor.
	 */
	~intLight();
	 
protected: // VIRTUAL INTEGRATION INTERFACE

// IMPORT FROM COLLADA	
	// This Method is used to create tool/runtime object
	virtual void createFrom(daeElementRef element);

	// This method translate from COLLADA to tool/runtime object
	virtual void fromCOLLADA();

	// This method is used as a second pass post process on tool/runtime objs
	virtual void fromCOLLADAPostProcess();

// EXPORT TO COLLADA	
	// This Method is used to create COLLADA objects
	virtual void createTo(void* userData);

	// This method translate to COLLADA from tool/runtime object
	virtual void toCOLLADA();

	// This method is used as a second pass post process on COLLADA dom
	virtual void toCOLLADAPostProcess();

public: // STATIC METHODS
	static daeElementRef create(daeInt bytes);
	static daeMetaElement* registerElement();
	
public: // STATIC MEMBERS
	static daeMetaElement* _Meta;

public:
class intTechnique_common;

typedef daeSmartRef<intTechnique_common> intTechnique_commonRef;
typedef daeTArray<intTechnique_commonRef> intTechnique_commonArray;

/**
 * The technique_common element specifies the light information for the common
 * profile which all  COLLADA implementations need to support.
 */
class intTechnique_common : public daeIntegrationObject
{
public: // Constuctor and Destructor
	/**
	 * Default Constructor.
	 */
	intTechnique_common();
	 
	/**
	 * Default Destructor.
	 */
	~intTechnique_common();
	 
protected: // VIRTUAL INTEGRATION INTERFACE

// IMPORT FROM COLLADA	
	// This Method is used to create tool/runtime object
	virtual void createFrom(daeElementRef element);

	// This method translate from COLLADA to tool/runtime object
	virtual void fromCOLLADA();

	// This method is used as a second pass post process on tool/runtime objs
	virtual void fromCOLLADAPostProcess();

// EXPORT TO COLLADA	
	// This Method is used to create COLLADA objects
	virtual void createTo(void* userData);

	// This method translate to COLLADA from tool/runtime object
	virtual void toCOLLADA();

	// This method is used as a second pass post process on COLLADA dom
	virtual void toCOLLADAPostProcess();

public: // STATIC METHODS
	static daeElementRef create(daeInt bytes);
	static daeMetaElement* registerElement();
	
public: // STATIC MEMBERS
	static daeMetaElement* _Meta;

public:
class intAmbient;

typedef daeSmartRef<intAmbient> intAmbientRef;
typedef daeTArray<intAmbientRef> intAmbientArray;

/**
 * The ambient element declares the parameters required to describe an ambient
 * light source.   An ambient light is one that lights everything evenly,
 * regardless of location or orientation.
 */
class intAmbient : public daeIntegrationObject
{
public: // Constuctor and Destructor
	/**
	 * Default Constructor.
	 */
	intAmbient();
	 
	/**
	 * Default Destructor.
	 */
	~intAmbient();
	 
protected: // VIRTUAL INTEGRATION INTERFACE

// IMPORT FROM COLLADA	
	// This Method is used to create tool/runtime object
	virtual void createFrom(daeElementRef element);

	// This method translate from COLLADA to tool/runtime object
	virtual void fromCOLLADA();

	// This method is used as a second pass post process on tool/runtime objs
	virtual void fromCOLLADAPostProcess();

// EXPORT TO COLLADA	
	// This Method is used to create COLLADA objects
	virtual void createTo(void* userData);

	// This method translate to COLLADA from tool/runtime object
	virtual void toCOLLADA();

	// This method is used as a second pass post process on COLLADA dom
	virtual void toCOLLADAPostProcess();

public: // STATIC METHODS
	static daeElementRef create(daeInt bytes);
	static daeMetaElement* registerElement();
	
public: // STATIC MEMBERS
	static daeMetaElement* _Meta;

};
class intDirectional;

typedef daeSmartRef<intDirectional> intDirectionalRef;
typedef daeTArray<intDirectionalRef> intDirectionalArray;

/**
 * The directional element declares the parameters required to describe a
 * directional light source.   A directional light is one that lights everything
 * from the same direction, regardless of location.   The light’s default
 * direction vector in local coordinates is [0,0,-1], pointing down the -Z
 * axis.  The actual direction of the light is defined by the transform of
 * the node where the light is  instantiated.
 */
class intDirectional : public daeIntegrationObject
{
public: // Constuctor and Destructor
	/**
	 * Default Constructor.
	 */
	intDirectional();
	 
	/**
	 * Default Destructor.
	 */
	~intDirectional();
	 
protected: // VIRTUAL INTEGRATION INTERFACE

// IMPORT FROM COLLADA	
	// This Method is used to create tool/runtime object
	virtual void createFrom(daeElementRef element);

	// This method translate from COLLADA to tool/runtime object
	virtual void fromCOLLADA();

	// This method is used as a second pass post process on tool/runtime objs
	virtual void fromCOLLADAPostProcess();

// EXPORT TO COLLADA	
	// This Method is used to create COLLADA objects
	virtual void createTo(void* userData);

	// This method translate to COLLADA from tool/runtime object
	virtual void toCOLLADA();

	// This method is used as a second pass post process on COLLADA dom
	virtual void toCOLLADAPostProcess();

public: // STATIC METHODS
	static daeElementRef create(daeInt bytes);
	static daeMetaElement* registerElement();
	
public: // STATIC MEMBERS
	static daeMetaElement* _Meta;

};
class intPoint;

typedef daeSmartRef<intPoint> intPointRef;
typedef daeTArray<intPointRef> intPointArray;

/**
 * The point element declares the parameters required to describe a point
 * light source.  A point light  source radiates light in all directions from
 * a known location in space. The intensity of a point  light source is attenuated
 * as the distance to the light source increases. The position of the light
 * is defined by the transform of the node in which it is instantiated.
 */
class intPoint : public daeIntegrationObject
{
public: // Constuctor and Destructor
	/**
	 * Default Constructor.
	 */
	intPoint();
	 
	/**
	 * Default Destructor.
	 */
	~intPoint();
	 
protected: // VIRTUAL INTEGRATION INTERFACE

// IMPORT FROM COLLADA	
	// This Method is used to create tool/runtime object
	virtual void createFrom(daeElementRef element);

	// This method translate from COLLADA to tool/runtime object
	virtual void fromCOLLADA();

	// This method is used as a second pass post process on tool/runtime objs
	virtual void fromCOLLADAPostProcess();

// EXPORT TO COLLADA	
	// This Method is used to create COLLADA objects
	virtual void createTo(void* userData);

	// This method translate to COLLADA from tool/runtime object
	virtual void toCOLLADA();

	// This method is used as a second pass post process on COLLADA dom
	virtual void toCOLLADAPostProcess();

public: // STATIC METHODS
	static daeElementRef create(daeInt bytes);
	static daeMetaElement* registerElement();
	
public: // STATIC MEMBERS
	static daeMetaElement* _Meta;

};
class intSpot;

typedef daeSmartRef<intSpot> intSpotRef;
typedef daeTArray<intSpotRef> intSpotArray;

/**
 * The spot element declares the parameters required to describe a spot light
 * source.  A spot light  source radiates light in one direction from a known
 * location in space. The light radiates from  the spot light source in a
 * cone shape. The intensity of the light is attenuated as the radiation 
 * angle increases away from the direction of the light source. The intensity
 * of a spot light source  is also attenuated as the distance to the light
 * source increases. The position of the light is  defined by the transform
 * of the node in which it is instantiated. The light’s default direction
 * vector in local coordinates is [0,0,-1], pointing down the -Z axis. The
 * actual direction of the  light is defined by the transform of the node
 * where the light is instantiated.
 */
class intSpot : public daeIntegrationObject
{
public: // Constuctor and Destructor
	/**
	 * Default Constructor.
	 */
	intSpot();
	 
	/**
	 * Default Destructor.
	 */
	~intSpot();
	 
protected: // VIRTUAL INTEGRATION INTERFACE

// IMPORT FROM COLLADA	
	// This Method is used to create tool/runtime object
	virtual void createFrom(daeElementRef element);

	// This method translate from COLLADA to tool/runtime object
	virtual void fromCOLLADA();

	// This method is used as a second pass post process on tool/runtime objs
	virtual void fromCOLLADAPostProcess();

// EXPORT TO COLLADA	
	// This Method is used to create COLLADA objects
	virtual void createTo(void* userData);

	// This method translate to COLLADA from tool/runtime object
	virtual void toCOLLADA();

	// This method is used as a second pass post process on COLLADA dom
	virtual void toCOLLADAPostProcess();

public: // STATIC METHODS
	static daeElementRef create(daeInt bytes);
	static daeMetaElement* registerElement();
	
public: // STATIC MEMBERS
	static daeMetaElement* _Meta;

};

};

};

#endif
