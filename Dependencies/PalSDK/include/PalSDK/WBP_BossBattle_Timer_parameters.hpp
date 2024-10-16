#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_BossBattle_Timer.WBP_BossBattle_Timer_C.ExecuteUbergraph_WBP_BossBattle_Timer
// 0x0128 (0x0128 - 0x0000)
struct WBP_BossBattle_Timer_C_ExecuteUbergraph_WBP_BossBattle_Timer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RemainSecond;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_Text;                           // 0x0008(0x0018)()
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0028(0x0018)()
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0048(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0098(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00B0(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0100(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0110(0x0018)()
};
static_assert(alignof(WBP_BossBattle_Timer_C_ExecuteUbergraph_WBP_BossBattle_Timer) == 0x000008, "Wrong alignment on WBP_BossBattle_Timer_C_ExecuteUbergraph_WBP_BossBattle_Timer");
static_assert(sizeof(WBP_BossBattle_Timer_C_ExecuteUbergraph_WBP_BossBattle_Timer) == 0x000128, "Wrong size on WBP_BossBattle_Timer_C_ExecuteUbergraph_WBP_BossBattle_Timer");
static_assert(offsetof(WBP_BossBattle_Timer_C_ExecuteUbergraph_WBP_BossBattle_Timer, EntryPoint) == 0x000000, "Member 'WBP_BossBattle_Timer_C_ExecuteUbergraph_WBP_BossBattle_Timer::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_Timer_C_ExecuteUbergraph_WBP_BossBattle_Timer, K2Node_CustomEvent_RemainSecond) == 0x000004, "Member 'WBP_BossBattle_Timer_C_ExecuteUbergraph_WBP_BossBattle_Timer::K2Node_CustomEvent_RemainSecond' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_Timer_C_ExecuteUbergraph_WBP_BossBattle_Timer, K2Node_CustomEvent_Text) == 0x000008, "Member 'WBP_BossBattle_Timer_C_ExecuteUbergraph_WBP_BossBattle_Timer::K2Node_CustomEvent_Text' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_Timer_C_ExecuteUbergraph_WBP_BossBattle_Timer, CallFunc_Divide_IntInt_ReturnValue) == 0x000020, "Member 'WBP_BossBattle_Timer_C_ExecuteUbergraph_WBP_BossBattle_Timer::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_Timer_C_ExecuteUbergraph_WBP_BossBattle_Timer, CallFunc_Conv_IntToText_ReturnValue) == 0x000028, "Member 'WBP_BossBattle_Timer_C_ExecuteUbergraph_WBP_BossBattle_Timer::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_Timer_C_ExecuteUbergraph_WBP_BossBattle_Timer, CallFunc_Percent_IntInt_ReturnValue) == 0x000040, "Member 'WBP_BossBattle_Timer_C_ExecuteUbergraph_WBP_BossBattle_Timer::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_Timer_C_ExecuteUbergraph_WBP_BossBattle_Timer, K2Node_MakeStruct_FormatArgumentData) == 0x000048, "Member 'WBP_BossBattle_Timer_C_ExecuteUbergraph_WBP_BossBattle_Timer::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_Timer_C_ExecuteUbergraph_WBP_BossBattle_Timer, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000098, "Member 'WBP_BossBattle_Timer_C_ExecuteUbergraph_WBP_BossBattle_Timer::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_Timer_C_ExecuteUbergraph_WBP_BossBattle_Timer, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000B0, "Member 'WBP_BossBattle_Timer_C_ExecuteUbergraph_WBP_BossBattle_Timer::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_Timer_C_ExecuteUbergraph_WBP_BossBattle_Timer, K2Node_MakeArray_Array) == 0x000100, "Member 'WBP_BossBattle_Timer_C_ExecuteUbergraph_WBP_BossBattle_Timer::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_Timer_C_ExecuteUbergraph_WBP_BossBattle_Timer, CallFunc_Format_ReturnValue) == 0x000110, "Member 'WBP_BossBattle_Timer_C_ExecuteUbergraph_WBP_BossBattle_Timer::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WBP_BossBattle_Timer.WBP_BossBattle_Timer_C.SetRemainSecond
// 0x0004 (0x0004 - 0x0000)
struct WBP_BossBattle_Timer_C_SetRemainSecond final
{
public:
	int32                                         RemainSecond;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BossBattle_Timer_C_SetRemainSecond) == 0x000004, "Wrong alignment on WBP_BossBattle_Timer_C_SetRemainSecond");
static_assert(sizeof(WBP_BossBattle_Timer_C_SetRemainSecond) == 0x000004, "Wrong size on WBP_BossBattle_Timer_C_SetRemainSecond");
static_assert(offsetof(WBP_BossBattle_Timer_C_SetRemainSecond, RemainSecond) == 0x000000, "Member 'WBP_BossBattle_Timer_C_SetRemainSecond::RemainSecond' has a wrong offset!");

// Function WBP_BossBattle_Timer.WBP_BossBattle_Timer_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct WBP_BossBattle_Timer_C_SetText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_BossBattle_Timer_C_SetText) == 0x000008, "Wrong alignment on WBP_BossBattle_Timer_C_SetText");
static_assert(sizeof(WBP_BossBattle_Timer_C_SetText) == 0x000018, "Wrong size on WBP_BossBattle_Timer_C_SetText");
static_assert(offsetof(WBP_BossBattle_Timer_C_SetText, Text) == 0x000000, "Member 'WBP_BossBattle_Timer_C_SetText::Text' has a wrong offset!");

}

