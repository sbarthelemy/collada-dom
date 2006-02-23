 Copyright 2006 Sony Computer Entertainment Inc.

 Licensed under the SCEA Shared Source License, Version 1.0 (the "License"); you may not use this 
 file except in compliance with the License. You may obtain a copy of the License at:
 http://research.scea.com/scea_shared_source_license.html

 Unless required by applicable law or agreed to in writing, software distributed under the License 
 is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or 
 implied. See the License for the specific language governing permissions and limitations under the 
 License.
========================================================================
    CONSOLE APPLICATION : triangulation_conditioner Project Overview
========================================================================

This tool builds and runs on either Windows or Linux and uses the COLLADA API
to read in a COLLADA file and convert any <polygons> into <triangles>.

The output <triangles> will be in the same order as the input.  Each primitive
will contain only one triangle.  This will probably cause the output file to
be slightly larger.

This conditioner will build and run ok with either the 1.3 or 1.4 schema.

Limitations

Polygons with holes are not supported.
Non convex polygons are not supported.
Polygons with degenerate edges may produce zero-area triangles in the output.

Future Improvements

Fixing the above limitations with a better triangulation algorithm.
Optionally converting polygons to trifans.
Optionally creating primitives with more than one triangle to save space.

