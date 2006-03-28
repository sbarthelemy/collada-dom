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


# target file(s)
ROOT_DIR         = ../../..
EXECUTABLE       = triangulate
OUTPUT_DIR       = $(ROOT_DIR)/samples/bin

# definitions
include         $(ROOT_DIR)/build/makedefs.txt

# files
SUBDIRS		+= $(ROOT_DIR)/src/$(COLLADA_DOM_VERSION)/dom \
                   $(ROOT_DIR)/src/dae \
                   $(ROOT_DIR)/src/modules/STLDatabase \
                   $(ROOT_DIR)/src/modules/LIBXMLPlugin \
                   $(ROOT_DIR)/src/modules/stdErrPlugin

COMMON_DIR	= ../Common

INCLUDE_DIR	+= $(ROOT_DIR)/include $(ROOT_DIR)/include/$(COLLADA_DOM_VERSION) $(COMMON_DIR)/include include
SRC		= src/$(COLLADA_DOM_VERSION)/triangulate.cpp\
		$(COMMON_DIR)/src/CommandLineOptions.cpp

TMP_LIBS	+= dae dom STLDatabase LIBXMLPlugin dae stdErrPlugin

#LIB_PREFIX = lib

LIBRARIES       += -Wl,--start-group $(addsuffix $(LIB_SUFFIX),$(addprefix $(ROOT_DIR)/lib$(OUTDIR_SUFFIX)/$(LIB_PREFIX),$(TMP_LIBS))) -Wl,--end-group -lxml2
#LIBRARIES      += user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib

# rules
include         $(ROOT_DIR)/build/makerules.txt
