#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalDungeonWorldSubsystem.BP_PalDungeonWorldSubsystem_C
// 0x0000 (0x01A8 - 0x01A8)
class UBP_PalDungeonWorldSubsystem_C final : public UPalDungeonWorldSubsystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalDungeonWorldSubsystem_C">();
	}
	static class UBP_PalDungeonWorldSubsystem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalDungeonWorldSubsystem_C>();
	}
};
static_assert(alignof(UBP_PalDungeonWorldSubsystem_C) == 0x000008, "Wrong alignment on UBP_PalDungeonWorldSubsystem_C");
static_assert(sizeof(UBP_PalDungeonWorldSubsystem_C) == 0x0001A8, "Wrong size on UBP_PalDungeonWorldSubsystem_C");

}

