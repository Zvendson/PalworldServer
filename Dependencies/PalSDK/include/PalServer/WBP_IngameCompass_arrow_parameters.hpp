#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function WBP_IngameCompass_arrow.WBP_IngameCompass_arrow_C.ChangeBorderColor
// 0x0010 (0x0010 - 0x0000)
struct WBP_IngameCompass_arrow_C_ChangeBorderColor final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameCompass_arrow_C_ChangeBorderColor) == 0x000004, "Wrong alignment on WBP_IngameCompass_arrow_C_ChangeBorderColor");
static_assert(sizeof(WBP_IngameCompass_arrow_C_ChangeBorderColor) == 0x000010, "Wrong size on WBP_IngameCompass_arrow_C_ChangeBorderColor");
static_assert(offsetof(WBP_IngameCompass_arrow_C_ChangeBorderColor, Color) == 0x000000, "Member 'WBP_IngameCompass_arrow_C_ChangeBorderColor::Color' has a wrong offset!");

// Function WBP_IngameCompass_arrow.WBP_IngameCompass_arrow_C.ChangeBorderDrawType
// 0x01B0 (0x01B0 - 0x0000)
struct WBP_IngameCompass_arrow_C_ChangeBorderDrawType final
{
public:
	ESlateBrushDrawType                           DrawType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0xF];                                        // 0x0001(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_Copy_ReturnValue;                           // 0x0010(0x00D0)()
	struct FSlateBrush                            K2Node_SetFieldsInStruct_StructOut;                // 0x00E0(0x00D0)()
};
static_assert(alignof(WBP_IngameCompass_arrow_C_ChangeBorderDrawType) == 0x000010, "Wrong alignment on WBP_IngameCompass_arrow_C_ChangeBorderDrawType");
static_assert(sizeof(WBP_IngameCompass_arrow_C_ChangeBorderDrawType) == 0x0001B0, "Wrong size on WBP_IngameCompass_arrow_C_ChangeBorderDrawType");
static_assert(offsetof(WBP_IngameCompass_arrow_C_ChangeBorderDrawType, DrawType) == 0x000000, "Member 'WBP_IngameCompass_arrow_C_ChangeBorderDrawType::DrawType' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_arrow_C_ChangeBorderDrawType, K2Node_Copy_ReturnValue) == 0x000010, "Member 'WBP_IngameCompass_arrow_C_ChangeBorderDrawType::K2Node_Copy_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_arrow_C_ChangeBorderDrawType, K2Node_SetFieldsInStruct_StructOut) == 0x0000E0, "Member 'WBP_IngameCompass_arrow_C_ChangeBorderDrawType::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

// Function WBP_IngameCompass_arrow.WBP_IngameCompass_arrow_C.SetDistanceText
// 0x00A8 (0x00A8 - 0x0000)
struct WBP_IngameCompass_arrow_C_SetDistanceText final
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
static_assert(alignof(WBP_IngameCompass_arrow_C_SetDistanceText) == 0x000008, "Wrong alignment on WBP_IngameCompass_arrow_C_SetDistanceText");
static_assert(sizeof(WBP_IngameCompass_arrow_C_SetDistanceText) == 0x0000A8, "Wrong size on WBP_IngameCompass_arrow_C_SetDistanceText");
static_assert(offsetof(WBP_IngameCompass_arrow_C_SetDistanceText, Length) == 0x000000, "Member 'WBP_IngameCompass_arrow_C_SetDistanceText::Length' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_arrow_C_SetDistanceText, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000008, "Member 'WBP_IngameCompass_arrow_C_SetDistanceText::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_arrow_C_SetDistanceText, CallFunc_Conv_DoubleToInt64_ReturnValue) == 0x000010, "Member 'WBP_IngameCompass_arrow_C_SetDistanceText::CallFunc_Conv_DoubleToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_arrow_C_SetDistanceText, CallFunc_Conv_Int64ToText_ReturnValue) == 0x000018, "Member 'WBP_IngameCompass_arrow_C_SetDistanceText::CallFunc_Conv_Int64ToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_arrow_C_SetDistanceText, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'WBP_IngameCompass_arrow_C_SetDistanceText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_arrow_C_SetDistanceText, K2Node_MakeArray_Array) == 0x000080, "Member 'WBP_IngameCompass_arrow_C_SetDistanceText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_arrow_C_SetDistanceText, CallFunc_Format_ReturnValue) == 0x000090, "Member 'WBP_IngameCompass_arrow_C_SetDistanceText::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WBP_IngameCompass_arrow.WBP_IngameCompass_arrow_C.SetupTexture
// 0x0030 (0x0030 - 0x0000)
struct WBP_IngameCompass_arrow_C_SetupTexture final
{
public:
	TSoftObjectPtr<class UTexture2D>              SoftTexture;                                       // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameCompass_arrow_C_SetupTexture) == 0x000008, "Wrong alignment on WBP_IngameCompass_arrow_C_SetupTexture");
static_assert(sizeof(WBP_IngameCompass_arrow_C_SetupTexture) == 0x000030, "Wrong size on WBP_IngameCompass_arrow_C_SetupTexture");
static_assert(offsetof(WBP_IngameCompass_arrow_C_SetupTexture, SoftTexture) == 0x000000, "Member 'WBP_IngameCompass_arrow_C_SetupTexture::SoftTexture' has a wrong offset!");

}

