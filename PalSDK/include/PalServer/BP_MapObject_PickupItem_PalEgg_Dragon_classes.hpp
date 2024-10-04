#pragma once

#include "Basic.hpp"

#include "BP_MapObject_PickupItem_PalEgg_Base_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_MapObject_PickupItem_PalEgg_Dragon.BP_MapObject_PickupItem_PalEgg_Dragon_C
// 0x0000 (0x0428 - 0x0428)
class ABP_MapObject_PickupItem_PalEgg_Dragon_C final : public ABP_MapObject_PickupItem_PalEgg_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapObject_PickupItem_PalEgg_Dragon_C">();
	}
	static class ABP_MapObject_PickupItem_PalEgg_Dragon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MapObject_PickupItem_PalEgg_Dragon_C>();
	}
};
static_assert(alignof(ABP_MapObject_PickupItem_PalEgg_Dragon_C) == 0x000008, "Wrong alignment on ABP_MapObject_PickupItem_PalEgg_Dragon_C");
static_assert(sizeof(ABP_MapObject_PickupItem_PalEgg_Dragon_C) == 0x000428, "Wrong size on ABP_MapObject_PickupItem_PalEgg_Dragon_C");

}

