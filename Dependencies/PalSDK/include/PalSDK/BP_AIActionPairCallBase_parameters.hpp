#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function BP_AIActionPairCallBase.BP_AIActionPairCallBase_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIActionPairCallBase_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionPairCallBase_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIActionPairCallBase_C_ActionStart");
static_assert(sizeof(BP_AIActionPairCallBase_C_ActionStart) == 0x000008, "Wrong size on BP_AIActionPairCallBase_C_ActionStart");
static_assert(offsetof(BP_AIActionPairCallBase_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIActionPairCallBase_C_ActionStart::ControlledPawn' has a wrong offset!");

// Function BP_AIActionPairCallBase.BP_AIActionPairCallBase_C.ActionTick
// 0x0010 (0x0010 - 0x0000)
struct BP_AIActionPairCallBase_C_ActionTick final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionPairCallBase_C_ActionTick) == 0x000008, "Wrong alignment on BP_AIActionPairCallBase_C_ActionTick");
static_assert(sizeof(BP_AIActionPairCallBase_C_ActionTick) == 0x000010, "Wrong size on BP_AIActionPairCallBase_C_ActionTick");
static_assert(offsetof(BP_AIActionPairCallBase_C_ActionTick, ControlledPawn) == 0x000000, "Member 'BP_AIActionPairCallBase_C_ActionTick::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ActionTick, DeltaSeconds) == 0x000008, "Member 'BP_AIActionPairCallBase_C_ActionTick::DeltaSeconds' has a wrong offset!");

// Function BP_AIActionPairCallBase.BP_AIActionPairCallBase_C.CreatePairBehaviorActionDynamicParameter
// 0x01D0 (0x01D0 - 0x0000)
struct BP_AIActionPairCallBase_C_CreatePairBehaviorActionDynamicParameter final
{
public:
	struct FActionDynamicParameter                DynamicParameter_0;                                // 0x0000(0x00E0)(Parm, OutParm)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FActionDynamicParameter                K2Node_MakeStruct_ActionDynamicParameter;          // 0x00F0(0x00E0)()
};
static_assert(alignof(BP_AIActionPairCallBase_C_CreatePairBehaviorActionDynamicParameter) == 0x000010, "Wrong alignment on BP_AIActionPairCallBase_C_CreatePairBehaviorActionDynamicParameter");
static_assert(sizeof(BP_AIActionPairCallBase_C_CreatePairBehaviorActionDynamicParameter) == 0x0001D0, "Wrong size on BP_AIActionPairCallBase_C_CreatePairBehaviorActionDynamicParameter");
static_assert(offsetof(BP_AIActionPairCallBase_C_CreatePairBehaviorActionDynamicParameter, DynamicParameter_0) == 0x000000, "Member 'BP_AIActionPairCallBase_C_CreatePairBehaviorActionDynamicParameter::DynamicParameter_0' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_CreatePairBehaviorActionDynamicParameter, CallFunc_GetController_ReturnValue) == 0x0000E0, "Member 'BP_AIActionPairCallBase_C_CreatePairBehaviorActionDynamicParameter::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_CreatePairBehaviorActionDynamicParameter, CallFunc_K2_GetPawn_ReturnValue) == 0x0000E8, "Member 'BP_AIActionPairCallBase_C_CreatePairBehaviorActionDynamicParameter::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_CreatePairBehaviorActionDynamicParameter, K2Node_MakeStruct_ActionDynamicParameter) == 0x0000F0, "Member 'BP_AIActionPairCallBase_C_CreatePairBehaviorActionDynamicParameter::K2Node_MakeStruct_ActionDynamicParameter' has a wrong offset!");

