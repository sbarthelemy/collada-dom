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

ROOT_DIR					:=	../..
include						$(ROOT_DIR)/build/MakeDefs

SRCS						=	\
							copyrighter_1.4.cpp			\
							deindexer_1.4.cpp			\
							optimizer_1.4.cpp			\
							triangulate_1.4.cpp		\
							tristripper_1.4.cpp
							
TARGET_LIB_NAME				= libcollada_conditioners
INC_DIRS					+= $(ROOT_DIR)/include


PROJECT_FILES				+= \
							libbullet.vcproj \
							

CLEAN_DIR					+=  $(ROOT_DIR)/lib \
								$(ROOT_DIR)/lib-dbg \
								$(ROOT_DIR)/tmp \
								$(ROOT_DIR)/bin/*.exe \
								$(ROOT_DIR)/bin/*.exp \
								$(ROOT_DIR)/bin/*.pdb \
								$(ROOT_DIR)/bin/*.ilk \
								$(ROOT_DIR)/bin-dbg/*.exe \
								$(ROOT_DIR)/bin-dbg/*.exp \
								$(ROOT_DIR)/bin-dbg/*.pdb \
								$(ROOT_DIR)/bin-dbg/*.ilk \
								
PROJECT_CONFIG				:= $(BUILD)

include						$(ROOT_DIR)/build/MakeRules

