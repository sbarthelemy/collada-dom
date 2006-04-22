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

ifneq ($(strip $(PU_SRCS) $(PU_TARGET)),)
all:
	@echo -e "\n!!! You must use \"CPU_SRCS\" instead of \"PU_SRCS\" !!!\n"
	@exit 1
endif

#----------------------------------------------------------------------
# CPU targets
#----------------------------------------------------------------------

CPU_C_SRCS          =   $(filter %.c,   $(CPU_SRCS))
CPU_CC_SRCS         =   $(filter %.cc,  $(CPU_SRCS))
CPU_CXX_SRCS        =   $(filter %.cpp, $(CPU_SRCS))
CPU_AS_SRCS         =   $(filter %.s,   $(CPU_SRCS))
CPU_FP_SRCS         =   $(filter %.fp,  $(CPU_SRCS))
CPU_VP_SRCS         =   $(filter %.vp,  $(CPU_SRCS))
CPU_BIN_SRCS        =   $(filter %.bin, $(CPU_SRCS))
CPU_ELF_SRCS        =   $(filter %.elf, $(CPU_SRCS))
CPU_SELF_SRCS       =   $(filter %.self,$(CPU_SRCS))
CPU_AR_SRCS         =   $(filter %.a,   $(CPU_SRCS))

CPU_C_OBJS          =   $(patsubst %, $(OBJS_DIR)/%.cpu.o, $(basename $(CPU_C_SRCS)))
CPU_CC_OBJS         =   $(patsubst %, $(OBJS_DIR)/%.cpu.o, $(basename $(CPU_CC_SRCS)))
CPU_CXX_OBJS        =   $(patsubst %, $(OBJS_DIR)/%.cpu.o, $(basename $(CPU_CXX_SRCS)))
CPU_AS_OBJS         =   $(patsubst %, $(OBJS_DIR)/%.cpu.o, $(basename $(CPU_AS_SRCS)))
CPU_FP_OBJS         =   $(patsubst %, $(OBJS_DIR)/%.fpo.o, $(basename $(CPU_FP_SRCS)))
CPU_VP_OBJS         =   $(patsubst %, $(OBJS_DIR)/%.vpo.o, $(basename $(CPU_VP_SRCS)))
CPU_BIN_OBJS        =   $(patsubst %, $(OBJS_DIR)/%.cpu.o, $(basename $(CPU_BIN_SRCS)))
CPU_ELF_OBJS        =   $(patsubst %, $(OBJS_DIR)/%.cpu.o, $(basename $(CPU_ELF_SRCS)))
CPU_SELF_OBJS       =   $(patsubst %, $(OBJS_DIR)/%.cpu.o, $(basename $(CPU_SELF_SRCS)))
CPU_OBJS            =   \
                        $(CPU_C_OBJS) \
                        $(CPU_CC_OBJS) \
                        $(CPU_CXX_OBJS) \
                        $(CPU_AS_OBJS) \
                        $(CPU_FP_OBJS) \
                        $(CPU_VP_OBJS) \
                        $(CPU_BIN_OBJS) \
                        $(CPU_ELF_OBJS) \
                        $(CPU_SELF_OBJS)

CPU_OBJS_DEPENDS    :=   $(CPU_SRCS)
CPU_OBJS_DEPENDS    :=   $(patsubst %.c,   $(OBJS_DIR)/$(basename %).cpu.o, $(CPU_OBJS_DEPENDS))
CPU_OBJS_DEPENDS    :=   $(patsubst %.cc,  $(OBJS_DIR)/$(basename %).cpu.o, $(CPU_OBJS_DEPENDS))
CPU_OBJS_DEPENDS    :=   $(patsubst %.cpp, $(OBJS_DIR)/$(basename %).cpu.o, $(CPU_OBJS_DEPENDS))
CPU_OBJS_DEPENDS    :=   $(patsubst %.s,   $(OBJS_DIR)/$(basename %).cpu.o, $(CPU_OBJS_DEPENDS))
CPU_OBJS_DEPENDS    :=   $(patsubst %.fp,  $(OBJS_DIR)/$(basename %).fpo.o, $(CPU_OBJS_DEPENDS))
CPU_OBJS_DEPENDS    :=   $(patsubst %.vp,  $(OBJS_DIR)/$(basename %).vpo.o, $(CPU_OBJS_DEPENDS))
CPU_OBJS_DEPENDS    :=   $(patsubst %.bin, $(OBJS_DIR)/$(basename %).cpu.o, $(CPU_OBJS_DEPENDS))
CPU_OBJS_DEPENDS    :=   $(patsubst %.elf, $(OBJS_DIR)/$(basename %).cpu.o, $(CPU_OBJS_DEPENDS))
CPU_OBJS_DEPENDS    :=   $(patsubst %.self,$(OBJS_DIR)/$(basename %).cpu.o, $(CPU_OBJS_DEPENDS))

