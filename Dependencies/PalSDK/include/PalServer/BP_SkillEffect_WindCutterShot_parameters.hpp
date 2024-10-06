#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function BP_SkillEffect_WindCutterShot.BP_SkillEffect_WindCutterShot_C.ExecuteUbergraph_BP_SkillEffect_WindCutterShot
// 0x00E0 (0x00E0 - 0x0000)
struct BP_SkillEffect_WindCutterShot_C_ExecuteUbergraph_BP_SkillEffect_WindCutterShot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* DestroyedActor)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UNiagaraComponent* PSystem)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0040(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_DestroyedActor;                 // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      K2Node_CustomEvent_PSystem;                        // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetOwnerCharacter_ReturnValue;            // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerControlled_ReturnValue;           // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x3];                                       // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_WindCutterShot_C_ExecuteUbergraph_BP_SkillEffect_WindCutterShot) == 0x000010, "Wrong alignment on BP_SkillEffect_WindCutterShot_C_ExecuteUbergraph_BP_SkillEffect_WindCutterShot");
static_assert(sizeof(BP_SkillEffect_WindCutterShot_C_ExecuteUbergraph_BP_SkillEffect_WindCutterShot) == 0x0000E0, "Wrong size on BP_SkillEffect_WindCutterShot_C_ExecuteUbergraph_BP_SkillEffect_WindCutterShot");
static_assert(offsetof(BP_SkillEffect_WindCutterShot_C_ExecuteUbergraph_BP_SkillEffect_WindCutterShot, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_WindCutterShot_C_ExecuteUbergraph_BP_SkillEffect_WindCutterShot::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_WindCutterShot_C_ExecuteUbergraph_BP_SkillEffect_WindCutterShot, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_SkillEffect_WindCutterShot_C_ExecuteUbergraph_BP_SkillEffect_WindCutterShot::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_WindCutterShot_C_ExecuteUbergraph_BP_SkillEffect_WindCutterShot, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'BP_SkillEffect_WindCutterShot_C_ExecuteUbergraph_BP_SkillEffect_WindCutterShot::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_WindCutterShot_C_ExecuteUbergraph_BP_SkillEffect_WindCutterShot, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'BP_SkillEffect_WindCutterShot_C_ExecuteUbergraph_BP_SkillEffect_WindCutterShot::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_WindCutterShot_C_ExecuteUbergraph_BP_SkillEffect_WindCutterShot, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000038, "Member 'BP_SkillEffect_WindCutterShot_C_ExecuteUbergraph_BP_SkillEffect_WindCutterShot::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_WindCutterShot_C_ExecuteUbergraph_BP_SkillEffect_WindCutterShot, CallFunc_GetTransform_ReturnValue) == 0x000040, "Member 'BP_SkillEffect_WindCutterShot_C_ExecuteUbergraph_BP_SkillEffect_WindCutterShot::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_WindCutterShot_C_ExecuteUbergraph_BP_SkillEffect_WindCutterShot, CallFunc_GetOwner_ReturnValue) == 0x0000A0, "Member 'BP_SkillEffect_WindCutterShot_C_ExecuteUbergraph_BP_SkillEffect_WindCutterShot::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_WindCutterShot_C_ExecuteUbergraph_BP_SkillEffect_WindCutterShot, K2Node_CustomEvent_DestroyedActor) == 0x0000A8, "Member 'BP_SkillEffect_WindCutterShot_C_ExecuteUbergraph_BP_SkillEffect_WindCutterShot::K2Node_CustomEvent_DestroyedActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_WindCutterShot_C_ExecuteUbergraph_BP_SkillEffect_WindCutterShot, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000B0, "Member 'BP_SkillEffect_WindCutterShot_C_ExecuteUbergraph_BP_SkillEffect_WindCutterShot::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_WindCutterShot_C_ExecuteUbergraph_BP_SkillEffect_WindCutterShot, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000B8, "Member 'BP_SkillEffect_WindCutterShot_C_ExecuteUbergraph_BP_SkillEffect_WindCutterShot::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_WindCutterShot_C_ExecuteUbergraph_BP_SkillEffect_WindCutterShot, K2Node_CustomEvent_PSystem) == 0x0000C0, "Member 'BP_SkillEffect_WindCutterShot_C_ExecuteUbergraph_BP_SkillEffect_WindCutterShot::K2Node_CustomEvent_PSystem' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_WindCutterShot_C_ExecuteUbergraph_BP_SkillEffect_WindCutterShot, CallFunc_GetOwnerCharacter_ReturnValue) == 0x0000C8, "Member 'BP_SkillEffect_WindCutterShot_C_ExecuteUbergraph_BP_SkillEffect_WindCutterShot::CallFunc_GetOwnerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_WindCutterShot_C_ExecuteUbergraph_BP_SkillEffect_WindCutterShot, CallFunc_IsPlayerControlled_ReturnValue) == 0x0000D0, "Member 'BP_SkillEffect_WindCutterShot_C_ExecuteUbergraph_BP_SkillEffect_WindCutterShot::CallFunc_IsPlayerControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_WindCutterShot_C_ExecuteUbergraph_BP_SkillEffect_WindCutterShot, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x0000D4, "Member 'BP_SkillEffect_WindCutterShot_C_ExecuteUbergraph_BP_SkillEffect_WindCutterShot::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

// Function BP_SkillEffect_WindCutterShot.BP_SkillEffect_WindCutterShot_C.OnDestroyed_イベント_0
// 0x0008 (0x0008 - 0x0000)
struct BP_SkillEffect_WindCutterShot_C_OnDestroyed______________0 final
{
public:
	class AActor*                                 DestroyedActor;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_WindCutterShot_C_OnDestroyed______________0) == 0x000008, "Wrong alignment on BP_SkillEffect_WindCutterShot_C_OnDestroyed______________0");
