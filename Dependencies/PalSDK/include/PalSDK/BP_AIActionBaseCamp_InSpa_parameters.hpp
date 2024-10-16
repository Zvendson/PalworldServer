#pragma once

#include "Basic.hpp"

#include "AIModule_structs.hpp"


namespace PalSDK::Params
{

// Function BP_AIActionBaseCamp_InSpa.BP_AIActionBaseCamp_InSpa_C.ActionFinished
// 0x0010 (0x0010 - 0x0000)
struct BP_AIActionBaseCamp_InSpa_C_ActionFinished final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             WithResult;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionBaseCamp_InSpa_C_ActionFinished) == 0x000008, "Wrong alignment on BP_AIActionBaseCamp_InSpa_C_ActionFinished");
static_assert(sizeof(BP_AIActionBaseCamp_InSpa_C_ActionFinished) == 0x000010, "Wrong size on BP_AIActionBaseCamp_InSpa_C_ActionFinished");
static_assert(offsetof(BP_AIActionBaseCamp_InSpa_C_ActionFinished, ControlledPawn) == 0x000000, "Member 'BP_AIActionBaseCamp_InSpa_C_ActionFinished::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIActionBaseCamp_InSpa_C_ActionFinished, WithResult) == 0x000008, "Member 'BP_AIActionBaseCamp_InSpa_C_ActionFinished::WithResult' has a wrong offset!");

// Function BP_AIActionBaseCamp_InSpa.BP_AIActionBaseCamp_InSpa_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIActionBaseCamp_InSpa_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionBaseCamp_InSpa_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIActionBaseCamp_InSpa_C_ActionStart");
static_assert(sizeof(BP_AIActionBaseCamp_InSpa_C_ActionStart) == 0x000008, "Wrong size on BP_AIActionBaseCamp_InSpa_C_ActionStart");
static_assert(offsetof(BP_AIActionBaseCamp_InSpa_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIActionBaseCamp_InSpa_C_ActionStart::ControlledPawn' has a wrong offset!");

// Function BP_AIActionBaseCamp_InSpa.BP_AIActionBaseCamp_InSpa_C.ExecuteUbergraph_BP_AIActionBaseCamp_InSpa
// 0x0020 (0x0020 - 0x0000)
struct BP_AIActionBaseCamp_InSpa_C_ExecuteUbergraph_BP_AIActionBaseCamp_InSpa final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             K2Node_Event_WithResult;                           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionBaseCamp_InSpa_C_ExecuteUbergraph_BP_AIActionBaseCamp_InSpa) == 0x000008, "Wrong alignment on BP_AIActionBaseCamp_InSpa_C_ExecuteUbergraph_BP_AIActionBaseCamp_InSpa");
static_assert(sizeof(BP_AIActionBaseCamp_InSpa_C_ExecuteUbergraph_BP_AIActionBaseCamp_InSpa) == 0x000020, "Wrong size on BP_AIActionBaseCamp_InSpa_C_ExecuteUbergraph_BP_AIActionBaseCamp_InSpa");
static_assert(offsetof(BP_AIActionBaseCamp_InSpa_C_ExecuteUbergraph_BP_AIActionBaseCamp_InSpa, EntryPoint) == 0x000000, "Member 'BP_AIActionBaseCamp_InSpa_C_ExecuteUbergraph_BP_AIActionBaseCamp_InSpa::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIActionBaseCamp_InSpa_C_ExecuteUbergraph_BP_AIActionBaseCamp_InSpa, K2Node_Event_ControlledPawn) == 0x000008, "Member 'BP_AIActionBaseCamp_InSpa_C_ExecuteUbergraph_BP_AIActionBaseCamp_InSpa::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIActionBaseCamp_InSpa_C_ExecuteUbergraph_BP_AIActionBaseCamp_InSpa, K2Node_Event_WithResult) == 0x000010, "Member 'BP_AIActionBaseCamp_InSpa_C_ExecuteUbergraph_BP_AIActionBaseCamp_InSpa::K2Node_Event_WithResult' has a wrong offset!");
static_assert(offsetof(BP_AIActionBaseCamp_InSpa_C_ExecuteUbergraph_BP_AIActionBaseCamp_InSpa, K2Node_Event_ControlledPawn_1) == 0x000018, "Member 'BP_AIActionBaseCamp_InSpa_C_ExecuteUbergraph_BP_AIActionBaseCamp_InSpa::K2Node_Event_ControlledPawn_1' has a wrong offset!");

// Function BP_AIActionBaseCamp_InSpa.BP_AIActionBaseCamp_InSpa_C.OnFinishedImpl
// 0x0028 (0x0028 - 0x0000)
struct BP_AIActionBaseCamp_InSpa_C_OnFinishedImpl final
{
public:
	class AActor*                                 ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterMovementComponent*         CallFunc_GetPalCharacterMovementComponent_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionBaseCamp_InSpa_C_OnFinishedImpl) == 0x000008, "Wrong alignment on BP_AIActionBaseCamp_InSpa_C_OnFinishedImpl");
static_assert(sizeof(BP_AIActionBaseCamp_InSpa_C_OnFinishedImpl) == 0x000028, "Wrong size on BP_AIActionBaseCamp_InSpa_C_OnFinishedImpl");
static_assert(offsetof(BP_AIActionBaseCamp_InSpa_C_OnFinishedImpl, ControlledPawn) == 0x000000, "Member 'BP_AIActionBaseCamp_InSpa_C_OnFinishedImpl::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIActionBaseCamp_InSpa_C_OnFinishedImpl, CallFunc_GetComponentByClass_ReturnValue) == 0x000008, "Member 'BP_AIActionBaseCamp_InSpa_C_OnFinishedImpl::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionBaseCamp_InSpa_C_OnFinishedImpl, K2Node_DynamicCast_AsPal_Character) == 0x000010, "Member 'BP_AIActionBaseCamp_InSpa_C_OnFinishedImpl::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_AIActionBaseCamp_InSpa_C_OnFinishedImpl, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_AIActionBaseCamp_InSpa_C_OnFinishedImpl::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIActionBaseCamp_InSpa_C_OnFinishedImpl, CallFunc_GetPalCharacterMovementComponent_ReturnValue) == 0x000020, "Member 'BP_AIActionBaseCamp_InSpa_C_OnFinishedImpl::CallFunc_GetPalCharacterMovementComponent_ReturnValue' has a wrong offset!");

