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

#ifndef __DOM_TYPES_H__
#define __DOM_TYPES_H__

#include <dae/daeDomTypes.h>

// Register all types
extern void registerDomTypes();

typedef xsBoolean		domBool;
typedef xsDateTime		domDateTime;
typedef xsDouble		domFloat;
typedef xsLong		domInt;
typedef xsName		domName;
typedef xsString		domString;
typedef xsToken		domToken;
typedef xsBooleanArray		domListOfBools;
typedef xsDoubleArray		domListOfFloats;
typedef xsHexBinaryArray		domListOfHexBinary;
typedef xsLongArray		domListOfInts;
typedef xsNameArray		domListOfNames;
typedef xsTokenArray		domListOfTokens;
typedef domListOfBools		domBool2;
typedef domListOfBools		domBool3;
typedef domListOfBools		domBool4;
typedef domListOfFloats		domFloat2;
typedef domListOfFloats		domFloat3;
typedef domListOfFloats		domFloat4;
typedef domListOfFloats		domFloat7;
typedef domListOfFloats		domFloat2x2;
typedef domListOfFloats		domFloat3x3;
typedef domListOfFloats		domFloat4x4;
typedef domListOfInts		domInt2;
typedef domListOfInts		domInt3;
typedef domListOfInts		domInt4;
typedef domListOfInts		domInt2x2;
typedef domListOfInts		domInt3x3;
typedef domListOfInts		domInt4x4;

enum domArrayTypes {
	ARRAYTYPES_float,
	ARRAYTYPES_int,
	ARRAYTYPES_Name,
	ARRAYTYPES_token,
	ARRAYTYPES_COUNT = 4
};

enum domFlowType {
	FLOWTYPE_IN,
	FLOWTYPE_OUT,
	FLOWTYPE_INOUT,
	FLOWTYPE_COUNT = 3
};

enum domLibraryType {
	LIBRARYTYPE_ANIMATION,
	LIBRARYTYPE_CAMERA,
	LIBRARYTYPE_CODE,
	LIBRARYTYPE_CONTROLLER,
	LIBRARYTYPE_GEOMETRY,
	LIBRARYTYPE_IMAGE,
	LIBRARYTYPE_LIGHT,
	LIBRARYTYPE_MATERIAL,
	LIBRARYTYPE_PROGRAM,
	LIBRARYTYPE_TEXTURE,
	LIBRARYTYPE_COUNT = 10
};

enum domLightType {
	LIGHTTYPE_AMBIENT,
	LIGHTTYPE_DIRECTIONAL,
	LIGHTTYPE_POINT,
	LIGHTTYPE_SPOT,
	LIGHTTYPE_COUNT = 4
};

enum domNodeType {
	NODETYPE_JOINT,
	NODETYPE_NODE,
	NODETYPE_COUNT = 2
};

enum domUpAxisType {
	UPAXISTYPE_X_UP,
	UPAXISTYPE_Y_UP,
	UPAXISTYPE_Z_UP,
	UPAXISTYPE_COUNT = 3
};

//Element Type Enum
namespace COLLADA_TYPE
{
#ifdef _MSC_VER
	enum TypeEnum
	{
#else
	const int
#endif
		NO_TYPE = 0,
		ANY = 1,
		COLLADA = 2,
		ACCESSOR = 3,
		ARRAY = 4,
		FLOAT_ARRAY = 5,
		INT_ARRAY = 6,
		NAME_ARRAY = 7,
		BOOL_ARRAY = 8,
		INPUT = 9,
		PARAM = 10,
		SOURCE = 11,
		TECHNIQUE = 12,
		MESH = 13,
		COMBINER = 14,
		V = 15,
		JOINTS = 16,
		LINES = 17,
		P = 18,
		LINESTRIPS = 19,
		POLYGONS = 20,
		H = 21,
		TRIANGLES = 22,
		TRIFANS = 23,
		TRISTRIPS = 24,
		VERTICES = 25,
		LOOKAT = 26,
		MATRIX = 27,
		PERSPECTIVE = 28,
		ROTATE = 29,
		SCALE = 30,
		SKEW = 31,
		TRANSLATE = 32,
		IMAGE = 33,
		LIGHT = 34,
		MATERIAL = 35,
		PASS = 36,
		SHADER = 37,
		TEXTURE = 38,
		CODE = 39,
		ENTRY = 40,
		PROGRAM = 41,
		CAMERA = 42,
		OPTICS = 43,
		IMAGER = 44,
		INSTANCE = 45,
		CHANNEL = 46,
		SAMPLER = 47,
		SKIN = 48,
		ASSET = 49,
		AUTHOR = 50,
		AUTHORING_TOOL = 51,
		CREATED = 52,
		MODIFIED = 53,
		REVISION = 54,
		SOURCE_DATA = 55,
		COPYRIGHT = 56,
		TITLE = 57,
		SUBJECT = 58,
		KEYWORDS = 59,
		COMMENTS = 60,
		UP_AXIS = 61,
		UNIT = 62,
		EXTRA = 63,
		BOUNDINGBOX = 64,
		MIN = 65,
		MAX = 66,
		NODE = 67,
		SCENE = 68,
		ANIMATION = 69,
		CONTROLLER = 70,
		GEOMETRY = 71,
		LIBRARY = 72
#ifdef _MSC_VER
	};
#else
	;
#endif
};

#endif
