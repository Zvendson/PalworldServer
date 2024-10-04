#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "AIModule_structs.hpp"
#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function BP_AIActionHealWater.BP_AIActionHealWater_C.Setup
// 0x0028 (0x0028 - 0x0000)
struct BP_AIActionHealWater_C_Setup final
{
public:
	class UObject*                                Object;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalPartnerSkillParameterComponent*     CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetTrainerPlayer_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionHealWater_C_Setup) == 0x000008, "Wrong alignment on BP_AIActionHealWater_C_Setup");
static_assert(sizeof(BP_AIActionHealWater_C_Setup) == 0x000028, "Wrong size on BP_AIActionHealWater_C_Setup");
static_assert(offsetof(BP_AIActionHealWater_C_Setup, Object) == 0x000000, "Member 'BP_AIActionHealWater_C_Setup::Object' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_Setup, K2Node_DynamicCast_AsPal_Character) == 0x000008, "Member 'BP_AIActionHealWater_C_Setup::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_Setup, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_AIActionHealWater_C_Setup::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_Setup, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'BP_AIActionHealWater_C_Setup::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_Setup, CallFunc_GetTrainerPlayer_ReturnValue) == 0x000020, "Member 'BP_AIActionHealWater_C_Setup::CallFunc_GetTrainerPlayer_ReturnValue' has a wrong offset!");

// Function BP_AIActionHealWater.BP_AIActionHealWater_C.SetMoveDisableFlag
// 0x0010 (0x0010 - 0x0000)
struct BP_AIActionHealWater_C_SetMoveDisableFlag final
{
public:
	bool                                          IsDisable;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterMovementComponent*         CallFunc_GetPalCharacterMovementComponent_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionHealWater_C_SetMoveDisableFlag) == 0x000008, "Wrong alignment on BP_AIActionHealWater_C_SetMoveDisableFlag");
