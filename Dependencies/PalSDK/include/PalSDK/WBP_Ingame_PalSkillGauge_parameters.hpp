#pragma once

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.AnmEvent_UsingSkill
// 0x0001 (0x0001 - 0x0000)
struct WBP_Ingame_PalSkillGauge_C_AnmEvent_UsingSkill final
{
public:
	bool                                          TogglePlay;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PalSkillGauge_C_AnmEvent_UsingSkill) == 0x000001, "Wrong alignment on WBP_Ingame_PalSkillGauge_C_AnmEvent_UsingSkill");
static_assert(sizeof(WBP_Ingame_PalSkillGauge_C_AnmEvent_UsingSkill) == 0x000001, "Wrong size on WBP_Ingame_PalSkillGauge_C_AnmEvent_UsingSkill");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_AnmEvent_UsingSkill, TogglePlay) == 0x000000, "Member 'WBP_Ingame_PalSkillGauge_C_AnmEvent_UsingSkill::TogglePlay' has a wrong offset!");

// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.ExecuteUbergraph_WBP_Ingame_PalSkillGauge
// 0x00E8 (0x00E8 - 0x0000)
struct WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              Temp_byte_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0020(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x0028(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_4;              // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_5;              // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_6;              // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_7;              // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_TogglePlay;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_8;              // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_9;              // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FWidgetTransform                       K2Node_MakeStruct_WidgetTransform;                 // 0x0090(0x0038)(NoDestructor)
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              K2Node_CustomEvent_bNewInputType;                  // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;          // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D2[0x2];                                       // 0x00D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_1;            // 0x00D4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default;                             // 0x00DC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge) == 0x000008, "Wrong alignment on WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge");
static_assert(sizeof(WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge) == 0x0000E8, "Wrong size on WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge, EntryPoint) == 0x000000, "Member 'WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge, CallFunc_MakeLiteralName_ReturnValue) == 0x000004, "Member 'WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge, Temp_byte_Variable) == 0x00000C, "Member 'WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge, Temp_name_Variable) == 0x000020, "Member 'WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge, Temp_name_Variable_1) == 0x000028, "Member 'WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge, CallFunc_PlayAnimation_ReturnValue) == 0x000030, "Member 'WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge, CallFunc_PlayAnimation_ReturnValue_1) == 0x000038, "Member 'WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge, CallFunc_PlayAnimation_ReturnValue_2) == 0x000040, "Member 'WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge, CallFunc_PlayAnimation_ReturnValue_3) == 0x000048, "Member 'WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x000050, "Member 'WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000054, "Member 'WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge, CallFunc_PlayAnimation_ReturnValue_4) == 0x000058, "Member 'WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge::CallFunc_PlayAnimation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge, CallFunc_PlayAnimation_ReturnValue_5) == 0x000060, "Member 'WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge::CallFunc_PlayAnimation_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge, CallFunc_PlayAnimation_ReturnValue_6) == 0x000068, "Member 'WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge::CallFunc_PlayAnimation_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge, CallFunc_PlayAnimation_ReturnValue_7) == 0x000070, "Member 'WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge::CallFunc_PlayAnimation_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge, K2Node_CustomEvent_TogglePlay) == 0x000078, "Member 'WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge::K2Node_CustomEvent_TogglePlay' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge, CallFunc_PlayAnimation_ReturnValue_8) == 0x000080, "Member 'WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge::CallFunc_PlayAnimation_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge, CallFunc_PlayAnimation_ReturnValue_9) == 0x000088, "Member 'WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge::CallFunc_PlayAnimation_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge, K2Node_MakeStruct_WidgetTransform) == 0x000090, "Member 'WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge::K2Node_MakeStruct_WidgetTransform' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x0000C8, "Member 'WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge, K2Node_CustomEvent_bNewInputType) == 0x0000D0, "Member 'WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge::K2Node_CustomEvent_bNewInputType' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge, CallFunc_GetCurrentInputType_ReturnValue) == 0x0000D1, "Member 'WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge, CallFunc_MakeLiteralName_ReturnValue_1) == 0x0000D4, "Member 'WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge::CallFunc_MakeLiteralName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge, K2Node_Select_Default) == 0x0000DC, "Member 'WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge::K2Node_Select_Default' has a wrong offset!");

// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.Hide Key Guide
// 0x0005 (0x0005 - 0x0000)
struct WBP_Ingame_PalSkillGauge_C_Hide_Key_Guide final
{
public:
	bool                                          Hide;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PalSkillGauge_C_Hide_Key_Guide) == 0x000001, "Wrong alignment on WBP_Ingame_PalSkillGauge_C_Hide_Key_Guide");
static_assert(sizeof(WBP_Ingame_PalSkillGauge_C_Hide_Key_Guide) == 0x000005, "Wrong size on WBP_Ingame_PalSkillGauge_C_Hide_Key_Guide");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_Hide_Key_Guide, Hide) == 0x000000, "Member 'WBP_Ingame_PalSkillGauge_C_Hide_Key_Guide::Hide' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_Hide_Key_Guide, Temp_bool_Variable) == 0x000001, "Member 'WBP_Ingame_PalSkillGauge_C_Hide_Key_Guide::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_Hide_Key_Guide, Temp_byte_Variable) == 0x000002, "Member 'WBP_Ingame_PalSkillGauge_C_Hide_Key_Guide::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_Hide_Key_Guide, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_Ingame_PalSkillGauge_C_Hide_Key_Guide::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_Hide_Key_Guide, K2Node_Select_Default) == 0x000004, "Member 'WBP_Ingame_PalSkillGauge_C_Hide_Key_Guide::K2Node_Select_Default' has a wrong offset!");

// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.OnInputMethodChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_Ingame_PalSkillGauge_C_OnInputMethodChanged final
{
public:
	ECommonInputType                              bNewInputType;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PalSkillGauge_C_OnInputMethodChanged) == 0x000001, "Wrong alignment on WBP_Ingame_PalSkillGauge_C_OnInputMethodChanged");
static_assert(sizeof(WBP_Ingame_PalSkillGauge_C_OnInputMethodChanged) == 0x000001, "Wrong size on WBP_Ingame_PalSkillGauge_C_OnInputMethodChanged");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_OnInputMethodChanged, bNewInputType) == 0x000000, "Member 'WBP_Ingame_PalSkillGauge_C_OnInputMethodChanged::bNewInputType' has a wrong offset!");

// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.Set Cool Down Gauge Percent
// 0x0040 (0x0040 - 0x0000)
struct WBP_Ingame_PalSkillGauge_C_Set_Cool_Down_Gauge_Percent final
{
public:
	double                                        Now;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Max;                                               // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;            // 0x0018(0x0018)()
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PalSkillGauge_C_Set_Cool_Down_Gauge_Percent) == 0x000008, "Wrong alignment on WBP_Ingame_PalSkillGauge_C_Set_Cool_Down_Gauge_Percent");
static_assert(sizeof(WBP_Ingame_PalSkillGauge_C_Set_Cool_Down_Gauge_Percent) == 0x000040, "Wrong size on WBP_Ingame_PalSkillGauge_C_Set_Cool_Down_Gauge_Percent");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_Set_Cool_Down_Gauge_Percent, Now) == 0x000000, "Member 'WBP_Ingame_PalSkillGauge_C_Set_Cool_Down_Gauge_Percent::Now' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_Set_Cool_Down_Gauge_Percent, Max) == 0x000008, "Member 'WBP_Ingame_PalSkillGauge_C_Set_Cool_Down_Gauge_Percent::Max' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_Set_Cool_Down_Gauge_Percent, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000010, "Member 'WBP_Ingame_PalSkillGauge_C_Set_Cool_Down_Gauge_Percent::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_Set_Cool_Down_Gauge_Percent, CallFunc_Conv_DoubleToText_ReturnValue) == 0x000018, "Member 'WBP_Ingame_PalSkillGauge_C_Set_Cool_Down_Gauge_Percent::CallFunc_Conv_DoubleToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_Set_Cool_Down_Gauge_Percent, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000030, "Member 'WBP_Ingame_PalSkillGauge_C_Set_Cool_Down_Gauge_Percent::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_Set_Cool_Down_Gauge_Percent, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x000038, "Member 'WBP_Ingame_PalSkillGauge_C_Set_Cool_Down_Gauge_Percent::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");

// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.Set Skill Gauge Percent
// 0x0010 (0x0010 - 0x0000)
struct WBP_Ingame_PalSkillGauge_C_Set_Skill_Gauge_Percent final
{
public:
	double                                        Percent;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PalSkillGauge_C_Set_Skill_Gauge_Percent) == 0x000008, "Wrong alignment on WBP_Ingame_PalSkillGauge_C_Set_Skill_Gauge_Percent");
static_assert(sizeof(WBP_Ingame_PalSkillGauge_C_Set_Skill_Gauge_Percent) == 0x000010, "Wrong size on WBP_Ingame_PalSkillGauge_C_Set_Skill_Gauge_Percent");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_Set_Skill_Gauge_Percent, Percent) == 0x000000, "Member 'WBP_Ingame_PalSkillGauge_C_Set_Skill_Gauge_Percent::Percent' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_Set_Skill_Gauge_Percent, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x000008, "Member 'WBP_Ingame_PalSkillGauge_C_Set_Skill_Gauge_Percent::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");

// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.Set Skill Name
// 0x0018 (0x0018 - 0x0000)
struct WBP_Ingame_PalSkillGauge_C_Set_Skill_Name final
{
public:
	class FText                                   SkillNameText;                                     // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_Ingame_PalSkillGauge_C_Set_Skill_Name) == 0x000008, "Wrong alignment on WBP_Ingame_PalSkillGauge_C_Set_Skill_Name");
static_assert(sizeof(WBP_Ingame_PalSkillGauge_C_Set_Skill_Name) == 0x000018, "Wrong size on WBP_Ingame_PalSkillGauge_C_Set_Skill_Name");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_Set_Skill_Name, SkillNameText) == 0x000000, "Member 'WBP_Ingame_PalSkillGauge_C_Set_Skill_Name::SkillNameText' has a wrong offset!");

// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.Set Skill Name Locked
// 0x0018 (0x0018 - 0x0000)
struct WBP_Ingame_PalSkillGauge_C_Set_Skill_Name_Locked final
{
public:
	class FText                                   CallFunc_GetLocalizedText_ReturnValue;             // 0x0000(0x0018)()
};
static_assert(alignof(WBP_Ingame_PalSkillGauge_C_Set_Skill_Name_Locked) == 0x000008, "Wrong alignment on WBP_Ingame_PalSkillGauge_C_Set_Skill_Name_Locked");
static_assert(sizeof(WBP_Ingame_PalSkillGauge_C_Set_Skill_Name_Locked) == 0x000018, "Wrong size on WBP_Ingame_PalSkillGauge_C_Set_Skill_Name_Locked");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_Set_Skill_Name_Locked, CallFunc_GetLocalizedText_ReturnValue) == 0x000000, "Member 'WBP_Ingame_PalSkillGauge_C_Set_Skill_Name_Locked::CallFunc_GetLocalizedText_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.Setup Icon Texture
// 0x0120 (0x0120 - 0x0000)
struct WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture final
{
public:
	TMap<class FName, TSoftObjectPtr<class UTexture2D>> SoftTextureMap;                                    // 0x0000(0x0050)(Edit, BlueprintVisible)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, TSoftObjectPtr<class UTexture2D>> K2Node_MakeVariable_MakeVariableOutput;            // 0x0058(0x0050)()
	bool                                          Temp_bool_Variable_1;                              // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalOtomoHolderComponentBase*           CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_OtomoPalHolderComponent_C*          K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component; // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo;   // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x3];                                       // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCharacterIDFromCharacter_ReturnValue;  // 0x00DC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E4[0x4];                                       // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetPartnerSkillIcon_SoftIconTexture;      // 0x00E8(0x0030)(HasGetValueTypeHash)
	bool                                          CallFunc_GetPartnerSkillIcon_IsSquare;             // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture) == 0x000008, "Wrong alignment on WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture");
static_assert(sizeof(WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture) == 0x000120, "Wrong size on WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture, SoftTextureMap) == 0x000000, "Member 'WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture::SoftTextureMap' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture, Temp_byte_Variable) == 0x000050, "Member 'WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture, Temp_byte_Variable_1) == 0x000051, "Member 'WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture, Temp_bool_Variable) == 0x000052, "Member 'WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture, Temp_byte_Variable_2) == 0x000053, "Member 'WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture, Temp_byte_Variable_3) == 0x000054, "Member 'WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture, K2Node_MakeVariable_MakeVariableOutput) == 0x000058, "Member 'WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture::K2Node_MakeVariable_MakeVariableOutput' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture, Temp_bool_Variable_1) == 0x0000A8, "Member 'WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture, CallFunc_GetOtomoHolderComponent_ReturnValue) == 0x0000B0, "Member 'WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture::CallFunc_GetOtomoHolderComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture, CallFunc_IsValid_ReturnValue) == 0x0000B8, "Member 'WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture, K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component) == 0x0000C0, "Member 'WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture::K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture, CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo) == 0x0000D0, "Member 'WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture::CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture, CallFunc_IsValid_ReturnValue_1) == 0x0000D8, "Member 'WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture, CallFunc_GetCharacterIDFromCharacter_ReturnValue) == 0x0000DC, "Member 'WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture::CallFunc_GetCharacterIDFromCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture, CallFunc_GetPartnerSkillIcon_SoftIconTexture) == 0x0000E8, "Member 'WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture::CallFunc_GetPartnerSkillIcon_SoftIconTexture' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture, CallFunc_GetPartnerSkillIcon_IsSquare) == 0x000118, "Member 'WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture::CallFunc_GetPartnerSkillIcon_IsSquare' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture, K2Node_Select_Default) == 0x000119, "Member 'WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture, K2Node_Select_Default_1) == 0x00011A, "Member 'WBP_Ingame_PalSkillGauge_C_Setup_Icon_Texture::K2Node_Select_Default_1' has a wrong offset!");

// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.ShowFlyKeyGuide
// 0x0005 (0x0005 - 0x0000)
struct WBP_Ingame_PalSkillGauge_C_ShowFlyKeyGuide final
{
public:
	bool                                          Show;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PalSkillGauge_C_ShowFlyKeyGuide) == 0x000001, "Wrong alignment on WBP_Ingame_PalSkillGauge_C_ShowFlyKeyGuide");
static_assert(sizeof(WBP_Ingame_PalSkillGauge_C_ShowFlyKeyGuide) == 0x000005, "Wrong size on WBP_Ingame_PalSkillGauge_C_ShowFlyKeyGuide");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_ShowFlyKeyGuide, Show) == 0x000000, "Member 'WBP_Ingame_PalSkillGauge_C_ShowFlyKeyGuide::Show' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_ShowFlyKeyGuide, Temp_bool_Variable) == 0x000001, "Member 'WBP_Ingame_PalSkillGauge_C_ShowFlyKeyGuide::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_ShowFlyKeyGuide, Temp_byte_Variable) == 0x000002, "Member 'WBP_Ingame_PalSkillGauge_C_ShowFlyKeyGuide::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_ShowFlyKeyGuide, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_Ingame_PalSkillGauge_C_ShowFlyKeyGuide::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalSkillGauge_C_ShowFlyKeyGuide, K2Node_Select_Default) == 0x000004, "Member 'WBP_Ingame_PalSkillGauge_C_ShowFlyKeyGuide::K2Node_Select_Default' has a wrong offset!");

}

