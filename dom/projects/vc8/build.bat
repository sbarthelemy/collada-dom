@echo off
setlocal
set devenv="C:\Program Files\Microsoft Visual Studio 8\Common7\IDE\devenv"
%devenv% %~dp0dom.sln /build "Release 1.4"
%devenv% %~dp0dom.sln /build "Debug 1.4"
