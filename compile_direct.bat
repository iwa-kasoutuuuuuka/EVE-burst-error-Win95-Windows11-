@echo off
setlocal
echo ============================================
echo  EVE Burst Error - version.dll Builder
echo ============================================
echo.

:: Visual Studio のパス候補を探索
set "VS_VARS=C:\Program Files (x86)\Microsoft Visual Studio\18\BuildTools\VC\Auxiliary\Build\vcvars32.bat"
if not exist "%VS_VARS%" set "VS_VARS=C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars32.bat"
if not exist "%VS_VARS%" set "VS_VARS=C:\Program Files (x86)\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars32.bat"
if not exist "%VS_VARS%" set "VS_VARS=C:\Program Files\Microsoft Visual Studio\2022\Professional\VC\Auxiliary\Build\vcvars32.bat"
if not exist "%VS_VARS%" set "VS_VARS=C:\Program Files (x86)\Microsoft Visual Studio\2022\Professional\VC\Auxiliary\Build\vcvars32.bat"

if not exist "%VS_VARS%" (
    echo [ERROR] Visual Studio Build Tools / Native Tools Prompt が見つかりません。
    echo 正しいパスまたは VS 2022 がインストールされているか確認してください。
    pause
    exit /b 1
)

echo [1/2] Loading Visual Studio Environment from:
echo "%VS_VARS%"
call "%VS_VARS%" >nul

echo [2/2] Compiling version.dll...
cd /d "%~dp0"

:: Compile command
cl.exe /nologo /LD /O2 version.cpp User32.lib Gdi32.lib Kernel32.lib Winmm.lib /link /DEF:version.def /OUT:version.dll

if %ERRORLEVEL% equ 0 (
    echo.
    echo --------------------------------------------
    echo  SUCCESS: version.dll has been created!
    echo --------------------------------------------
    echo  You can now launch EVE.EXE
) else (
    echo.
    echo [ERROR] Compilation failed.
    echo Please check the error messages above.
)

echo.
pause
endlocal
