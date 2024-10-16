#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function WBP_Warning.WBP_Warning_C.AnmEvent_Open
// 0x0008 (0x0008 - 0x0000)
struct WBP_Warning_C_AnmEvent_Open final
{
public:
	double                                        DisplayTime;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Warning_C_AnmEvent_Open) == 0x000008, "Wrong alignment on WBP_Warning_C_AnmEvent_Open");
static_assert(sizeof(WBP_Warning_C_AnmEvent_Open) == 0x000008, "Wrong size on WBP_Warning_C_AnmEvent_Open");
static_assert(offsetof(WBP_Warning_C_AnmEvent_Open, DisplayTime) == 0x000000, "Member 'WBP_Warning_C_AnmEvent_Open::DisplayTime' has a wrong offset!");

// Function WBP_Warning.WBP_Warning_C.ExecuteUbergraph_WBP_Warning
// 0x0028 (0x0028 - 0x0000)
struct WBP_Warning_C_ExecuteUbergraph_WBP_Warning final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_CustomEvent_DisplayTime;                    // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Warning_C_ExecuteUbergraph_WBP_Warning) == 0x000008, "Wrong alignment on WBP_Warning_C_ExecuteUbergraph_WBP_Warning");
static_assert(sizeof(WBP_Warning_C_ExecuteUbergraph_WBP_Warning) == 0x000028, "Wrong size on WBP_Warning_C_ExecuteUbergraph_WBP_Warning");
static_assert(offsetof(WBP_Warning_C_ExecuteUbergraph_WBP_Warning, EntryPoint) == 0x000000, "Member 'WBP_Warning_C_ExecuteUbergraph_WBP_Warning::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Warning_C_ExecuteUbergraph_WBP_Warning, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_Warning_C_ExecuteUbergraph_WBP_Warning::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Warning_C_ExecuteUbergraph_WBP_Warning, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'WBP_Warning_C_ExecuteUbergraph_WBP_Warning::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Warning_C_ExecuteUbergraph_WBP_Warning, K2Node_CustomEvent_DisplayTime) == 0x000018, "Member 'WBP_Warning_C_ExecuteUbergraph_WBP_Warning::K2Node_CustomEvent_DisplayTime' has a wrong offset!");
static_assert(offsetof(WBP_Warning_C_ExecuteUbergraph_WBP_Warning, CallFunc_Delay_Duration_ImplicitCast) == 0x000020, "Member 'WBP_Warning_C_ExecuteUbergraph_WBP_Warning::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

// Function WBP_Warning.WBP_Warning_C.SetInfoText
// 0x0018 (0x0018 - 0x0000)
struct WBP_Warning_C_SetInfoText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_Warning_C_SetInfoText) == 0x000008, "Wrong alignment on WBP_Warning_C_SetInfoText");
static_assert(sizeof(WBP_Warning_C_SetInfoText) == 0x000018, "Wrong size on WBP_Warning_C_SetInfoText");
static_assert(offsetof(WBP_Warning_C_SetInfoText, Text) == 0x000000, "Member 'WBP_Warning_C_SetInfoText::Text' has a wrong offset!");

// Function WBP_Warning.WBP_Warning_C.SetTitleText
// 0x0018 (0x0018 - 0x0000)
struct WBP_Warning_C_SetTitleText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_Warning_C_SetTitleText) == 0x000008, "Wrong alignment on WBP_Warning_C_SetTitleText");
static_assert(sizeof(WBP_Warning_C_SetTitleText) == 0x000018, "Wrong size on WBP_Warning_C_SetTitleText");
static_assert(offsetof(WBP_Warning_C_SetTitleText, Text) == 0x000000, "Member 'WBP_Warning_C_SetTitleText::Text' has a wrong offset!");

}

