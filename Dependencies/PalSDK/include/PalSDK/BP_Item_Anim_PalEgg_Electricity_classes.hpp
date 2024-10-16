#pragma once

#include "Basic.hpp"

#include "BP_Item_Anim_PalEgg_Base_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_Item_Anim_PalEgg_Electricity.BP_Item_Anim_PalEgg_Electricity_C
// 0x0000 (0x02B0 - 0x02B0)
class ABP_Item_Anim_PalEgg_Electricity_C final : public ABP_Item_Anim_PalEgg_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Item_Anim_PalEgg_Electricity_C">();
	}
	static class ABP_Item_Anim_PalEgg_Electricity_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Item_Anim_PalEgg_Electricity_C>();
	}
};
static_assert(alignof(ABP_Item_Anim_PalEgg_Electricity_C) == 0x000008, "Wrong alignment on ABP_Item_Anim_PalEgg_Electricity_C");
static_assert(sizeof(ABP_Item_Anim_PalEgg_Electricity_C) == 0x0002B0, "Wrong size on ABP_Item_Anim_PalEgg_Electricity_C");

}

