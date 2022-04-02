#include "hackloader.h"

HMODULE fake_dll;

void load_fake_dll()
{
	char real_dll_path[MAX_PATH];

	GetEnvironmentVariable("windir", real_dll_path, MAX_PATH);
	strscat(real_dll_path, "\\System32\\" DLL_NAME ".dll");

	fake_dll = LoadLibrary(real_dll_path);

	init_fake_dll();
}

void load_dlls(void)
{
	FILE *cfg = fopen(DLL_NAME ".cfg", "r");

	char cwd[MAX_PATH];
	_getcwd(cwd, sizeof(cwd));

	if (cfg)
	{
		char line[MAX_PATH];

		while (fgets(line, sizeof(line), cfg))
		{
			if (*line == ';' || *line == '#') continue;

			char *p = strrchr(line, '\r');
			if (!p) p = strrchr(line, '\n');
			if (p) *p = '\0';

			LoadLibrary(line);
		}

		fclose(cfg);
	}
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
	if (fdwReason == DLL_PROCESS_ATTACH)
	{
		load_fake_dll();
		load_dlls();
	}

	if (fdwReason == DLL_PROCESS_DETACH)
	{
		FreeLibrary(fake_dll);
	}

	return TRUE;
}
