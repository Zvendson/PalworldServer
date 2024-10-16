#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_SkillEffect_AcidRain.BP_SkillEffect_AcidRain_C.ExecuteUbergraph_BP_SkillEffect_AcidRain
// 0x01E8 (0x01E8 - 0x0000)
struct BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_2;               // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue_1;                     // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_1;              // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D[0x3];                                       // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_Event_DeltaSecond;                          // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x00B8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_2;                     // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1; // 0x01A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A3[0x5];                                      // 0x01A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetTargetLocation_Location;               // 0x01A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast;        // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C4[0x4];                                      // 0x01C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast_1;      // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast_1;  // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VLerp_Alpha_ImplicitCast;                 // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain) == 0x000008, "Wrong alignment on BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain");
static_assert(sizeof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain) == 0x0001E8, "Wrong size on BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable) == 0x000005, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, Temp_bool_IsClosed_Variable) == 0x000006, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000008, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000010, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, CallFunc_FClamp_ReturnValue) == 0x000018, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, CallFunc_GetFloatValue_ReturnValue) == 0x000020, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, CallFunc_SelectFloat_ReturnValue) == 0x000028, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, Temp_bool_Has_Been_Initd_Variable_1) == 0x000030, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000038, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, Temp_bool_IsClosed_Variable_1) == 0x000040, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, Temp_bool_Has_Been_Initd_Variable_2) == 0x000041, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::Temp_bool_Has_Been_Initd_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000048, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000050, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, CallFunc_FClamp_ReturnValue_1) == 0x000058, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, CallFunc_SelectFloat_ReturnValue_1) == 0x000060, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, CallFunc_GetFloatValue_ReturnValue_1) == 0x000068, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::CallFunc_GetFloatValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000070, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, K2Node_Event_DeltaSeconds) == 0x000078, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, CallFunc_IsValid_ReturnValue) == 0x00007C, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000080, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, K2Node_Event_DeltaSecond) == 0x000098, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::K2Node_Event_DeltaSecond' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, CallFunc_VLerp_ReturnValue) == 0x0000A0, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x0000B8, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, CallFunc_K2_SetActorLocation_ReturnValue) == 0x0001A0, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, Temp_bool_IsClosed_Variable_2) == 0x0001A1, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::Temp_bool_IsClosed_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1) == 0x0001A2, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, CallFunc_GetTargetLocation_Location) == 0x0001A8, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::CallFunc_GetTargetLocation_Location' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, CallFunc_GetFloatValue_InTime_ImplicitCast) == 0x0001C0, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::CallFunc_GetFloatValue_InTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0001C8, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, CallFunc_SetVariableFloat_InValue_ImplicitCast) == 0x0001D0, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::CallFunc_SetVariableFloat_InValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, CallFunc_GetFloatValue_InTime_ImplicitCast_1) == 0x0001D4, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::CallFunc_GetFloatValue_InTime_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1) == 0x0001D8, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, CallFunc_SetVariableFloat_InValue_ImplicitCast_1) == 0x0001E0, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::CallFunc_SetVariableFloat_InValue_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain, CallFunc_VLerp_Alpha_ImplicitCast) == 0x0001E4, "Member 'BP_SkillEffect_AcidRain_C_ExecuteUbergraph_BP_SkillEffect_AcidRain::CallFunc_VLerp_Alpha_ImplicitCast' has a wrong offset!");

// Function BP_SkillEffect_AcidRain.BP_SkillEffect_AcidRain_C.FadeOutEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_SkillEffect_AcidRain_C_FadeOutEffect final
{
public:
	double                                        DeltaSecond;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_AcidRain_C_FadeOutEffect) == 0x000008, "Wrong alignment on BP_SkillEffect_AcidRain_C_FadeOutEffect");
static_assert(sizeof(BP_SkillEffect_AcidRain_C_FadeOutEffect) == 0x000008, "Wrong size on BP_SkillEffect_AcidRain_C_FadeOutEffect");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_FadeOutEffect, DeltaSecond) == 0x000000, "Member 'BP_SkillEffect_AcidRain_C_FadeOutEffect::DeltaSecond' has a wrong offset!");

// Function BP_SkillEffect_AcidRain.BP_SkillEffect_AcidRain_C.GetTargetLocation
// 0x0088 (0x0088 - 0x0000)
struct BP_SkillEffect_AcidRain_C_GetTargetLocation final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActionTargetLocation_ReturnValue;      // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTargetActor_ReturnValue;         // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_AcidRain_C_GetTargetLocation) == 0x000008, "Wrong alignment on BP_SkillEffect_AcidRain_C_GetTargetLocation");
static_assert(sizeof(BP_SkillEffect_AcidRain_C_GetTargetLocation) == 0x000088, "Wrong size on BP_SkillEffect_AcidRain_C_GetTargetLocation");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_GetTargetLocation, Location) == 0x000000, "Member 'BP_SkillEffect_AcidRain_C_GetTargetLocation::Location' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_GetTargetLocation, CallFunc_GetActionTargetLocation_ReturnValue) == 0x000018, "Member 'BP_SkillEffect_AcidRain_C_GetTargetLocation::CallFunc_GetActionTargetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_GetTargetLocation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000030, "Member 'BP_SkillEffect_AcidRain_C_GetTargetLocation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_GetTargetLocation, CallFunc_Add_VectorVector_ReturnValue) == 0x000048, "Member 'BP_SkillEffect_AcidRain_C_GetTargetLocation::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_GetTargetLocation, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000060, "Member 'BP_SkillEffect_AcidRain_C_GetTargetLocation::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_GetTargetLocation, CallFunc_GetActionTargetActor_ReturnValue) == 0x000078, "Member 'BP_SkillEffect_AcidRain_C_GetTargetLocation::CallFunc_GetActionTargetActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_GetTargetLocation, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'BP_SkillEffect_AcidRain_C_GetTargetLocation::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_SkillEffect_AcidRain.BP_SkillEffect_AcidRain_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_SkillEffect_AcidRain_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_AcidRain_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_SkillEffect_AcidRain_C_ReceiveTick");
static_assert(sizeof(BP_SkillEffect_AcidRain_C_ReceiveTick) == 0x000004, "Wrong size on BP_SkillEffect_AcidRain_C_ReceiveTick");
static_assert(offsetof(BP_SkillEffect_AcidRain_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_SkillEffect_AcidRain_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

