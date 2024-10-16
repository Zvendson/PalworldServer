#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Pal_structs.hpp"
#include "SlateCore_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_Ingame_Thermometer.WBP_Ingame_Thermometer_C.AnmEvent_ChangeTemperature
// 0x0004 (0x0004 - 0x0000)
struct WBP_Ingame_Thermometer_C_AnmEvent_ChangeTemperature final
{
public:
	int32                                         TargetTenperature;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_Thermometer_C_AnmEvent_ChangeTemperature) == 0x000004, "Wrong alignment on WBP_Ingame_Thermometer_C_AnmEvent_ChangeTemperature");
static_assert(sizeof(WBP_Ingame_Thermometer_C_AnmEvent_ChangeTemperature) == 0x000004, "Wrong size on WBP_Ingame_Thermometer_C_AnmEvent_ChangeTemperature");
static_assert(offsetof(WBP_Ingame_Thermometer_C_AnmEvent_ChangeTemperature, TargetTenperature) == 0x000000, "Member 'WBP_Ingame_Thermometer_C_AnmEvent_ChangeTemperature::TargetTenperature' has a wrong offset!");

// Function WBP_Ingame_Thermometer.WBP_Ingame_Thermometer_C.Calc Thermomater Anime Target Time
// 0x0058 (0x0058 - 0x0000)
struct WBP_Ingame_Thermometer_C_Calc_Thermomater_Anime_Target_Time final
{
public:
	int32                                         TargetTenperature;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        TargetTime;                                        // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Min_ReturnValue;                          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_2;           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_OutRangeB_ImplicitCast;   // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_Thermometer_C_Calc_Thermomater_Anime_Target_Time) == 0x000008, "Wrong alignment on WBP_Ingame_Thermometer_C_Calc_Thermomater_Anime_Target_Time");
static_assert(sizeof(WBP_Ingame_Thermometer_C_Calc_Thermomater_Anime_Target_Time) == 0x000058, "Wrong size on WBP_Ingame_Thermometer_C_Calc_Thermomater_Anime_Target_Time");
static_assert(offsetof(WBP_Ingame_Thermometer_C_Calc_Thermomater_Anime_Target_Time, TargetTenperature) == 0x000000, "Member 'WBP_Ingame_Thermometer_C_Calc_Thermomater_Anime_Target_Time::TargetTenperature' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_Calc_Thermomater_Anime_Target_Time, TargetTime) == 0x000008, "Member 'WBP_Ingame_Thermometer_C_Calc_Thermomater_Anime_Target_Time::TargetTime' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_Calc_Thermomater_Anime_Target_Time, CallFunc_Multiply_IntInt_ReturnValue) == 0x000010, "Member 'WBP_Ingame_Thermometer_C_Calc_Thermomater_Anime_Target_Time::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_Calc_Thermomater_Anime_Target_Time, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000018, "Member 'WBP_Ingame_Thermometer_C_Calc_Thermomater_Anime_Target_Time::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_Calc_Thermomater_Anime_Target_Time, CallFunc_Conv_IntToDouble_ReturnValue_1) == 0x000020, "Member 'WBP_Ingame_Thermometer_C_Calc_Thermomater_Anime_Target_Time::CallFunc_Conv_IntToDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_Calc_Thermomater_Anime_Target_Time, CallFunc_Min_ReturnValue) == 0x000028, "Member 'WBP_Ingame_Thermometer_C_Calc_Thermomater_Anime_Target_Time::CallFunc_Min_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_Calc_Thermomater_Anime_Target_Time, CallFunc_Max_ReturnValue) == 0x00002C, "Member 'WBP_Ingame_Thermometer_C_Calc_Thermomater_Anime_Target_Time::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_Calc_Thermomater_Anime_Target_Time, CallFunc_Conv_IntToDouble_ReturnValue_2) == 0x000030, "Member 'WBP_Ingame_Thermometer_C_Calc_Thermomater_Anime_Target_Time::CallFunc_Conv_IntToDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_Calc_Thermomater_Anime_Target_Time, CallFunc_MapRangeClamped_ReturnValue) == 0x000038, "Member 'WBP_Ingame_Thermometer_C_Calc_Thermomater_Anime_Target_Time::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_Calc_Thermomater_Anime_Target_Time, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000040, "Member 'WBP_Ingame_Thermometer_C_Calc_Thermomater_Anime_Target_Time::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_Calc_Thermomater_Anime_Target_Time, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x000048, "Member 'WBP_Ingame_Thermometer_C_Calc_Thermomater_Anime_Target_Time::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_Calc_Thermomater_Anime_Target_Time, CallFunc_MapRangeClamped_OutRangeB_ImplicitCast) == 0x000050, "Member 'WBP_Ingame_Thermometer_C_Calc_Thermomater_Anime_Target_Time::CallFunc_MapRangeClamped_OutRangeB_ImplicitCast' has a wrong offset!");

