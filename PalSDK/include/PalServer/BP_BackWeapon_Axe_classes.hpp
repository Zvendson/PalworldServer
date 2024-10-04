#pragma once

#include "Basic.hpp"

#include "BP_BackWeaponBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_BackWeapon_Axe.BP_BackWeapon_Axe_C
// 0x0000 (0x0318 - 0x0318)
class ABP_BackWeapon_Axe_C final : public ABP_BackWeaponBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BackWeapon_Axe_C">();
	}
	static class ABP_BackWeapon_Axe_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BackWeapon_Axe_C>();
	}
};
static_assert(alignof(ABP_BackWeapon_Axe_C) == 0x000008, "Wrong alignment on ABP_BackWeapon_Axe_C");
static_assert(sizeof(ABP_BackWeapon_Axe_C) == 0x000318, "Wrong size on ABP_BackWeapon_Axe_C");

}

