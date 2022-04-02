#include "hackloader.h"

FARPROC CloseDriver;
FARPROC DefDriverProc;
FARPROC DriverCallback;
FARPROC DrvGetModuleHandle;
FARPROC GetDriverModuleHandle;
FARPROC NotifyCallbackData;
FARPROC OpenDriver;
FARPROC PlaySound;
FARPROC PlaySoundA;
FARPROC PlaySoundW;
FARPROC SendDriverMessage;
FARPROC WOW32DriverCallback;
FARPROC WOW32ResolveMultiMediaHandle;
FARPROC WOWAppExit;
FARPROC aux32Message;
FARPROC auxGetDevCapsA;
FARPROC auxGetDevCapsW;
FARPROC auxGetNumDevs;
FARPROC auxGetVolume;
FARPROC auxOutMessage;
FARPROC auxSetVolume;
FARPROC joy32Message;
FARPROC joyConfigChanged;
FARPROC joyGetDevCapsA;
FARPROC joyGetDevCapsW;
FARPROC joyGetNumDevs;
FARPROC joyGetPos;
FARPROC joyGetPosEx;
FARPROC joyGetThreshold;
FARPROC joyReleaseCapture;
FARPROC joySetCapture;
FARPROC joySetThreshold;
FARPROC mci32Message;
FARPROC mciDriverNotify;
FARPROC mciDriverYield;
FARPROC mciExecute;
FARPROC mciFreeCommandResource;
FARPROC mciGetCreatorTask;
FARPROC mciGetDeviceIDA;
FARPROC mciGetDeviceIDFromElementIDA;
FARPROC mciGetDeviceIDFromElementIDW;
FARPROC mciGetDeviceIDW;
FARPROC mciGetDriverData;
FARPROC mciGetErrorStringA;
FARPROC mciGetErrorStringW;
FARPROC mciGetYieldProc;
FARPROC mciLoadCommandResource;
FARPROC mciSendCommandA;
FARPROC mciSendCommandW;
FARPROC mciSendStringA;
FARPROC mciSendStringW;
FARPROC mciSetDriverData;
FARPROC mciSetYieldProc;
FARPROC mid32Message;
FARPROC midiConnect;
FARPROC midiDisconnect;
FARPROC midiInAddBuffer;
FARPROC midiInClose;
FARPROC midiInGetDevCapsA;
FARPROC midiInGetDevCapsW;
FARPROC midiInGetErrorTextA;
FARPROC midiInGetErrorTextW;
FARPROC midiInGetID;
FARPROC midiInGetNumDevs;
FARPROC midiInMessage;
FARPROC midiInOpen;
FARPROC midiInPrepareHeader;
FARPROC midiInReset;
FARPROC midiInStart;
FARPROC midiInStop;
FARPROC midiInUnprepareHeader;
FARPROC midiOutCacheDrumPatches;
FARPROC midiOutCachePatches;
FARPROC midiOutClose;
FARPROC midiOutGetDevCapsA;
FARPROC midiOutGetDevCapsW;
FARPROC midiOutGetErrorTextA;
FARPROC midiOutGetErrorTextW;
FARPROC midiOutGetID;
FARPROC midiOutGetNumDevs;
FARPROC midiOutGetVolume;
FARPROC midiOutLongMsg;
FARPROC midiOutMessage;
FARPROC midiOutOpen;
FARPROC midiOutPrepareHeader;
FARPROC midiOutReset;
FARPROC midiOutSetVolume;
FARPROC midiOutShortMsg;
FARPROC midiOutUnprepareHeader;
FARPROC midiStreamClose;
FARPROC midiStreamOpen;
FARPROC midiStreamOut;
FARPROC midiStreamPause;
FARPROC midiStreamPosition;
FARPROC midiStreamProperty;
FARPROC midiStreamRestart;
FARPROC midiStreamStop;
FARPROC mixerClose;
FARPROC mixerGetControlDetailsA;
FARPROC mixerGetControlDetailsW;
FARPROC mixerGetDevCapsA;
FARPROC mixerGetDevCapsW;
FARPROC mixerGetID;
FARPROC mixerGetLineControlsA;
FARPROC mixerGetLineControlsW;
FARPROC mixerGetLineInfoA;
FARPROC mixerGetLineInfoW;
FARPROC mixerGetNumDevs;
FARPROC mixerMessage;
FARPROC mixerOpen;
FARPROC mixerSetControlDetails;
FARPROC mmDrvInstall;
FARPROC mmGetCurrentTask;
FARPROC mmTaskBlock;
FARPROC mmTaskCreate;
FARPROC mmTaskSignal;
FARPROC mmTaskYield;
FARPROC mmioAdvance;
FARPROC mmioAscend;
FARPROC mmioClose;
FARPROC mmioCreateChunk;
FARPROC mmioDescend;
FARPROC mmioFlush;
FARPROC mmioGetInfo;
FARPROC mmioInstallIOProcA;
FARPROC mmioInstallIOProcW;
FARPROC mmioOpenA;
FARPROC mmioOpenW;
FARPROC mmioRead;
FARPROC mmioRenameA;
FARPROC mmioRenameW;
FARPROC mmioSeek;
FARPROC mmioSendMessage;
FARPROC mmioSetBuffer;
FARPROC mmioSetInfo;
FARPROC mmioStringToFOURCCA;
FARPROC mmioStringToFOURCCW;
FARPROC mmioWrite;
FARPROC mmsystemGetVersion;
FARPROC mod32Message;
FARPROC mxd32Message;
FARPROC sndPlaySoundA;
FARPROC sndPlaySoundW;
FARPROC tid32Message;
FARPROC timeBeginPeriod;
FARPROC timeEndPeriod;
FARPROC timeGetDevCaps;
FARPROC timeGetSystemTime;
FARPROC timeGetTime;
FARPROC timeKillEvent;
FARPROC timeSetEvent;
FARPROC waveInAddBuffer;
FARPROC waveInClose;
FARPROC waveInGetDevCapsA;
FARPROC waveInGetDevCapsW;
FARPROC waveInGetErrorTextA;
FARPROC waveInGetErrorTextW;
FARPROC waveInGetID;
FARPROC waveInGetNumDevs;
FARPROC waveInGetPosition;
FARPROC waveInMessage;
FARPROC waveInOpen;
FARPROC waveInPrepareHeader;
FARPROC waveInReset;
FARPROC waveInStart;
FARPROC waveInStop;
FARPROC waveInUnprepareHeader;
FARPROC waveOutBreakLoop;
FARPROC waveOutClose;
FARPROC waveOutGetDevCapsA;
FARPROC waveOutGetDevCapsW;
FARPROC waveOutGetErrorTextA;
FARPROC waveOutGetErrorTextW;
FARPROC waveOutGetID;
FARPROC waveOutGetNumDevs;
FARPROC waveOutGetPitch;
FARPROC waveOutGetPlaybackRate;
FARPROC waveOutGetPosition;
FARPROC waveOutGetVolume;
FARPROC waveOutMessage;
FARPROC waveOutOpen;
FARPROC waveOutPause;
FARPROC waveOutPrepareHeader;
FARPROC waveOutReset;
FARPROC waveOutRestart;
FARPROC waveOutSetPitch;
FARPROC waveOutSetPlaybackRate;
FARPROC waveOutSetVolume;
FARPROC waveOutUnprepareHeader;
FARPROC waveOutWrite;
FARPROC wid32Message;
FARPROC wod32Message;

