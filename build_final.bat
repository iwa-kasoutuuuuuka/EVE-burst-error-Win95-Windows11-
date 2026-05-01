@echo off
rem Simple build script for EVE Burst Error version.dll
rem Targets Visual Studio 2019 BuildTools (x86)

call "C:\Program Files (x86)\Microsoft Visual Studio\2019\BuildTools\VC\Auxiliary\Build\vcvars32.bat"
if %ERRORLEVEL% neq 0 (
    echo [ERROR] Failed to load Visual Studio environment.
    exit /b 1
)

cd /d "E:\EVE_Win95改"
cl.exe /nologo /LD /O2 version.cpp User32.lib Gdi32.lib Kernel32.lib Winmm.lib /link /DEF:version.def /OUT:version.dll

if %ERRORLEVEL% equ 0 (
    echo [SUCCESS] version.dll has been created.
) else (
    echo [ERROR] Compilation failed.
)
