import subprocess
import os
import sys

def main():
    # 確実に存在するパスを定義
    vcvars = r"C:\Program Files (x86)\Microsoft Visual Studio\18\BuildTools\VC\Auxiliary\Build\vcvars32.bat"
    game_dir = r"E:\EVE_Win95改"
    
    if not os.path.exists(vcvars):
        print(f"Error: Visual Studio tools not found at {vcvars}")
        return

    # コンパイルコマンド
    # CMD.exe 経由で vcvars32.bat を実行し、そのセッション内で cl.exe を呼び出す
    cmd = f'"{vcvars}" && cd /d "{game_dir}" && cl.exe /nologo /LD /O2 version.cpp User32.lib Gdi32.lib Kernel32.lib Winmm.lib /link /DEF:version.def /OUT:version.dll'
    
    print(f"Starting build in: {game_dir}")
    print(f"Command: {cmd}")
    
    # 実行
    process = subprocess.run(cmd, shell=True, capture_output=True, text=True, encoding='cp932')
    
    print("\n--- STDOUT ---")
    print(process.stdout)
    print("\n--- STDERR ---")
    print(process.stderr)
    
    if process.returncode == 0:
        print("\n[SUCCESS] version.dll has been created!")
    else:
        print(f"\n[FAILED] Compilation failed with exit code: {process.returncode}")

if __name__ == "__main__":
    main()
