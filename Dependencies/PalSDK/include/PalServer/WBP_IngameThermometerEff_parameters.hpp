#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "SlateCore_structs.hpp"


namespace PalServer::Params
{

// Function WBP_IngameThermometerEff.WBP_IngameThermometerEff_C.AnmEvent_Effect
// 0x0004 (0x0004 - 0x0000)
struct WBP_IngameThermometerEff_C_AnmEvent_Effect final
{
public:
	int32                                         Temperanture;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameThermometerEff_C_AnmEvent_Effect) == 0x000004, "Wrong alignment on WBP_IngameThermometerEff_C_AnmEvent_Effect");
static_assert(sizeof(WBP_IngameThermometerEff_C_AnmEvent_Effect) == 0x000004, "Wrong size on WBP_IngameThermometerEff_C_AnmEvent_Effect");
static_assert(offsetof(WBP_IngameThermometerEff_C_AnmEvent_Effect, Temperanture) == 0x000000, "Member 'WBP_IngameThermometerEff_C_AnmEvent_Effect::Temperanture' has a wrong offset!");

// Function WBP_IngameThermometerEff.WBP_IngameThermometerEff_C.Calc Thermomater Anime Target Time
// 0x0050 (0x0050 - 0x0000)
struct WBP_IngameThermometerEff_C_Calc_Thermomater_Anime_Target_Time final
{
public:
	int32                                         TargetTenperature;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        TargetTime;                                        // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Abs_Int_ReturnValue;                      // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Min_ReturnValue;                          // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_OutRangeB_ImplicitCast;   // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameThermometerEff_C_Calc_Thermomater_Anime_Target_Time) == 0x000008, "Wrong alignment on WBP_IngameThermometerEff_C_Calc_Thermomater_Anime_Target_Time");
static_assert(sizeof(WBP_IngameThermometerEff_C_Calc_Thermomater_Anime_Target_Time) == 0x000050, "Wrong size on WBP_IngameThermometerEff_C_Calc_Thermomater_Anime_Target_Time");
static_assert(offsetof(WBP_IngameThermometerEff_C_Calc_Thermomater_Anime_Target_Time, TargetTenperature) == 0x000000, "Member 'WBP_IngameThermometerEff_C_Calc_Thermomater_Anime_Target_Time::TargetTenperature' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_Calc_Thermomater_Anime_Target_Time, TargetTime) == 0x000008, "Member 'WBP_IngameThermometerEff_C_Calc_Thermomater_Anime_Target_Time::TargetTime' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_Calc_Thermomater_Anime_Target_Time, CallFunc_Abs_Int_ReturnValue) == 0x000010, "Member 'WBP_IngameThermometerEff_C_Calc_Thermomater_Anime_Target_Time::CallFunc_Abs_Int_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_Calc_Thermomater_Anime_Target_Time, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000018, "Member 'WBP_IngameThermometerEff_C_Calc_Thermomater_Anime_Target_Time::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_Calc_Thermomater_Anime_Target_Time, CallFunc_Min_ReturnValue) == 0x000020, "Member 'WBP_IngameThermometerEff_C_Calc_Thermomater_Anime_Target_Time::CallFunc_Min_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_Calc_Thermomater_Anime_Target_Time, CallFunc_Max_ReturnValue) == 0x000024, "Member 'WBP_IngameThermometerEff_C_Calc_Thermomater_Anime_Target_Time::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_Calc_Thermomater_Anime_Target_Time, CallFunc_Conv_IntToDouble_ReturnValue_1) == 0x000028, "Member 'WBP_IngameThermometerEff_C_Calc_Thermomater_Anime_Target_Time::CallFunc_Conv_IntToDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_Calc_Thermomater_Anime_Target_Time, CallFunc_MapRangeClamped_ReturnValue) == 0x000030, "Member 'WBP_IngameThermometerEff_C_Calc_Thermomater_Anime_Target_Time::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_Calc_Thermomater_Anime_Target_Time, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000038, "Member 'WBP_IngameThermometerEff_C_Calc_Thermomater_Anime_Target_Time::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_Calc_Thermomater_Anime_Target_Time, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x000040, "Member 'WBP_IngameThermometerEff_C_Calc_Thermomater_Anime_Target_Time::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_Calc_Thermomater_Anime_Target_Time, CallFunc_MapRangeClamped_OutRangeB_ImplicitCast) == 0x000048, "Member 'WBP_IngameThermometerEff_C_Calc_Thermomater_Anime_Target_Time::CallFunc_MapRangeClamped_OutRangeB_ImplicitCast' has a wrong offset!");

