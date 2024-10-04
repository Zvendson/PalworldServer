#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "SunPosition_structs.hpp"


namespace PalServer::Params
{

// Function SunSky.SunSky_C.ExecuteUbergraph_SunSky
// 0x0040 (0x0040 - 0x0000)
struct SunSky_C_ExecuteUbergraph_SunSky final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SunSky_C_ExecuteUbergraph_SunSky) == 0x000008, "Wrong alignment on SunSky_C_ExecuteUbergraph_SunSky");
static_assert(sizeof(SunSky_C_ExecuteUbergraph_SunSky) == 0x000040, "Wrong size on SunSky_C_ExecuteUbergraph_SunSky");
static_assert(offsetof(SunSky_C_ExecuteUbergraph_SunSky, EntryPoint) == 0x000000, "Member 'SunSky_C_ExecuteUbergraph_SunSky::EntryPoint' has a wrong offset!");
static_assert(offsetof(SunSky_C_ExecuteUbergraph_SunSky, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000004, "Member 'SunSky_C_ExecuteUbergraph_SunSky::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SunSky_C_ExecuteUbergraph_SunSky, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000008, "Member 'SunSky_C_ExecuteUbergraph_SunSky::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SunSky_C_ExecuteUbergraph_SunSky, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000010, "Member 'SunSky_C_ExecuteUbergraph_SunSky::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(SunSky_C_ExecuteUbergraph_SunSky, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x000018, "Member 'SunSky_C_ExecuteUbergraph_SunSky::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SunSky_C_ExecuteUbergraph_SunSky, CallFunc_NotEqual_DoubleDouble_ReturnValue) == 0x000020, "Member 'SunSky_C_ExecuteUbergraph_SunSky::CallFunc_NotEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(SunSky_C_ExecuteUbergraph_SunSky, K2Node_Event_DeltaSeconds) == 0x000024, "Member 'SunSky_C_ExecuteUbergraph_SunSky::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(SunSky_C_ExecuteUbergraph_SunSky, K2Node_SwitchEnum_CmpSuccess) == 0x000028, "Member 'SunSky_C_ExecuteUbergraph_SunSky::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(SunSky_C_ExecuteUbergraph_SunSky, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000030, "Member 'SunSky_C_ExecuteUbergraph_SunSky::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SunSky_C_ExecuteUbergraph_SunSky, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000038, "Member 'SunSky_C_ExecuteUbergraph_SunSky::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");

// Function SunSky.SunSky_C.GetHMSFromSolarTime
// 0x00A8 (0x00A8 - 0x0000)
struct SunSky_C_GetHMSFromSolarTime final
{
public:
	double                                        SolarTime_0;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Hour;                                              // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Minute;                                            // 0x000C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Second;                                            // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ArbitrarySeconds;                                  // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ArbitraryTime;                                     // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TimeFloat;                                         // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue_1;             // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_2;      // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_2;                     // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue_2;             // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1;   // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SunSky_C_GetHMSFromSolarTime) == 0x000008, "Wrong alignment on SunSky_C_GetHMSFromSolarTime");
static_assert(sizeof(SunSky_C_GetHMSFromSolarTime) == 0x0000A8, "Wrong size on SunSky_C_GetHMSFromSolarTime");
static_assert(offsetof(SunSky_C_GetHMSFromSolarTime, SolarTime_0) == 0x000000, "Member 'SunSky_C_GetHMSFromSolarTime::SolarTime_0' has a wrong offset!");
static_assert(offsetof(SunSky_C_GetHMSFromSolarTime, Hour) == 0x000008, "Member 'SunSky_C_GetHMSFromSolarTime::Hour' has a wrong offset!");
static_assert(offsetof(SunSky_C_GetHMSFromSolarTime, Minute) == 0x00000C, "Member 'SunSky_C_GetHMSFromSolarTime::Minute' has a wrong offset!");
static_assert(offsetof(SunSky_C_GetHMSFromSolarTime, Second) == 0x000010, "Member 'SunSky_C_GetHMSFromSolarTime::Second' has a wrong offset!");
static_assert(offsetof(SunSky_C_GetHMSFromSolarTime, ArbitrarySeconds) == 0x000018, "Member 'SunSky_C_GetHMSFromSolarTime::ArbitrarySeconds' has a wrong offset!");
static_assert(offsetof(SunSky_C_GetHMSFromSolarTime, ArbitraryTime) == 0x000020, "Member 'SunSky_C_GetHMSFromSolarTime::ArbitraryTime' has a wrong offset!");
static_assert(offsetof(SunSky_C_GetHMSFromSolarTime, TimeFloat) == 0x000028, "Member 'SunSky_C_GetHMSFromSolarTime::TimeFloat' has a wrong offset!");
static_assert(offsetof(SunSky_C_GetHMSFromSolarTime, CallFunc_FTrunc_ReturnValue) == 0x000030, "Member 'SunSky_C_GetHMSFromSolarTime::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(SunSky_C_GetHMSFromSolarTime, CallFunc_Percent_IntInt_ReturnValue) == 0x000034, "Member 'SunSky_C_GetHMSFromSolarTime::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SunSky_C_GetHMSFromSolarTime, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000038, "Member 'SunSky_C_GetHMSFromSolarTime::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SunSky_C_GetHMSFromSolarTime, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x00003C, "Member 'SunSky_C_GetHMSFromSolarTime::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SunSky_C_GetHMSFromSolarTime, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000040, "Member 'SunSky_C_GetHMSFromSolarTime::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(SunSky_C_GetHMSFromSolarTime, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000048, "Member 'SunSky_C_GetHMSFromSolarTime::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SunSky_C_GetHMSFromSolarTime, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000050, "Member 'SunSky_C_GetHMSFromSolarTime::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SunSky_C_GetHMSFromSolarTime, CallFunc_FTrunc_ReturnValue_1) == 0x000058, "Member 'SunSky_C_GetHMSFromSolarTime::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SunSky_C_GetHMSFromSolarTime, CallFunc_Percent_IntInt_ReturnValue_1) == 0x00005C, "Member 'SunSky_C_GetHMSFromSolarTime::CallFunc_Percent_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SunSky_C_GetHMSFromSolarTime, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x000060, "Member 'SunSky_C_GetHMSFromSolarTime::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SunSky_C_GetHMSFromSolarTime, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000068, "Member 'SunSky_C_GetHMSFromSolarTime::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(SunSky_C_GetHMSFromSolarTime, CallFunc_Subtract_DoubleDouble_ReturnValue_2) == 0x000070, "Member 'SunSky_C_GetHMSFromSolarTime::CallFunc_Subtract_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SunSky_C_GetHMSFromSolarTime, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x000078, "Member 'SunSky_C_GetHMSFromSolarTime::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SunSky_C_GetHMSFromSolarTime, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000080, "Member 'SunSky_C_GetHMSFromSolarTime::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(SunSky_C_GetHMSFromSolarTime, CallFunc_FTrunc_ReturnValue_2) == 0x000088, "Member 'SunSky_C_GetHMSFromSolarTime::CallFunc_FTrunc_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SunSky_C_GetHMSFromSolarTime, CallFunc_Percent_IntInt_ReturnValue_2) == 0x00008C, "Member 'SunSky_C_GetHMSFromSolarTime::CallFunc_Percent_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SunSky_C_GetHMSFromSolarTime, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x000090, "Member 'SunSky_C_GetHMSFromSolarTime::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SunSky_C_GetHMSFromSolarTime, CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1) == 0x000098, "Member 'SunSky_C_GetHMSFromSolarTime::CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(SunSky_C_GetHMSFromSolarTime, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x0000A0, "Member 'SunSky_C_GetHMSFromSolarTime::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function SunSky.SunSky_C.IsDST
// 0x0048 (0x0048 - 0x0000)
struct SunSky_C_IsDST final
{
public:
	bool                                          DSTEnable;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DSTStartMonth_0;                                   // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DSTStartDay_0;                                     // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DSTEndMonth_0;                                     // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DSTEndDay_0;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DSTSwitchHour_0;                                   // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDST_0;                                           // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetHMSFromSolarTime_Hour;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetHMSFromSolarTime_Minute;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetHMSFromSolarTime_Second;               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_MakeDateTime_ReturnValue;                 // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_MakeDateTime_ReturnValue_1;               // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_MakeDateTime_ReturnValue_2;               // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DateTimeDateTime_ReturnValue;   // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DateTimeDateTime_ReturnValue; // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SunSky_C_IsDST) == 0x000008, "Wrong alignment on SunSky_C_IsDST");
static_assert(sizeof(SunSky_C_IsDST) == 0x000048, "Wrong size on SunSky_C_IsDST");
static_assert(offsetof(SunSky_C_IsDST, DSTEnable) == 0x000000, "Member 'SunSky_C_IsDST::DSTEnable' has a wrong offset!");
static_assert(offsetof(SunSky_C_IsDST, DSTStartMonth_0) == 0x000004, "Member 'SunSky_C_IsDST::DSTStartMonth_0' has a wrong offset!");
static_assert(offsetof(SunSky_C_IsDST, DSTStartDay_0) == 0x000008, "Member 'SunSky_C_IsDST::DSTStartDay_0' has a wrong offset!");
static_assert(offsetof(SunSky_C_IsDST, DSTEndMonth_0) == 0x00000C, "Member 'SunSky_C_IsDST::DSTEndMonth_0' has a wrong offset!");
static_assert(offsetof(SunSky_C_IsDST, DSTEndDay_0) == 0x000010, "Member 'SunSky_C_IsDST::DSTEndDay_0' has a wrong offset!");
static_assert(offsetof(SunSky_C_IsDST, DSTSwitchHour_0) == 0x000014, "Member 'SunSky_C_IsDST::DSTSwitchHour_0' has a wrong offset!");
static_assert(offsetof(SunSky_C_IsDST, IsDST_0) == 0x000018, "Member 'SunSky_C_IsDST::IsDST_0' has a wrong offset!");
static_assert(offsetof(SunSky_C_IsDST, CallFunc_GetHMSFromSolarTime_Hour) == 0x00001C, "Member 'SunSky_C_IsDST::CallFunc_GetHMSFromSolarTime_Hour' has a wrong offset!");
static_assert(offsetof(SunSky_C_IsDST, CallFunc_GetHMSFromSolarTime_Minute) == 0x000020, "Member 'SunSky_C_IsDST::CallFunc_GetHMSFromSolarTime_Minute' has a wrong offset!");
static_assert(offsetof(SunSky_C_IsDST, CallFunc_GetHMSFromSolarTime_Second) == 0x000024, "Member 'SunSky_C_IsDST::CallFunc_GetHMSFromSolarTime_Second' has a wrong offset!");
static_assert(offsetof(SunSky_C_IsDST, CallFunc_MakeDateTime_ReturnValue) == 0x000028, "Member 'SunSky_C_IsDST::CallFunc_MakeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(SunSky_C_IsDST, CallFunc_MakeDateTime_ReturnValue_1) == 0x000030, "Member 'SunSky_C_IsDST::CallFunc_MakeDateTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SunSky_C_IsDST, CallFunc_MakeDateTime_ReturnValue_2) == 0x000038, "Member 'SunSky_C_IsDST::CallFunc_MakeDateTime_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SunSky_C_IsDST, CallFunc_LessEqual_DateTimeDateTime_ReturnValue) == 0x000040, "Member 'SunSky_C_IsDST::CallFunc_LessEqual_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(SunSky_C_IsDST, CallFunc_GreaterEqual_DateTimeDateTime_ReturnValue) == 0x000041, "Member 'SunSky_C_IsDST::CallFunc_GreaterEqual_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(SunSky_C_IsDST, CallFunc_BooleanAND_ReturnValue) == 0x000042, "Member 'SunSky_C_IsDST::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SunSky_C_IsDST, CallFunc_BooleanAND_ReturnValue_1) == 0x000043, "Member 'SunSky_C_IsDST::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function SunSky.SunSky_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct SunSky_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SunSky_C_ReceiveTick) == 0x000004, "Wrong alignment on SunSky_C_ReceiveTick");
static_assert(sizeof(SunSky_C_ReceiveTick) == 0x000004, "Wrong size on SunSky_C_ReceiveTick");
static_assert(offsetof(SunSky_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'SunSky_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function SunSky.SunSky_C.UpdateSun
// 0x0290 (0x0290 - 0x0000)
struct SunSky_C_UpdateSun final
{
public:
	class ABP_Sky_Sphere_C*                       SkySphereObject;                                   // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetHMSFromSolarTime_Hour;                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetHMSFromSolarTime_Minute;               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetHMSFromSolarTime_Second;               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x0040(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDST_IsDST;                              // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_131[0x7];                                      // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x0138(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult_1;     // 0x0150(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FSunPositionData                       CallFunc_GetSunPosition_SunPositionData;           // 0x0238(0x0028)(NoDestructor)
	float                                         CallFunc_MakeRotator_Pitch_ImplicitCast;           // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast_1;           // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSunPosition_TimeZone_ImplicitCast;     // 0x026C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSunPosition_Longitude_ImplicitCast;    // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSunPosition_Latitude_ImplicitCast;     // 0x0274(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_Elevation_ImplicitCast;         // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_CorrectedElevation_ImplicitCast; // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_Azimuth_ImplicitCast;           // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SunSky_C_UpdateSun) == 0x000008, "Wrong alignment on SunSky_C_UpdateSun");
static_assert(sizeof(SunSky_C_UpdateSun) == 0x000290, "Wrong size on SunSky_C_UpdateSun");
static_assert(offsetof(SunSky_C_UpdateSun, SkySphereObject) == 0x000000, "Member 'SunSky_C_UpdateSun::SkySphereObject' has a wrong offset!");
static_assert(offsetof(SunSky_C_UpdateSun, CallFunc_GetHMSFromSolarTime_Hour) == 0x000008, "Member 'SunSky_C_UpdateSun::CallFunc_GetHMSFromSolarTime_Hour' has a wrong offset!");
static_assert(offsetof(SunSky_C_UpdateSun, CallFunc_GetHMSFromSolarTime_Minute) == 0x00000C, "Member 'SunSky_C_UpdateSun::CallFunc_GetHMSFromSolarTime_Minute' has a wrong offset!");
static_assert(offsetof(SunSky_C_UpdateSun, CallFunc_GetHMSFromSolarTime_Second) == 0x000010, "Member 'SunSky_C_UpdateSun::CallFunc_GetHMSFromSolarTime_Second' has a wrong offset!");
static_assert(offsetof(SunSky_C_UpdateSun, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'SunSky_C_UpdateSun::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SunSky_C_UpdateSun, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000018, "Member 'SunSky_C_UpdateSun::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(SunSky_C_UpdateSun, CallFunc_MakeRotator_ReturnValue) == 0x000020, "Member 'SunSky_C_UpdateSun::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(SunSky_C_UpdateSun, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'SunSky_C_UpdateSun::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SunSky_C_UpdateSun, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000040, "Member 'SunSky_C_UpdateSun::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(SunSky_C_UpdateSun, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x000128, "Member 'SunSky_C_UpdateSun::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SunSky_C_UpdateSun, CallFunc_IsDST_IsDST) == 0x000130, "Member 'SunSky_C_UpdateSun::CallFunc_IsDST_IsDST' has a wrong offset!");
static_assert(offsetof(SunSky_C_UpdateSun, CallFunc_MakeRotator_ReturnValue_1) == 0x000138, "Member 'SunSky_C_UpdateSun::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SunSky_C_UpdateSun, CallFunc_K2_SetWorldRotation_SweepHitResult_1) == 0x000150, "Member 'SunSky_C_UpdateSun::CallFunc_K2_SetWorldRotation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(SunSky_C_UpdateSun, CallFunc_GetSunPosition_SunPositionData) == 0x000238, "Member 'SunSky_C_UpdateSun::CallFunc_GetSunPosition_SunPositionData' has a wrong offset!");
static_assert(offsetof(SunSky_C_UpdateSun, CallFunc_MakeRotator_Pitch_ImplicitCast) == 0x000260, "Member 'SunSky_C_UpdateSun::CallFunc_MakeRotator_Pitch_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SunSky_C_UpdateSun, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x000264, "Member 'SunSky_C_UpdateSun::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SunSky_C_UpdateSun, CallFunc_MakeRotator_Yaw_ImplicitCast_1) == 0x000268, "Member 'SunSky_C_UpdateSun::CallFunc_MakeRotator_Yaw_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(SunSky_C_UpdateSun, CallFunc_GetSunPosition_TimeZone_ImplicitCast) == 0x00026C, "Member 'SunSky_C_UpdateSun::CallFunc_GetSunPosition_TimeZone_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SunSky_C_UpdateSun, CallFunc_GetSunPosition_Longitude_ImplicitCast) == 0x000270, "Member 'SunSky_C_UpdateSun::CallFunc_GetSunPosition_Longitude_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SunSky_C_UpdateSun, CallFunc_GetSunPosition_Latitude_ImplicitCast) == 0x000274, "Member 'SunSky_C_UpdateSun::CallFunc_GetSunPosition_Latitude_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SunSky_C_UpdateSun, K2Node_VariableSet_Elevation_ImplicitCast) == 0x000278, "Member 'SunSky_C_UpdateSun::K2Node_VariableSet_Elevation_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SunSky_C_UpdateSun, K2Node_VariableSet_CorrectedElevation_ImplicitCast) == 0x000280, "Member 'SunSky_C_UpdateSun::K2Node_VariableSet_CorrectedElevation_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SunSky_C_UpdateSun, K2Node_VariableSet_Azimuth_ImplicitCast) == 0x000288, "Member 'SunSky_C_UpdateSun::K2Node_VariableSet_Azimuth_ImplicitCast' has a wrong offset!");

}

