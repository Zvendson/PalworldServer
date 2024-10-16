#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SupplyManager.BP_SupplyManager_C
// 0x0000 (0x01D8 - 0x01D8)
class UBP_SupplyManager_C final : public UPalSupplyManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SupplyManager_C">();
	}
	static class UBP_SupplyManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SupplyManager_C>();
	}
};
static_assert(alignof(UBP_SupplyManager_C) == 0x000008, "Wrong alignment on UBP_SupplyManager_C");
static_assert(sizeof(UBP_SupplyManager_C) == 0x0001D8, "Wrong size on UBP_SupplyManager_C");

}

