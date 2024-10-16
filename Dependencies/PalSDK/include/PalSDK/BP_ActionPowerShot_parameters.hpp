#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_ActionPowerShot.BP_ActionPowerShot_C.ExecuteUbergraph_BP_ActionPowerShot
// 0x0018 (0x0018 - 0x0000)
struct BP_ActionPowerShot_C_ExecuteUbergraph_BP_ActionPowerShot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerControlled_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionPowerShot_C_ExecuteUbergraph_BP_ActionPowerShot) == 0x000008, "Wrong alignment on BP_ActionPowerShot_C_ExecuteUbergraph_BP_ActionPowerShot");
static_assert(sizeof(BP_ActionPowerShot_C_ExecuteUbergraph_BP_ActionPowerShot) == 0x000018, "Wrong size on BP_ActionPowerShot_C_ExecuteUbergraph_BP_ActionPowerShot");
static_assert(offsetof(BP_ActionPowerShot_C_ExecuteUbergraph_BP_ActionPowerShot, EntryPoint) == 0x000000, "Member 'BP_ActionPowerShot_C_ExecuteUbergraph_BP_ActionPowerShot::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionPowerShot_C_ExecuteUbergraph_BP_ActionPowerShot, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionPowerShot_C_ExecuteUbergraph_BP_ActionPowerShot::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPowerShot_C_ExecuteUbergraph_BP_ActionPowerShot, CallFunc_IsPlayerControlled_ReturnValue) == 0x000010, "Member 'BP_ActionPowerShot_C_ExecuteUbergraph_BP_ActionPowerShot::CallFunc_IsPlayerControlled_ReturnValue' has a wrong offset!");

// Function BP_ActionPowerShot.BP_ActionPowerShot_C.OnSpawnEffect
// 0x00A8 (0x00A8 - 0x0000)
struct BP_ActionPowerShot_C_OnSpawnEffect final
{
public:
	class APalSkillEffectBase*                    Effect_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetPredictedTargetLocation_Location;      // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionPowerShot_C_OnSpawnEffect) == 0x000008, "Wrong alignment on BP_ActionPowerShot_C_OnSpawnEffect");
static_assert(sizeof(BP_ActionPowerShot_C_OnSpawnEffect) == 0x0000A8, "Wrong size on BP_ActionPowerShot_C_OnSpawnEffect");
static_assert(offsetof(BP_ActionPowerShot_C_OnSpawnEffect, Effect_0) == 0x000000, "Member 'BP_ActionPowerShot_C_OnSpawnEffect::Effect_0' has a wrong offset!");
static_assert(offsetof(BP_ActionPowerShot_C_OnSpawnEffect, CallFunc_GetPredictedTargetLocation_Location) == 0x000008, "Member 'BP_ActionPowerShot_C_OnSpawnEffect::CallFunc_GetPredictedTargetLocation_Location' has a wrong offset!");
static_assert(offsetof(BP_ActionPowerShot_C_OnSpawnEffect, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'BP_ActionPowerShot_C_OnSpawnEffect::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPowerShot_C_OnSpawnEffect, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'BP_ActionPowerShot_C_OnSpawnEffect::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPowerShot_C_OnSpawnEffect, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'BP_ActionPowerShot_C_OnSpawnEffect::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPowerShot_C_OnSpawnEffect, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000048, "Member 'BP_ActionPowerShot_C_OnSpawnEffect::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPowerShot_C_OnSpawnEffect, CallFunc_Normal_ReturnValue) == 0x000060, "Member 'BP_ActionPowerShot_C_OnSpawnEffect::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPowerShot_C_OnSpawnEffect, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000078, "Member 'BP_ActionPowerShot_C_OnSpawnEffect::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPowerShot_C_OnSpawnEffect, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000090, "Member 'BP_ActionPowerShot_C_OnSpawnEffect::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");

// Function BP_ActionPowerShot.BP_ActionPowerShot_C.SetBulletSpeed
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionPowerShot_C_SetBulletSpeed final
{
public:
	class APalSkillEffectBase*                    Effect_0;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionPowerShot_C_SetBulletSpeed) == 0x000008, "Wrong alignment on BP_ActionPowerShot_C_SetBulletSpeed");
static_assert(sizeof(BP_ActionPowerShot_C_SetBulletSpeed) == 0x000008, "Wrong size on BP_ActionPowerShot_C_SetBulletSpeed");
static_assert(offsetof(BP_ActionPowerShot_C_SetBulletSpeed, Effect_0) == 0x000000, "Member 'BP_ActionPowerShot_C_SetBulletSpeed::Effect_0' has a wrong offset!");

// Function BP_ActionPowerShot.BP_ActionPowerShot_C.SetHomingTarget
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionPowerShot_C_SetHomingTarget final
{
public:
	class APalSkillEffectBase*                    Effect_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionPowerShot_C_SetHomingTarget) == 0x000008, "Wrong alignment on BP_ActionPowerShot_C_SetHomingTarget");
static_assert(sizeof(BP_ActionPowerShot_C_SetHomingTarget) == 0x000008, "Wrong size on BP_ActionPowerShot_C_SetHomingTarget");
static_assert(offsetof(BP_ActionPowerShot_C_SetHomingTarget, Effect_0) == 0x000000, "Member 'BP_ActionPowerShot_C_SetHomingTarget::Effect_0' has a wrong offset!");

}

