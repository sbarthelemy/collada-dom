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

.PHONY : $(SUBDIRS_BUILD) $(SUBDIRS_CLEAN)

$(SUBDIRS_BUILD):
	$(MAKE) -C $(@:%-subdir-build=%)

$(SUBDIRS_CLEAN):
	$(MAKE) -C $(@:%-subdir-clean=%) clean

.PHONY : $(MK_TARGET_BUILD) $(MK_TARGET_CLEAN)

$(MK_TARGET_BUILD):
	$(MAKE) --no-print-directory -f $(@:%-mk-build=%)

$(MK_TARGET_CLEAN):
	$(MAKE) --no-print-directory  -f $(@:%-mk-clean=%) clean

TARGET              +=  $(SUBDIRS_BUILD) $(MK_TARGET_BUILD)

