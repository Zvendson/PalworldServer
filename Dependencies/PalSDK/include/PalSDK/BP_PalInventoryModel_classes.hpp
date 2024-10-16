#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalInventoryModel.BP_PalInventoryModel_C
// 0x0000 (0x00A0 - 0x00A0)
class UBP_PalInventoryModel_C final : public UPalUIInventoryModel
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalInventoryModel_C">();
	}
	static class UBP_PalInventoryModel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalInventoryModel_C>();
	}
};
static_assert(alignof(UBP_PalInventoryModel_C) == 0x000008, "Wrong alignment on UBP_PalInventoryModel_C");
static_assert(sizeof(UBP_PalInventoryModel_C) == 0x0000A0, "Wrong size on UBP_PalInventoryModel_C");

}

