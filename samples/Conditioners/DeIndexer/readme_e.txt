 Copyright 2006 Sony Computer Entertainment Inc.

 Licensed under the SCEA Shared Source License, Version 1.0 (the "License"); you may not use this 
 file except in compliance with the License. You may obtain a copy of the License at:
 http://research.scea.com/scea_shared_source_license.html

 Unless required by applicable law or agreed to in writing, software distributed under the License 
 is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or 
 implied. See the License for the specific language governing permissions and limitations under the 
 License.
========================================================================
    CONSOLE APPLICATION : DeIndexer
========================================================================

This tool builds and runs on either Windows or Linux and uses the COLLADA API to
deindex geometry, preparing it to be used with GL vertex arrays.  COLLADA allows
you to have a different index into POSITION, NORMAL, TEXTURE (and other sources)
for each vertex.  Each source can be a different size to save memory.
GL vertex arrays require all the components of a vertex (POSITION, NORMAL...etc) 
to be at the SAME index in their arrays.

This tool reorders the COLLADA data so that when you read it into memory all the
sources and primitive indices will already be in the right order to be used with 
GL vertex arrays. To do this, some data needs to be duplicated.  This tool only 
duplicates data when it absolutely has to, limiting the growth of the file.  For 
example if the data has inputs for POSITION, NORMAL, TEXTURE and the first vertex 
is 1 5 8. POSITION 1, NORMAL 5 and TEXTURE 8 in the input data will be copied to 
POSITION, NORMAL and TEXTURE 0 in the output data.  In the output primitive, the 
indices for this vertex will change to 0, the next unique vertex will use an index 
of 1 and so on. If the same combination of indices is seen again, the old index is 
re-used.  In other words, all vertices that use the indices 1 5 8 will be changed to 
point to index 0 in the output data.  

This program does not change the order of the primitives but does change the
order and number of all the inputs in a <geometry> and related <controller>
tag.  Some files will stay nearly the same size, others will grow considerably.

Names and IDs in XML tags are NOT changed, the output file will have the same 
number of sources and primitives as the input.  Because this tool does not change
the order of the primitives, any vertex cache optimizations that may be in the input
file will be preserved in the output.

I strongly recommend you always keep a backup of your original files.

This conditioner currently only works with the 1.3 schema, when this version of 
deindexer was cut the 1.4 schema and the related skinning standards had not been
ratified.

Limitations

This is only a sample, to avoid it becoming too complicated it has a number of 
limitations on the input format of the COLLADA data.

Only COMMON profile is supported, after deindexing other profiles may fail to work.
Only <triangles> primitives are supported (preprocess with the triangulation tool)
Within a specific <mesh> all <triangles> must have exactly the same inputs.
A <source> may only have one <accessor> (ie: only packed arrays, not striped ones)
A <vertices> inside a <mesh> may only contain a single input that points to a position source.

Note that because this uses the COLLADA API to read the entire file into memory and
write it back out again, the formatting of the output file may not match the
input file.  Tags attributes and parameters may be reordered by the API.





  
