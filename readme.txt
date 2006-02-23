 Copyright 2006 Sony Computer Entertainment Inc.

 Licensed under the SCEA Shared Source License, Version 1.0 (the "License"); you may not use this 
 file except in compliance with the License. You may obtain a copy of the License at:
 http://research.scea.com/scea_shared_source_license.html

 Unless required by applicable law or agreed to in writing, software distributed under the License 
 is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or 
 implied. See the License for the specific language governing permissions and limitations under the 
 License.

*********************
* COLLADA DOM 
* COLLADA schema version: 1.4 and 1.3.1
*********************

Programs Structure:

root:
  visual studio 2003 solution, makefiles, this readme.txt, relnotes_e.txt, and license files.

/build:
  makefile definitions

/doc : 
  documentation

/include:
  include directory - contains the top level reference header dae.h

   /dae:
     contains all of the COLLADA object model header and base interface 
     header files.

   /1.3:
   	/dom:
     	  contains all of the generated COLLADA C++ dom object header files for v1.3

   /1.4:
   	/dom:
     	  contains all of the generated COLLADA C++ dom object header files for v1.4

   /modules:
     contains implementation header files for COLLADA reference plug-in
     implementations for the daeDatabase and the backend IO Plug-in

/samples: 
   
   /integration:
     contains an example of integration library which implements the 
     intGeometry class, used by COLLADA viewer sample
   
   /conditioners/Animation:
     conatins an example conditioner that samples animation function curves at regular intervals

   /conditioners/Common:
     common code used by all the sample conditions

   /conditioners/DeIndexer:
     conatins an example condition that deindexes COLLADA mesh data     

   /conditioners/FileName:
     conatins an example condition that converts all image filenames to relative paths     

   /conditioners/Optimizer:
     conatins an example condition that optimizes COLLADA mesh data     

   /conditioners/Triangulation:
     conatins an example condition that triangulates COLLADA mesh data     

/src:

   /dae:
     contains all of the C++ source code for the COLLADA C++ API object 
     model and abstract interface class implementations.

   /1.3:
	/dom:
     	  contains all of the *generated* C++ source code for the COLLADA C++
     	  object definitions.  This code is directly generated from the 
     	  COLLADA v1.3 XML Schema.

   /1.4:
	/dom:
     	  contains all of the *generated* C++ source code for the COLLADA C++
     	  object definitions.  This code is directly generated from the 
     	  COLLADA v1.4 XML Schema.

   /modules:
     contains COLLADA reference implementations of abstract API 
     concepts.

      /LIBXMLPlugin:
        example of an XML IO backend, using the LIBXML2 library

      /STLDatabase:
        example of COLLADA Runtime Database derived from daeDatabse

      /XMLPlugin:
        example of an XML DB backend, using a stand-alone XML parser
   

*********************
Notes:

- The data are searched relatively to the executable location.

