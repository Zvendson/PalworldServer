#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_WeightNotice.WBP_WeightNotice_C.ExecuteUbergraph_WBP_WeightNotice
// 0x0160 (0x0160 - 0x0000)
struct WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_CustomEvent_NowWeight;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_CustomEvent_MaxWeight;                      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;            // 0x0030(0x0018)()
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue_1;          // 0x0048(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0060(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00B0(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0100(0x0010)(ReferenceParm)
	bool                                          Temp_bool_Variable;                                // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0118(0x0018)()
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue_1;             // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;  // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       K2Node_Select_Default;                             // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0148(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_154[0x4];                                      // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast; // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice) == 0x000008, "Wrong alignment on WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice");
static_assert(sizeof(WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice) == 0x000160, "Wrong size on WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice");
static_assert(offsetof(WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice, EntryPoint) == 0x000000, "Member 'WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice, K2Node_CustomEvent_NowWeight) == 0x000008, "Member 'WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice::K2Node_CustomEvent_NowWeight' has a wrong offset!");
static_assert(offsetof(WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice, K2Node_CustomEvent_MaxWeight) == 0x000010, "Member 'WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice::K2Node_CustomEvent_MaxWeight' has a wrong offset!");
static_assert(offsetof(WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice, CallFunc_GetGameSetting_ReturnValue) == 0x000018, "Member 'WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000020, "Member 'WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000028, "Member 'WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice, CallFunc_Conv_DoubleToText_ReturnValue) == 0x000030, "Member 'WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice::CallFunc_Conv_DoubleToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice, CallFunc_Conv_DoubleToText_ReturnValue_1) == 0x000048, "Member 'WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice::CallFunc_Conv_DoubleToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice, K2Node_MakeStruct_FormatArgumentData) == 0x000060, "Member 'WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000B0, "Member 'WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice, K2Node_MakeArray_Array) == 0x000100, "Member 'WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice, Temp_bool_Variable) == 0x000110, "Member 'WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice, CallFunc_Format_ReturnValue) == 0x000118, "Member 'WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice, CallFunc_GetGameSetting_ReturnValue_1) == 0x000130, "Member 'WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice::CallFunc_GetGameSetting_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice, CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1) == 0x000138, "Member 'WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice::CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice, K2Node_Select_Default) == 0x000140, "Member 'WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice, CallFunc_PlayAnimation_ReturnValue) == 0x000148, "Member 'WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x000150, "Member 'WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice, CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast) == 0x000158, "Member 'WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice::CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast' has a wrong offset!");

// Function WBP_WeightNotice.WBP_WeightNotice_C.UpdateVisibility
// 0x0001 (0x0001 - 0x0000)
struct WBP_WeightNotice_C_UpdateVisibility final
{
public:
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_WeightNotice_C_UpdateVisibility) == 0x000001, "Wrong alignment on WBP_WeightNotice_C_UpdateVisibility");
static_assert(sizeof(WBP_WeightNotice_C_UpdateVisibility) == 0x000001, "Wrong size on WBP_WeightNotice_C_UpdateVisibility");
static_assert(offsetof(WBP_WeightNotice_C_UpdateVisibility, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000000, "Member 'WBP_WeightNotice_C_UpdateVisibility::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");

// Function WBP_WeightNotice.WBP_WeightNotice_C.UpdateWeight
// 0x0010 (0x0010 - 0x0000)
struct WBP_WeightNotice_C_UpdateWeight final
{
public:
	double                                        NowWeight;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxWeight;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_WeightNotice_C_UpdateWeight) == 0x000008, "Wrong alignment on WBP_WeightNotice_C_UpdateWeight");
static_assert(sizeof(WBP_WeightNotice_C_UpdateWeight) == 0x000010, "Wrong size on WBP_WeightNotice_C_UpdateWeight");
static_assert(offsetof(WBP_WeightNotice_C_UpdateWeight, NowWeight) == 0x000000, "Member 'WBP_WeightNotice_C_UpdateWeight::NowWeight' has a wrong offset!");
static_assert(offsetof(WBP_WeightNotice_C_UpdateWeight, MaxWeight) == 0x000008, "Member 'WBP_WeightNotice_C_UpdateWeight::MaxWeight' has a wrong offset!");

}

