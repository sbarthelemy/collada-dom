#
# Copyright 2006 Sony Computer Entertainment Inc.
#
# Licensed under the MIT Open Source License, for details please see license.txt or the website
# http://www.opensource.org/licenses/mit-license.php
#

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