// Function WBP_IngameThermometerEff.WBP_IngameThermometerEff_C.ExecuteUbergraph_WBP_IngameThermometerEff
// 0x0118 (0x0118 - 0x0000)
struct WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalBodyTemperatureState                      Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Temperanture;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Calc_Thermomater_Anime_Target_Time_TargetTime; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PauseAnimation_ReturnValue;               // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0068(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       K2Node_Select_Default;                             // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x3];                                       // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_PauseAnimation_ReturnValue_1;             // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_4;              // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_A_ImplicitCast;               // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PlayAnimation_StartAtTime_ImplicitCast;   // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1; // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetAnimationCurrentTime_InTime_ImplicitCast; // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PlayAnimation_StartAtTime_ImplicitCast_2; // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PlayAnimation_StartAtTime_ImplicitCast_3; // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10C[0x4];                                      // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff) == 0x000008, "Wrong alignment on WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff");
static_assert(sizeof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff) == 0x000118, "Wrong size on WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff");
static_assert(offsetof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff, EntryPoint) == 0x000000, "Member 'WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff, Temp_byte_Variable) == 0x000004, "Member 'WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff, Temp_object_Variable) == 0x000008, "Member 'WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff, K2Node_CustomEvent_Temperanture) == 0x000010, "Member 'WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff::K2Node_CustomEvent_Temperanture' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x000014, "Member 'WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff, CallFunc_Calc_Thermomater_Anime_Target_Time_TargetTime) == 0x000018, "Member 'WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff::CallFunc_Calc_Thermomater_Anime_Target_Time_TargetTime' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000020, "Member 'WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff, CallFunc_SelectFloat_ReturnValue) == 0x000028, "Member 'WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff, CallFunc_PlayAnimation_ReturnValue) == 0x000030, "Member 'WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff, CallFunc_PlayAnimation_ReturnValue_1) == 0x000038, "Member 'WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff, CallFunc_GetEndTime_ReturnValue) == 0x000040, "Member 'WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff, CallFunc_PlayAnimation_ReturnValue_2) == 0x000048, "Member 'WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000050, "Member 'WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff, CallFunc_PauseAnimation_ReturnValue) == 0x000058, "Member 'WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff::CallFunc_PauseAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff, CallFunc_PlayAnimation_ReturnValue_3) == 0x000060, "Member 'WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff, K2Node_Event_MyGeometry) == 0x000068, "Member 'WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff, K2Node_Event_InDeltaTime) == 0x0000A8, "Member 'WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0000B0, "Member 'WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x0000B8, "Member 'WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x0000C0, "Member 'WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000C8, "Member 'WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff, K2Node_Select_Default) == 0x0000D0, "Member 'WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff, CallFunc_IsValid_ReturnValue) == 0x0000D8, "Member 'WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff, CallFunc_PauseAnimation_ReturnValue_1) == 0x0000DC, "Member 'WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff::CallFunc_PauseAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff, CallFunc_PlayAnimation_ReturnValue_4) == 0x0000E0, "Member 'WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff::CallFunc_PlayAnimation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff, CallFunc_SelectFloat_A_ImplicitCast) == 0x0000E8, "Member 'WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff::CallFunc_SelectFloat_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff, CallFunc_PlayAnimation_StartAtTime_ImplicitCast) == 0x0000F0, "Member 'WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff::CallFunc_PlayAnimation_StartAtTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff, CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1) == 0x0000F4, "Member 'WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff::CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff, CallFunc_SetAnimationCurrentTime_InTime_ImplicitCast) == 0x0000F8, "Member 'WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff::CallFunc_SetAnimationCurrentTime_InTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff, CallFunc_PlayAnimation_StartAtTime_ImplicitCast_2) == 0x0000FC, "Member 'WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff::CallFunc_PlayAnimation_StartAtTime_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000100, "Member 'WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff, CallFunc_PlayAnimation_StartAtTime_ImplicitCast_3) == 0x000108, "Member 'WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff::CallFunc_PlayAnimation_StartAtTime_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x000110, "Member 'WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");

