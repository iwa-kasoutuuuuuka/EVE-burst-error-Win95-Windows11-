Set objShell = CreateObject("WScript.Shell")
' Visual Studio 2022 (v18) の正しいパスを指定
vcvars = "C:\Program Files (x86)\Microsoft Visual Studio\18\BuildTools\VC\Auxiliary\Build\vcvars32.bat"
gameDir = "E:\EVE_Win95改"
source = "version.cpp"
output = "version.dll"
defFile = "version.def"

' コマンドの構築（二重引用符のパース問題を物理的に解決）
' CMD /C ""path to vcvars" && cd /d "path to game" && cl.exe ..."
command = "cmd /c "" """ & vcvars & """ && cd /d """ & gameDir & """ && cl.exe /nologo /LD /O2 " & source & " User32.lib Gdi32.lib Kernel32.lib Winmm.lib /link /DEF:" & defFile & " /OUT:" & output & " "" "

WScript.Echo "Processing build command for: " & gameDir
' 1 = Normal Window, True = Wait for completion
ret = objShell.Run(command, 1, True)

If ret = 0 Then
    WScript.Echo "[OK] SUCCESS: version.dll created."
Else
    WScript.Echo "[ERROR] FAILED with error code: " & ret
End If
