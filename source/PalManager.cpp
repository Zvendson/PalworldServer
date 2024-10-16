#include "PalManager.hpp"

#include <PalManager/Scanner.hpp>
#include <MinHook.h>
#include "Core.hpp"
#include <PalSDK/Basic.hpp>
#include <PalSDK/Engine_classes.hpp>


void(*PalPrint)(const wchar_t* fmt, const wchar_t* text, uint64_t, uint64_t) = nullptr;
void hook_PalPrint(const wchar_t* fmt, const wchar_t* text, uint64_t, uint64_t)
{
    Pal::Logger& logger = Pal::Logger::GetLogger("PalWorld");
    std::wstring message (text);
    message.erase(message.size() - 1);

    logger.Info(message);
}

namespace Pal
{
    bool StartUp(HMODULE hInstance)
    {
        PAL_INFO("PalServer PID = {}", GetCurrentProcessId());

        Scanner scanner(nullptr);

        auto mh_status = MH_Initialize();
        if (mh_status != MH_OK)
        {
            PAL_CRITICAL("MH_Initialize failed with {}.", (int)mh_status);
            return false;
        }


        auto world = scanner.Find<uint8_t*>("48 C7 05 ?? ?? ?? ?? 00 00 00 00 33 DB", ScanSection::TEXT, [&](uint8_t* address)
        {
            address = scanner.DereferencePointer(address + 0x0003);
            return address + 0x0004;
        });
        PAL_SCAN("World", world);
        PalSDK::g_GWorld = reinterpret_cast<PalSDK::UWorld*>(world);


        auto palPrint = scanner.Find<uint8_t*>("44 39 65 9F 49 8B CF 48 0F 45 4D 97", ScanSection::TEXT, [&](uint8_t* address)
        {
            address = scanner.DereferenceCall(address + 0x000C);
            address = scanner.DereferenceCall(address + 0x000A);
            return address;
        });
        PAL_SCAN("PalPrint", palPrint);



        mh_status = MH_CreateHook((void*)palPrint, &hook_PalPrint, (void**)&PalPrint);
        if (mh_status != MH_OK)
        {
            PAL_ERROR("PalPrint-Hook creation failed with {}.", (int)mh_status);
            return false;
        }



        mh_status = MH_EnableHook(palPrint);
        if (mh_status != MH_OK)
        {
            PAL_ERROR("PalPrint-Hook enabling failed with {}.", (int)mh_status);
            return false;
        }

        return true;
    }



    bool Shutdown()
    {
        return false;
    }
}


