# EVE Burst Error Windows 11 Porting Project: Technical Report

本ドキュメントは、Windows 95 版『EVE Burst Error』を現代の Windows 11 環境で動作させ、かつ PS2 版の高品質アセット（MP4/MP3）をネイティブに統合するための互換レイヤー（Wrapper）に関する技術資料である。

---

## 1. システムアーキテクチャ

本プロジェクトでは、オリジナルプログラム `EVE.EXE` を一切変更せず、OS 側のシステム DLL に成り代わる「Proxy DLL」方式を採用した。

### 1.1. 三重プロキシ構造
ゲームの起動経路およびメディア再生経路を完全に掌握するため、一つのバイナリを 3 つの名前で配置する「三重プロキシ」を展開している。
- **`version.dll`**: ゲームが依存するバージョン管理 API。OS の初期ロード時に読み込まれる。
- **`winmm.dll`**: MCI（Media Control Interface）を司る。動画・音声再生の心臓部。
- **`mmsystem.dll`**: Legacy なマルチメディア API。winmm 以前の古い呼び出しを捕捉。

### 1.2. エクスポートの完全性 (197 Functions)
`version.dll` 自体の 17 官能に加え、`winmm.dll` が持つ 180 個の全エントリポイントをプロキシ化（Forwarding）している。これにより、「エントリポイントが見つかりません」エラーを物理的に排除した。

---

## 2. コアフックエンジン：高度な IAT フライホイール

独自の IAT（Import Address Table）フックエンジンを `version.cpp` に実装している。

### 2.1. 堅牢なスキャンロジック
- **大文字小文字の完全無視**: Win95 時代のプログラムは DLL 名を混在（kernel32.dll, KERNEL32, DLL 等）させていることが多いため、`_stricmp` を用いたケースインセンシティブなマッチングを行う。
- **マルチ DLL マッチング**: 同じ関数名（例: `mciSendStringA`）が複数の DLL（winmm/mmsystem）に存在する場合、そのすべてを同時に乗っ取る。

### 2.2. フック対象 API
- **`CreateFileA`**: AVI/WAV へのアクセスを検知し、現代の MP4/MP3 へリダイレクト。
- **`ChangeDisplaySettingsA`**: 古い 256 色/16bit モードへの切り替え要求を無視し、Win11 上でのクラッシュを防止。
- **`GetDeviceCaps`**: ゲーム側に「現在は 16bit カラーである」と嘘の報告をし、色数チェックを回避。

---

## 3. CD-ROM 完全エミュレーション (Environment Spoofing)

レトロゲーム最大の難関である CD-ROM チェックを、API レベルの「環境偽装（Spoofing）」で突破している。

- **`GetDriveTypeA`**: あらゆるドライブ（あるいは NULL）の問い合わせに対し、常に `DRIVE_CDROM` を返答。
- **`GetVolumeInformationA`**: CD のボリュームラベルが期待される際、"EVE_WIN" というラベルを偽装して返答。
- **`GetLogicalDriveStringsA`**: ドライブ `D:\` が存在するかのような偽の一覧を生成。
- **`GetDiskFreeSpaceA`**: CD-ROM 特有の容量（~600MB）を報告し、HDD インストール環境であることを隠蔽。
- **絶対パスの引き込み**: `D:\SYS.DAT` などの CD への絶対パスアクセスを、動的にローカル（`E:\EVE_Win95改`）へ書き換えて `CreateFileA` に渡す。

---

## 4. アセット・リダイレクト・パイプライン

### 4.1. マッピング定義 (`eve_mapping.ini`)
`EVE.EXE` が要求する AVI ファイル名と、PS2 から抽出した MP4 ファイルの対応表を外部ファイル化。
- `OP.AVI=MEDIA\KOJIROU\file_000934.mp4`
- `ED.AVI=MEDIA\MARINA\file_001783.mp4`

### 4.2. MCI コマンドインターセプト
`mciSendStringA` に渡されるコマンド文字列をリアルタイム解析。
- **ファイル名置換**: `OP.AVI` をフルパスの MP4 名に書き換え。
- **タイプ偽装**: `type AVIVideo` を `type MPEGVideo` に書き換えることで、Windows 11 の標準デコーダが MP4 を再生できるように誘導。

---

## 5. ビルド & メンテナンス・システム

大規模なプロキシ DLL を安全に保守するため、2 つの Python スクリプトによる自動化を行っている。

- **`generate_pragmas.py`**: OS の `winmm.dll` からエクスポートリストを動的に抽出し、180 個の `#pragma comment(linker, ...)` 転送宣言を `version.cpp` に自動埋め込み。
- **`smart_compile.py`**: MSVC（Build Tools）の環境変数を自動解決し、DLL を 1 行でコンパイル・配置する。

---

## 6. 使用ツール・依存関係
- **コンパイラ**: MSVC (x86 32bit binary)
- **ライブラリ**: User32.lib, Gdi32.lib, Kernel32.lib, Winmm.lib
- **アセット作成**: 
    - `vgmstream`: PS2 ADX -> MP3
    - `FFmpeg`: PS2 PSS -> MP4 (H.264/AAC)

---

## 7. 結論
本システムにより、オリジナルバイナリを変更することなく、最新の DirectX/OS 環境下でレトロゲームの Native 動作と現代的な高画質・高音質化を同時に実現した。この手法は他の Win95/98 時代の名作移植に対しても、極めて高い汎用性を持つ。
