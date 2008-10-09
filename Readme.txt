PLAYSTATION(R)3 Programmer Tool Runtime Library xxx.xxx
                  Copyright (C) 2007 Sony Computer Entertainment Inc.
                                                 All Rights Reserved.


==============================================================================
Overview of Collada Viewer package	(ColladaPackage.zip)
==============================================================================

<Directory structure of Collada Viewer>

+--dom                      The DOM library for Parsing Collada Documents
|  +--CodeGen
|  +--external-libs
|  +--include
|  +--...
|
+--fx                       The Collada effect loader library for Cg 1.5 shaders
|  +--build
|  +--include
|  +--...
|
+--License_Folder
|  +--other
|  +--license_e.txt
|
+--rt						The Runtime Rendering library that uses OpenGL ES or PSGL
|  +--build
|  +--external-libs
|  +--...
|
+--viewer					The application binary that uses all the libraries above to make a Reference Viewer for Collada documents
|  +-bin            
|     +-samples.zip			Compressed art assets and shaders used by Collada Viewer
|
|  +-make       
|     +-common.mk
|     +-rules.mk
|     +-viewer.mk
|
|
+--Makefile                 Makefile to build Collada Viewer and the necessary libraries
+--Readme.txt				This file



==========================
Requirement	for Linux host
==========================
GNU make version 3.81
PS3SDK toolchain
FW sample framework (built)


============================
Requirement	for Windows host
============================
MinGW (Minimalist GNU for Windows)
MSYS with GNU make version 3.81
PS3SDK toolchain
FW sample framework (built)


=================================================
Building Collada Viewer with MinGW/MSYS	and Linux
=================================================
1) Execute make utility at root level of package by typing 'make'
   viewer.self will be in viewer\build\ps3-1.4 for release build (conf=release, this is the default build)
   viewer.self will be in viewer\build\ps3-1.4-d for debug build (conf=debug)

2) Unzip samples.zip, place its content in viewer\build\ps3-1.4 or viewer\build\ps3-1.4-d

3) Follow the usual procedure documented in $CELL_SDK/1st_read to load viewer.self
   Optionally, use ProDG Target Manager or Debugger to load a specific Collada document by specifying the document as command line argument



===========================
Collada Viewer button usage
===========================

Up	        Navigate the document broswer upward
Down        Navigate the document broswer downward
Cross       Load the document browser selected Collada document
Select      Next camera view
L1          Zoom out, move camera away from the focus point
L2          Zoom in, move camera closer to the focus point
L3          Toggle Browser thumbnail display
R3          Toggle wireframe display

Left analog stick	Move camera and focus point to the up, down, left, right
Right analog stick 	Rotate camera up, down, left right

