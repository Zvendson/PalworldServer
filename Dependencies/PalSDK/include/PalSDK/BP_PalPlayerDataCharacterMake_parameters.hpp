#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.CalcSubsurfaceColor
// 0x0090 (0x0090 - 0x0000)
struct BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor final
{
public:
	struct FLinearColor                           OriginalRGB;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SubsurfaceRGB;                                     // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_R;                             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_G;                             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_B;                             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_A;                             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1; // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Multiply_LinearColorLinearColor_ReturnValue; // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast_1; // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast_2; // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_R_ImplicitCast;                  // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_B_ImplicitCast;                  // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_G_ImplicitCast;                  // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor) == 0x000008, "Wrong alignment on BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor");
static_assert(sizeof(BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor) == 0x000090, "Wrong size on BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor, OriginalRGB) == 0x000000, "Member 'BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor::OriginalRGB' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor, SubsurfaceRGB) == 0x000010, "Member 'BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor::SubsurfaceRGB' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor, CallFunc_BreakColor_R) == 0x000020, "Member 'BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor::CallFunc_BreakColor_R' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor, CallFunc_BreakColor_G) == 0x000024, "Member 'BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor::CallFunc_BreakColor_G' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor, CallFunc_BreakColor_B) == 0x000028, "Member 'BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor::CallFunc_BreakColor_B' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor, CallFunc_BreakColor_A) == 0x00002C, "Member 'BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor::CallFunc_BreakColor_A' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue) == 0x000030, "Member 'BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1) == 0x000038, "Member 'BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2) == 0x000040, "Member 'BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor, K2Node_MakeStruct_LinearColor) == 0x000048, "Member 'BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor, CallFunc_Multiply_LinearColorLinearColor_ReturnValue) == 0x000058, "Member 'BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor::CallFunc_Multiply_LinearColorLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor, CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast) == 0x000068, "Member 'BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor::CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor, CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast_1) == 0x000070, "Member 'BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor::CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor, CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast_2) == 0x000078, "Member 'BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor::CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor, K2Node_MakeStruct_R_ImplicitCast) == 0x000080, "Member 'BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor::K2Node_MakeStruct_R_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor, K2Node_MakeStruct_B_ImplicitCast) == 0x000084, "Member 'BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor::K2Node_MakeStruct_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor, K2Node_MakeStruct_G_ImplicitCast) == 0x000088, "Member 'BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor::K2Node_MakeStruct_G_ImplicitCast' has a wrong offset!");

// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.ConvertMakeInfo_HSVToRGB
// 0x0488 (0x0488 - 0x0000)
struct BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_HSVToRGB final
{
public:
	struct FPalPlayerDataCharacterMakeInfo        MakeInfo;                                          // 0x0000(0x0150)(BlueprintVisible, BlueprintReadOnly, Parm)
	double                                        SVLimit;                                           // 0x0150(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalPlayerDataCharacterMakeInfo        ConvertedMakeInfo;                                 // 0x0158(0x0150)(Parm, OutParm)
	struct FLinearColor                           CallFunc_GetBodyShiftRGB_OutRGB;                   // 0x02A8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetEyeShiftRGB_OutRGB;                    // 0x02B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_RecalcRGB_OutRGB;                         // 0x02C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_RecalcRGB_OutRGB_1;                       // 0x02D8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_CalcSubsurfaceColor_SubsurfaceRGB;        // 0x02E8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetBrowShiftRGB_OutRGB;                   // 0x02F8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetHairShiftRGB_OutRGB;                   // 0x0308(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_RecalcRGB_OutRGB_2;                       // 0x0318(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_RecalcRGB_OutRGB_3;                       // 0x0328(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalPlayerDataCharacterMakeInfo        K2Node_MakeStruct_PalPlayerDataCharacterMakeInfo;  // 0x0338(0x0150)()
};
static_assert(alignof(BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_HSVToRGB) == 0x000008, "Wrong alignment on BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_HSVToRGB");
static_assert(sizeof(BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_HSVToRGB) == 0x000488, "Wrong size on BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_HSVToRGB");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_HSVToRGB, MakeInfo) == 0x000000, "Member 'BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_HSVToRGB::MakeInfo' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_HSVToRGB, SVLimit) == 0x000150, "Member 'BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_HSVToRGB::SVLimit' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_HSVToRGB, ConvertedMakeInfo) == 0x000158, "Member 'BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_HSVToRGB::ConvertedMakeInfo' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_HSVToRGB, CallFunc_GetBodyShiftRGB_OutRGB) == 0x0002A8, "Member 'BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_HSVToRGB::CallFunc_GetBodyShiftRGB_OutRGB' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_HSVToRGB, CallFunc_GetEyeShiftRGB_OutRGB) == 0x0002B8, "Member 'BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_HSVToRGB::CallFunc_GetEyeShiftRGB_OutRGB' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_HSVToRGB, CallFunc_RecalcRGB_OutRGB) == 0x0002C8, "Member 'BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_HSVToRGB::CallFunc_RecalcRGB_OutRGB' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_HSVToRGB, CallFunc_RecalcRGB_OutRGB_1) == 0x0002D8, "Member 'BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_HSVToRGB::CallFunc_RecalcRGB_OutRGB_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_HSVToRGB, CallFunc_CalcSubsurfaceColor_SubsurfaceRGB) == 0x0002E8, "Member 'BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_HSVToRGB::CallFunc_CalcSubsurfaceColor_SubsurfaceRGB' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_HSVToRGB, CallFunc_GetBrowShiftRGB_OutRGB) == 0x0002F8, "Member 'BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_HSVToRGB::CallFunc_GetBrowShiftRGB_OutRGB' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_HSVToRGB, CallFunc_GetHairShiftRGB_OutRGB) == 0x000308, "Member 'BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_HSVToRGB::CallFunc_GetHairShiftRGB_OutRGB' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_HSVToRGB, CallFunc_RecalcRGB_OutRGB_2) == 0x000318, "Member 'BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_HSVToRGB::CallFunc_RecalcRGB_OutRGB_2' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_HSVToRGB, CallFunc_RecalcRGB_OutRGB_3) == 0x000328, "Member 'BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_HSVToRGB::CallFunc_RecalcRGB_OutRGB_3' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_HSVToRGB, K2Node_MakeStruct_PalPlayerDataCharacterMakeInfo) == 0x000338, "Member 'BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_HSVToRGB::K2Node_MakeStruct_PalPlayerDataCharacterMakeInfo' has a wrong offset!");

// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.ConvertMakeInfo_RGBToHSV
// 0x04C8 (0x04C8 - 0x0000)
struct BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV final
{
public:
	struct FPalPlayerDataCharacterMakeInfo        MakeInfo;                                          // 0x0000(0x0150)(BlueprintVisible, BlueprintReadOnly, Parm)
	double                                        SVLimitValur;                                      // 0x0150(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalPlayerDataCharacterMakeInfo        ConvertedMakeInfo;                                 // 0x0158(0x0150)(Parm, OutParm)
	struct FLinearColor                           CallFunc_GetBodyShiftRGB_OutRGB;                   // 0x02A8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_RGBToHSV_OutHSV;                          // 0x02B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_CalcSubsurfaceColor_SubsurfaceRGB;        // 0x02C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_RGBToHSV_OutHSV_1;                        // 0x02D8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_RGBToHSV_OutHSV_2;                        // 0x02E8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_RecalcHSV_OutHSV;                         // 0x02F8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_RGBToHSV_OutHSV_3;                        // 0x0308(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetHairShiftRGB_OutRGB;                   // 0x0318(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetEyeShiftRGB_OutRGB;                    // 0x0328(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_RecalcHSV_OutHSV_1;                       // 0x0338(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_RecalcHSV_OutHSV_2;                       // 0x0348(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetBrowShiftRGB_OutRGB;                   // 0x0358(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_RecalcHSV_OutHSV_3;                       // 0x0368(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalPlayerDataCharacterMakeInfo        K2Node_MakeStruct_PalPlayerDataCharacterMakeInfo;  // 0x0378(0x0150)()
};
static_assert(alignof(BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV) == 0x000008, "Wrong alignment on BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV");
static_assert(sizeof(BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV) == 0x0004C8, "Wrong size on BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV, MakeInfo) == 0x000000, "Member 'BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV::MakeInfo' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV, SVLimitValur) == 0x000150, "Member 'BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV::SVLimitValur' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV, ConvertedMakeInfo) == 0x000158, "Member 'BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV::ConvertedMakeInfo' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV, CallFunc_GetBodyShiftRGB_OutRGB) == 0x0002A8, "Member 'BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV::CallFunc_GetBodyShiftRGB_OutRGB' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV, CallFunc_RGBToHSV_OutHSV) == 0x0002B8, "Member 'BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV::CallFunc_RGBToHSV_OutHSV' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV, CallFunc_CalcSubsurfaceColor_SubsurfaceRGB) == 0x0002C8, "Member 'BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV::CallFunc_CalcSubsurfaceColor_SubsurfaceRGB' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV, CallFunc_RGBToHSV_OutHSV_1) == 0x0002D8, "Member 'BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV::CallFunc_RGBToHSV_OutHSV_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV, CallFunc_RGBToHSV_OutHSV_2) == 0x0002E8, "Member 'BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV::CallFunc_RGBToHSV_OutHSV_2' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV, CallFunc_RecalcHSV_OutHSV) == 0x0002F8, "Member 'BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV::CallFunc_RecalcHSV_OutHSV' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV, CallFunc_RGBToHSV_OutHSV_3) == 0x000308, "Member 'BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV::CallFunc_RGBToHSV_OutHSV_3' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV, CallFunc_GetHairShiftRGB_OutRGB) == 0x000318, "Member 'BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV::CallFunc_GetHairShiftRGB_OutRGB' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV, CallFunc_GetEyeShiftRGB_OutRGB) == 0x000328, "Member 'BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV::CallFunc_GetEyeShiftRGB_OutRGB' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV, CallFunc_RecalcHSV_OutHSV_1) == 0x000338, "Member 'BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV::CallFunc_RecalcHSV_OutHSV_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV, CallFunc_RecalcHSV_OutHSV_2) == 0x000348, "Member 'BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV::CallFunc_RecalcHSV_OutHSV_2' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV, CallFunc_GetBrowShiftRGB_OutRGB) == 0x000358, "Member 'BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV::CallFunc_GetBrowShiftRGB_OutRGB' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV, CallFunc_RecalcHSV_OutHSV_3) == 0x000368, "Member 'BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV::CallFunc_RecalcHSV_OutHSV_3' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV, K2Node_MakeStruct_PalPlayerDataCharacterMakeInfo) == 0x000378, "Member 'BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV::K2Node_MakeStruct_PalPlayerDataCharacterMakeInfo' has a wrong offset!");

// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.GetBodyShiftRGB
// 0x01B0 (0x01B0 - 0x0000)
struct BP_PalPlayerDataCharacterMake_C_GetBodyShiftRGB final
{
public:
	class FName                                   BodyMeshName;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           OutRGB;                                            // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalCharacterCreationMeshPresetDataRow CallFunc_GetDataTableRowFromName_OutRow;           // 0x0018(0x0108)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0128(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0178(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0188(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerDataCharacterMake_C_GetBodyShiftRGB) == 0x000008, "Wrong alignment on BP_PalPlayerDataCharacterMake_C_GetBodyShiftRGB");
static_assert(sizeof(BP_PalPlayerDataCharacterMake_C_GetBodyShiftRGB) == 0x0001B0, "Wrong size on BP_PalPlayerDataCharacterMake_C_GetBodyShiftRGB");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetBodyShiftRGB, BodyMeshName) == 0x000000, "Member 'BP_PalPlayerDataCharacterMake_C_GetBodyShiftRGB::BodyMeshName' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetBodyShiftRGB, OutRGB) == 0x000008, "Member 'BP_PalPlayerDataCharacterMake_C_GetBodyShiftRGB::OutRGB' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetBodyShiftRGB, CallFunc_GetDataTableRowFromName_OutRow) == 0x000018, "Member 'BP_PalPlayerDataCharacterMake_C_GetBodyShiftRGB::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetBodyShiftRGB, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000120, "Member 'BP_PalPlayerDataCharacterMake_C_GetBodyShiftRGB::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetBodyShiftRGB, K2Node_MakeStruct_FormatArgumentData) == 0x000128, "Member 'BP_PalPlayerDataCharacterMake_C_GetBodyShiftRGB::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetBodyShiftRGB, K2Node_MakeArray_Array) == 0x000178, "Member 'BP_PalPlayerDataCharacterMake_C_GetBodyShiftRGB::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetBodyShiftRGB, CallFunc_Format_ReturnValue) == 0x000188, "Member 'BP_PalPlayerDataCharacterMake_C_GetBodyShiftRGB::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetBodyShiftRGB, CallFunc_Conv_TextToString_ReturnValue) == 0x0001A0, "Member 'BP_PalPlayerDataCharacterMake_C_GetBodyShiftRGB::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.GetBrowShiftRGB
// 0x01B0 (0x01B0 - 0x0000)
struct BP_PalPlayerDataCharacterMake_C_GetBrowShiftRGB final
{
public:
	class FName                                   HairMeshName;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           OutRGB;                                            // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalCharacterCreationMeshPresetDataRow CallFunc_GetDataTableRowFromName_OutRow;           // 0x0018(0x0108)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0128(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0178(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0188(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerDataCharacterMake_C_GetBrowShiftRGB) == 0x000008, "Wrong alignment on BP_PalPlayerDataCharacterMake_C_GetBrowShiftRGB");
static_assert(sizeof(BP_PalPlayerDataCharacterMake_C_GetBrowShiftRGB) == 0x0001B0, "Wrong size on BP_PalPlayerDataCharacterMake_C_GetBrowShiftRGB");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetBrowShiftRGB, HairMeshName) == 0x000000, "Member 'BP_PalPlayerDataCharacterMake_C_GetBrowShiftRGB::HairMeshName' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetBrowShiftRGB, OutRGB) == 0x000008, "Member 'BP_PalPlayerDataCharacterMake_C_GetBrowShiftRGB::OutRGB' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetBrowShiftRGB, CallFunc_GetDataTableRowFromName_OutRow) == 0x000018, "Member 'BP_PalPlayerDataCharacterMake_C_GetBrowShiftRGB::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetBrowShiftRGB, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000120, "Member 'BP_PalPlayerDataCharacterMake_C_GetBrowShiftRGB::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetBrowShiftRGB, K2Node_MakeStruct_FormatArgumentData) == 0x000128, "Member 'BP_PalPlayerDataCharacterMake_C_GetBrowShiftRGB::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetBrowShiftRGB, K2Node_MakeArray_Array) == 0x000178, "Member 'BP_PalPlayerDataCharacterMake_C_GetBrowShiftRGB::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetBrowShiftRGB, CallFunc_Format_ReturnValue) == 0x000188, "Member 'BP_PalPlayerDataCharacterMake_C_GetBrowShiftRGB::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetBrowShiftRGB, CallFunc_Conv_TextToString_ReturnValue) == 0x0001A0, "Member 'BP_PalPlayerDataCharacterMake_C_GetBrowShiftRGB::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.GetEyeShiftRGB
// 0x02C8 (0x02C8 - 0x0000)
struct BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB final
{
public:
	class FName                                   HeadMeshName;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   EyeMaterialName;                                   // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           OutRGB;                                            // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0020(0x0050)(HasGetValueTypeHash)
	struct FPalCharacterCreationEyeMaterialDataRow CallFunc_GetDataTableRowFromName_OutRow;           // 0x0070(0x0078)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00F0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0100(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalCharacterCreationMeshPresetDataRow CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x0130(0x0108)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_239[0x7];                                      // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0240(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0290(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x02A0(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x02B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB) == 0x000008, "Wrong alignment on BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB");
static_assert(sizeof(BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB) == 0x0002C8, "Wrong size on BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB, HeadMeshName) == 0x000000, "Member 'BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB::HeadMeshName' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB, EyeMaterialName) == 0x000008, "Member 'BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB::EyeMaterialName' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB, OutRGB) == 0x000010, "Member 'BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB::OutRGB' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB, K2Node_MakeStruct_FormatArgumentData) == 0x000020, "Member 'BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB, CallFunc_GetDataTableRowFromName_OutRow) == 0x000070, "Member 'BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000E8, "Member 'BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB, K2Node_MakeArray_Array) == 0x0000F0, "Member 'BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB, CallFunc_Format_ReturnValue) == 0x000100, "Member 'BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB, CallFunc_Conv_TextToString_ReturnValue) == 0x000118, "Member 'BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB, CallFunc_NotEqual_NameName_ReturnValue) == 0x000128, "Member 'BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x000130, "Member 'BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x000238, "Member 'BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB, K2Node_MakeStruct_FormatArgumentData_1) == 0x000240, "Member 'BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB, K2Node_MakeArray_Array_1) == 0x000290, "Member 'BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB, CallFunc_Format_ReturnValue_1) == 0x0002A0, "Member 'BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB, CallFunc_Conv_TextToString_ReturnValue_1) == 0x0002B8, "Member 'BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");

// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.GetHairShiftRGB
// 0x01B0 (0x01B0 - 0x0000)
struct BP_PalPlayerDataCharacterMake_C_GetHairShiftRGB final
{
public:
	class FName                                   HairMeshName;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           OutRGB;                                            // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalCharacterCreationMeshPresetDataRow CallFunc_GetDataTableRowFromName_OutRow;           // 0x0018(0x0108)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0128(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0178(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0188(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerDataCharacterMake_C_GetHairShiftRGB) == 0x000008, "Wrong alignment on BP_PalPlayerDataCharacterMake_C_GetHairShiftRGB");
static_assert(sizeof(BP_PalPlayerDataCharacterMake_C_GetHairShiftRGB) == 0x0001B0, "Wrong size on BP_PalPlayerDataCharacterMake_C_GetHairShiftRGB");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetHairShiftRGB, HairMeshName) == 0x000000, "Member 'BP_PalPlayerDataCharacterMake_C_GetHairShiftRGB::HairMeshName' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetHairShiftRGB, OutRGB) == 0x000008, "Member 'BP_PalPlayerDataCharacterMake_C_GetHairShiftRGB::OutRGB' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetHairShiftRGB, CallFunc_GetDataTableRowFromName_OutRow) == 0x000018, "Member 'BP_PalPlayerDataCharacterMake_C_GetHairShiftRGB::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetHairShiftRGB, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000120, "Member 'BP_PalPlayerDataCharacterMake_C_GetHairShiftRGB::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetHairShiftRGB, K2Node_MakeStruct_FormatArgumentData) == 0x000128, "Member 'BP_PalPlayerDataCharacterMake_C_GetHairShiftRGB::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetHairShiftRGB, K2Node_MakeArray_Array) == 0x000178, "Member 'BP_PalPlayerDataCharacterMake_C_GetHairShiftRGB::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetHairShiftRGB, CallFunc_Format_ReturnValue) == 0x000188, "Member 'BP_PalPlayerDataCharacterMake_C_GetHairShiftRGB::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetHairShiftRGB, CallFunc_Conv_TextToString_ReturnValue) == 0x0001A0, "Member 'BP_PalPlayerDataCharacterMake_C_GetHairShiftRGB::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.GetOriginalPresetMakeInfo
// 0x04D8 (0x04D8 - 0x0000)
struct BP_PalPlayerDataCharacterMake_C_GetOriginalPresetMakeInfo final
{
public:
	class FName                                   PresetName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalPlayerDataCharacterMakeInfo        OutMakeInfo;                                       // 0x0008(0x0150)(Parm, OutParm)
	struct FPalPlayerDataCharacterMakeInfo        K2Node_MakeStruct_PalPlayerDataCharacterMakeInfo;  // 0x0158(0x0150)()
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x02A8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x02C0(0x0050)(HasGetValueTypeHash)
	struct FPalCharacterCreationPresetDataRow     CallFunc_GetDataTableRowFromName_OutRow;           // 0x0310(0x0188)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0498(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_499[0x7];                                      // 0x0499(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x04A0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x04B0(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x04C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerDataCharacterMake_C_GetOriginalPresetMakeInfo) == 0x000008, "Wrong alignment on BP_PalPlayerDataCharacterMake_C_GetOriginalPresetMakeInfo");
static_assert(sizeof(BP_PalPlayerDataCharacterMake_C_GetOriginalPresetMakeInfo) == 0x0004D8, "Wrong size on BP_PalPlayerDataCharacterMake_C_GetOriginalPresetMakeInfo");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetOriginalPresetMakeInfo, PresetName) == 0x000000, "Member 'BP_PalPlayerDataCharacterMake_C_GetOriginalPresetMakeInfo::PresetName' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetOriginalPresetMakeInfo, OutMakeInfo) == 0x000008, "Member 'BP_PalPlayerDataCharacterMake_C_GetOriginalPresetMakeInfo::OutMakeInfo' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetOriginalPresetMakeInfo, K2Node_MakeStruct_PalPlayerDataCharacterMakeInfo) == 0x000158, "Member 'BP_PalPlayerDataCharacterMake_C_GetOriginalPresetMakeInfo::K2Node_MakeStruct_PalPlayerDataCharacterMakeInfo' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetOriginalPresetMakeInfo, CallFunc_Conv_NameToText_ReturnValue) == 0x0002A8, "Member 'BP_PalPlayerDataCharacterMake_C_GetOriginalPresetMakeInfo::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetOriginalPresetMakeInfo, K2Node_MakeStruct_FormatArgumentData) == 0x0002C0, "Member 'BP_PalPlayerDataCharacterMake_C_GetOriginalPresetMakeInfo::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetOriginalPresetMakeInfo, CallFunc_GetDataTableRowFromName_OutRow) == 0x000310, "Member 'BP_PalPlayerDataCharacterMake_C_GetOriginalPresetMakeInfo::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetOriginalPresetMakeInfo, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000498, "Member 'BP_PalPlayerDataCharacterMake_C_GetOriginalPresetMakeInfo::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetOriginalPresetMakeInfo, K2Node_MakeArray_Array) == 0x0004A0, "Member 'BP_PalPlayerDataCharacterMake_C_GetOriginalPresetMakeInfo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetOriginalPresetMakeInfo, CallFunc_Format_ReturnValue) == 0x0004B0, "Member 'BP_PalPlayerDataCharacterMake_C_GetOriginalPresetMakeInfo::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetOriginalPresetMakeInfo, CallFunc_Conv_TextToString_ReturnValue) == 0x0004C8, "Member 'BP_PalPlayerDataCharacterMake_C_GetOriginalPresetMakeInfo::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.GetPresetMakeInfo
// 0x0418 (0x0418 - 0x0000)
struct BP_PalPlayerDataCharacterMake_C_GetPresetMakeInfo final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   PresetName;                                        // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalPlayerDataCharacterMakeInfo        OutMakeInfo;                                       // 0x0010(0x0150)(Parm, OutParm)
	struct FPalPlayerDataCharacterMakeInfo        CallFunc_GetOriginalPresetMakeInfo_OutMakeInfo;    // 0x0160(0x0150)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B1[0x7];                                      // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x02B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalPlayerDataCharacterMakeInfo        CallFunc_ConvertMakeInfo_RGBToHSV_ConvertedMakeInfo; // 0x02C0(0x0150)()
	double                                        CallFunc_ConvertMakeInfo_RGBToHSV_SVLimitValur_ImplicitCast; // 0x0410(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerDataCharacterMake_C_GetPresetMakeInfo) == 0x000008, "Wrong alignment on BP_PalPlayerDataCharacterMake_C_GetPresetMakeInfo");
