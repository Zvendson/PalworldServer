#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function BP_SkillEffect_PowerShot_Charge.BP_SkillEffect_PowerShot_Charge_C.ExecuteUbergraph_BP_SkillEffect_PowerShot_Charge
// 0x0028 (0x0028 - 0x0000)
struct BP_SkillEffect_PowerShot_Charge_C_ExecuteUbergraph_BP_SkillEffect_PowerShot_Charge final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_Event_TargetLocation;                       // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_Event_DeltaSecond;                          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_PowerShot_Charge_C_ExecuteUbergraph_BP_SkillEffect_PowerShot_Charge) == 0x000008, "Wrong alignment on BP_SkillEffect_PowerShot_Charge_C_ExecuteUbergraph_BP_SkillEffect_PowerShot_Charge");
static_assert(sizeof(BP_SkillEffect_PowerShot_Charge_C_ExecuteUbergraph_BP_SkillEffect_PowerShot_Charge) == 0x000028, "Wrong size on BP_SkillEffect_PowerShot_Charge_C_ExecuteUbergraph_BP_SkillEffect_PowerShot_Charge");
static_assert(offsetof(BP_SkillEffect_PowerShot_Charge_C_ExecuteUbergraph_BP_SkillEffect_PowerShot_Charge, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_PowerShot_Charge_C_ExecuteUbergraph_BP_SkillEffect_PowerShot_Charge::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_Charge_C_ExecuteUbergraph_BP_SkillEffect_PowerShot_Charge, K2Node_Event_TargetLocation) == 0x000008, "Member 'BP_SkillEffect_PowerShot_Charge_C_ExecuteUbergraph_BP_SkillEffect_PowerShot_Charge::K2Node_Event_TargetLocation' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_Charge_C_ExecuteUbergraph_BP_SkillEffect_PowerShot_Charge, K2Node_Event_DeltaSecond) == 0x000020, "Member 'BP_SkillEffect_PowerShot_Charge_C_ExecuteUbergraph_BP_SkillEffect_PowerShot_Charge::K2Node_Event_DeltaSecond' has a wrong offset!");

// Function BP_SkillEffect_PowerShot_Charge.BP_SkillEffect_PowerShot_Charge_C.FadeOutEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_SkillEffect_PowerShot_Charge_C_FadeOutEffect final
{
public:
	double                                        DeltaSecond;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_PowerShot_Charge_C_FadeOutEffect) == 0x000008, "Wrong alignment on BP_SkillEffect_PowerShot_Charge_C_FadeOutEffect");
static_assert(sizeof(BP_SkillEffect_PowerShot_Charge_C_FadeOutEffect) == 0x000008, "Wrong size on BP_SkillEffect_PowerShot_Charge_C_FadeOutEffect");
static_assert(offsetof(BP_SkillEffect_PowerShot_Charge_C_FadeOutEffect, DeltaSecond) == 0x000000, "Member 'BP_SkillEffect_PowerShot_Charge_C_FadeOutEffect::DeltaSecond' has a wrong offset!");

// Function BP_SkillEffect_PowerShot_Charge.BP_SkillEffect_PowerShot_Charge_C.ShootBullet
// 0x0018 (0x0018 - 0x0000)
struct BP_SkillEffect_PowerShot_Charge_C_ShootBullet final
{
public:
	struct FVector                                TargetLocation;                                    // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_PowerShot_Charge_C_ShootBullet) == 0x000008, "Wrong alignment on BP_SkillEffect_PowerShot_Charge_C_ShootBullet");
static_assert(sizeof(BP_SkillEffect_PowerShot_Charge_C_ShootBullet) == 0x000018, "Wrong size on BP_SkillEffect_PowerShot_Charge_C_ShootBullet");
static_assert(offsetof(BP_SkillEffect_PowerShot_Charge_C_ShootBullet, TargetLocation) == 0x000000, "Member 'BP_SkillEffect_PowerShot_Charge_C_ShootBullet::TargetLocation' has a wrong offset!");

}

