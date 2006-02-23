 Copyright 2006 Sony Computer Entertainment Inc.

 Licensed under the SCEA Shared Source License, Version 1.0 (the "License"); you may not use this 
 file except in compliance with the License. You may obtain a copy of the License at:
 http://research.scea.com/scea_shared_source_license.html

 Unless required by applicable law or agreed to in writing, software distributed under the License 
 is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or 
 implied. See the License for the specific language governing permissions and limitations under the 
 License.
========================================================================
    CONSOLE APPLICATION : filename_conditioner Project Overview
========================================================================

This tool builds and runs on either Windows or Linux and uses the COLLADA DOM 
to manipulate the URIs in <image> tags.  Many exporters currently output these 
URIs as references to files with absolute paths.  This tool will allow you to
change those URIs.

The tool finds all <image> tags in the input COLLADA data which use a URI with the 
"file:" protocol.  The URI is first stripped to just the base name (everything after 
the last / character).  Then a user-defined prefix is added to this base name.

This can be used to convert URIs that reference files in absolute positions to
URIs that use relative references.

Mainly, this is intended to be a very simplistic shell that you can use as a starting
point for writing new conditioners.

This conditioner will build and run ok with either the 1.3 or 1.4 schema.

Limitations

This is only a sample, it does not do exhaustive or careful processing of URIs.
If your <image> tags contain complex URIs, this tool might corrupt them.

It is possible to give the same filename as input and output but I don't recommend it.
Always keep a copy of the original file.

Note that because this uses the COLLADA DOM to read the entire file into memory and
write it back out again, the formatting of the output file may not match the
input file.  Tags attributes and parameters may be reordered by the DOM.

Ideas for extensions

Future extensions to this conditioner might include checking for the existance of the
image files, better URIs handling, copying image files to a specified directory and 
converting image files to a specific format/size.
