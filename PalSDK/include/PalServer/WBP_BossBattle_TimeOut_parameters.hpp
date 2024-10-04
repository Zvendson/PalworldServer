#pragma once

#include "Basic.hpp"


namespace PalServer::Params
{

// Function WBP_BossBattle_TimeOut.WBP_BossBattle_TimeOut_C.ChangeText
// 0x0001 (0x0001 - 0x0000)
struct WBP_BossBattle_TimeOut_C_ChangeText final
{
public:
	bool                                          IsTimeOut;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BossBattle_TimeOut_C_ChangeText) == 0x000001, "Wrong alignment on WBP_BossBattle_TimeOut_C_ChangeText");
static_assert(sizeof(WBP_BossBattle_TimeOut_C_ChangeText) == 0x000001, "Wrong size on WBP_BossBattle_TimeOut_C_ChangeText");
static_assert(offsetof(WBP_BossBattle_TimeOut_C_ChangeText, IsTimeOut) == 0x000000, "Member 'WBP_BossBattle_TimeOut_C_ChangeText::IsTimeOut' has a wrong offset!");

// Function WBP_BossBattle_TimeOut.WBP_BossBattle_TimeOut_C.ExecuteUbergraph_WBP_BossBattle_TimeOut
// 0x0058 (0x0058 - 0x0000)
struct WBP_BossBattle_TimeOut_C_ExecuteUbergraph_WBP_BossBattle_TimeOut final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0008(0x0018)()
	bool                                          K2Node_CustomEvent_IsTimeOut;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_1;            // 0x0028(0x0018)()
	class FText                                   CallFunc_SelectText_ReturnValue;                   // 0x0040(0x0018)()
};
static_assert(alignof(WBP_BossBattle_TimeOut_C_ExecuteUbergraph_WBP_BossBattle_TimeOut) == 0x000008, "Wrong alignment on WBP_BossBattle_TimeOut_C_ExecuteUbergraph_WBP_BossBattle_TimeOut");
static_assert(sizeof(WBP_BossBattle_TimeOut_C_ExecuteUbergraph_WBP_BossBattle_TimeOut) == 0x000058, "Wrong size on WBP_BossBattle_TimeOut_C_ExecuteUbergraph_WBP_BossBattle_TimeOut");
static_assert(offsetof(WBP_BossBattle_TimeOut_C_ExecuteUbergraph_WBP_BossBattle_TimeOut, EntryPoint) == 0x000000, "Member 'WBP_BossBattle_TimeOut_C_ExecuteUbergraph_WBP_BossBattle_TimeOut::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_TimeOut_C_ExecuteUbergraph_WBP_BossBattle_TimeOut, CallFunc_MakeLiteralText_ReturnValue) == 0x000008, "Member 'WBP_BossBattle_TimeOut_C_ExecuteUbergraph_WBP_BossBattle_TimeOut::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_TimeOut_C_ExecuteUbergraph_WBP_BossBattle_TimeOut, K2Node_CustomEvent_IsTimeOut) == 0x000020, "Member 'WBP_BossBattle_TimeOut_C_ExecuteUbergraph_WBP_BossBattle_TimeOut::K2Node_CustomEvent_IsTimeOut' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_TimeOut_C_ExecuteUbergraph_WBP_BossBattle_TimeOut, CallFunc_MakeLiteralText_ReturnValue_1) == 0x000028, "Member 'WBP_BossBattle_TimeOut_C_ExecuteUbergraph_WBP_BossBattle_TimeOut::CallFunc_MakeLiteralText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_TimeOut_C_ExecuteUbergraph_WBP_BossBattle_TimeOut, CallFunc_SelectText_ReturnValue) == 0x000040, "Member 'WBP_BossBattle_TimeOut_C_ExecuteUbergraph_WBP_BossBattle_TimeOut::CallFunc_SelectText_ReturnValue' has a wrong offset!");

}

