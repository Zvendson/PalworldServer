#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalOptionSubsystem.BP_PalOptionSubsystem_C
// 0x0000 (0x0840 - 0x0840)
class UBP_PalOptionSubsystem_C final : public UPalOptionSubsystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalOptionSubsystem_C">();
	}
	static class UBP_PalOptionSubsystem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalOptionSubsystem_C>();
	}
};
static_assert(alignof(UBP_PalOptionSubsystem_C) == 0x000008, "Wrong alignment on UBP_PalOptionSubsystem_C");
static_assert(sizeof(UBP_PalOptionSubsystem_C) == 0x000840, "Wrong size on UBP_PalOptionSubsystem_C");

}

