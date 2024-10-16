#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_Notice_Deathlog.WBP_Notice_Deathlog_C.ExecuteUbergraph_WBP_Notice_Deathlog
// 0x0098 (0x0098 - 0x0000)
struct WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;               // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_CustomEvent_ShortDisplayTime;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_CustomEvent_LongDisplayTime;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsShort;                        // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0048(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52[0x2];                                       // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_1;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A[0x6];                                       // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       K2Node_Select_Default;                             // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1;  // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog) == 0x000008, "Wrong alignment on WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog");
static_assert(sizeof(WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog) == 0x000098, "Wrong size on WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog");
static_assert(offsetof(WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog, EntryPoint) == 0x000000, "Member 'WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog, Temp_bool_Variable) == 0x000004, "Member 'WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog, Temp_bool_Has_Been_Initd_Variable) == 0x000005, "Member 'WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog, Temp_bool_IsClosed_Variable) == 0x000006, "Member 'WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog, Temp_bool_Has_Been_Initd_Variable_1) == 0x000007, "Member 'WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog, K2Node_CustomEvent_ShortDisplayTime) == 0x000008, "Member 'WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog::K2Node_CustomEvent_ShortDisplayTime' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog, K2Node_CustomEvent_LongDisplayTime) == 0x000010, "Member 'WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog::K2Node_CustomEvent_LongDisplayTime' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog, K2Node_CustomEvent_IsShort) == 0x000028, "Member 'WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog::K2Node_CustomEvent_IsShort' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000030, "Member 'WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog, K2Node_CreateDelegate_OutputDelegate_1) == 0x000038, "Member 'WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000048, "Member 'WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog, CallFunc_BooleanAND_ReturnValue) == 0x000050, "Member 'WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog, CallFunc_BooleanOR_ReturnValue) == 0x000051, "Member 'WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog, K2Node_CreateDelegate_OutputDelegate_2) == 0x000054, "Member 'WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000068, "Member 'WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000070, "Member 'WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog, Temp_bool_IsClosed_Variable_1) == 0x000078, "Member 'WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog, CallFunc_IsValid_ReturnValue) == 0x000079, "Member 'WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog, K2Node_Select_Default) == 0x000080, "Member 'WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog, CallFunc_PlayAnimation_ReturnValue) == 0x000088, "Member 'WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000090, "Member 'WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1) == 0x000094, "Member 'WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1' has a wrong offset!");

