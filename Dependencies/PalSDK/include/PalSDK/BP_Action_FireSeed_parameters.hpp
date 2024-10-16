#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_Action_FireSeed.BP_Action_FireSeed_C.ExecuteUbergraph_BP_Action_FireSeed
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_FireSeed_C_ExecuteUbergraph_BP_Action_FireSeed final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_FireSeed_C_ExecuteUbergraph_BP_Action_FireSeed) == 0x000004, "Wrong alignment on BP_Action_FireSeed_C_ExecuteUbergraph_BP_Action_FireSeed");
static_assert(sizeof(BP_Action_FireSeed_C_ExecuteUbergraph_BP_Action_FireSeed) == 0x000008, "Wrong size on BP_Action_FireSeed_C_ExecuteUbergraph_BP_Action_FireSeed");
static_assert(offsetof(BP_Action_FireSeed_C_ExecuteUbergraph_BP_Action_FireSeed, EntryPoint) == 0x000000, "Member 'BP_Action_FireSeed_C_ExecuteUbergraph_BP_Action_FireSeed::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_FireSeed_C_ExecuteUbergraph_BP_Action_FireSeed, K2Node_Event_DeltaTime) == 0x000004, "Member 'BP_Action_FireSeed_C_ExecuteUbergraph_BP_Action_FireSeed::K2Node_Event_DeltaTime' has a wrong offset!");

// Function BP_Action_FireSeed.BP_Action_FireSeed_C.OnSpawnEffect
// 0x00D8 (0x00D8 - 0x0000)
struct BP_Action_FireSeed_C_OnSpawnEffect final
{
public:
	class APalSkillEffectBase*                    Effect_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                          CallFunc_GetRandomStream_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           CallFunc_GetComponentByClass_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_SkillEffect_FireSeed_C*             K2Node_DynamicCast_AsBP_Skill_Effect_Fire_Seed;    // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;        // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A[0x6];                                       // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetPredictedTargetLocation_Location;      // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_FireSeed_C_OnSpawnEffect) == 0x000008, "Wrong alignment on BP_Action_FireSeed_C_OnSpawnEffect");
static_assert(sizeof(BP_Action_FireSeed_C_OnSpawnEffect) == 0x0000D8, "Wrong size on BP_Action_FireSeed_C_OnSpawnEffect");
static_assert(offsetof(BP_Action_FireSeed_C_OnSpawnEffect, Effect_0) == 0x000000, "Member 'BP_Action_FireSeed_C_OnSpawnEffect::Effect_0' has a wrong offset!");
static_assert(offsetof(BP_Action_FireSeed_C_OnSpawnEffect, CallFunc_GetRandomStream_ReturnValue) == 0x000008, "Member 'BP_Action_FireSeed_C_OnSpawnEffect::CallFunc_GetRandomStream_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_FireSeed_C_OnSpawnEffect, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'BP_Action_FireSeed_C_OnSpawnEffect::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_FireSeed_C_OnSpawnEffect, CallFunc_GetComponentByClass_ReturnValue) == 0x000028, "Member 'BP_Action_FireSeed_C_OnSpawnEffect::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_FireSeed_C_OnSpawnEffect, K2Node_DynamicCast_AsBP_Skill_Effect_Fire_Seed) == 0x000030, "Member 'BP_Action_FireSeed_C_OnSpawnEffect::K2Node_DynamicCast_AsBP_Skill_Effect_Fire_Seed' has a wrong offset!");
static_assert(offsetof(BP_Action_FireSeed_C_OnSpawnEffect, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_Action_FireSeed_C_OnSpawnEffect::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Action_FireSeed_C_OnSpawnEffect, CallFunc_GetActionTarget_ReturnValue) == 0x000040, "Member 'BP_Action_FireSeed_C_OnSpawnEffect::CallFunc_GetActionTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_FireSeed_C_OnSpawnEffect, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000048, "Member 'BP_Action_FireSeed_C_OnSpawnEffect::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_FireSeed_C_OnSpawnEffect, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x000050, "Member 'BP_Action_FireSeed_C_OnSpawnEffect::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_FireSeed_C_OnSpawnEffect, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'BP_Action_FireSeed_C_OnSpawnEffect::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_FireSeed_C_OnSpawnEffect, CallFunc_IsValid_ReturnValue_1) == 0x000059, "Member 'BP_Action_FireSeed_C_OnSpawnEffect::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_FireSeed_C_OnSpawnEffect, CallFunc_GetPredictedTargetLocation_Location) == 0x000060, "Member 'BP_Action_FireSeed_C_OnSpawnEffect::CallFunc_GetPredictedTargetLocation_Location' has a wrong offset!");
static_assert(offsetof(BP_Action_FireSeed_C_OnSpawnEffect, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000078, "Member 'BP_Action_FireSeed_C_OnSpawnEffect::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_FireSeed_C_OnSpawnEffect, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000090, "Member 'BP_Action_FireSeed_C_OnSpawnEffect::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_FireSeed_C_OnSpawnEffect, CallFunc_Normal_ReturnValue) == 0x0000A8, "Member 'BP_Action_FireSeed_C_OnSpawnEffect::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_FireSeed_C_OnSpawnEffect, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0000C0, "Member 'BP_Action_FireSeed_C_OnSpawnEffect::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");

// Function BP_Action_FireSeed.BP_Action_FireSeed_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_Action_FireSeed_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_FireSeed_C_TickAction) == 0x000004, "Wrong alignment on BP_Action_FireSeed_C_TickAction");
static_assert(sizeof(BP_Action_FireSeed_C_TickAction) == 0x000004, "Wrong size on BP_Action_FireSeed_C_TickAction");
static_assert(offsetof(BP_Action_FireSeed_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_Action_FireSeed_C_TickAction::DeltaTime' has a wrong offset!");

}

