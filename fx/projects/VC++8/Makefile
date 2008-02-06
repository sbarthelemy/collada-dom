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

PROJECT_FILES				+= \
							COLLADA_FX.vcproj  \

CLEAN_DIR					+=  ../../bin \
								../../bin-dbg \
								../../lib \
								../../lib-dbg \
								../../tmp \
								
ifeq ($(PROJECT_CONFIG),)
PROJECT_CONFIG				:= $(BUILD)
endif


include						$(ROOT_DIR)/build/MakeRules

