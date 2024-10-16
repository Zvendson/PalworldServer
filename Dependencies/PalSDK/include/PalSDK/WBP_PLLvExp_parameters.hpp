#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_PLLvExp.WBP_PLLvExp_C.ExecuteUbergraph_WBP_PLLvExp
// 0x0130 (0x0130 - 0x0000)
struct WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int64 AddExp, int64 OldExp, double NowExpRate)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NewLevel)>               K2Node_CreateDelegate_OutputDelegate_2;            // 0x0058(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0068(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x00C8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_2;           // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_FMin_ReturnValue;                         // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_delayGaugeProgressPerSecond_ImplicitCast; // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_closeAnimeDelay_ImplicitCast;   // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast_1;        // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast_2;        // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp) == 0x000008, "Wrong alignment on WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp");
static_assert(sizeof(WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp) == 0x000130, "Wrong size on WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp");
static_assert(offsetof(WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp, EntryPoint) == 0x000000, "Member 'WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000004, "Member 'WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000005, "Member 'WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp, CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result) == 0x000018, "Member 'WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp::CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp, CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue) == 0x000020, "Member 'WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp::CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000028, "Member 'WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000030, "Member 'WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp, CallFunc_IsValid_ReturnValue_1) == 0x000039, "Member 'WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp, CallFunc_GetGameSetting_ReturnValue) == 0x000040, "Member 'WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp, K2Node_CreateDelegate_OutputDelegate_1) == 0x000048, "Member 'WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp, K2Node_CreateDelegate_OutputDelegate_2) == 0x000058, "Member 'WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp, K2Node_Event_MyGeometry) == 0x000068, "Member 'WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp, K2Node_Event_InDeltaTime) == 0x0000A8, "Member 'WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000B0, "Member 'WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x0000B8, "Member 'WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0000C0, "Member 'WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000C8, "Member 'WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x0000D8, "Member 'WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp, CallFunc_Add_DoubleDouble_ReturnValue_2) == 0x0000E0, "Member 'WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp::CallFunc_Add_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x0000E8, "Member 'WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp, CallFunc_FMin_ReturnValue) == 0x0000F0, "Member 'WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp, K2Node_VariableSet_delayGaugeProgressPerSecond_ImplicitCast) == 0x0000F8, "Member 'WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp::K2Node_VariableSet_delayGaugeProgressPerSecond_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp, K2Node_VariableSet_closeAnimeDelay_ImplicitCast) == 0x000100, "Member 'WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp::K2Node_VariableSet_closeAnimeDelay_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000108, "Member 'WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x000110, "Member 'WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp, CallFunc_Add_DoubleDouble_B_ImplicitCast_1) == 0x000118, "Member 'WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp::CallFunc_Add_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp, CallFunc_Add_DoubleDouble_B_ImplicitCast_2) == 0x000120, "Member 'WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp::CallFunc_Add_DoubleDouble_B_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x000128, "Member 'WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");