// Function WBP_Notice_Deathlog.WBP_Notice_Deathlog_C.GetDeathResonText
// 0x0028 (0x0028 - 0x0000)
struct WBP_Notice_Deathlog_C_GetDeathResonText final
{
public:
	EPalKillLogDisplayType                        KillLogType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ReasonText;                                        // 0x0008(0x0018)(Parm, OutParm)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Notice_Deathlog_C_GetDeathResonText) == 0x000008, "Wrong alignment on WBP_Notice_Deathlog_C_GetDeathResonText");
static_assert(sizeof(WBP_Notice_Deathlog_C_GetDeathResonText) == 0x000028, "Wrong size on WBP_Notice_Deathlog_C_GetDeathResonText");
static_assert(offsetof(WBP_Notice_Deathlog_C_GetDeathResonText, KillLogType) == 0x000000, "Member 'WBP_Notice_Deathlog_C_GetDeathResonText::KillLogType' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_GetDeathResonText, ReasonText) == 0x000008, "Member 'WBP_Notice_Deathlog_C_GetDeathResonText::ReasonText' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_GetDeathResonText, K2Node_SwitchEnum_CmpSuccess) == 0x000020, "Member 'WBP_Notice_Deathlog_C_GetDeathResonText::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WBP_Notice_Deathlog.WBP_Notice_Deathlog_C.MakeDeathLogText
// 0x01B8 (0x01B8 - 0x0000)
struct WBP_Notice_Deathlog_C_MakeDeathLogText final
{
public:
	struct FPalKillLogDisplayData                 DisplayData;                                       // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   AttackerName;                                      // 0x0038(0x0018)(Parm, OutParm)
	class FText                                   DefenderName;                                      // 0x0050(0x0018)(Parm, OutParm)
	class FText                                   Reason;                                            // 0x0068(0x0018)(Parm, OutParm)
	class FText                                   CallFunc_GetDeathResonText_ReasonText;             // 0x0080(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0098(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00B0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00C8(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0118(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0168(0x0010)(ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0178(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0188(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x01A0(0x0018)()
};
static_assert(alignof(WBP_Notice_Deathlog_C_MakeDeathLogText) == 0x000008, "Wrong alignment on WBP_Notice_Deathlog_C_MakeDeathLogText");
static_assert(sizeof(WBP_Notice_Deathlog_C_MakeDeathLogText) == 0x0001B8, "Wrong size on WBP_Notice_Deathlog_C_MakeDeathLogText");
static_assert(offsetof(WBP_Notice_Deathlog_C_MakeDeathLogText, DisplayData) == 0x000000, "Member 'WBP_Notice_Deathlog_C_MakeDeathLogText::DisplayData' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_MakeDeathLogText, AttackerName) == 0x000038, "Member 'WBP_Notice_Deathlog_C_MakeDeathLogText::AttackerName' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_MakeDeathLogText, DefenderName) == 0x000050, "Member 'WBP_Notice_Deathlog_C_MakeDeathLogText::DefenderName' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_MakeDeathLogText, Reason) == 0x000068, "Member 'WBP_Notice_Deathlog_C_MakeDeathLogText::Reason' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_MakeDeathLogText, CallFunc_GetDeathResonText_ReasonText) == 0x000080, "Member 'WBP_Notice_Deathlog_C_MakeDeathLogText::CallFunc_GetDeathResonText_ReasonText' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_MakeDeathLogText, CallFunc_Conv_StringToText_ReturnValue) == 0x000098, "Member 'WBP_Notice_Deathlog_C_MakeDeathLogText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_MakeDeathLogText, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000B0, "Member 'WBP_Notice_Deathlog_C_MakeDeathLogText::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_MakeDeathLogText, K2Node_MakeStruct_FormatArgumentData) == 0x0000C8, "Member 'WBP_Notice_Deathlog_C_MakeDeathLogText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_MakeDeathLogText, K2Node_MakeStruct_FormatArgumentData_1) == 0x000118, "Member 'WBP_Notice_Deathlog_C_MakeDeathLogText::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_MakeDeathLogText, K2Node_MakeArray_Array) == 0x000168, "Member 'WBP_Notice_Deathlog_C_MakeDeathLogText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_MakeDeathLogText, K2Node_MakeArray_Array_1) == 0x000178, "Member 'WBP_Notice_Deathlog_C_MakeDeathLogText::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_MakeDeathLogText, CallFunc_Format_ReturnValue) == 0x000188, "Member 'WBP_Notice_Deathlog_C_MakeDeathLogText::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_MakeDeathLogText, CallFunc_Format_ReturnValue_1) == 0x0001A0, "Member 'WBP_Notice_Deathlog_C_MakeDeathLogText::CallFunc_Format_ReturnValue_1' has a wrong offset!");