// Function WBP_IngameThermometerEff.WBP_IngameThermometerEff_C.PlayTemperatureSound
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_IngameThermometerEff_C_PlayTemperatureSound final
{
public:
	class UAkAudioEvent*                          Temp_object_Variable;                              // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Temp_object_Variable_1;                            // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Temp_object_Variable_2;                            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          Temp_object_Variable_3;                            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Temp_object_Variable_4;                            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Temp_object_Variable_5;                            // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Temp_object_Variable_6;                            // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Temp_object_Variable_7;                            // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalBodyTemperatureState                      Temp_byte_Variable;                                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          Temp_object_Variable_8;                            // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Temp_object_Variable_9;                            // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Temp_object_Variable_10;                           // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E[0x2];                                       // 0x006E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue;                // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          K2Node_Select_Default;                             // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          K2Node_Select_Default_1;                           // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          K2Node_Select_Default_2;                           // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameThermometerEff_C_PlayTemperatureSound) == 0x000008, "Wrong alignment on WBP_IngameThermometerEff_C_PlayTemperatureSound");
static_assert(sizeof(WBP_IngameThermometerEff_C_PlayTemperatureSound) == 0x0000A0, "Wrong size on WBP_IngameThermometerEff_C_PlayTemperatureSound");
static_assert(offsetof(WBP_IngameThermometerEff_C_PlayTemperatureSound, Temp_object_Variable) == 0x000000, "Member 'WBP_IngameThermometerEff_C_PlayTemperatureSound::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_PlayTemperatureSound, Temp_object_Variable_1) == 0x000008, "Member 'WBP_IngameThermometerEff_C_PlayTemperatureSound::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_PlayTemperatureSound, Temp_object_Variable_2) == 0x000010, "Member 'WBP_IngameThermometerEff_C_PlayTemperatureSound::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_PlayTemperatureSound, Temp_int_Variable) == 0x000018, "Member 'WBP_IngameThermometerEff_C_PlayTemperatureSound::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_PlayTemperatureSound, Temp_object_Variable_3) == 0x000020, "Member 'WBP_IngameThermometerEff_C_PlayTemperatureSound::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_PlayTemperatureSound, Temp_object_Variable_4) == 0x000028, "Member 'WBP_IngameThermometerEff_C_PlayTemperatureSound::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_PlayTemperatureSound, Temp_object_Variable_5) == 0x000030, "Member 'WBP_IngameThermometerEff_C_PlayTemperatureSound::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_PlayTemperatureSound, Temp_object_Variable_6) == 0x000038, "Member 'WBP_IngameThermometerEff_C_PlayTemperatureSound::Temp_object_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_PlayTemperatureSound, Temp_object_Variable_7) == 0x000040, "Member 'WBP_IngameThermometerEff_C_PlayTemperatureSound::Temp_object_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_PlayTemperatureSound, Temp_byte_Variable) == 0x000048, "Member 'WBP_IngameThermometerEff_C_PlayTemperatureSound::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_PlayTemperatureSound, Temp_object_Variable_8) == 0x000050, "Member 'WBP_IngameThermometerEff_C_PlayTemperatureSound::Temp_object_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_PlayTemperatureSound, Temp_object_Variable_9) == 0x000058, "Member 'WBP_IngameThermometerEff_C_PlayTemperatureSound::Temp_object_Variable_9' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_PlayTemperatureSound, Temp_object_Variable_10) == 0x000060, "Member 'WBP_IngameThermometerEff_C_PlayTemperatureSound::Temp_object_Variable_10' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_PlayTemperatureSound, Temp_int_Variable_1) == 0x000068, "Member 'WBP_IngameThermometerEff_C_PlayTemperatureSound::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_PlayTemperatureSound, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00006C, "Member 'WBP_IngameThermometerEff_C_PlayTemperatureSound::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_PlayTemperatureSound, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00006D, "Member 'WBP_IngameThermometerEff_C_PlayTemperatureSound::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_PlayTemperatureSound, CallFunc_GetHUDService_ReturnValue) == 0x000070, "Member 'WBP_IngameThermometerEff_C_PlayTemperatureSound::CallFunc_GetHUDService_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_PlayTemperatureSound, K2Node_Select_Default) == 0x000078, "Member 'WBP_IngameThermometerEff_C_PlayTemperatureSound::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_PlayTemperatureSound, CallFunc_Multiply_IntInt_ReturnValue) == 0x000080, "Member 'WBP_IngameThermometerEff_C_PlayTemperatureSound::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_PlayTemperatureSound, K2Node_Select_Default_1) == 0x000088, "Member 'WBP_IngameThermometerEff_C_PlayTemperatureSound::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_PlayTemperatureSound, K2Node_Select_Default_2) == 0x000090, "Member 'WBP_IngameThermometerEff_C_PlayTemperatureSound::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_PlayTemperatureSound, CallFunc_IsValid_ReturnValue) == 0x000098, "Member 'WBP_IngameThermometerEff_C_PlayTemperatureSound::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_IngameThermometerEff.WBP_IngameThermometerEff_C.SetTemperanture
// 0x0004 (0x0004 - 0x0000)
struct WBP_IngameThermometerEff_C_SetTemperanture final
{
public:
	int32                                         Temperanture;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameThermometerEff_C_SetTemperanture) == 0x000004, "Wrong alignment on WBP_IngameThermometerEff_C_SetTemperanture");
