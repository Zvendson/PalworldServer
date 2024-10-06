#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function BP_ActionWaterGun.BP_ActionWaterGun_C.ExecuteUbergraph_BP_ActionWaterGun
// 0x0018 (0x0018 - 0x0000)
struct BP_ActionWaterGun_C_ExecuteUbergraph_BP_ActionWaterGun final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerControlled_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionWaterGun_C_ExecuteUbergraph_BP_ActionWaterGun) == 0x000008, "Wrong alignment on BP_ActionWaterGun_C_ExecuteUbergraph_BP_ActionWaterGun");
static_assert(sizeof(BP_ActionWaterGun_C_ExecuteUbergraph_BP_ActionWaterGun) == 0x000018, "Wrong size on BP_ActionWaterGun_C_ExecuteUbergraph_BP_ActionWaterGun");
static_assert(offsetof(BP_ActionWaterGun_C_ExecuteUbergraph_BP_ActionWaterGun, EntryPoint) == 0x000000, "Member 'BP_ActionWaterGun_C_ExecuteUbergraph_BP_ActionWaterGun::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionWaterGun_C_ExecuteUbergraph_BP_ActionWaterGun, K2Node_Event_DeltaTime) == 0x000004, "Member 'BP_ActionWaterGun_C_ExecuteUbergraph_BP_ActionWaterGun::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_ActionWaterGun_C_ExecuteUbergraph_BP_ActionWaterGun, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionWaterGun_C_ExecuteUbergraph_BP_ActionWaterGun::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionWaterGun_C_ExecuteUbergraph_BP_ActionWaterGun, CallFunc_IsPlayerControlled_ReturnValue) == 0x000010, "Member 'BP_ActionWaterGun_C_ExecuteUbergraph_BP_ActionWaterGun::CallFunc_IsPlayerControlled_ReturnValue' has a wrong offset!");

// Function BP_ActionWaterGun.BP_ActionWaterGun_C.OnSpawnEffect
// 0x00E8 (0x00E8 - 0x0000)
struct BP_ActionWaterGun_C_OnSpawnEffect final
{
public:
	class APalSkillEffectBase*                    Effect_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetPredictedTargetLocation_Location;      // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSkillEffectSpawnParameter             CallFunc_Array_Get_Item;                           // 0x00A0(0x0038)(NoDestructor)
	class APalSkillEffectBase*                    CallFunc_FindEffectByClass_Effect;                 // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionWaterGun_C_OnSpawnEffect) == 0x000008, "Wrong alignment on BP_ActionWaterGun_C_OnSpawnEffect");
static_assert(sizeof(BP_ActionWaterGun_C_OnSpawnEffect) == 0x0000E8, "Wrong size on BP_ActionWaterGun_C_OnSpawnEffect");
static_assert(offsetof(BP_ActionWaterGun_C_OnSpawnEffect, Effect_0) == 0x000000, "Member 'BP_ActionWaterGun_C_OnSpawnEffect::Effect_0' has a wrong offset!");
static_assert(offsetof(BP_ActionWaterGun_C_OnSpawnEffect, CallFunc_GetPredictedTargetLocation_Location) == 0x000008, "Member 'BP_ActionWaterGun_C_OnSpawnEffect::CallFunc_GetPredictedTargetLocation_Location' has a wrong offset!");
static_assert(offsetof(BP_ActionWaterGun_C_OnSpawnEffect, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'BP_ActionWaterGun_C_OnSpawnEffect::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionWaterGun_C_OnSpawnEffect, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'BP_ActionWaterGun_C_OnSpawnEffect::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionWaterGun_C_OnSpawnEffect, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000040, "Member 'BP_ActionWaterGun_C_OnSpawnEffect::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionWaterGun_C_OnSpawnEffect, CallFunc_Normal_ReturnValue) == 0x000058, "Member 'BP_ActionWaterGun_C_OnSpawnEffect::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionWaterGun_C_OnSpawnEffect, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000070, "Member 'BP_ActionWaterGun_C_OnSpawnEffect::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionWaterGun_C_OnSpawnEffect, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000088, "Member 'BP_ActionWaterGun_C_OnSpawnEffect::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionWaterGun_C_OnSpawnEffect, CallFunc_Array_Get_Item) == 0x0000A0, "Member 'BP_ActionWaterGun_C_OnSpawnEffect::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ActionWaterGun_C_OnSpawnEffect, CallFunc_FindEffectByClass_Effect) == 0x0000D8, "Member 'BP_ActionWaterGun_C_OnSpawnEffect::CallFunc_FindEffectByClass_Effect' has a wrong offset!");
static_assert(offsetof(BP_ActionWaterGun_C_OnSpawnEffect, CallFunc_IsValid_ReturnValue) == 0x0000E0, "Member 'BP_ActionWaterGun_C_OnSpawnEffect::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionWaterGun_C_OnSpawnEffect, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000E1, "Member 'BP_ActionWaterGun_C_OnSpawnEffect::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function BP_ActionWaterGun.BP_ActionWaterGun_C.SetBulletSpeed
// 0x0010 (0x0010 - 0x0000)
struct BP_ActionWaterGun_C_SetBulletSpeed final
{
public:
	class APalSkillEffectBase*                    Effect_0;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalSkillEffectBase*                    CallFunc_SetBulletSpeed_Effect;                    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionWaterGun_C_SetBulletSpeed) == 0x000008, "Wrong alignment on BP_ActionWaterGun_C_SetBulletSpeed");
static_assert(sizeof(BP_ActionWaterGun_C_SetBulletSpeed) == 0x000010, "Wrong size on BP_ActionWaterGun_C_SetBulletSpeed");
static_assert(offsetof(BP_ActionWaterGun_C_SetBulletSpeed, Effect_0) == 0x000000, "Member 'BP_ActionWaterGun_C_SetBulletSpeed::Effect_0' has a wrong offset!");
static_assert(offsetof(BP_ActionWaterGun_C_SetBulletSpeed, CallFunc_SetBulletSpeed_Effect) == 0x000008, "Member 'BP_ActionWaterGun_C_SetBulletSpeed::CallFunc_SetBulletSpeed_Effect' has a wrong offset!");

// Function BP_ActionWaterGun.BP_ActionWaterGun_C.SetHomingTarget
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionWaterGun_C_SetHomingTarget final
{
public:
	class APalSkillEffectBase*                    Effect_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionWaterGun_C_SetHomingTarget) == 0x000008, "Wrong alignment on BP_ActionWaterGun_C_SetHomingTarget");
static_assert(sizeof(BP_ActionWaterGun_C_SetHomingTarget) == 0x000008, "Wrong size on BP_ActionWaterGun_C_SetHomingTarget");
static_assert(offsetof(BP_ActionWaterGun_C_SetHomingTarget, Effect_0) == 0x000000, "Member 'BP_ActionWaterGun_C_SetHomingTarget::Effect_0' has a wrong offset!");

// Function BP_ActionWaterGun.BP_ActionWaterGun_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_ActionWaterGun_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionWaterGun_C_TickAction) == 0x000004, "Wrong alignment on BP_ActionWaterGun_C_TickAction");
static_assert(sizeof(BP_ActionWaterGun_C_TickAction) == 0x000004, "Wrong size on BP_ActionWaterGun_C_TickAction");
static_assert(offsetof(BP_ActionWaterGun_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_ActionWaterGun_C_TickAction::DeltaTime' has a wrong offset!");

}