static_assert(sizeof(BP_PalPlayerDataCharacterMake_C_GetPresetMakeInfo) == 0x000418, "Wrong size on BP_PalPlayerDataCharacterMake_C_GetPresetMakeInfo");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetPresetMakeInfo, WorldContextObject) == 0x000000, "Member 'BP_PalPlayerDataCharacterMake_C_GetPresetMakeInfo::WorldContextObject' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetPresetMakeInfo, PresetName) == 0x000008, "Member 'BP_PalPlayerDataCharacterMake_C_GetPresetMakeInfo::PresetName' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetPresetMakeInfo, OutMakeInfo) == 0x000010, "Member 'BP_PalPlayerDataCharacterMake_C_GetPresetMakeInfo::OutMakeInfo' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetPresetMakeInfo, CallFunc_GetOriginalPresetMakeInfo_OutMakeInfo) == 0x000160, "Member 'BP_PalPlayerDataCharacterMake_C_GetPresetMakeInfo::CallFunc_GetOriginalPresetMakeInfo_OutMakeInfo' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetPresetMakeInfo, CallFunc_IsValid_ReturnValue) == 0x0002B0, "Member 'BP_PalPlayerDataCharacterMake_C_GetPresetMakeInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetPresetMakeInfo, CallFunc_GetGameSetting_ReturnValue) == 0x0002B8, "Member 'BP_PalPlayerDataCharacterMake_C_GetPresetMakeInfo::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetPresetMakeInfo, CallFunc_ConvertMakeInfo_RGBToHSV_ConvertedMakeInfo) == 0x0002C0, "Member 'BP_PalPlayerDataCharacterMake_C_GetPresetMakeInfo::CallFunc_ConvertMakeInfo_RGBToHSV_ConvertedMakeInfo' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetPresetMakeInfo, CallFunc_ConvertMakeInfo_RGBToHSV_SVLimitValur_ImplicitCast) == 0x000410, "Member 'BP_PalPlayerDataCharacterMake_C_GetPresetMakeInfo::CallFunc_ConvertMakeInfo_RGBToHSV_SVLimitValur_ImplicitCast' has a wrong offset!");

// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.RecalcHSV
// 0x00C8 (0x00C8 - 0x0000)
struct BP_PalPlayerDataCharacterMake_C_RecalcHSV final
{
public:
	struct FLinearColor                           BaseHSV;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ShiftRGB;                                          // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SVLimit;                                           // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           OutHSV;                                            // 0x0028(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_R;                             // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_G;                             // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_B;                             // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_A;                             // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_RGBLinearToHSV_ReturnValue;               // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_R_1;                           // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_G_1;                           // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_B_1;                           // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_A_1;                           // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_B_ImplicitCast;                  // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_G_ImplicitCast;                  // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_R_ImplicitCast;                  // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerDataCharacterMake_C_RecalcHSV) == 0x000008, "Wrong alignment on BP_PalPlayerDataCharacterMake_C_RecalcHSV");
static_assert(sizeof(BP_PalPlayerDataCharacterMake_C_RecalcHSV) == 0x0000C8, "Wrong size on BP_PalPlayerDataCharacterMake_C_RecalcHSV");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcHSV, BaseHSV) == 0x000000, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcHSV::BaseHSV' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcHSV, ShiftRGB) == 0x000010, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcHSV::ShiftRGB' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcHSV, SVLimit) == 0x000020, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcHSV::SVLimit' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcHSV, OutHSV) == 0x000028, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcHSV::OutHSV' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcHSV, CallFunc_BreakColor_R) == 0x000038, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcHSV::CallFunc_BreakColor_R' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcHSV, CallFunc_BreakColor_G) == 0x00003C, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcHSV::CallFunc_BreakColor_G' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcHSV, CallFunc_BreakColor_B) == 0x000040, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcHSV::CallFunc_BreakColor_B' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcHSV, CallFunc_BreakColor_A) == 0x000044, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcHSV::CallFunc_BreakColor_A' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcHSV, CallFunc_RGBLinearToHSV_ReturnValue) == 0x000048, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcHSV::CallFunc_RGBLinearToHSV_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcHSV, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000058, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcHSV::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcHSV, CallFunc_BreakColor_R_1) == 0x000060, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcHSV::CallFunc_BreakColor_R_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcHSV, CallFunc_BreakColor_G_1) == 0x000064, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcHSV::CallFunc_BreakColor_G_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcHSV, CallFunc_BreakColor_B_1) == 0x000068, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcHSV::CallFunc_BreakColor_B_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcHSV, CallFunc_BreakColor_A_1) == 0x00006C, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcHSV::CallFunc_BreakColor_A_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcHSV, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000070, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcHSV::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcHSV, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000078, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcHSV::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcHSV, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000080, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcHSV::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcHSV, K2Node_MakeStruct_LinearColor) == 0x000088, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcHSV::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcHSV, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x000098, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcHSV::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcHSV, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0000A0, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcHSV::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcHSV, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1) == 0x0000A8, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcHSV::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcHSV, K2Node_MakeStruct_B_ImplicitCast) == 0x0000B0, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcHSV::K2Node_MakeStruct_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcHSV, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x0000B8, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcHSV::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcHSV, K2Node_MakeStruct_G_ImplicitCast) == 0x0000C0, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcHSV::K2Node_MakeStruct_G_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcHSV, K2Node_MakeStruct_R_ImplicitCast) == 0x0000C4, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcHSV::K2Node_MakeStruct_R_ImplicitCast' has a wrong offset!");

// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.RecalcRGB
// 0x00F0 (0x00F0 - 0x0000)
struct BP_PalPlayerDataCharacterMake_C_RecalcRGB final
{
public:
	struct FLinearColor                           InHSV;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ShiftRGB;                                          // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SVLimit;                                           // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           OutRGB;                                            // 0x0028(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_R;                             // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_G;                             // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_B;                             // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_A;                             // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_RGBLinearToHSV_ReturnValue;               // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_R_1;                           // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_G_1;                           // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_B_1;                           // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_A_1;                           // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_2;        // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_HSVToRGBLinear_ReturnValue;               // 0x00A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;                   // 0x00B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast_1;     // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_B_ImplicitCast;                  // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast_2;     // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_G_ImplicitCast;                  // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_R_ImplicitCast;                  // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerDataCharacterMake_C_RecalcRGB) == 0x000008, "Wrong alignment on BP_PalPlayerDataCharacterMake_C_RecalcRGB");
static_assert(sizeof(BP_PalPlayerDataCharacterMake_C_RecalcRGB) == 0x0000F0, "Wrong size on BP_PalPlayerDataCharacterMake_C_RecalcRGB");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcRGB, InHSV) == 0x000000, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcRGB::InHSV' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcRGB, ShiftRGB) == 0x000010, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcRGB::ShiftRGB' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcRGB, SVLimit) == 0x000020, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcRGB::SVLimit' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcRGB, OutRGB) == 0x000028, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcRGB::OutRGB' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcRGB, CallFunc_BreakColor_R) == 0x000038, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcRGB::CallFunc_BreakColor_R' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcRGB, CallFunc_BreakColor_G) == 0x00003C, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcRGB::CallFunc_BreakColor_G' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcRGB, CallFunc_BreakColor_B) == 0x000040, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcRGB::CallFunc_BreakColor_B' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcRGB, CallFunc_BreakColor_A) == 0x000044, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcRGB::CallFunc_BreakColor_A' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcRGB, CallFunc_RGBLinearToHSV_ReturnValue) == 0x000048, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcRGB::CallFunc_RGBLinearToHSV_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcRGB, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000058, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcRGB::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcRGB, CallFunc_BreakColor_R_1) == 0x000060, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcRGB::CallFunc_BreakColor_R_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcRGB, CallFunc_BreakColor_G_1) == 0x000064, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcRGB::CallFunc_BreakColor_G_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcRGB, CallFunc_BreakColor_B_1) == 0x000068, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcRGB::CallFunc_BreakColor_B_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcRGB, CallFunc_BreakColor_A_1) == 0x00006C, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcRGB::CallFunc_BreakColor_A_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcRGB, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000070, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcRGB::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcRGB, CallFunc_Divide_DoubleDouble_ReturnValue_2) == 0x000078, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcRGB::CallFunc_Divide_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcRGB, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000080, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcRGB::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcRGB, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000088, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcRGB::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcRGB, K2Node_MakeStruct_LinearColor) == 0x000090, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcRGB::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcRGB, CallFunc_HSVToRGBLinear_ReturnValue) == 0x0000A0, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcRGB::CallFunc_HSVToRGBLinear_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcRGB, K2Node_MakeStruct_LinearColor_1) == 0x0000B0, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcRGB::K2Node_MakeStruct_LinearColor_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcRGB, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x0000C0, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcRGB::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcRGB, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x0000C8, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcRGB::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcRGB, CallFunc_Divide_DoubleDouble_A_ImplicitCast_1) == 0x0000D0, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcRGB::CallFunc_Divide_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcRGB, K2Node_MakeStruct_B_ImplicitCast) == 0x0000D8, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcRGB::K2Node_MakeStruct_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcRGB, CallFunc_Divide_DoubleDouble_A_ImplicitCast_2) == 0x0000E0, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcRGB::CallFunc_Divide_DoubleDouble_A_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcRGB, K2Node_MakeStruct_G_ImplicitCast) == 0x0000E8, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcRGB::K2Node_MakeStruct_G_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RecalcRGB, K2Node_MakeStruct_R_ImplicitCast) == 0x0000EC, "Member 'BP_PalPlayerDataCharacterMake_C_RecalcRGB::K2Node_MakeStruct_R_ImplicitCast' has a wrong offset!");

// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.RGBToHSV
// 0x0058 (0x0058 - 0x0000)
struct BP_PalPlayerDataCharacterMake_C_RGBToHSV final
{
public:
	struct FLinearColor                           InRGB;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           OutHSV;                                            // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_RGBLinearToHSV_ReturnValue;               // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_R_ImplicitCast;                  // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerDataCharacterMake_C_RGBToHSV) == 0x000008, "Wrong alignment on BP_PalPlayerDataCharacterMake_C_RGBToHSV");
static_assert(sizeof(BP_PalPlayerDataCharacterMake_C_RGBToHSV) == 0x000058, "Wrong size on BP_PalPlayerDataCharacterMake_C_RGBToHSV");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RGBToHSV, InRGB) == 0x000000, "Member 'BP_PalPlayerDataCharacterMake_C_RGBToHSV::InRGB' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RGBToHSV, OutHSV) == 0x000010, "Member 'BP_PalPlayerDataCharacterMake_C_RGBToHSV::OutHSV' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RGBToHSV, CallFunc_RGBLinearToHSV_ReturnValue) == 0x000020, "Member 'BP_PalPlayerDataCharacterMake_C_RGBToHSV::CallFunc_RGBLinearToHSV_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RGBToHSV, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000030, "Member 'BP_PalPlayerDataCharacterMake_C_RGBToHSV::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RGBToHSV, K2Node_MakeStruct_LinearColor) == 0x000038, "Member 'BP_PalPlayerDataCharacterMake_C_RGBToHSV::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RGBToHSV, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000048, "Member 'BP_PalPlayerDataCharacterMake_C_RGBToHSV::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_RGBToHSV, K2Node_MakeStruct_R_ImplicitCast) == 0x000050, "Member 'BP_PalPlayerDataCharacterMake_C_RGBToHSV::K2Node_MakeStruct_R_ImplicitCast' has a wrong offset!");

// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.GetRandomBodyMeshName
// 0x0010 (0x0010 - 0x0000)
struct BP_PalPlayerDataCharacterMake_C_GetRandomBodyMeshName final
{
public:
	class FName                                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetRandomRawNameByDataTable_RawName;      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerDataCharacterMake_C_GetRandomBodyMeshName) == 0x000004, "Wrong alignment on BP_PalPlayerDataCharacterMake_C_GetRandomBodyMeshName");
