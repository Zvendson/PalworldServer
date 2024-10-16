#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function BP_Action_Coop_HealBase.BP_Action_Coop_HealBase_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_Action_Coop_HealBase_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Coop_HealBase_C_TickAction) == 0x000004, "Wrong alignment on BP_Action_Coop_HealBase_C_TickAction");
static_assert(sizeof(BP_Action_Coop_HealBase_C_TickAction) == 0x000004, "Wrong size on BP_Action_Coop_HealBase_C_TickAction");
static_assert(offsetof(BP_Action_Coop_HealBase_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_Action_Coop_HealBase_C_TickAction::DeltaTime' has a wrong offset!");

// Function BP_Action_Coop_HealBase.BP_Action_Coop_HealBase_C.ExecuteUbergraph_BP_Action_Coop_HealBase
// 0x0058 (0x0058 - 0x0000)
struct BP_Action_Coop_HealBase_C_ExecuteUbergraph_BP_Action_Coop_HealBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetBoneNameFromEHumanBone_ReturnValue;    // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PlayAnimMontage_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E[0x2];                                       // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 CallFunc_GetMainMeshByActor_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Coop_HealBase_C_ExecuteUbergraph_BP_Action_Coop_HealBase) == 0x000008, "Wrong alignment on BP_Action_Coop_HealBase_C_ExecuteUbergraph_BP_Action_Coop_HealBase");
static_assert(sizeof(BP_Action_Coop_HealBase_C_ExecuteUbergraph_BP_Action_Coop_HealBase) == 0x000058, "Wrong size on BP_Action_Coop_HealBase_C_ExecuteUbergraph_BP_Action_Coop_HealBase");
static_assert(offsetof(BP_Action_Coop_HealBase_C_ExecuteUbergraph_BP_Action_Coop_HealBase, EntryPoint) == 0x000000, "Member 'BP_Action_Coop_HealBase_C_ExecuteUbergraph_BP_Action_Coop_HealBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_HealBase_C_ExecuteUbergraph_BP_Action_Coop_HealBase, CallFunc_GetBoneNameFromEHumanBone_ReturnValue) == 0x000004, "Member 'BP_Action_Coop_HealBase_C_ExecuteUbergraph_BP_Action_Coop_HealBase::CallFunc_GetBoneNameFromEHumanBone_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_HealBase_C_ExecuteUbergraph_BP_Action_Coop_HealBase, CallFunc_GetActionCharacter_ReturnValue) == 0x000010, "Member 'BP_Action_Coop_HealBase_C_ExecuteUbergraph_BP_Action_Coop_HealBase::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_HealBase_C_ExecuteUbergraph_BP_Action_Coop_HealBase, K2Node_Event_DeltaTime) == 0x000018, "Member 'BP_Action_Coop_HealBase_C_ExecuteUbergraph_BP_Action_Coop_HealBase::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_HealBase_C_ExecuteUbergraph_BP_Action_Coop_HealBase, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000020, "Member 'BP_Action_Coop_HealBase_C_ExecuteUbergraph_BP_Action_Coop_HealBase::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_HealBase_C_ExecuteUbergraph_BP_Action_Coop_HealBase, CallFunc_PlayAnimMontage_ReturnValue) == 0x000028, "Member 'BP_Action_Coop_HealBase_C_ExecuteUbergraph_BP_Action_Coop_HealBase::CallFunc_PlayAnimMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_HealBase_C_ExecuteUbergraph_BP_Action_Coop_HealBase, CallFunc_Less_DoubleDouble_ReturnValue) == 0x00002C, "Member 'BP_Action_Coop_HealBase_C_ExecuteUbergraph_BP_Action_Coop_HealBase::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_HealBase_C_ExecuteUbergraph_BP_Action_Coop_HealBase, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x00002D, "Member 'BP_Action_Coop_HealBase_C_ExecuteUbergraph_BP_Action_Coop_HealBase::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_HealBase_C_ExecuteUbergraph_BP_Action_Coop_HealBase, CallFunc_GetMainMeshByActor_ReturnValue) == 0x000030, "Member 'BP_Action_Coop_HealBase_C_ExecuteUbergraph_BP_Action_Coop_HealBase::CallFunc_GetMainMeshByActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_HealBase_C_ExecuteUbergraph_BP_Action_Coop_HealBase, CallFunc_SpawnSystemAttached_ReturnValue) == 0x000038, "Member 'BP_Action_Coop_HealBase_C_ExecuteUbergraph_BP_Action_Coop_HealBase::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_HealBase_C_ExecuteUbergraph_BP_Action_Coop_HealBase, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000040, "Member 'BP_Action_Coop_HealBase_C_ExecuteUbergraph_BP_Action_Coop_HealBase::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_HealBase_C_ExecuteUbergraph_BP_Action_Coop_HealBase, CallFunc_GetActionTarget_ReturnValue) == 0x000048, "Member 'BP_Action_Coop_HealBase_C_ExecuteUbergraph_BP_Action_Coop_HealBase::CallFunc_GetActionTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Coop_HealBase_C_ExecuteUbergraph_BP_Action_Coop_HealBase, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000050, "Member 'BP_Action_Coop_HealBase_C_ExecuteUbergraph_BP_Action_Coop_HealBase::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");

}

