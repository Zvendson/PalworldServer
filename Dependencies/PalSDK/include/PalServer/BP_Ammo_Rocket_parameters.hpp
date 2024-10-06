#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function BP_Ammo_Rocket.BP_Ammo_Rocket_C.SetTranformForReload
// 0x00C0 (0x00C0 - 0x0000)
struct BP_Ammo_Rocket_C_SetTranformForReload final
{
public:
	struct FTransform                             AmmoReloadingTransform;                            // 0x0000(0x0060)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0060(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Ammo_Rocket_C_SetTranformForReload) == 0x000010, "Wrong alignment on BP_Ammo_Rocket_C_SetTranformForReload");
static_assert(sizeof(BP_Ammo_Rocket_C_SetTranformForReload) == 0x0000C0, "Wrong size on BP_Ammo_Rocket_C_SetTranformForReload");
static_assert(offsetof(BP_Ammo_Rocket_C_SetTranformForReload, AmmoReloadingTransform) == 0x000000, "Member 'BP_Ammo_Rocket_C_SetTranformForReload::AmmoReloadingTransform' has a wrong offset!");
static_assert(offsetof(BP_Ammo_Rocket_C_SetTranformForReload, CallFunc_MakeTransform_ReturnValue) == 0x000060, "Member 'BP_Ammo_Rocket_C_SetTranformForReload::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");

// Function BP_Ammo_Rocket.BP_Ammo_Rocket_C.UserConstructionScript
// 0x0060 (0x0060 - 0x0000)
struct BP_Ammo_Rocket_C_UserConstructionScript final
{
public:
	struct FTransform                             CallFunc_SetTranformForReload_AmmoReloadingTransform; // 0x0000(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Ammo_Rocket_C_UserConstructionScript) == 0x000010, "Wrong alignment on BP_Ammo_Rocket_C_UserConstructionScript");
static_assert(sizeof(BP_Ammo_Rocket_C_UserConstructionScript) == 0x000060, "Wrong size on BP_Ammo_Rocket_C_UserConstructionScript");
static_assert(offsetof(BP_Ammo_Rocket_C_UserConstructionScript, CallFunc_SetTranformForReload_AmmoReloadingTransform) == 0x000000, "Member 'BP_Ammo_Rocket_C_UserConstructionScript::CallFunc_SetTranformForReload_AmmoReloadingTransform' has a wrong offset!");

}