__declspec(naked) void _CloseDriver() { jmp(CloseDriver); }
__declspec(naked) void _DefDriverProc() { jmp(DefDriverProc); }
__declspec(naked) void _DriverCallback() { jmp(DriverCallback); }
__declspec(naked) void _DrvGetModuleHandle() { jmp(DrvGetModuleHandle); }
__declspec(naked) void _GetDriverModuleHandle() { jmp(GetDriverModuleHandle); }
__declspec(naked) void _NotifyCallbackData() { jmp(NotifyCallbackData); }
__declspec(naked) void _OpenDriver() { jmp(OpenDriver); }
__declspec(naked) void _PlaySound() { jmp(PlaySound); }
__declspec(naked) void _PlaySoundA() { jmp(PlaySoundA); }
__declspec(naked) void _PlaySoundW() { jmp(PlaySoundW); }
__declspec(naked) void _SendDriverMessage() { jmp(SendDriverMessage); }
__declspec(naked) void _WOW32DriverCallback() { jmp(WOW32DriverCallback); }
__declspec(naked) void _WOW32ResolveMultiMediaHandle() { jmp(WOW32ResolveMultiMediaHandle); }
__declspec(naked) void _WOWAppExit() { jmp(WOWAppExit); }
__declspec(naked) void _aux32Message() { jmp(aux32Message); }
__declspec(naked) void _auxGetDevCapsA() { jmp(auxGetDevCapsA); }
__declspec(naked) void _auxGetDevCapsW() { jmp(auxGetDevCapsW); }
__declspec(naked) void _auxGetNumDevs() { jmp(auxGetNumDevs); }
__declspec(naked) void _auxGetVolume() { jmp(auxGetVolume); }
__declspec(naked) void _auxOutMessage() { jmp(auxOutMessage); }
__declspec(naked) void _auxSetVolume() { jmp(auxSetVolume); }
__declspec(naked) void _joy32Message() { jmp(joy32Message); }
__declspec(naked) void _joyConfigChanged() { jmp(joyConfigChanged); }
__declspec(naked) void _joyGetDevCapsA() { jmp(joyGetDevCapsA); }
__declspec(naked) void _joyGetDevCapsW() { jmp(joyGetDevCapsW); }
__declspec(naked) void _joyGetNumDevs() { jmp(joyGetNumDevs); }
__declspec(naked) void _joyGetPos() { jmp(joyGetPos); }
__declspec(naked) void _joyGetPosEx() { jmp(joyGetPosEx); }
__declspec(naked) void _joyGetThreshold() { jmp(joyGetThreshold); }
__declspec(naked) void _joyReleaseCapture() { jmp(joyReleaseCapture); }
__declspec(naked) void _joySetCapture() { jmp(joySetCapture); }
__declspec(naked) void _joySetThreshold() { jmp(joySetThreshold); }
__declspec(naked) void _mci32Message() { jmp(mci32Message); }
__declspec(naked) void _mciDriverNotify() { jmp(mciDriverNotify); }
__declspec(naked) void _mciDriverYield() { jmp(mciDriverYield); }
__declspec(naked) void _mciExecute() { jmp(mciExecute); }
__declspec(naked) void _mciFreeCommandResource() { jmp(mciFreeCommandResource); }
__declspec(naked) void _mciGetCreatorTask() { jmp(mciGetCreatorTask); }
__declspec(naked) void _mciGetDeviceIDA() { jmp(mciGetDeviceIDA); }
__declspec(naked) void _mciGetDeviceIDFromElementIDA() { jmp(mciGetDeviceIDFromElementIDA); }
__declspec(naked) void _mciGetDeviceIDFromElementIDW() { jmp(mciGetDeviceIDFromElementIDW); }
__declspec(naked) void _mciGetDeviceIDW() { jmp(mciGetDeviceIDW); }
__declspec(naked) void _mciGetDriverData() { jmp(mciGetDriverData); }
__declspec(naked) void _mciGetErrorStringA() { jmp(mciGetErrorStringA); }
__declspec(naked) void _mciGetErrorStringW() { jmp(mciGetErrorStringW); }
__declspec(naked) void _mciGetYieldProc() { jmp(mciGetYieldProc); }
__declspec(naked) void _mciLoadCommandResource() { jmp(mciLoadCommandResource); }
__declspec(naked) void _mciSendCommandA() { jmp(mciSendCommandA); }
__declspec(naked) void _mciSendCommandW() { jmp(mciSendCommandW); }
__declspec(naked) void _mciSendStringA() { jmp(mciSendStringA); }
__declspec(naked) void _mciSendStringW() { jmp(mciSendStringW); }
__declspec(naked) void _mciSetDriverData() { jmp(mciSetDriverData); }
__declspec(naked) void _mciSetYieldProc() { jmp(mciSetYieldProc); }
__declspec(naked) void _mid32Message() { jmp(mid32Message); }
__declspec(naked) void _midiConnect() { jmp(midiConnect); }
__declspec(naked) void _midiDisconnect() { jmp(midiDisconnect); }
__declspec(naked) void _midiInAddBuffer() { jmp(midiInAddBuffer); }
__declspec(naked) void _midiInClose() { jmp(midiInClose); }
__declspec(naked) void _midiInGetDevCapsA() { jmp(midiInGetDevCapsA); }
__declspec(naked) void _midiInGetDevCapsW() { jmp(midiInGetDevCapsW); }
__declspec(naked) void _midiInGetErrorTextA() { jmp(midiInGetErrorTextA); }
__declspec(naked) void _midiInGetErrorTextW() { jmp(midiInGetErrorTextW); }
__declspec(naked) void _midiInGetID() { jmp(midiInGetID); }
__declspec(naked) void _midiInGetNumDevs() { jmp(midiInGetNumDevs); }
__declspec(naked) void _midiInMessage() { jmp(midiInMessage); }
__declspec(naked) void _midiInOpen() { jmp(midiInOpen); }
__declspec(naked) void _midiInPrepareHeader() { jmp(midiInPrepareHeader); }
__declspec(naked) void _midiInReset() { jmp(midiInReset); }
__declspec(naked) void _midiInStart() { jmp(midiInStart); }
__declspec(naked) void _midiInStop() { jmp(midiInStop); }
__declspec(naked) void _midiInUnprepareHeader() { jmp(midiInUnprepareHeader); }
__declspec(naked) void _midiOutCacheDrumPatches() { jmp(midiOutCacheDrumPatches); }
__declspec(naked) void _midiOutCachePatches() { jmp(midiOutCachePatches); }
__declspec(naked) void _midiOutClose() { jmp(midiOutClose); }
__declspec(naked) void _midiOutGetDevCapsA() { jmp(midiOutGetDevCapsA); }
__declspec(naked) void _midiOutGetDevCapsW() { jmp(midiOutGetDevCapsW); }
__declspec(naked) void _midiOutGetErrorTextA() { jmp(midiOutGetErrorTextA); }
__declspec(naked) void _midiOutGetErrorTextW() { jmp(midiOutGetErrorTextW); }
__declspec(naked) void _midiOutGetID() { jmp(midiOutGetID); }
__declspec(naked) void _midiOutGetNumDevs() { jmp(midiOutGetNumDevs); }
__declspec(naked) void _midiOutGetVolume() { jmp(midiOutGetVolume); }
__declspec(naked) void _midiOutLongMsg() { jmp(midiOutLongMsg); }
__declspec(naked) void _midiOutMessage() { jmp(midiOutMessage); }
__declspec(naked) void _midiOutOpen() { jmp(midiOutOpen); }
__declspec(naked) void _midiOutPrepareHeader() { jmp(midiOutPrepareHeader); }
__declspec(naked) void _midiOutReset() { jmp(midiOutReset); }
__declspec(naked) void _midiOutSetVolume() { jmp(midiOutSetVolume); }
__declspec(naked) void _midiOutShortMsg() { jmp(midiOutShortMsg); }
__declspec(naked) void _midiOutUnprepareHeader() { jmp(midiOutUnprepareHeader); }
__declspec(naked) void _midiStreamClose() { jmp(midiStreamClose); }
__declspec(naked) void _midiStreamOpen() { jmp(midiStreamOpen); }
__declspec(naked) void _midiStreamOut() { jmp(midiStreamOut); }
__declspec(naked) void _midiStreamPause() { jmp(midiStreamPause); }
__declspec(naked) void _midiStreamPosition() { jmp(midiStreamPosition); }
__declspec(naked) void _midiStreamProperty() { jmp(midiStreamProperty); }
__declspec(naked) void _midiStreamRestart() { jmp(midiStreamRestart); }
__declspec(naked) void _midiStreamStop() { jmp(midiStreamStop); }
__declspec(naked) void _mixerClose() { jmp(mixerClose); }
__declspec(naked) void _mixerGetControlDetailsA() { jmp(mixerGetControlDetailsA); }
__declspec(naked) void _mixerGetControlDetailsW() { jmp(mixerGetControlDetailsW); }
__declspec(naked) void _mixerGetDevCapsA() { jmp(mixerGetDevCapsA); }
__declspec(naked) void _mixerGetDevCapsW() { jmp(mixerGetDevCapsW); }
__declspec(naked) void _mixerGetID() { jmp(mixerGetID); }
__declspec(naked) void _mixerGetLineControlsA() { jmp(mixerGetLineControlsA); }
__declspec(naked) void _mixerGetLineControlsW() { jmp(mixerGetLineControlsW); }
__declspec(naked) void _mixerGetLineInfoA() { jmp(mixerGetLineInfoA); }
__declspec(naked) void _mixerGetLineInfoW() { jmp(mixerGetLineInfoW); }
__declspec(naked) void _mixerGetNumDevs() { jmp(mixerGetNumDevs); }
__declspec(naked) void _mixerMessage() { jmp(mixerMessage); }
__declspec(naked) void _mixerOpen() { jmp(mixerOpen); }
__declspec(naked) void _mixerSetControlDetails() { jmp(mixerSetControlDetails); }
__declspec(naked) void _mmDrvInstall() { jmp(mmDrvInstall); }
__declspec(naked) void _mmGetCurrentTask() { jmp(mmGetCurrentTask); }
__declspec(naked) void _mmTaskBlock() { jmp(mmTaskBlock); }
__declspec(naked) void _mmTaskCreate() { jmp(mmTaskCreate); }
__declspec(naked) void _mmTaskSignal() { jmp(mmTaskSignal); }
__declspec(naked) void _mmTaskYield() { jmp(mmTaskYield); }
__declspec(naked) void _mmioAdvance() { jmp(mmioAdvance); }
__declspec(naked) void _mmioAscend() { jmp(mmioAscend); }
__declspec(naked) void _mmioClose() { jmp(mmioClose); }
__declspec(naked) void _mmioCreateChunk() { jmp(mmioCreateChunk); }
__declspec(naked) void _mmioDescend() { jmp(mmioDescend); }
__declspec(naked) void _mmioFlush() { jmp(mmioFlush); }
__declspec(naked) void _mmioGetInfo() { jmp(mmioGetInfo); }
__declspec(naked) void _mmioInstallIOProcA() { jmp(mmioInstallIOProcA); }
__declspec(naked) void _mmioInstallIOProcW() { jmp(mmioInstallIOProcW); }
__declspec(naked) void _mmioOpenA() { jmp(mmioOpenA); }
__declspec(naked) void _mmioOpenW() { jmp(mmioOpenW); }
__declspec(naked) void _mmioRead() { jmp(mmioRead); }
__declspec(naked) void _mmioRenameA() { jmp(mmioRenameA); }
__declspec(naked) void _mmioRenameW() { jmp(mmioRenameW); }
__declspec(naked) void _mmioSeek() { jmp(mmioSeek); }
__declspec(naked) void _mmioSendMessage() { jmp(mmioSendMessage); }
__declspec(naked) void _mmioSetBuffer() { jmp(mmioSetBuffer); }
__declspec(naked) void _mmioSetInfo() { jmp(mmioSetInfo); }
__declspec(naked) void _mmioStringToFOURCCA() { jmp(mmioStringToFOURCCA); }
__declspec(naked) void _mmioStringToFOURCCW() { jmp(mmioStringToFOURCCW); }
__declspec(naked) void _mmioWrite() { jmp(mmioWrite); }
__declspec(naked) void _mmsystemGetVersion() { jmp(mmsystemGetVersion); }
__declspec(naked) void _mod32Message() { jmp(mod32Message); }
__declspec(naked) void _mxd32Message() { jmp(mxd32Message); }
__declspec(naked) void _sndPlaySoundA() { jmp(sndPlaySoundA); }
__declspec(naked) void _sndPlaySoundW() { jmp(sndPlaySoundW); }
__declspec(naked) void _tid32Message() { jmp(tid32Message); }
__declspec(naked) void _timeBeginPeriod() { jmp(timeBeginPeriod); }
__declspec(naked) void _timeEndPeriod() { jmp(timeEndPeriod); }
__declspec(naked) void _timeGetDevCaps() { jmp(timeGetDevCaps); }
__declspec(naked) void _timeGetSystemTime() { jmp(timeGetSystemTime); }
__declspec(naked) void _timeGetTime() { jmp(timeGetTime); }
__declspec(naked) void _timeKillEvent() { jmp(timeKillEvent); }
__declspec(naked) void _timeSetEvent() { jmp(timeSetEvent); }
__declspec(naked) void _waveInAddBuffer() { jmp(waveInAddBuffer); }
__declspec(naked) void _waveInClose() { jmp(waveInClose); }
__declspec(naked) void _waveInGetDevCapsA() { jmp(waveInGetDevCapsA); }
__declspec(naked) void _waveInGetDevCapsW() { jmp(waveInGetDevCapsW); }
__declspec(naked) void _waveInGetErrorTextA() { jmp(waveInGetErrorTextA); }
__declspec(naked) void _waveInGetErrorTextW() { jmp(waveInGetErrorTextW); }
__declspec(naked) void _waveInGetID() { jmp(waveInGetID); }
__declspec(naked) void _waveInGetNumDevs() { jmp(waveInGetNumDevs); }
__declspec(naked) void _waveInGetPosition() { jmp(waveInGetPosition); }
__declspec(naked) void _waveInMessage() { jmp(waveInMessage); }
__declspec(naked) void _waveInOpen() { jmp(waveInOpen); }
__declspec(naked) void _waveInPrepareHeader() { jmp(waveInPrepareHeader); }
__declspec(naked) void _waveInReset() { jmp(waveInReset); }
__declspec(naked) void _waveInStart() { jmp(waveInStart); }
__declspec(naked) void _waveInStop() { jmp(waveInStop); }
__declspec(naked) void _waveInUnprepareHeader() { jmp(waveInUnprepareHeader); }
__declspec(naked) void _waveOutBreakLoop() { jmp(waveOutBreakLoop); }
__declspec(naked) void _waveOutClose() { jmp(waveOutClose); }
__declspec(naked) void _waveOutGetDevCapsA() { jmp(waveOutGetDevCapsA); }
__declspec(naked) void _waveOutGetDevCapsW() { jmp(waveOutGetDevCapsW); }
__declspec(naked) void _waveOutGetErrorTextA() { jmp(waveOutGetErrorTextA); }
__declspec(naked) void _waveOutGetErrorTextW() { jmp(waveOutGetErrorTextW); }
__declspec(naked) void _waveOutGetID() { jmp(waveOutGetID); }
__declspec(naked) void _waveOutGetNumDevs() { jmp(waveOutGetNumDevs); }
__declspec(naked) void _waveOutGetPitch() { jmp(waveOutGetPitch); }
__declspec(naked) void _waveOutGetPlaybackRate() { jmp(waveOutGetPlaybackRate); }
__declspec(naked) void _waveOutGetPosition() { jmp(waveOutGetPosition); }
__declspec(naked) void _waveOutGetVolume() { jmp(waveOutGetVolume); }
__declspec(naked) void _waveOutMessage() { jmp(waveOutMessage); }
__declspec(naked) void _waveOutOpen() { jmp(waveOutOpen); }
__declspec(naked) void _waveOutPause() { jmp(waveOutPause); }
__declspec(naked) void _waveOutPrepareHeader() { jmp(waveOutPrepareHeader); }
__declspec(naked) void _waveOutReset() { jmp(waveOutReset); }
__declspec(naked) void _waveOutRestart() { jmp(waveOutRestart); }
__declspec(naked) void _waveOutSetPitch() { jmp(waveOutSetPitch); }
__declspec(naked) void _waveOutSetPlaybackRate() { jmp(waveOutSetPlaybackRate); }
__declspec(naked) void _waveOutSetVolume() { jmp(waveOutSetVolume); }
__declspec(naked) void _waveOutUnprepareHeader() { jmp(waveOutUnprepareHeader); }
__declspec(naked) void _waveOutWrite() { jmp(waveOutWrite); }
__declspec(naked) void _wid32Message() { jmp(wid32Message); }
__declspec(naked) void _wod32Message() { jmp(wod32Message); }