static_assert(sizeof(BP_AIActionHealWater_C_SetMoveDisableFlag) == 0x000010, "Wrong size on BP_AIActionHealWater_C_SetMoveDisableFlag");
static_assert(offsetof(BP_AIActionHealWater_C_SetMoveDisableFlag, IsDisable) == 0x000000, "Member 'BP_AIActionHealWater_C_SetMoveDisableFlag::IsDisable' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_SetMoveDisableFlag, CallFunc_GetPalCharacterMovementComponent_ReturnValue) == 0x000008, "Member 'BP_AIActionHealWater_C_SetMoveDisableFlag::CallFunc_GetPalCharacterMovementComponent_ReturnValue' has a wrong offset!");

// Function BP_AIActionHealWater.BP_AIActionHealWater_C.SetDisableThrowPalFlag
// 0x0028 (0x0028 - 0x0000)
struct BP_AIActionHealWater_C_SetDisableThrowPalFlag final
{
public:
	bool                                          IsDisable;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   FlagName;                                          // 0x0004(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerController*                   K2Node_DynamicCast_AsPal_Player_Controller;        // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionHealWater_C_SetDisableThrowPalFlag) == 0x000008, "Wrong alignment on BP_AIActionHealWater_C_SetDisableThrowPalFlag");
static_assert(sizeof(BP_AIActionHealWater_C_SetDisableThrowPalFlag) == 0x000028, "Wrong size on BP_AIActionHealWater_C_SetDisableThrowPalFlag");
static_assert(offsetof(BP_AIActionHealWater_C_SetDisableThrowPalFlag, IsDisable) == 0x000000, "Member 'BP_AIActionHealWater_C_SetDisableThrowPalFlag::IsDisable' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_SetDisableThrowPalFlag, FlagName) == 0x000004, "Member 'BP_AIActionHealWater_C_SetDisableThrowPalFlag::FlagName' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_SetDisableThrowPalFlag, CallFunc_GetController_ReturnValue) == 0x000010, "Member 'BP_AIActionHealWater_C_SetDisableThrowPalFlag::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_SetDisableThrowPalFlag, K2Node_DynamicCast_AsPal_Player_Controller) == 0x000018, "Member 'BP_AIActionHealWater_C_SetDisableThrowPalFlag::K2Node_DynamicCast_AsPal_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_SetDisableThrowPalFlag, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_AIActionHealWater_C_SetDisableThrowPalFlag::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_AIActionHealWater.BP_AIActionHealWater_C.OnActionNotify
// 0x0010 (0x0010 - 0x0000)
struct BP_AIActionHealWater_C_OnActionNotify final
{
public:
	const class UPalActionBase*                   Action;                                            // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   NotifyName;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionHealWater_C_OnActionNotify) == 0x000008, "Wrong alignment on BP_AIActionHealWater_C_OnActionNotify");
static_assert(sizeof(BP_AIActionHealWater_C_OnActionNotify) == 0x000010, "Wrong size on BP_AIActionHealWater_C_OnActionNotify");
static_assert(offsetof(BP_AIActionHealWater_C_OnActionNotify, Action) == 0x000000, "Member 'BP_AIActionHealWater_C_OnActionNotify::Action' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_OnActionNotify, NotifyName) == 0x000008, "Member 'BP_AIActionHealWater_C_OnActionNotify::NotifyName' has a wrong offset!");

// Function BP_AIActionHealWater.BP_AIActionHealWater_C.GetHealValue
// 0x0020 (0x0020 - 0x0000)
struct BP_AIActionHealWater_C_GetHealValue final
{
public:
	int32                                         HealValue;                                         // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalPartnerSkillParameterComponent*     CallFunc_GetComponentByClass_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetActiveSkillMainValueByRank_ReturnValue; // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FTrunc_A_ImplicitCast;                    // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionHealWater_C_GetHealValue) == 0x000008, "Wrong alignment on BP_AIActionHealWater_C_GetHealValue");
static_assert(sizeof(BP_AIActionHealWater_C_GetHealValue) == 0x000020, "Wrong size on BP_AIActionHealWater_C_GetHealValue");
static_assert(offsetof(BP_AIActionHealWater_C_GetHealValue, HealValue) == 0x000000, "Member 'BP_AIActionHealWater_C_GetHealValue::HealValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_GetHealValue, CallFunc_GetComponentByClass_ReturnValue) == 0x000008, "Member 'BP_AIActionHealWater_C_GetHealValue::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_GetHealValue, CallFunc_GetActiveSkillMainValueByRank_ReturnValue) == 0x000010, "Member 'BP_AIActionHealWater_C_GetHealValue::CallFunc_GetActiveSkillMainValueByRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_GetHealValue, CallFunc_FTrunc_ReturnValue) == 0x000014, "Member 'BP_AIActionHealWater_C_GetHealValue::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_GetHealValue, CallFunc_FTrunc_A_ImplicitCast) == 0x000018, "Member 'BP_AIActionHealWater_C_GetHealValue::CallFunc_FTrunc_A_ImplicitCast' has a wrong offset!");

// Function BP_AIActionHealWater.BP_AIActionHealWater_C.ExecuteUbergraph_BP_AIActionHealWater
// 0x0148 (0x0148 - 0x0000)
struct BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_2;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalActionBase* Action, class FName NotifyName)> K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             K2Node_Event_WithResult;                           // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x00E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0100(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10A[0x2];                                      // 0x010A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetHealValue_HealValue;                   // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFixedPoint64                          CallFunc_Convert_IntToFixedPoint64_ReturnValue;    // 0x0110(0x0008)(NoDestructor)
	const class UPalActionBase*                   K2Node_CustomEvent_action;                         // 0x0118(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName;                     // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionComponent*                    CallFunc_GetActionComponent_ReturnValue;           // 0x0130(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                    CallFunc_GetActionComponent_ReturnValue_1;         // 0x0138(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PlayAction_ReturnValue;                   // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater) == 0x000008, "Wrong alignment on BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater");
static_assert(sizeof(BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater) == 0x000148, "Wrong size on BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater");
static_assert(offsetof(BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater, EntryPoint) == 0x000000, "Member 'BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater, K2Node_Event_ControlledPawn_2) == 0x000008, "Member 'BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater::K2Node_Event_ControlledPawn_2' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater, K2Node_Event_DeltaSeconds) == 0x000010, "Member 'BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater, K2Node_Event_ControlledPawn_1) == 0x000028, "Member 'BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater, K2Node_Event_ControlledPawn) == 0x000030, "Member 'BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater, K2Node_Event_WithResult) == 0x000038, "Member 'BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater::K2Node_Event_WithResult' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000040, "Member 'BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000058, "Member 'BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater, CallFunc_BreakVector_X) == 0x000070, "Member 'BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater, CallFunc_BreakVector_Y) == 0x000078, "Member 'BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater, CallFunc_BreakVector_Z) == 0x000080, "Member 'BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater, CallFunc_BreakVector_X_1) == 0x000088, "Member 'BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater, CallFunc_BreakVector_Y_1) == 0x000090, "Member 'BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater, CallFunc_BreakVector_Z_1) == 0x000098, "Member 'BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater, CallFunc_MakeVector_ReturnValue) == 0x0000A0, "Member 'BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater, CallFunc_MakeVector_ReturnValue_1) == 0x0000B8, "Member 'BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000D0, "Member 'BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x0000E8, "Member 'BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater, CallFunc_GetComponentByClass_ReturnValue) == 0x000100, "Member 'BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater, CallFunc_K2_SetActorRotation_ReturnValue) == 0x000108, "Member 'BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater, CallFunc_IsValid_ReturnValue) == 0x000109, "Member 'BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater, CallFunc_GetHealValue_HealValue) == 0x00010C, "Member 'BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater::CallFunc_GetHealValue_HealValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater, CallFunc_Convert_IntToFixedPoint64_ReturnValue) == 0x000110, "Member 'BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater::CallFunc_Convert_IntToFixedPoint64_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater, K2Node_CustomEvent_action) == 0x000118, "Member 'BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater::K2Node_CustomEvent_action' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater, K2Node_CustomEvent_NotifyName) == 0x000120, "Member 'BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater::K2Node_CustomEvent_NotifyName' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater, K2Node_SwitchName_CmpSuccess) == 0x000128, "Member 'BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater, CallFunc_GetActionComponent_ReturnValue) == 0x000130, "Member 'BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater::CallFunc_GetActionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater, CallFunc_GetActionComponent_ReturnValue_1) == 0x000138, "Member 'BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater::CallFunc_GetActionComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater, CallFunc_PlayAction_ReturnValue) == 0x000140, "Member 'BP_AIActionHealWater_C_ExecuteUbergraph_BP_AIActionHealWater::CallFunc_PlayAction_ReturnValue' has a wrong offset!");

