#include "version.h"




BOOL APIENTRY DllMain(HINSTANCE hinstDLL, DWORD  fdwReason, LPVOID)
{
    if (fdwReason == DLL_PROCESS_ATTACH)
    {
        setupWrappers();

        LoadLibrary(TEXT("PalManager.dll"));
    }

    return TRUE;
}

