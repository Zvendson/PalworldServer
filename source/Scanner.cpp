#include "PalManager/Scanner.hpp"

#include <Psapi.h>
#include <DbgHelp.h>



namespace Pal
{
    uint64 ToPattern(const char* combo, uint8* out_bytes, char* out_mask)
    {
        char lastChar = ' ';
        uint32 bytesLength = 0;

        for (unsigned int i = 0; i < strlen(combo); i++)
        {
            if ((combo[i] == '?' || combo[i] == '*' || combo[i] == '_') &&
                (lastChar != '?' && lastChar != '*' && lastChar != '_'))
            {
                out_bytes[bytesLength] = '\0';
                out_mask[bytesLength] = '?';
                bytesLength++;
            }

            else if (isspace(lastChar))
            {
                char repr = static_cast<uint8>(strtol(&combo[i], 0, 16));

                out_bytes[bytesLength] = repr;
                out_mask[bytesLength] = 'x';

                bytesLength++;
            }

            lastChar = combo[i];
        }

        out_bytes[bytesLength] = '\0';
        out_mask[bytesLength]  = '\0';

        return bytesLength;
    }

    Scanner::Scanner(const char* modulename)
    {
        m_Module = static_cast<DllModule>(GetModuleHandleA(modulename));
        auto module_base = reinterpret_cast<uint64>(m_Module);

        IMAGE_NT_HEADERS*     nt_header      = ImageNtHeader(m_Module);
        IMAGE_SECTION_HEADER* section_header = reinterpret_cast<IMAGE_SECTION_HEADER*>(nt_header + 1);

        for (uint64 i = 0; i < nt_header->FileHeader.NumberOfSections; i++)
        {
            auto name = reinterpret_cast<char*>(section_header->Name);

            uint8 section = 0xFF;
            if (memcmp(name, ".text", 5) == 0)
                section = ScanSection::TEXT;

            else if (memcmp(name, ".rdata", 6) == 0)
                section = ScanSection::RDATA;

            else if (memcmp(name, ".data", 5) == 0)
                section = ScanSection::DATA;

            else if (memcmp(name, ".idata", 6) == 0)
                section = ScanSection::IDATA;

            else if (memcmp(name, ".reloc", 6) == 0)
                section = ScanSection::RELOC;

            else if (memcmp(name, ".pdata", 6) == 0)
                section = ScanSection::PDATA;

            else if (memcmp(name, ".bss", 4) == 0)
                section = ScanSection::BSS;

            else if (memcmp(name, ".edata", 6) == 0)
                section = ScanSection::EDATA;

            else if (memcmp(name, ".rsrc", 5) == 0)
                section = ScanSection::RSRC;

            else if (memcmp(name, ".tls", 4) == 0)
                section = ScanSection::TLS;

            else if (memcmp(name, ".debug", 6) == 0)
                section = ScanSection::DEBUG;

            if (section != 0xFF)
            {
                uint8* start = reinterpret_cast<uint8*>(module_base + section_header->VirtualAddress);
                uint8* end   = start + section_header->Misc.VirtualSize;

                m_Sections[section].Start = start;
                m_Sections[section].End   = end;
            }

            section_header++;
        }
    }



    uint8* Scanner::IFind(const char* combo, uint8* start, uint8* end)
    {
        uint8 pattern[256];
        char    mask[256];
        ToPattern(combo, pattern, mask);

        return IFind(pattern, mask, start, end);
    }



    uint8* Scanner::IFind(const uint8* pattern, const char* mask, uint8* start, uint8* end)
    {
        uint64 len = strlen(mask);
        end -= len;

        auto check_pattern = [&](uint8* addr) -> bool
        {
            if (*reinterpret_cast<uint8*>(addr) != pattern[0])
                return false;

            for (uint64 index = 1; index < len; index++)
            {
                if (mask && mask[index] != 'x')
                    continue;

                uint8 byte = *reinterpret_cast<uint8*>(addr + index);
                if (byte != pattern[index])
                    return false;
            }

            return true;
        };

        if (start > end) // Scan backwards
        {
            for (uint8* address = start; address >= end; address--)
                if (check_pattern(address))
                    return address;
        }
        else             // Scan forwards
        {
            for (uint8* address = start; address < end; address++)
                if (check_pattern(address))
                    return address;
        }

        return nullptr;
    }



    uint8* Scanner::DereferenceCall(uint8* call_addr)
    {
        constexpr uint8 CALL = 0xE8;
        constexpr uint8 JMPL = 0xE9; // long jump
        constexpr uint8 JMPS = 0xEB; // short jump

        if (!call_addr)
            return nullptr;

        uint8* address = nullptr;
        uint8  opcode = *reinterpret_cast<uint8*>(call_addr);

        switch (opcode)
        {
            case CALL:
            case JMPL:
                {
                    const auto offset = *reinterpret_cast<int32*>(call_addr + 0x0001);
                    address = call_addr + 0x0005 + offset;
                }
                break;

            case JMPS:
                {
                    const auto offset = *reinterpret_cast<uint8*>(call_addr + 0x0001);
                    address = call_addr + 0x0002 + offset;
                }
                break;

            default: // Invalid opcode
                return nullptr;
        }

        // Check for nested JMPs or CALLs
        if (const auto nested_call = DereferenceCall(address))
            return nested_call;

        return address;
    }



    uint8* Scanner::DereferencePointer(uint8* address)
    {
        int32 rva = *reinterpret_cast<uint32*>(address);
        return address + rva + 0x0004;
    }

}


