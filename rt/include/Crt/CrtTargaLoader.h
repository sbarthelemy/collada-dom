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
#ifndef _CRT_Texture_h_
#define _CRT_Texture_h_

#include "Crt/CrtData.h"
#include "Crt/CrtMemory.h"
#include "Crt/CrtTypes.h"
#include "Crt/CrtUtils.h"

#define MAX_NBR_TEXTURES 100
#define MAX_MIP_LEVELS 6

// targa load stuff 

#define TGA_TRUECOLOR_32      (4)
#define TGA_TRUECOLOR_24      (3)

struct CrtTargaHeader
{
    CrtUByte IDLength;
    CrtUByte ColormapType;
    CrtUByte ImageType;
    CrtUByte ColormapSpecification[5];
    CrtUInt16 XOrigin;
    CrtUInt16 YOrigin;
    CrtUInt16 ImageWidth;
    CrtUInt16 ImageHeight;
    CrtUByte PixelDepth;
    CrtUByte ImageDescriptor;
};

class CrtTgaFile
{
public:
	CrtChar 		Name[80];
	CrtTargaHeader 	Header;

	CrtColor3i		*RGBData; // for quickly indexable 24bit tga data
	CrtColor4i		*RGBAData; // for quickly indexable 32bit tga data 

	CrtBool 		HasAlpha;
	CrtInt32 		ID;
	CrtInt32		BBP;		
	
	CrtTgaFile():
		RGBData(NULL),
		RGBAData(NULL),
		HasAlpha(CrtFalse),
		ID(0),
		BBP(32)
	{
		memset( Name, 0, sizeof( Name ));
		memset( (void*)&Header, 0, sizeof( Header ));
		BBP = 32;
	}
	~CrtTgaFile()
	{
		if ( BBP == 24 )
		{
			CrtDeleteData( RGBData ); 
		}
		else
		{
			CrtDeleteData( RGBAData );
		}
	};
};


CrtTgaFile * CrtLoadTargaFromMemory( CrtUChar * mem );
CrtTgaFile *	CrtLoadTargaFromFile( CrtChar * file );

#endif 
