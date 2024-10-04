#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalArenaWorldSubsystem.BP_PalArenaWorldSubsystem_C
// 0x0000 (0x00B8 - 0x00B8)
class UBP_PalArenaWorldSubsystem_C final : public UPalArenaWorldSubsystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalArenaWorldSubsystem_C">();
	}
	static class UBP_PalArenaWorldSubsystem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalArenaWorldSubsystem_C>();
	}
};
static_assert(alignof(UBP_PalArenaWorldSubsystem_C) == 0x000008, "Wrong alignment on UBP_PalArenaWorldSubsystem_C");
static_assert(sizeof(UBP_PalArenaWorldSubsystem_C) == 0x0000B8, "Wrong size on UBP_PalArenaWorldSubsystem_C");

}

