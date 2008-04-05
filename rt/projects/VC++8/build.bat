@echo off
setlocal
set devenv="C:\Program Files\Microsoft Visual Studio 8\Common7\IDE\devenv"

if /i "%1" == "" goto all
if /i "%1" == "release" goto release
if /i "%1" == "debug" goto debug

:release
%devenv% %~dp0..\..\..\dom\projects\vc8\dom.sln /build "Release 1.4" /project "dom-static"
%devenv% %~dp0..\..\..\fx\projects\VC++8\COLLADA_FX.sln /build "Release"
%devenv% %~dp0..\..\external-libs\bullet\project\vc8\libbullet.sln /build "Release"
%devenv% %~dp0COLLADA_RT.sln /build "Release"
goto end

:debug
%devenv% %~dp0..\..\..\dom\projects\vc8\dom.sln /build "Debug 1.4" /project "dom-static"
%devenv% %~dp0..\..\..\fx\projects\VC++8\COLLADA_FX.sln /build "Debug"
%devenv% %~dp0..\..\external-libs\bullet\project\vc8\libbullet.sln /build "Debug"
%devenv% %~dp0COLLADA_RT.sln /build "Debug"
goto end

:all
%devenv% %~dp0..\..\..\dom\projects\vc8\dom.sln /build "Release 1.4" /project "dom-static"
%devenv% %~dp0..\..\..\fx\projects\VC++8\COLLADA_FX.sln /build "Release"
%devenv% %~dp0..\..\external-libs\bullet\project\vc8\libbullet.sln /build "Release"
%devenv% %~dp0COLLADA_RT.sln /build "Release"
%devenv% %~dp0..\..\..\dom\projects\vc8\dom.sln /build "Debug 1.4" /project "dom-static"
%devenv% %~dp0..\..\..\fx\projects\VC++8\COLLADA_FX.sln /build "Debug"
%devenv% %~dp0..\..\external-libs\bullet\project\vc8\libbullet.sln /build "Debug"
%devenv% %~dp0COLLADA_RT.sln /build "Debug"
goto end

:end
