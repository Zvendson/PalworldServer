#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function BP_Action_ParabolaBallBase.BP_Action_ParabolaBallBase_C.ExecuteUbergraph_BP_Action_ParabolaBallBase
// 0x00E0 (0x00E0 - 0x0000)
struct BP_Action_ParabolaBallBase_C_ExecuteUbergraph_BP_Action_ParabolaBallBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetTaegetLocation_Pos;                    // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetTargetLocation_ReturnValue;            // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSkillEffectSpawnParameter             CallFunc_Array_Get_Item;                           // 0x0038(0x0038)(NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity; // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue; // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalSkillEffectBase*                    CallFunc_FindEffectByClass_Effect;                 // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_SkillEffect_C>    K2Node_DynamicCast_AsBPI_Skill_Effect;             // 0x00B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UProjectileMovementComponent*           CallFunc_GetComponentByClass_ReturnValue;          // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_ParabolaBallBase_C_ExecuteUbergraph_BP_Action_ParabolaBallBase) == 0x000008, "Wrong alignment on BP_Action_ParabolaBallBase_C_ExecuteUbergraph_BP_Action_ParabolaBallBase");
static_assert(sizeof(BP_Action_ParabolaBallBase_C_ExecuteUbergraph_BP_Action_ParabolaBallBase) == 0x0000E0, "Wrong size on BP_Action_ParabolaBallBase_C_ExecuteUbergraph_BP_Action_ParabolaBallBase");
static_assert(offsetof(BP_Action_ParabolaBallBase_C_ExecuteUbergraph_BP_Action_ParabolaBallBase, EntryPoint) == 0x000000, "Member 'BP_Action_ParabolaBallBase_C_ExecuteUbergraph_BP_Action_ParabolaBallBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_ParabolaBallBase_C_ExecuteUbergraph_BP_Action_ParabolaBallBase, CallFunc_GetTaegetLocation_Pos) == 0x000008, "Member 'BP_Action_ParabolaBallBase_C_ExecuteUbergraph_BP_Action_ParabolaBallBase::CallFunc_GetTaegetLocation_Pos' has a wrong offset!");
static_assert(offsetof(BP_Action_ParabolaBallBase_C_ExecuteUbergraph_BP_Action_ParabolaBallBase, CallFunc_GetTargetLocation_ReturnValue) == 0x000020, "Member 'BP_Action_ParabolaBallBase_C_ExecuteUbergraph_BP_Action_ParabolaBallBase::CallFunc_GetTargetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_ParabolaBallBase_C_ExecuteUbergraph_BP_Action_ParabolaBallBase, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_Action_ParabolaBallBase_C_ExecuteUbergraph_BP_Action_ParabolaBallBase::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Action_ParabolaBallBase_C_ExecuteUbergraph_BP_Action_ParabolaBallBase, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000070, "Member 'BP_Action_ParabolaBallBase_C_ExecuteUbergraph_BP_Action_ParabolaBallBase::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_ParabolaBallBase_C_ExecuteUbergraph_BP_Action_ParabolaBallBase, CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity) == 0x000088, "Member 'BP_Action_ParabolaBallBase_C_ExecuteUbergraph_BP_Action_ParabolaBallBase::CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity' has a wrong offset!");
static_assert(offsetof(BP_Action_ParabolaBallBase_C_ExecuteUbergraph_BP_Action_ParabolaBallBase, CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue) == 0x0000A0, "Member 'BP_Action_ParabolaBallBase_C_ExecuteUbergraph_BP_Action_ParabolaBallBase::CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_ParabolaBallBase_C_ExecuteUbergraph_BP_Action_ParabolaBallBase, CallFunc_FindEffectByClass_Effect) == 0x0000A8, "Member 'BP_Action_ParabolaBallBase_C_ExecuteUbergraph_BP_Action_ParabolaBallBase::CallFunc_FindEffectByClass_Effect' has a wrong offset!");
static_assert(offsetof(BP_Action_ParabolaBallBase_C_ExecuteUbergraph_BP_Action_ParabolaBallBase, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0000B0, "Member 'BP_Action_ParabolaBallBase_C_ExecuteUbergraph_BP_Action_ParabolaBallBase::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_ParabolaBallBase_C_ExecuteUbergraph_BP_Action_ParabolaBallBase, K2Node_DynamicCast_AsBPI_Skill_Effect) == 0x0000B8, "Member 'BP_Action_ParabolaBallBase_C_ExecuteUbergraph_BP_Action_ParabolaBallBase::K2Node_DynamicCast_AsBPI_Skill_Effect' has a wrong offset!");
static_assert(offsetof(BP_Action_ParabolaBallBase_C_ExecuteUbergraph_BP_Action_ParabolaBallBase, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'BP_Action_ParabolaBallBase_C_ExecuteUbergraph_BP_Action_ParabolaBallBase::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Action_ParabolaBallBase_C_ExecuteUbergraph_BP_Action_ParabolaBallBase, CallFunc_GetComponentByClass_ReturnValue) == 0x0000D0, "Member 'BP_Action_ParabolaBallBase_C_ExecuteUbergraph_BP_Action_ParabolaBallBase::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_ParabolaBallBase_C_ExecuteUbergraph_BP_Action_ParabolaBallBase, CallFunc_Delay_Duration_ImplicitCast) == 0x0000D8, "Member 'BP_Action_ParabolaBallBase_C_ExecuteUbergraph_BP_Action_ParabolaBallBase::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

// Function BP_Action_ParabolaBallBase.BP_Action_ParabolaBallBase_C.GetTaegetLocation
// 0x0070 (0x0070 - 0x0000)
struct BP_Action_ParabolaBallBase_C_GetTaegetLocation final
{
public:
	struct FVector                                Pos;                                               // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetPredictedTargetLocation_Location;      // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetTrainerPlayer_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetOverrideTargetLocation_ConsiderRide_ReturnValue; // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerControlled_ReturnValue;           // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_ParabolaBallBase_C_GetTaegetLocation) == 0x000008, "Wrong alignment on BP_Action_ParabolaBallBase_C_GetTaegetLocation");
static_assert(sizeof(BP_Action_ParabolaBallBase_C_GetTaegetLocation) == 0x000070, "Wrong size on BP_Action_ParabolaBallBase_C_GetTaegetLocation");
static_assert(offsetof(BP_Action_ParabolaBallBase_C_GetTaegetLocation, Pos) == 0x000000, "Member 'BP_Action_ParabolaBallBase_C_GetTaegetLocation::Pos' has a wrong offset!");
static_assert(offsetof(BP_Action_ParabolaBallBase_C_GetTaegetLocation, CallFunc_GetActionCharacter_ReturnValue) == 0x000018, "Member 'BP_Action_ParabolaBallBase_C_GetTaegetLocation::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_ParabolaBallBase_C_GetTaegetLocation, CallFunc_GetPredictedTargetLocation_Location) == 0x000020, "Member 'BP_Action_ParabolaBallBase_C_GetTaegetLocation::CallFunc_GetPredictedTargetLocation_Location' has a wrong offset!");
static_assert(offsetof(BP_Action_ParabolaBallBase_C_GetTaegetLocation, CallFunc_GetTrainerPlayer_ReturnValue) == 0x000038, "Member 'BP_Action_ParabolaBallBase_C_GetTaegetLocation::CallFunc_GetTrainerPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_ParabolaBallBase_C_GetTaegetLocation, CallFunc_GetComponentByClass_ReturnValue) == 0x000040, "Member 'BP_Action_ParabolaBallBase_C_GetTaegetLocation::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_ParabolaBallBase_C_GetTaegetLocation, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000048, "Member 'BP_Action_ParabolaBallBase_C_GetTaegetLocation::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_ParabolaBallBase_C_GetTaegetLocation, CallFunc_GetOverrideTargetLocation_ConsiderRide_ReturnValue) == 0x000050, "Member 'BP_Action_ParabolaBallBase_C_GetTaegetLocation::CallFunc_GetOverrideTargetLocation_ConsiderRide_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_ParabolaBallBase_C_GetTaegetLocation, CallFunc_IsPlayerControlled_ReturnValue) == 0x000068, "Member 'BP_Action_ParabolaBallBase_C_GetTaegetLocation::CallFunc_IsPlayerControlled_ReturnValue' has a wrong offset!");

}

