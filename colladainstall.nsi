; colladainstall.nsi
;
; This script attempts to install an uninstall collada dom/fx/rt package.
!include "MUI.nsh"
!include AddToPath.nsh
!include WriteEnvStr.nsh
!include Sections.nsh

;--------------------------------

Name "COLLADA DOM FX RT Install"
Caption "COLLADA DOM FX RT Install"
;Icon "${EXEDIR}\icons\collada.ico"
OutFile "../Collada_DOM_FX_RT_1.2.0.exe"

Var PROGRAM_NAME
SetCompressor /SOLID lzma

InstallDir "$PROGRAMFILES\COLLADA\COLLADA_DOM"
InstallDirRegKey HKLM "Software\COLLADA_DOM" "Install_Dir"

;CheckBitmap "${EXEDIR}\icons\classic-cross.bmp"

LicenseText "Pease read the following important information before continuing"
LicenseData "scea-shared-source-lic1.0.txt"

;--------------------------------
; Pages
  !insertmacro MUI_PAGE_WELCOME
  !insertmacro MUI_PAGE_LICENSE "scea-shared-source-lic1.0.txt"
  !insertmacro MUI_PAGE_COMPONENTS
  !insertmacro MUI_PAGE_DIRECTORY
  !insertmacro MUI_PAGE_INSTFILES
  # These indented statements modify settings for MUI_PAGE_FINISH
  #  !define MUI_FINISHPAGE_NOAUTOCLOSE
  #  !define MUI_FINISHPAGE_SHOWREADME_CHECKED
  #  !define MUI_FINISHPAGE_SHOWREADME_FUNCTION "LaunchReadme"
  #  !define MUI_FINISHPAGE_SHOWREADME $INSTDIR\readme_e.txt
  #!insertmacro MUI_PAGE_FINISH

;Languages
!insertmacro MUI_LANGUAGE "English"
  
UninstPage uninstConfirm
UninstPage instfiles
AutoCloseWindow false

!macro FOLDER_LIST_RECURSIVE INCLUDE_DIR EXCLUDE_FILES
  !system "FolderList.exe /r $\"${INCLUDE_DIR} $\" $\"${EXCLUDE_FILES}$\""
  !include "FolderList.exe.txt"
!macroend
;--------------------------------
; Sections
Section "" ; empty string makes it hidden, so would starting with -

  StrCpy '$PROGRAM_NAME' "Collada_DOM"

  SetOutPath $INSTDIR
  WriteRegStr HKLM Software\COLLADA_DOM "Install_Dir" "$INSTDIR"
  
  WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\COLLADA_DOM" "DisplayName" "COLLADA_DOM"
  WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\COLLADA_DOM" "UninstallString" '"$INSTDIR\collada-uninst.exe"'
  WriteRegDWORD HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\COLLADA_DOM" "NoModify" 1
  WriteRegDWORD HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\COLLADA_DOM" "NoRepair" 1
  WriteUninstaller "collada-uninst.exe"
 
SectionEnd

Section "Binaries" Sec1
    SetOutPath $INSTDIR\bin 
	File /nonfatal /r bin\*.*  
    SetOutPath $INSTDIR\bin-dbg
	File /nonfatal /r bin-dbg\*.*  
    SetOutPath $INSTDIR\lib 
	File /nonfatal /r lib\*.*  
    SetOutPath $INSTDIR\lib-dbg
	File /nonfatal /r lib-dbg\*.*  
    SetOutPath $INSTDIR\include
	File /nonfatal /r include\*.*  

    SetOutPath $INSTDIR\..\COLLADA_FX\lib 
	File /nonfatal /r ..\COLLADA_FX\lib\*.*  
    SetOutPath $INSTDIR\..\COLLADA_FX\lib-dbg
	File /nonfatal /r ..\COLLADA_FX\lib-dbg\*.*  
    SetOutPath $INSTDIR\..\COLLADA_FX\include
	File /nonfatal /r ..\COLLADA_FX\include\*.*  
	
    SetOutPath $INSTDIR\..\COLLADA_RT\bin 
	File /nonfatal /r ..\COLLADA_RT\bin\*.*  
    SetOutPath $INSTDIR\..\COLLADA_RT\lib 
	File /nonfatal /r ..\COLLADA_RT\lib\*.*  
    SetOutPath $INSTDIR\..\COLLADA_RT\lib-dbg
	File /nonfatal /r ..\COLLADA_RT\lib-dbg\*.*   
    SetOutPath $INSTDIR\..\COLLADA_RT\include
	File /nonfatal /r ..\COLLADA_RT\include\*.*  

    SetOutPath $INSTDIR\..\external-libs\libxml2
	File /nonfatal /r ..\external-libs\libxml2\*.*  
    SetOutPath $INSTDIR\..\external-libs\devil
	File /nonfatal /r ..\external-libs\devil\*.*  

