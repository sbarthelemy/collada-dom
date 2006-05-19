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

#ifndef __DOM_CONSTANTS_H__
#define __DOM_CONSTANTS_H__

#include <dae/daeDomTypes.h>

extern daeString COLLADA_VERSION;
extern daeString COLLADA_NAMESPACE;
extern daeString COMMON_PROFILE_PROGRAMS_ANGLE_MAP;
extern daeString COMMON_PROFILE_PROGRAMS_BEZIER;
extern daeString COMMON_PROFILE_PROGRAMS_BSPLINE;
extern daeString COMMON_PROFILE_PROGRAMS_CARDINAL;
extern daeString COMMON_PROFILE_PROGRAMS_CONSTANT;
extern daeString COMMON_PROFILE_PROGRAMS_CUBE_MAP;
extern daeString COMMON_PROFILE_PROGRAMS_FISH_EYE;
extern daeString COMMON_PROFILE_PROGRAMS_HERMITE;
extern daeString COMMON_PROFILE_PROGRAMS_LAMBERT;
extern daeString COMMON_PROFILE_PROGRAMS_LINEAR;
extern daeString COMMON_PROFILE_PROGRAMS_ORTHOGRAPHIC;
extern daeString COMMON_PROFILE_PROGRAMS_PANORAMA;
extern daeString COMMON_PROFILE_PROGRAMS_PERSPECTIVE;
extern daeString COMMON_PROFILE_PROGRAMS_PHONG;
extern daeString COMMON_PROFILE_PROGRAMS_REAR_FISH_EYE;
extern daeString COMMON_PROFILE_PROGRAMS_SPHERICAL;
extern daeString COMMON_PROFILE_PROGRAMS_STEP;

extern daeString COMMON_PROFILE_INPUT_BIND_SHAPE_NORMAL;
extern daeString COMMON_PROFILE_INPUT_BIND_SHAPE_POSITION;
extern daeString COMMON_PROFILE_INPUT_BINORMAL;
extern daeString COMMON_PROFILE_INPUT_COLOR;
extern daeString COMMON_PROFILE_INPUT_IMAGE;
extern daeString COMMON_PROFILE_INPUT_IN_TANGENT;
extern daeString COMMON_PROFILE_INPUT_INPUT;
extern daeString COMMON_PROFILE_INPUT_INTERPOLATION;
extern daeString COMMON_PROFILE_INPUT_INV_BIND_MATRIX;
extern daeString COMMON_PROFILE_INPUT_JOINT;
extern daeString COMMON_PROFILE_INPUT_JOINTS_AND_WEIGHTS;
extern daeString COMMON_PROFILE_INPUT_NORMAL;
extern daeString COMMON_PROFILE_INPUT_OUTPUT;
extern daeString COMMON_PROFILE_INPUT_OUT_TANGENT;
extern daeString COMMON_PROFILE_INPUT_POSITION;
extern daeString COMMON_PROFILE_INPUT_TANGENT;
extern daeString COMMON_PROFILE_INPUT_TEXCOORD;
extern daeString COMMON_PROFILE_INPUT_TEXTURE;
extern daeString COMMON_PROFILE_INPUT_UV;
extern daeString COMMON_PROFILE_INPUT_VERTEX;
extern daeString COMMON_PROFILE_INPUT_WEIGHT;

extern daeString COMMON_PROFILE_CODE_FRAGMENT_PROGRAM;
extern daeString COMMON_PROFILE_CODE_VERTEX_PROGRAM;

extern daeString COMMON_PROFILE_PARAM_A;
extern daeString COMMON_PROFILE_PARAM_AMBIENT;
extern daeString COMMON_PROFILE_PARAM_ANGLE;
extern daeString COMMON_PROFILE_PARAM_ATTENUATION;
extern daeString COMMON_PROFILE_PARAM_ATTENUATION_SCALE;
extern daeString COMMON_PROFILE_PARAM_B;
extern daeString COMMON_PROFILE_PARAM_BOTTOM;
extern daeString COMMON_PROFILE_PARAM_COLLOR;
extern daeString COMMON_PROFILE_PARAM_DIFFUSE;
extern daeString COMMON_PROFILE_PARAM_EMMISION;
extern daeString COMMON_PROFILE_PARAM_FALLOFF;
extern daeString COMMON_PROFILE_PARAM_FALLOFF_SCALE;
extern daeString COMMON_PROFILE_PARAM_G;
extern daeString COMMON_PROFILE_PARAM_LEFT;
extern daeString COMMON_PROFILE_PARAM_P;
extern daeString COMMON_PROFILE_PARAM_Q;
extern daeString COMMON_PROFILE_PARAM_R;
extern daeString COMMON_PROFILE_PARAM_REFLECTIVE;
extern daeString COMMON_PROFILE_PARAM_REFLECTIVITY;
extern daeString COMMON_PROFILE_PARAM_RIGHT;
extern daeString COMMON_PROFILE_PARAM_S;
extern daeString COMMON_PROFILE_PARAM_SHININESS;
extern daeString COMMON_PROFILE_PARAM_SPECULAR;
extern daeString COMMON_PROFILE_PARAM_T;
extern daeString COMMON_PROFILE_PARAM_TIME;
extern daeString COMMON_PROFILE_PARAM_TOP;
extern daeString COMMON_PROFILE_PARAM_TRANSPARENCY;
extern daeString COMMON_PROFILE_PARAM_TRANSPARENT;
extern daeString COMMON_PROFILE_PARAM_U;
extern daeString COMMON_PROFILE_PARAM_V;
extern daeString COMMON_PROFILE_PARAM_W;
extern daeString COMMON_PROFILE_PARAM_X;
extern daeString COMMON_PROFILE_PARAM_XFOV;
extern daeString COMMON_PROFILE_PARAM_Y;
extern daeString COMMON_PROFILE_PARAM_YFOV;
extern daeString COMMON_PROFILE_PARAM_Z;
extern daeString COMMON_PROFILE_PARAM_ZFAR;
extern daeString COMMON_PROFILE_PARAM_ZNEAR;

