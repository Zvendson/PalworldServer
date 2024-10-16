#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_ActionThunderBall.BP_ActionThunderBall_C.ExecuteUbergraph_BP_ActionThunderBall
// 0x00A8 (0x00A8 - 0x0000)
struct BP_ActionThunderBall_C_ExecuteUbergraph_BP_ActionThunderBall final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetTargetLocation_ReturnValue;            // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalSkillEffectBase*                    CallFunc_FindEffectByClass_Effect;                 // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           CallFunc_GetComponentByClass_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_MaxSpeed_ImplicitCast;          // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionThunderBall_C_ExecuteUbergraph_BP_ActionThunderBall) == 0x000008, "Wrong alignment on BP_ActionThunderBall_C_ExecuteUbergraph_BP_ActionThunderBall");
static_assert(sizeof(BP_ActionThunderBall_C_ExecuteUbergraph_BP_ActionThunderBall) == 0x0000A8, "Wrong size on BP_ActionThunderBall_C_ExecuteUbergraph_BP_ActionThunderBall");
static_assert(offsetof(BP_ActionThunderBall_C_ExecuteUbergraph_BP_ActionThunderBall, EntryPoint) == 0x000000, "Member 'BP_ActionThunderBall_C_ExecuteUbergraph_BP_ActionThunderBall::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionThunderBall_C_ExecuteUbergraph_BP_ActionThunderBall, CallFunc_GetTargetLocation_ReturnValue) == 0x000008, "Member 'BP_ActionThunderBall_C_ExecuteUbergraph_BP_ActionThunderBall::CallFunc_GetTargetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionThunderBall_C_ExecuteUbergraph_BP_ActionThunderBall, CallFunc_FindEffectByClass_Effect) == 0x000020, "Member 'BP_ActionThunderBall_C_ExecuteUbergraph_BP_ActionThunderBall::CallFunc_FindEffectByClass_Effect' has a wrong offset!");
static_assert(offsetof(BP_ActionThunderBall_C_ExecuteUbergraph_BP_ActionThunderBall, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_ActionThunderBall_C_ExecuteUbergraph_BP_ActionThunderBall::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionThunderBall_C_ExecuteUbergraph_BP_ActionThunderBall, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000030, "Member 'BP_ActionThunderBall_C_ExecuteUbergraph_BP_ActionThunderBall::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionThunderBall_C_ExecuteUbergraph_BP_ActionThunderBall, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000048, "Member 'BP_ActionThunderBall_C_ExecuteUbergraph_BP_ActionThunderBall::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionThunderBall_C_ExecuteUbergraph_BP_ActionThunderBall, CallFunc_GetComponentByClass_ReturnValue) == 0x000060, "Member 'BP_ActionThunderBall_C_ExecuteUbergraph_BP_ActionThunderBall::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionThunderBall_C_ExecuteUbergraph_BP_ActionThunderBall, CallFunc_Normal_ReturnValue) == 0x000068, "Member 'BP_ActionThunderBall_C_ExecuteUbergraph_BP_ActionThunderBall::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionThunderBall_C_ExecuteUbergraph_BP_ActionThunderBall, CallFunc_IsValid_ReturnValue_1) == 0x000080, "Member 'BP_ActionThunderBall_C_ExecuteUbergraph_BP_ActionThunderBall::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionThunderBall_C_ExecuteUbergraph_BP_ActionThunderBall, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000088, "Member 'BP_ActionThunderBall_C_ExecuteUbergraph_BP_ActionThunderBall::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionThunderBall_C_ExecuteUbergraph_BP_ActionThunderBall, K2Node_VariableSet_MaxSpeed_ImplicitCast) == 0x0000A0, "Member 'BP_ActionThunderBall_C_ExecuteUbergraph_BP_ActionThunderBall::K2Node_VariableSet_MaxSpeed_ImplicitCast' has a wrong offset!");

// Function BP_ActionThunderBall.BP_ActionThunderBall_C.OnSpawnEffect
// 0x0020 (0x0020 - 0x0000)
struct BP_ActionThunderBall_C_OnSpawnEffect final
{
public:
	class APalSkillEffectBase*                    Effect_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionThunderBall_C_OnSpawnEffect) == 0x000008, "Wrong alignment on BP_ActionThunderBall_C_OnSpawnEffect");
static_assert(sizeof(BP_ActionThunderBall_C_OnSpawnEffect) == 0x000020, "Wrong size on BP_ActionThunderBall_C_OnSpawnEffect");
static_assert(offsetof(BP_ActionThunderBall_C_OnSpawnEffect, Effect_0) == 0x000000, "Member 'BP_ActionThunderBall_C_OnSpawnEffect::Effect_0' has a wrong offset!");
static_assert(offsetof(BP_ActionThunderBall_C_OnSpawnEffect, CallFunc_GetActionTarget_ReturnValue) == 0x000008, "Member 'BP_ActionThunderBall_C_OnSpawnEffect::CallFunc_GetActionTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionThunderBall_C_OnSpawnEffect, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_ActionThunderBall_C_OnSpawnEffect::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionThunderBall_C_OnSpawnEffect, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000018, "Member 'BP_ActionThunderBall_C_OnSpawnEffect::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");

}

