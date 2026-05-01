#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <mmsystem.h>
#include <cstdio>
#include <cstring>
#include <cctype>
#include <map>
#include <string>
#include <vector>

// ============================================================================
// Export Forwarding (197 functions)
// ============================================================================
#if defined(_MSC_VER)
// --- VERSION.DLL FORWARDS ---
#pragma comment(linker, "/export:GetFileVersionInfoA=C:\\\\Windows\\\\System32\\\\version.GetFileVersionInfoA")
#pragma comment(linker, "/export:GetFileVersionInfoByHandle=C:\\\\Windows\\\\System32\\\\version.GetFileVersionInfoByHandle")
#pragma comment(linker, "/export:GetFileVersionInfoExA=C:\\\\Windows\\\\System32\\\\version.GetFileVersionInfoExA")
#pragma comment(linker, "/export:GetFileVersionInfoExW=C:\\\\Windows\\\\System32\\\\version.GetFileVersionInfoExW")
#pragma comment(linker, "/export:GetFileVersionInfoSizeA=C:\\\\Windows\\\\System32\\\\version.GetFileVersionInfoSizeA")
#pragma comment(linker, "/export:GetFileVersionInfoSizeExA=C:\\\\Windows\\\\System32\\\\version.GetFileVersionInfoSizeExA")
#pragma comment(linker, "/export:GetFileVersionInfoSizeExW=C:\\\\Windows\\\\System32\\\\version.GetFileVersionInfoSizeExW")
#pragma comment(linker, "/export:GetFileVersionInfoSizeW=C:\\\\Windows\\\\System32\\\\version.GetFileVersionInfoSizeW")
#pragma comment(linker, "/export:GetFileVersionInfoW=C:\\\\Windows\\\\System32\\\\version.GetFileVersionInfoW")
#pragma comment(linker, "/export:VerFindFileA=C:\\\\Windows\\\\System32\\\\version.VerFindFileA")
#pragma comment(linker, "/export:VerFindFileW=C:\\\\Windows\\\\System32\\\\version.VerFindFileW")
#pragma comment(linker, "/export:VerInstallFileA=C:\\\\Windows\\\\System32\\\\version.VerInstallFileA")
#pragma comment(linker, "/export:VerInstallFileW=C:\\\\Windows\\\\System32\\\\version.VerInstallFileW")
#pragma comment(linker, "/export:VerLanguageNameA=C:\\\\Windows\\\\System32\\\\version.VerLanguageNameA")
#pragma comment(linker, "/export:VerLanguageNameW=C:\\\\Windows\\\\System32\\\\version.VerLanguageNameW")
#pragma comment(linker, "/export:VerQueryValueA=C:\\\\Windows\\\\System32\\\\version.VerQueryValueA")
#pragma comment(linker, "/export:VerQueryValueW=C:\\\\Windows\\\\System32\\\\version.VerQueryValueW")

