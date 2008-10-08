PLAYSTATION(R)3 Programmer Tool Runtime Library xxx.xxx
Copyright (C) 2006 Sony Computer Entertainment Inc.
All Rights Reserved.

-------------------------- COLLADA Package --------------------------

* Description:
The Collada Package contain two big zip files.
Collada ps3sdk Release.zip 	~24MB

ColladaPackage.zip contains the source of Collada Dom/FX/RT/Viewer.
Collada Dom is the dom library for xml parsing of Collada Documents.
Collada FX is the Collada effect loader library for Cg 1.5 shaders.
Collada RT is the Runtime Rendering library that use OpenGL ES or PSGL.
Collada Viewer is the executable application that use all these 
libraries above to make a Reference Viewer for Collada documents.
ColladaPackage.zip contain all the Licenses in License_Folder.

samples.zip contains the Collada Sample documents and their 
resource files like texture and shaders.



* What are the Requirements:
Requirements For PS3 target in windows host:
Visual Studio 2005
PS3SDK toolchain
ProDG Visual Studio integration
FW sample framework builded

Requirements For PS3 target in linux host:
make version 3.81
PS3SDK toolchain
FW sample framework builded

Requirements for Win32 target:
Visual Studio 2005
Cg 2.0 ToolKit



* How to Build:
Build instructions for PS3 target in windows host:
Visual Studio Solution at \viewer\projects\vc8-PS3\viewer.sln
open viewer.sln with Visual Studio
Build solution viewer.sln
executable will be in \viewer\bin
viewer.ppu.self for release mode

viewer-d.ppu.self for debug mode

Build: instructions for Win32 target:
Visual Studio Solution at \viewer\projects\vc8-Win\viewer.sln
open viewer.sln with Visual Studio
Build solution viewer.sln
executable will be in \viewer\bin
viewer.exe for release mode

viewer-d.exe for debug mode

Build: instructions for PS3 target in linux host:
change directory to the root of COLLADA Package
make
viewer.self will be in viewer\build\ps3-1.4



* How to Run:
you can find cube.dae or other collada content in samples.zip
Please unzip them into \viewer\bin
run instruction for PS3 target:
Load "viewer.ppu.self cube.dae" using ProDG Target Manager or Debugger

run instruction for Win32 target:
Load "viewer.exe cube.dae" using commandline inteface in window

run instruction for PS3 target build using make3.81:
Load "viewer.ppu.self cube.dae" using ProDG Target Manager or Debugger


* How to Using the viewer
Using the viewer in PS3:
Control pad
Select			next camera
L3			Toggle Browser
R3			Toggle wireframe
Cross			Load the browser selected content
Up			Navigate the Broswer upward
Down			Navigate the Broswer downward
L2			move camera closer to the focus point = zoom in
L1			move camera away from the focus point = zoom out

Using the viewer in Win32:
Keybroad:
Tab			next camera
M			speed up navigation 1.25%
N			slow down navigation by 0.75%
Q			Toggle Wireframe
K			show nodes hiearchy with lines
L			Toggle Lighting mode
P			pause animation
F1			Toggle full screen
Up 			rotate camera upward
Down 			rotate camera downward
Left			rotate camera left
Right			rotate camera right
W			move camera closer to the focus point = zoom in
S			move camera away from the focus point = zoom out
A			move camera and focus point to the left
D			move camera and focus point to the right
Space			move camera and focus point to the up
X			move camera and focus point to the down
F			Toggle colling face in loop with GL_Front, None, GL_Back
Mouse:
Wheel Up		move camera closer to the focus point = zoom in
Wheel Down		move camera away from the focus point = zoom out
Left Click Move 	rotate camera up, down, left right
Right Click Move	move camera and focus point to the up, down, left, right
Middle Click		next camera











