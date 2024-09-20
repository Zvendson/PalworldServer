#pragma once

#include <cstdint>
#include <functional>
#include <wtypes.h>



namespace PalServer
{
    using ScanCallback = std::function<uint8_t*(uint8_t* address)>;

    enum ScanSection : uint16_t
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


    /* 
    Converts a Combo Pattern to a byte array and mask in compile time.
    Wildcards need to be single chars of either '?', '_' or '*'.
    */
    template<size_t N>
    class Pattern 
    {
    public:

        constexpr Pattern(const char (&arr)[N]) 
        {
            char combo[N];
            size_t n = 0;

            // cut off spaces
            for (size_t i = 0; i < N; i++)
            {
                if (arr[i] == '\0')
                    break;

                if (arr[i] == ' ')
                    continue;

                combo[n++] = arr[i];
            }
            combo[n] = '\0';

            // construct byte array and mask
            for (size_t i = 0; i < n; i++) 
            {
                if (combo[i] == '?' || combo[i] == '*' || combo[i] == '_') 
                {
                    m_Bytes[m_Size]  = 0;
                    m_Mask[m_Size++] = '?';
                    continue;
                } 

                m_Bytes[m_Size]  = (hex_char_to_int(combo[i]) << 4) | hex_char_to_int(combo[++i]);
                m_Mask[m_Size++] = 'x';
            }

            m_Bytes[m_Size] = 0;
            m_Mask[m_Size] = '\0';
        }

        /* Returns the byte array of the pattern. */
        inline constexpr const uint8_t* Bytes() const { return m_Bytes; }

        /* Returns the mask of the pattern. */
        inline constexpr const char* Mask() const { return m_Mask; }

        /* Returns the length/size of the pattern. */
        inline constexpr size_t Size() const { return m_Size; }

    private:
        uint8_t m_Bytes[N] = {};
        char    m_Mask[N]  = {};
        size_t  m_Size     = 0;

        static constexpr uint8_t hex_char_to_int(const char hex) 
        {
            if (hex >= '0' && hex <= '9')
                return hex - '0';

            if (hex >= 'a' && hex <= 'f')
                return hex - 'a' + 10;

            if (hex >= 'A' && hex <= 'F')
                return hex - 'A' + 10;

            return 0;
        }
    };


    class Scanner
    {
    public:
        Scanner(const char* modulename);

        /* 
        Dereferences E8 and E9 instructions and retrieves the address. It checks for nested JMP instructions.
        */
        uint8_t* DereferenceCall(uint8_t* call_addr);

        /*
        Dereferences an pointer address from target address.
        */
        uint8_t* DereferencePointer(uint8_t* address);

        /* 
        Find a specific pattern between a start and end address. If start address is bigger than its end address, 
        it will scan backwards.
        */
        template<class T, size_t N>
        T Find(const Pattern<N>& combo, uint8_t* start, uint8_t* end, ScanCallback scan_cb)
        {
            uint8_t* address = IFind(
                combo.Bytes(), 
                combo.Mask(), 
                start, 
                end
            );

            return (T)(scan_cb ? scan_cb(address) : address);
        }

        /*
        Find a specicifc pattern in the desired module section.
        */
        template<class T, size_t N>
        T Find(const Pattern<N>& combo, ScanSection section, ScanCallback scan_cb)
        {
            uint8_t* address = IFind(
                combo.Bytes(), 
                combo.Mask(), 
                m_Sections[section].Start, 
                m_Sections[section].End
            );

            return (T)(scan_cb ? scan_cb(address) : address);
        }


    protected: /* (I)nternal functions */
        uint8_t* IFind(const uint8_t* pattern, const char* mask, uint8_t* start, uint8_t* end);


    protected: /* Variables */
        struct SectionData
        {
            /* 0x0000 */ uint8_t* Start = nullptr;
            /* 0x0004 */ uint8_t* End   = nullptr;
        }       m_Sections[ScanSection::_MAX] = {};
        HMODULE m_Module                      = nullptr;
    };

}