CPU_AR_OBJS         =   $(patsubst %, $(OBJS_DIR)/%/*.o, $(basename $(CPU_AR_SRCS)))
CPU_AR_DEPENDS      =   $(patsubst %, $(OBJS_DIR)/%/libtmp.a, $(basename $(CPU_AR_SRCS)))

CPU_C_MD_FILES      =   $(patsubst %, $(OBJS_DIR)/%.cpu.d, $(basename $(CPU_C_SRCS)))
CPU_CC_MD_FILES     =   $(patsubst %, $(OBJS_DIR)/%.cpu.d, $(basename $(CPU_CC_SRCS)))
CPU_CXX_MD_FILES    =   $(patsubst %, $(OBJS_DIR)/%.cpu.d, $(basename $(CPU_CXX_SRCS)))
CPU_AS_MD_FILES     =   $(patsubst %, $(OBJS_DIR)/%.cpu.d, $(basename $(CPU_AS_SRCS)))
CPU_MD_FILES        =   \
                        $(CPU_C_MD_FILES) \
                        $(CPU_CC_MD_FILES) \
                        $(CPU_CXX_MD_FILES) \
                        $(CPU_AS_MD_FILES)

ifneq ($(CPU_TARGET),)
CPU_SELF_TARGET     = $(basename $(CPU_TARGET))$(FSELF_SUFFIX)
endif
CPU_CLEAN_OBJS      = $(strip $(CPU_OBJS) $(CPU_MD_FILES) $(CPU_TARGET) $(CPU_SELF_TARGET) $(CPU_LIB_TARGET))

TARGET              +=  $(CPU_TARGET) $(CPU_SELF_TARGET) $(CPU_LIB_TARGET)

#----------------------------------------------------------------------
# check options
#----------------------------------------------------------------------
ifneq ($(strip $(CPU_LOADLIBS)),)
	CPU_LOADLIBS := -Wl,--start-group $(CPU_LOADLIBS) -Wl,--end-group
endif

# -O0 and -Wuninitialized are exclusive
ifeq ($(CPU_OPTIMIZE_LV),-O0)
	WARNFLAGS_UNINITIALIZED =
endif


#----------------------------------------------------------------------
# Build
#----------------------------------------------------------------------
$(CPU_TARGET): $(CPU_DEPENDS) $(CPU_OBJS_DEPENDS) $(CPU_LIBS)
	@mkdir -p $(dir $(@))
	$(CPU_CXXLD) $(CPU_LDFLAGS) $(CPU_LDLIBDIR) $(CPU_OBJS) $(CPU_AR_OBJS) $(CPU_LIBS) $(CPU_LOADLIBS) $(CPU_LDLIBS) -o $@

$(CPU_SELF_TARGET): $(CPU_TARGET)
	@mkdir -p $(dir $(@))
	$(MAKE_FSELF) $< $@

$(CPU_LIB_TARGET): $(CPU_OBJS_DEPENDS) $(CPU_AR_DEPENDS)
	@mkdir -p $(dir $(@))
	$(CPU_AR) r $@ $(CPU_OBJS) $(CPU_AR_OBJS)
	$(CPU_RANLIB) $@

$(CPU_C_OBJS): $(OBJS_DIR)/%.cpu.o: %.c
	@mkdir -p $(dir $(@))
	$(CPU_CC) -c $(CPU_CFLAGS) -o $@ $<

$(CPU_CC_OBJS): $(OBJS_DIR)/%.cpu.o: %.cc
	@mkdir -p $(dir $(@))
	$(CPU_CXX) -c $(CPU_CXXFLAGS) -o $@ $<

$(CPU_CXX_OBJS): $(OBJS_DIR)/%.cpu.o: %.cpp
	@mkdir -p $(dir $(@))
	$(CPU_CXX) -c $(CPU_CXXFLAGS) -o $@ $<

$(CPU_AS_OBJS): $(OBJS_DIR)/%.cpu.o: %.s
	@mkdir -p $(dir $(@))
	$(CPU_CCAS) -c $(CPU_ASFLAGS) -o $@ $<

$(CPU_AR_DEPENDS): $(OBJS_DIR)/%/libtmp.a: %.a
	mkdir -p $(OBJS_DIR)/$*/
	cp $< $(OBJS_DIR)/$*/libtmp.a
	cd $(OBJS_DIR)/$*/ && $(CPU_AR) -x libtmp.a

.PHONY: cpu-clean

cpu-clean:
ifneq ($(CPU_CLEAN_OBJS),)
	$(RM) $(CPU_CLEAN_OBJS)
endif
ifneq ($(strip $(CPU_AR_DEPENDS)),)
	$(RM) -r $(dir $(CPU_AR_DEPENDS))
endif

#----------------------------------------------------------
# include dependency
#----------------------------------------------------------
-include $(CPU_MD_FILES)
