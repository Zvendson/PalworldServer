#ifndef PAL_MACROS_GUARD
#define PAL_MACROS_GUARD



#ifdef PalManager_EXPORTS
#define PALAPI __declspec(dllexport)
#else
#define PALAPI __declspec(dllimport)
#endif



#endif // PAL_MACROS_GUARD
