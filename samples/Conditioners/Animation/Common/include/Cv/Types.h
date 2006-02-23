//================================================================================================
// Interchange file viewer C++ version
//
// DESCRIPTION:
//  Basic types
//
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
//================================================================================================

#ifndef _Cv_Types_h
#define _Cv_Types_h


#define CvCPLUSPLUS


//#include <DAE/Types.h>


// CvEntity types
//
enum
{
 CvNODE = 1,
 CvGEOMETRY,
 CvSHADER,
 CvPOLYGROUP,
 CvMATERIAL
};

enum
{
 CvTYPE_FLOAT32 = 1,
 CvTYPE_FLOAT64
};

// We might want to be able to use different precision for
// for DAE (the I/O) and Cv (the viewer), so Cv has its
// own definition of these:
//
#ifdef CvDOUBLE_PRECISION
typedef double	CvCoordinate;
typedef double	CvWeight;
typedef double	CvAngle;
#define CvCOORDINATE_TYPE	CvTYPE_FLOAT64

#else
typedef float	CvCoordinate;
typedef float	CvWeight;
typedef float	CvAngle;
#define CvCOORDINATE_TYPE	CvTYPE_FLOAT32
#endif	// CvDOUBLE_PRECISION

#ifdef Cv64BIT_INTS
typedef long long		CvIndex;
typedef long long		CvSize;
#else
typedef int			CvIndex;
typedef int			CvSize;
#endif



#ifdef __GNUC__
#define Cv_INLINE static inline
#else
#if _MSC_VER < 1400
#define Cv_INLINE static
#else
#define Cv_INLINE inline
#endif
#endif


#ifdef USE_Cg
#define USE_SL	1		// Use shading language
#endif


#ifdef USE_GLSL
#define USE_SL	1		// Use shading language
#endif


enum
{
 CvIO_SUCCESS = 0,
 CvIO_ERROR,
 CvIO_NO_FILENAME,
 CvIO_COULD_NOT_OPEN,
 CvIO_NOT_A_NORMAL_FILE,
 CvIO_DIRECTORY,
 CvIO_NO_SUCH_FILE,
 CvIO_NO_MEMORY,
 CvIO_NO_READ_PERMISSION,
 CvIO_FILE_EXISTS,
 CvIO_DIRECTORY_DOES_NOT_EXIST,
 CvIO_UNSUPPORTED_SOURCE,
 CvIO_UNSUPPORTED_FORMAT,
 CvIO_UNSUPPORTED_OPERATION,
 CvIO_DESCRIPTOR_FILE_ERROR,
 CvIO_COULD_NOT_OPEN_FILE
};



// Rendering flags
//
#define CvSWAP_BUFFERS	0x0001



#define CvX	0
#define CvY	1
#define CvZ	2



// Rotation types
//
enum
{
 CvXYZ = 1,
 CvXZY,
 CvYXZ,
 CvYZX,
 CvZXY,
 CvZYX,
 CvQUATERNION
};


#ifndef M00
#define M00	0
enum
{
    M01=1, M02, M03,
 M10, M11, M12, M13,
 M20, M21, M22, M23,
 M30, M31, M32, M33
};

#endif	// M00


#ifndef CvBoolTYPE
typedef char	CvBool;
#define CvBoolTYPE
#endif


// Define boolean values
//
#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif


typedef float	CvGLCoordinate;

typedef struct
{
 CvCoordinate	X, Y;
} CvCoord2;

typedef struct
{
 CvCoordinate	X, Y, Z;
} CvCoord3;

typedef struct
{
 CvCoordinate	X, Y, Z, W;
} CvCoord4;

typedef struct
{
 float	R, G, B;
} CvRGBfColor;

typedef struct
{
 float	R, G, B, A;
} CvRGBAfColor;


typedef CvCoord2	CvST;
typedef CvCoord2	CvUV;
typedef CvCoord3	Cv3DPosition;



typedef CvGLCoordinate CvMatrix[16];


typedef struct
{
 char*	FileName;
 FILE*	File;
} CvIOStruct;


#define	CvRADIANS_TO_DEGREES	57.295779513082320877
#define CvDEGREES_TO_RADIANS	0.017453292519943295769

class CvEntity
{
 public:

 int	RefCnt;

 char*	Name;

 explicit CvEntity();
 virtual ~CvEntity();

 int Assign(CvEntity**);
 int Free();
};


#define Cv_Assign(mThis, mTarget)	mThis->Assign(mTarget)

// These are made replaceable, so you can add your own memory manager
//
#define CvMalloc	malloc
#define CvRealloc	realloc
#define CvFree		free


#endif	// _Cv_Types_h
