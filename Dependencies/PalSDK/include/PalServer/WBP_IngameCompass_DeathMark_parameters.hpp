#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function WBP_IngameCompass_DeathMark.WBP_IngameCompass_DeathMark_C.SetDistanceText
// 0x00A8 (0x00A8 - 0x0000)
struct WBP_IngameCompass_DeathMark_C_SetDistanceText final
{
public:
	double                                        Length;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_DoubleToInt64_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_Int64ToText_ReturnValue;             // 0x0018(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0030(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0090(0x0018)()
};
static_assert(alignof(WBP_IngameCompass_DeathMark_C_SetDistanceText) == 0x000008, "Wrong alignment on WBP_IngameCompass_DeathMark_C_SetDistanceText");
static_assert(sizeof(WBP_IngameCompass_DeathMark_C_SetDistanceText) == 0x0000A8, "Wrong size on WBP_IngameCompass_DeathMark_C_SetDistanceText");
static_assert(offsetof(WBP_IngameCompass_DeathMark_C_SetDistanceText, Length) == 0x000000, "Member 'WBP_IngameCompass_DeathMark_C_SetDistanceText::Length' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_DeathMark_C_SetDistanceText, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000008, "Member 'WBP_IngameCompass_DeathMark_C_SetDistanceText::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_DeathMark_C_SetDistanceText, CallFunc_Conv_DoubleToInt64_ReturnValue) == 0x000010, "Member 'WBP_IngameCompass_DeathMark_C_SetDistanceText::CallFunc_Conv_DoubleToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_DeathMark_C_SetDistanceText, CallFunc_Conv_Int64ToText_ReturnValue) == 0x000018, "Member 'WBP_IngameCompass_DeathMark_C_SetDistanceText::CallFunc_Conv_Int64ToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_DeathMark_C_SetDistanceText, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'WBP_IngameCompass_DeathMark_C_SetDistanceText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_DeathMark_C_SetDistanceText, K2Node_MakeArray_Array) == 0x000080, "Member 'WBP_IngameCompass_DeathMark_C_SetDistanceText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_DeathMark_C_SetDistanceText, CallFunc_Format_ReturnValue) == 0x000090, "Member 'WBP_IngameCompass_DeathMark_C_SetDistanceText::CallFunc_Format_ReturnValue' has a wrong offset!");

}