SectionEnd

Section "Everthing" Sec2
	SetOutPath $INSTDIR
	File /r /x *.ncb /x *.suo /x *.user /x *.svn-base /x all-wcprops /x entries /x format *.* 

	SetOutPath $INSTDIR\..\COLLADA_FX
	File /r /x *.ncb /x *.suo /x *.user /x *.svn-base /x all-wcprops /x entries /x format .\..\COLLADA_FX\*.*

	SetOutPath $INSTDIR\..\COLLADA_RT
	File /r /x *.ncb /x *.suo /x *.user /x *.svn-base /x all-wcprops /x entries /x format .\..\COLLADA_RT\*.*

    SetOutPath $INSTDIR\..\external-libs\libxml2
	File /nonfatal /r ..\external-libs\libxml2\*.*  
    SetOutPath $INSTDIR\..\external-libs\devil
	File /nonfatal /r ..\external-libs\devil\*.*  

SectionEnd

Section "Environment Variables" Sec5
  Push "COLLADA_DOM_LOCATION"
  Push "$INSTDIR"
  Call WriteEnvStr

  Push "COLLADA_FX_LOCATION"
  Push "$INSTDIR/../COLLADA_FX"
  Call WriteEnvStr

  Push "COLLADA_RT_LOCATION"
  Push "$INSTDIR/../COLLADA_RT"
  Call WriteEnvStr
  
  Push "COLLADA_EXTERNAL_LIBS_LOCATION"
  Push "$INSTDIR/../external-libs"
  Call WriteEnvStr
 
  Push "PATH"
  Push "$INSTDIR/../COLLADA_RT/bin"
  Call AddToEnvVar

SectionEnd

LangString DESC_Section1 ${LANG_ENGLISH} "Binaries for Collada DOM/FX/RT"
LangString DESC_Section2 ${LANG_ENGLISH} "Binaries and Source for Collada DOM/FX/RT"
LangString DESC_Section5 ${LANG_ENGLISH} "Set Environment Variables for building Collada DOM/FX/RT"

!insertmacro MUI_FUNCTION_DESCRIPTION_BEGIN
  !insertmacro MUI_DESCRIPTION_TEXT ${Sec1} $(DESC_Section1)
  !insertmacro MUI_DESCRIPTION_TEXT ${Sec2} $(DESC_Section2)
  !insertmacro MUI_DESCRIPTION_TEXT ${Sec5} $(DESC_Section5)
!insertmacro MUI_FUNCTION_DESCRIPTION_END

;--------------------------------
; Uninstaller

UninstallText "This will uninstall COLLADA DOM/FX/RT. Click next to continue."
;UninstallIcon "${EXEDIR}\icons\uninstall.ico"

Section "Uninstall"

  ; Remove registry keys
  DeleteRegKey HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\COLLADA_DOM"
  DeleteRegKey HKLM Software\COLLADA_DOM

  Push "$INSTDIR"
  Push ""
  Call un.RmDirsButOne
  Delete "$INSTDIR\*.*"
  RMDir "$INSTDIR"

  Push "$INSTDIR\..\COLLADA_FX"
  Push ""
  Call un.RmDirsButOne
  Delete "$INSTDIR\..\COLLADA_FX\*.*"
  RMDir "$INSTDIR\..\COLLADA_FX"

  Push "$INSTDIR\..\COLLADA_RT"
  Push ""
  Call un.RmDirsButOne
  Delete "$INSTDIR\..\COLLADA_RT\*.*"
  RMDir "$INSTDIR\..\COLLADA_RT"
  
  Push "COLLADA_DOM_LOCATION"
  Push "$INSTDIR"
  Call un.RemoveFromEnvVar

  Push "COLLADA_FX_LOCATION"
  Push "$INSTDIR/../COLLADA_FX"
  Call un.RemoveFromEnvVar

  Push "COLLADA_RT_LOCATION"
  Push "$INSTDIR/../COLLADA_RT"
  Call un.RemoveFromEnvVar

  Push "COLLADA_EXTERNAL_LIBS_LOCATION"
  Push "$INSTDIR/../external-libs"
  Call un.RemoveFromEnvVar
 
  Push "PATH"
  Push "$INSTDIR/../COLLADA_RT/bin"
  Call un.RemoveFromEnvVar
  