// Proxy targets (filled by generate_pragmas.py)
// === EXPORTED WINMM FUNCTIONS ===
#pragma comment(linker, "/export:CloseDriver=C:\\\\Windows\\\\System32\\\\winmm.CloseDriver")
#pragma comment(linker, "/export:DefDriverProc=C:\\\\Windows\\\\System32\\\\winmm.DefDriverProc")
#pragma comment(linker, "/export:DriverCallback=C:\\\\Windows\\\\System32\\\\winmm.DriverCallback")
#pragma comment(linker, "/export:DrvGetModuleHandle=C:\\\\Windows\\\\System32\\\\winmm.DrvGetModuleHandle")
#pragma comment(linker, "/export:GetDriverModuleHandle=C:\\\\Windows\\\\System32\\\\winmm.GetDriverModuleHandle")
#pragma comment(linker, "/export:OpenDriver=C:\\\\Windows\\\\System32\\\\winmm.OpenDriver")
#pragma comment(linker, "/export:PlaySound=C:\\\\Windows\\\\System32\\\\winmm.PlaySound")
#pragma comment(linker, "/export:PlaySoundA=C:\\\\Windows\\\\System32\\\\winmm.PlaySoundA")
#pragma comment(linker, "/export:PlaySoundW=C:\\\\Windows\\\\System32\\\\winmm.PlaySoundW")
#pragma comment(linker, "/export:SendDriverMessage=C:\\\\Windows\\\\System32\\\\winmm.SendDriverMessage")
#pragma comment(linker, "/export:WOWAppExit=C:\\\\Windows\\\\System32\\\\winmm.WOWAppExit")
#pragma comment(linker, "/export:auxGetDevCapsA=C:\\\\Windows\\\\System32\\\\winmm.auxGetDevCapsA")
#pragma comment(linker, "/export:auxGetDevCapsW=C:\\\\Windows\\\\System32\\\\winmm.auxGetDevCapsW")
#pragma comment(linker, "/export:auxGetNumDevs=C:\\\\Windows\\\\System32\\\\winmm.auxGetNumDevs")
#pragma comment(linker, "/export:auxGetVolume=C:\\\\Windows\\\\System32\\\\winmm.auxGetVolume")
#pragma comment(linker, "/export:auxOutMessage=C:\\\\Windows\\\\System32\\\\winmm.auxOutMessage")
#pragma comment(linker, "/export:auxSetVolume=C:\\\\Windows\\\\System32\\\\winmm.auxSetVolume")
#pragma comment(linker, "/export:joyConfigChanged=C:\\\\Windows\\\\System32\\\\winmm.joyConfigChanged")
#pragma comment(linker, "/export:joyGetDevCapsA=C:\\\\Windows\\\\System32\\\\winmm.joyGetDevCapsA")
#pragma comment(linker, "/export:joyGetDevCapsW=C:\\\\Windows\\\\System32\\\\winmm.joyGetDevCapsW")
#pragma comment(linker, "/export:joyGetNumDevs=C:\\\\Windows\\\\System32\\\\winmm.joyGetNumDevs")
#pragma comment(linker, "/export:joyGetPos=C:\\\\Windows\\\\System32\\\\winmm.joyGetPos")
#pragma comment(linker, "/export:joyGetPosEx=C:\\\\Windows\\\\System32\\\\winmm.joyGetPosEx")
#pragma comment(linker, "/export:joyGetThreshold=C:\\\\Windows\\\\System32\\\\winmm.joyGetThreshold")
#pragma comment(linker, "/export:joyReleaseCapture=C:\\\\Windows\\\\System32\\\\winmm.joyReleaseCapture")
#pragma comment(linker, "/export:joySetCapture=C:\\\\Windows\\\\System32\\\\winmm.joySetCapture")
#pragma comment(linker, "/export:joySetThreshold=C:\\\\Windows\\\\System32\\\\winmm.joySetThreshold")
#pragma comment(linker, "/export:mciDriverNotify=C:\\\\Windows\\\\System32\\\\winmm.mciDriverNotify")
#pragma comment(linker, "/export:mciDriverYield=C:\\\\Windows\\\\System32\\\\winmm.mciDriverYield")
#pragma comment(linker, "/export:mciExecute=C:\\\\Windows\\\\System32\\\\winmm.mciExecute")
#pragma comment(linker, "/export:mciFreeCommandResource=C:\\\\Windows\\\\System32\\\\winmm.mciFreeCommandResource")
#pragma comment(linker, "/export:mciGetCreatorTask=C:\\\\Windows\\\\System32\\\\winmm.mciGetCreatorTask")
#pragma comment(linker, "/export:mciGetDeviceIDA=C:\\\\Windows\\\\System32\\\\winmm.mciGetDeviceIDA")
#pragma comment(linker, "/export:mciGetDeviceIDFromElementIDA=C:\\\\Windows\\\\System32\\\\winmm.mciGetDeviceIDFromElementIDA")
#pragma comment(linker, "/export:mciGetDeviceIDFromElementIDW=C:\\\\Windows\\\\System32\\\\winmm.mciGetDeviceIDFromElementIDW")
#pragma comment(linker, "/export:mciGetDeviceIDW=C:\\\\Windows\\\\System32\\\\winmm.mciGetDeviceIDW")
#pragma comment(linker, "/export:mciGetDriverData=C:\\\\Windows\\\\System32\\\\winmm.mciGetDriverData")
#pragma comment(linker, "/export:mciGetErrorStringA=C:\\\\Windows\\\\System32\\\\winmm.mciGetErrorStringA")
#pragma comment(linker, "/export:mciGetErrorStringW=C:\\\\Windows\\\\System32\\\\winmm.mciGetErrorStringW")
#pragma comment(linker, "/export:mciGetYieldProc=C:\\\\Windows\\\\System32\\\\winmm.mciGetYieldProc")
#pragma comment(linker, "/export:mciLoadCommandResource=C:\\\\Windows\\\\System32\\\\winmm.mciLoadCommandResource")
#pragma comment(linker, "/export:mciSendCommandA=C:\\\\Windows\\\\System32\\\\winmm.mciSendCommandA")
#pragma comment(linker, "/export:mciSendCommandW=C:\\\\Windows\\\\System32\\\\winmm.mciSendCommandW")
#pragma comment(linker, "/export:mciSendStringW=C:\\\\Windows\\\\System32\\\\winmm.mciSendStringW")
#pragma comment(linker, "/export:mciSetDriverData=C:\\\\Windows\\\\System32\\\\winmm.mciSetDriverData")
#pragma comment(linker, "/export:mciSetYieldProc=C:\\\\Windows\\\\System32\\\\winmm.mciSetYieldProc")
#pragma comment(linker, "/export:midiConnect=C:\\\\Windows\\\\System32\\\\winmm.midiConnect")
#pragma comment(linker, "/export:midiDisconnect=C:\\\\Windows\\\\System32\\\\winmm.midiDisconnect")
#pragma comment(linker, "/export:midiInAddBuffer=C:\\\\Windows\\\\System32\\\\winmm.midiInAddBuffer")
#pragma comment(linker, "/export:midiInClose=C:\\\\Windows\\\\System32\\\\winmm.midiInClose")
#pragma comment(linker, "/export:midiInGetDevCapsA=C:\\\\Windows\\\\System32\\\\winmm.midiInGetDevCapsA")
#pragma comment(linker, "/export:midiInGetDevCapsW=C:\\\\Windows\\\\System32\\\\winmm.midiInGetDevCapsW")
#pragma comment(linker, "/export:midiInGetErrorTextA=C:\\\\Windows\\\\System32\\\\winmm.midiInGetErrorTextA")
#pragma comment(linker, "/export:midiInGetErrorTextW=C:\\\\Windows\\\\System32\\\\winmm.midiInGetErrorTextW")
#pragma comment(linker, "/export:midiInGetID=C:\\\\Windows\\\\System32\\\\winmm.midiInGetID")
#pragma comment(linker, "/export:midiInGetNumDevs=C:\\\\Windows\\\\System32\\\\winmm.midiInGetNumDevs")
#pragma comment(linker, "/export:midiInMessage=C:\\\\Windows\\\\System32\\\\winmm.midiInMessage")
#pragma comment(linker, "/export:midiInOpen=C:\\\\Windows\\\\System32\\\\winmm.midiInOpen")
#pragma comment(linker, "/export:midiInPrepareHeader=C:\\\\Windows\\\\System32\\\\winmm.midiInPrepareHeader")
#pragma comment(linker, "/export:midiInReset=C:\\\\Windows\\\\System32\\\\winmm.midiInReset")
#pragma comment(linker, "/export:midiInStart=C:\\\\Windows\\\\System32\\\\winmm.midiInStart")
#pragma comment(linker, "/export:midiInStop=C:\\\\Windows\\\\System32\\\\winmm.midiInStop")
#pragma comment(linker, "/export:midiInUnprepareHeader=C:\\\\Windows\\\\System32\\\\winmm.midiInUnprepareHeader")
#pragma comment(linker, "/export:midiOutCacheDrumPatches=C:\\\\Windows\\\\System32\\\\winmm.midiOutCacheDrumPatches")
#pragma comment(linker, "/export:midiOutCachePatches=C:\\\\Windows\\\\System32\\\\winmm.midiOutCachePatches")
#pragma comment(linker, "/export:midiOutClose=C:\\\\Windows\\\\System32\\\\winmm.midiOutClose")
#pragma comment(linker, "/export:midiOutGetDevCapsA=C:\\\\Windows\\\\System32\\\\winmm.midiOutGetDevCapsA")
#pragma comment(linker, "/export:midiOutGetDevCapsW=C:\\\\Windows\\\\System32\\\\winmm.midiOutGetDevCapsW")
#pragma comment(linker, "/export:midiOutGetErrorTextA=C:\\\\Windows\\\\System32\\\\winmm.midiOutGetErrorTextA")
#pragma comment(linker, "/export:midiOutGetErrorTextW=C:\\\\Windows\\\\System32\\\\winmm.midiOutGetErrorTextW")
#pragma comment(linker, "/export:midiOutGetID=C:\\\\Windows\\\\System32\\\\winmm.midiOutGetID")
#pragma comment(linker, "/export:midiOutGetNumDevs=C:\\\\Windows\\\\System32\\\\winmm.midiOutGetNumDevs")
#pragma comment(linker, "/export:midiOutGetVolume=C:\\\\Windows\\\\System32\\\\winmm.midiOutGetVolume")
#pragma comment(linker, "/export:midiOutLongMsg=C:\\\\Windows\\\\System32\\\\winmm.midiOutLongMsg")
#pragma comment(linker, "/export:midiOutMessage=C:\\\\Windows\\\\System32\\\\winmm.midiOutMessage")
#pragma comment(linker, "/export:midiOutOpen=C:\\\\Windows\\\\System32\\\\winmm.midiOutOpen")
#pragma comment(linker, "/export:midiOutPrepareHeader=C:\\\\Windows\\\\System32\\\\winmm.midiOutPrepareHeader")
#pragma comment(linker, "/export:midiOutReset=C:\\\\Windows\\\\System32\\\\winmm.midiOutReset")
#pragma comment(linker, "/export:midiOutSetVolume=C:\\\\Windows\\\\System32\\\\winmm.midiOutSetVolume")
#pragma comment(linker, "/export:midiOutShortMsg=C:\\\\Windows\\\\System32\\\\winmm.midiOutShortMsg")
#pragma comment(linker, "/export:midiOutUnprepareHeader=C:\\\\Windows\\\\System32\\\\winmm.midiOutUnprepareHeader")
#pragma comment(linker, "/export:midiStreamClose=C:\\\\Windows\\\\System32\\\\winmm.midiStreamClose")
#pragma comment(linker, "/export:midiStreamOpen=C:\\\\Windows\\\\System32\\\\winmm.midiStreamOpen")
#pragma comment(linker, "/export:midiStreamOut=C:\\\\Windows\\\\System32\\\\winmm.midiStreamOut")
#pragma comment(linker, "/export:midiStreamPause=C:\\\\Windows\\\\System32\\\\winmm.midiStreamPause")
#pragma comment(linker, "/export:midiStreamPosition=C:\\\\Windows\\\\System32\\\\winmm.midiStreamPosition")
#pragma comment(linker, "/export:midiStreamProperty=C:\\\\Windows\\\\System32\\\\winmm.midiStreamProperty")
#pragma comment(linker, "/export:midiStreamRestart=C:\\\\Windows\\\\System32\\\\winmm.midiStreamRestart")
#pragma comment(linker, "/export:midiStreamStop=C:\\\\Windows\\\\System32\\\\winmm.midiStreamStop")
#pragma comment(linker, "/export:mixerClose=C:\\\\Windows\\\\System32\\\\winmm.mixerClose")
#pragma comment(linker, "/export:mixerGetControlDetailsA=C:\\\\Windows\\\\System32\\\\winmm.mixerGetControlDetailsA")
#pragma comment(linker, "/export:mixerGetControlDetailsW=C:\\\\Windows\\\\System32\\\\winmm.mixerGetControlDetailsW")
#pragma comment(linker, "/export:mixerGetDevCapsA=C:\\\\Windows\\\\System32\\\\winmm.mixerGetDevCapsA")
#pragma comment(linker, "/export:mixerGetDevCapsW=C:\\\\Windows\\\\System32\\\\winmm.mixerGetDevCapsW")
#pragma comment(linker, "/export:mixerGetID=C:\\\\Windows\\\\System32\\\\winmm.mixerGetID")
#pragma comment(linker, "/export:mixerGetLineControlsA=C:\\\\Windows\\\\System32\\\\winmm.mixerGetLineControlsA")
#pragma comment(linker, "/export:mixerGetLineControlsW=C:\\\\Windows\\\\System32\\\\winmm.mixerGetLineControlsW")
#pragma comment(linker, "/export:mixerGetLineInfoA=C:\\\\Windows\\\\System32\\\\winmm.mixerGetLineInfoA")
#pragma comment(linker, "/export:mixerGetLineInfoW=C:\\\\Windows\\\\System32\\\\winmm.mixerGetLineInfoW")
#pragma comment(linker, "/export:mixerGetNumDevs=C:\\\\Windows\\\\System32\\\\winmm.mixerGetNumDevs")
#pragma comment(linker, "/export:mixerMessage=C:\\\\Windows\\\\System32\\\\winmm.mixerMessage")
#pragma comment(linker, "/export:mixerOpen=C:\\\\Windows\\\\System32\\\\winmm.mixerOpen")
#pragma comment(linker, "/export:mixerSetControlDetails=C:\\\\Windows\\\\System32\\\\winmm.mixerSetControlDetails")
#pragma comment(linker, "/export:mmDrvInstall=C:\\\\Windows\\\\System32\\\\winmm.mmDrvInstall")
#pragma comment(linker, "/export:mmGetCurrentTask=C:\\\\Windows\\\\System32\\\\winmm.mmGetCurrentTask")
#pragma comment(linker, "/export:mmTaskBlock=C:\\\\Windows\\\\System32\\\\winmm.mmTaskBlock")
#pragma comment(linker, "/export:mmTaskCreate=C:\\\\Windows\\\\System32\\\\winmm.mmTaskCreate")
#pragma comment(linker, "/export:mmTaskSignal=C:\\\\Windows\\\\System32\\\\winmm.mmTaskSignal")
#pragma comment(linker, "/export:mmTaskYield=C:\\\\Windows\\\\System32\\\\winmm.mmTaskYield")
#pragma comment(linker, "/export:mmioAdvance=C:\\\\Windows\\\\System32\\\\winmm.mmioAdvance")
#pragma comment(linker, "/export:mmioAscend=C:\\\\Windows\\\\System32\\\\winmm.mmioAscend")
#pragma comment(linker, "/export:mmioClose=C:\\\\Windows\\\\System32\\\\winmm.mmioClose")
#pragma comment(linker, "/export:mmioCreateChunk=C:\\\\Windows\\\\System32\\\\winmm.mmioCreateChunk")
#pragma comment(linker, "/export:mmioDescend=C:\\\\Windows\\\\System32\\\\winmm.mmioDescend")
#pragma comment(linker, "/export:mmioFlush=C:\\\\Windows\\\\System32\\\\winmm.mmioFlush")
#pragma comment(linker, "/export:mmioGetInfo=C:\\\\Windows\\\\System32\\\\winmm.mmioGetInfo")
#pragma comment(linker, "/export:mmioInstallIOProcA=C:\\\\Windows\\\\System32\\\\winmm.mmioInstallIOProcA")
#pragma comment(linker, "/export:mmioInstallIOProcW=C:\\\\Windows\\\\System32\\\\winmm.mmioInstallIOProcW")
#pragma comment(linker, "/export:mmioOpenA=C:\\\\Windows\\\\System32\\\\winmm.mmioOpenA")
#pragma comment(linker, "/export:mmioOpenW=C:\\\\Windows\\\\System32\\\\winmm.mmioOpenW")
#pragma comment(linker, "/export:mmioRead=C:\\\\Windows\\\\System32\\\\winmm.mmioRead")
#pragma comment(linker, "/export:mmioRenameA=C:\\\\Windows\\\\System32\\\\winmm.mmioRenameA")
#pragma comment(linker, "/export:mmioRenameW=C:\\\\Windows\\\\System32\\\\winmm.mmioRenameW")
#pragma comment(linker, "/export:mmioSeek=C:\\\\Windows\\\\System32\\\\winmm.mmioSeek")
#pragma comment(linker, "/export:mmioSendMessage=C:\\\\Windows\\\\System32\\\\winmm.mmioSendMessage")
#pragma comment(linker, "/export:mmioSetBuffer=C:\\\\Windows\\\\System32\\\\winmm.mmioSetBuffer")
#pragma comment(linker, "/export:mmioSetInfo=C:\\\\Windows\\\\System32\\\\winmm.mmioSetInfo")
#pragma comment(linker, "/export:mmioStringToFOURCCA=C:\\\\Windows\\\\System32\\\\winmm.mmioStringToFOURCCA")
#pragma comment(linker, "/export:mmioStringToFOURCCW=C:\\\\Windows\\\\System32\\\\winmm.mmioStringToFOURCCW")
#pragma comment(linker, "/export:mmioWrite=C:\\\\Windows\\\\System32\\\\winmm.mmioWrite")
#pragma comment(linker, "/export:mmsystemGetVersion=C:\\\\Windows\\\\System32\\\\winmm.mmsystemGetVersion")
#pragma comment(linker, "/export:sndPlaySoundA=C:\\\\Windows\\\\System32\\\\winmm.sndPlaySoundA")
#pragma comment(linker, "/export:sndPlaySoundW=C:\\\\Windows\\\\System32\\\\winmm.sndPlaySoundW")
#pragma comment(linker, "/export:timeBeginPeriod=C:\\\\Windows\\\\System32\\\\winmm.timeBeginPeriod")
#pragma comment(linker, "/export:timeEndPeriod=C:\\\\Windows\\\\System32\\\\winmm.timeEndPeriod")
#pragma comment(linker, "/export:timeGetDevCaps=C:\\\\Windows\\\\System32\\\\winmm.timeGetDevCaps")
#pragma comment(linker, "/export:timeGetSystemTime=C:\\\\Windows\\\\System32\\\\winmm.timeGetSystemTime")
#pragma comment(linker, "/export:timeGetTime=C:\\\\Windows\\\\System32\\\\winmm.timeGetTime")
#pragma comment(linker, "/export:timeKillEvent=C:\\\\Windows\\\\System32\\\\winmm.timeKillEvent")
#pragma comment(linker, "/export:timeSetEvent=C:\\\\Windows\\\\System32\\\\winmm.timeSetEvent")
#pragma comment(linker, "/export:waveInAddBuffer=C:\\\\Windows\\\\System32\\\\winmm.waveInAddBuffer")
#pragma comment(linker, "/export:waveInClose=C:\\\\Windows\\\\System32\\\\winmm.waveInClose")
#pragma comment(linker, "/export:waveInGetDevCapsA=C:\\\\Windows\\\\System32\\\\winmm.waveInGetDevCapsA")
#pragma comment(linker, "/export:waveInGetDevCapsW=C:\\\\Windows\\\\System32\\\\winmm.waveInGetDevCapsW")
#pragma comment(linker, "/export:waveInGetErrorTextA=C:\\\\Windows\\\\System32\\\\winmm.waveInGetErrorTextA")
#pragma comment(linker, "/export:waveInGetErrorTextW=C:\\\\Windows\\\\System32\\\\winmm.waveInGetErrorTextW")
#pragma comment(linker, "/export:waveInGetID=C:\\\\Windows\\\\System32\\\\winmm.waveInGetID")
#pragma comment(linker, "/export:waveInGetNumDevs=C:\\\\Windows\\\\System32\\\\winmm.waveInGetNumDevs")
#pragma comment(linker, "/export:waveInGetPosition=C:\\\\Windows\\\\System32\\\\winmm.waveInGetPosition")
#pragma comment(linker, "/export:waveInMessage=C:\\\\Windows\\\\System32\\\\winmm.waveInMessage")
#pragma comment(linker, "/export:waveInOpen=C:\\\\Windows\\\\System32\\\\winmm.waveInOpen")
#pragma comment(linker, "/export:waveInPrepareHeader=C:\\\\Windows\\\\System32\\\\winmm.waveInPrepareHeader")
#pragma comment(linker, "/export:waveInReset=C:\\\\Windows\\\\System32\\\\winmm.waveInReset")
#pragma comment(linker, "/export:waveInStart=C:\\\\Windows\\\\System32\\\\winmm.waveInStart")
#pragma comment(linker, "/export:waveInStop=C:\\\\Windows\\\\System32\\\\winmm.waveInStop")
#pragma comment(linker, "/export:waveInUnprepareHeader=C:\\\\Windows\\\\System32\\\\winmm.waveInUnprepareHeader")
#pragma comment(linker, "/export:waveOutBreakLoop=C:\\\\Windows\\\\System32\\\\winmm.waveOutBreakLoop")
#pragma comment(linker, "/export:waveOutClose=C:\\\\Windows\\\\System32\\\\winmm.waveOutClose")
#pragma comment(linker, "/export:waveOutGetDevCapsA=C:\\\\Windows\\\\System32\\\\winmm.waveOutGetDevCapsA")
#pragma comment(linker, "/export:waveOutGetDevCapsW=C:\\\\Windows\\\\System32\\\\winmm.waveOutGetDevCapsW")
#pragma comment(linker, "/export:waveOutGetErrorTextA=C:\\\\Windows\\\\System32\\\\winmm.waveOutGetErrorTextA")
#pragma comment(linker, "/export:waveOutGetErrorTextW=C:\\\\Windows\\\\System32\\\\winmm.waveOutGetErrorTextW")
#pragma comment(linker, "/export:waveOutGetID=C:\\\\Windows\\\\System32\\\\winmm.waveOutGetID")
#pragma comment(linker, "/export:waveOutGetNumDevs=C:\\\\Windows\\\\System32\\\\winmm.waveOutGetNumDevs")
#pragma comment(linker, "/export:waveOutGetPitch=C:\\\\Windows\\\\System32\\\\winmm.waveOutGetPitch")
#pragma comment(linker, "/export:waveOutGetPlaybackRate=C:\\\\Windows\\\\System32\\\\winmm.waveOutGetPlaybackRate")
#pragma comment(linker, "/export:waveOutGetPosition=C:\\\\Windows\\\\System32\\\\winmm.waveOutGetPosition")
#pragma comment(linker, "/export:waveOutGetVolume=C:\\\\Windows\\\\System32\\\\winmm.waveOutGetVolume")
#pragma comment(linker, "/export:waveOutMessage=C:\\\\Windows\\\\System32\\\\winmm.waveOutMessage")
#pragma comment(linker, "/export:waveOutOpen=C:\\\\Windows\\\\System32\\\\winmm.waveOutOpen")
#pragma comment(linker, "/export:waveOutPause=C:\\\\Windows\\\\System32\\\\winmm.waveOutPause")
#pragma comment(linker, "/export:waveOutPrepareHeader=C:\\\\Windows\\\\System32\\\\winmm.waveOutPrepareHeader")
#pragma comment(linker, "/export:waveOutReset=C:\\\\Windows\\\\System32\\\\winmm.waveOutReset")
#pragma comment(linker, "/export:waveOutRestart=C:\\\\Windows\\\\System32\\\\winmm.waveOutRestart")
#pragma comment(linker, "/export:waveOutSetPitch=C:\\\\Windows\\\\System32\\\\winmm.waveOutSetPitch")
#pragma comment(linker, "/export:waveOutSetPlaybackRate=C:\\\\Windows\\\\System32\\\\winmm.waveOutSetPlaybackRate")
#pragma comment(linker, "/export:waveOutSetVolume=C:\\\\Windows\\\\System32\\\\winmm.waveOutSetVolume")
#pragma comment(linker, "/export:waveOutUnprepareHeader=C:\\\\Windows\\\\System32\\\\winmm.waveOutUnprepareHeader")
#pragma comment(linker, "/export:waveOutWrite=C:\\\\Windows\\\\System32\\\\winmm.waveOutWrite")

