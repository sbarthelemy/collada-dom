 Copyright 2006 Sony Computer Entertainment Inc.

 Licensed under the SCEA Shared Source License, Version 1.0 (the "License"); you may not use this 
 file except in compliance with the License. You may obtain a copy of the License at:
 http://research.scea.com/scea_shared_source_license.html

 Unless required by applicable law or agreed to in writing, software distributed under the License 
 is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or 
 implied. See the License for the specific language governing permissions and limitations under the 
 License.

The external-libs directory tree is here to hold library files that one or more of the build targets
for the COLLADA_DOM depend on.

Right now this contains an empty directory structure for the win32 version of the libxml2, zlib, and iconvlibraries needed for use with projects that use the COLLADA DOM. These libraries must be downloaded and installed yourself since they are not distributed with the COLLADA DOM. Please refer to the release notes for more information.

All the existing win32 projects expect to find libxml2, zlib, and iconv here.  If you want to link with a different version you will need to change the project settings.

Additional libraries for other build targets may be added in the future.
