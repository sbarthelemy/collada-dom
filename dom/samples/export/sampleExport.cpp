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

/******************************************************************************
 * This is a sample program to illustrate how to use the DOM to create new 
 * COLLADA documents from scratch. This example will create a simple textured
 * cube using the COLLADA profile_COMMON effect and material profile.
 * author: Andy Lorino
 *****************************************************************************/

#include <iostream>
#include <string>
#include <memory>

//The main includes for the COLLADA DOM.
#include <dae.h>
//This include will import all the elements that we will need except the effect 
//elements.
#include <dom/domCOLLADA.h>
//This include will import all of the elements needed for profile_COMMON 
//effects.
#include <dom/domProfile_COMMON.h>
//This include imports a bunch of useful constant strings for types and element 
//names.
#include <dom/domConstants.h>

const daeString documentName	= "sampleCube.dae";
const daeString geometryID		= "cube";
const daeString materialID		= "texture_material";
const daeString materialSymbol	= "material";
const daeString imageID			= "texture-image";
const daeString effectID		= "simple_texture-fx";
const daeString texCoordSymbol	= "UVSET0";
const daeString visual_sceneID  = "default_scene";

enum PrimitiveType
{
	TRIANGLES,
	POLYGONS,
	POLYLIST
};

const PrimitiveType primitivesToExport = TRIANGLES;

