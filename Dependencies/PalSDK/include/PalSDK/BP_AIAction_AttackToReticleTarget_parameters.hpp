#pragma once

#include "Basic.hpp"

#include "AIModule_structs.hpp"


namespace PalSDK::Params
{

// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.Tick_ObserveTarget
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_AttackToReticleTarget_C_Tick_ObserveTarget final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsTargetValid_IsValid;                    // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_AttackToReticleTarget_C_Tick_ObserveTarget) == 0x000008, "Wrong alignment on BP_AIAction_AttackToReticleTarget_C_Tick_ObserveTarget");
static_assert(sizeof(BP_AIAction_AttackToReticleTarget_C_Tick_ObserveTarget) == 0x000010, "Wrong size on BP_AIAction_AttackToReticleTarget_C_Tick_ObserveTarget");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_Tick_ObserveTarget, DeltaTime) == 0x000000, "Member 'BP_AIAction_AttackToReticleTarget_C_Tick_ObserveTarget::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_Tick_ObserveTarget, CallFunc_IsTargetValid_IsValid) == 0x000008, "Member 'BP_AIAction_AttackToReticleTarget_C_Tick_ObserveTarget::CallFunc_IsTargetValid_IsValid' has a wrong offset!");

// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.Tick_FindTarget
// 0x0028 (0x0028 - 0x0000)
struct BP_AIAction_AttackToReticleTarget_C_Tick_FindTarget final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TargetFound;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanFindTarget_Result;                     // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B[0x5];                                        // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindTarget_IsFound;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_FindTarget_Target;                        // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_AttackToReticleTarget_C_Tick_FindTarget) == 0x000008, "Wrong alignment on BP_AIAction_AttackToReticleTarget_C_Tick_FindTarget");
static_assert(sizeof(BP_AIAction_AttackToReticleTarget_C_Tick_FindTarget) == 0x000028, "Wrong size on BP_AIAction_AttackToReticleTarget_C_Tick_FindTarget");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_Tick_FindTarget, DeltaTime) == 0x000000, "Member 'BP_AIAction_AttackToReticleTarget_C_Tick_FindTarget::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_Tick_FindTarget, TargetFound) == 0x000008, "Member 'BP_AIAction_AttackToReticleTarget_C_Tick_FindTarget::TargetFound' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_Tick_FindTarget, CallFunc_CanFindTarget_Result) == 0x000009, "Member 'BP_AIAction_AttackToReticleTarget_C_Tick_FindTarget::CallFunc_CanFindTarget_Result' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_Tick_FindTarget, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x00000A, "Member 'BP_AIAction_AttackToReticleTarget_C_Tick_FindTarget::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_Tick_FindTarget, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000010, "Member 'BP_AIAction_AttackToReticleTarget_C_Tick_FindTarget::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_Tick_FindTarget, CallFunc_FindTarget_IsFound) == 0x000018, "Member 'BP_AIAction_AttackToReticleTarget_C_Tick_FindTarget::CallFunc_FindTarget_IsFound' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_Tick_FindTarget, CallFunc_FindTarget_Target) == 0x000020, "Member 'BP_AIAction_AttackToReticleTarget_C_Tick_FindTarget::CallFunc_FindTarget_Target' has a wrong offset!");

// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.SetupAction
// 0x0028 (0x0028 - 0x0000)
struct BP_AIAction_AttackToReticleTarget_C_SetupAction final
{
public:
	class APawn*                                  ControlledPawn_0;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetTrainerPlayer_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalPartnerSkillParameterComponent*     CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_AttackToReticleTarget_C_SetupAction) == 0x000008, "Wrong alignment on BP_AIAction_AttackToReticleTarget_C_SetupAction");
