 Copyright 2006 Sony Computer Entertainment Inc.

 Licensed under the SCEA Shared Source License, Version 1.0 (the "License"); you may not use this 
 file except in compliance with the License. You may obtain a copy of the License at:
 http://research.scea.com/scea_shared_source_license.html

 Unless required by applicable law or agreed to in writing, software distributed under the License 
 is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or 
 implied. See the License for the specific language governing permissions and limitations under the 
 License.

*********************
* COLLADA 1.4.1 DOM 1.2
* COLLADA schema version: 1.4.1 and 1.3.1
*********************

Programs Structure:

root:
  makefiles, this readme.txt, relnotes_e.txt, and license files.

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
   
   /export:
     conatins an example that illustrates how to create a document from scratch.
     This example creates a simple textured cube.

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
        default XML IO backend, using the LIBXML2 library

      /STLDatabase:
        default COLLADA Runtime Database derived from daeDatabse

	/stdErrPlugin:
        default Error plugin which prints messages to stdout


*********************
Notes:

- The data are searched relatively to the executable location.