// Function WBP_Ingame_Thermometer.WBP_Ingame_Thermometer_C.ExecuteUbergraph_WBP_Ingame_Thermometer
// 0x00E0 (0x00E0 - 0x0000)
struct WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_TargetTenperature;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Calc_Thermomater_Anime_Target_Time_TargetTime; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0010(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UImage*>                         K2Node_MakeArray_Array;                            // 0x0058(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class UImage*>                         K2Node_MakeArray_Array_1;                          // 0x0068(0x0010)(ReferenceParm, ContainsInstancedReference)
	float                                         CallFunc_PauseAnimation_ReturnValue;               // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PauseAnimation_ReturnValue_1;             // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetAnimationCurrentTime_InTime_ImplicitCast; // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PlayAnimation_StartAtTime_ImplicitCast;   // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1; // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer) == 0x000008, "Wrong alignment on WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer");
static_assert(sizeof(WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer) == 0x0000E0, "Wrong size on WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer");
static_assert(offsetof(WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer, EntryPoint) == 0x000000, "Member 'WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer, K2Node_CustomEvent_TargetTenperature) == 0x000004, "Member 'WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer::K2Node_CustomEvent_TargetTenperature' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer, CallFunc_Calc_Thermomater_Anime_Target_Time_TargetTime) == 0x000008, "Member 'WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer::CallFunc_Calc_Thermomater_Anime_Target_Time_TargetTime' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer, K2Node_Event_MyGeometry) == 0x000010, "Member 'WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer, K2Node_Event_InDeltaTime) == 0x000050, "Member 'WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer, CallFunc_GetEndTime_ReturnValue) == 0x000054, "Member 'WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer, K2Node_MakeArray_Array) == 0x000058, "Member 'WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer, K2Node_MakeArray_Array_1) == 0x000068, "Member 'WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer, CallFunc_PauseAnimation_ReturnValue) == 0x000078, "Member 'WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer::CallFunc_PauseAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000080, "Member 'WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000088, "Member 'WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000090, "Member 'WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer, CallFunc_PlayAnimation_ReturnValue) == 0x000098, "Member 'WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x0000A0, "Member 'WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000A8, "Member 'WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer, CallFunc_PauseAnimation_ReturnValue_1) == 0x0000B0, "Member 'WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer::CallFunc_PauseAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000B8, "Member 'WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer, CallFunc_SetAnimationCurrentTime_InTime_ImplicitCast) == 0x0000C0, "Member 'WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer::CallFunc_SetAnimationCurrentTime_InTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer, CallFunc_PlayAnimation_StartAtTime_ImplicitCast) == 0x0000C4, "Member 'WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer::CallFunc_PlayAnimation_StartAtTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x0000C8, "Member 'WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0000D0, "Member 'WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer, CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1) == 0x0000D8, "Member 'WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer::CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1' has a wrong offset!");

// Function WBP_Ingame_Thermometer.WBP_Ingame_Thermometer_C.SetBodyState
// 0x0002 (0x0002 - 0x0000)
struct WBP_Ingame_Thermometer_C_SetBodyState final
{
public:
	EPalBodyTemperatureState                      NewState;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_Thermometer_C_SetBodyState) == 0x000001, "Wrong alignment on WBP_Ingame_Thermometer_C_SetBodyState");
