#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_Sky_Sphere.BP_Sky_Sphere_C.RefreshMaterial
// 0x01B0 (0x01B0 - 0x0000)
struct BP_Sky_Sphere_C_RefreshMaterial final
{
public:
	double                                        CallFunc_Abs_ReturnValue;                          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetClampedLinearColorValue_ReturnValue;   // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_ReturnValue;                         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Abs_ReturnValue_1;                        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeUnclamped_ReturnValue;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue_1;        // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll_1;                      // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeUnclamped_ReturnValue_1;          // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x00C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetClampedLinearColorValue_ReturnValue_1; // 0x00D8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetClampedLinearColorValue_ReturnValue_2; // 0x00E8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;              // 0x0108(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x0118(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue_2;        // 0x0130(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue_1;       // 0x0148(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue_1;   // 0x0160(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1; // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_2; // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetClampedLinearColorValue_InTime_ImplicitCast; // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_3; // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_4; // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Pitch_ImplicitCast;           // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18C[0x4];                                      // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_MapRangeUnclamped_Value_ImplicitCast;     // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetClampedLinearColorValue_InTime_ImplicitCast_1; // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetClampedLinearColorValue_InTime_ImplicitCast_2; // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_LinearColorLerp_Alpha_ImplicitCast;       // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_5; // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_6; // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Sky_Sphere_C_RefreshMaterial) == 0x000008, "Wrong alignment on BP_Sky_Sphere_C_RefreshMaterial");
static_assert(sizeof(BP_Sky_Sphere_C_RefreshMaterial) == 0x0001B0, "Wrong size on BP_Sky_Sphere_C_RefreshMaterial");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_Abs_ReturnValue) == 0x000000, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_GetClampedLinearColorValue_ReturnValue) == 0x000008, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_GetClampedLinearColorValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_Lerp_ReturnValue) == 0x000018, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000020, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_Abs_ReturnValue_1) == 0x000028, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_Abs_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_SelectFloat_ReturnValue) == 0x000030, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_MapRangeUnclamped_ReturnValue) == 0x000038, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_MapRangeUnclamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000040, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_BreakRotator_Roll) == 0x000058, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_BreakRotator_Pitch) == 0x00005C, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_BreakRotator_Yaw) == 0x000060, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_K2_GetActorRotation_ReturnValue_1) == 0x000068, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_K2_GetActorRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_MakeRotator_ReturnValue) == 0x000080, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_BreakRotator_Roll_1) == 0x000098, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_BreakRotator_Roll_1' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_BreakRotator_Pitch_1) == 0x00009C, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_BreakRotator_Pitch_1' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_BreakRotator_Yaw_1) == 0x0000A0, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_BreakRotator_Yaw_1' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_Conv_RotatorToVector_ReturnValue) == 0x0000A8, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_Conv_RotatorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_MapRangeUnclamped_ReturnValue_1) == 0x0000C0, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_MapRangeUnclamped_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_Conv_VectorToLinearColor_ReturnValue) == 0x0000C8, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_Conv_VectorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_GetClampedLinearColorValue_ReturnValue_1) == 0x0000D8, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_GetClampedLinearColorValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_GetClampedLinearColorValue_ReturnValue_2) == 0x0000E8, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_GetClampedLinearColorValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000F8, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_FClamp_ReturnValue) == 0x000100, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_LinearColorLerp_ReturnValue) == 0x000108, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_LinearColorLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_Conv_ColorToLinearColor_ReturnValue) == 0x000118, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_Conv_ColorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_IsValid_ReturnValue) == 0x000128, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_K2_GetActorRotation_ReturnValue_2) == 0x000130, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_K2_GetActorRotation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_Conv_RotatorToVector_ReturnValue_1) == 0x000148, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_Conv_RotatorToVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_Conv_VectorToLinearColor_ReturnValue_1) == 0x000160, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_Conv_VectorToLinearColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000170, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x000174, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_SetScalarParameterValue_Value_ImplicitCast_2) == 0x000178, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_SetScalarParameterValue_Value_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_GetClampedLinearColorValue_InTime_ImplicitCast) == 0x00017C, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_GetClampedLinearColorValue_InTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_SetScalarParameterValue_Value_ImplicitCast_3) == 0x000180, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_SetScalarParameterValue_Value_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_SetScalarParameterValue_Value_ImplicitCast_4) == 0x000184, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_SetScalarParameterValue_Value_ImplicitCast_4' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_MakeRotator_Pitch_ImplicitCast) == 0x000188, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_MakeRotator_Pitch_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_MapRangeUnclamped_Value_ImplicitCast) == 0x000190, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_MapRangeUnclamped_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_GetClampedLinearColorValue_InTime_ImplicitCast_1) == 0x000198, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_GetClampedLinearColorValue_InTime_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_GetClampedLinearColorValue_InTime_ImplicitCast_2) == 0x00019C, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_GetClampedLinearColorValue_InTime_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_LinearColorLerp_Alpha_ImplicitCast) == 0x0001A0, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_LinearColorLerp_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_SetScalarParameterValue_Value_ImplicitCast_5) == 0x0001A4, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_SetScalarParameterValue_Value_ImplicitCast_5' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_RefreshMaterial, CallFunc_SetScalarParameterValue_Value_ImplicitCast_6) == 0x0001A8, "Member 'BP_Sky_Sphere_C_RefreshMaterial::CallFunc_SetScalarParameterValue_Value_ImplicitCast_6' has a wrong offset!");