// Function BP_AIActionPairCallBase.BP_AIActionPairCallBase_C.ExecuteUbergraph_BP_AIActionPairCallBase
// 0x0210 (0x0210 - 0x0000)
struct BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_1;              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_2;              // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_3;              // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalPettingPresset*                     CallFunc_GetPettingPreset_ReturnValue;             // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_1;                 // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDistance_ReturnValue;                  // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                    CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         CallFunc_GetCurrentAction_ReturnValue;             // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNearTwoActor_ReturnValue;               // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_ActionPairBehaviorBase_C*           K2Node_DynamicCast_AsBP_Action_Pair_Behavior_Base; // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_ActionPairStandbyBase_C*            K2Node_DynamicCast_AsBP_Action_Pair_Standby_Base;  // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue_4;              // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_5;              // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_2;                 // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_3;                 // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalFlyMeshHeightCtrlComponent*         CallFunc_GetComponentByClass_ReturnValue_3;        // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalFlyMeshHeightCtrlComponent*         CallFunc_GetComponentByClass_ReturnValue_4;        // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FA[0x6];                                       // 0x00FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActionDynamicParameter                CallFunc_CreatePairBehaviorActionDynamicParameter_DynamicParameter; // 0x0100(0x00E0)()
	class UPalActionBase*                         CallFunc_PlayActionParameter_ReturnValue;          // 0x01E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_ActionPairBehaviorBase_C*           K2Node_DynamicCast_AsBP_Action_Pair_Behavior_Base_1; // 0x01E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F1[0x7];                                      // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_IsNearTwoActor_distance_ImplicitCast;     // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase) == 0x000010, "Wrong alignment on BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase");
static_assert(sizeof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase) == 0x000210, "Wrong size on BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, EntryPoint) == 0x000000, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, K2Node_Event_ControlledPawn_1) == 0x000018, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, K2Node_Event_ControlledPawn) == 0x000020, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, K2Node_Event_DeltaSeconds) == 0x000028, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_IsValid_ReturnValue) == 0x00002C, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_GetController_ReturnValue) == 0x000030, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_GetController_ReturnValue_1) == 0x000038, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_GetController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_K2_GetPawn_ReturnValue) == 0x000040, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_GetController_ReturnValue_2) == 0x000048, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_GetController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_GetComponentByClass_ReturnValue) == 0x000050, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000058, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_GetController_ReturnValue_3) == 0x000060, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_GetController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_GetPettingPreset_ReturnValue) == 0x000068, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_GetPettingPreset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_K2_GetPawn_ReturnValue_1) == 0x000070, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_K2_GetPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_GetDistance_ReturnValue) == 0x000078, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_GetDistance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000080, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000088, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000090, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_GetCurrentAction_ReturnValue) == 0x000098, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_GetCurrentAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_IsNearTwoActor_ReturnValue) == 0x0000A0, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_IsNearTwoActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, K2Node_DynamicCast_AsBP_Action_Pair_Behavior_Base) == 0x0000A8, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::K2Node_DynamicCast_AsBP_Action_Pair_Behavior_Base' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, K2Node_DynamicCast_bSuccess) == 0x0000B0, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, K2Node_DynamicCast_AsBP_Action_Pair_Standby_Base) == 0x0000B8, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::K2Node_DynamicCast_AsBP_Action_Pair_Standby_Base' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, K2Node_DynamicCast_bSuccess_1) == 0x0000C0, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_GetController_ReturnValue_4) == 0x0000C8, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_GetController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_GetController_ReturnValue_5) == 0x0000D0, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_GetController_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_K2_GetPawn_ReturnValue_2) == 0x0000D8, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_K2_GetPawn_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_K2_GetPawn_ReturnValue_3) == 0x0000E0, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_K2_GetPawn_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_GetComponentByClass_ReturnValue_3) == 0x0000E8, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_GetComponentByClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_GetComponentByClass_ReturnValue_4) == 0x0000F0, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_GetComponentByClass_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_IsValid_ReturnValue_1) == 0x0000F8, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_IsValid_ReturnValue_2) == 0x0000F9, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_CreatePairBehaviorActionDynamicParameter_DynamicParameter) == 0x000100, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_CreatePairBehaviorActionDynamicParameter_DynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_PlayActionParameter_ReturnValue) == 0x0001E0, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_PlayActionParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, K2Node_DynamicCast_AsBP_Action_Pair_Behavior_Base_1) == 0x0001E8, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::K2Node_DynamicCast_AsBP_Action_Pair_Behavior_Base_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, K2Node_DynamicCast_bSuccess_2) == 0x0001F0, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x0001F8, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000200, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase, CallFunc_IsNearTwoActor_distance_ImplicitCast) == 0x000208, "Member 'BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase::CallFunc_IsNearTwoActor_distance_ImplicitCast' has a wrong offset!");

}

