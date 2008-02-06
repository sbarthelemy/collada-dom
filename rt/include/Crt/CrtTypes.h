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


#ifndef _CRT_TYPES_
#define _CRT_TYPES_

//#include <dae/daeTypes.h>

#define CrtChar     char 
#define CrtByte		char
#define CrtInt32	int
#define CrtInt16	short
#define CrtInt       CrtInt32 

#define CrtUChar	unsigned CrtByte
#define CrtUByte	unsigned CrtByte
#define CrtUInt32	unsigned CrtInt32
#define CrtUInt16	unsigned CrtInt16
#define CrtUInt		CrtUInt32

#define CrtFloat     float
#define CrtDouble    double 

#define CrtVoid		void 
#define CrtError	CrtInt32

enum CrtBool
{
	CrtFalse = 0,
	CrtTrue
};

typedef CrtFloat CrtMatrix[16];
typedef CrtFloat CrtMatrix3x4[12];

const int MAX_STRING_SIZE = 256; 

#define CrtError_OK			0
#define CrtError_Skin		-10


#endif // _CRT_TYPES_

