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

#ifndef __DOM_ELEMENTS_H__
#define __DOM_ELEMENTS_H__

#include <dom/domTypes.h>

class domCOLLADA;

typedef daeSmartRef<domCOLLADA> domCOLLADARef;
typedef daeTArray<domCOLLADARef> domCOLLADA_Array;

class domAccessor;

typedef daeSmartRef<domAccessor> domAccessorRef;
typedef daeTArray<domAccessorRef> domAccessor_Array;

class domArray;

typedef daeSmartRef<domArray> domArrayRef;
typedef daeTArray<domArrayRef> domArray_Array;

class domFloat_array;

typedef daeSmartRef<domFloat_array> domFloat_arrayRef;
typedef daeTArray<domFloat_arrayRef> domFloat_array_Array;

class domInt_array;

typedef daeSmartRef<domInt_array> domInt_arrayRef;
typedef daeTArray<domInt_arrayRef> domInt_array_Array;

class domName_array;

typedef daeSmartRef<domName_array> domName_arrayRef;
typedef daeTArray<domName_arrayRef> domName_array_Array;

class domBool_array;

typedef daeSmartRef<domBool_array> domBool_arrayRef;
typedef daeTArray<domBool_arrayRef> domBool_array_Array;

class domInput;

typedef daeSmartRef<domInput> domInputRef;
typedef daeTArray<domInputRef> domInput_Array;

class domParam;

typedef daeSmartRef<domParam> domParamRef;
typedef daeTArray<domParamRef> domParam_Array;

class domSource;

typedef daeSmartRef<domSource> domSourceRef;
typedef daeTArray<domSourceRef> domSource_Array;

class domMesh;

typedef daeSmartRef<domMesh> domMeshRef;
typedef daeTArray<domMeshRef> domMesh_Array;

class domCombiner;

typedef daeSmartRef<domCombiner> domCombinerRef;
typedef daeTArray<domCombinerRef> domCombiner_Array;

class domJoints;

typedef daeSmartRef<domJoints> domJointsRef;
typedef daeTArray<domJointsRef> domJoints_Array;

class domLines;

typedef daeSmartRef<domLines> domLinesRef;
typedef daeTArray<domLinesRef> domLines_Array;

class domLinestrips;

typedef daeSmartRef<domLinestrips> domLinestripsRef;
typedef daeTArray<domLinestripsRef> domLinestrips_Array;

class domPolygons;

typedef daeSmartRef<domPolygons> domPolygonsRef;
typedef daeTArray<domPolygonsRef> domPolygons_Array;

class domTriangles;

typedef daeSmartRef<domTriangles> domTrianglesRef;
typedef daeTArray<domTrianglesRef> domTriangles_Array;

class domTrifans;

typedef daeSmartRef<domTrifans> domTrifansRef;
typedef daeTArray<domTrifansRef> domTrifans_Array;

class domTristrips;

typedef daeSmartRef<domTristrips> domTristripsRef;
typedef daeTArray<domTristripsRef> domTristrips_Array;

class domVertices;

typedef daeSmartRef<domVertices> domVerticesRef;
typedef daeTArray<domVerticesRef> domVertices_Array;

class domLookat;

typedef daeSmartRef<domLookat> domLookatRef;
typedef daeTArray<domLookatRef> domLookat_Array;

class domMatrix;

typedef daeSmartRef<domMatrix> domMatrixRef;
typedef daeTArray<domMatrixRef> domMatrix_Array;

class domPerspective;

typedef daeSmartRef<domPerspective> domPerspectiveRef;
typedef daeTArray<domPerspectiveRef> domPerspective_Array;

class domRotate;

typedef daeSmartRef<domRotate> domRotateRef;
typedef daeTArray<domRotateRef> domRotate_Array;

class domScale;

typedef daeSmartRef<domScale> domScaleRef;
typedef daeTArray<domScaleRef> domScale_Array;

class domSkew;

typedef daeSmartRef<domSkew> domSkewRef;
typedef daeTArray<domSkewRef> domSkew_Array;

class domTranslate;

typedef daeSmartRef<domTranslate> domTranslateRef;
typedef daeTArray<domTranslateRef> domTranslate_Array;

class domImage;

typedef daeSmartRef<domImage> domImageRef;
typedef daeTArray<domImageRef> domImage_Array;

class domLight;

typedef daeSmartRef<domLight> domLightRef;
typedef daeTArray<domLightRef> domLight_Array;

class domMaterial;

typedef daeSmartRef<domMaterial> domMaterialRef;
typedef daeTArray<domMaterialRef> domMaterial_Array;

class domPass;

typedef daeSmartRef<domPass> domPassRef;
typedef daeTArray<domPassRef> domPass_Array;

class domShader;

typedef daeSmartRef<domShader> domShaderRef;
typedef daeTArray<domShaderRef> domShader_Array;

class domTexture;

typedef daeSmartRef<domTexture> domTextureRef;
typedef daeTArray<domTextureRef> domTexture_Array;

class domCode;

typedef daeSmartRef<domCode> domCodeRef;
typedef daeTArray<domCodeRef> domCode_Array;

class domEntry;

typedef daeSmartRef<domEntry> domEntryRef;
typedef daeTArray<domEntryRef> domEntry_Array;

class domProgram;

typedef daeSmartRef<domProgram> domProgramRef;
typedef daeTArray<domProgramRef> domProgram_Array;

class domCamera;

typedef daeSmartRef<domCamera> domCameraRef;
typedef daeTArray<domCameraRef> domCamera_Array;

class domInstance;

typedef daeSmartRef<domInstance> domInstanceRef;
typedef daeTArray<domInstanceRef> domInstance_Array;

class domChannel;

typedef daeSmartRef<domChannel> domChannelRef;
typedef daeTArray<domChannelRef> domChannel_Array;

class domSampler;

typedef daeSmartRef<domSampler> domSamplerRef;
typedef daeTArray<domSamplerRef> domSampler_Array;

class domSkin;

typedef daeSmartRef<domSkin> domSkinRef;
typedef daeTArray<domSkinRef> domSkin_Array;

class domAsset;

typedef daeSmartRef<domAsset> domAssetRef;
typedef daeTArray<domAssetRef> domAsset_Array;

class domExtra;

typedef daeSmartRef<domExtra> domExtraRef;
typedef daeTArray<domExtraRef> domExtra_Array;

class domBoundingbox;

typedef daeSmartRef<domBoundingbox> domBoundingboxRef;
typedef daeTArray<domBoundingboxRef> domBoundingbox_Array;

class domNode;

typedef daeSmartRef<domNode> domNodeRef;
typedef daeTArray<domNodeRef> domNode_Array;

class domScene;

typedef daeSmartRef<domScene> domSceneRef;
typedef daeTArray<domSceneRef> domScene_Array;

class domAnimation;

typedef daeSmartRef<domAnimation> domAnimationRef;
typedef daeTArray<domAnimationRef> domAnimation_Array;

class domController;

typedef daeSmartRef<domController> domControllerRef;
typedef daeTArray<domControllerRef> domController_Array;

class domGeometry;

typedef daeSmartRef<domGeometry> domGeometryRef;
typedef daeTArray<domGeometryRef> domGeometry_Array;

class domLibrary;

typedef daeSmartRef<domLibrary> domLibraryRef;
typedef daeTArray<domLibraryRef> domLibrary_Array;


#endif //__DOM_ELEMENTS_H__