// Function BP_AIActionBaseCamp_InSpa.BP_AIActionBaseCamp_InSpa_C.OnStartImpl
// 0x0030 (0x0030 - 0x0000)
struct BP_AIActionBaseCamp_InSpa_C_OnStartImpl final
{
public:
	class AActor*                                 ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionBase*                         CallFunc_PlayActionByType_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetPalCharacterMovementComponent_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionBaseCamp_InSpa_C_OnStartImpl) == 0x000008, "Wrong alignment on BP_AIActionBaseCamp_InSpa_C_OnStartImpl");
static_assert(sizeof(BP_AIActionBaseCamp_InSpa_C_OnStartImpl) == 0x000030, "Wrong size on BP_AIActionBaseCamp_InSpa_C_OnStartImpl");
static_assert(offsetof(BP_AIActionBaseCamp_InSpa_C_OnStartImpl, ControlledPawn) == 0x000000, "Member 'BP_AIActionBaseCamp_InSpa_C_OnStartImpl::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIActionBaseCamp_InSpa_C_OnStartImpl, CallFunc_GetComponentByClass_ReturnValue) == 0x000008, "Member 'BP_AIActionBaseCamp_InSpa_C_OnStartImpl::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionBaseCamp_InSpa_C_OnStartImpl, K2Node_DynamicCast_AsPal_Character) == 0x000010, "Member 'BP_AIActionBaseCamp_InSpa_C_OnStartImpl::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_AIActionBaseCamp_InSpa_C_OnStartImpl, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_AIActionBaseCamp_InSpa_C_OnStartImpl::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIActionBaseCamp_InSpa_C_OnStartImpl, CallFunc_PlayActionByType_ReturnValue) == 0x000020, "Member 'BP_AIActionBaseCamp_InSpa_C_OnStartImpl::CallFunc_PlayActionByType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionBaseCamp_InSpa_C_OnStartImpl, CallFunc_GetPalCharacterMovementComponent_ReturnValue) == 0x000028, "Member 'BP_AIActionBaseCamp_InSpa_C_OnStartImpl::CallFunc_GetPalCharacterMovementComponent_ReturnValue' has a wrong offset!");

// Function BP_AIActionBaseCamp_InSpa.BP_AIActionBaseCamp_InSpa_C.GetUsingTime
// 0x0010 (0x0010 - 0x0000)
struct BP_AIActionBaseCamp_InSpa_C_GetUsingTime final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionBaseCamp_InSpa_C_GetUsingTime) == 0x000008, "Wrong alignment on BP_AIActionBaseCamp_InSpa_C_GetUsingTime");
static_assert(sizeof(BP_AIActionBaseCamp_InSpa_C_GetUsingTime) == 0x000010, "Wrong size on BP_AIActionBaseCamp_InSpa_C_GetUsingTime");
static_assert(offsetof(BP_AIActionBaseCamp_InSpa_C_GetUsingTime, ReturnValue) == 0x000000, "Member 'BP_AIActionBaseCamp_InSpa_C_GetUsingTime::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionBaseCamp_InSpa_C_GetUsingTime, CallFunc_GetGameSetting_ReturnValue) == 0x000008, "Member 'BP_AIActionBaseCamp_InSpa_C_GetUsingTime::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");

}

