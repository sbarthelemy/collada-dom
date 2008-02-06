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

#include "Crt/CrtTypes.h"
#include "Crt/CrtData.h"
#include "Crt/CrtMemory.h"
#include "Crt/CrtImageloader.h"
#include "Crt/CrtTexture.h"

//#include <Magick++.h>
#include <IL/il.h>

CrtBool	CrtLoadImage( CrtChar * file, CrtImage * texObj )
{

	ILboolean ret;
	ILuint image;
	ilGenImages(1, &image);
	ilBindImage(image);
	ret = ilLoadImage(file);
	if (ret == IL_FALSE) return CrtFalse;
	if (ilIsImage(image) == IL_FALSE) return CrtFalse;

    unsigned int height = ilGetInteger(IL_IMAGE_HEIGHT);
	unsigned int width = ilGetInteger(IL_IMAGE_WIDTH);
	unsigned int paddedwidth = (width + 3) & (~3) ;
	unsigned int bpp = ilGetInteger(IL_IMAGE_BPP);	
//	CrtPrint("file=%s height=%d, width=%d, bpp=%d\n", file, height, width, bpp);

	texObj->SetHeight( height ); 
	texObj->SetWidth( paddedwidth ); 

	const ILubyte *pixels = ilGetData();

	CrtUChar *Data = NULL;
	texObj->SetFormat( bpp );
	Data = CrtNewData( CrtUChar , paddedwidth * height * sizeof(CrtUChar) * bpp);
	texObj->SetImageData( (CrtUChar *)Data );


	for ( int row = height-1; row >= 0 ; --row )
	{   
		for ( unsigned int column = 0; column < width ; column++ )
		{
			memcpy((void*) &Data[row*paddedwidth * bpp + column * bpp], pixels, sizeof(CrtUChar) * bpp);
			pixels += sizeof(CrtUChar) * bpp;
		}
	}

	return CrtTrue; 
}
