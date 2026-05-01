import subprocess
import os

def main():
    # Visual Studio 2022 (v18) BuildTools のパスを定義
    vcvars_path = r"C:\Program Files (x86)\Microsoft Visual Studio\18\BuildTools\VC\Auxiliary\Build\vcvars32.bat"
    game_dir = r"E:\EVE_Win95改"
    
    if not os.path.exists(vcvars_path):
        print(f"[ERROR] vcvars32.bat not found: {vcvars_path}")
        return

    # コマンドの構築（Python の subprocess はリスト形式を使用することで引用符問題を回避可能）
    # CMD /C を使用して vcvars をロードし、同じセッションで cl.exe を呼び出す
    cmd = f'"{vcvars_path}" && cd /d "{game_dir}" && cl.exe /nologo /LD /O2 version.cpp User32.lib Gdi32.lib Kernel32.lib Winmm.lib /link /DEF:version.def /OUT:version.dll'
    
    print(f"Building in {game_dir}")
    print(f"Command: {cmd}")
    
    # 実行（shell=True で CMD 経由、encoding='cp932' で日本語 Windows 互換）
    res = subprocess.run(cmd, shell=True, capture_output=True, text=True, encoding='cp932')
    
    print("--- OUTPUT ---")
    print(res.stdout)
    if res.stderr:
        print("--- ERRORS ---")
        print(res.stderr)
    
    if res.returncode == 0:
        print("\n[SUCCESS] version.dll has been created!")
    else:
        print(f"\n[FAILED] Return code: {res.returncode}")

if __name__ == "__main__":
    main()
