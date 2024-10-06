#pragma once

#include "Basic.hpp"

#include "BP_CombatHeliRpidWeaponComponent_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_CombatHeliRpidWeaponComponent_Bomber.BP_CombatHeliRpidWeaponComponent_Bomber_C
// 0x0000 (0x00E8 - 0x00E8)
class UBP_CombatHeliRpidWeaponComponent_Bomber_C final : public UBP_CombatHeliRpidWeaponComponent_C
{
public:
	void GetMuzzleTransform(struct FTransform* MzlTF);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CombatHeliRpidWeaponComponent_Bomber_C">();
	}
	static class UBP_CombatHeliRpidWeaponComponent_Bomber_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CombatHeliRpidWeaponComponent_Bomber_C>();
	}
};
static_assert(alignof(UBP_CombatHeliRpidWeaponComponent_Bomber_C) == 0x000008, "Wrong alignment on UBP_CombatHeliRpidWeaponComponent_Bomber_C");
static_assert(sizeof(UBP_CombatHeliRpidWeaponComponent_Bomber_C) == 0x0000E8, "Wrong size on UBP_CombatHeliRpidWeaponComponent_Bomber_C");

}

