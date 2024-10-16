#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_MapObjectRankUpCharacterModel.BP_MapObjectRankUpCharacterModel_C
// 0x0000 (0x0240 - 0x0240)
class UBP_MapObjectRankUpCharacterModel_C final : public UPalMapObjectRankUpCharacterModel
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapObjectRankUpCharacterModel_C">();
	}
	static class UBP_MapObjectRankUpCharacterModel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_MapObjectRankUpCharacterModel_C>();
	}
};
static_assert(alignof(UBP_MapObjectRankUpCharacterModel_C) == 0x000008, "Wrong alignment on UBP_MapObjectRankUpCharacterModel_C");
static_assert(sizeof(UBP_MapObjectRankUpCharacterModel_C) == 0x000240, "Wrong size on UBP_MapObjectRankUpCharacterModel_C");

}

