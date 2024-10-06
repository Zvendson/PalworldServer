#pragma once

#include "Basic.hpp"

#include "BP_MeleeWeaponBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PickaxeBase.BP_PickaxeBase_C
// 0x0000 (0x0588 - 0x0588)
class ABP_PickaxeBase_C final : public ABP_MeleeWeaponBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PickaxeBase_C">();
	}
	static class ABP_PickaxeBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PickaxeBase_C>();
	}
};
static_assert(alignof(ABP_PickaxeBase_C) == 0x000008, "Wrong alignment on ABP_PickaxeBase_C");
static_assert(sizeof(ABP_PickaxeBase_C) == 0x000588, "Wrong size on ABP_PickaxeBase_C");

}

