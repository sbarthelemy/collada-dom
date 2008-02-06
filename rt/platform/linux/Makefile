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

ROOT_DIR        :=	../..

LIBRARY		:= Crt

OUTPUT_DIR	:= $(ROOT_DIR)/lib

include $(ROOT_DIR)/build/makedefs.txt

#CCOPT		+= -std=gnu98

CCOPT		+= -DLINUX -DCOLLADA_DOM_VERSION -DCRT_PLATFORM_INCLUDE='"CrtLinux.h"' -DCFX_PLATFORM_INCLUDE='"cfxLinux.h"'

SRC 		+= \
		../../src/Crt/CrtAnimation.cpp \
		../../src/Crt/CrtCamera.cpp \
		../../src/Crt/CrtCommonCg.cpp \
		../../src/Crt/CrtCommonGL.cpp \
		../../src/Crt/CrtController.cpp \
		../../src/Crt/CrtData.cpp \
		../../src/Crt/CrtDomLoad.cpp \
		../../src/Crt/CrtGeometry.cpp \
		../../src/Crt/CrtLight.cpp \
		../../src/Crt/CrtMaterial.cpp \
		../../src/Crt/CrtMatrix.cpp \
		../../src/Crt/CrtMorph.cpp \
		../../src/Crt/CrtNode.cpp \
		../../src/Crt/CrtPlatform.cpp \
		../../src/Crt/CrtPhysics.cpp \
		../../src/Crt/CrtRender.cpp \
		../../src/Crt/CrtSkin.cpp \
		../../src/Crt/CrtTargaLoader.cpp \
		../../src/Crt/CrtTexture.cpp \
		../../src/Crt/CrtEffect.cpp \
		../../src/Crt/CrtUtils.cpp \
		../../src/Crt/$(COLLADA_DOM_VERSION)/CrtScene.cpp \
		../../src/Crt/$(COLLADA_DOM_VERSION)/CrtSceneRead.cpp

SRC 	+=	../../src/Crt/CrtLinux.cpp

#rt
INCLUDE_DIR	+= $(ROOT_DIR)/include/$(COLLADA_DOM_VERSION)
INCLUDE_DIR	+= $(ROOT_DIR)/include
#bullet
INCLUDE_DIR	+= $(ROOT_DIR)/external-libs/bullet/src
#dom
INCLUDE_DIR     += $(ROOT_DIR)/../dom/include
INCLUDE_DIR     += $(ROOT_DIR)/../dom/include/$(COLLADA_DOM_VERSION)
#fx
INCLUDE_DIR     += $(ROOT_DIR)/../fx/include/

include $(ROOT_DIR)/build/makerules.txt
