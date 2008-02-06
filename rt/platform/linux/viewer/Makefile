#!/usr/bin/make
# Copyright 2006 Sony Computer Entertainment Inc.
#
# Licensed under the SCEA Shared Source License, Version 1.0 (the "License"); you may not use this 
# file except in compliance with the License. You may obtain a copy of the License at:
# http://research.scea.com/scea_shared_source_license.html
#
# Unless required by applicable law or agreed to in writing, software distributed under the License 
# is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or 
# implied. See the License for the specific language governing permissions and limitations under the 
# License. 

ROOT_DIR	:= ../../..
EXECUTABLE	:= crtviewer
OUTPUT_DIR	:= $(ROOT_DIR)/bin

#defs
include $(ROOT_DIR)/build/makedefs.txt

#files
SRC		:= \
		mainPC.cpp

# Dependent libraries
DEP_LIBS := $(ROOT_DIR)/lib/$(CONF_NAME)/$(LIB_PREFIX)Crt$(LIB_SUFFIX)

#CCOPT		+= -std=gnu98
CCOPT		+= -DCRT_WORDS_BIGENDIAN -DCOLLADA_DOM_VERSION -DCRT_PLATFORM_INCLUDE=\"CrtLinux.h\" -DCFX_PLATFORM_INCLUDE=\"cfxLinux.h\"

#CCOPT            += -DLINUX -DCFX_PLATFORM_INCLUDE='"cfxLinux.h"' -I/usr/include
#CCOPT            += -DDEFAULT_CG_PLATFORM='"PC-OGL"'

#dom
INCLUDE_DIR	+= $(ROOT_DIR)/../COLLADA_DOM/include
INCLUDE_DIR	+= $(ROOT_DIR)/../COLLADA_DOM/include/$(COLLADA_DOM_VERSION)
#fx
INCLUDE_DIR	+= $(ROOT_DIR)/../COLLADA_FX/include
#rt
INCLUDE_DIR	+= $(ROOT_DIR)/include/$(COLLADA_DOM_VERSION)
INCLUDE_DIR	+= $(ROOT_DIR)/include
#bullet
INCLUDE_DIR	+= $(ROOT_DIR)/../external-libs/bullet/src


EXE_LCOPT	+= -L$(ROOT_DIR)/../COLLADA_FX/lib/$(CONF_NAME)
EXE_LCOPT	+= -L$(ROOT_DIR)/lib/$(CONF_NAME)
EXE_LCOPT	+= -L$(ROOT_DIR)/../external-libs/bullet/lib/$(CONF_NAME)

colladaVersion := $(COLLADA_DOM_VERSION)
colladaVersionNoDots := $(subst .,,$(colladaVersion))
debugSuffix := $(if $(findstring 1,$(RELEASE)),-d)
domLib := libcollada$(colladaVersionNoDots)dom$(debugSuffix).a

LCOPT	+=   -lcollada_Cfx -lcollada_Crt -lcollada_Cfx
LCOPT	+=   $(ROOT_DIR)/../COLLADA_DOM/build/$(PLATFORM_NAME)-$(colladaVersion)$(debugSuffix)/$(domLib)
LCOPT	+=   -lglut -lCg -lCgGL -lGL -lGLU -lm -lpthread
LCOPT	+=   -lcollada_bullet
LCOPT	+=   -lxml2
LCOPT +=   -lpcre -lpcrecpp


#rules
include          $(ROOT_DIR)/build/makerules.txt

