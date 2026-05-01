@echo off
echo ============================================
echo  EVE Burst Error - version.dll Builder
echo ============================================
echo.

if not exist build mkdir build
cd build

echo [1/2] Configuring (x86)...
cmake -A Win32 .. 2>&1
if %ERRORLEVEL% neq 0 (
    echo.
    echo ERROR: CMake configuration failed.
    echo Make sure Visual Studio 2022 is installed with C++ workload.
    pause
    exit /b 1
)

echo.
echo [2/2] Building (Release)...
cmake --build . --config Release 2>&1
if %ERRORLEVEL% neq 0 (
    echo.
    echo ERROR: Build failed. Check errors above.
    pause
    exit /b 1
)

echo.
echo ============================================
echo  BUILD SUCCESSFUL
echo  version.dll is ready in the root folder.
echo ============================================
echo.
pause
