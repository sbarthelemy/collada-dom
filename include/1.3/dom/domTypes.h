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


#endif