// Function WBP_PLLvExp.WBP_PLLvExp_C.SetAddExpText
// 0x0088 (0x0088 - 0x0000)
struct WBP_PLLvExp_C_SetAddExpText final
{
public:
	int64                                         Value;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_Int64Int64_ReturnValue;        // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0010(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0060(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0070(0x0018)()
};
static_assert(alignof(WBP_PLLvExp_C_SetAddExpText) == 0x000008, "Wrong alignment on WBP_PLLvExp_C_SetAddExpText");
static_assert(sizeof(WBP_PLLvExp_C_SetAddExpText) == 0x000088, "Wrong size on WBP_PLLvExp_C_SetAddExpText");
static_assert(offsetof(WBP_PLLvExp_C_SetAddExpText, Value) == 0x000000, "Member 'WBP_PLLvExp_C_SetAddExpText::Value' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_SetAddExpText, CallFunc_EqualEqual_Int64Int64_ReturnValue) == 0x000008, "Member 'WBP_PLLvExp_C_SetAddExpText::CallFunc_EqualEqual_Int64Int64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_SetAddExpText, K2Node_MakeStruct_FormatArgumentData) == 0x000010, "Member 'WBP_PLLvExp_C_SetAddExpText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_SetAddExpText, K2Node_MakeArray_Array) == 0x000060, "Member 'WBP_PLLvExp_C_SetAddExpText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_SetAddExpText, CallFunc_Format_ReturnValue) == 0x000070, "Member 'WBP_PLLvExp_C_SetAddExpText::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WBP_PLLvExp.WBP_PLLvExp_C.Setup
// 0x0018 (0x0018 - 0x0000)
struct WBP_PLLvExp_C_Setup final
{
public:
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PLLvExp_C_Setup) == 0x000008, "Wrong alignment on WBP_PLLvExp_C_Setup");
static_assert(sizeof(WBP_PLLvExp_C_Setup) == 0x000018, "Wrong size on WBP_PLLvExp_C_Setup");
static_assert(offsetof(WBP_PLLvExp_C_Setup, CallFunc_GetPalmi_ReturnValue) == 0x000000, "Member 'WBP_PLLvExp_C_Setup::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_Setup, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x000008, "Member 'WBP_PLLvExp_C_Setup::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_Setup, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PLLvExp_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_Setup, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'WBP_PLLvExp_C_Setup::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_PLLvExp.WBP_PLLvExp_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_PLLvExp_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PLLvExp_C_Tick) == 0x000008, "Wrong alignment on WBP_PLLvExp_C_Tick");
static_assert(sizeof(WBP_PLLvExp_C_Tick) == 0x000048, "Wrong size on WBP_PLLvExp_C_Tick");
static_assert(offsetof(WBP_PLLvExp_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_PLLvExp_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_PLLvExp_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_PLLvExp.WBP_PLLvExp_C.UpdateExp
// 0x0040 (0x0040 - 0x0000)
struct WBP_PLLvExp_C_UpdateExp final
{
public:
	int64                                         AddExp;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         OldExp;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NowExpRate;                                        // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Add_Int64Int64_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_UpdateGaugeEdgeImagePosition_percent_ImplicitCast; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PLLvExp_C_UpdateExp) == 0x000008, "Wrong alignment on WBP_PLLvExp_C_UpdateExp");
static_assert(sizeof(WBP_PLLvExp_C_UpdateExp) == 0x000040, "Wrong size on WBP_PLLvExp_C_UpdateExp");
static_assert(offsetof(WBP_PLLvExp_C_UpdateExp, AddExp) == 0x000000, "Member 'WBP_PLLvExp_C_UpdateExp::AddExp' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_UpdateExp, OldExp) == 0x000008, "Member 'WBP_PLLvExp_C_UpdateExp::OldExp' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_UpdateExp, NowExpRate) == 0x000010, "Member 'WBP_PLLvExp_C_UpdateExp::NowExpRate' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_UpdateExp, CallFunc_Add_Int64Int64_ReturnValue) == 0x000018, "Member 'WBP_PLLvExp_C_UpdateExp::CallFunc_Add_Int64Int64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_UpdateExp, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000020, "Member 'WBP_PLLvExp_C_UpdateExp::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_UpdateExp, CallFunc_UpdateGaugeEdgeImagePosition_percent_ImplicitCast) == 0x000028, "Member 'WBP_PLLvExp_C_UpdateExp::CallFunc_UpdateGaugeEdgeImagePosition_percent_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_UpdateExp, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x000030, "Member 'WBP_PLLvExp_C_UpdateExp::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_UpdateExp, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000038, "Member 'WBP_PLLvExp_C_UpdateExp::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function WBP_PLLvExp.WBP_PLLvExp_C.UpdateGaugeEdgeImagePosition
// 0x0080 (0x0080 - 0x0000)
struct WBP_PLLvExp_C_UpdateGaugeEdgeImagePosition final
{
public:
	double                                        Percent;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X;                          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X_1;                        // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y_1;                        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PLLvExp_C_UpdateGaugeEdgeImagePosition) == 0x000008, "Wrong alignment on WBP_PLLvExp_C_UpdateGaugeEdgeImagePosition");
static_assert(sizeof(WBP_PLLvExp_C_UpdateGaugeEdgeImagePosition) == 0x000080, "Wrong size on WBP_PLLvExp_C_UpdateGaugeEdgeImagePosition");
static_assert(offsetof(WBP_PLLvExp_C_UpdateGaugeEdgeImagePosition, Percent) == 0x000000, "Member 'WBP_PLLvExp_C_UpdateGaugeEdgeImagePosition::Percent' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_UpdateGaugeEdgeImagePosition, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'WBP_PLLvExp_C_UpdateGaugeEdgeImagePosition::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_UpdateGaugeEdgeImagePosition, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000010, "Member 'WBP_PLLvExp_C_UpdateGaugeEdgeImagePosition::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_UpdateGaugeEdgeImagePosition, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_PLLvExp_C_UpdateGaugeEdgeImagePosition::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_UpdateGaugeEdgeImagePosition, CallFunc_IsValid_ReturnValue_1) == 0x000019, "Member 'WBP_PLLvExp_C_UpdateGaugeEdgeImagePosition::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_UpdateGaugeEdgeImagePosition, CallFunc_GetPosition_ReturnValue) == 0x000020, "Member 'WBP_PLLvExp_C_UpdateGaugeEdgeImagePosition::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_UpdateGaugeEdgeImagePosition, CallFunc_GetSize_ReturnValue) == 0x000030, "Member 'WBP_PLLvExp_C_UpdateGaugeEdgeImagePosition::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_UpdateGaugeEdgeImagePosition, CallFunc_BreakVector2D_X) == 0x000040, "Member 'WBP_PLLvExp_C_UpdateGaugeEdgeImagePosition::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_UpdateGaugeEdgeImagePosition, CallFunc_BreakVector2D_Y) == 0x000048, "Member 'WBP_PLLvExp_C_UpdateGaugeEdgeImagePosition::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_UpdateGaugeEdgeImagePosition, CallFunc_BreakVector2D_X_1) == 0x000050, "Member 'WBP_PLLvExp_C_UpdateGaugeEdgeImagePosition::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_UpdateGaugeEdgeImagePosition, CallFunc_BreakVector2D_Y_1) == 0x000058, "Member 'WBP_PLLvExp_C_UpdateGaugeEdgeImagePosition::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_UpdateGaugeEdgeImagePosition, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000060, "Member 'WBP_PLLvExp_C_UpdateGaugeEdgeImagePosition::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_UpdateGaugeEdgeImagePosition, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000068, "Member 'WBP_PLLvExp_C_UpdateGaugeEdgeImagePosition::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_UpdateGaugeEdgeImagePosition, CallFunc_MakeVector2D_ReturnValue) == 0x000070, "Member 'WBP_PLLvExp_C_UpdateGaugeEdgeImagePosition::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function WBP_PLLvExp.WBP_PLLvExp_C.UpdateLevel
// 0x0020 (0x0020 - 0x0000)
struct WBP_PLLvExp_C_UpdateLevel final
{
public:
	int32                                         NewLevel;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_GetBindedHandle_targetHandle;             // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevel_ReturnValue;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PLLvExp_C_UpdateLevel) == 0x000008, "Wrong alignment on WBP_PLLvExp_C_UpdateLevel");
static_assert(sizeof(WBP_PLLvExp_C_UpdateLevel) == 0x000020, "Wrong size on WBP_PLLvExp_C_UpdateLevel");
static_assert(offsetof(WBP_PLLvExp_C_UpdateLevel, NewLevel) == 0x000000, "Member 'WBP_PLLvExp_C_UpdateLevel::NewLevel' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_UpdateLevel, CallFunc_GetBindedHandle_targetHandle) == 0x000008, "Member 'WBP_PLLvExp_C_UpdateLevel::CallFunc_GetBindedHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_UpdateLevel, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000010, "Member 'WBP_PLLvExp_C_UpdateLevel::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_UpdateLevel, CallFunc_GetLevel_ReturnValue) == 0x000018, "Member 'WBP_PLLvExp_C_UpdateLevel::CallFunc_GetLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PLLvExp_C_UpdateLevel, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'WBP_PLLvExp_C_UpdateLevel::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

