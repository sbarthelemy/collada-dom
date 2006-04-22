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


CPU_PREFIX              = ccache 
CPU_AR                  = $(CPU_PREFIX)ar
CPU_AS                  = $(CPU_PREFIX)as
CPU_CCAS                = $(CPU_PREFIX)gcc
CPU_CC                  = $(CPU_PREFIX)gcc
CPU_CXX                 = $(CPU_PREFIX)g++
CPU_LD                  = $(CPU_PREFIX)ld
CPU_CCLD                = $(CPU_PREFIX)gcc
CPU_CXXLD               = $(CPU_PREFIX)g++
CPU_NM                  = $(CPU_PREFIX)nm
CPU_OBJCOPY             = $(CPU_PREFIX)objcopy
CPU_OBJDUMP             = $(CPU_PREFIX)objdump
CPU_RANLIB              = $(CPU_PREFIX)ranlib
CPU_SIZE                = $(CPU_PREFIX)size
CPU_STRINGS             = $(CPU_PREFIX)strings
CPU_STRIP               = $(CPU_PREFIX)strip

CPU_DBG_FLAGS           ?= -g
CPU_OPTIMIZE_LV         ?= -O2
CPU_CSTDFLAGS           ?= $(CSTDFLAGS)
CPU_CXXSTDFLAGS         ?= $(CXXSTDFLAGS)
CPU_CWARNFLAGS          ?= $(CWARNFLAGS_L2)
CPU_CXXWARNFLAGS        ?= $(CXXWARNFLAGS_L1)
CPU_INCDIRS             ?=
CPU_CPPFLAGS            ?=
CPU_MACHINE_OPTION      ?=

CPU_ASFLAGS             ?= $(ASFLAGS) $(CPU_INCDIRS) $(CPU_CPPFLAGS) -mregnames
CPU_MDFLAGS             ?= -MMD
CPU_LDFLAGS             ?=
CPU_LOADLIBS            ?=
CPU_LDLIBS              ?=
CPU_LDLIBDIR            ?=
CPU_CFLAGS              ?= \
	$(CPU_DBG_FLAGS) \
	$(CPU_OPTIMIZE_LV) \
	$(CPU_CSTDFLAGS) \
	$(CPU_CWARNFLAGS) \
	$(CPU_INCDIRS) \
	$(CPU_CPPFLAGS) \
	$(CPU_MDFLAGS)

CPU_CXXFLAGS            ?= \
	$(CPU_DBG_FLAGS) \
	$(CPU_OPTIMIZE_LV) \
	$(CPU_CXXSTDFLAGS) \
	$(CPU_CXXWARNFLAGS) \
	$(CPU_INCDIRS) \
	$(CPU_CPPFLAGS) \
	$(CPU_MDFLAGS)
