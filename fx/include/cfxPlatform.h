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

#ifndef _CFX_PLATFORM_H_
#define _CFX_PLATFORM_H_

#include <stdio.h>

// The CFX_PLATFORM_INCLUDE define specifies the header file which includes all platform specific information
// For windows projects this is \<cfxWin.h\> which makes this statement include <cfxWin.h>
// For Linux projects this is \<cfxLinux.h\> which makes this statement include <cfxLinux.h>
// The define is defaulted to windows in the Makefile
#include CFX_PLATFORM_INCLUDE

#endif 

