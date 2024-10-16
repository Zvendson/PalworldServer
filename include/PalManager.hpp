#include <wtypes.h>

#ifdef PALMANAGER_EXPORTS
#define PALMANAGER_API __declspec(dllexport)
#else
#define PALMANAGER_API __declspec(dllimport)
#endif

namespace Pal
{
    bool StartUp(HMODULE hInstance);
    bool Shutdown();
}