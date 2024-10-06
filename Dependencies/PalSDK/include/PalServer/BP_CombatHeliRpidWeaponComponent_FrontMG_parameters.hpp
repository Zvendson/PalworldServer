#pragma once

#include "Basic.hpp"


namespace PalServer::Params
{

// Function BP_CombatHeliRpidWeaponComponent_FrontMG.BP_CombatHeliRpidWeaponComponent_FrontMG_C.ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent_FrontMG
// 0x0030 (0x0030 - 0x0000)
struct BP_CombatHeliRpidWeaponComponent_FrontMG_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent_FrontMG final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_CombatHeli_C*                       K2Node_DynamicCast_AsBP_Combat_Heli;               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GunAim_DeltaTime_ImplicitCast;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CombatHeliRpidWeaponComponent_FrontMG_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent_FrontMG) == 0x000008, "Wrong alignment on BP_CombatHeliRpidWeaponComponent_FrontMG_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent_FrontMG");
static_assert(sizeof(BP_CombatHeliRpidWeaponComponent_FrontMG_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent_FrontMG) == 0x000030, "Wrong size on BP_CombatHeliRpidWeaponComponent_FrontMG_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent_FrontMG");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_FrontMG_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent_FrontMG, EntryPoint) == 0x000000, "Member 'BP_CombatHeliRpidWeaponComponent_FrontMG_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent_FrontMG::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_FrontMG_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent_FrontMG, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_CombatHeliRpidWeaponComponent_FrontMG_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent_FrontMG::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_FrontMG_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent_FrontMG, K2Node_DynamicCast_AsBP_Combat_Heli) == 0x000010, "Member 'BP_CombatHeliRpidWeaponComponent_FrontMG_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent_FrontMG::K2Node_DynamicCast_AsBP_Combat_Heli' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_FrontMG_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent_FrontMG, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_CombatHeliRpidWeaponComponent_FrontMG_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent_FrontMG::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_FrontMG_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent_FrontMG, K2Node_Event_DeltaSeconds) == 0x00001C, "Member 'BP_CombatHeliRpidWeaponComponent_FrontMG_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent_FrontMG::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_FrontMG_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent_FrontMG, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_CombatHeliRpidWeaponComponent_FrontMG_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent_FrontMG::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_FrontMG_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent_FrontMG, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'BP_CombatHeliRpidWeaponComponent_FrontMG_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent_FrontMG::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_FrontMG_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent_FrontMG, CallFunc_GunAim_DeltaTime_ImplicitCast) == 0x000028, "Member 'BP_CombatHeliRpidWeaponComponent_FrontMG_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent_FrontMG::CallFunc_GunAim_DeltaTime_ImplicitCast' has a wrong offset!");

// Function BP_CombatHeliRpidWeaponComponent_FrontMG.BP_CombatHeliRpidWeaponComponent_FrontMG_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_CombatHeliRpidWeaponComponent_FrontMG_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CombatHeliRpidWeaponComponent_FrontMG_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_CombatHeliRpidWeaponComponent_FrontMG_C_ReceiveTick");
static_assert(sizeof(BP_CombatHeliRpidWeaponComponent_FrontMG_C_ReceiveTick) == 0x000004, "Wrong size on BP_CombatHeliRpidWeaponComponent_FrontMG_C_ReceiveTick");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_FrontMG_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_CombatHeliRpidWeaponComponent_FrontMG_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

