 Copyright 2006 Sony Computer Entertainment Inc.

 Licensed under the SCEA Shared Source License, Version 1.0 (the "License"); you may not use this 
 file except in compliance with the License. You may obtain a copy of the License at:
 http://research.scea.com/scea_shared_source_license.html

 Unless required by applicable law or agreed to in writing, software distributed under the License 
 is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or 
 implied. See the License for the specific language governing permissions and limitations under the 
 License.

We are providing 2 template of integration library generated from the schema.

integrationFull: contains all the collada objects
integrationSimple: doesn't contain the xml "inline" object.

To use an integration library, you don't have to implement all the classes.
You need to pick the objects you need out of Collada and implement only those classes.
Then you need to modify ( and rename ) the main header integrationFull.h or integrationSimple.h
to match the list of class you have implemented in your integration library.
same for the makefile / and or Visual Studio project.

SEE the sample "integration". It is a very simple integration library which only implements
the intGeometry object. 