#endif

// ============================================================================
// Globals & Typedefs
// ============================================================================
static FILE* g_logFile = nullptr;
static char g_gamePath[MAX_PATH] = {0};
static std::map<std::string, std::string> g_mapping;
static bool g_initialized = false;

typedef HANDLE (WINAPI* PFN_CreateFileA)(LPCSTR, DWORD, DWORD, LPSECURITY_ATTRIBUTES, DWORD, DWORD, HANDLE);
typedef UINT   (WINAPI* PFN_GetDriveTypeA)(LPCSTR);
typedef int    (WINAPI* PFN_GetDeviceCaps)(HDC, int);
typedef LONG   (WINAPI* PFN_ChangeDisplaySettingsA)(DEVMODEA*, DWORD);
typedef MCIERROR (WINAPI* PFN_mciSendStringA)(LPCSTR, LPSTR, UINT, HWND);
typedef BOOL   (WINAPI* PFN_GetVolumeInformationA)(LPCSTR, LPSTR, DWORD, LPDWORD, LPDWORD, LPDWORD, LPSTR, DWORD);
typedef DWORD  (WINAPI* PFN_GetLogicalDriveStringsA)(DWORD, LPSTR);
typedef DWORD  (WINAPI* PFN_GetFileAttributesA)(LPCSTR);
typedef HANDLE (WINAPI* PFN_FindFirstFileA)(LPCSTR, LPWIN32_FIND_DATAA);
typedef BOOL   (WINAPI* PFN_GetDiskFreeSpaceA)(LPCSTR, LPDWORD, LPDWORD, LPDWORD, LPDWORD);

