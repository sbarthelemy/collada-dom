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

#ifndef CRT_LINUX
#define CRT_LINUX

#include <Crt/CrtTypes.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h> 

#define GL_GLEXT_PROTOTYPES
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glext.h>
//#include <GL/glx.h>


#ifdef __cplusplus
extern "C" {
#endif

#ifndef GLsizeiptr
typedef int             GLsizeiptr;
#endif 

GLAPI void APIENTRY glGenBuffers (GLsizei, GLuint *);
GLAPI void APIENTRY glBindBuffer (GLenum, GLuint);
GLAPI void APIENTRY glBufferData (GLenum, GLsizeiptr, const GLvoid *, GLenum);
GLAPI void APIENTRY glDeleteBuffers (GLsizei, const GLuint *);

#ifdef __cplusplus
}
#endif


#include <Cg/cg.h>	
#include <Cg/cgGL.h>	


extern CGcontext	cgContext;
extern CGprofile	cgVertexProfile, cgFragmentProfile;

#define	gluPerspectivef gluPerspective
#define	gluLookAtf	gluLookAt

// Multitexture constants
#define GL_TEXTURE0 0x84C0
#define GL_TEXTURE1 0x84C1
#define GL_TEXTURE2 0x84C2

#ifdef WIN32
#ifndef glActiveTexture
extern PFNGLACTIVETEXTUREARBPROC glActiveTexture;
typedef void (APIENTRY * PFNGLACTIVETEXTUREARBPROC) (GLenum target);
#endif

#ifndef glClientActiveTexture
extern PFNGLCLIENTACTIVETEXTUREARBPROC glClientActiveTexture;
typedef void (APIENTRY * PFNGLCLIENTACTIVETEXTUREARBPROC) (GLenum target);
#endif
#endif

CrtVoid CrtInitPaths();




// Imitate MessageBox
//
#define	MB_OK	0x01

static void MessageBox(char* LSomething, char* LMessage, char* LTypeStr, int LButtons)
{
 (void)LSomething;
 (void)LButtons;
printf("%s() %s %s\n", __FUNCTION__, LTypeStr, LMessage);fflush(stdout);
}



#endif	// CRT_LINUX
