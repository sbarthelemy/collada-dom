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

.PHONY:  clean user-clean



# COLLADA DOM base includes 
#
CPU_INCDIRS +=	-I$(COLLADA_DOM_DIR)/include


# Crt Include 
#
CPU_INCDIRS +=	-I../../include
CPU_INCDIRS +=  -I../../include/$(COLLADA_DOM_VERSION)


# CFX include
#
CPU_INCDIRS +=	-I$(PWD)/../COLLADA_FX/include


# To use the right dom version
#
CPU_INCDIRS +=	-I$(COLLADA_DOM_DIR)/include/$(COLLADA_DOM_VERSION)




include $(BUILD_SETTINGS_DIR)/target-mk.mk
include $(BUILD_SETTINGS_DIR)/target-cpu.mk


TARGET += $(EXTRA_TARGET)

all: $(TARGET)

$CLEANFILES := $(strip $(CLEANFILES))
user-clean:
ifneq ($(CLEANFILES),)
	$(RM) $(CLEANFILES)
endif

clean: cpu-clean $(MK_TARGET_CLEAN) $(SUBDIRS_CLEAN) user-clean
	@echo "# removing $(OBJS_DIR)/ if it is empty."
	@$(FIND) . -type d -and \( -path "./$(OBJS_DIR)" -or -path "./$(OBJS_DIR)/*" \) -print \
		| $(SORT) -r | xargs -r rmdir 2>/dev/null | true

