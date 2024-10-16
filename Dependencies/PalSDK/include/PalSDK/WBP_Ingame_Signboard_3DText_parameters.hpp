#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function WBP_Ingame_Signboard_3DText.WBP_Ingame_Signboard_3DText_C.ExecuteUbergraph_WBP_Ingame_Signboard_3DText
// 0x0030 (0x0030 - 0x0000)
struct WBP_Ingame_Signboard_3DText_C_ExecuteUbergraph_WBP_Ingame_Signboard_3DText final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_Text;                           // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(WBP_Ingame_Signboard_3DText_C_ExecuteUbergraph_WBP_Ingame_Signboard_3DText) == 0x000008, "Wrong alignment on WBP_Ingame_Signboard_3DText_C_ExecuteUbergraph_WBP_Ingame_Signboard_3DText");
static_assert(sizeof(WBP_Ingame_Signboard_3DText_C_ExecuteUbergraph_WBP_Ingame_Signboard_3DText) == 0x000030, "Wrong size on WBP_Ingame_Signboard_3DText_C_ExecuteUbergraph_WBP_Ingame_Signboard_3DText");
static_assert(offsetof(WBP_Ingame_Signboard_3DText_C_ExecuteUbergraph_WBP_Ingame_Signboard_3DText, EntryPoint) == 0x000000, "Member 'WBP_Ingame_Signboard_3DText_C_ExecuteUbergraph_WBP_Ingame_Signboard_3DText::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_3DText_C_ExecuteUbergraph_WBP_Ingame_Signboard_3DText, K2Node_CustomEvent_Text) == 0x000008, "Member 'WBP_Ingame_Signboard_3DText_C_ExecuteUbergraph_WBP_Ingame_Signboard_3DText::K2Node_CustomEvent_Text' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_3DText_C_ExecuteUbergraph_WBP_Ingame_Signboard_3DText, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'WBP_Ingame_Signboard_3DText_C_ExecuteUbergraph_WBP_Ingame_Signboard_3DText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_Signboard_3DText.WBP_Ingame_Signboard_3DText_C.UpdateText
// 0x0010 (0x0010 - 0x0000)
struct WBP_Ingame_Signboard_3DText_C_UpdateText final
{
public:
	class FString                                 Text;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_Signboard_3DText_C_UpdateText) == 0x000008, "Wrong alignment on WBP_Ingame_Signboard_3DText_C_UpdateText");
static_assert(sizeof(WBP_Ingame_Signboard_3DText_C_UpdateText) == 0x000010, "Wrong size on WBP_Ingame_Signboard_3DText_C_UpdateText");
static_assert(offsetof(WBP_Ingame_Signboard_3DText_C_UpdateText, Text) == 0x000000, "Member 'WBP_Ingame_Signboard_3DText_C_UpdateText::Text' has a wrong offset!");

}

