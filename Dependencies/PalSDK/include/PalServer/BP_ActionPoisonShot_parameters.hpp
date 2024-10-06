#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function BP_ActionPoisonShot.BP_ActionPoisonShot_C.ExecuteUbergraph_BP_ActionPoisonShot
// 0x0020 (0x0020 - 0x0000)
struct BP_ActionPoisonShot_C_ExecuteUbergraph_BP_ActionPoisonShot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTime;                            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerControlled_ReturnValue;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionPoisonShot_C_ExecuteUbergraph_BP_ActionPoisonShot) == 0x000008, "Wrong alignment on BP_ActionPoisonShot_C_ExecuteUbergraph_BP_ActionPoisonShot");
static_assert(sizeof(BP_ActionPoisonShot_C_ExecuteUbergraph_BP_ActionPoisonShot) == 0x000020, "Wrong size on BP_ActionPoisonShot_C_ExecuteUbergraph_BP_ActionPoisonShot");
static_assert(offsetof(BP_ActionPoisonShot_C_ExecuteUbergraph_BP_ActionPoisonShot, EntryPoint) == 0x000000, "Member 'BP_ActionPoisonShot_C_ExecuteUbergraph_BP_ActionPoisonShot::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionPoisonShot_C_ExecuteUbergraph_BP_ActionPoisonShot, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'BP_ActionPoisonShot_C_ExecuteUbergraph_BP_ActionPoisonShot::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPoisonShot_C_ExecuteUbergraph_BP_ActionPoisonShot, K2Node_Event_DeltaTime) == 0x000008, "Member 'BP_ActionPoisonShot_C_ExecuteUbergraph_BP_ActionPoisonShot::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_ActionPoisonShot_C_ExecuteUbergraph_BP_ActionPoisonShot, CallFunc_IsValid_ReturnValue_1) == 0x00000C, "Member 'BP_ActionPoisonShot_C_ExecuteUbergraph_BP_ActionPoisonShot::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionPoisonShot_C_ExecuteUbergraph_BP_ActionPoisonShot, CallFunc_GetActionCharacter_ReturnValue) == 0x000010, "Member 'BP_ActionPoisonShot_C_ExecuteUbergraph_BP_ActionPoisonShot::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPoisonShot_C_ExecuteUbergraph_BP_ActionPoisonShot, CallFunc_IsPlayerControlled_ReturnValue) == 0x000018, "Member 'BP_ActionPoisonShot_C_ExecuteUbergraph_BP_ActionPoisonShot::CallFunc_IsPlayerControlled_ReturnValue' has a wrong offset!");

