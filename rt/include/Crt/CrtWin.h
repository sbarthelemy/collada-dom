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

#ifndef CRT_WIN
#define CRT_WIN

#include <Crt/CrtTypes.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h> 

#include <windows.h>
#include <cg\cg.h>	
#include <cg\cggl.h>	

#include <gl\gl.h>
#include <gl\glu.h>
#include <gl\glaux.h>

extern CGcontext	cgContext;
extern CGprofile	cgVertexProfile, cgFragmentProfile;

#define	gluPerspectivef gluPerspective
#define	gluLookAtf	gluLookAt

// Multitexture constants
#define GL_TEXTURE0 0x84C0
#define GL_TEXTURE1 0x84C1
#define GL_TEXTURE2 0x84C2

typedef void (APIENTRY * PFNGLACTIVETEXTUREARBPROC) (GLenum target);
typedef void (APIENTRY * PFNGLCLIENTACTIVETEXTUREARBPROC) (GLenum target);

extern PFNGLACTIVETEXTUREARBPROC glActiveTexture;
extern PFNGLCLIENTACTIVETEXTUREARBPROC glClientActiveTexture;

CrtVoid CrtInitPaths();

#endif 
