#pragma once

#include "Basic.hpp"


namespace PalServer::Params
{

// Function WBP_InGame_Match_SignalFinish.WBP_InGame_Match_SignalFinish_C.ExecuteUbergraph_WBP_InGame_Match_SignalFinish
// 0x0010 (0x0010 - 0x0000)
struct WBP_InGame_Match_SignalFinish_C_ExecuteUbergraph_WBP_InGame_Match_SignalFinish final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InGame_Match_SignalFinish_C_ExecuteUbergraph_WBP_InGame_Match_SignalFinish) == 0x000008, "Wrong alignment on WBP_InGame_Match_SignalFinish_C_ExecuteUbergraph_WBP_InGame_Match_SignalFinish");
static_assert(sizeof(WBP_InGame_Match_SignalFinish_C_ExecuteUbergraph_WBP_InGame_Match_SignalFinish) == 0x000010, "Wrong size on WBP_InGame_Match_SignalFinish_C_ExecuteUbergraph_WBP_InGame_Match_SignalFinish");
static_assert(offsetof(WBP_InGame_Match_SignalFinish_C_ExecuteUbergraph_WBP_InGame_Match_SignalFinish, EntryPoint) == 0x000000, "Member 'WBP_InGame_Match_SignalFinish_C_ExecuteUbergraph_WBP_InGame_Match_SignalFinish::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_SignalFinish_C_ExecuteUbergraph_WBP_InGame_Match_SignalFinish, CallFunc_GetHUDService_ReturnValue) == 0x000008, "Member 'WBP_InGame_Match_SignalFinish_C_ExecuteUbergraph_WBP_InGame_Match_SignalFinish::CallFunc_GetHUDService_ReturnValue' has a wrong offset!");

}