static PFN_CreateFileA             g_origCreateFileA = nullptr;
static PFN_GetDriveTypeA           g_origGetDriveTypeA = nullptr;
static PFN_GetDeviceCaps           g_origGetDeviceCaps = nullptr;
static PFN_ChangeDisplaySettingsA  g_origChangeDisplaySettingsA = nullptr;
static PFN_mciSendStringA          g_origMciSendStringA = nullptr;
static PFN_GetVolumeInformationA   g_origGetVolumeInformationA = nullptr;
static PFN_GetLogicalDriveStringsA g_origGetLogicalDriveStringsA = nullptr;
static PFN_GetFileAttributesA      g_origGetFileAttributesA = nullptr;
static PFN_FindFirstFileA          g_origFindFirstFileA = nullptr;
static PFN_GetDiskFreeSpaceA       g_origGetDiskFreeSpaceA = nullptr;

// ============================================================================
// Logging & Utilities
// ============================================================================
static void Log(const char* fmt, ...) {
    if (!g_logFile) return;
    SYSTEMTIME st;
    GetLocalTime(&st);
    fprintf(g_logFile, "[%02d:%02d:%02d.%03d] ", st.wHour, st.wMinute, st.wSecond, st.wMilliseconds);
    va_list args;
    va_start(args, fmt);
    vfprintf(g_logFile, fmt, args);
    va_end(args);
    fprintf(g_logFile, "\n");
    fflush(g_logFile);
}

