#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalDatabaseCharacterParameter.BP_PalDatabaseCharacterParameter_C
// 0x0000 (0x0180 - 0x0180)
class UBP_PalDatabaseCharacterParameter_C final : public UPalDatabaseCharacterParameter
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalDatabaseCharacterParameter_C">();
	}
	static class UBP_PalDatabaseCharacterParameter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalDatabaseCharacterParameter_C>();
	}
};
static_assert(alignof(UBP_PalDatabaseCharacterParameter_C) == 0x000008, "Wrong alignment on UBP_PalDatabaseCharacterParameter_C");
static_assert(sizeof(UBP_PalDatabaseCharacterParameter_C) == 0x000180, "Wrong size on UBP_PalDatabaseCharacterParameter_C");

}

