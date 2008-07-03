#!/usr/bin/make
#
# Copyright 2006 Sony Computer Entertainment Inc.
#
# Licensed under the MIT Open Source License, for details please see license.txt or the website
# http://www.opensource.org/licenses/mit-license.php
#

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
INCLUDE_DIR	+= $(ROOT_DIR)/../dom/include
INCLUDE_DIR	+= $(ROOT_DIR)/../dom/include/$(COLLADA_DOM_VERSION)
#fx
INCLUDE_DIR	+= $(ROOT_DIR)/../fx/include
#rt
INCLUDE_DIR	+= $(ROOT_DIR)/include/$(COLLADA_DOM_VERSION)
INCLUDE_DIR	+= $(ROOT_DIR)/include
#bullet
INCLUDE_DIR	+= $(ROOT_DIR)/external-libs/bullet/src


EXE_LCOPT	+= -L$(ROOT_DIR)/../fx/lib/$(CONF_NAME)
EXE_LCOPT	+= -L$(ROOT_DIR)/lib/$(CONF_NAME)
EXE_LCOPT	+= -L$(ROOT_DIR)/external-libs/bullet/lib/$(CONF_NAME)

ifneq ($(RELEASE),1)
debugSuffix := -d
endif

colladaVersion := $(COLLADA_DOM_VERSION)
colladaVersionNoDots := $(subst .,,$(colladaVersion))
domLib := libcollada$(colladaVersionNoDots)dom$(debugSuffix).a

LCOPT	+=   -lcollada_Cfx -lcollada_Crt -lcollada_Cfx
LCOPT	+=   $(ROOT_DIR)/../dom/build/$(PLATFORM_NAME)-$(colladaVersion)$(debugSuffix)/$(domLib)
LCOPT	+=   -lglut -lCg -lCgGL -lGL -lGLU -lm -lpthread
LCOPT	+=   -lcollada_bullet
LCOPT	+=   -lxml2
LCOPT +=   -lpcre -lpcrecpp


#rules
include          $(ROOT_DIR)/build/makerules.txt

