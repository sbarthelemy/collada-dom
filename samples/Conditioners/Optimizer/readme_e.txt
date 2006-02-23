 Copyright 2006 Sony Computer Entertainment Inc.

 Licensed under the SCEA Shared Source License, Version 1.0 (the "License"); you may not use this 
 file except in compliance with the License. You may obtain a copy of the License at:
 http://research.scea.com/scea_shared_source_license.html

 Unless required by applicable law or agreed to in writing, software distributed under the License 
 is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or 
 implied. See the License for the specific language governing permissions and limitations under the 
 License.
========================================================================
    CONSOLE APPLICATION : optimizer
========================================================================

This tool builds and runs on either Windows or Linux and uses the COLLADA API 
to read in COLLADA data and re-order the primitives to take advantage of vertex
caches in the rendering hardware. The input file must be all triangles and 
already be deindexed.  Use the triangulation and deindexer tools on it first.

This is the first version of this tool, the optimization algorithm is 
fairly simplistic and contains an n-squared loop so it may take some time to
process large files.  A file containing 50k triangles in a single mesh takes
about a minute and a half on an 3ghz pentium. IMPORTANT: the debug version 
runs 40x slower, so always use an optimized build.

This will help performance on all hardware that has a vertex cache.

The program will allow you to set the size of the vertex cache on the command line.

The program will only change the order of the primitives and will not change
the size of the output file.

All the optimizations and statistics assume the vertex cache is a FIFO, this seems
to be what most cards use, though support for other cache types could be added.

We assume the cache holds a fixed number of vertices, in real life the number of
vertices the cache can hold is based on their size.  Since COLLADA allows every
primitive tag in a mesh to have a different number of inputs, a file might contain
both small and large sized vertexes.  Future versions of this conditioner will take
this into account but for now you have to tell the tool how many vertices will fit
into the cache.

This conditioner will build and run ok with either the 1.3 or 1.4 schema.