static_assert(sizeof(BP_PalPlayerDataCharacterMake_C_GetRandomBodyMeshName) == 0x000010, "Wrong size on BP_PalPlayerDataCharacterMake_C_GetRandomBodyMeshName");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetRandomBodyMeshName, ReturnValue) == 0x000000, "Member 'BP_PalPlayerDataCharacterMake_C_GetRandomBodyMeshName::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetRandomBodyMeshName, CallFunc_GetRandomRawNameByDataTable_RawName) == 0x000008, "Member 'BP_PalPlayerDataCharacterMake_C_GetRandomBodyMeshName::CallFunc_GetRandomRawNameByDataTable_RawName' has a wrong offset!");

// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.GetRandomHairMeshName
// 0x0010 (0x0010 - 0x0000)
struct BP_PalPlayerDataCharacterMake_C_GetRandomHairMeshName final
{
public:
	class FName                                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetRandomRawNameByDataTable_RawName;      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerDataCharacterMake_C_GetRandomHairMeshName) == 0x000004, "Wrong alignment on BP_PalPlayerDataCharacterMake_C_GetRandomHairMeshName");
static_assert(sizeof(BP_PalPlayerDataCharacterMake_C_GetRandomHairMeshName) == 0x000010, "Wrong size on BP_PalPlayerDataCharacterMake_C_GetRandomHairMeshName");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetRandomHairMeshName, ReturnValue) == 0x000000, "Member 'BP_PalPlayerDataCharacterMake_C_GetRandomHairMeshName::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetRandomHairMeshName, CallFunc_GetRandomRawNameByDataTable_RawName) == 0x000008, "Member 'BP_PalPlayerDataCharacterMake_C_GetRandomHairMeshName::CallFunc_GetRandomRawNameByDataTable_RawName' has a wrong offset!");

// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.GetRandomHeadMeshName
// 0x0010 (0x0010 - 0x0000)
struct BP_PalPlayerDataCharacterMake_C_GetRandomHeadMeshName final
{
public:
	class FName                                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetRandomRawNameByDataTable_RawName;      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerDataCharacterMake_C_GetRandomHeadMeshName) == 0x000004, "Wrong alignment on BP_PalPlayerDataCharacterMake_C_GetRandomHeadMeshName");
static_assert(sizeof(BP_PalPlayerDataCharacterMake_C_GetRandomHeadMeshName) == 0x000010, "Wrong size on BP_PalPlayerDataCharacterMake_C_GetRandomHeadMeshName");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetRandomHeadMeshName, ReturnValue) == 0x000000, "Member 'BP_PalPlayerDataCharacterMake_C_GetRandomHeadMeshName::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetRandomHeadMeshName, CallFunc_GetRandomRawNameByDataTable_RawName) == 0x000008, "Member 'BP_PalPlayerDataCharacterMake_C_GetRandomHeadMeshName::CallFunc_GetRandomRawNameByDataTable_RawName' has a wrong offset!");

// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.GetRandomRawNameByDataTable
// 0x0038 (0x0038 - 0x0000)
struct BP_PalPlayerDataCharacterMake_C_GetRandomRawNameByDataTable final
{
public:
	class UDataTable*                             DataTable;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   RawName;                                           // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0018(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Random_OutItem;                     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Random_OutIndex;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerDataCharacterMake_C_GetRandomRawNameByDataTable) == 0x000008, "Wrong alignment on BP_PalPlayerDataCharacterMake_C_GetRandomRawNameByDataTable");
static_assert(sizeof(BP_PalPlayerDataCharacterMake_C_GetRandomRawNameByDataTable) == 0x000038, "Wrong size on BP_PalPlayerDataCharacterMake_C_GetRandomRawNameByDataTable");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetRandomRawNameByDataTable, DataTable) == 0x000000, "Member 'BP_PalPlayerDataCharacterMake_C_GetRandomRawNameByDataTable::DataTable' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetRandomRawNameByDataTable, RawName) == 0x000008, "Member 'BP_PalPlayerDataCharacterMake_C_GetRandomRawNameByDataTable::RawName' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetRandomRawNameByDataTable, Temp_name_Variable) == 0x000010, "Member 'BP_PalPlayerDataCharacterMake_C_GetRandomRawNameByDataTable::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetRandomRawNameByDataTable, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000018, "Member 'BP_PalPlayerDataCharacterMake_C_GetRandomRawNameByDataTable::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetRandomRawNameByDataTable, CallFunc_Array_Random_OutItem) == 0x000028, "Member 'BP_PalPlayerDataCharacterMake_C_GetRandomRawNameByDataTable::CallFunc_Array_Random_OutItem' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetRandomRawNameByDataTable, CallFunc_Array_Random_OutIndex) == 0x000030, "Member 'BP_PalPlayerDataCharacterMake_C_GetRandomRawNameByDataTable::CallFunc_Array_Random_OutIndex' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerDataCharacterMake_C_GetRandomRawNameByDataTable, CallFunc_Array_RemoveItem_ReturnValue) == 0x000034, "Member 'BP_PalPlayerDataCharacterMake_C_GetRandomRawNameByDataTable::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");

}

