#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_MapObjectTreasureBoxModel.BP_MapObjectTreasureBoxModel_C
// 0x0000 (0x0260 - 0x0260)
class UBP_MapObjectTreasureBoxModel_C final : public UPalMapObjectTreasureBoxModel
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapObjectTreasureBoxModel_C">();
	}
	static class UBP_MapObjectTreasureBoxModel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_MapObjectTreasureBoxModel_C>();
	}
};
static_assert(alignof(UBP_MapObjectTreasureBoxModel_C) == 0x000008, "Wrong alignment on UBP_MapObjectTreasureBoxModel_C");
static_assert(sizeof(UBP_MapObjectTreasureBoxModel_C) == 0x000260, "Wrong size on UBP_MapObjectTreasureBoxModel_C");

}

