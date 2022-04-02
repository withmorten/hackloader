#include "hackloader.h"

FARPROC DirectSoundCreate;
FARPROC DirectSoundEnumerateA;
FARPROC DirectSoundEnumerateW;
FARPROC DllCanUnloadNow;
FARPROC DllGetClassObject;
FARPROC DirectSoundCaptureCreate;
FARPROC DirectSoundCaptureEnumerateA;
FARPROC DirectSoundCaptureEnumerateW;
FARPROC GetDeviceID;
FARPROC DirectSoundFullDuplexCreate;
FARPROC DirectSoundCreate8;
FARPROC DirectSoundCaptureCreate8;

__declspec(naked) void _DirectSoundCreate() { jmp(DirectSoundCreate); }
__declspec(naked) void _DirectSoundEnumerateA() { jmp(DirectSoundEnumerateA); }
__declspec(naked) void _DirectSoundEnumerateW() { jmp(DirectSoundEnumerateW); }
__declspec(naked) void _DllCanUnloadNow() { jmp(DllCanUnloadNow); }
__declspec(naked) void _DllGetClassObject() { jmp(DllGetClassObject); }
__declspec(naked) void _DirectSoundCaptureCreate() { jmp(DirectSoundCaptureCreate); }
__declspec(naked) void _DirectSoundCaptureEnumerateA() { jmp(DirectSoundCaptureEnumerateA); }
__declspec(naked) void _DirectSoundCaptureEnumerateW() { jmp(DirectSoundCaptureEnumerateW); }
__declspec(naked) void _GetDeviceID() { jmp(GetDeviceID); }
__declspec(naked) void _DirectSoundFullDuplexCreate() { jmp(DirectSoundFullDuplexCreate); }
__declspec(naked) void _DirectSoundCreate8() { jmp(DirectSoundCreate8); }
__declspec(naked) void _DirectSoundCaptureCreate8() { jmp(DirectSoundCaptureCreate8); }

void init_fake_dll()
{
	DirectSoundCreate = GetProcAddress(fake_dll, "DirectSoundCreate");
	DirectSoundEnumerateA = GetProcAddress(fake_dll, "DirectSoundEnumerateA");
	DirectSoundEnumerateW = GetProcAddress(fake_dll, "DirectSoundEnumerateW");
	DllCanUnloadNow = GetProcAddress(fake_dll, "DllCanUnloadNow");
	DllGetClassObject = GetProcAddress(fake_dll, "DllGetClassObject");
	DirectSoundCaptureCreate = GetProcAddress(fake_dll, "DirectSoundCaptureCreate");
	DirectSoundCaptureEnumerateA = GetProcAddress(fake_dll, "DirectSoundCaptureEnumerateA");
	DirectSoundCaptureEnumerateW = GetProcAddress(fake_dll, "DirectSoundCaptureEnumerateW");
	GetDeviceID = GetProcAddress(fake_dll, "GetDeviceID");
	DirectSoundFullDuplexCreate = GetProcAddress(fake_dll, "DirectSoundFullDuplexCreate");
	DirectSoundCreate8 = GetProcAddress(fake_dll, "DirectSoundCreate8");
	DirectSoundCaptureCreate8 = GetProcAddress(fake_dll, "DirectSoundCaptureCreate8");
}