// Function BP_ActionPoisonShot.BP_ActionPoisonShot_C.OnSpawnEffect
// 0x00C8 (0x00C8 - 0x0000)
struct BP_ActionPoisonShot_C_OnSpawnEffect final
{
public:
	class APalSkillEffectBase*                    Effect_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetLocation;                                    // 0x0008(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetPredictedTargetLocation_Location;      // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_DynamicCast_AsPrimitive_Component;          // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity; // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue; // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetPredictedTargetLocation_Location_1;    // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerControlled_ReturnValue;           // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetTargetLocation_ReturnValue;            // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionPoisonShot_C_OnSpawnEffect) == 0x000008, "Wrong alignment on BP_ActionPoisonShot_C_OnSpawnEffect");
static_assert(sizeof(BP_ActionPoisonShot_C_OnSpawnEffect) == 0x0000C8, "Wrong size on BP_ActionPoisonShot_C_OnSpawnEffect");
static_assert(offsetof(BP_ActionPoisonShot_C_OnSpawnEffect, Effect_0) == 0x000000, "Member 'BP_ActionPoisonShot_C_OnSpawnEffect::Effect_0' has a wrong offset!");
static_assert(offsetof(BP_ActionPoisonShot_C_OnSpawnEffect, TargetLocation) == 0x000008, "Member 'BP_ActionPoisonShot_C_OnSpawnEffect::TargetLocation' has a wrong offset!");
static_assert(offsetof(BP_ActionPoisonShot_C_OnSpawnEffect, CallFunc_GetPredictedTargetLocation_Location) == 0x000020, "Member 'BP_ActionPoisonShot_C_OnSpawnEffect::CallFunc_GetPredictedTargetLocation_Location' has a wrong offset!");
static_assert(offsetof(BP_ActionPoisonShot_C_OnSpawnEffect, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000038, "Member 'BP_ActionPoisonShot_C_OnSpawnEffect::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPoisonShot_C_OnSpawnEffect, K2Node_DynamicCast_AsPrimitive_Component) == 0x000040, "Member 'BP_ActionPoisonShot_C_OnSpawnEffect::K2Node_DynamicCast_AsPrimitive_Component' has a wrong offset!");
static_assert(offsetof(BP_ActionPoisonShot_C_OnSpawnEffect, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_ActionPoisonShot_C_OnSpawnEffect::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionPoisonShot_C_OnSpawnEffect, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000050, "Member 'BP_ActionPoisonShot_C_OnSpawnEffect::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPoisonShot_C_OnSpawnEffect, CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity) == 0x000068, "Member 'BP_ActionPoisonShot_C_OnSpawnEffect::CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity' has a wrong offset!");
static_assert(offsetof(BP_ActionPoisonShot_C_OnSpawnEffect, CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue) == 0x000080, "Member 'BP_ActionPoisonShot_C_OnSpawnEffect::CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPoisonShot_C_OnSpawnEffect, CallFunc_GetPredictedTargetLocation_Location_1) == 0x000088, "Member 'BP_ActionPoisonShot_C_OnSpawnEffect::CallFunc_GetPredictedTargetLocation_Location_1' has a wrong offset!");
static_assert(offsetof(BP_ActionPoisonShot_C_OnSpawnEffect, CallFunc_GetActionCharacter_ReturnValue) == 0x0000A0, "Member 'BP_ActionPoisonShot_C_OnSpawnEffect::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPoisonShot_C_OnSpawnEffect, CallFunc_IsPlayerControlled_ReturnValue) == 0x0000A8, "Member 'BP_ActionPoisonShot_C_OnSpawnEffect::CallFunc_IsPlayerControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPoisonShot_C_OnSpawnEffect, CallFunc_GetTargetLocation_ReturnValue) == 0x0000B0, "Member 'BP_ActionPoisonShot_C_OnSpawnEffect::CallFunc_GetTargetLocation_ReturnValue' has a wrong offset!");

// Function BP_ActionPoisonShot.BP_ActionPoisonShot_C.SetPredictedTarget_0
// 0x0080 (0x0080 - 0x0000)
struct BP_ActionPoisonShot_C_SetPredictedTarget_0 final
{
public:
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0000(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue;              // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionPoisonShot_C_SetPredictedTarget_0) == 0x000010, "Wrong alignment on BP_ActionPoisonShot_C_SetPredictedTarget_0");
static_assert(sizeof(BP_ActionPoisonShot_C_SetPredictedTarget_0) == 0x000080, "Wrong size on BP_ActionPoisonShot_C_SetPredictedTarget_0");
static_assert(offsetof(BP_ActionPoisonShot_C_SetPredictedTarget_0, CallFunc_MakeTransform_ReturnValue) == 0x000000, "Member 'BP_ActionPoisonShot_C_SetPredictedTarget_0::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPoisonShot_C_SetPredictedTarget_0, CallFunc_GetActionTarget_ReturnValue) == 0x000060, "Member 'BP_ActionPoisonShot_C_SetPredictedTarget_0::CallFunc_GetActionTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPoisonShot_C_SetPredictedTarget_0, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000068, "Member 'BP_ActionPoisonShot_C_SetPredictedTarget_0::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPoisonShot_C_SetPredictedTarget_0, CallFunc_FinishSpawningActor_ReturnValue) == 0x000070, "Member 'BP_ActionPoisonShot_C_SetPredictedTarget_0::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function BP_ActionPoisonShot.BP_ActionPoisonShot_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_ActionPoisonShot_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionPoisonShot_C_TickAction) == 0x000004, "Wrong alignment on BP_ActionPoisonShot_C_TickAction");
static_assert(sizeof(BP_ActionPoisonShot_C_TickAction) == 0x000004, "Wrong size on BP_ActionPoisonShot_C_TickAction");
static_assert(offsetof(BP_ActionPoisonShot_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_ActionPoisonShot_C_TickAction::DeltaTime' has a wrong offset!");

}

