#include <PalManager.hpp>
#include <wtypes.h>

namespace Pal
{
    bool StartUp(HMODULE hInstance);
    bool Shutdown();
}


BOOL APIENTRY DllMain(HINSTANCE hinstDLL, DWORD  fdwReason, LPVOID)
{
    if (fdwReason == DLL_PROCESS_ATTACH)
    {
        Pal::StartUp(hinstDLL);
    }
    else if (fdwReason == DLL_PROCESS_DETACH)
    {
        Pal::Shutdown();
    }

    return TRUE;
}