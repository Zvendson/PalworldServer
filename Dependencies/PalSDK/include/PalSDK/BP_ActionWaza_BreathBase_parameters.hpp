#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_ActionWaza_BreathBase.BP_ActionWaza_BreathBase_C.ExecuteUbergraph_BP_ActionWaza_BreathBase
// 0x02E0 (0x02E0 - 0x0000)
struct BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalSkillEffectBase*                    K2Node_Event_Effect;                               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetTargetLocation_ReturnValue;            // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0058(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0070(0x0008)(NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A8[0x8];                                       // 0x00A8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00B0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0110(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetTargetLocation_ReturnValue_1;          // 0x0130(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SkillEffect_BreathBulletBase_C*     CallFunc_FinishSpawningActor_ReturnValue;          // 0x0148(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0150(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_169[0x7];                                      // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue_1;         // 0x0170(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_188[0x8];                                      // 0x0188(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x0190(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x01F0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue;         // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x02D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase) == 0x000010, "Wrong alignment on BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase");
static_assert(sizeof(BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase) == 0x0002E0, "Wrong size on BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase");
static_assert(offsetof(BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase, EntryPoint) == 0x000000, "Member 'BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase, K2Node_Event_Effect) == 0x000008, "Member 'BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase::K2Node_Event_Effect' has a wrong offset!");
static_assert(offsetof(BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase, CallFunc_GetTargetLocation_ReturnValue) == 0x000010, "Member 'BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase::CallFunc_GetTargetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase, CallFunc_FindLookAtRotation_ReturnValue) == 0x000040, "Member 'BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase, K2Node_CreateDelegate_OutputDelegate) == 0x000058, "Member 'BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase, K2Node_Event_DeltaTime) == 0x000068, "Member 'BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000070, "Member 'BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase, CallFunc_GetActionCharacter_ReturnValue) == 0x000078, "Member 'BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000080, "Member 'BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000088, "Member 'BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase, CallFunc_GetMainMesh_ReturnValue) == 0x0000A0, "Member 'BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase, CallFunc_MakeTransform_ReturnValue) == 0x0000B0, "Member 'BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase, CallFunc_GetSocketLocation_ReturnValue) == 0x000110, "Member 'BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000128, "Member 'BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase, CallFunc_GetTargetLocation_ReturnValue_1) == 0x000130, "Member 'BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase::CallFunc_GetTargetLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase, CallFunc_FinishSpawningActor_ReturnValue) == 0x000148, "Member 'BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000150, "Member 'BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase, CallFunc_IsValid_ReturnValue) == 0x000168, "Member 'BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase, CallFunc_FindLookAtRotation_ReturnValue_1) == 0x000170, "Member 'BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase::CallFunc_FindLookAtRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase, CallFunc_MakeTransform_ReturnValue_1) == 0x000190, "Member 'BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase, CallFunc_K2_SetActorTransform_SweepHitResult) == 0x0001F0, "Member 'BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase::CallFunc_K2_SetActorTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase, CallFunc_K2_SetActorTransform_ReturnValue) == 0x0002D8, "Member 'BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase::CallFunc_K2_SetActorTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase, CallFunc_IsValid_ReturnValue_1) == 0x0002D9, "Member 'BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_ActionWaza_BreathBase.BP_ActionWaza_BreathBase_C.OnSpawnEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionWaza_BreathBase_C_OnSpawnEffect final
{
public:
	class APalSkillEffectBase*                    Effect_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionWaza_BreathBase_C_OnSpawnEffect) == 0x000008, "Wrong alignment on BP_ActionWaza_BreathBase_C_OnSpawnEffect");
static_assert(sizeof(BP_ActionWaza_BreathBase_C_OnSpawnEffect) == 0x000008, "Wrong size on BP_ActionWaza_BreathBase_C_OnSpawnEffect");
static_assert(offsetof(BP_ActionWaza_BreathBase_C_OnSpawnEffect, Effect_0) == 0x000000, "Member 'BP_ActionWaza_BreathBase_C_OnSpawnEffect::Effect_0' has a wrong offset!");

// Function BP_ActionWaza_BreathBase.BP_ActionWaza_BreathBase_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_ActionWaza_BreathBase_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionWaza_BreathBase_C_TickAction) == 0x000004, "Wrong alignment on BP_ActionWaza_BreathBase_C_TickAction");
static_assert(sizeof(BP_ActionWaza_BreathBase_C_TickAction) == 0x000004, "Wrong size on BP_ActionWaza_BreathBase_C_TickAction");
static_assert(offsetof(BP_ActionWaza_BreathBase_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_ActionWaza_BreathBase_C_TickAction::DeltaTime' has a wrong offset!");

}

