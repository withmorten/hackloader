#include "hackloader.h"

FARPROC DirectInput8Create;
FARPROC DllCanUnloadNow;
FARPROC DllGetClassObject;
FARPROC DllRegisterServer;
FARPROC DllUnregisterServer;
FARPROC GetdfDIJoystick;

__declspec(naked) void _DirectInput8Create() { jmp(DirectInput8Create); }
__declspec(naked) void _DllCanUnloadNow() { jmp(DllCanUnloadNow); }
__declspec(naked) void _DllGetClassObject() { jmp(DllGetClassObject); }
__declspec(naked) void _DllRegisterServer() { jmp(DllRegisterServer); }
__declspec(naked) void _DllUnregisterServer() { jmp(DllUnregisterServer); }
__declspec(naked) void _GetdfDIJoystick() { jmp(GetdfDIJoystick); }

void init_fake_dll()
{
	DirectInput8Create = GetProcAddress(fake_dll, "DirectInput8Create");
	DllCanUnloadNow = GetProcAddress(fake_dll, "DllCanUnloadNow");
	DllGetClassObject = GetProcAddress(fake_dll, "DllGetClassObject");
	DllRegisterServer = GetProcAddress(fake_dll, "DllRegisterServer");
	DllUnregisterServer = GetProcAddress(fake_dll, "DllUnregisterServer");
	GetdfDIJoystick = GetProcAddress(fake_dll, "GetdfDIJoystick");
}
