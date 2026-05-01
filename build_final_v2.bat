@echo off
setlocal
echo ============================================
echo  EVE Burst Error - Final Build v2
echo ============================================
echo.

:: 確実に存在する vcvars32.bat のパスを指定
set "VCVARS=C:\Program Files (x86)\Microsoft Visual Studio\18\BuildTools\VC\Auxiliary\Build\vcvars32.bat"
set "GAME_DIR=E:\EVE_Win95改"

if not exist "%VCVARS%" (
    echo [ERROR] Visual Studio vcvars32.bat not found at:
    echo "%VCVARS%"
    pause
    exit /b 1
)

:: 環境をロードしてコンパイル
call "%VCVARS%" >nul
cd /d "%GAME_DIR%"

echo [1/1] Running cl.exe to compile version.dll...
cl.exe /nologo /LD /O2 version.cpp User32.lib Gdi32.lib Kernel32.lib Winmm.lib /link /DEF:version.def /OUT:version.dll

if %ERRORLEVEL% equ 0 (
    echo.
    echo --------------------------------------------
    echo  SUCCESS: version.dll created!
    echo --------------------------------------------
) else (
    echo.
    echo [ERROR] Compilation failed with code %ERRORLEVEL%.
)

pause
endlocal
