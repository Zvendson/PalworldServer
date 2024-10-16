#include "PalManager/Scanner.hpp"

#include <Psapi.h>
#include <DbgHelp.h>



namespace
{
    size_t ToPattern(const char* combo, uint8_t* out_bytes, char* out_mask)
    {
        char lastChar = ' ';
        uint32_t bytesLength = 0;

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
                char repr = static_cast<uint8_t>(strtol(&combo[i], 0, 16));

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
}


namespace Pal
{

    Scanner::Scanner(const char* modulename)
    {
        m_Module = GetModuleHandleA(modulename);
        auto module_base = (uint64_t)m_Module;

        IMAGE_NT_HEADERS*     nt_header      = ImageNtHeader(m_Module);
        IMAGE_SECTION_HEADER* section_header = (IMAGE_SECTION_HEADER*)(nt_header + 1);

        for (size_t i = 0; i < nt_header->FileHeader.NumberOfSections; i++)
        {
            auto name = (char*)section_header->Name;

            uint8_t section = 0xFF;
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
                uint8_t* start = (uint8_t*)(module_base + section_header->VirtualAddress);
                uint8_t* end   = start + section_header->Misc.VirtualSize;

                m_Sections[section].Start = start;
                m_Sections[section].End   = end;
            }

            section_header++;
        }
    }



    uint8_t* Scanner::IFind(const char* combo, uint8_t* start, uint8_t* end)
    {
        uint8_t pattern[256];
        char    mask[256];
        ToPattern(combo, pattern, mask);

        return IFind(pattern, mask, start, end);
    }



    uint8_t* Scanner::IFind(const uint8_t* pattern, const char* mask, uint8_t* start, uint8_t* end)
    {
        size_t len = strlen(mask);
        end -= len;

        auto check_pattern = [&](uint8_t* addr) -> bool
        {
            if (*(uint8_t*)addr != pattern[0])
                return false;

            for (size_t index = 1; index < len; index++)
            {
                if (mask && mask[index] != 'x')
                    continue;

                uint8_t byte = *(uint8_t*)(addr + index);
                if (byte != pattern[index])
                    return false;
            }

            return true;
        };

        if (start > end) // Scan backwards
        {
            for (uint8_t* address = start; address >= end; address--)
                if (check_pattern(address))
                    return address;
        }
        else             // Scan forwards
        {
            for (uint8_t* address = start; address < end; address++)
                if (check_pattern(address))
                    return address;
        }

        return nullptr;
    }



    uint8_t* Scanner::DereferenceCall(uint8_t* call_addr)
    {
        constexpr uint8_t CALL = 0xE8;
        constexpr uint8_t JMPL = 0xE9; // long jump
        constexpr uint8_t JMPS = 0xEB; // short jump

        if (!call_addr)
            return nullptr;

        uint8_t* address = nullptr;
        uint8_t  opcode  = *(uint8_t*)call_addr;

        switch (opcode)
        {
            case CALL:
            case JMPL:
                {
                    const auto offset = *(int*)(call_addr + 0x0001);
                    address = call_addr + 0x0005 + offset;
                }
                break;

            case JMPS:
                {
                    const auto offset = *(uint8_t*)(call_addr + 0x0001);
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



    uint8_t* Scanner::DereferencePointer(uint8_t* address)
    {
        int rva = *(int*)(address);
        return address + rva + 0x0004;
    }

}


