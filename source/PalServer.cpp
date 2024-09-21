#include "PalServer.hpp"

#include <Scanner.hpp>


class UWorld
{
public:
    void* unk;
};


namespace PalServer
{
    bool StartUp(HMODULE hInstance)
    {
        Scanner scanner(nullptr);

        auto world = scanner.Find<uint8_t*>("48 C7 05 ?? ?? ?? ?? 00 00 00 00 33 DB", PalServer::ScanSection::TEXT, [&](uint8_t* address)
        {
            address = scanner.DereferencePointer(address + 0x0003);
            return address + 0x0004;
        });
        printf("Address 'World' = %p\n", world);

        return true;
    }
}


