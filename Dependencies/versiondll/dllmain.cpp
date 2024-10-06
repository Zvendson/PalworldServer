#include "version.h"




BOOL APIENTRY DllMain(HINSTANCE hinstDLL, DWORD  fdwReason, LPVOID)
{
    if (fdwReason == DLL_PROCESS_ATTACH)
    {
        printf("PID = %d\n", GetCurrentProcessId());
        setupWrappers();
    }

    return TRUE;
}

