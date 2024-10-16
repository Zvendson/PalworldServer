#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_Action_RootAttack.BP_Action_RootAttack_C.OnSpawnEffect
// 0x00A8 (0x00A8 - 0x0000)
struct BP_Action_RootAttack_C_OnSpawnEffect final
{
public:
	class APalSkillEffectBase*                    Effect_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Skill_RootAttack_C*                 K2Node_DynamicCast_AsBP_Skill_Root_Attack;         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetTrainerPlayer_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FindHomingTarget_ForPlayer_ReturnValue;   // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerControlled_ReturnValue;           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetTargetLocation_ReturnValue;            // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue;              // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Vector_Normal2D_ReturnValue;              // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_RootAttack_C_OnSpawnEffect) == 0x000008, "Wrong alignment on BP_Action_RootAttack_C_OnSpawnEffect");
static_assert(sizeof(BP_Action_RootAttack_C_OnSpawnEffect) == 0x0000A8, "Wrong size on BP_Action_RootAttack_C_OnSpawnEffect");
static_assert(offsetof(BP_Action_RootAttack_C_OnSpawnEffect, Effect_0) == 0x000000, "Member 'BP_Action_RootAttack_C_OnSpawnEffect::Effect_0' has a wrong offset!");
static_assert(offsetof(BP_Action_RootAttack_C_OnSpawnEffect, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_Action_RootAttack_C_OnSpawnEffect::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RootAttack_C_OnSpawnEffect, K2Node_DynamicCast_AsBP_Skill_Root_Attack) == 0x000010, "Member 'BP_Action_RootAttack_C_OnSpawnEffect::K2Node_DynamicCast_AsBP_Skill_Root_Attack' has a wrong offset!");
static_assert(offsetof(BP_Action_RootAttack_C_OnSpawnEffect, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_Action_RootAttack_C_OnSpawnEffect::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Action_RootAttack_C_OnSpawnEffect, CallFunc_GetTrainerPlayer_ReturnValue) == 0x000020, "Member 'BP_Action_RootAttack_C_OnSpawnEffect::CallFunc_GetTrainerPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RootAttack_C_OnSpawnEffect, CallFunc_FindHomingTarget_ForPlayer_ReturnValue) == 0x000028, "Member 'BP_Action_RootAttack_C_OnSpawnEffect::CallFunc_FindHomingTarget_ForPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RootAttack_C_OnSpawnEffect, CallFunc_IsPlayerControlled_ReturnValue) == 0x000030, "Member 'BP_Action_RootAttack_C_OnSpawnEffect::CallFunc_IsPlayerControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RootAttack_C_OnSpawnEffect, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'BP_Action_RootAttack_C_OnSpawnEffect::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RootAttack_C_OnSpawnEffect, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000038, "Member 'BP_Action_RootAttack_C_OnSpawnEffect::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_RootAttack_C_OnSpawnEffect, CallFunc_GetTargetLocation_ReturnValue) == 0x000040, "Member 'BP_Action_RootAttack_C_OnSpawnEffect::CallFunc_GetTargetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RootAttack_C_OnSpawnEffect, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000058, "Member 'BP_Action_RootAttack_C_OnSpawnEffect::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RootAttack_C_OnSpawnEffect, CallFunc_GetActionTarget_ReturnValue) == 0x000070, "Member 'BP_Action_RootAttack_C_OnSpawnEffect::CallFunc_GetActionTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RootAttack_C_OnSpawnEffect, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000078, "Member 'BP_Action_RootAttack_C_OnSpawnEffect::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RootAttack_C_OnSpawnEffect, CallFunc_Vector_Normal2D_ReturnValue) == 0x000090, "Member 'BP_Action_RootAttack_C_OnSpawnEffect::CallFunc_Vector_Normal2D_ReturnValue' has a wrong offset!");

}

