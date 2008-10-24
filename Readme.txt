PLAYSTATION(R)3 Collada Viewer
                  Copyright (C) 2007 Sony Computer Entertainment Inc.
                                                 All Rights Reserved.

==============================================================================
Content of Collada Viewer 
==============================================================================

+--dom                      The DOM library for Parsing Collada Documents
|  +--CodeGen
|  +--external-libs         Open source libraries used by DOM
|  +--include
|  +--make
|  +--...
|
+--fx                       The Collada effect loader library for Cg shaders
|  +--build
|  +--include
|  +--make
|  +--...
|
+--License_Folder           Licenses for open source software included in Collada Viewer
|  +--other
|  +--license_e.txt
|
+--rt						The Runtime Rendering library that uses OpenGL ES or PSGL
|  +--build
|  +--external-libs         Open source libraries used by rt module
|  +--include
|  +--make
|  +--...
|
+--viewer					
|  +-bin                    The application binary that uses all software libraries above to make a Collada document viewer
|     +-samples.zip			Compressed art assets and shaders used by Collada Viewer
|
|  +-make       
|     +-common.mk
|     +-rules.mk
|     +-viewer.mk
|
|  +-projects
|     +-VC8-PS3             Visual Studio 2005 project files and platform-specific source code for PS3 Collada Viewer
|     +-VC8-Win             Visual Studio 2005 project files and platform-specific source code for Windows native Collada Viewer
|     +-VC9-PS3             Visual Studio 2008 project files and platform-specific source code for PS3 Collada Viewer
|     +-VC9-Win             Visual Studio 2008 project files and platform-specific source code for Windows native Collada Viewer
|
+--Makefile                 Makefile (for Linux and MSYS) to build Collada Viewer and the necessary libraries
+--Readme.txt				This file



===========
Requirement
===========
[Linux]
GNU make version 3.81
PS3 SDK toolchain
FW sample framework (built)


[Windows host/MSYS]
MinGW (Minimalist GNU for Windows)
MSYS with GNU make version 3.81
PS3 SDK toolchain
FW sample framework (prebuilt)


[Windows host/Visual Studio]
Visual Studio 2005 or Visual Studio 2008
PS3 SDK toolchain
ProDG Visual Studio integration
FW sample framework (prebuilt)


[Windows native]
Visual Studio 2005 or Visual Studio 2008
Cg 2.0 Toolkit


================================
Build and run PS3 Collada Viewer
================================

[Linux]
[Windows host/MSYS]

1) Execute make utility at root level of package by typing 'make'
   viewer.self will be in viewer\bin for release build (conf=release, this is the default build)
   viewer-d.self will be in viewer\bin for debug build (conf=debug)
2) Unzip samples.zip, extract its content to viewer\bin\
3) Follow the usual procedure documented in $CELL_SDK/1st_read to load viewer.self or viewer-d.self
   Optionally, use ProDG Target Manager or Debugger to load a specific Collada document by specifying the document as command line argument


[Windows host/Visual Studio]

Project files for Visual C++ 8 (VS 2005) and Visual C++ 9 (VS 2008) are both provided. If you are using Visual C++ 9,
substitute "vc9" for "vc8" for the following instructions.
1) Open Visual Studio Solution at \viewer\projects\vc8-PS3\viewer.sln
2) Select "PS3 debug" or "PS3 release" configuration to build PS3 target
3) Unzip samples.zip, extract its content to viewer\bin\
4) Use ProDG Target Manager or Debugger to load viewer.ppu.self (release) or viewer-d.ppu.self in \viewer\bin
   Optionally, specify a Collada document (cage.dae) as command line argument when loading viewer executable


===========================================
Build and run Windows native Collada Viewer
===========================================
Project files for Visual C++ 8 (VS 2005) and Visual C++ 9 (VS 2008) are both provided. If you are using Visual C++ 9,
substitute "vc9" for "vc8" for the following instructions.

1) Open Visual Studio Solution at \viewer\projects\vc8-Win\viewer.sln
2) Select "Debug" or "Release" configuration to build Windows executable
3) viewer.exe (release) or viewer-d.exe(debug) will be in \viewer\bin
4) Unzip samples.zip, extract its content to \viewer\bin\
5) Open up a DOS Shell window, change directory to \viewer\bin, type "viewer.exe duck.dae" to view Collada document "duck.dae"



===========================
Collada Viewer button usage
===========================
[PS3]

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


[Windows native]

Keybroad:		  
Tab			Next camera
M			Increase key press response by a factor of 25%
N			Decrease key press response by a factor of 25%
Q			Toggle Wireframe
K			Show nodes hiearchy with lines
L			Toggle Lighting mode
P			Toggle animation
F1			Toggle full screen

W			Move camera closer to the focus point = zoom in
S			Move camera away from the focus point = zoom out
A			Move camera and focus point to the left
D			Move camera and focus point to the right
Space		Move camera and focus point to the up
X			Move camera and focus point to the down
F			Toggle culling face in loop with GL_Front, None, GL_Back

Mouse:
Wheel Up			Move camera closer to the focus point = zoom in
Wheel Down			Move camera away from the focus point = zoom outfm	x
Left Click Move 	Rotate camera up, down, left right
Right Click Move	Move camera and focus point to the up, down, left, right
Middle Click		Next camera



============
Known issues
============

- When rendering mushroom.dae, PSGL warning generated in TTY output: "Texture 0 bound to unit 0(GL_TEXTURE_2D) is incomplete" 
  This happens in VC8/PS3 debug build only
  
- For PS3 debug build, linker warning "L0019: symbol '__sys_process_param' multiply defined" is generated.
  Note:  This is necessary to override the main PPU thread stack size specified by SDK framework code, in order to avoid
  stack overflow while unloading DAE documents with large number of nodes.