static std::string ToUpper(const std::string& s) {
    std::string res = s;
    for (char& c : res) c = toupper((unsigned char)c);
    return res;
}

static bool StrEndsWithI(const char* str, const char* suffix) {
    if (!str || !suffix) return false;
    size_t sLen = strlen(str);
    size_t xLen = strlen(suffix);
    if (xLen > sLen) return false;
    return _strnicmp(str + sLen - xLen, suffix, xLen) == 0;
}

// ============================================================================
// Internal Hook Implementations
// ============================================================================
static HANDLE WINAPI Hook_CreateFileA(LPCSTR lpFileName, DWORD dwAccess, DWORD dwShare, LPSECURITY_ATTRIBUTES lpSA, DWORD dwCreation, DWORD dwFlags, HANDLE hTemplate) {
    if (lpFileName) {
        const char* lastSlash = strrchr(lpFileName, '\\');
        std::string filename = lastSlash ? lastSlash + 1 : lpFileName;
        std::string upperFn = ToUpper(filename);

        auto it = g_mapping.find(upperFn);
        if (it != g_mapping.end()) {
            char redirected[MAX_PATH];
            _snprintf(redirected, MAX_PATH, "%s\\%s", g_gamePath, it->second.c_str());
            Log("CreateFileA MAPPED: '%s' -> '%s'", lpFileName, redirected);
            return g_origCreateFileA(redirected, dwAccess, dwShare, lpSA, dwCreation, dwFlags, hTemplate);
        }

        // CD-ROM Data redirection (Absolute paths)
        if (strlen(lpFileName) >= 3 && lpFileName[1] == ':' && lpFileName[2] == '\\') {
            char redirected[MAX_PATH];
            _snprintf(redirected, MAX_PATH, "%s\\%s", g_gamePath, filename.c_str());
            Log("CreateFileA REDIRECT: '%s' -> '%s'", lpFileName, redirected);
            return g_origCreateFileA(redirected, dwAccess, dwShare, lpSA, dwCreation, dwFlags, hTemplate);
        }
    }
    return g_origCreateFileA(lpFileName, dwAccess, dwShare, lpSA, dwCreation, dwFlags, hTemplate);
}