// Function WBP_Notice_Deathlog.WBP_Notice_Deathlog_C.MakeKillLogText
// 0x01B8 (0x01B8 - 0x0000)
struct WBP_Notice_Deathlog_C_MakeKillLogText final
{
public:
	struct FPalKillLogDisplayData                 DisplayData;                                       // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   AttackerName;                                      // 0x0038(0x0018)(Parm, OutParm)
	class FText                                   DefenderName;                                      // 0x0050(0x0018)(Parm, OutParm)
	class FText                                   Reason;                                            // 0x0068(0x0018)(Parm, OutParm)
	class FText                                   CallFunc_GetDeathResonText_ReasonText;             // 0x0080(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0098(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00B0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00C8(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0118(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0168(0x0010)(ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0178(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0188(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x01A0(0x0018)()
};
static_assert(alignof(WBP_Notice_Deathlog_C_MakeKillLogText) == 0x000008, "Wrong alignment on WBP_Notice_Deathlog_C_MakeKillLogText");
static_assert(sizeof(WBP_Notice_Deathlog_C_MakeKillLogText) == 0x0001B8, "Wrong size on WBP_Notice_Deathlog_C_MakeKillLogText");
static_assert(offsetof(WBP_Notice_Deathlog_C_MakeKillLogText, DisplayData) == 0x000000, "Member 'WBP_Notice_Deathlog_C_MakeKillLogText::DisplayData' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_MakeKillLogText, AttackerName) == 0x000038, "Member 'WBP_Notice_Deathlog_C_MakeKillLogText::AttackerName' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_MakeKillLogText, DefenderName) == 0x000050, "Member 'WBP_Notice_Deathlog_C_MakeKillLogText::DefenderName' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_MakeKillLogText, Reason) == 0x000068, "Member 'WBP_Notice_Deathlog_C_MakeKillLogText::Reason' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_MakeKillLogText, CallFunc_GetDeathResonText_ReasonText) == 0x000080, "Member 'WBP_Notice_Deathlog_C_MakeKillLogText::CallFunc_GetDeathResonText_ReasonText' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_MakeKillLogText, CallFunc_Conv_StringToText_ReturnValue) == 0x000098, "Member 'WBP_Notice_Deathlog_C_MakeKillLogText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_MakeKillLogText, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000B0, "Member 'WBP_Notice_Deathlog_C_MakeKillLogText::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_MakeKillLogText, K2Node_MakeStruct_FormatArgumentData) == 0x0000C8, "Member 'WBP_Notice_Deathlog_C_MakeKillLogText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_MakeKillLogText, K2Node_MakeStruct_FormatArgumentData_1) == 0x000118, "Member 'WBP_Notice_Deathlog_C_MakeKillLogText::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_MakeKillLogText, K2Node_MakeArray_Array) == 0x000168, "Member 'WBP_Notice_Deathlog_C_MakeKillLogText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_MakeKillLogText, K2Node_MakeArray_Array_1) == 0x000178, "Member 'WBP_Notice_Deathlog_C_MakeKillLogText::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_MakeKillLogText, CallFunc_Format_ReturnValue) == 0x000188, "Member 'WBP_Notice_Deathlog_C_MakeKillLogText::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_MakeKillLogText, CallFunc_Format_ReturnValue_1) == 0x0001A0, "Member 'WBP_Notice_Deathlog_C_MakeKillLogText::CallFunc_Format_ReturnValue_1' has a wrong offset!");

