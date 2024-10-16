#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_MapObjectRepairModel.BP_MapObjectRepairModel_C
// 0x0000 (0x0238 - 0x0238)
class UBP_MapObjectRepairModel_C final : public UPalMapObjectRepairItemModel
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapObjectRepairModel_C">();
	}
	static class UBP_MapObjectRepairModel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_MapObjectRepairModel_C>();
	}
};
static_assert(alignof(UBP_MapObjectRepairModel_C) == 0x000008, "Wrong alignment on UBP_MapObjectRepairModel_C");
static_assert(sizeof(UBP_MapObjectRepairModel_C) == 0x000238, "Wrong size on UBP_MapObjectRepairModel_C");

}

