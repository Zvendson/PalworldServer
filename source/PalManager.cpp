#include "PalManager.hpp"

#include <PalManager/Scanner.hpp>
#include <MinHook.h>
#include <PalManager/Logger.hpp>

std::string WideToString(const wchar_t* str)
{
    if (str == nullptr)
        return "";

    size_t length =    wcslen(str);
    const auto sz = WideCharToMultiByte(CP_UTF8, 0, str, static_cast<int>(length), nullptr, 0, nullptr, nullptr);
    if (sz <= 0)
        return "";

    std::string result(sz, 0);
    WideCharToMultiByte(CP_UTF8, 0, str, static_cast<int>(length), &result.at(0), sz, nullptr, nullptr);
    return result;
}

class UWorld
{
public:
    void* unk;
};

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
        Logger& logger = Logger::GetLogger("PalWorld");

        logger.Info("PalServer PID = {}", GetCurrentProcessId());


        auto mh_status = MH_Initialize();
        if (mh_status != MH_OK)
        {
            logger.Critical("MH_Initialize failed with {}.", (int)mh_status);
            return false;
        }


        Scanner scanner(nullptr);

        auto world = scanner.Find<uint8_t*>("48 C7 05 ?? ?? ?? ?? 00 00 00 00 33 DB", ScanSection::TEXT, [&](uint8_t* address)
        {
            address = scanner.DereferencePointer(address + 0x0003);
            return address + 0x0004;
        });
        logger.Info("[SCAN] Address 'World' = {}", fmt::ptr(world));



        auto palPrint = scanner.Find<uint8_t*>("44 39 65 9F 49 8B CF 48 0F 45 4D 97", ScanSection::TEXT, [&](uint8_t* address)
        {
            address = scanner.DereferenceCall(address + 0x000C);
            address = scanner.DereferenceCall(address + 0x000A);
            return address;
        });
        logger.Info("[SCAN] Address 'PalPrint' = {}", fmt::ptr(world));



        mh_status = MH_CreateHook((void*)palPrint, &hook_PalPrint, (void**)&PalPrint);
        if (mh_status != MH_OK)
        {
            logger.Error("PalPrint-Hook creation failed with {}.", (int)mh_status);
            return false;
        }



        mh_status = MH_EnableHook(palPrint);
        if (mh_status != MH_OK)
        {
            logger.Error("PalPrint-Hook enabling failed with {}.", (int)mh_status);
            return false;
        }

        return true;
    }



    bool Shutdown()
    {
        return false;
    }
}


