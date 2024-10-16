#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_Ingame_TimeZone.WBP_Ingame_TimeZone_C.ExecuteUbergraph_WBP_Ingame_TimeZone
// 0x0050 (0x0050 - 0x0000)
struct WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalTimeManager*                        CallFunc_GetTimeManager_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalTimeManager*                        CallFunc_GetTimeManager_ReturnValue_1;             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalOneDayTimeType                            CallFunc_GetCurrentDayTimeType_ReturnValue;        // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetDayTimePassRate_ReturnValue;           // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone) == 0x000008, "Wrong alignment on WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone");
static_assert(sizeof(WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone) == 0x000050, "Wrong size on WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone");
static_assert(offsetof(WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone, EntryPoint) == 0x000000, "Member 'WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone, Temp_bool_Variable) == 0x000004, "Member 'WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone, Temp_byte_Variable) == 0x000005, "Member 'WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone, Temp_byte_Variable_1) == 0x000006, "Member 'WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone, Temp_bool_Variable_1) == 0x000007, "Member 'WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone, Temp_byte_Variable_2) == 0x000008, "Member 'WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone, Temp_byte_Variable_3) == 0x000009, "Member 'WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone, CallFunc_GetTimeManager_ReturnValue) == 0x000010, "Member 'WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone::CallFunc_GetTimeManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone, CallFunc_GetTimeManager_ReturnValue_1) == 0x000028, "Member 'WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone::CallFunc_GetTimeManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone, CallFunc_GetCurrentDayTimeType_ReturnValue) == 0x000030, "Member 'WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone::CallFunc_GetCurrentDayTimeType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000038, "Member 'WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000040, "Member 'WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone, CallFunc_GetDayTimePassRate_ReturnValue) == 0x000044, "Member 'WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone::CallFunc_GetDayTimePassRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone, K2Node_Select_Default) == 0x000048, "Member 'WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone, K2Node_Select_Default_1) == 0x000049, "Member 'WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone::K2Node_Select_Default_1' has a wrong offset!");

}

