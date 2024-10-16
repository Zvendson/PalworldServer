#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_CombatHeliRpidWeaponComponent_Bomber.BP_CombatHeliRpidWeaponComponent_Bomber_C.GetMuzzleTransform
// 0x00C0 (0x00C0 - 0x0000)
struct BP_CombatHeliRpidWeaponComponent_Bomber_C_GetMuzzleTransform final
{
public:
	struct FTransform                             MzlTF;                                             // 0x0000(0x0060)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue;           // 0x0060(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CombatHeliRpidWeaponComponent_Bomber_C_GetMuzzleTransform) == 0x000010, "Wrong alignment on BP_CombatHeliRpidWeaponComponent_Bomber_C_GetMuzzleTransform");
static_assert(sizeof(BP_CombatHeliRpidWeaponComponent_Bomber_C_GetMuzzleTransform) == 0x0000C0, "Wrong size on BP_CombatHeliRpidWeaponComponent_Bomber_C_GetMuzzleTransform");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_Bomber_C_GetMuzzleTransform, MzlTF) == 0x000000, "Member 'BP_CombatHeliRpidWeaponComponent_Bomber_C_GetMuzzleTransform::MzlTF' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_Bomber_C_GetMuzzleTransform, CallFunc_GetSocketTransform_ReturnValue) == 0x000060, "Member 'BP_CombatHeliRpidWeaponComponent_Bomber_C_GetMuzzleTransform::CallFunc_GetSocketTransform_ReturnValue' has a wrong offset!");

}

