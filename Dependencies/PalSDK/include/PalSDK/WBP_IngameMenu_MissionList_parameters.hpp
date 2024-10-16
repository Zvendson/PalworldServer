#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_IngameMenu_MissionList.WBP_IngameMenu_MissionList_C.ExecuteUbergraph_WBP_IngameMenu_MissionList
// 0x0130 (0x0130 - 0x0000)
struct WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_Text;                           // 0x0010(0x0018)()
	int32                                         K2Node_CustomEvent_NowProgress;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_MaxProgress;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0038(0x0050)(HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0098(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00E8(0x0010)(ReferenceParm)
	bool                                          K2Node_CustomEvent_Enable_1;                       // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0100(0x0018)()
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Enable;                         // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x012A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList) == 0x000008, "Wrong alignment on WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList");
static_assert(sizeof(WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList) == 0x000130, "Wrong size on WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList");
static_assert(offsetof(WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList, EntryPoint) == 0x000000, "Member 'WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList, Temp_bool_Variable) == 0x000004, "Member 'WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList, Temp_byte_Variable) == 0x000005, "Member 'WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList, Temp_byte_Variable_1) == 0x000006, "Member 'WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList, Temp_bool_Variable_1) == 0x000007, "Member 'WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList, Temp_byte_Variable_2) == 0x000008, "Member 'WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList, Temp_byte_Variable_3) == 0x000009, "Member 'WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList, K2Node_CustomEvent_Text) == 0x000010, "Member 'WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList::K2Node_CustomEvent_Text' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList, K2Node_CustomEvent_NowProgress) == 0x000028, "Member 'WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList::K2Node_CustomEvent_NowProgress' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList, K2Node_CustomEvent_MaxProgress) == 0x00002C, "Member 'WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList::K2Node_CustomEvent_MaxProgress' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000030, "Member 'WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList, K2Node_MakeStruct_FormatArgumentData) == 0x000038, "Member 'WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000088, "Member 'WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x000090, "Member 'WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList, K2Node_MakeStruct_FormatArgumentData_1) == 0x000098, "Member 'WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList, K2Node_MakeArray_Array) == 0x0000E8, "Member 'WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList, K2Node_CustomEvent_Enable_1) == 0x0000F8, "Member 'WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList::K2Node_CustomEvent_Enable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList, CallFunc_Format_ReturnValue) == 0x000100, "Member 'WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000118, "Member 'WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList, CallFunc_PlayAnimation_ReturnValue) == 0x000120, "Member 'WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList, K2Node_CustomEvent_Enable) == 0x000128, "Member 'WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList::K2Node_CustomEvent_Enable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList, K2Node_Select_Default) == 0x000129, "Member 'WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList, K2Node_Select_Default_1) == 0x00012A, "Member 'WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList::K2Node_Select_Default_1' has a wrong offset!");

// Function WBP_IngameMenu_MissionList.WBP_IngameMenu_MissionList_C.SetDisplayMax
// 0x0001 (0x0001 - 0x0000)
struct WBP_IngameMenu_MissionList_C_SetDisplayMax final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_MissionList_C_SetDisplayMax) == 0x000001, "Wrong alignment on WBP_IngameMenu_MissionList_C_SetDisplayMax");
static_assert(sizeof(WBP_IngameMenu_MissionList_C_SetDisplayMax) == 0x000001, "Wrong size on WBP_IngameMenu_MissionList_C_SetDisplayMax");
static_assert(offsetof(WBP_IngameMenu_MissionList_C_SetDisplayMax, Enable) == 0x000000, "Member 'WBP_IngameMenu_MissionList_C_SetDisplayMax::Enable' has a wrong offset!");

// Function WBP_IngameMenu_MissionList.WBP_IngameMenu_MissionList_C.SetMissionInfo
// 0x0020 (0x0020 - 0x0000)
struct WBP_IngameMenu_MissionList_C_SetMissionInfo final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         NowProgress;                                       // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxProgress;                                       // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_MissionList_C_SetMissionInfo) == 0x000008, "Wrong alignment on WBP_IngameMenu_MissionList_C_SetMissionInfo");
static_assert(sizeof(WBP_IngameMenu_MissionList_C_SetMissionInfo) == 0x000020, "Wrong size on WBP_IngameMenu_MissionList_C_SetMissionInfo");
static_assert(offsetof(WBP_IngameMenu_MissionList_C_SetMissionInfo, Text) == 0x000000, "Member 'WBP_IngameMenu_MissionList_C_SetMissionInfo::Text' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionList_C_SetMissionInfo, NowProgress) == 0x000018, "Member 'WBP_IngameMenu_MissionList_C_SetMissionInfo::NowProgress' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionList_C_SetMissionInfo, MaxProgress) == 0x00001C, "Member 'WBP_IngameMenu_MissionList_C_SetMissionInfo::MaxProgress' has a wrong offset!");

// Function WBP_IngameMenu_MissionList.WBP_IngameMenu_MissionList_C.ToggleCheckMark
// 0x0001 (0x0001 - 0x0000)
struct WBP_IngameMenu_MissionList_C_ToggleCheckMark final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_MissionList_C_ToggleCheckMark) == 0x000001, "Wrong alignment on WBP_IngameMenu_MissionList_C_ToggleCheckMark");
static_assert(sizeof(WBP_IngameMenu_MissionList_C_ToggleCheckMark) == 0x000001, "Wrong size on WBP_IngameMenu_MissionList_C_ToggleCheckMark");
static_assert(offsetof(WBP_IngameMenu_MissionList_C_ToggleCheckMark, Enable) == 0x000000, "Member 'WBP_IngameMenu_MissionList_C_ToggleCheckMark::Enable' has a wrong offset!");

}

