#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalShopManager.BP_PalShopManager_C
// 0x0000 (0x01A8 - 0x01A8)
class UBP_PalShopManager_C final : public UPalShopManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalShopManager_C">();
	}
	static class UBP_PalShopManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalShopManager_C>();
	}
};
static_assert(alignof(UBP_PalShopManager_C) == 0x000008, "Wrong alignment on UBP_PalShopManager_C");
static_assert(sizeof(UBP_PalShopManager_C) == 0x0001A8, "Wrong size on UBP_PalShopManager_C");

}