int main( int argc, char* argv[] )
{
	//variable to hold error codes
	daeInt error;

	//create a DAE instance;
	std::auto_ptr<DAE> dae(new DAE());
	if ( dae.get() == NULL )
	{
		std::cerr << "Failed to initialize COLLADA DOM\n";
		exit( -1 );
	}

	//set the default IOPlugin and Database
	dae->setIOPlugin( NULL );
	dae->setDatabase( NULL );

	//create a new document. Calling daeDatabase::insertDocument will create the 
	//daeDocument for you. This function will also create a domCOLLADA root 
	//element for you.
	daeDocument *doc = NULL;
	error = dae->getDatabase()->insertDocument( documentName, &doc );
	if ( error != DAE_OK || doc == NULL )
	{
		std::cerr << "Failed to create new document " << documentName << "\n";
		exit( -1 );
	}

	domCOLLADA *domRoot = daeSafeCast<domCOLLADA>( doc->getDomRoot() );

	//create the required asset tag
	domAsset *asset = daeSafeCast<domAsset>( domRoot->createAndPlace( COLLADA_ELEMENT_ASSET ) );
	domAsset::domCreated *created = daeSafeCast<domAsset::domCreated>( asset->createAndPlace( COLLADA_ELEMENT_CREATED ) );
	created->setValue("2006-10-23T13:30:00Z");

	domAsset::domModified *modified = daeSafeCast<domAsset::domModified>( asset->createAndPlace( COLLADA_ELEMENT_MODIFIED ) );
	modified->setValue("2006-10-23T13:30:00Z");

	//create the library_* elements to store the COLLADA elements we will use
	domLibrary_geometries	 *libGeos	   = daeSafeCast<domLibrary_geometries>( domRoot->createAndPlace( COLLADA_ELEMENT_LIBRARY_GEOMETRIES ) );
	domLibrary_images		 *libImgs	   = daeSafeCast<domLibrary_images>( domRoot->createAndPlace( COLLADA_ELEMENT_LIBRARY_IMAGES ) );
	domLibrary_effects		 *libEffects   = daeSafeCast<domLibrary_effects>( domRoot->createAndPlace( COLLADA_ELEMENT_LIBRARY_EFFECTS ) );
	domLibrary_materials	 *libMats	   = daeSafeCast<domLibrary_materials>( domRoot->createAndPlace( COLLADA_ELEMENT_LIBRARY_MATERIALS ) );
	domLibrary_visual_scenes *libVisScenes = daeSafeCast<domLibrary_visual_scenes>( domRoot->createAndPlace( COLLADA_ELEMENT_LIBRARY_VISUAL_SCENES ) );

	if ( libGeos == NULL || libEffects == NULL || libMats == NULL || libVisScenes == NULL || libImgs == NULL )
	{
		std::cerr << "Failed to create the library types needed\n";
		exit( -1 );
	}

	//lets start with the geometry.
	domGeometry *geo = daeSafeCast<domGeometry>( libGeos->createAndPlace( COLLADA_ELEMENT_GEOMETRY ) );
	if ( geo == NULL )
	{
		std::cerr << "Failed to create the geometry element\n";
		exit(-1);
	}
	//set it's id
	geo->setId( geometryID );

	//The cube will be a mesh geometry.
	domMesh *mesh = daeSafeCast<domMesh>( geo->createAndPlace( COLLADA_ELEMENT_MESH ) );
	if ( mesh == NULL )
	{
		std::cerr << "Failed to create the mesh element\n";
		exit(-1);
	}

	//we will need 3 sources for this mesh. positions, normals, and UVs
	domSource *positionSrc = daeSafeCast<domSource>( mesh->createAndPlace( COLLADA_ELEMENT_SOURCE ) );
	domSource *normalSrc = daeSafeCast<domSource>( mesh->createAndPlace( COLLADA_ELEMENT_SOURCE ) );
	domSource *uvSrc = daeSafeCast<domSource>( mesh->createAndPlace( COLLADA_ELEMENT_SOURCE ) );
	if ( positionSrc == NULL || normalSrc == NULL || uvSrc == NULL )
	{
		std::cerr << "Failed to create the source elements\n";
		exit(-1);
	}

	//create the positions source.
	std::string srcName = std::string(geometryID) + std::string("-positions");
	positionSrc->setId( srcName.c_str() );
	domFloat_array *fa = daeSafeCast<domFloat_array>( positionSrc->createAndPlace( COLLADA_ELEMENT_FLOAT_ARRAY ) );
	std::string arrayName = srcName + std::string("-array");
	fa->setId( arrayName.c_str() );
	fa->setCount( 24 );
	
	domListOfFloats &posSrcArray = fa->getValue();
	posSrcArray.append3( -10, -10, -10 ); //vertex 0
	posSrcArray.append3( -10, -10,  10 ); //vertex 1
	posSrcArray.append3( -10,  10, -10 ); //vertex 2
	posSrcArray.append3( -10,  10,  10 ); //vertex 3
	posSrcArray.append3(  10, -10, -10 ); //vertex 4
	posSrcArray.append3(  10, -10,  10 ); //vertex 5
	posSrcArray.append3(  10,  10, -10 ); //vertex 6
	posSrcArray.append3(  10,  10,  10 ); //vertex 7

	//create the accessor
	domSource::domTechnique_common *srcTeqC = daeSafeCast<domSource::domTechnique_common>( positionSrc->createAndPlace( COLLADA_ELEMENT_TECHNIQUE_COMMON ) );
	domAccessor *acc = daeSafeCast<domAccessor>( srcTeqC->createAndPlace( COLLADA_ELEMENT_ACCESSOR ) );
	acc->setCount( 8 );
	acc->setStride( 3 );
	daeURI uri(*dae.get());
	uri.setElement( fa );
	uri.resolveURI();
	acc->setSource( uri );

	domParam *param = daeSafeCast<domParam>( acc->createAndPlace( COLLADA_ELEMENT_PARAM ) );
	param->setName( "X" );
	param->setType( "float" );
	param = daeSafeCast<domParam>( acc->createAndPlace( COLLADA_ELEMENT_PARAM ) );
	param->setName( "Y" );
	param->setType( "float" );
	param = daeSafeCast<domParam>( acc->createAndPlace( COLLADA_ELEMENT_PARAM ) );
	param->setName( "Z" );
	param->setType( "float" );

	//create the normals source.
	srcName = std::string(geometryID) + std::string("-normals");
	normalSrc->setId( srcName.c_str() );
	fa = daeSafeCast<domFloat_array>( normalSrc->createAndPlace( COLLADA_ELEMENT_FLOAT_ARRAY ) );
	arrayName = srcName + std::string("-array");
	fa->setId( arrayName.c_str() );
	fa->setCount( 18 );
	
	domListOfFloats &normalSrcArray = fa->getValue();
	normalSrcArray.append3(  1,  0,  0 ); //normal 0 +x
	normalSrcArray.append3( -1,  0,  0 ); //normal 1 -x
	normalSrcArray.append3(  0,  1,  0 ); //normal 2 +y
	normalSrcArray.append3(  0, -1,  0 ); //normal 3 -y
	normalSrcArray.append3(  0,  0,  1 ); //normal 4 +z
	normalSrcArray.append3(  0,  0, -1 ); //normal 5 -z
	
	//create the accessor
	srcTeqC = daeSafeCast<domSource::domTechnique_common>( normalSrc->createAndPlace( COLLADA_ELEMENT_TECHNIQUE_COMMON ) );
	acc = daeSafeCast<domAccessor>( srcTeqC->createAndPlace( COLLADA_ELEMENT_ACCESSOR ) );
	acc->setCount( 6 );
	acc->setStride( 3 );
	uri.setElement( fa );
	uri.resolveURI();
	acc->setSource( uri );

	param = daeSafeCast<domParam>( acc->createAndPlace( COLLADA_ELEMENT_PARAM ) );
	param->setName( "X" );
	param->setType( "float" );
	param = daeSafeCast<domParam>( acc->createAndPlace( COLLADA_ELEMENT_PARAM ) );
	param->setName( "Y" );
	param->setType( "float" );
	param = daeSafeCast<domParam>( acc->createAndPlace( COLLADA_ELEMENT_PARAM ) );
	param->setName( "Z" );
	param->setType( "float" );

	//create the uvs source.
	srcName = std::string(geometryID) + std::string("-uvs");
	uvSrc->setId( srcName.c_str() );
	fa = daeSafeCast<domFloat_array>( uvSrc->createAndPlace( COLLADA_ELEMENT_FLOAT_ARRAY ) );
	arrayName = srcName + std::string("-array");
	fa->setId( arrayName.c_str() );
	fa->setCount( 8 );
	
	domListOfFloats &uvSrcArray = fa->getValue();
	uvSrcArray.append2( 0, 0 ); //uv 0,0
	uvSrcArray.append2( 0, 1 ); //uv 0,1
	uvSrcArray.append2( 1, 0 ); //uv 1,0
	uvSrcArray.append2( 1, 1 ); //uv 1,1
	
	//create the accessor
	srcTeqC = daeSafeCast<domSource::domTechnique_common>( uvSrc->createAndPlace( COLLADA_ELEMENT_TECHNIQUE_COMMON ) );
	acc = daeSafeCast<domAccessor>( srcTeqC->createAndPlace( COLLADA_ELEMENT_ACCESSOR ) );
	acc->setCount( 4 );
	acc->setStride( 2 );
	uri.setElement( fa );
	uri.resolveURI();
	acc->setSource( uri );

	param = daeSafeCast<domParam>( acc->createAndPlace( COLLADA_ELEMENT_PARAM ) );
	param->setName( "S" );
	param->setType( "float" );
	param = daeSafeCast<domParam>( acc->createAndPlace( COLLADA_ELEMENT_PARAM ) );
	param->setName( "T" );
	param->setType( "float" );

	domVertices *verts = daeSafeCast<domVertices>( mesh->createAndPlace( COLLADA_ELEMENT_VERTICES ) );
	srcName = std::string(geometryID) + std::string("-vertices");
	verts->setId( srcName.c_str() );
	domInputLocal *inputLocal = daeSafeCast<domInputLocal>( verts->createAndPlace( COLLADA_ELEMENT_INPUT ) );
	inputLocal->setSemantic( COMMON_PROFILE_INPUT_POSITION );
	uri.setElement( positionSrc );
	uri.resolveURI();
	inputLocal->setSource( uri );

	if ( primitivesToExport == TRIANGLES )
	{
		domTriangles *tris = daeSafeCast<domTriangles>( mesh->createAndPlace( COLLADA_ELEMENT_TRIANGLES ) );
		tris->setCount( 12 );
		tris->setMaterial( materialSymbol );
		domInputLocalOffset *ilo = daeSafeCast<domInputLocalOffset>( tris->createAndPlace( COLLADA_ELEMENT_INPUT ) );
		ilo->setSemantic( COMMON_PROFILE_INPUT_VERTEX );
		ilo->setOffset( 0 );
		uri.setElement( verts );
		uri.resolveURI();
		ilo->setSource( uri );
		ilo = daeSafeCast<domInputLocalOffset>( tris->createAndPlace( COLLADA_ELEMENT_INPUT ) );
		ilo->setSemantic( COMMON_PROFILE_INPUT_NORMAL );
		ilo->setOffset( 1 );
		uri.setElement( normalSrc );
		uri.resolveURI();
		ilo->setSource( uri );
		ilo = daeSafeCast<domInputLocalOffset>( tris->createAndPlace( COLLADA_ELEMENT_INPUT ) );
		ilo->setSemantic( COMMON_PROFILE_INPUT_TEXCOORD );
		ilo->setOffset( 2 );
		ilo->setSet( 0 );
		uri.setElement( uvSrc );
		uri.resolveURI();
		ilo->setSource( uri );

		domP *p = daeSafeCast<domP>( tris->createAndPlace( COLLADA_ELEMENT_P ) );

		domListOfUInts &indices = p->getValue();
		//each set of three is one number per input-offset. for this example it's vert, normal, uv.
		//three sets of three indices per triangle
		indices.append3( 0, 1, 0 );
		indices.append3( 1, 1, 1 );
		indices.append3( 2, 1, 2 );

		indices.append3( 1, 1, 1 );
		indices.append3( 3, 1, 3 );
		indices.append3( 2, 1, 2 );

		indices.append3( 0, 2, 0 );
		indices.append3( 4, 2, 1 );
		indices.append3( 1, 2, 2 );
		
		indices.append3( 4, 2, 1 );
		indices.append3( 5, 2, 3 );
		indices.append3( 1, 2, 2 );

		indices.append3( 1, 4, 0 );
		indices.append3( 5, 4, 1 );
		indices.append3( 3, 4, 2 );
		
		indices.append3( 5, 4, 1 );
		indices.append3( 7, 4, 3 );
		indices.append3( 3, 4, 2 );
		
		indices.append3( 5, 0, 0 );
		indices.append3( 4, 0, 1 );
		indices.append3( 7, 0, 2 );
		
		indices.append3( 4, 0, 1 );
		indices.append3( 6, 0, 3 );
		indices.append3( 7, 0, 2 );

		indices.append3( 4, 5, 0 );
		indices.append3( 0, 5, 1 );
		indices.append3( 6, 5, 2 );

		indices.append3( 0, 5, 1 );
		indices.append3( 2, 5, 3 );
		indices.append3( 6, 5, 2 );

		indices.append3( 3, 3, 0 );
		indices.append3( 7, 3, 1 );
		indices.append3( 2, 3, 2 );

		indices.append3( 7, 3, 1 );
		indices.append3( 6, 3, 3 );
		indices.append3( 2, 3, 2 );
	}
	else if ( primitivesToExport == POLYGONS )
	{
		domPolygons *polys = daeSafeCast<domPolygons>( mesh->createAndPlace( COLLADA_ELEMENT_POLYGONS ) );
		polys->setCount( 6 );
		polys->setMaterial( materialSymbol );

		domInputLocalOffset *ilo = daeSafeCast<domInputLocalOffset>( polys->createAndPlace( COLLADA_ELEMENT_INPUT ) );
		ilo->setSemantic( COMMON_PROFILE_INPUT_VERTEX );
		ilo->setOffset( 0 );
		uri.setElement( verts );
		uri.resolveURI();
		ilo->setSource( uri );
		ilo = daeSafeCast<domInputLocalOffset>( polys->createAndPlace( COLLADA_ELEMENT_INPUT ) );
		ilo->setSemantic( COMMON_PROFILE_INPUT_NORMAL );
		ilo->setOffset( 1 );
		uri.setElement( normalSrc );
		uri.resolveURI();
		ilo->setSource( uri );
		ilo = daeSafeCast<domInputLocalOffset>( polys->createAndPlace( COLLADA_ELEMENT_INPUT ) );
		ilo->setSemantic( COMMON_PROFILE_INPUT_TEXCOORD );
		ilo->setOffset( 2 );
		ilo->setSet( 0 );
		uri.setElement( uvSrc );
		uri.resolveURI();
		ilo->setSource( uri );

		//each set of three is one number per input-offset. for this example it's vert, normal, uv.
		//4 sets of three indices per polygon
		domP *p = daeSafeCast<domP>( polys->createAndPlace( COLLADA_ELEMENT_P ) );
		p->getValue().append3( 0, 1, 0 );
		p->getValue().append3( 1, 1, 1 );
		p->getValue().append3( 3, 1, 3 );
		p->getValue().append3( 2, 1, 2 );

		p = daeSafeCast<domP>( polys->createAndPlace( COLLADA_ELEMENT_P ) );
		p->getValue().append3( 0, 2, 0 );
		p->getValue().append3( 4, 2, 1 );
		p->getValue().append3( 5, 2, 3 );
		p->getValue().append3( 1, 2, 2 );

		p = daeSafeCast<domP>( polys->createAndPlace( COLLADA_ELEMENT_P ) );
		p->getValue().append3( 1, 4, 0 );
		p->getValue().append3( 5, 4, 1 );
		p->getValue().append3( 7, 4, 3 );
		p->getValue().append3( 3, 4, 2 );

		p = daeSafeCast<domP>( polys->createAndPlace( COLLADA_ELEMENT_P ) );
		p->getValue().append3( 5, 0, 0 );
		p->getValue().append3( 4, 0, 1 );
		p->getValue().append3( 6, 0, 3 );
		p->getValue().append3( 7, 0, 2 );

		p = daeSafeCast<domP>( polys->createAndPlace( COLLADA_ELEMENT_P ) );
		p->getValue().append3( 4, 5, 0 );
		p->getValue().append3( 0, 5, 1 );
		p->getValue().append3( 2, 5, 3 );
		p->getValue().append3( 6, 5, 2 );

		p = daeSafeCast<domP>( polys->createAndPlace( COLLADA_ELEMENT_P ) );
		p->getValue().append3( 3, 3, 0 );
		p->getValue().append3( 7, 3, 1 );
		p->getValue().append3( 6, 3, 3 );
		p->getValue().append3( 2, 3, 2 );
	}
	else if ( primitivesToExport == POLYLIST )
	{
		domPolylist *plist = daeSafeCast<domPolylist>( mesh->createAndPlace( COLLADA_ELEMENT_POLYLIST ) );
		plist->setCount( 6 );
		plist->setMaterial( materialSymbol );

		domInputLocalOffset *ilo = daeSafeCast<domInputLocalOffset>( plist->createAndPlace( COLLADA_ELEMENT_INPUT ) );
		ilo->setSemantic( COMMON_PROFILE_INPUT_VERTEX );
		ilo->setOffset( 0 );
		uri.setElement( verts );
		uri.resolveURI();
		ilo->setSource( uri );
		ilo = daeSafeCast<domInputLocalOffset>( plist->createAndPlace( COLLADA_ELEMENT_INPUT ) );
		ilo->setSemantic( COMMON_PROFILE_INPUT_NORMAL );
		ilo->setOffset( 1 );
		uri.setElement( normalSrc );
		uri.resolveURI();
		ilo->setSource( uri );
		ilo = daeSafeCast<domInputLocalOffset>( plist->createAndPlace( COLLADA_ELEMENT_INPUT ) );
		ilo->setSemantic( COMMON_PROFILE_INPUT_TEXCOORD );
		ilo->setOffset( 2 );
		ilo->setSet( 0 );
		uri.setElement( uvSrc );
		uri.resolveURI();
		ilo->setSource( uri );

		domPolylist::domVcount *vcount = daeSafeCast<domPolylist::domVcount>( plist->createAndPlace( COLLADA_ELEMENT_VCOUNT ) );
		//each number in the vcount element represents how many vertices a polygon has. In this case all 6 polys have 4 verts.
		vcount->getValue().append(4);
		vcount->getValue().append(4);
		vcount->getValue().append(4);
		vcount->getValue().append(4);
		vcount->getValue().append(4);
		vcount->getValue().append(4);

		//each set of three is one number per input-offset. for this example it's vert, normal, uv.
		domP *p = daeSafeCast<domP>( plist->createAndPlace( COLLADA_ELEMENT_P ) );
		domListOfUInts &indices = p->getValue();

		indices.append3( 0, 1, 0 );
		indices.append3( 1, 1, 1 );
		indices.append3( 3, 1, 3 );
		indices.append3( 2, 1, 2 );

		indices.append3( 0, 2, 0 );
		indices.append3( 4, 2, 1 );
		indices.append3( 5, 2, 3 );
		indices.append3( 1, 2, 2 );

		indices.append3( 1, 4, 0 );
		indices.append3( 5, 4, 1 );
		indices.append3( 7, 4, 3 );
		indices.append3( 3, 4, 2 );

		indices.append3( 5, 0, 0 );
		indices.append3( 4, 0, 1 );
		indices.append3( 6, 0, 3 );
		indices.append3( 7, 0, 2 );

		indices.append3( 4, 5, 0 );
		indices.append3( 0, 5, 1 );
		indices.append3( 2, 5, 3 );
		indices.append3( 6, 5, 2 );

		indices.append3( 3, 3, 0 );
		indices.append3( 7, 3, 1 );
		indices.append3( 6, 3, 3 );
		indices.append3( 2, 3, 2 );
	}

	//lets get the image for the texture.
	domImage *img = daeSafeCast<domImage>( libImgs->createAndPlace( COLLADA_ELEMENT_IMAGE ) );
	img->setId( imageID );
	domImage::domInit_from *initFrom = daeSafeCast<domImage::domInit_from>( img->createAndPlace( COLLADA_ELEMENT_INIT_FROM ) );
	initFrom->setValue( "./texture.bmp" );

	//lets create the effect
	domEffect *effect = daeSafeCast<domEffect>( libEffects->createAndPlace( COLLADA_ELEMENT_EFFECT ) );
	effect->setId( effectID );

	domProfile_COMMON *profCom = daeSafeCast<domProfile_COMMON>( effect->createAndPlace( COLLADA_ELEMENT_PROFILE_COMMON ) );
	domCommon_newparam_type *np = daeSafeCast<domCommon_newparam_type>( profCom->createAndPlace( COLLADA_ELEMENT_NEWPARAM ) );
	np->setSid( "surface" );
	domFx_surface_common *surface = daeSafeCast<domFx_surface_common>( np->createAndPlace( COLLADA_ELEMENT_SURFACE ) );
	surface->setType( FX_SURFACE_TYPE_ENUM_2D );
	domFx_surface_init_from_common *surfIF = daeSafeCast<domFx_surface_init_from_common>( surface->createAndPlace( COLLADA_ELEMENT_INIT_FROM ) );
	surfIF->setValue( imageID );

	np = daeSafeCast<domCommon_newparam_type>( profCom->createAndPlace( COLLADA_ELEMENT_NEWPARAM ) );
	np->setSid( "sampler" );
	domFx_sampler2D_common *sampler = daeSafeCast<domFx_sampler2D_common>( np->createAndPlace( COLLADA_ELEMENT_SAMPLER2D ) );
	domFx_sampler2D_common::domSource *sampSrc = daeSafeCast<domFx_sampler2D_common::domSource>( sampler->createAndPlace( COLLADA_ELEMENT_SOURCE ) );
	sampSrc->setValue( "surface" );

	domProfile_COMMON::domTechnique *teq = daeSafeCast<domProfile_COMMON::domTechnique>( profCom->createAndPlace( COLLADA_ELEMENT_TECHNIQUE ) );
	teq->setSid("t0");

	domProfile_COMMON::domTechnique::domPhong *phong = daeSafeCast<domProfile_COMMON::domTechnique::domPhong>( teq->createAndPlace( COLLADA_ELEMENT_PHONG ) );
	domCommon_color_or_texture_type *diffuse = daeSafeCast<domCommon_color_or_texture_type>( phong->createAndPlace( COLLADA_ELEMENT_DIFFUSE ) );
	domCommon_color_or_texture_type::domTexture *texture = daeSafeCast<domCommon_color_or_texture_type::domTexture>( diffuse->createAndPlace( COLLADA_ELEMENT_TEXTURE ) );
	texture->setTexture( "sampler" );
	texture->setTexcoord( texCoordSymbol );

	//lets create the material.
	domMaterial *material = daeSafeCast<domMaterial>( libMats->createAndPlace( COLLADA_ELEMENT_MATERIAL ) );
	material->setId( materialID );
	domInstance_effect *instEf = daeSafeCast<domInstance_effect>( material->createAndPlace( COLLADA_ELEMENT_INSTANCE_EFFECT ) );
	uri.setElement( effect );
	uri.resolveURI();
	instEf->setUrl( uri );

	//lets create the visual scene
	domVisual_scene *visScene = daeSafeCast<domVisual_scene>( libVisScenes->createAndPlace( COLLADA_ELEMENT_VISUAL_SCENE ) );
	visScene->setId( visual_sceneID );
	domNode *node = daeSafeCast<domNode>( visScene->createAndPlace( COLLADA_ELEMENT_NODE ) );
	node->setId( "cube_node" );
	//lets translate and rotate it a little
	domRotate *rot = daeSafeCast<domRotate>( node->createAndPlace( COLLADA_ELEMENT_ROTATE ) );
	rot->setSid( "rotate_x" );
	rot->getValue().set4( 1, 0, 0, 45 );

	domTranslate *trans = daeSafeCast<domTranslate>( node->createAndPlace( COLLADA_ELEMENT_TRANSLATE ) );
	trans->setSid( "translate" );
	trans->getValue().set3( 0, 10, 0 );
	
	domInstance_geometry *instGeo = daeSafeCast<domInstance_geometry>( node->createAndPlace( COLLADA_ELEMENT_INSTANCE_GEOMETRY ) );
	uri.setElement( geo );
	uri.resolveURI();
	instGeo->setUrl( uri );

	domBind_material *bindMat = daeSafeCast<domBind_material>( instGeo->createAndPlace( COLLADA_ELEMENT_BIND_MATERIAL ) );
	domBind_material::domTechnique_common *bmtc = daeSafeCast<domBind_material::domTechnique_common>( bindMat->createAndPlace( COLLADA_ELEMENT_TECHNIQUE_COMMON ) );
	domInstance_material *instMat = daeSafeCast<domInstance_material>( bmtc->createAndPlace( COLLADA_ELEMENT_INSTANCE_MATERIAL ) );
	uri.setElement( material );
	uri.resolveURI();
	instMat->setSymbol( materialSymbol );
	instMat->setTarget( uri );

	domInstance_material::domBind_vertex_input *bvi = daeSafeCast<domInstance_material::domBind_vertex_input>( instMat->createAndPlace( COLLADA_ELEMENT_BIND_VERTEX_INPUT ) );
	bvi->setSemantic( texCoordSymbol );
	bvi->setInput_semantic( COMMON_PROFILE_INPUT_TEXCOORD );
	bvi->setInput_set( 0 );

	//create the scene ref
	domCOLLADA::domScene *scene = daeSafeCast<domCOLLADA::domScene>( domRoot->createAndPlace( COLLADA_ELEMENT_SCENE ) );
	domInstanceWithExtra *ivs = daeSafeCast<domInstanceWithExtra>( scene->createAndPlace( COLLADA_ELEMENT_INSTANCE_VISUAL_SCENE ) );
	uri.setElement( visScene );
	uri.resolveURI();
	ivs->setUrl( uri );

	error = dae->save( documentName );
	if ( error != DAE_OK )
	{
		std::cerr << "Failed to save document " << documentName << "\n";
		exit(-1);
	}

	return 0;
}