void init_fake_dll()
{
	CloseDriver = GetProcAddress(fake_dll, "CloseDriver");
	DefDriverProc = GetProcAddress(fake_dll, "DefDriverProc");
	DriverCallback = GetProcAddress(fake_dll, "DriverCallback");
	DrvGetModuleHandle = GetProcAddress(fake_dll, "DrvGetModuleHandle");
	GetDriverModuleHandle = GetProcAddress(fake_dll, "GetDriverModuleHandle");
	NotifyCallbackData = GetProcAddress(fake_dll, "NotifyCallbackData");
	OpenDriver = GetProcAddress(fake_dll, "OpenDriver");
	PlaySound = GetProcAddress(fake_dll, "PlaySound");
	PlaySoundA = GetProcAddress(fake_dll, "PlaySoundA");
	PlaySoundW = GetProcAddress(fake_dll, "PlaySoundW");
	SendDriverMessage = GetProcAddress(fake_dll, "SendDriverMessage");
	WOW32DriverCallback = GetProcAddress(fake_dll, "WOW32DriverCallback");
	WOW32ResolveMultiMediaHandle = GetProcAddress(fake_dll, "WOW32ResolveMultiMediaHandle");
	WOWAppExit = GetProcAddress(fake_dll, "WOWAppExit");
	aux32Message = GetProcAddress(fake_dll, "aux32Message");
	auxGetDevCapsA = GetProcAddress(fake_dll, "auxGetDevCapsA");
	auxGetDevCapsW = GetProcAddress(fake_dll, "auxGetDevCapsW");
	auxGetNumDevs = GetProcAddress(fake_dll, "auxGetNumDevs");
	auxGetVolume = GetProcAddress(fake_dll, "auxGetVolume");
	auxOutMessage = GetProcAddress(fake_dll, "auxOutMessage");
	auxSetVolume = GetProcAddress(fake_dll, "auxSetVolume");
	joy32Message = GetProcAddress(fake_dll, "joy32Message");
	joyConfigChanged = GetProcAddress(fake_dll, "joyConfigChanged");
	joyGetDevCapsA = GetProcAddress(fake_dll, "joyGetDevCapsA");
	joyGetDevCapsW = GetProcAddress(fake_dll, "joyGetDevCapsW");
	joyGetNumDevs = GetProcAddress(fake_dll, "joyGetNumDevs");
	joyGetPos = GetProcAddress(fake_dll, "joyGetPos");
	joyGetPosEx = GetProcAddress(fake_dll, "joyGetPosEx");
	joyGetThreshold = GetProcAddress(fake_dll, "joyGetThreshold");
	joyReleaseCapture = GetProcAddress(fake_dll, "joyReleaseCapture");
	joySetCapture = GetProcAddress(fake_dll, "joySetCapture");
	joySetThreshold = GetProcAddress(fake_dll, "joySetThreshold");
	mci32Message = GetProcAddress(fake_dll, "mci32Message");
	mciDriverNotify = GetProcAddress(fake_dll, "mciDriverNotify");
	mciDriverYield = GetProcAddress(fake_dll, "mciDriverYield");
	mciExecute = GetProcAddress(fake_dll, "mciExecute");
	mciFreeCommandResource = GetProcAddress(fake_dll, "mciFreeCommandResource");
	mciGetCreatorTask = GetProcAddress(fake_dll, "mciGetCreatorTask");
	mciGetDeviceIDA = GetProcAddress(fake_dll, "mciGetDeviceIDA");
	mciGetDeviceIDFromElementIDA = GetProcAddress(fake_dll, "mciGetDeviceIDFromElementIDA");
	mciGetDeviceIDFromElementIDW = GetProcAddress(fake_dll, "mciGetDeviceIDFromElementIDW");
	mciGetDeviceIDW = GetProcAddress(fake_dll, "mciGetDeviceIDW");
	mciGetDriverData = GetProcAddress(fake_dll, "mciGetDriverData");
	mciGetErrorStringA = GetProcAddress(fake_dll, "mciGetErrorStringA");
	mciGetErrorStringW = GetProcAddress(fake_dll, "mciGetErrorStringW");
	mciGetYieldProc = GetProcAddress(fake_dll, "mciGetYieldProc");
	mciLoadCommandResource = GetProcAddress(fake_dll, "mciLoadCommandResource");
	mciSendCommandA = GetProcAddress(fake_dll, "mciSendCommandA");
	mciSendCommandW = GetProcAddress(fake_dll, "mciSendCommandW");
	mciSendStringA = GetProcAddress(fake_dll, "mciSendStringA");
	mciSendStringW = GetProcAddress(fake_dll, "mciSendStringW");
	mciSetDriverData = GetProcAddress(fake_dll, "mciSetDriverData");
	mciSetYieldProc = GetProcAddress(fake_dll, "mciSetYieldProc");
	mid32Message = GetProcAddress(fake_dll, "mid32Message");
	midiConnect = GetProcAddress(fake_dll, "midiConnect");
	midiDisconnect = GetProcAddress(fake_dll, "midiDisconnect");
	midiInAddBuffer = GetProcAddress(fake_dll, "midiInAddBuffer");
	midiInClose = GetProcAddress(fake_dll, "midiInClose");
	midiInGetDevCapsA = GetProcAddress(fake_dll, "midiInGetDevCapsA");
	midiInGetDevCapsW = GetProcAddress(fake_dll, "midiInGetDevCapsW");
	midiInGetErrorTextA = GetProcAddress(fake_dll, "midiInGetErrorTextA");
	midiInGetErrorTextW = GetProcAddress(fake_dll, "midiInGetErrorTextW");
	midiInGetID = GetProcAddress(fake_dll, "midiInGetID");
	midiInGetNumDevs = GetProcAddress(fake_dll, "midiInGetNumDevs");
	midiInMessage = GetProcAddress(fake_dll, "midiInMessage");
	midiInOpen = GetProcAddress(fake_dll, "midiInOpen");
	midiInPrepareHeader = GetProcAddress(fake_dll, "midiInPrepareHeader");
	midiInReset = GetProcAddress(fake_dll, "midiInReset");
	midiInStart = GetProcAddress(fake_dll, "midiInStart");
	midiInStop = GetProcAddress(fake_dll, "midiInStop");
	midiInUnprepareHeader = GetProcAddress(fake_dll, "midiInUnprepareHeader");
	midiOutCacheDrumPatches = GetProcAddress(fake_dll, "midiOutCacheDrumPatches");
	midiOutCachePatches = GetProcAddress(fake_dll, "midiOutCachePatches");
	midiOutClose = GetProcAddress(fake_dll, "midiOutClose");
	midiOutGetDevCapsA = GetProcAddress(fake_dll, "midiOutGetDevCapsA");
	midiOutGetDevCapsW = GetProcAddress(fake_dll, "midiOutGetDevCapsW");
	midiOutGetErrorTextA = GetProcAddress(fake_dll, "midiOutGetErrorTextA");
	midiOutGetErrorTextW = GetProcAddress(fake_dll, "midiOutGetErrorTextW");
	midiOutGetID = GetProcAddress(fake_dll, "midiOutGetID");
	midiOutGetNumDevs = GetProcAddress(fake_dll, "midiOutGetNumDevs");
	midiOutGetVolume = GetProcAddress(fake_dll, "midiOutGetVolume");
	midiOutLongMsg = GetProcAddress(fake_dll, "midiOutLongMsg");
	midiOutMessage = GetProcAddress(fake_dll, "midiOutMessage");
	midiOutOpen = GetProcAddress(fake_dll, "midiOutOpen");
	midiOutPrepareHeader = GetProcAddress(fake_dll, "midiOutPrepareHeader");
	midiOutReset = GetProcAddress(fake_dll, "midiOutReset");
	midiOutSetVolume = GetProcAddress(fake_dll, "midiOutSetVolume");
	midiOutShortMsg = GetProcAddress(fake_dll, "midiOutShortMsg");
	midiOutUnprepareHeader = GetProcAddress(fake_dll, "midiOutUnprepareHeader");
	midiStreamClose = GetProcAddress(fake_dll, "midiStreamClose");
	midiStreamOpen = GetProcAddress(fake_dll, "midiStreamOpen");
	midiStreamOut = GetProcAddress(fake_dll, "midiStreamOut");
	midiStreamPause = GetProcAddress(fake_dll, "midiStreamPause");
	midiStreamPosition = GetProcAddress(fake_dll, "midiStreamPosition");
	midiStreamProperty = GetProcAddress(fake_dll, "midiStreamProperty");
	midiStreamRestart = GetProcAddress(fake_dll, "midiStreamRestart");
	midiStreamStop = GetProcAddress(fake_dll, "midiStreamStop");
	mixerClose = GetProcAddress(fake_dll, "mixerClose");
	mixerGetControlDetailsA = GetProcAddress(fake_dll, "mixerGetControlDetailsA");
	mixerGetControlDetailsW = GetProcAddress(fake_dll, "mixerGetControlDetailsW");
	mixerGetDevCapsA = GetProcAddress(fake_dll, "mixerGetDevCapsA");
	mixerGetDevCapsW = GetProcAddress(fake_dll, "mixerGetDevCapsW");
	mixerGetID = GetProcAddress(fake_dll, "mixerGetID");
	mixerGetLineControlsA = GetProcAddress(fake_dll, "mixerGetLineControlsA");
	mixerGetLineControlsW = GetProcAddress(fake_dll, "mixerGetLineControlsW");
	mixerGetLineInfoA = GetProcAddress(fake_dll, "mixerGetLineInfoA");
	mixerGetLineInfoW = GetProcAddress(fake_dll, "mixerGetLineInfoW");
	mixerGetNumDevs = GetProcAddress(fake_dll, "mixerGetNumDevs");
	mixerMessage = GetProcAddress(fake_dll, "mixerMessage");
	mixerOpen = GetProcAddress(fake_dll, "mixerOpen");
	mixerSetControlDetails = GetProcAddress(fake_dll, "mixerSetControlDetails");
	mmDrvInstall = GetProcAddress(fake_dll, "mmDrvInstall");
	mmGetCurrentTask = GetProcAddress(fake_dll, "mmGetCurrentTask");
	mmTaskBlock = GetProcAddress(fake_dll, "mmTaskBlock");
	mmTaskCreate = GetProcAddress(fake_dll, "mmTaskCreate");
	mmTaskSignal = GetProcAddress(fake_dll, "mmTaskSignal");
	mmTaskYield = GetProcAddress(fake_dll, "mmTaskYield");
	mmioAdvance = GetProcAddress(fake_dll, "mmioAdvance");
	mmioAscend = GetProcAddress(fake_dll, "mmioAscend");
	mmioClose = GetProcAddress(fake_dll, "mmioClose");
	mmioCreateChunk = GetProcAddress(fake_dll, "mmioCreateChunk");
	mmioDescend = GetProcAddress(fake_dll, "mmioDescend");
	mmioFlush = GetProcAddress(fake_dll, "mmioFlush");
	mmioGetInfo = GetProcAddress(fake_dll, "mmioGetInfo");
	mmioInstallIOProcA = GetProcAddress(fake_dll, "mmioInstallIOProcA");
	mmioInstallIOProcW = GetProcAddress(fake_dll, "mmioInstallIOProcW");
	mmioOpenA = GetProcAddress(fake_dll, "mmioOpenA");
	mmioOpenW = GetProcAddress(fake_dll, "mmioOpenW");
	mmioRead = GetProcAddress(fake_dll, "mmioRead");
	mmioRenameA = GetProcAddress(fake_dll, "mmioRenameA");
	mmioRenameW = GetProcAddress(fake_dll, "mmioRenameW");
	mmioSeek = GetProcAddress(fake_dll, "mmioSeek");
	mmioSendMessage = GetProcAddress(fake_dll, "mmioSendMessage");
	mmioSetBuffer = GetProcAddress(fake_dll, "mmioSetBuffer");
	mmioSetInfo = GetProcAddress(fake_dll, "mmioSetInfo");
	mmioStringToFOURCCA = GetProcAddress(fake_dll, "mmioStringToFOURCCA");
	mmioStringToFOURCCW = GetProcAddress(fake_dll, "mmioStringToFOURCCW");
	mmioWrite = GetProcAddress(fake_dll, "mmioWrite");
	mmsystemGetVersion = GetProcAddress(fake_dll, "mmsystemGetVersion");
	mod32Message = GetProcAddress(fake_dll, "mod32Message");
	mxd32Message = GetProcAddress(fake_dll, "mxd32Message");
	sndPlaySoundA = GetProcAddress(fake_dll, "sndPlaySoundA");
	sndPlaySoundW = GetProcAddress(fake_dll, "sndPlaySoundW");
	tid32Message = GetProcAddress(fake_dll, "tid32Message");
	timeBeginPeriod = GetProcAddress(fake_dll, "timeBeginPeriod");
	timeEndPeriod = GetProcAddress(fake_dll, "timeEndPeriod");
	timeGetDevCaps = GetProcAddress(fake_dll, "timeGetDevCaps");
	timeGetSystemTime = GetProcAddress(fake_dll, "timeGetSystemTime");
	timeGetTime = GetProcAddress(fake_dll, "timeGetTime");
	timeKillEvent = GetProcAddress(fake_dll, "timeKillEvent");
	timeSetEvent = GetProcAddress(fake_dll, "timeSetEvent");
	waveInAddBuffer = GetProcAddress(fake_dll, "waveInAddBuffer");
	waveInClose = GetProcAddress(fake_dll, "waveInClose");
	waveInGetDevCapsA = GetProcAddress(fake_dll, "waveInGetDevCapsA");
	waveInGetDevCapsW = GetProcAddress(fake_dll, "waveInGetDevCapsW");
	waveInGetErrorTextA = GetProcAddress(fake_dll, "waveInGetErrorTextA");
	waveInGetErrorTextW = GetProcAddress(fake_dll, "waveInGetErrorTextW");
	waveInGetID = GetProcAddress(fake_dll, "waveInGetID");
	waveInGetNumDevs = GetProcAddress(fake_dll, "waveInGetNumDevs");
	waveInGetPosition = GetProcAddress(fake_dll, "waveInGetPosition");
	waveInMessage = GetProcAddress(fake_dll, "waveInMessage");
	waveInOpen = GetProcAddress(fake_dll, "waveInOpen");
	waveInPrepareHeader = GetProcAddress(fake_dll, "waveInPrepareHeader");
	waveInReset = GetProcAddress(fake_dll, "waveInReset");
	waveInStart = GetProcAddress(fake_dll, "waveInStart");
	waveInStop = GetProcAddress(fake_dll, "waveInStop");
	waveInUnprepareHeader = GetProcAddress(fake_dll, "waveInUnprepareHeader");
	waveOutBreakLoop = GetProcAddress(fake_dll, "waveOutBreakLoop");
	waveOutClose = GetProcAddress(fake_dll, "waveOutClose");
	waveOutGetDevCapsA = GetProcAddress(fake_dll, "waveOutGetDevCapsA");
	waveOutGetDevCapsW = GetProcAddress(fake_dll, "waveOutGetDevCapsW");
	waveOutGetErrorTextA = GetProcAddress(fake_dll, "waveOutGetErrorTextA");
	waveOutGetErrorTextW = GetProcAddress(fake_dll, "waveOutGetErrorTextW");
	waveOutGetID = GetProcAddress(fake_dll, "waveOutGetID");
	waveOutGetNumDevs = GetProcAddress(fake_dll, "waveOutGetNumDevs");
	waveOutGetPitch = GetProcAddress(fake_dll, "waveOutGetPitch");
	waveOutGetPlaybackRate = GetProcAddress(fake_dll, "waveOutGetPlaybackRate");
	waveOutGetPosition = GetProcAddress(fake_dll, "waveOutGetPosition");
	waveOutGetVolume = GetProcAddress(fake_dll, "waveOutGetVolume");
	waveOutMessage = GetProcAddress(fake_dll, "waveOutMessage");
	waveOutOpen = GetProcAddress(fake_dll, "waveOutOpen");
	waveOutPause = GetProcAddress(fake_dll, "waveOutPause");
	waveOutPrepareHeader = GetProcAddress(fake_dll, "waveOutPrepareHeader");
	waveOutReset = GetProcAddress(fake_dll, "waveOutReset");
	waveOutRestart = GetProcAddress(fake_dll, "waveOutRestart");
	waveOutSetPitch = GetProcAddress(fake_dll, "waveOutSetPitch");
	waveOutSetPlaybackRate = GetProcAddress(fake_dll, "waveOutSetPlaybackRate");
	waveOutSetVolume = GetProcAddress(fake_dll, "waveOutSetVolume");
	waveOutUnprepareHeader = GetProcAddress(fake_dll, "waveOutUnprepareHeader");
	waveOutWrite = GetProcAddress(fake_dll, "waveOutWrite");
	wid32Message = GetProcAddress(fake_dll, "wid32Message");
	wod32Message = GetProcAddress(fake_dll, "wod32Message");
}
