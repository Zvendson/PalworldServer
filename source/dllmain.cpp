#include "version/version.h"
#include <Scanner.hpp>
#include <PalServer.hpp>


BOOL APIENTRY DllMain(HINSTANCE hinstDLL, DWORD  fdwReason, LPVOID)
{
    if (fdwReason == DLL_PROCESS_ATTACH)
    {
        printf("PID = %d\n", GetCurrentProcessId());
        setupWrappers();

        PalServer::StartUp(hinstDLL);
    }

    return TRUE;
}