// Function BP_Sky_Sphere.BP_Sky_Sphere_C.UpdateSunDirection
// 0x00F8 (0x00F8 - 0x0000)
struct BP_Sky_Sphere_C_UpdateSunDirection final
{
public:
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_Abs_ReturnValue;                          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeUnclamped_ReturnValue;            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue_1;        // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Abs_ReturnValue_1;                        // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetClampedLinearColorValue_ReturnValue;   // 0x00A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_ReturnValue;                         // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetClampedLinearColorValue_ReturnValue_1; // 0x00B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetClampedLinearColorValue_ReturnValue_2; // 0x00C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeUnclamped_Value_ImplicitCast;     // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetClampedLinearColorValue_InTime_ImplicitCast; // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1; // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetClampedLinearColorValue_InTime_ImplicitCast_1; // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetClampedLinearColorValue_InTime_ImplicitCast_2; // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Sky_Sphere_C_UpdateSunDirection) == 0x000008, "Wrong alignment on BP_Sky_Sphere_C_UpdateSunDirection");
static_assert(sizeof(BP_Sky_Sphere_C_UpdateSunDirection) == 0x0000F8, "Wrong size on BP_Sky_Sphere_C_UpdateSunDirection");
static_assert(offsetof(BP_Sky_Sphere_C_UpdateSunDirection, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000000, "Member 'BP_Sky_Sphere_C_UpdateSunDirection::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_UpdateSunDirection, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000008, "Member 'BP_Sky_Sphere_C_UpdateSunDirection::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_UpdateSunDirection, CallFunc_Abs_ReturnValue) == 0x000020, "Member 'BP_Sky_Sphere_C_UpdateSunDirection::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_UpdateSunDirection, CallFunc_BreakRotator_Roll) == 0x000028, "Member 'BP_Sky_Sphere_C_UpdateSunDirection::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_UpdateSunDirection, CallFunc_BreakRotator_Pitch) == 0x00002C, "Member 'BP_Sky_Sphere_C_UpdateSunDirection::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_UpdateSunDirection, CallFunc_BreakRotator_Yaw) == 0x000030, "Member 'BP_Sky_Sphere_C_UpdateSunDirection::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_UpdateSunDirection, CallFunc_SelectFloat_ReturnValue) == 0x000038, "Member 'BP_Sky_Sphere_C_UpdateSunDirection::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_UpdateSunDirection, CallFunc_MapRangeUnclamped_ReturnValue) == 0x000040, "Member 'BP_Sky_Sphere_C_UpdateSunDirection::CallFunc_MapRangeUnclamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_UpdateSunDirection, CallFunc_K2_GetActorRotation_ReturnValue_1) == 0x000048, "Member 'BP_Sky_Sphere_C_UpdateSunDirection::CallFunc_K2_GetActorRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_UpdateSunDirection, CallFunc_Conv_ColorToLinearColor_ReturnValue) == 0x000060, "Member 'BP_Sky_Sphere_C_UpdateSunDirection::CallFunc_Conv_ColorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_UpdateSunDirection, CallFunc_Conv_RotatorToVector_ReturnValue) == 0x000070, "Member 'BP_Sky_Sphere_C_UpdateSunDirection::CallFunc_Conv_RotatorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_UpdateSunDirection, CallFunc_Conv_VectorToLinearColor_ReturnValue) == 0x000088, "Member 'BP_Sky_Sphere_C_UpdateSunDirection::CallFunc_Conv_VectorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_UpdateSunDirection, CallFunc_Abs_ReturnValue_1) == 0x000098, "Member 'BP_Sky_Sphere_C_UpdateSunDirection::CallFunc_Abs_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_UpdateSunDirection, CallFunc_GetClampedLinearColorValue_ReturnValue) == 0x0000A0, "Member 'BP_Sky_Sphere_C_UpdateSunDirection::CallFunc_GetClampedLinearColorValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_UpdateSunDirection, CallFunc_Lerp_ReturnValue) == 0x0000B0, "Member 'BP_Sky_Sphere_C_UpdateSunDirection::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_UpdateSunDirection, CallFunc_GetClampedLinearColorValue_ReturnValue_1) == 0x0000B8, "Member 'BP_Sky_Sphere_C_UpdateSunDirection::CallFunc_GetClampedLinearColorValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_UpdateSunDirection, CallFunc_GetClampedLinearColorValue_ReturnValue_2) == 0x0000C8, "Member 'BP_Sky_Sphere_C_UpdateSunDirection::CallFunc_GetClampedLinearColorValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_UpdateSunDirection, CallFunc_MapRangeUnclamped_Value_ImplicitCast) == 0x0000D8, "Member 'BP_Sky_Sphere_C_UpdateSunDirection::CallFunc_MapRangeUnclamped_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_UpdateSunDirection, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x0000E0, "Member 'BP_Sky_Sphere_C_UpdateSunDirection::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_UpdateSunDirection, CallFunc_GetClampedLinearColorValue_InTime_ImplicitCast) == 0x0000E4, "Member 'BP_Sky_Sphere_C_UpdateSunDirection::CallFunc_GetClampedLinearColorValue_InTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_UpdateSunDirection, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x0000E8, "Member 'BP_Sky_Sphere_C_UpdateSunDirection::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_UpdateSunDirection, CallFunc_GetClampedLinearColorValue_InTime_ImplicitCast_1) == 0x0000EC, "Member 'BP_Sky_Sphere_C_UpdateSunDirection::CallFunc_GetClampedLinearColorValue_InTime_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_Sky_Sphere_C_UpdateSunDirection, CallFunc_GetClampedLinearColorValue_InTime_ImplicitCast_2) == 0x0000F0, "Member 'BP_Sky_Sphere_C_UpdateSunDirection::CallFunc_GetClampedLinearColorValue_InTime_ImplicitCast_2' has a wrong offset!");

// Function BP_Sky_Sphere.BP_Sky_Sphere_C.UserConstructionScript
// 0x0008 (0x0008 - 0x0000)
struct BP_Sky_Sphere_C_UserConstructionScript final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Sky_Sphere_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_Sky_Sphere_C_UserConstructionScript");
static_assert(sizeof(BP_Sky_Sphere_C_UserConstructionScript) == 0x000008, "Wrong size on BP_Sky_Sphere_C_UserConstructionScript");
static_assert(offsetof(BP_Sky_Sphere_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000000, "Member 'BP_Sky_Sphere_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

}

