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


ifeq ($(shell uname), Linux)
    EXE_SUFFIX      =
endif


ifeq ($(shell test -f /bin/find && echo 1),1)
	FIND            = /bin/find
else
	FIND            = /usr/bin/find
endif

ifeq ($(shell test -f /bin/sort && echo 1),1)
	SORT            = /bin/sort
else
	SORT            = /usr/bin/sort
endif

CP                  = /bin/cp
RM                  = /bin/rm -f
PERL                = /usr/bin/perl
ECHO                = @echo

OBJS_DIR            ?= objs


#----------------------------------------------------------------------
# default target
#----------------------------------------------------------------------
.PHONY : all

all:

#----------------------------------------------------------------------
# warning flags
#----------------------------------------------------------------------

CSTDFLAGS			= -std=c99
CXXSTDFLAGS			= -std=c++98

WARNFLAGS_UNINITIALIZED		= -Wuninitialized
WARNFLAGS_UNSUPPORTED		= -Wpadded
WARNFLAGS_UNRECOMMENDED		= -Wconversion

# warning flags for c++

# warning: L1, L2 (default), L3 or L4
CXXWARNFLAGS_L1 = \
	-W \
	-Wall

CXXWARNFLAGS_L2 = \
	$(CXXWARNFLAGS_L1) \
	$(WARNFLAGS_UNINITIALIZED) \
	-Wcomment \
	-Wchar-subscripts \
	-Wdeprecated-declarations \
	-Wendif-labels \
	-Wformat=2 \
	-Wformat-extra-args \
	-Wimplicit \
	-Wimport \
	-Winline \
	-Wmissing-braces \
	-Wparentheses \
	-Wpointer-arith \
	-Wredundant-decls \
	-Wreturn-type \
	-Wshadow \
	-Wsign-compare \
	-Wswitch \
	-Wunknown-pragmas \
	-Wunused \
	-Wwrite-strings

CXXWARNFLAGS_L3 = \
	$(CXXWARNFLAGS_L2) \
	-Wswitch-default \
	-Wswitch-enum \
	-Wfloat-equal \
	-Wpacked

CXXWARNFLAGS_L4 = \
	$(CXXWARNFLAGS_L3) \
	-Waggregate-return \
	-Wunreachable-code

# warning flags for C

C_ONLY_WARNFLAGS = \
	-Wmain \
	-Wbad-function-cast \
	-Wmissing-declarations \
	-Wnested-externs \
	-Wstrict-prototypes \
	-Wmissing-prototypes

CWARNFLAGS_L1 = $(CXXWARNFLAGS_L1)
CWARNFLAGS_L2 = $(CXXWARNFLAGS_L2) $(C_ONLY_WARNFLAGS)
CWARNFLAGS_L3 = $(CXXWARNFLAGS_L3)
CWARNFLAGS_L4 = $(CXXWARNFLAGS_L4) -pedantic

ASFLAGS = -xassembler-with-cpp

#----------------------------------------------------------------------
#----------------------------------------------------------------------

SUBDIRS_BUILD	= $(SUBDIRS:%=%-subdir-build)
SUBDIRS_CLEAN	= $(SUBDIRS:%=%-subdir-clean)

MK_TARGET_BUILD		= $(MK_TARGET:%=%-mk-build)
MK_TARGET_CLEAN		= $(MK_TARGET:%=%-mk-clean)


include $(BUILD_SETTINGS_DIR)/makedef-cpu.mk