SectionEnd

;--------------------------------
; Function
 
Function .onInit
  Call DetectMSVS
  StrCpy '$PROGRAM_NAME' "COLLADA_DOM"

  ReadRegStr $R0 HKLM \
  "Software\Microsoft\Windows\CurrentVersion\Uninstall\COLLADA_DOM" \
  "UninstallString"
  StrCmp $R0 "" done
 
  MessageBox MB_OKCANCEL|MB_ICONEXCLAMATION \
  "COLLADA DOM/FX/RT is already installed. $\n$\nClick `OK` to remove the \
  previous version or `Cancel` to cancel this upgrade." \
  IDOK uninst
  Abort
  
;Run the uninstaller
uninst:
  ClearErrors
  ExecWait '$R0 _?=$INSTDIR' ;Do not copy the uninstaller to a temp file
 
  IfErrors no_remove_uninstaller
    ;You can either use Delete /REBOOTOK in the uninstaller or add some code
    ;here to remove the uninstaller. Use a registry key to check
    ;whether the user has chosen to uninstall. If you are using an uninstaller
    ;components page, make sure all sections are uninstalled.
  no_remove_uninstaller:
  
done:
 
  StrCpy $1 ${Sec1} ; Group 1 - Option 1 is selected by default

FunctionEnd

Function .onSelChange

  !insertmacro StartRadioButtons $1
    !insertmacro RadioButton ${Sec1}
    !insertmacro RadioButton ${Sec2}
    !insertmacro RadioButton ${Sec3}
  !insertmacro EndRadioButtons
	
FunctionEnd


Function un.RmDirsButOne
 Exch $R0 ; exclude dir
 Exch
 Exch $R1 ; route dir
 Push $R2
 Push $R3
 
  FindFirst $R3 $R2 "$R1\*.*"
  IfErrors Exit
 
  Top:
   StrCmp $R2 "." Next
   StrCmp $R2 ".." Next
   StrCmp $R2 $R0 Next
   IfFileExists "$R1\$R2\*.*" 0 Next
    RmDir /r "$R1\$R2"
 
   #Goto Exit ;uncomment this to stop it being recursive
 
   Next:
    ClearErrors
    FindNext $R3 $R2
    IfErrors Exit
   Goto Top
 
  Exit:
  FindClose $R3
 
 Pop $R3
 Pop $R2
 Pop $R1
 Pop $R0
FunctionEnd

Function DetectMSVS
  Push $1
  Push $2
  ReadRegStr $1 HKLM "SOFTWARE\Microsoft\VisualStudio\7.0" "InstallDir"
  StrCmp $1 "" NoVS70 DetectMSVSEnd
NoVS70:
  ReadRegStr $2 HKLM "SOFTWARE\Microsoft\VisualStudio\7.1" "InstallDir"
  StrCmp $2 "" NoVS71 DetectMSVSEnd
NoVS71:
  ReadRegStr $2 HKLM "SOFTWARE\Microsoft\VisualStudio\8.0" "InstallDir"
  StrCmp $2 "" NoVS80 DetectMSVSEnd
NoVS80:
  MessageBox MB_OK "Microsoft Visual Studio not found, Please install Microsoft Visual Studio 7.1 or 8.0 if you want to compile"
  Goto DetectMSVSEnd
DetectMSVSEnd:  
  Pop $2
  Pop $1
FunctionEnd

Function LaunchReadme
  ExecShell "" "$\"$PROGRAMFILES\Windows NT\Accessories\wordpad.exe$\" $INSTDIR\readme_e.txt"
FunctionEnd
