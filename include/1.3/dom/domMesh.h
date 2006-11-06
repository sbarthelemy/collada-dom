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
#ifndef __domMesh_h__
#define __domMesh_h__

#include <dom/domTypes.h>
#include <dom/domElements.h>

#include <dom/domSource.h>
#include <dom/domVertices.h>
#include <dom/domLines.h>
#include <dom/domLinestrips.h>
#include <dom/domPolygons.h>
#include <dom/domTriangles.h>
#include <dom/domTrifans.h>
#include <dom/domTristrips.h>

/**
 * The mesh element contains vertex and primitive information sufficient to
 * describe basic  geometric meshes. Meshes embody a general form of geometric
 * description that primarily  includes vertex and primitive information.
 * Vertex information is the set of attributes  associated with a point on
 * the surface of the mesh. Each vertex includes data for attributes such
 * as: * Vertex position * Vertex color * Vertex normal * Vertex texture coordinate
 * The mesh also includes a description of how the vertices are organized
 * to form the geometric  shape of the mesh. The mesh vertices are collated
 * into geometric primitives such as polygons,  triangles, or lines.
 */
class domMesh : public daeElement
{
public:
	COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::MESH; }
protected:  // Attributes
/**
 *  The id attribute is a text string containing the unique identifier of
 * the mesh  element. This value must be unique within the instance document.
 * Optional attribute. 
 */
	xsID attrId;
/**
 *  The name attribute is a text string containing the name of the mesh element.
 * Optional attribute. 
 */
	xsNCName attrName;

protected:  // Elements
/**
 *  The source element must occur one or more times as the first elements
 * of mesh.  The source element may also occur 0 or more times after the vertices
 * element but before the primitive elements. The source elements provide
 * the bulk of the  mesh's vertex data.  @see domSource
 */
	domSource_Array elemSource_array;
/**
 *  The vertices element must occur exactly one time. The vertices element
 * describes the meshvertex attributes and establishes their topological identity.
 * @see domVertices
 */
	domVerticesRef elemVertices;
/**
 *  The lines element contains line primitives.  @see domLines
 */
	domLines_Array elemLines_array;
/**
 *  The linestrips element contains line-strip primitives.  @see domLinestrips
 */
	domLinestrips_Array elemLinestrips_array;
/**
 *  The polygons element contains polygon primitives.  @see domPolygons
 */
	domPolygons_Array elemPolygons_array;
/**
 *  The triangles element contains triangle primitives.  @see domTriangles
 */
	domTriangles_Array elemTriangles_array;
/**
 *  The trifans element contains triangle-fan primitives.  @see domTrifans
 */
	domTrifans_Array elemTrifans_array;
/**
 *  The tristrips element contains triangle-strip primitives.  @see domTristrips
 */
	domTristrips_Array elemTristrips_array;
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
	 * Gets the source element array.
	 * @return Returns a reference to the array of source elements.
	 */
	domSource_Array &getSource_array() { return elemSource_array; }
	/**
	 * Gets the source element array.
	 * @return Returns a constant reference to the array of source elements.
	 */
	const domSource_Array &getSource_array() const { return elemSource_array; }
	/**
	 * Gets the vertices element.
	 * @return a daeSmartRef to the vertices element.
	 */
	const domVerticesRef getVertices() const { return elemVertices; }
	/**
	 * Gets the lines element array.
	 * @return Returns a reference to the array of lines elements.
	 */
	domLines_Array &getLines_array() { return elemLines_array; }
	/**
	 * Gets the lines element array.
	 * @return Returns a constant reference to the array of lines elements.
	 */
	const domLines_Array &getLines_array() const { return elemLines_array; }
	/**
	 * Gets the linestrips element array.
	 * @return Returns a reference to the array of linestrips elements.
	 */
	domLinestrips_Array &getLinestrips_array() { return elemLinestrips_array; }
	/**
	 * Gets the linestrips element array.
	 * @return Returns a constant reference to the array of linestrips elements.
	 */
	const domLinestrips_Array &getLinestrips_array() const { return elemLinestrips_array; }
	/**
	 * Gets the polygons element array.
	 * @return Returns a reference to the array of polygons elements.
	 */
	domPolygons_Array &getPolygons_array() { return elemPolygons_array; }
	/**
	 * Gets the polygons element array.
	 * @return Returns a constant reference to the array of polygons elements.
	 */
	const domPolygons_Array &getPolygons_array() const { return elemPolygons_array; }
	/**
	 * Gets the triangles element array.
	 * @return Returns a reference to the array of triangles elements.
	 */
	domTriangles_Array &getTriangles_array() { return elemTriangles_array; }
	/**
	 * Gets the triangles element array.
	 * @return Returns a constant reference to the array of triangles elements.
	 */
	const domTriangles_Array &getTriangles_array() const { return elemTriangles_array; }
	/**
	 * Gets the trifans element array.
	 * @return Returns a reference to the array of trifans elements.
	 */
	domTrifans_Array &getTrifans_array() { return elemTrifans_array; }
	/**
	 * Gets the trifans element array.
	 * @return Returns a constant reference to the array of trifans elements.
	 */
	const domTrifans_Array &getTrifans_array() const { return elemTrifans_array; }
	/**
	 * Gets the tristrips element array.
	 * @return Returns a reference to the array of tristrips elements.
	 */
	domTristrips_Array &getTristrips_array() { return elemTristrips_array; }
	/**
	 * Gets the tristrips element array.
	 * @return Returns a constant reference to the array of tristrips elements.
	 */
	const domTristrips_Array &getTristrips_array() const { return elemTristrips_array; }
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
	domMesh() : attrId(), attrName(), elemSource_array(), elemVertices(), elemLines_array(), elemLinestrips_array(), elemPolygons_array(), elemTriangles_array(), elemTrifans_array(), elemTristrips_array() {}
	/**
	 * Destructor
	 */
	virtual ~domMesh() {}
	/**
	 * Copy Constructor
	 */
	domMesh( const domMesh &cpy ) : daeElement() { (void)cpy; }
	/**
	 * Overloaded assignment operator
	 */
	virtual domMesh &operator=( const domMesh &cpy ) { (void)cpy; return *this; }

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
