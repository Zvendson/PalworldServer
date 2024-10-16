#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function BP_AIAction_UseWaza.BP_AIAction_UseWaza_C.SetupAction
// 0x0020 (0x0020 - 0x0000)
struct BP_AIAction_UseWaza_C_SetupAction final
{
public:
	class APawn*                                  ControlledPawn_0;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_MonsterAIController_Otomo_C*        K2Node_DynamicCast_AsBP_Monster_AIController_Otomo; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_UseWaza_C_SetupAction) == 0x000008, "Wrong alignment on BP_AIAction_UseWaza_C_SetupAction");
static_assert(sizeof(BP_AIAction_UseWaza_C_SetupAction) == 0x000020, "Wrong size on BP_AIAction_UseWaza_C_SetupAction");
static_assert(offsetof(BP_AIAction_UseWaza_C_SetupAction, ControlledPawn_0) == 0x000000, "Member 'BP_AIAction_UseWaza_C_SetupAction::ControlledPawn_0' has a wrong offset!");
static_assert(offsetof(BP_AIAction_UseWaza_C_SetupAction, CallFunc_GetController_ReturnValue) == 0x000008, "Member 'BP_AIAction_UseWaza_C_SetupAction::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_UseWaza_C_SetupAction, K2Node_DynamicCast_AsBP_Monster_AIController_Otomo) == 0x000010, "Member 'BP_AIAction_UseWaza_C_SetupAction::K2Node_DynamicCast_AsBP_Monster_AIController_Otomo' has a wrong offset!");
static_assert(offsetof(BP_AIAction_UseWaza_C_SetupAction, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_AIAction_UseWaza_C_SetupAction::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_AIAction_UseWaza.BP_AIAction_UseWaza_C.OnTargetFound
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_UseWaza_C_OnTargetFound final
{
public:
	class AActor*                                 TargetActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_UseWaza_C_OnTargetFound) == 0x000008, "Wrong alignment on BP_AIAction_UseWaza_C_OnTargetFound");
static_assert(sizeof(BP_AIAction_UseWaza_C_OnTargetFound) == 0x000008, "Wrong size on BP_AIAction_UseWaza_C_OnTargetFound");
static_assert(offsetof(BP_AIAction_UseWaza_C_OnTargetFound, TargetActor) == 0x000000, "Member 'BP_AIAction_UseWaza_C_OnTargetFound::TargetActor' has a wrong offset!");

// Function BP_AIAction_UseWaza.BP_AIAction_UseWaza_C.IsAvailableWaza
// 0x0068 (0x0068 - 0x0000)
struct BP_AIAction_UseWaza_C_IsAvailableWaza final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EPalStatusID>                          CheckStatus;                                       // 0x0008(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EPalStatusID>                          K2Node_MakeArray_Array;                            // 0x0028(0x0010)(ReferenceParm)
	EPalStatusID                                  CallFunc_Array_Get_Item;                           // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalStatusBase*                         CallFunc_GetExecutionStatus_ReturnValue;           // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionBase*                         CallFunc_GetCurrentAction_ReturnValue;             // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_UseWaza_C_IsAvailableWaza) == 0x000008, "Wrong alignment on BP_AIAction_UseWaza_C_IsAvailableWaza");
static_assert(sizeof(BP_AIAction_UseWaza_C_IsAvailableWaza) == 0x000068, "Wrong size on BP_AIAction_UseWaza_C_IsAvailableWaza");
static_assert(offsetof(BP_AIAction_UseWaza_C_IsAvailableWaza, Result) == 0x000000, "Member 'BP_AIAction_UseWaza_C_IsAvailableWaza::Result' has a wrong offset!");
static_assert(offsetof(BP_AIAction_UseWaza_C_IsAvailableWaza, CheckStatus) == 0x000008, "Member 'BP_AIAction_UseWaza_C_IsAvailableWaza::CheckStatus' has a wrong offset!");
static_assert(offsetof(BP_AIAction_UseWaza_C_IsAvailableWaza, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BP_AIAction_UseWaza_C_IsAvailableWaza::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIAction_UseWaza_C_IsAvailableWaza, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'BP_AIAction_UseWaza_C_IsAvailableWaza::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIAction_UseWaza_C_IsAvailableWaza, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'BP_AIAction_UseWaza_C_IsAvailableWaza::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_UseWaza_C_IsAvailableWaza, K2Node_MakeArray_Array) == 0x000028, "Member 'BP_AIAction_UseWaza_C_IsAvailableWaza::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_AIAction_UseWaza_C_IsAvailableWaza, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_AIAction_UseWaza_C_IsAvailableWaza::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_AIAction_UseWaza_C_IsAvailableWaza, CallFunc_Array_Length_ReturnValue) == 0x00003C, "Member 'BP_AIAction_UseWaza_C_IsAvailableWaza::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_UseWaza_C_IsAvailableWaza, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'BP_AIAction_UseWaza_C_IsAvailableWaza::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_UseWaza_C_IsAvailableWaza, CallFunc_GetExecutionStatus_ReturnValue) == 0x000048, "Member 'BP_AIAction_UseWaza_C_IsAvailableWaza::CallFunc_GetExecutionStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_UseWaza_C_IsAvailableWaza, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'BP_AIAction_UseWaza_C_IsAvailableWaza::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_UseWaza_C_IsAvailableWaza, CallFunc_IsValid_ReturnValue_1) == 0x000051, "Member 'BP_AIAction_UseWaza_C_IsAvailableWaza::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_UseWaza_C_IsAvailableWaza, CallFunc_GetCurrentAction_ReturnValue) == 0x000058, "Member 'BP_AIAction_UseWaza_C_IsAvailableWaza::CallFunc_GetCurrentAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_UseWaza_C_IsAvailableWaza, CallFunc_IsValid_ReturnValue_2) == 0x000060, "Member 'BP_AIAction_UseWaza_C_IsAvailableWaza::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_UseWaza_C_IsAvailableWaza, CallFunc_IsValid_ReturnValue_3) == 0x000061, "Member 'BP_AIAction_UseWaza_C_IsAvailableWaza::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_UseWaza_C_IsAvailableWaza, CallFunc_Not_PreBool_ReturnValue) == 0x000062, "Member 'BP_AIAction_UseWaza_C_IsAvailableWaza::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BP_AIAction_UseWaza.BP_AIAction_UseWaza_C.GetWazaID
// 0x0003 (0x0003 - 0x0000)
struct BP_AIAction_UseWaza_C_GetWazaID final
{
public:
	EPalWazaID                                    WazaID;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalWazaID                                    CallFunc_GetWazaID_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_UseWaza_C_GetWazaID) == 0x000001, "Wrong alignment on BP_AIAction_UseWaza_C_GetWazaID");