static_assert(sizeof(WBP_Ingame_Thermometer_C_SetBodyState) == 0x000002, "Wrong size on WBP_Ingame_Thermometer_C_SetBodyState");
static_assert(offsetof(WBP_Ingame_Thermometer_C_SetBodyState, NewState) == 0x000000, "Member 'WBP_Ingame_Thermometer_C_SetBodyState::NewState' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_SetBodyState, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'WBP_Ingame_Thermometer_C_SetBodyState::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WBP_Ingame_Thermometer.WBP_Ingame_Thermometer_C.SetRegistRate
// 0x0058 (0x0058 - 0x0000)
struct WBP_Ingame_Thermometer_C_SetRegistRate final
{
public:
	int32                                         HeatRegist;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ColdRegist;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x2];                                       // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36[0x2];                                       // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E[0x2];                                       // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 CallFunc_Array_Get_Item_1;                         // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_Thermometer_C_SetRegistRate) == 0x000008, "Wrong alignment on WBP_Ingame_Thermometer_C_SetRegistRate");
static_assert(sizeof(WBP_Ingame_Thermometer_C_SetRegistRate) == 0x000058, "Wrong size on WBP_Ingame_Thermometer_C_SetRegistRate");
static_assert(offsetof(WBP_Ingame_Thermometer_C_SetRegistRate, HeatRegist) == 0x000000, "Member 'WBP_Ingame_Thermometer_C_SetRegistRate::HeatRegist' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_SetRegistRate, ColdRegist) == 0x000004, "Member 'WBP_Ingame_Thermometer_C_SetRegistRate::ColdRegist' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_SetRegistRate, Temp_byte_Variable) == 0x000008, "Member 'WBP_Ingame_Thermometer_C_SetRegistRate::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_SetRegistRate, Temp_bool_Variable) == 0x000009, "Member 'WBP_Ingame_Thermometer_C_SetRegistRate::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_SetRegistRate, Temp_byte_Variable_1) == 0x00000A, "Member 'WBP_Ingame_Thermometer_C_SetRegistRate::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_SetRegistRate, Temp_byte_Variable_2) == 0x00000B, "Member 'WBP_Ingame_Thermometer_C_SetRegistRate::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_SetRegistRate, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'WBP_Ingame_Thermometer_C_SetRegistRate::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_SetRegistRate, Temp_byte_Variable_3) == 0x000010, "Member 'WBP_Ingame_Thermometer_C_SetRegistRate::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_SetRegistRate, CallFunc_Less_IntInt_ReturnValue) == 0x000011, "Member 'WBP_Ingame_Thermometer_C_SetRegistRate::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_SetRegistRate, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'WBP_Ingame_Thermometer_C_SetRegistRate::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_SetRegistRate, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'WBP_Ingame_Thermometer_C_SetRegistRate::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_SetRegistRate, Temp_int_Array_Index_Variable_1) == 0x00001C, "Member 'WBP_Ingame_Thermometer_C_SetRegistRate::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_SetRegistRate, CallFunc_Less_IntInt_ReturnValue_1) == 0x000020, "Member 'WBP_Ingame_Thermometer_C_SetRegistRate::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_SetRegistRate, CallFunc_Array_Get_Item) == 0x000028, "Member 'WBP_Ingame_Thermometer_C_SetRegistRate::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_SetRegistRate, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'WBP_Ingame_Thermometer_C_SetRegistRate::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_SetRegistRate, K2Node_Select_Default) == 0x000034, "Member 'WBP_Ingame_Thermometer_C_SetRegistRate::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_SetRegistRate, Temp_bool_Variable_1) == 0x000035, "Member 'WBP_Ingame_Thermometer_C_SetRegistRate::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_SetRegistRate, Temp_int_Loop_Counter_Variable_1) == 0x000038, "Member 'WBP_Ingame_Thermometer_C_SetRegistRate::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_SetRegistRate, K2Node_Select_Default_1) == 0x00003C, "Member 'WBP_Ingame_Thermometer_C_SetRegistRate::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_SetRegistRate, CallFunc_Less_IntInt_ReturnValue_2) == 0x00003D, "Member 'WBP_Ingame_Thermometer_C_SetRegistRate::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_SetRegistRate, CallFunc_Add_IntInt_ReturnValue_1) == 0x000040, "Member 'WBP_Ingame_Thermometer_C_SetRegistRate::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_SetRegistRate, CallFunc_Array_Length_ReturnValue_1) == 0x000044, "Member 'WBP_Ingame_Thermometer_C_SetRegistRate::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_SetRegistRate, CallFunc_Array_Get_Item_1) == 0x000048, "Member 'WBP_Ingame_Thermometer_C_SetRegistRate::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_SetRegistRate, CallFunc_Less_IntInt_ReturnValue_3) == 0x000050, "Member 'WBP_Ingame_Thermometer_C_SetRegistRate::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");

// Function WBP_Ingame_Thermometer.WBP_Ingame_Thermometer_C.SetTemperature
// 0x0004 (0x0004 - 0x0000)
struct WBP_Ingame_Thermometer_C_SetTemperature final
{
public:
	int32                                         NewTenperature;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_Thermometer_C_SetTemperature) == 0x000004, "Wrong alignment on WBP_Ingame_Thermometer_C_SetTemperature");
static_assert(sizeof(WBP_Ingame_Thermometer_C_SetTemperature) == 0x000004, "Wrong size on WBP_Ingame_Thermometer_C_SetTemperature");
static_assert(offsetof(WBP_Ingame_Thermometer_C_SetTemperature, NewTenperature) == 0x000000, "Member 'WBP_Ingame_Thermometer_C_SetTemperature::NewTenperature' has a wrong offset!");

// Function WBP_Ingame_Thermometer.WBP_Ingame_Thermometer_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_Ingame_Thermometer_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_Thermometer_C_Tick) == 0x000008, "Wrong alignment on WBP_Ingame_Thermometer_C_Tick");
static_assert(sizeof(WBP_Ingame_Thermometer_C_Tick) == 0x000048, "Wrong size on WBP_Ingame_Thermometer_C_Tick");
static_assert(offsetof(WBP_Ingame_Thermometer_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_Ingame_Thermometer_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Thermometer_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_Ingame_Thermometer_C_Tick::InDeltaTime' has a wrong offset!");

}

