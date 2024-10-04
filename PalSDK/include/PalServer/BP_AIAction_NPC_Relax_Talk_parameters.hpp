#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "AIModule_structs.hpp"


namespace PalServer::Params
{

// Function BP_AIAction_NPC_Relax_Talk.BP_AIAction_NPC_Relax_Talk_C.ActionAbort
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_NPC_Relax_Talk_C_ActionAbort final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Relax_Talk_C_ActionAbort) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Relax_Talk_C_ActionAbort");
static_assert(sizeof(BP_AIAction_NPC_Relax_Talk_C_ActionAbort) == 0x000008, "Wrong size on BP_AIAction_NPC_Relax_Talk_C_ActionAbort");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ActionAbort, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPC_Relax_Talk_C_ActionAbort::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_NPC_Relax_Talk.BP_AIAction_NPC_Relax_Talk_C.ActionFinished
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_NPC_Relax_Talk_C_ActionFinished final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             WithResult;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Relax_Talk_C_ActionFinished) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Relax_Talk_C_ActionFinished");
static_assert(sizeof(BP_AIAction_NPC_Relax_Talk_C_ActionFinished) == 0x000010, "Wrong size on BP_AIAction_NPC_Relax_Talk_C_ActionFinished");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ActionFinished, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPC_Relax_Talk_C_ActionFinished::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ActionFinished, WithResult) == 0x000008, "Member 'BP_AIAction_NPC_Relax_Talk_C_ActionFinished::WithResult' has a wrong offset!");

// Function BP_AIAction_NPC_Relax_Talk.BP_AIAction_NPC_Relax_Talk_C.ActionPause
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_NPC_Relax_Talk_C_ActionPause final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Relax_Talk_C_ActionPause) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Relax_Talk_C_ActionPause");
static_assert(sizeof(BP_AIAction_NPC_Relax_Talk_C_ActionPause) == 0x000008, "Wrong size on BP_AIAction_NPC_Relax_Talk_C_ActionPause");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ActionPause, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPC_Relax_Talk_C_ActionPause::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_NPC_Relax_Talk.BP_AIAction_NPC_Relax_Talk_C.ActionPostTick
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_NPC_Relax_Talk_C_ActionPostTick final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Relax_Talk_C_ActionPostTick) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Relax_Talk_C_ActionPostTick");
static_assert(sizeof(BP_AIAction_NPC_Relax_Talk_C_ActionPostTick) == 0x000010, "Wrong size on BP_AIAction_NPC_Relax_Talk_C_ActionPostTick");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ActionPostTick, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPC_Relax_Talk_C_ActionPostTick::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ActionPostTick, DeltaSeconds) == 0x000008, "Member 'BP_AIAction_NPC_Relax_Talk_C_ActionPostTick::DeltaSeconds' has a wrong offset!");

