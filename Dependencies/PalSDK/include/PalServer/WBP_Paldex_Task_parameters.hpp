#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function WBP_Paldex_Task.WBP_Paldex_Task_C.AnmEvent_Activate
// 0x0001 (0x0001 - 0x0000)
struct WBP_Paldex_Task_C_AnmEvent_Activate final
{
public:
	bool                                          AlreadyCompletedBonus;                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Paldex_Task_C_AnmEvent_Activate) == 0x000001, "Wrong alignment on WBP_Paldex_Task_C_AnmEvent_Activate");
static_assert(sizeof(WBP_Paldex_Task_C_AnmEvent_Activate) == 0x000001, "Wrong size on WBP_Paldex_Task_C_AnmEvent_Activate");
static_assert(offsetof(WBP_Paldex_Task_C_AnmEvent_Activate, AlreadyCompletedBonus) == 0x000000, "Member 'WBP_Paldex_Task_C_AnmEvent_Activate::AlreadyCompletedBonus' has a wrong offset!");

// Function WBP_Paldex_Task.WBP_Paldex_Task_C.ExecuteUbergraph_WBP_Paldex_Task
// 0x0030 (0x0030 - 0x0000)
struct WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_AlreadyCompletedBonus;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task) == 0x000008, "Wrong alignment on WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task");
static_assert(sizeof(WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task) == 0x000030, "Wrong size on WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task");
static_assert(offsetof(WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task, EntryPoint) == 0x000000, "Member 'WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task, CallFunc_GetGameSetting_ReturnValue) == 0x000008, "Member 'WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000010, "Member 'WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task, CallFunc_PlayAnimation_ReturnValue_1) == 0x000020, "Member 'WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task, K2Node_CustomEvent_AlreadyCompletedBonus) == 0x000028, "Member 'WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task::K2Node_CustomEvent_AlreadyCompletedBonus' has a wrong offset!");

// Function WBP_Paldex_Task.WBP_Paldex_Task_C.GetBonusExpMsg
// 0x0058 (0x0058 - 0x0000)
struct WBP_Paldex_Task_C_GetBonusExpMsg final
{
public:
	int32                                         CaptureCount;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Text;                                              // 0x0008(0x0018)(Parm, OutParm)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0028(0x0018)()
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text_1;        // 0x0040(0x0018)()
};
static_assert(alignof(WBP_Paldex_Task_C_GetBonusExpMsg) == 0x000008, "Wrong alignment on WBP_Paldex_Task_C_GetBonusExpMsg");
static_assert(sizeof(WBP_Paldex_Task_C_GetBonusExpMsg) == 0x000058, "Wrong size on WBP_Paldex_Task_C_GetBonusExpMsg");
static_assert(offsetof(WBP_Paldex_Task_C_GetBonusExpMsg, CaptureCount) == 0x000000, "Member 'WBP_Paldex_Task_C_GetBonusExpMsg::CaptureCount' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_GetBonusExpMsg, Text) == 0x000008, "Member 'WBP_Paldex_Task_C_GetBonusExpMsg::Text' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_GetBonusExpMsg, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000020, "Member 'WBP_Paldex_Task_C_GetBonusExpMsg::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_GetBonusExpMsg, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000028, "Member 'WBP_Paldex_Task_C_GetBonusExpMsg::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_GetBonusExpMsg, CallFunc_GetLocalizedTextFromHandle_Text_1) == 0x000040, "Member 'WBP_Paldex_Task_C_GetBonusExpMsg::CallFunc_GetLocalizedTextFromHandle_Text_1' has a wrong offset!");

// Function WBP_Paldex_Task.WBP_Paldex_Task_C.PreSetup
// 0x0110 (0x0110 - 0x0000)
struct WBP_Paldex_Task_C_PreSetup final
{
public:
	class FName                                   CharacterID;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BonusCount;                                        // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DisplayExp;                                        // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0020(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0070(0x0010)(ReferenceParm)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetBonusExpMsg_Text;                      // 0x00A8(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00C0(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast_1;     // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FC[0x4];                                       // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast_1;     // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast_1;      // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Paldex_Task_C_PreSetup) == 0x000008, "Wrong alignment on WBP_Paldex_Task_C_PreSetup");
static_assert(sizeof(WBP_Paldex_Task_C_PreSetup) == 0x000110, "Wrong size on WBP_Paldex_Task_C_PreSetup");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CharacterID) == 0x000000, "Member 'WBP_Paldex_Task_C_PreSetup::CharacterID' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, BonusCount) == 0x000008, "Member 'WBP_Paldex_Task_C_PreSetup::BonusCount' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, DisplayExp) == 0x00000C, "Member 'WBP_Paldex_Task_C_PreSetup::DisplayExp' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000010, "Member 'WBP_Paldex_Task_C_PreSetup::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CallFunc_GetGameSetting_ReturnValue) == 0x000018, "Member 'WBP_Paldex_Task_C_PreSetup::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, K2Node_MakeStruct_FormatArgumentData) == 0x000020, "Member 'WBP_Paldex_Task_C_PreSetup::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, K2Node_MakeArray_Array) == 0x000070, "Member 'WBP_Paldex_Task_C_PreSetup::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000080, "Member 'WBP_Paldex_Task_C_PreSetup::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CallFunc_Subtract_IntInt_ReturnValue) == 0x000084, "Member 'WBP_Paldex_Task_C_PreSetup::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000088, "Member 'WBP_Paldex_Task_C_PreSetup::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CallFunc_Max_ReturnValue) == 0x00008C, "Member 'WBP_Paldex_Task_C_PreSetup::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000090, "Member 'WBP_Paldex_Task_C_PreSetup::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x000098, "Member 'WBP_Paldex_Task_C_PreSetup::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x0000A0, "Member 'WBP_Paldex_Task_C_PreSetup::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CallFunc_GetBonusExpMsg_Text) == 0x0000A8, "Member 'WBP_Paldex_Task_C_PreSetup::CallFunc_GetBonusExpMsg_Text' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CallFunc_Format_ReturnValue) == 0x0000C0, "Member 'WBP_Paldex_Task_C_PreSetup::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CallFunc_PlayAnimation_ReturnValue) == 0x0000D8, "Member 'WBP_Paldex_Task_C_PreSetup::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x0000E0, "Member 'WBP_Paldex_Task_C_PreSetup::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CallFunc_Divide_DoubleDouble_B_ImplicitCast_1) == 0x0000E8, "Member 'WBP_Paldex_Task_C_PreSetup::CallFunc_Divide_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x0000F0, "Member 'WBP_Paldex_Task_C_PreSetup::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x0000F8, "Member 'WBP_Paldex_Task_C_PreSetup::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CallFunc_Divide_DoubleDouble_A_ImplicitCast_1) == 0x000100, "Member 'WBP_Paldex_Task_C_PreSetup::CallFunc_Divide_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_PreSetup, CallFunc_SetPercent_InPercent_ImplicitCast_1) == 0x000108, "Member 'WBP_Paldex_Task_C_PreSetup::CallFunc_SetPercent_InPercent_ImplicitCast_1' has a wrong offset!");

