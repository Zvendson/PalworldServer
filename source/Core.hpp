#pragma once
#include <PalManager/Logger.hpp>



namespace Pal
{
    static Logger* GetLogger()
    {
        static Logger& logger = Logger::GetLogger("PalWorld");
        return &logger;
    }

}



#define PAL_TRACE(fmt, ...)    Pal::GetLogger()->Trace(fmt, ##__VA_ARGS__)
#define PAL_DEBUG(fmt, ...)    Pal::GetLogger()->Debug(fmt, ##__VA_ARGS__)
#define PAL_INFO(fmt, ...)     Pal::GetLogger()->Info(fmt, ##__VA_ARGS__)
#define PAL_WARN(fmt, ...)     Pal::GetLogger()->Warn(fmt, ##__VA_ARGS__)
#define PAL_ERROR(fmt, ...)    Pal::GetLogger()->Error(fmt, ##__VA_ARGS__)
#define PAL_CRITICAL(fmt, ...) Pal::GetLogger()->Critical(fmt, ##__VA_ARGS__)

#if _DEBUG
#define PAL_SCAN(name, addr) if (addr) PAL_INFO("[SCAN] Address '" name "' = {}", fmt::ptr(addr)); \
else PAL_ERROR("[SCAN] Address '" name "' = {}", fmt::ptr(addr))
#else
#define PAL_SCAN(name, addr) do {} while(0)
#endif