 Copyright 2006 Sony Computer Entertainment Inc.

 Licensed under the SCEA Shared Source License, Version 1.0 (the "License"); you may not use this 
 file except in compliance with the License. You may obtain a copy of the License at:
 http://research.scea.com/scea_shared_source_license.html

 Unless required by applicable law or agreed to in writing, software distributed under the License 
 is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or 
 implied. See the License for the specific language governing permissions and limitations under the 
 License.

This directory is where you should put the libraries for libxml2, zlib, and iconv.  This is open source software available from the internet at http://xmlsoft.org/.

These are required for the the COLLADA DOM and dependent programs to be built on win32 platforms. 

A Linux version is NOT included because most Linux systems have libxml2 already installed and in the
system include/library path.  You may want to check your version of libxml2, the code should work with
versions as old as 2.6.10, but some features may not be available if you use an old version.