// Function BP_AIAction_NPC_Relax_Talk.BP_AIAction_NPC_Relax_Talk_C.ActionResume
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_NPC_Relax_Talk_C_ActionResume final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Relax_Talk_C_ActionResume) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Relax_Talk_C_ActionResume");
static_assert(sizeof(BP_AIAction_NPC_Relax_Talk_C_ActionResume) == 0x000008, "Wrong size on BP_AIAction_NPC_Relax_Talk_C_ActionResume");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ActionResume, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPC_Relax_Talk_C_ActionResume::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_NPC_Relax_Talk.BP_AIAction_NPC_Relax_Talk_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_NPC_Relax_Talk_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Relax_Talk_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Relax_Talk_C_ActionStart");
static_assert(sizeof(BP_AIAction_NPC_Relax_Talk_C_ActionStart) == 0x000008, "Wrong size on BP_AIAction_NPC_Relax_Talk_C_ActionStart");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPC_Relax_Talk_C_ActionStart::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_NPC_Relax_Talk.BP_AIAction_NPC_Relax_Talk_C.ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk
// 0x0178 (0x0178 - 0x0000)
struct BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_5;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_4;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_3;                     // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             K2Node_Event_WithResult;                           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_2;                     // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalAIBlackboard_Common_C*           CallFunc_GetLeaderPalBrackBoard_BB;                // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue; // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalInstanceID                         CallFunc_GetIndividualID_ReturnValue;              // 0x0060(0x0030)(HasGetValueTypeHash)
	class UPalActionComponent*                    CallFunc_GetActionComponent_ReturnValue;           // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         CallFunc_PlayActionByType_ReturnValue;             // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SelfIsLeader_IsLeader;                    // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SelfIsLeader_IsLeader_1;                  // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A2[0x6];                                       // 0x00A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_PalAIBlackboard_Common_C*           CallFunc_GetSelfPalBlackBoard_PalBlackBoard;       // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                    CallFunc_GetActionComponent_ReturnValue_1;         // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         CallFunc_PlayActionByType_ReturnValue_1;           // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C4[0x4];                                       // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPalInstanceID>                 CallFunc_GetMemberID_OutList;                      // 0x00C8(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DD[0x3];                                       // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E4[0x4];                                       // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_PalAIBlackboard_Common_C*           CallFunc_GetSelfPalBlackBoard_PalBlackBoard_1;     // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPalInstanceID>                 CallFunc_GetMemberID_OutList_1;                    // 0x00F0(0x0010)(ReferenceParm)
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalInstanceID                         CallFunc_Array_Get_Item;                           // 0x0108(0x0030)(HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_159[0x7];                                      // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RandomFloatInRange_ReturnValue_3;         // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast_1;            // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk");
static_assert(sizeof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk) == 0x000178, "Wrong size on BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, EntryPoint) == 0x000000, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, K2Node_Event_ControlledPawn) == 0x000008, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, K2Node_Event_DeltaSeconds) == 0x000010, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, K2Node_Event_ControlledPawn_5) == 0x000018, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::K2Node_Event_ControlledPawn_5' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, K2Node_Event_ControlledPawn_4) == 0x000020, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::K2Node_Event_ControlledPawn_4' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, K2Node_Event_ControlledPawn_3) == 0x000028, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::K2Node_Event_ControlledPawn_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, K2Node_Event_WithResult) == 0x000030, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::K2Node_Event_WithResult' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, K2Node_Event_ControlledPawn_2) == 0x000038, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::K2Node_Event_ControlledPawn_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, K2Node_Event_ControlledPawn_1) == 0x000040, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, CallFunc_GetLeaderPalBrackBoard_BB) == 0x000048, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::CallFunc_GetLeaderPalBrackBoard_BB' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, CallFunc_GetComponentByClass_ReturnValue) == 0x000050, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue) == 0x000058, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, CallFunc_GetIndividualID_ReturnValue) == 0x000060, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::CallFunc_GetIndividualID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, CallFunc_GetActionComponent_ReturnValue) == 0x000090, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::CallFunc_GetActionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, CallFunc_PlayActionByType_ReturnValue) == 0x000098, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::CallFunc_PlayActionByType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, CallFunc_SelfIsLeader_IsLeader) == 0x0000A0, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::CallFunc_SelfIsLeader_IsLeader' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, CallFunc_SelfIsLeader_IsLeader_1) == 0x0000A1, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::CallFunc_SelfIsLeader_IsLeader_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, CallFunc_GetSelfPalBlackBoard_PalBlackBoard) == 0x0000A8, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::CallFunc_GetSelfPalBlackBoard_PalBlackBoard' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, CallFunc_GetActionComponent_ReturnValue_1) == 0x0000B0, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::CallFunc_GetActionComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, CallFunc_PlayActionByType_ReturnValue_1) == 0x0000B8, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::CallFunc_PlayActionByType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, Temp_int_Variable) == 0x0000C0, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, CallFunc_GetMemberID_OutList) == 0x0000C8, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::CallFunc_GetMemberID_OutList' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, CallFunc_Array_Length_ReturnValue) == 0x0000D8, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0000DC, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, CallFunc_Add_IntInt_ReturnValue) == 0x0000E0, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, CallFunc_GetSelfPalBlackBoard_PalBlackBoard_1) == 0x0000E8, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::CallFunc_GetSelfPalBlackBoard_PalBlackBoard_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, CallFunc_GetMemberID_OutList_1) == 0x0000F0, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::CallFunc_GetMemberID_OutList_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, CallFunc_RandomFloatInRange_ReturnValue) == 0x000100, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, CallFunc_Array_Get_Item) == 0x000108, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000138, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, CallFunc_Conv_IntToString_ReturnValue) == 0x000140, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, CallFunc_RandomFloatInRange_ReturnValue_2) == 0x000150, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::CallFunc_RandomFloatInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000158, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, CallFunc_RandomFloatInRange_ReturnValue_3) == 0x000160, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::CallFunc_RandomFloatInRange_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000168, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, CallFunc_Delay_Duration_ImplicitCast) == 0x000170, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk, CallFunc_Delay_Duration_ImplicitCast_1) == 0x000174, "Member 'BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk::CallFunc_Delay_Duration_ImplicitCast_1' has a wrong offset!");