static UINT WINAPI Hook_GetDriveTypeA(LPCSTR lpRootPathName) {
    Log("GetDriveTypeA(%s) -> Returning DRIVE_CDROM", lpRootPathName ? lpRootPathName : "NULL");
    return DRIVE_CDROM;
}

static BOOL WINAPI Hook_GetVolumeInformationA(LPCSTR lpRoot, LPSTR lpVolName, DWORD nVolSize, LPDWORD lpSerial, LPDWORD lpMaxLen, LPDWORD lpFlags, LPSTR lpFSName, DWORD nFSSize) {
    Log("GetVolumeInformationA(%s) spoofing...", lpRoot ? lpRoot : "NULL");
    if (lpVolName && nVolSize > 0) strncpy(lpVolName, "EVE_WIN", nVolSize);
    if (lpSerial) *lpSerial = 0x12345678;
    if (lpMaxLen) *lpMaxLen = 255;
    if (lpFlags) *lpFlags = FS_CASE_SENSITIVE | FS_CASE_IS_PRESERVED;
    if (lpFSName && nFSSize > 0) strncpy(lpFSName, "CDFS", nFSSize);
    return TRUE;
}

static DWORD WINAPI Hook_GetLogicalDriveStringsA(DWORD nBufferLength, LPSTR lpBuffer) {
    Log("GetLogicalDriveStringsA spoofing...");
    if (lpBuffer && nBufferLength >= 4) {
        memcpy(lpBuffer, "D:\\\0", 4);
        return 4;
    }
    return 4;
}

static DWORD WINAPI Hook_GetFileAttributesA(LPCSTR lpFileName) {
    if (lpFileName && strlen(lpFileName) >= 3 && lpFileName[1] == ':' && lpFileName[2] == '\\') {
        const char* lastSlash = strrchr(lpFileName, '\\');
        char redirected[MAX_PATH];
        _snprintf(redirected, MAX_PATH, "%s\\%s", g_gamePath, lastSlash ? lastSlash + 1 : lpFileName);
        Log("GetFileAttributesA REDIRECT: '%s' -> '%s'", lpFileName, redirected);
        return g_origGetFileAttributesA(redirected);
    }
    return g_origGetFileAttributesA(lpFileName);
}

