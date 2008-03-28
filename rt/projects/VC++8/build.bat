@echo off
setlocal
set devenv="C:\Program Files\Microsoft Visual Studio 8\Common7\IDE\devenv"
%devenv% %~dp0..\..\..\dom\projects\vc8\dom.sln /build "Release 1.4" /project "dom-static"
%devenv% %~dp0..\..\..\fx\projects\VC++8\COLLADA_FX.sln /build "Release"
%devenv% %~dp0..\..\external-libs\bullet\project\vc8\libbullet.sln /build "Release"
%devenv% %~dp0COLLADA_RT.sln /build "Release"