// Function BP_AIActionHealWater.BP_AIActionHealWater_C.AddSkillLog
// 0x0010 (0x0010 - 0x0000)
struct BP_AIActionHealWater_C_AddSkillLog final
{
public:
	int32                                         CallFunc_GetHealValue_HealValue;                   // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalOtomoHolderComponentBase*           CallFunc_GetOtomoHolderByOtomoPal_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionHealWater_C_AddSkillLog) == 0x000008, "Wrong alignment on BP_AIActionHealWater_C_AddSkillLog");
static_assert(sizeof(BP_AIActionHealWater_C_AddSkillLog) == 0x000010, "Wrong size on BP_AIActionHealWater_C_AddSkillLog");
static_assert(offsetof(BP_AIActionHealWater_C_AddSkillLog, CallFunc_GetHealValue_HealValue) == 0x000000, "Member 'BP_AIActionHealWater_C_AddSkillLog::CallFunc_GetHealValue_HealValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_AddSkillLog, CallFunc_GetOtomoHolderByOtomoPal_ReturnValue) == 0x000008, "Member 'BP_AIActionHealWater_C_AddSkillLog::CallFunc_GetOtomoHolderByOtomoPal_ReturnValue' has a wrong offset!");

// Function BP_AIActionHealWater.BP_AIActionHealWater_C.ActionTick
// 0x0010 (0x0010 - 0x0000)
struct BP_AIActionHealWater_C_ActionTick final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionHealWater_C_ActionTick) == 0x000008, "Wrong alignment on BP_AIActionHealWater_C_ActionTick");
static_assert(sizeof(BP_AIActionHealWater_C_ActionTick) == 0x000010, "Wrong size on BP_AIActionHealWater_C_ActionTick");
static_assert(offsetof(BP_AIActionHealWater_C_ActionTick, ControlledPawn) == 0x000000, "Member 'BP_AIActionHealWater_C_ActionTick::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_ActionTick, DeltaSeconds) == 0x000008, "Member 'BP_AIActionHealWater_C_ActionTick::DeltaSeconds' has a wrong offset!");

// Function BP_AIActionHealWater.BP_AIActionHealWater_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIActionHealWater_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionHealWater_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIActionHealWater_C_ActionStart");
static_assert(sizeof(BP_AIActionHealWater_C_ActionStart) == 0x000008, "Wrong size on BP_AIActionHealWater_C_ActionStart");
static_assert(offsetof(BP_AIActionHealWater_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIActionHealWater_C_ActionStart::ControlledPawn' has a wrong offset!");

// Function BP_AIActionHealWater.BP_AIActionHealWater_C.ActionFinished
// 0x0010 (0x0010 - 0x0000)
struct BP_AIActionHealWater_C_ActionFinished final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             WithResult;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionHealWater_C_ActionFinished) == 0x000008, "Wrong alignment on BP_AIActionHealWater_C_ActionFinished");
static_assert(sizeof(BP_AIActionHealWater_C_ActionFinished) == 0x000010, "Wrong size on BP_AIActionHealWater_C_ActionFinished");
static_assert(offsetof(BP_AIActionHealWater_C_ActionFinished, ControlledPawn) == 0x000000, "Member 'BP_AIActionHealWater_C_ActionFinished::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealWater_C_ActionFinished, WithResult) == 0x000008, "Member 'BP_AIActionHealWater_C_ActionFinished::WithResult' has a wrong offset!");

}