// Function WBP_Notice_Deathlog.WBP_Notice_Deathlog_C.OnDeathLogEnd__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Notice_Deathlog_C_OnDeathLogEnd__DelegateSignature final
{
public:
	class UWBP_Notice_Deathlog_C*                 EndedLog;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Notice_Deathlog_C_OnDeathLogEnd__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Notice_Deathlog_C_OnDeathLogEnd__DelegateSignature");
static_assert(sizeof(WBP_Notice_Deathlog_C_OnDeathLogEnd__DelegateSignature) == 0x000008, "Wrong size on WBP_Notice_Deathlog_C_OnDeathLogEnd__DelegateSignature");
static_assert(offsetof(WBP_Notice_Deathlog_C_OnDeathLogEnd__DelegateSignature, EndedLog) == 0x000000, "Member 'WBP_Notice_Deathlog_C_OnDeathLogEnd__DelegateSignature::EndedLog' has a wrong offset!");

// Function WBP_Notice_Deathlog.WBP_Notice_Deathlog_C.SetDisplayTime
// 0x0010 (0x0010 - 0x0000)
struct WBP_Notice_Deathlog_C_SetDisplayTime final
{
public:
	double                                        ShortDisplayTime;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LongDisplayTime;                                   // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Notice_Deathlog_C_SetDisplayTime) == 0x000008, "Wrong alignment on WBP_Notice_Deathlog_C_SetDisplayTime");
static_assert(sizeof(WBP_Notice_Deathlog_C_SetDisplayTime) == 0x000010, "Wrong size on WBP_Notice_Deathlog_C_SetDisplayTime");
static_assert(offsetof(WBP_Notice_Deathlog_C_SetDisplayTime, ShortDisplayTime) == 0x000000, "Member 'WBP_Notice_Deathlog_C_SetDisplayTime::ShortDisplayTime' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_SetDisplayTime, LongDisplayTime) == 0x000008, "Member 'WBP_Notice_Deathlog_C_SetDisplayTime::LongDisplayTime' has a wrong offset!");

// Function WBP_Notice_Deathlog.WBP_Notice_Deathlog_C.SetDisplayTimeType
// 0x0001 (0x0001 - 0x0000)
struct WBP_Notice_Deathlog_C_SetDisplayTimeType final
{
public:
	bool                                          IsShort;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Notice_Deathlog_C_SetDisplayTimeType) == 0x000001, "Wrong alignment on WBP_Notice_Deathlog_C_SetDisplayTimeType");
static_assert(sizeof(WBP_Notice_Deathlog_C_SetDisplayTimeType) == 0x000001, "Wrong size on WBP_Notice_Deathlog_C_SetDisplayTimeType");
static_assert(offsetof(WBP_Notice_Deathlog_C_SetDisplayTimeType, IsShort) == 0x000000, "Member 'WBP_Notice_Deathlog_C_SetDisplayTimeType::IsShort' has a wrong offset!");

// Function WBP_Notice_Deathlog.WBP_Notice_Deathlog_C.SetupAsDeathLog
// 0x0080 (0x0080 - 0x0000)
struct WBP_Notice_Deathlog_C_SetupAsDeathLog final
{
public:
	struct FPalKillLogDisplayData                 DeathLogDisplayData;                               // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   CallFunc_MakeDeathLogText_AttackerName;            // 0x0038(0x0018)()
	class FText                                   CallFunc_MakeDeathLogText_DefenderName;            // 0x0050(0x0018)()
	class FText                                   CallFunc_MakeDeathLogText_Reason;                  // 0x0068(0x0018)()
};
static_assert(alignof(WBP_Notice_Deathlog_C_SetupAsDeathLog) == 0x000008, "Wrong alignment on WBP_Notice_Deathlog_C_SetupAsDeathLog");
static_assert(sizeof(WBP_Notice_Deathlog_C_SetupAsDeathLog) == 0x000080, "Wrong size on WBP_Notice_Deathlog_C_SetupAsDeathLog");
static_assert(offsetof(WBP_Notice_Deathlog_C_SetupAsDeathLog, DeathLogDisplayData) == 0x000000, "Member 'WBP_Notice_Deathlog_C_SetupAsDeathLog::DeathLogDisplayData' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_SetupAsDeathLog, CallFunc_MakeDeathLogText_AttackerName) == 0x000038, "Member 'WBP_Notice_Deathlog_C_SetupAsDeathLog::CallFunc_MakeDeathLogText_AttackerName' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_SetupAsDeathLog, CallFunc_MakeDeathLogText_DefenderName) == 0x000050, "Member 'WBP_Notice_Deathlog_C_SetupAsDeathLog::CallFunc_MakeDeathLogText_DefenderName' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_SetupAsDeathLog, CallFunc_MakeDeathLogText_Reason) == 0x000068, "Member 'WBP_Notice_Deathlog_C_SetupAsDeathLog::CallFunc_MakeDeathLogText_Reason' has a wrong offset!");

// Function WBP_Notice_Deathlog.WBP_Notice_Deathlog_C.SetupAsKillLog
// 0x0080 (0x0080 - 0x0000)
struct WBP_Notice_Deathlog_C_SetupAsKillLog final
{
public:
	struct FPalKillLogDisplayData                 KillLogDIsplayData;                                // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   CallFunc_MakeKillLogText_AttackerName;             // 0x0038(0x0018)()
	class FText                                   CallFunc_MakeKillLogText_DefenderName;             // 0x0050(0x0018)()
	class FText                                   CallFunc_MakeKillLogText_Reason;                   // 0x0068(0x0018)()
};
static_assert(alignof(WBP_Notice_Deathlog_C_SetupAsKillLog) == 0x000008, "Wrong alignment on WBP_Notice_Deathlog_C_SetupAsKillLog");
static_assert(sizeof(WBP_Notice_Deathlog_C_SetupAsKillLog) == 0x000080, "Wrong size on WBP_Notice_Deathlog_C_SetupAsKillLog");
static_assert(offsetof(WBP_Notice_Deathlog_C_SetupAsKillLog, KillLogDIsplayData) == 0x000000, "Member 'WBP_Notice_Deathlog_C_SetupAsKillLog::KillLogDIsplayData' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_SetupAsKillLog, CallFunc_MakeKillLogText_AttackerName) == 0x000038, "Member 'WBP_Notice_Deathlog_C_SetupAsKillLog::CallFunc_MakeKillLogText_AttackerName' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_SetupAsKillLog, CallFunc_MakeKillLogText_DefenderName) == 0x000050, "Member 'WBP_Notice_Deathlog_C_SetupAsKillLog::CallFunc_MakeKillLogText_DefenderName' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_SetupAsKillLog, CallFunc_MakeKillLogText_Reason) == 0x000068, "Member 'WBP_Notice_Deathlog_C_SetupAsKillLog::CallFunc_MakeKillLogText_Reason' has a wrong offset!");

// Function WBP_Notice_Deathlog.WBP_Notice_Deathlog_C.SetupIcon
// 0x00B8 (0x00B8 - 0x0000)
struct WBP_Notice_Deathlog_C_SetupIcon final
{
public:
	struct FPalKillLogDisplayData                 DisplayData;                                       // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetCharacterIconTexture_ReturnValue;      // 0x0048(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue_1; // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetCharacterIconTexture_ReturnValue_1;    // 0x0088(0x0030)(UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Notice_Deathlog_C_SetupIcon) == 0x000008, "Wrong alignment on WBP_Notice_Deathlog_C_SetupIcon");
static_assert(sizeof(WBP_Notice_Deathlog_C_SetupIcon) == 0x0000B8, "Wrong size on WBP_Notice_Deathlog_C_SetupIcon");
static_assert(offsetof(WBP_Notice_Deathlog_C_SetupIcon, DisplayData) == 0x000000, "Member 'WBP_Notice_Deathlog_C_SetupIcon::DisplayData' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_SetupIcon, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000038, "Member 'WBP_Notice_Deathlog_C_SetupIcon::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_SetupIcon, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000040, "Member 'WBP_Notice_Deathlog_C_SetupIcon::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_SetupIcon, CallFunc_GetCharacterIconTexture_ReturnValue) == 0x000048, "Member 'WBP_Notice_Deathlog_C_SetupIcon::CallFunc_GetCharacterIconTexture_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_SetupIcon, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x000078, "Member 'WBP_Notice_Deathlog_C_SetupIcon::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_SetupIcon, CallFunc_GetDatabaseCharacterParameter_ReturnValue_1) == 0x000080, "Member 'WBP_Notice_Deathlog_C_SetupIcon::CallFunc_GetDatabaseCharacterParameter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Notice_Deathlog_C_SetupIcon, CallFunc_GetCharacterIconTexture_ReturnValue_1) == 0x000088, "Member 'WBP_Notice_Deathlog_C_SetupIcon::CallFunc_GetCharacterIconTexture_ReturnValue_1' has a wrong offset!");

}