static HANDLE WINAPI Hook_FindFirstFileA(LPCSTR lpFileName, LPWIN32_FIND_DATAA lpFindFileData) {
    if (lpFileName && strlen(lpFileName) >= 3 && lpFileName[1] == ':' && lpFileName[2] == '\\') {
        const char* lastSlash = strrchr(lpFileName, '\\');
        char redirected[MAX_PATH];
        _snprintf(redirected, MAX_PATH, "%s\\%s", g_gamePath, lastSlash ? lastSlash + 1 : lpFileName);
        Log("FindFirstFileA REDIRECT: '%s' -> '%s'", lpFileName, redirected);
        return g_origFindFirstFileA(redirected, lpFindFileData);
    }
    return g_origFindFirstFileA(lpFileName, lpFindFileData);
}

static BOOL WINAPI Hook_GetDiskFreeSpaceA(LPCSTR lpRoot, LPDWORD lpSectPerClust, LPDWORD lpBytesPerSect, LPDWORD lpFreeClust, LPDWORD lpTotalClust) {
    Log("GetDiskFreeSpaceA(%s) spoofing...", lpRoot ? lpRoot : "NULL");
    if (lpSectPerClust) *lpSectPerClust = 1;
    if (lpBytesPerSect) *lpBytesPerSect = 2048;
    if (lpFreeClust) *lpFreeClust = 0;
    if (lpTotalClust) *lpTotalClust = 300000; // ~600MB
    return TRUE;
}

static int WINAPI Hook_GetDeviceCaps(HDC hdc, int index) {
    int result = g_origGetDeviceCaps(hdc, index);
    if (index == BITSPIXEL) return 16;
    if (index == PLANES) return 1;
    return result;
}

static LONG WINAPI Hook_ChangeDisplaySettingsA(DEVMODEA* lpDevMode, DWORD dwFlags) {
    if (lpDevMode) return DISP_CHANGE_SUCCESSFUL;
    return g_origChangeDisplaySettingsA(lpDevMode, dwFlags);
}

static MCIERROR WINAPI Internal_mciSendStringA(LPCSTR lpstrCommand, LPSTR lpstrReturnString, UINT uReturnLength, HWND hwndCallback) {
    if (!lpstrCommand) return g_origMciSendStringA(lpstrCommand, lpstrReturnString, uReturnLength, hwndCallback);
    std::string cmd = lpstrCommand;
    std::string upperCmd = ToUpper(cmd);
    bool modified = false;
    for (const auto& pair : g_mapping) {
        size_t pos = upperCmd.find(pair.first);
        if (pos != std::string::npos) {
            char fullMappedPath[MAX_PATH];
            _snprintf(fullMappedPath, MAX_PATH, "%s\\%s", g_gamePath, pair.second.c_str());
            cmd.replace(pos, pair.first.length(), fullMappedPath);
            upperCmd = ToUpper(cmd); 
            modified = true;
            break;
        }
    }
    if (modified) {
        size_t typePos = upperCmd.find("TYPE AVIVIDEO");
        if (typePos != std::string::npos) cmd.replace(typePos, 13, "type MPEGVideo");
        size_t wavePos = upperCmd.find("TYPE WAVEAUDIO");
        if (wavePos != std::string::npos) cmd.replace(wavePos, 14, "type MPEGVideo");
        Log("mciSendStringA INTERCEPTED: [%s] -> [%s]", lpstrCommand, cmd.c_str());
        return g_origMciSendStringA(cmd.c_str(), lpstrReturnString, uReturnLength, hwndCallback);
    }
    return g_origMciSendStringA(lpstrCommand, lpstrReturnString, uReturnLength, hwndCallback);
}

extern "C" __declspec(dllexport) MCIERROR WINAPI mciSendStringA(LPCSTR lpstrCommand, LPSTR lpstrReturnString, UINT uReturnLength, HWND hwndCallback) {
    if (!g_origMciSendStringA) {
        HMODULE hWinmm = GetModuleHandleA("winmm.dll");
        if (!hWinmm) hWinmm = LoadLibraryA("winmm.dll");
        if (hWinmm) g_origMciSendStringA = (PFN_mciSendStringA)GetProcAddress(hWinmm, "mciSendStringA");
    }
    if (!g_origMciSendStringA) return 1;
    return Internal_mciSendStringA(lpstrCommand, lpstrReturnString, uReturnLength, hwndCallback);
}

// ============================================================================
// Hooking Engine
// ============================================================================
static void TryIATHook(HMODULE hModule, const char* targetDll, const char* funcName, void* hookFunc, void** origFunc, const char* logName) {
    if (!hModule) hModule = GetModuleHandleA(NULL);
    PIMAGE_DOS_HEADER dosHeader = (PIMAGE_DOS_HEADER)hModule;
    PIMAGE_NT_HEADERS ntHeaders = (PIMAGE_NT_HEADERS)((BYTE*)hModule + dosHeader->e_lfanew);
    DWORD importAddr = ntHeaders->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress;
    if (importAddr == 0) return;
    PIMAGE_IMPORT_DESCRIPTOR importDesc = (PIMAGE_IMPORT_DESCRIPTOR)((BYTE*)hModule + importAddr);
    while (importDesc->Name) {
        const char* name = (const char*)((BYTE*)hModule + importDesc->Name);
        if (_stricmp(name, targetDll) == 0) {
            PIMAGE_THUNK_DATA thunk = (PIMAGE_THUNK_DATA)((BYTE*)hModule + importDesc->FirstThunk);
            PIMAGE_THUNK_DATA origThunk = (PIMAGE_THUNK_DATA)((BYTE*)hModule + importDesc->OriginalFirstThunk);
            while (thunk->u1.Function) {
                PROC* funcPtr = (PROC*)&thunk->u1.Function;
                const char* currentFuncName = "";
                if (!(origThunk->u1.Ordinal & IMAGE_ORDINAL_FLAG)) {
                    PIMAGE_IMPORT_BY_NAME ibn = (PIMAGE_IMPORT_BY_NAME)((BYTE*)hModule + origThunk->u1.AddressOfData);
                    currentFuncName = (const char*)ibn->Name;
                }
                if (strcmp(currentFuncName, funcName) == 0) {
                    DWORD oldProtect;
                    VirtualProtect(funcPtr, sizeof(PROC), PAGE_EXECUTE_READWRITE, &oldProtect);
                    if (!*origFunc) *origFunc = (void*)*funcPtr;
                    *funcPtr = (PROC)hookFunc;
                    VirtualProtect(funcPtr, sizeof(PROC), oldProtect, &oldProtect);
                    Log("SUCCESS: Hooked %s in %s", logName, name);
                    return;
                }
                thunk++;
                origThunk++;
            }
        }
        importDesc++;
    }
}

