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

#ifndef _CFX_LINUX_H_
#define _CFX_LINUX_H_

#include <stdio.h>
//#include <sys/param.h>
#include <stdarg.h>
#include <GL/gl.h>
#include <GL/glext.h>
#include <GL/glu.h>			
//#ifndef _LIB
#include <Cg/cg.h>
#include <Cg/cgGL.h>
//#else
//#include <cfxNoCg.h>
//#endif

#include <assert.h>

#define CG_FILE_TYPE CG_SOURCE

#define LINUX	1

inline void cfxPrint(const char* str, ...)
{
    va_list	valist;
    char	tempStr[4096];

    va_start(valist, str);
    vsprintf(tempStr, str, valist);
    va_end(valist);

//    OutputDebugString( tempStr );
}

#endif
