#include "version/version.h"
#include <Scanner.hpp>


BOOL APIENTRY DllMain(HINSTANCE hinstDLL, DWORD  fdwReason, LPVOID)
{
    if (fdwReason == DLL_PROCESS_ATTACH)
    {
        printf("PID = %d\n", GetCurrentProcessId());
        setupWrappers();


        constexpr PalServer::Pattern PATTERN_GWORLD("48 C7 05 ? ? ? ? ? ? ? ? 33 DB 49 8B 7F 70 85 DB");


        PalServer::Scanner scanner(nullptr);
        auto GWorld = scanner.Find<uint8_t*>(PATTERN_GWORLD, PalServer::ScanSection::TEXT, [&](uint8_t* address)
        {
            address = scanner.DereferencePointer(address + 0x0003);
            return address + 0x0004;
        });
        printf("GWorld = %p\n", GWorld);
    }

    return TRUE;
}

