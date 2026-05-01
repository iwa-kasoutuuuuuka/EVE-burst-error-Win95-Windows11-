@echo off  
set \" VS_VARS=C:\PROGRA~2\Microsoft Visual "Studio\2019\BuildTools\VC\Auxiliary\Build\vcvars32.bat\  
call \%%VS_VARS%%\  
cd /d \E:\EVE_Win95‰ü\  
cl.exe /nologo /LD /O2 version.cpp User32.lib Gdi32.lib Kernel32.lib Winmm.lib /link /DEF:version.def /OUT:version.dll 
