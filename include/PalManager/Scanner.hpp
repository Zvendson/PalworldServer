#pragma once

#include <functional>
#include "Types.hpp"



namespace Pal
{
    using ScanCallback = std::function<uint8*(uint8* address)>;

    enum ScanSection : uint16
    {
        TEXT,  // Contains the executable code of the program or library.
        RDATA, // Stores read-only data, such as constants or string literals.
        DATA,  // Contains initialized data, which is readable and writable.
        BSS,   // Contains uninitialized data. BSS (Block Started by Symbol) doesn't exist in the file itself but is allocated in memory during execution.
        EDATA, // Contains export directory information for functions and variables that the DLL exports for use by other modules.
        IDATA, // Stores import directory information, listing external functions or variables that the DLL imports from other modules.
        RELOC, // Contains relocation information, which is used to adjust memory addresses when the file is loaded into memory.
        RSRC,  // Contains resources like icons, bitmaps, dialogs, and other user interface elements.
        TLS,   // Contains thread-local storage data for variables that have unique values for each thread.
        PDATA, // Contains exception handling data, particularly for 64-bit Windows platforms.
        DEBUG, // Stores debug information (if any) such as symbol tables and line number information, used for debugging the executable or library.
        _MAX
    };


    class Scanner
    {
    public:
        Scanner(const char* modulename);

        /*
        Dereferences E8 and E9 instructions and retrieves the address. It checks for nested JMP instructions.
        */
        uint8* DereferenceCall(uint8* call_addr);

        /*
        Dereferences an pointer address from target address.
        */
        uint8* DereferencePointer(uint8* address);

        /*
        !!Spaces are required that the combo-pattern will work!!

        Find a specicifc combo-pattern in the desired module's section. Combo-pattern allow spaces and wildcards.
        Examples:
          1. "55 48 89 E5 48 C7 05 ? ? ? ? 69 00 00 00 48 89 EC C3"
          2. "55 48 89 E5 48 C7 05 * * * * 69 00 00 00 48 89 EC C3"
          3. "55 48 89 E5 48 C7 05 _ _ _ _ 69 00 00 00 48 89 EC C3"
          4. "55 48 89 E5 48 C7 05 ?? ?? ?? ?? 69 00 00 00 48 89 EC C3"
          5. "55 48 89 E5 48 C7 05 ** ** ** ** 69 00 00 00 48 89 EC C3"
          6. "55 48 89 E5 48 C7 05 __ __ __ __ 69 00 00 00 48 89 EC C3"
          7. "55 48 89 E5 48 C7 05 ?? ** __ ?* 69 00 00 00 48 89 EC C3"  // Not recommended but technical possible.
        */
        template<class T>
        T Find(const char* combo, ScanSection section, ScanCallback scan_cb)
        {
            uint8* address = IFind(combo, m_Sections[section].Start, m_Sections[section].End);
            return reinterpret_cast<T>(scan_cb ? scan_cb(address) : address);
        }

        /*
        Find a specific pattern between a start and end address. If start address is bigger than its end address,
        it will scan backwards.
        */
        template<class T>
        T Find(const char* combo, uint8* start, uint8* end, ScanCallback scan_cb)
        {
            uint8* address = IFind(combo, start, end);
            return reinterpret_cast<T>(scan_cb ? scan_cb(address) : address);
        }

        /*
        Find a specicifc pattern in the desired module's section.
        */
        template<class T>
        T Find(const uint8* pattern, const char* mask, ScanSection section, ScanCallback scan_cb)
        {
            uint8* address = IFind(pattern, mask, m_Sections[section].Start, m_Sections[section].End);
            return reinterpret_cast<T>(scan_cb ? scan_cb(address) : address);
        }

        /*
        Find a specific pattern between a start and end address. If start address is bigger than its end address,
        it will scan backwards.
        */
        template<class T>
        T Find(const uint8* pattern, const char* mask, uint8* start, uint8* end, ScanCallback scan_cb)
        {
            uint8* address = IFind(pattern, mask, start, end);
            return reinterpret_cast<T>(scan_cb ? scan_cb(address) : address);
        }

    protected: /* (I)nternal functions */
        uint8* IFind(const char* combo, uint8* start, uint8* end);
        uint8* IFind(const uint8* pattern, const char* mask, uint8* start, uint8* end);


    protected: /* Variables */
        struct SectionData
        {
            /* 0x0000 */ uint8* Start = nullptr;
            /* 0x0004 */ uint8* End   = nullptr;
        }         m_Sections[ScanSection::_MAX] = {};
        DllModule m_Module                      = nullptr;
    };

}