extern daeString COLLADA_ELEMENT_COLLADA;
extern daeString COLLADA_ELEMENT_ACCESSOR;
extern daeString COLLADA_ELEMENT_ARRAY;
extern daeString COLLADA_ELEMENT_FLOAT_ARRAY;
extern daeString COLLADA_ELEMENT_INT_ARRAY;
extern daeString COLLADA_ELEMENT_NAME_ARRAY;
extern daeString COLLADA_ELEMENT_BOOL_ARRAY;
extern daeString COLLADA_ELEMENT_INPUT;
extern daeString COLLADA_ELEMENT_PARAM;
extern daeString COLLADA_ELEMENT_SOURCE;
extern daeString COLLADA_ELEMENT_TECHNIQUE;
extern daeString COLLADA_ELEMENT_MESH;
extern daeString COLLADA_ELEMENT_COMBINER;
extern daeString COLLADA_ELEMENT_V;
extern daeString COLLADA_ELEMENT_JOINTS;
extern daeString COLLADA_ELEMENT_LINES;
extern daeString COLLADA_ELEMENT_P;
extern daeString COLLADA_ELEMENT_LINESTRIPS;
extern daeString COLLADA_ELEMENT_POLYGONS;
extern daeString COLLADA_ELEMENT_H;
extern daeString COLLADA_ELEMENT_TRIANGLES;
extern daeString COLLADA_ELEMENT_TRIFANS;
extern daeString COLLADA_ELEMENT_TRISTRIPS;
extern daeString COLLADA_ELEMENT_VERTICES;
extern daeString COLLADA_ELEMENT_LOOKAT;
extern daeString COLLADA_ELEMENT_MATRIX;
extern daeString COLLADA_ELEMENT_PERSPECTIVE;
extern daeString COLLADA_ELEMENT_ROTATE;
extern daeString COLLADA_ELEMENT_SCALE;
extern daeString COLLADA_ELEMENT_SKEW;
extern daeString COLLADA_ELEMENT_TRANSLATE;
extern daeString COLLADA_ELEMENT_IMAGE;
extern daeString COLLADA_ELEMENT_LIGHT;
extern daeString COLLADA_ELEMENT_MATERIAL;
extern daeString COLLADA_ELEMENT_PASS;
extern daeString COLLADA_ELEMENT_SHADER;
extern daeString COLLADA_ELEMENT_TEXTURE;
extern daeString COLLADA_ELEMENT_CODE;
extern daeString COLLADA_ELEMENT_ENTRY;
extern daeString COLLADA_ELEMENT_PROGRAM;
extern daeString COLLADA_ELEMENT_CAMERA;
extern daeString COLLADA_ELEMENT_OPTICS;
extern daeString COLLADA_ELEMENT_IMAGER;
extern daeString COLLADA_ELEMENT_INSTANCE;
extern daeString COLLADA_ELEMENT_CHANNEL;
extern daeString COLLADA_ELEMENT_SAMPLER;
extern daeString COLLADA_ELEMENT_SKIN;
extern daeString COLLADA_ELEMENT_ASSET;
extern daeString COLLADA_ELEMENT_AUTHOR;
extern daeString COLLADA_ELEMENT_AUTHORING_TOOL;
extern daeString COLLADA_ELEMENT_CREATED;
extern daeString COLLADA_ELEMENT_MODIFIED;
extern daeString COLLADA_ELEMENT_REVISION;
extern daeString COLLADA_ELEMENT_SOURCE_DATA;
extern daeString COLLADA_ELEMENT_COPYRIGHT;
extern daeString COLLADA_ELEMENT_TITLE;
extern daeString COLLADA_ELEMENT_SUBJECT;
extern daeString COLLADA_ELEMENT_KEYWORDS;
extern daeString COLLADA_ELEMENT_COMMENTS;
extern daeString COLLADA_ELEMENT_UP_AXIS;
extern daeString COLLADA_ELEMENT_UNIT;
extern daeString COLLADA_ELEMENT_EXTRA;
extern daeString COLLADA_ELEMENT_BOUNDINGBOX;
extern daeString COLLADA_ELEMENT_MIN;
extern daeString COLLADA_ELEMENT_MAX;
extern daeString COLLADA_ELEMENT_NODE;
extern daeString COLLADA_ELEMENT_SCENE;
extern daeString COLLADA_ELEMENT_ANIMATION;
extern daeString COLLADA_ELEMENT_CONTROLLER;
extern daeString COLLADA_ELEMENT_GEOMETRY;
extern daeString COLLADA_ELEMENT_LIBRARY;

#endif //__DOM_CONSTANTS_H__