static void LoadMapping() {
    char iniPath[MAX_PATH];
    _snprintf(iniPath, MAX_PATH, "%s\\eve_mapping.ini", g_gamePath);
    FILE* f = fopen(iniPath, "r");
    if (!f) return;
    char line[512];
    while (fgets(line, sizeof(line), f)) {
        char* comment = strchr(line, ';'); if (comment) *comment = 0;
        char* crlf = strpbrk(line, "\r\n"); if (crlf) *crlf = 0;
        char* eq = strchr(line, '=');
        if (eq) {
            *eq = 0;
            const char* keyRaw = line; const char* valRaw = eq + 1;
            while(*keyRaw == ' ' || *keyRaw == '\t') keyRaw++;
            char* keyEnd = line + strlen(line) - 1;
            while(keyEnd > keyRaw && (*keyEnd == ' ' || *keyEnd == '\t')) { *keyEnd = 0; keyEnd--; }
            while(*valRaw == ' ' || *valRaw == '\t') valRaw++;
            char* valEnd = (char*)valRaw + strlen(valRaw) - 1;
            while(valEnd > valRaw && (*valEnd == ' ' || *valEnd == '\t')) { *valEnd = 0; valEnd--; }
            if (*keyRaw && *valRaw) {
                std::string keyStr = ToUpper(keyRaw);
                g_mapping[keyStr] = valRaw;
                Log("Loaded mapping: '%s' -> '%s'", keyStr.c_str(), valRaw);
            }
        }
    }
    fclose(f);
}

// ============================================================================
// Entry Points
// ============================================================================
static void Initialize() {
    if (g_initialized) return;
    g_initialized = true;

    GetModuleFileNameA(NULL, g_gamePath, MAX_PATH);
    char* lastSlash = strrchr(g_gamePath, '\\'); if (lastSlash) *lastSlash = 0;
    
    char logPath[MAX_PATH];
    _snprintf(logPath, MAX_PATH, "%s\\eve_compat.log", g_gamePath);
    g_logFile = fopen(logPath, "a");

    Log("=== EVE Burst Error Compatibility Wrapper v4.0 (ADVANCED) ===");
    LoadMapping();

    HMODULE hExe = GetModuleHandleA(NULL);
    TryIATHook(hExe, "kernel32.dll", "CreateFileA", (void*)Hook_CreateFileA, (void**)&g_origCreateFileA, "CreateFileA");
    TryIATHook(hExe, "kernel32.dll", "GetDriveTypeA", (void*)Hook_GetDriveTypeA, (void**)&g_origGetDriveTypeA, "GetDriveTypeA");
    TryIATHook(hExe, "kernel32.dll", "GetVolumeInformationA", (void*)Hook_GetVolumeInformationA, (void**)&g_origGetVolumeInformationA, "GetVolumeInformationA");
    TryIATHook(hExe, "kernel32.dll", "GetLogicalDriveStringsA", (void*)Hook_GetLogicalDriveStringsA, (void**)&g_origGetLogicalDriveStringsA, "GetLogicalDriveStringsA");
    TryIATHook(hExe, "kernel32.dll", "GetFileAttributesA", (void*)Hook_GetFileAttributesA, (void**)&g_origGetFileAttributesA, "GetFileAttributesA");
    TryIATHook(hExe, "kernel32.dll", "FindFirstFileA", (void*)Hook_FindFirstFileA, (void**)&g_origFindFirstFileA, "FindFirstFileA");
    TryIATHook(hExe, "kernel32.dll", "GetDiskFreeSpaceA", (void*)Hook_GetDiskFreeSpaceA, (void**)&g_origGetDiskFreeSpaceA, "GetDiskFreeSpaceA");
    
    TryIATHook(hExe, "gdi32.dll", "GetDeviceCaps", (void*)Hook_GetDeviceCaps, (void**)&g_origGetDeviceCaps, "GetDeviceCaps");
    TryIATHook(hExe, "user32.dll", "ChangeDisplaySettingsA", (void*)Hook_ChangeDisplaySettingsA, (void**)&g_origChangeDisplaySettingsA, "ChangeDisplaySettingsA");
    
    TryIATHook(hExe, "winmm.dll", "mciSendStringA", (void*)mciSendStringA, (void**)&g_origMciSendStringA, "mciSendStringA (winmm)");
    TryIATHook(hExe, "mmsystem.dll", "mciSendStringA", (void*)mciSendStringA, (void**)&g_origMciSendStringA, "mciSendStringA (mmsystem)");

    Log("Advanced Initialization complete.");
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID lpReserved) {
    if (reason == DLL_PROCESS_ATTACH) {
        DisableThreadLibraryCalls(hModule);
        Initialize();
    } else if (reason == DLL_PROCESS_DETACH) {
        if (g_initialized && g_logFile) {
            Log("DLL unloading.");
            fclose(g_logFile); g_logFile = nullptr;
        }
    }
    return TRUE;
}
