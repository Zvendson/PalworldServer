#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function WBP_IngameCompass_CustomMarker.WBP_IngameCompass_CustomMarker_C.SetCustomMarkerTexture
// 0x0010 (0x0010 - 0x0000)
struct WBP_IngameCompass_CustomMarker_C_SetCustomMarkerTexture final
{
public:
	int32                                         IconType;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameCompass_CustomMarker_C_SetCustomMarkerTexture) == 0x000008, "Wrong alignment on WBP_IngameCompass_CustomMarker_C_SetCustomMarkerTexture");
static_assert(sizeof(WBP_IngameCompass_CustomMarker_C_SetCustomMarkerTexture) == 0x000010, "Wrong size on WBP_IngameCompass_CustomMarker_C_SetCustomMarkerTexture");
static_assert(offsetof(WBP_IngameCompass_CustomMarker_C_SetCustomMarkerTexture, IconType) == 0x000000, "Member 'WBP_IngameCompass_CustomMarker_C_SetCustomMarkerTexture::IconType' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_CustomMarker_C_SetCustomMarkerTexture, CallFunc_Array_Get_Item) == 0x000008, "Member 'WBP_IngameCompass_CustomMarker_C_SetCustomMarkerTexture::CallFunc_Array_Get_Item' has a wrong offset!");

// Function WBP_IngameCompass_CustomMarker.WBP_IngameCompass_CustomMarker_C.SetDistanceText
// 0x00A8 (0x00A8 - 0x0000)
struct WBP_IngameCompass_CustomMarker_C_SetDistanceText final
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
static_assert(alignof(WBP_IngameCompass_CustomMarker_C_SetDistanceText) == 0x000008, "Wrong alignment on WBP_IngameCompass_CustomMarker_C_SetDistanceText");
static_assert(sizeof(WBP_IngameCompass_CustomMarker_C_SetDistanceText) == 0x0000A8, "Wrong size on WBP_IngameCompass_CustomMarker_C_SetDistanceText");
static_assert(offsetof(WBP_IngameCompass_CustomMarker_C_SetDistanceText, Length) == 0x000000, "Member 'WBP_IngameCompass_CustomMarker_C_SetDistanceText::Length' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_CustomMarker_C_SetDistanceText, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000008, "Member 'WBP_IngameCompass_CustomMarker_C_SetDistanceText::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_CustomMarker_C_SetDistanceText, CallFunc_Conv_DoubleToInt64_ReturnValue) == 0x000010, "Member 'WBP_IngameCompass_CustomMarker_C_SetDistanceText::CallFunc_Conv_DoubleToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_CustomMarker_C_SetDistanceText, CallFunc_Conv_Int64ToText_ReturnValue) == 0x000018, "Member 'WBP_IngameCompass_CustomMarker_C_SetDistanceText::CallFunc_Conv_Int64ToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_CustomMarker_C_SetDistanceText, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'WBP_IngameCompass_CustomMarker_C_SetDistanceText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_CustomMarker_C_SetDistanceText, K2Node_MakeArray_Array) == 0x000080, "Member 'WBP_IngameCompass_CustomMarker_C_SetDistanceText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_CustomMarker_C_SetDistanceText, CallFunc_Format_ReturnValue) == 0x000090, "Member 'WBP_IngameCompass_CustomMarker_C_SetDistanceText::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WBP_IngameCompass_CustomMarker.WBP_IngameCompass_CustomMarker_C.UpdateDistance
// 0x0030 (0x0030 - 0x0000)
struct WBP_IngameCompass_CustomMarker_C_UpdateDistance final
{
public:
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Vector_Distance2D_ReturnValue;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameCompass_CustomMarker_C_UpdateDistance) == 0x000008, "Wrong alignment on WBP_IngameCompass_CustomMarker_C_UpdateDistance");
static_assert(sizeof(WBP_IngameCompass_CustomMarker_C_UpdateDistance) == 0x000030, "Wrong size on WBP_IngameCompass_CustomMarker_C_UpdateDistance");
static_assert(offsetof(WBP_IngameCompass_CustomMarker_C_UpdateDistance, CallFunc_GetPalmi_ReturnValue) == 0x000000, "Member 'WBP_IngameCompass_CustomMarker_C_UpdateDistance::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_CustomMarker_C_UpdateDistance, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_IngameCompass_CustomMarker_C_UpdateDistance::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_CustomMarker_C_UpdateDistance, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'WBP_IngameCompass_CustomMarker_C_UpdateDistance::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_CustomMarker_C_UpdateDistance, CallFunc_Vector_Distance2D_ReturnValue) == 0x000028, "Member 'WBP_IngameCompass_CustomMarker_C_UpdateDistance::CallFunc_Vector_Distance2D_ReturnValue' has a wrong offset!");

// Function WBP_IngameCompass_CustomMarker.WBP_IngameCompass_CustomMarker_C.UpdateVisibility
// 0x0050 (0x0050 - 0x0000)
struct WBP_IngameCompass_CustomMarker_C_UpdateVisibility final
{
public:
	bool                                          InDistance;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Vector_Distance2D_ReturnValue;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Less_DoubleDouble_B_ImplicitCast;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameCompass_CustomMarker_C_UpdateVisibility) == 0x000008, "Wrong alignment on WBP_IngameCompass_CustomMarker_C_UpdateVisibility");
