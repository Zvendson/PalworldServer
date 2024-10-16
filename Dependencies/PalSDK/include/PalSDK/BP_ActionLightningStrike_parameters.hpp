#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_ActionLightningStrike.BP_ActionLightningStrike_C.ExecuteUbergraph_BP_ActionLightningStrike
// 0x00E0 (0x00E0 - 0x0000)
struct BP_ActionLightningStrike_C_ExecuteUbergraph_BP_ActionLightningStrike final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0010(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionLightningStrike_C_ExecuteUbergraph_BP_ActionLightningStrike) == 0x000010, "Wrong alignment on BP_ActionLightningStrike_C_ExecuteUbergraph_BP_ActionLightningStrike");
static_assert(sizeof(BP_ActionLightningStrike_C_ExecuteUbergraph_BP_ActionLightningStrike) == 0x0000E0, "Wrong size on BP_ActionLightningStrike_C_ExecuteUbergraph_BP_ActionLightningStrike");
static_assert(offsetof(BP_ActionLightningStrike_C_ExecuteUbergraph_BP_ActionLightningStrike, EntryPoint) == 0x000000, "Member 'BP_ActionLightningStrike_C_ExecuteUbergraph_BP_ActionLightningStrike::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionLightningStrike_C_ExecuteUbergraph_BP_ActionLightningStrike, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionLightningStrike_C_ExecuteUbergraph_BP_ActionLightningStrike::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionLightningStrike_C_ExecuteUbergraph_BP_ActionLightningStrike, CallFunc_GetTransform_ReturnValue) == 0x000010, "Member 'BP_ActionLightningStrike_C_ExecuteUbergraph_BP_ActionLightningStrike::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionLightningStrike_C_ExecuteUbergraph_BP_ActionLightningStrike, CallFunc_BreakTransform_Location) == 0x000070, "Member 'BP_ActionLightningStrike_C_ExecuteUbergraph_BP_ActionLightningStrike::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_ActionLightningStrike_C_ExecuteUbergraph_BP_ActionLightningStrike, CallFunc_BreakTransform_Rotation) == 0x000088, "Member 'BP_ActionLightningStrike_C_ExecuteUbergraph_BP_ActionLightningStrike::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_ActionLightningStrike_C_ExecuteUbergraph_BP_ActionLightningStrike, CallFunc_BreakTransform_Scale) == 0x0000A0, "Member 'BP_ActionLightningStrike_C_ExecuteUbergraph_BP_ActionLightningStrike::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_ActionLightningStrike_C_ExecuteUbergraph_BP_ActionLightningStrike, CallFunc_Add_VectorVector_ReturnValue) == 0x0000B8, "Member 'BP_ActionLightningStrike_C_ExecuteUbergraph_BP_ActionLightningStrike::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionLightningStrike_C_ExecuteUbergraph_BP_ActionLightningStrike, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x0000D0, "Member 'BP_ActionLightningStrike_C_ExecuteUbergraph_BP_ActionLightningStrike::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionLightningStrike_C_ExecuteUbergraph_BP_ActionLightningStrike, CallFunc_IsValid_ReturnValue) == 0x0000D8, "Member 'BP_ActionLightningStrike_C_ExecuteUbergraph_BP_ActionLightningStrike::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_ActionLightningStrike.BP_ActionLightningStrike_C.OnSpawnEffect
// 0x0038 (0x0038 - 0x0000)
struct BP_ActionLightningStrike_C_OnSpawnEffect final
{
public:
	class APalSkillEffectBase*                    Effect_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionLightningStrike_C_OnSpawnEffect) == 0x000008, "Wrong alignment on BP_ActionLightningStrike_C_OnSpawnEffect");
static_assert(sizeof(BP_ActionLightningStrike_C_OnSpawnEffect) == 0x000038, "Wrong size on BP_ActionLightningStrike_C_OnSpawnEffect");
static_assert(offsetof(BP_ActionLightningStrike_C_OnSpawnEffect, Effect_0) == 0x000000, "Member 'BP_ActionLightningStrike_C_OnSpawnEffect::Effect_0' has a wrong offset!");
static_assert(offsetof(BP_ActionLightningStrike_C_OnSpawnEffect, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionLightningStrike_C_OnSpawnEffect::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionLightningStrike_C_OnSpawnEffect, CallFunc_GetObjectClass_ReturnValue) == 0x000010, "Member 'BP_ActionLightningStrike_C_OnSpawnEffect::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionLightningStrike_C_OnSpawnEffect, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'BP_ActionLightningStrike_C_OnSpawnEffect::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionLightningStrike_C_OnSpawnEffect, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x000030, "Member 'BP_ActionLightningStrike_C_OnSpawnEffect::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionLightningStrike_C_OnSpawnEffect, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'BP_ActionLightningStrike_C_OnSpawnEffect::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