// Function WBP_Paldex_Task.WBP_Paldex_Task_C.SetupBonusCountText
// 0x00E8 (0x00E8 - 0x0000)
struct WBP_Paldex_Task_C_SetupBonusCountText final
{
public:
	int32                                         BonusCount;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0018(0x0050)(HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0070(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00C0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00D0(0x0018)()
};
static_assert(alignof(WBP_Paldex_Task_C_SetupBonusCountText) == 0x000008, "Wrong alignment on WBP_Paldex_Task_C_SetupBonusCountText");
static_assert(sizeof(WBP_Paldex_Task_C_SetupBonusCountText) == 0x0000E8, "Wrong size on WBP_Paldex_Task_C_SetupBonusCountText");
static_assert(offsetof(WBP_Paldex_Task_C_SetupBonusCountText, BonusCount) == 0x000000, "Member 'WBP_Paldex_Task_C_SetupBonusCountText::BonusCount' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupBonusCountText, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000008, "Member 'WBP_Paldex_Task_C_SetupBonusCountText::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupBonusCountText, CallFunc_GetGameSetting_ReturnValue) == 0x000010, "Member 'WBP_Paldex_Task_C_SetupBonusCountText::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupBonusCountText, K2Node_MakeStruct_FormatArgumentData) == 0x000018, "Member 'WBP_Paldex_Task_C_SetupBonusCountText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupBonusCountText, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x000068, "Member 'WBP_Paldex_Task_C_SetupBonusCountText::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupBonusCountText, K2Node_MakeStruct_FormatArgumentData_1) == 0x000070, "Member 'WBP_Paldex_Task_C_SetupBonusCountText::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupBonusCountText, K2Node_MakeArray_Array) == 0x0000C0, "Member 'WBP_Paldex_Task_C_SetupBonusCountText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupBonusCountText, CallFunc_Format_ReturnValue) == 0x0000D0, "Member 'WBP_Paldex_Task_C_SetupBonusCountText::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WBP_Paldex_Task.WBP_Paldex_Task_C.SetupForMenu
// 0x0050 (0x0050 - 0x0000)
struct WBP_Paldex_Task_C_SetupForMenu final
{
public:
	int32                                         BonusCount;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue_1;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Paldex_Task_C_SetupForMenu) == 0x000008, "Wrong alignment on WBP_Paldex_Task_C_SetupForMenu");
static_assert(sizeof(WBP_Paldex_Task_C_SetupForMenu) == 0x000050, "Wrong size on WBP_Paldex_Task_C_SetupForMenu");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, BonusCount) == 0x000000, "Member 'WBP_Paldex_Task_C_SetupForMenu::BonusCount' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000004, "Member 'WBP_Paldex_Task_C_SetupForMenu::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, CallFunc_GetGameSetting_ReturnValue) == 0x000008, "Member 'WBP_Paldex_Task_C_SetupForMenu::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, CallFunc_GetGameSetting_ReturnValue_1) == 0x000010, "Member 'WBP_Paldex_Task_C_SetupForMenu::CallFunc_GetGameSetting_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000018, "Member 'WBP_Paldex_Task_C_SetupForMenu::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x00001C, "Member 'WBP_Paldex_Task_C_SetupForMenu::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000020, "Member 'WBP_Paldex_Task_C_SetupForMenu::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'WBP_Paldex_Task_C_SetupForMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, CallFunc_PlayAnimation_ReturnValue_1) == 0x000030, "Member 'WBP_Paldex_Task_C_SetupForMenu::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000038, "Member 'WBP_Paldex_Task_C_SetupForMenu::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000040, "Member 'WBP_Paldex_Task_C_SetupForMenu::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Paldex_Task_C_SetupForMenu, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x000048, "Member 'WBP_Paldex_Task_C_SetupForMenu::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");

}