static_assert(sizeof(BP_AIAction_UseWaza_C_GetWazaID) == 0x000003, "Wrong size on BP_AIAction_UseWaza_C_GetWazaID");
static_assert(offsetof(BP_AIAction_UseWaza_C_GetWazaID, WazaID) == 0x000000, "Member 'BP_AIAction_UseWaza_C_GetWazaID::WazaID' has a wrong offset!");
static_assert(offsetof(BP_AIAction_UseWaza_C_GetWazaID, CallFunc_GetWazaID_ReturnValue) == 0x000001, "Member 'BP_AIAction_UseWaza_C_GetWazaID::CallFunc_GetWazaID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_UseWaza_C_GetWazaID, CallFunc_IsValid_ReturnValue) == 0x000002, "Member 'BP_AIAction_UseWaza_C_GetWazaID::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_AIAction_UseWaza.BP_AIAction_UseWaza_C.GetSkillName
// 0x0038 (0x0038 - 0x0000)
struct BP_AIAction_UseWaza_C_GetSkillName final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	EPalWazaID                                    CallFunc_GetWazaID_WazaID;                         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetWazaName_outName;                      // 0x0020(0x0018)()
};
static_assert(alignof(BP_AIAction_UseWaza_C_GetSkillName) == 0x000008, "Wrong alignment on BP_AIAction_UseWaza_C_GetSkillName");
static_assert(sizeof(BP_AIAction_UseWaza_C_GetSkillName) == 0x000038, "Wrong size on BP_AIAction_UseWaza_C_GetSkillName");
static_assert(offsetof(BP_AIAction_UseWaza_C_GetSkillName, ReturnValue) == 0x000000, "Member 'BP_AIAction_UseWaza_C_GetSkillName::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_UseWaza_C_GetSkillName, CallFunc_GetWazaID_WazaID) == 0x000018, "Member 'BP_AIAction_UseWaza_C_GetSkillName::CallFunc_GetWazaID_WazaID' has a wrong offset!");
static_assert(offsetof(BP_AIAction_UseWaza_C_GetSkillName, CallFunc_GetWazaName_outName) == 0x000020, "Member 'BP_AIAction_UseWaza_C_GetSkillName::CallFunc_GetWazaName_outName' has a wrong offset!");

// Function BP_AIAction_UseWaza.BP_AIAction_UseWaza_C.ExecuteUbergraph_BP_AIAction_UseWaza
// 0x0030 (0x0030 - 0x0000)
struct BP_AIAction_UseWaza_C_ExecuteUbergraph_BP_AIAction_UseWaza final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAvailableWaza_Result;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_TargetActor;                          // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetCharacter_ReturnValue;                 // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalOtomoHolderComponentBase*           CallFunc_GetOtomoHolderByOtomoPal_ReturnValue;     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_UseWaza_C_ExecuteUbergraph_BP_AIAction_UseWaza) == 0x000008, "Wrong alignment on BP_AIAction_UseWaza_C_ExecuteUbergraph_BP_AIAction_UseWaza");
static_assert(sizeof(BP_AIAction_UseWaza_C_ExecuteUbergraph_BP_AIAction_UseWaza) == 0x000030, "Wrong size on BP_AIAction_UseWaza_C_ExecuteUbergraph_BP_AIAction_UseWaza");
static_assert(offsetof(BP_AIAction_UseWaza_C_ExecuteUbergraph_BP_AIAction_UseWaza, EntryPoint) == 0x000000, "Member 'BP_AIAction_UseWaza_C_ExecuteUbergraph_BP_AIAction_UseWaza::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_UseWaza_C_ExecuteUbergraph_BP_AIAction_UseWaza, K2Node_Event_ControlledPawn) == 0x000008, "Member 'BP_AIAction_UseWaza_C_ExecuteUbergraph_BP_AIAction_UseWaza::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_UseWaza_C_ExecuteUbergraph_BP_AIAction_UseWaza, CallFunc_IsAvailableWaza_Result) == 0x000010, "Member 'BP_AIAction_UseWaza_C_ExecuteUbergraph_BP_AIAction_UseWaza::CallFunc_IsAvailableWaza_Result' has a wrong offset!");
static_assert(offsetof(BP_AIAction_UseWaza_C_ExecuteUbergraph_BP_AIAction_UseWaza, K2Node_Event_TargetActor) == 0x000018, "Member 'BP_AIAction_UseWaza_C_ExecuteUbergraph_BP_AIAction_UseWaza::K2Node_Event_TargetActor' has a wrong offset!");
static_assert(offsetof(BP_AIAction_UseWaza_C_ExecuteUbergraph_BP_AIAction_UseWaza, CallFunc_GetCharacter_ReturnValue) == 0x000020, "Member 'BP_AIAction_UseWaza_C_ExecuteUbergraph_BP_AIAction_UseWaza::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_UseWaza_C_ExecuteUbergraph_BP_AIAction_UseWaza, CallFunc_GetOtomoHolderByOtomoPal_ReturnValue) == 0x000028, "Member 'BP_AIAction_UseWaza_C_ExecuteUbergraph_BP_AIAction_UseWaza::CallFunc_GetOtomoHolderByOtomoPal_ReturnValue' has a wrong offset!");

// Function BP_AIAction_UseWaza.BP_AIAction_UseWaza_C.ExecAction
// 0x0028 (0x0028 - 0x0000)
struct BP_AIAction_UseWaza_C_ExecAction final
{
public:
	class AActor*                                 TargetActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalWazaID                                    CallFunc_GetWazaID_WazaID;                         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character;         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionBase*                         CallFunc_PlayAction_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_UseWaza_C_ExecAction) == 0x000008, "Wrong alignment on BP_AIAction_UseWaza_C_ExecAction");
static_assert(sizeof(BP_AIAction_UseWaza_C_ExecAction) == 0x000028, "Wrong size on BP_AIAction_UseWaza_C_ExecAction");
static_assert(offsetof(BP_AIAction_UseWaza_C_ExecAction, TargetActor) == 0x000000, "Member 'BP_AIAction_UseWaza_C_ExecAction::TargetActor' has a wrong offset!");
static_assert(offsetof(BP_AIAction_UseWaza_C_ExecAction, CallFunc_GetWazaID_WazaID) == 0x000008, "Member 'BP_AIAction_UseWaza_C_ExecAction::CallFunc_GetWazaID_WazaID' has a wrong offset!");
static_assert(offsetof(BP_AIAction_UseWaza_C_ExecAction, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000009, "Member 'BP_AIAction_UseWaza_C_ExecAction::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_UseWaza_C_ExecAction, K2Node_DynamicCast_AsPal_Player_Character) == 0x000010, "Member 'BP_AIAction_UseWaza_C_ExecAction::K2Node_DynamicCast_AsPal_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_AIAction_UseWaza_C_ExecAction, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_AIAction_UseWaza_C_ExecAction::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIAction_UseWaza_C_ExecAction, CallFunc_PlayAction_ReturnValue) == 0x000020, "Member 'BP_AIAction_UseWaza_C_ExecAction::CallFunc_PlayAction_ReturnValue' has a wrong offset!");

// Function BP_AIAction_UseWaza.BP_AIAction_UseWaza_C.CanFindTarget
// 0x0002 (0x0002 - 0x0000)
struct BP_AIAction_UseWaza_C_CanFindTarget final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAvailableWaza_Result;                   // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_UseWaza_C_CanFindTarget) == 0x000001, "Wrong alignment on BP_AIAction_UseWaza_C_CanFindTarget");
static_assert(sizeof(BP_AIAction_UseWaza_C_CanFindTarget) == 0x000002, "Wrong size on BP_AIAction_UseWaza_C_CanFindTarget");
static_assert(offsetof(BP_AIAction_UseWaza_C_CanFindTarget, Result) == 0x000000, "Member 'BP_AIAction_UseWaza_C_CanFindTarget::Result' has a wrong offset!");
static_assert(offsetof(BP_AIAction_UseWaza_C_CanFindTarget, CallFunc_IsAvailableWaza_Result) == 0x000001, "Member 'BP_AIAction_UseWaza_C_CanFindTarget::CallFunc_IsAvailableWaza_Result' has a wrong offset!");

// Function BP_AIAction_UseWaza.BP_AIAction_UseWaza_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_UseWaza_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn_0;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_UseWaza_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIAction_UseWaza_C_ActionStart");
static_assert(sizeof(BP_AIAction_UseWaza_C_ActionStart) == 0x000008, "Wrong size on BP_AIAction_UseWaza_C_ActionStart");
static_assert(offsetof(BP_AIAction_UseWaza_C_ActionStart, ControlledPawn_0) == 0x000000, "Member 'BP_AIAction_UseWaza_C_ActionStart::ControlledPawn_0' has a wrong offset!");

}