static_assert(sizeof(BP_AIAction_AttackToReticleTarget_C_SetupAction) == 0x000028, "Wrong size on BP_AIAction_AttackToReticleTarget_C_SetupAction");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_SetupAction, ControlledPawn_0) == 0x000000, "Member 'BP_AIAction_AttackToReticleTarget_C_SetupAction::ControlledPawn_0' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_SetupAction, K2Node_DynamicCast_AsPal_Character) == 0x000008, "Member 'BP_AIAction_AttackToReticleTarget_C_SetupAction::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_SetupAction, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_AIAction_AttackToReticleTarget_C_SetupAction::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_SetupAction, CallFunc_GetTrainerPlayer_ReturnValue) == 0x000018, "Member 'BP_AIAction_AttackToReticleTarget_C_SetupAction::CallFunc_GetTrainerPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_SetupAction, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'BP_AIAction_AttackToReticleTarget_C_SetupAction::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.SetEnableReticleTargetFlag
// 0x0018 (0x0018 - 0x0000)
struct BP_AIAction_AttackToReticleTarget_C_SetEnableReticleTargetFlag final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_AttackToReticleTarget_C_SetEnableReticleTargetFlag) == 0x000008, "Wrong alignment on BP_AIAction_AttackToReticleTarget_C_SetEnableReticleTargetFlag");
static_assert(sizeof(BP_AIAction_AttackToReticleTarget_C_SetEnableReticleTargetFlag) == 0x000018, "Wrong size on BP_AIAction_AttackToReticleTarget_C_SetEnableReticleTargetFlag");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_SetEnableReticleTargetFlag, Enable) == 0x000000, "Member 'BP_AIAction_AttackToReticleTarget_C_SetEnableReticleTargetFlag::Enable' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_SetEnableReticleTargetFlag, CallFunc_GetComponentByClass_ReturnValue) == 0x000008, "Member 'BP_AIAction_AttackToReticleTarget_C_SetEnableReticleTargetFlag::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_SetEnableReticleTargetFlag, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_AIAction_AttackToReticleTarget_C_SetEnableReticleTargetFlag::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_SetEnableReticleTargetFlag, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'BP_AIAction_AttackToReticleTarget_C_SetEnableReticleTargetFlag::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.OnTargetFound
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_AttackToReticleTarget_C_OnTargetFound final
{
public:
	class AActor*                                 TargetActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_AttackToReticleTarget_C_OnTargetFound) == 0x000008, "Wrong alignment on BP_AIAction_AttackToReticleTarget_C_OnTargetFound");
static_assert(sizeof(BP_AIAction_AttackToReticleTarget_C_OnTargetFound) == 0x000008, "Wrong size on BP_AIAction_AttackToReticleTarget_C_OnTargetFound");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_OnTargetFound, TargetActor) == 0x000000, "Member 'BP_AIAction_AttackToReticleTarget_C_OnTargetFound::TargetActor' has a wrong offset!");

// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.IsTargetValid
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_AttackToReticleTarget_C_IsTargetValid final
{
public:
	class APalCharacter*                          Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsValid;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLive_ReturnValue;                       // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_AttackToReticleTarget_C_IsTargetValid) == 0x000008, "Wrong alignment on BP_AIAction_AttackToReticleTarget_C_IsTargetValid");
static_assert(sizeof(BP_AIAction_AttackToReticleTarget_C_IsTargetValid) == 0x000010, "Wrong size on BP_AIAction_AttackToReticleTarget_C_IsTargetValid");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_IsTargetValid, Target) == 0x000000, "Member 'BP_AIAction_AttackToReticleTarget_C_IsTargetValid::Target' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_IsTargetValid, IsValid) == 0x000008, "Member 'BP_AIAction_AttackToReticleTarget_C_IsTargetValid::IsValid' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_IsTargetValid, CallFunc_IsLive_ReturnValue) == 0x000009, "Member 'BP_AIAction_AttackToReticleTarget_C_IsTargetValid::CallFunc_IsLive_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_IsTargetValid, CallFunc_IsValid_ReturnValue) == 0x00000A, "Member 'BP_AIAction_AttackToReticleTarget_C_IsTargetValid::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.GetSkillName
// 0x0018 (0x0018 - 0x0000)
struct BP_AIAction_AttackToReticleTarget_C_GetSkillName final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(BP_AIAction_AttackToReticleTarget_C_GetSkillName) == 0x000008, "Wrong alignment on BP_AIAction_AttackToReticleTarget_C_GetSkillName");
static_assert(sizeof(BP_AIAction_AttackToReticleTarget_C_GetSkillName) == 0x000018, "Wrong size on BP_AIAction_AttackToReticleTarget_C_GetSkillName");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_GetSkillName, ReturnValue) == 0x000000, "Member 'BP_AIAction_AttackToReticleTarget_C_GetSkillName::ReturnValue' has a wrong offset!");

// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.FinishAction
// 0x0001 (0x0001 - 0x0000)
struct BP_AIAction_AttackToReticleTarget_C_FinishAction final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_AttackToReticleTarget_C_FinishAction) == 0x000001, "Wrong alignment on BP_AIAction_AttackToReticleTarget_C_FinishAction");
static_assert(sizeof(BP_AIAction_AttackToReticleTarget_C_FinishAction) == 0x000001, "Wrong size on BP_AIAction_AttackToReticleTarget_C_FinishAction");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_FinishAction, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_AIAction_AttackToReticleTarget_C_FinishAction::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.FindTarget
// 0x0030 (0x0030 - 0x0000)
struct BP_AIAction_AttackToReticleTarget_C_FindTarget final
{
public:
	bool                                          IsFound;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          Target;                                            // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsApplicableDamage_ReturnValue;           // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_AttackToReticleTarget_C_FindTarget) == 0x000008, "Wrong alignment on BP_AIAction_AttackToReticleTarget_C_FindTarget");
static_assert(sizeof(BP_AIAction_AttackToReticleTarget_C_FindTarget) == 0x000030, "Wrong size on BP_AIAction_AttackToReticleTarget_C_FindTarget");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_FindTarget, IsFound) == 0x000000, "Member 'BP_AIAction_AttackToReticleTarget_C_FindTarget::IsFound' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_FindTarget, Target) == 0x000008, "Member 'BP_AIAction_AttackToReticleTarget_C_FindTarget::Target' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_FindTarget, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_AIAction_AttackToReticleTarget_C_FindTarget::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_FindTarget, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_AIAction_AttackToReticleTarget_C_FindTarget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_FindTarget, CallFunc_IsApplicableDamage_ReturnValue) == 0x000019, "Member 'BP_AIAction_AttackToReticleTarget_C_FindTarget::CallFunc_IsApplicableDamage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_FindTarget, K2Node_DynamicCast_AsPal_Character) == 0x000020, "Member 'BP_AIAction_AttackToReticleTarget_C_FindTarget::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_FindTarget, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_AIAction_AttackToReticleTarget_C_FindTarget::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.ExecuteUbergraph_BP_AIAction_AttackToReticleTarget
// 0x0050 (0x0050 - 0x0000)
struct BP_AIAction_AttackToReticleTarget_C_ExecuteUbergraph_BP_AIAction_AttackToReticleTarget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             K2Node_Event_WithResult;                           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_2;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_3;                     // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Tick_FindTarget_TargetFound;              // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_TargetActor;                    // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Tick_FindTarget_DeltaTime_ImplicitCast;   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Tick_ObserveTarget_DeltaTime_ImplicitCast; // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_AttackToReticleTarget_C_ExecuteUbergraph_BP_AIAction_AttackToReticleTarget) == 0x000008, "Wrong alignment on BP_AIAction_AttackToReticleTarget_C_ExecuteUbergraph_BP_AIAction_AttackToReticleTarget");
static_assert(sizeof(BP_AIAction_AttackToReticleTarget_C_ExecuteUbergraph_BP_AIAction_AttackToReticleTarget) == 0x000050, "Wrong size on BP_AIAction_AttackToReticleTarget_C_ExecuteUbergraph_BP_AIAction_AttackToReticleTarget");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_ExecuteUbergraph_BP_AIAction_AttackToReticleTarget, EntryPoint) == 0x000000, "Member 'BP_AIAction_AttackToReticleTarget_C_ExecuteUbergraph_BP_AIAction_AttackToReticleTarget::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_ExecuteUbergraph_BP_AIAction_AttackToReticleTarget, K2Node_Event_ControlledPawn) == 0x000008, "Member 'BP_AIAction_AttackToReticleTarget_C_ExecuteUbergraph_BP_AIAction_AttackToReticleTarget::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_ExecuteUbergraph_BP_AIAction_AttackToReticleTarget, K2Node_Event_WithResult) == 0x000010, "Member 'BP_AIAction_AttackToReticleTarget_C_ExecuteUbergraph_BP_AIAction_AttackToReticleTarget::K2Node_Event_WithResult' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_ExecuteUbergraph_BP_AIAction_AttackToReticleTarget, K2Node_Event_ControlledPawn_1) == 0x000018, "Member 'BP_AIAction_AttackToReticleTarget_C_ExecuteUbergraph_BP_AIAction_AttackToReticleTarget::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_ExecuteUbergraph_BP_AIAction_AttackToReticleTarget, K2Node_Event_ControlledPawn_2) == 0x000020, "Member 'BP_AIAction_AttackToReticleTarget_C_ExecuteUbergraph_BP_AIAction_AttackToReticleTarget::K2Node_Event_ControlledPawn_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_ExecuteUbergraph_BP_AIAction_AttackToReticleTarget, K2Node_Event_ControlledPawn_3) == 0x000028, "Member 'BP_AIAction_AttackToReticleTarget_C_ExecuteUbergraph_BP_AIAction_AttackToReticleTarget::K2Node_Event_ControlledPawn_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_ExecuteUbergraph_BP_AIAction_AttackToReticleTarget, K2Node_Event_DeltaSeconds) == 0x000030, "Member 'BP_AIAction_AttackToReticleTarget_C_ExecuteUbergraph_BP_AIAction_AttackToReticleTarget::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_ExecuteUbergraph_BP_AIAction_AttackToReticleTarget, CallFunc_Tick_FindTarget_TargetFound) == 0x000034, "Member 'BP_AIAction_AttackToReticleTarget_C_ExecuteUbergraph_BP_AIAction_AttackToReticleTarget::CallFunc_Tick_FindTarget_TargetFound' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_ExecuteUbergraph_BP_AIAction_AttackToReticleTarget, K2Node_CustomEvent_TargetActor) == 0x000038, "Member 'BP_AIAction_AttackToReticleTarget_C_ExecuteUbergraph_BP_AIAction_AttackToReticleTarget::K2Node_CustomEvent_TargetActor' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_ExecuteUbergraph_BP_AIAction_AttackToReticleTarget, CallFunc_Tick_FindTarget_DeltaTime_ImplicitCast) == 0x000040, "Member 'BP_AIAction_AttackToReticleTarget_C_ExecuteUbergraph_BP_AIAction_AttackToReticleTarget::CallFunc_Tick_FindTarget_DeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_ExecuteUbergraph_BP_AIAction_AttackToReticleTarget, CallFunc_Tick_ObserveTarget_DeltaTime_ImplicitCast) == 0x000048, "Member 'BP_AIAction_AttackToReticleTarget_C_ExecuteUbergraph_BP_AIAction_AttackToReticleTarget::CallFunc_Tick_ObserveTarget_DeltaTime_ImplicitCast' has a wrong offset!");

// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.CanFindTarget
// 0x0001 (0x0001 - 0x0000)
struct BP_AIAction_AttackToReticleTarget_C_CanFindTarget final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_AttackToReticleTarget_C_CanFindTarget) == 0x000001, "Wrong alignment on BP_AIAction_AttackToReticleTarget_C_CanFindTarget");
static_assert(sizeof(BP_AIAction_AttackToReticleTarget_C_CanFindTarget) == 0x000001, "Wrong size on BP_AIAction_AttackToReticleTarget_C_CanFindTarget");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_CanFindTarget, Result) == 0x000000, "Member 'BP_AIAction_AttackToReticleTarget_C_CanFindTarget::Result' has a wrong offset!");

// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.AddLogTargetNotFound
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_AttackToReticleTarget_C_AddLogTargetNotFound final
{
public:
	class APalCharacter*                          CallFunc_GetCharacter_ReturnValue;                 // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalOtomoHolderComponentBase*           CallFunc_GetOtomoHolderByOtomoPal_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_AttackToReticleTarget_C_AddLogTargetNotFound) == 0x000008, "Wrong alignment on BP_AIAction_AttackToReticleTarget_C_AddLogTargetNotFound");
static_assert(sizeof(BP_AIAction_AttackToReticleTarget_C_AddLogTargetNotFound) == 0x000010, "Wrong size on BP_AIAction_AttackToReticleTarget_C_AddLogTargetNotFound");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_AddLogTargetNotFound, CallFunc_GetCharacter_ReturnValue) == 0x000000, "Member 'BP_AIAction_AttackToReticleTarget_C_AddLogTargetNotFound::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_AddLogTargetNotFound, CallFunc_GetOtomoHolderByOtomoPal_ReturnValue) == 0x000008, "Member 'BP_AIAction_AttackToReticleTarget_C_AddLogTargetNotFound::CallFunc_GetOtomoHolderByOtomoPal_ReturnValue' has a wrong offset!");

// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.AddLogExecute
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_AttackToReticleTarget_C_AddLogExecute final
{
public:
	class APalCharacter*                          CallFunc_GetCharacter_ReturnValue;                 // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalOtomoHolderComponentBase*           CallFunc_GetOtomoHolderByOtomoPal_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_AttackToReticleTarget_C_AddLogExecute) == 0x000008, "Wrong alignment on BP_AIAction_AttackToReticleTarget_C_AddLogExecute");
static_assert(sizeof(BP_AIAction_AttackToReticleTarget_C_AddLogExecute) == 0x000010, "Wrong size on BP_AIAction_AttackToReticleTarget_C_AddLogExecute");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_AddLogExecute, CallFunc_GetCharacter_ReturnValue) == 0x000000, "Member 'BP_AIAction_AttackToReticleTarget_C_AddLogExecute::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_AddLogExecute, CallFunc_GetOtomoHolderByOtomoPal_ReturnValue) == 0x000008, "Member 'BP_AIAction_AttackToReticleTarget_C_AddLogExecute::CallFunc_GetOtomoHolderByOtomoPal_ReturnValue' has a wrong offset!");

// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.ActionTick
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_AttackToReticleTarget_C_ActionTick final
{
public:
	class APawn*                                  ControlledPawn_0;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_AttackToReticleTarget_C_ActionTick) == 0x000008, "Wrong alignment on BP_AIAction_AttackToReticleTarget_C_ActionTick");
static_assert(sizeof(BP_AIAction_AttackToReticleTarget_C_ActionTick) == 0x000010, "Wrong size on BP_AIAction_AttackToReticleTarget_C_ActionTick");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_ActionTick, ControlledPawn_0) == 0x000000, "Member 'BP_AIAction_AttackToReticleTarget_C_ActionTick::ControlledPawn_0' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_ActionTick, DeltaSeconds) == 0x000008, "Member 'BP_AIAction_AttackToReticleTarget_C_ActionTick::DeltaSeconds' has a wrong offset!");

// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_AttackToReticleTarget_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn_0;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_AttackToReticleTarget_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIAction_AttackToReticleTarget_C_ActionStart");
static_assert(sizeof(BP_AIAction_AttackToReticleTarget_C_ActionStart) == 0x000008, "Wrong size on BP_AIAction_AttackToReticleTarget_C_ActionStart");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_ActionStart, ControlledPawn_0) == 0x000000, "Member 'BP_AIAction_AttackToReticleTarget_C_ActionStart::ControlledPawn_0' has a wrong offset!");

// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.ActionFinished
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_AttackToReticleTarget_C_ActionFinished final
{
public:
	class APawn*                                  ControlledPawn_0;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             WithResult;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_AttackToReticleTarget_C_ActionFinished) == 0x000008, "Wrong alignment on BP_AIAction_AttackToReticleTarget_C_ActionFinished");
static_assert(sizeof(BP_AIAction_AttackToReticleTarget_C_ActionFinished) == 0x000010, "Wrong size on BP_AIAction_AttackToReticleTarget_C_ActionFinished");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_ActionFinished, ControlledPawn_0) == 0x000000, "Member 'BP_AIAction_AttackToReticleTarget_C_ActionFinished::ControlledPawn_0' has a wrong offset!");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_ActionFinished, WithResult) == 0x000008, "Member 'BP_AIAction_AttackToReticleTarget_C_ActionFinished::WithResult' has a wrong offset!");

// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.ActionAbort
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_AttackToReticleTarget_C_ActionAbort final
{
public:
	class APawn*                                  ControlledPawn_0;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_AttackToReticleTarget_C_ActionAbort) == 0x000008, "Wrong alignment on BP_AIAction_AttackToReticleTarget_C_ActionAbort");
static_assert(sizeof(BP_AIAction_AttackToReticleTarget_C_ActionAbort) == 0x000008, "Wrong size on BP_AIAction_AttackToReticleTarget_C_ActionAbort");
static_assert(offsetof(BP_AIAction_AttackToReticleTarget_C_ActionAbort, ControlledPawn_0) == 0x000000, "Member 'BP_AIAction_AttackToReticleTarget_C_ActionAbort::ControlledPawn_0' has a wrong offset!");

}