static_assert(sizeof(WBP_IngameCompass_CustomMarker_C_UpdateVisibility) == 0x000050, "Wrong size on WBP_IngameCompass_CustomMarker_C_UpdateVisibility");
static_assert(offsetof(WBP_IngameCompass_CustomMarker_C_UpdateVisibility, InDistance) == 0x000000, "Member 'WBP_IngameCompass_CustomMarker_C_UpdateVisibility::InDistance' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_CustomMarker_C_UpdateVisibility, Temp_byte_Variable) == 0x000001, "Member 'WBP_IngameCompass_CustomMarker_C_UpdateVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_CustomMarker_C_UpdateVisibility, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_IngameCompass_CustomMarker_C_UpdateVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_CustomMarker_C_UpdateVisibility, CallFunc_GetPalmi_ReturnValue) == 0x000008, "Member 'WBP_IngameCompass_CustomMarker_C_UpdateVisibility::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_CustomMarker_C_UpdateVisibility, CallFunc_IsVisible_ReturnValue) == 0x000010, "Member 'WBP_IngameCompass_CustomMarker_C_UpdateVisibility::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_CustomMarker_C_UpdateVisibility, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'WBP_IngameCompass_CustomMarker_C_UpdateVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_CustomMarker_C_UpdateVisibility, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'WBP_IngameCompass_CustomMarker_C_UpdateVisibility::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_CustomMarker_C_UpdateVisibility, Temp_bool_Variable) == 0x000030, "Member 'WBP_IngameCompass_CustomMarker_C_UpdateVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_CustomMarker_C_UpdateVisibility, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000031, "Member 'WBP_IngameCompass_CustomMarker_C_UpdateVisibility::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_CustomMarker_C_UpdateVisibility, CallFunc_Vector_Distance2D_ReturnValue) == 0x000038, "Member 'WBP_IngameCompass_CustomMarker_C_UpdateVisibility::CallFunc_Vector_Distance2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_CustomMarker_C_UpdateVisibility, K2Node_Select_Default) == 0x000040, "Member 'WBP_IngameCompass_CustomMarker_C_UpdateVisibility::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_CustomMarker_C_UpdateVisibility, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000041, "Member 'WBP_IngameCompass_CustomMarker_C_UpdateVisibility::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameCompass_CustomMarker_C_UpdateVisibility, CallFunc_Less_DoubleDouble_B_ImplicitCast) == 0x000048, "Member 'WBP_IngameCompass_CustomMarker_C_UpdateVisibility::CallFunc_Less_DoubleDouble_B_ImplicitCast' has a wrong offset!");

}

