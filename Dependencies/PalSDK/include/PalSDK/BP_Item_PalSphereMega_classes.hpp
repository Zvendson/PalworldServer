#pragma once

#include "Basic.hpp"

#include "BP_ItemBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_Item_PalSphereMega.BP_Item_PalSphereMega_C
// 0x0000 (0x02B0 - 0x02B0)
class ABP_Item_PalSphereMega_C final : public ABP_ItemBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Item_PalSphereMega_C">();
	}
	static class ABP_Item_PalSphereMega_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Item_PalSphereMega_C>();
	}
};
static_assert(alignof(ABP_Item_PalSphereMega_C) == 0x000008, "Wrong alignment on ABP_Item_PalSphereMega_C");
static_assert(sizeof(ABP_Item_PalSphereMega_C) == 0x0002B0, "Wrong size on ABP_Item_PalSphereMega_C");

}