static_assert(sizeof(BP_SkillEffect_WindCutterShot_C_OnDestroyed______________0) == 0x000008, "Wrong size on BP_SkillEffect_WindCutterShot_C_OnDestroyed______________0");
static_assert(offsetof(BP_SkillEffect_WindCutterShot_C_OnDestroyed______________0, DestroyedActor) == 0x000000, "Member 'BP_SkillEffect_WindCutterShot_C_OnDestroyed______________0::DestroyedActor' has a wrong offset!");

// Function BP_SkillEffect_WindCutterShot.BP_SkillEffect_WindCutterShot_C.OnSpawnBulletDelegate__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_SkillEffect_WindCutterShot_C_OnSpawnBulletDelegate__DelegateSignature final
{
public:
	class AActor*                                 Bullet;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_WindCutterShot_C_OnSpawnBulletDelegate__DelegateSignature) == 0x000008, "Wrong alignment on BP_SkillEffect_WindCutterShot_C_OnSpawnBulletDelegate__DelegateSignature");
static_assert(sizeof(BP_SkillEffect_WindCutterShot_C_OnSpawnBulletDelegate__DelegateSignature) == 0x000008, "Wrong size on BP_SkillEffect_WindCutterShot_C_OnSpawnBulletDelegate__DelegateSignature");
static_assert(offsetof(BP_SkillEffect_WindCutterShot_C_OnSpawnBulletDelegate__DelegateSignature, Bullet) == 0x000000, "Member 'BP_SkillEffect_WindCutterShot_C_OnSpawnBulletDelegate__DelegateSignature::Bullet' has a wrong offset!");

// Function BP_SkillEffect_WindCutterShot.BP_SkillEffect_WindCutterShot_C.OnSystemFinished
// 0x0008 (0x0008 - 0x0000)
struct BP_SkillEffect_WindCutterShot_C_OnSystemFinished final
{
public:
	class UNiagaraComponent*                      PSystem;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_WindCutterShot_C_OnSystemFinished) == 0x000008, "Wrong alignment on BP_SkillEffect_WindCutterShot_C_OnSystemFinished");
static_assert(sizeof(BP_SkillEffect_WindCutterShot_C_OnSystemFinished) == 0x000008, "Wrong size on BP_SkillEffect_WindCutterShot_C_OnSystemFinished");
static_assert(offsetof(BP_SkillEffect_WindCutterShot_C_OnSystemFinished, PSystem) == 0x000000, "Member 'BP_SkillEffect_WindCutterShot_C_OnSystemFinished::PSystem' has a wrong offset!");

// Function BP_SkillEffect_WindCutterShot.BP_SkillEffect_WindCutterShot_C.SetTargetLocation
// 0x0068 (0x0068 - 0x0000)
struct BP_SkillEffect_WindCutterShot_C_SetTargetLocation final
{
public:
	struct FVector                                TargetLocation;                                    // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;                 // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_WindCutterShot_C_SetTargetLocation) == 0x000008, "Wrong alignment on BP_SkillEffect_WindCutterShot_C_SetTargetLocation");
static_assert(sizeof(BP_SkillEffect_WindCutterShot_C_SetTargetLocation) == 0x000068, "Wrong size on BP_SkillEffect_WindCutterShot_C_SetTargetLocation");
static_assert(offsetof(BP_SkillEffect_WindCutterShot_C_SetTargetLocation, TargetLocation) == 0x000000, "Member 'BP_SkillEffect_WindCutterShot_C_SetTargetLocation::TargetLocation' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_WindCutterShot_C_SetTargetLocation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'BP_SkillEffect_WindCutterShot_C_SetTargetLocation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_WindCutterShot_C_SetTargetLocation, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000030, "Member 'BP_SkillEffect_WindCutterShot_C_SetTargetLocation::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_WindCutterShot_C_SetTargetLocation, CallFunc_MakeRotFromX_ReturnValue) == 0x000048, "Member 'BP_SkillEffect_WindCutterShot_C_SetTargetLocation::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_WindCutterShot_C_SetTargetLocation, CallFunc_K2_SetActorRotation_ReturnValue) == 0x000060, "Member 'BP_SkillEffect_WindCutterShot_C_SetTargetLocation::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");

}