static_assert(sizeof(WBP_IngameThermometerEff_C_SetTemperanture) == 0x000004, "Wrong size on WBP_IngameThermometerEff_C_SetTemperanture");
static_assert(offsetof(WBP_IngameThermometerEff_C_SetTemperanture, Temperanture) == 0x000000, "Member 'WBP_IngameThermometerEff_C_SetTemperanture::Temperanture' has a wrong offset!");

// Function WBP_IngameThermometerEff.WBP_IngameThermometerEff_C.SetTemperantureBodyState
// 0x0003 (0x0003 - 0x0000)
struct WBP_IngameThermometerEff_C_SetTemperantureBodyState final
{
public:
	EPalBodyTemperatureState                      NewBodyState;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameThermometerEff_C_SetTemperantureBodyState) == 0x000001, "Wrong alignment on WBP_IngameThermometerEff_C_SetTemperantureBodyState");
static_assert(sizeof(WBP_IngameThermometerEff_C_SetTemperantureBodyState) == 0x000003, "Wrong size on WBP_IngameThermometerEff_C_SetTemperantureBodyState");
static_assert(offsetof(WBP_IngameThermometerEff_C_SetTemperantureBodyState, NewBodyState) == 0x000000, "Member 'WBP_IngameThermometerEff_C_SetTemperantureBodyState::NewBodyState' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_SetTemperantureBodyState, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'WBP_IngameThermometerEff_C_SetTemperantureBodyState::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_SetTemperantureBodyState, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000002, "Member 'WBP_IngameThermometerEff_C_SetTemperantureBodyState::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function WBP_IngameThermometerEff.WBP_IngameThermometerEff_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_IngameThermometerEff_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameThermometerEff_C_Tick) == 0x000008, "Wrong alignment on WBP_IngameThermometerEff_C_Tick");
static_assert(sizeof(WBP_IngameThermometerEff_C_Tick) == 0x000048, "Wrong size on WBP_IngameThermometerEff_C_Tick");
static_assert(offsetof(WBP_IngameThermometerEff_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_IngameThermometerEff_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_IngameThermometerEff_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_IngameThermometerEff_C_Tick::InDeltaTime' has a wrong offset!");

}

