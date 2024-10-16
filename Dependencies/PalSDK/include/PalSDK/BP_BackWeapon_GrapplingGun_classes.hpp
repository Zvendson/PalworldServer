#pragma once

#include "Basic.hpp"

#include "BP_BackWeaponBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_BackWeapon_GrapplingGun.BP_BackWeapon_GrapplingGun_C
// 0x0000 (0x0318 - 0x0318)
class ABP_BackWeapon_GrapplingGun_C final : public ABP_BackWeaponBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BackWeapon_GrapplingGun_C">();
	}
	static class ABP_BackWeapon_GrapplingGun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BackWeapon_GrapplingGun_C>();
	}
};
static_assert(alignof(ABP_BackWeapon_GrapplingGun_C) == 0x000008, "Wrong alignment on ABP_BackWeapon_GrapplingGun_C");
static_assert(sizeof(ABP_BackWeapon_GrapplingGun_C) == 0x000318, "Wrong size on ABP_BackWeapon_GrapplingGun_C");

}