// Function BP_AIAction_NPC_Relax_Talk.BP_AIAction_NPC_Relax_Talk_C.GetMemberID
// 0x0040 (0x0040 - 0x0000)
struct BP_AIAction_NPC_Relax_Talk_C_GetMemberID final
{
public:
	TArray<struct FPalInstanceID>                 OutList;                                           // 0x0000(0x0010)(Parm, OutParm)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalAIController*                       K2Node_DynamicCast_AsPal_AIController;             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalSquad*                              CallFunc_GetSquad_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPalInstanceID>                 CallFunc_GetMemberID_OutList;                      // 0x0030(0x0010)(ReferenceParm)
};
static_assert(alignof(BP_AIAction_NPC_Relax_Talk_C_GetMemberID) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Relax_Talk_C_GetMemberID");
static_assert(sizeof(BP_AIAction_NPC_Relax_Talk_C_GetMemberID) == 0x000040, "Wrong size on BP_AIAction_NPC_Relax_Talk_C_GetMemberID");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_GetMemberID, OutList) == 0x000000, "Member 'BP_AIAction_NPC_Relax_Talk_C_GetMemberID::OutList' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_GetMemberID, CallFunc_GetController_ReturnValue) == 0x000010, "Member 'BP_AIAction_NPC_Relax_Talk_C_GetMemberID::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_GetMemberID, K2Node_DynamicCast_AsPal_AIController) == 0x000018, "Member 'BP_AIAction_NPC_Relax_Talk_C_GetMemberID::K2Node_DynamicCast_AsPal_AIController' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_GetMemberID, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_AIAction_NPC_Relax_Talk_C_GetMemberID::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_GetMemberID, CallFunc_GetSquad_ReturnValue) == 0x000028, "Member 'BP_AIAction_NPC_Relax_Talk_C_GetMemberID::CallFunc_GetSquad_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_GetMemberID, CallFunc_GetMemberID_OutList) == 0x000030, "Member 'BP_AIAction_NPC_Relax_Talk_C_GetMemberID::CallFunc_GetMemberID_OutList' has a wrong offset!");

// Function BP_AIAction_NPC_Relax_Talk.BP_AIAction_NPC_Relax_Talk_C.StopAction
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_NPC_Relax_Talk_C_StopAction final
{
public:
	class UPalActionComponent*                    CallFunc_GetActionComponent_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Relax_Talk_C_StopAction) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Relax_Talk_C_StopAction");
static_assert(sizeof(BP_AIAction_NPC_Relax_Talk_C_StopAction) == 0x000010, "Wrong size on BP_AIAction_NPC_Relax_Talk_C_StopAction");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_StopAction, CallFunc_GetActionComponent_ReturnValue) == 0x000000, "Member 'BP_AIAction_NPC_Relax_Talk_C_StopAction::CallFunc_GetActionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_StopAction, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_AIAction_NPC_Relax_Talk_C_StopAction::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_Talk_C_StopAction, CallFunc_IsValid_ReturnValue_1) == 0x000009, "Member 'BP_AIAction_NPC_Relax_Talk_C_StopAction::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

