#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_SkillEffect_AcidRain_Cloud.BP_SkillEffect_AcidRain_Cloud_C.ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud
// 0x04B0 (0x04B0 - 0x0000)
struct BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_1;                     // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FPalDamageInfo& DamageInfo)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1; // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue_1;                     // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_1;              // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_2;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_2;               // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTargetActor_ReturnValue;         // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A2[0x2];                                       // 0x00A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x00A4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetTargetLocation_Location;               // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x00D0(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FPalDamageInfo                         K2Node_CustomEvent_DamageInfo;                     // 0x00D8(0x00D0)(ConstParm)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_3;               // 0x01AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x01AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01AE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1AF[0x1];                                      // 0x01AF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x01B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x01C8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue_1;        // 0x02B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B2[0x6];                                      // 0x02B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x02B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x02D0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult_1;     // 0x0330(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue_1;        // 0x0418(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_419[0x7];                                      // 0x0419(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0420(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0428(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SkillEffec_AcidRain_Bullet_C*       CallFunc_FinishSpawningActor_ReturnValue;          // 0x0430(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0438(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0440(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_441[0x7];                                      // 0x0441(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_Event_DeltaSecond;                          // 0x0448(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_3;                     // 0x0450(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_451[0x3];                                      // 0x0451(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0454(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0458(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_459[0x3];                                      // 0x0459(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x045C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46C[0x4];                                      // 0x046C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0470(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0478(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast;        // 0x047C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0480(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x0488(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast_1;      // 0x048C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x0490(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast_1;  // 0x0498(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VLerp_Alpha_ImplicitCast;                 // 0x049C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x04A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud) == 0x000010, "Wrong alignment on BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud");
static_assert(sizeof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud) == 0x0004B0, "Wrong size on BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, Temp_bool_IsClosed_Variable) == 0x000005, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, Temp_bool_Has_Been_Initd_Variable_1) == 0x000006, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, Temp_bool_IsClosed_Variable_1) == 0x000007, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000018, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000020, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_FClamp_ReturnValue) == 0x000028, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_SelectFloat_ReturnValue) == 0x000030, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_GetFloatValue_ReturnValue) == 0x000038, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000040, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable) == 0x000048, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000050, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1) == 0x000058, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000060, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_FClamp_ReturnValue_1) == 0x000068, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_GetFloatValue_ReturnValue_1) == 0x000070, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_GetFloatValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_SelectFloat_ReturnValue_1) == 0x000078, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, Temp_bool_IsClosed_Variable_2) == 0x000080, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::Temp_bool_IsClosed_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000088, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, Temp_bool_Has_Been_Initd_Variable_2) == 0x000090, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::Temp_bool_Has_Been_Initd_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, K2Node_Event_DeltaSeconds) == 0x000094, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_GetActionTargetActor_ReturnValue) == 0x000098, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_GetActionTargetActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_IsValid_ReturnValue) == 0x0000A0, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_K2_SetActorRotation_ReturnValue) == 0x0000A1, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000A4, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_GetTargetLocation_Location) == 0x0000B8, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_GetTargetLocation_Location' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0000D0, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, K2Node_CustomEvent_DamageInfo) == 0x0000D8, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::K2Node_CustomEvent_DamageInfo' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_Subtract_IntInt_ReturnValue) == 0x0001A8, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, Temp_bool_Has_Been_Initd_Variable_3) == 0x0001AC, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::Temp_bool_Has_Been_Initd_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0001AD, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_IsValid_ReturnValue_1) == 0x0001AE, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_VLerp_ReturnValue) == 0x0001B0, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x0001C8, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_K2_SetActorLocation_ReturnValue) == 0x0002B0, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_K2_SetActorRotation_ReturnValue_1) == 0x0002B1, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_K2_SetActorRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0002B8, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_MakeTransform_ReturnValue) == 0x0002D0, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_K2_SetActorLocation_SweepHitResult_1) == 0x000330, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_K2_SetActorLocation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_K2_SetActorLocation_ReturnValue_1) == 0x000418, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_K2_SetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000420, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_GetOwner_ReturnValue) == 0x000428, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_FinishSpawningActor_ReturnValue) == 0x000430, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, K2Node_DynamicCast_AsPal_Character) == 0x000438, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, K2Node_DynamicCast_bSuccess) == 0x000440, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, K2Node_Event_DeltaSecond) == 0x000448, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::K2Node_Event_DeltaSecond' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, Temp_bool_IsClosed_Variable_3) == 0x000450, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::Temp_bool_IsClosed_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_Array_Add_ReturnValue) == 0x000454, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000458, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, K2Node_CreateDelegate_OutputDelegate_2) == 0x00045C, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000470, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_Array_Add_ReturnValue_1) == 0x000478, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_GetFloatValue_InTime_ImplicitCast) == 0x00047C, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_GetFloatValue_InTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000480, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_SetVariableFloat_InValue_ImplicitCast) == 0x000488, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_SetVariableFloat_InValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_GetFloatValue_InTime_ImplicitCast_1) == 0x00048C, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_GetFloatValue_InTime_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1) == 0x000490, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_SetVariableFloat_InValue_ImplicitCast_1) == 0x000498, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_SetVariableFloat_InValue_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_VLerp_Alpha_ImplicitCast) == 0x00049C, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_VLerp_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x0004A0, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_SkillEffect_AcidRain_Cloud.BP_SkillEffect_AcidRain_Cloud_C.FadeOutEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_SkillEffect_AcidRain_Cloud_C_FadeOutEffect final
{
public:
	double                                        DeltaSecond;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_AcidRain_Cloud_C_FadeOutEffect) == 0x000008, "Wrong alignment on BP_SkillEffect_AcidRain_Cloud_C_FadeOutEffect");
static_assert(sizeof(BP_SkillEffect_AcidRain_Cloud_C_FadeOutEffect) == 0x000008, "Wrong size on BP_SkillEffect_AcidRain_Cloud_C_FadeOutEffect");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_FadeOutEffect, DeltaSecond) == 0x000000, "Member 'BP_SkillEffect_AcidRain_Cloud_C_FadeOutEffect::DeltaSecond' has a wrong offset!");

// Function BP_SkillEffect_AcidRain_Cloud.BP_SkillEffect_AcidRain_Cloud_C.FindNearestTarget
// 0x0048 (0x0048 - 0x0000)
struct BP_SkillEffect_AcidRain_Cloud_C_FindNearestTarget final
{
public:
	bool                                          IsExist;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetOwnerCharacter_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetNearestEnemyByLocation_OutMinRange;    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetNearestEnemyByLocation_ReturnValue;    // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B[0x5];                                       // 0x003B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Greater_DoubleDouble_B_ImplicitCast;      // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_AcidRain_Cloud_C_FindNearestTarget) == 0x000008, "Wrong alignment on BP_SkillEffect_AcidRain_Cloud_C_FindNearestTarget");
static_assert(sizeof(BP_SkillEffect_AcidRain_Cloud_C_FindNearestTarget) == 0x000048, "Wrong size on BP_SkillEffect_AcidRain_Cloud_C_FindNearestTarget");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_FindNearestTarget, IsExist) == 0x000000, "Member 'BP_SkillEffect_AcidRain_Cloud_C_FindNearestTarget::IsExist' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_FindNearestTarget, CallFunc_GetOwnerCharacter_ReturnValue) == 0x000008, "Member 'BP_SkillEffect_AcidRain_Cloud_C_FindNearestTarget::CallFunc_GetOwnerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_FindNearestTarget, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'BP_SkillEffect_AcidRain_Cloud_C_FindNearestTarget::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_FindNearestTarget, CallFunc_GetNearestEnemyByLocation_OutMinRange) == 0x000028, "Member 'BP_SkillEffect_AcidRain_Cloud_C_FindNearestTarget::CallFunc_GetNearestEnemyByLocation_OutMinRange' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_FindNearestTarget, CallFunc_GetNearestEnemyByLocation_ReturnValue) == 0x000030, "Member 'BP_SkillEffect_AcidRain_Cloud_C_FindNearestTarget::CallFunc_GetNearestEnemyByLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_FindNearestTarget, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000038, "Member 'BP_SkillEffect_AcidRain_Cloud_C_FindNearestTarget::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_FindNearestTarget, CallFunc_IsValid_ReturnValue) == 0x000039, "Member 'BP_SkillEffect_AcidRain_Cloud_C_FindNearestTarget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_FindNearestTarget, CallFunc_BooleanAND_ReturnValue) == 0x00003A, "Member 'BP_SkillEffect_AcidRain_Cloud_C_FindNearestTarget::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_FindNearestTarget, CallFunc_Greater_DoubleDouble_B_ImplicitCast) == 0x000040, "Member 'BP_SkillEffect_AcidRain_Cloud_C_FindNearestTarget::CallFunc_Greater_DoubleDouble_B_ImplicitCast' has a wrong offset!");

// Function BP_SkillEffect_AcidRain_Cloud.BP_SkillEffect_AcidRain_Cloud_C.GetTargetLocation
// 0x00A8 (0x00A8 - 0x0000)
struct BP_SkillEffect_AcidRain_Cloud_C_GetTargetLocation final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindNearestTarget_IsExist;                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetActionTargetActor_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetAttackLocationByTargetActor_AttackLocation; // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetOwnerCharacter_ReturnValue;            // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActionTargetLocation_ReturnValue;      // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerControlled_ReturnValue;           // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTargetActor_ReturnValue_1;       // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsApplicableDamage_ReturnValue;           // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_AcidRain_Cloud_C_GetTargetLocation) == 0x000008, "Wrong alignment on BP_SkillEffect_AcidRain_Cloud_C_GetTargetLocation");
static_assert(sizeof(BP_SkillEffect_AcidRain_Cloud_C_GetTargetLocation) == 0x0000A8, "Wrong size on BP_SkillEffect_AcidRain_Cloud_C_GetTargetLocation");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_GetTargetLocation, Location) == 0x000000, "Member 'BP_SkillEffect_AcidRain_Cloud_C_GetTargetLocation::Location' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_GetTargetLocation, CallFunc_FindNearestTarget_IsExist) == 0x000018, "Member 'BP_SkillEffect_AcidRain_Cloud_C_GetTargetLocation::CallFunc_FindNearestTarget_IsExist' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_GetTargetLocation, CallFunc_GetActionTargetActor_ReturnValue) == 0x000020, "Member 'BP_SkillEffect_AcidRain_Cloud_C_GetTargetLocation::CallFunc_GetActionTargetActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_GetTargetLocation, CallFunc_GetAttackLocationByTargetActor_AttackLocation) == 0x000028, "Member 'BP_SkillEffect_AcidRain_Cloud_C_GetTargetLocation::CallFunc_GetAttackLocationByTargetActor_AttackLocation' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_GetTargetLocation, CallFunc_Add_VectorVector_ReturnValue) == 0x000040, "Member 'BP_SkillEffect_AcidRain_Cloud_C_GetTargetLocation::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_GetTargetLocation, CallFunc_GetOwnerCharacter_ReturnValue) == 0x000058, "Member 'BP_SkillEffect_AcidRain_Cloud_C_GetTargetLocation::CallFunc_GetOwnerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_GetTargetLocation, CallFunc_GetActionTargetLocation_ReturnValue) == 0x000060, "Member 'BP_SkillEffect_AcidRain_Cloud_C_GetTargetLocation::CallFunc_GetActionTargetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_GetTargetLocation, CallFunc_IsPlayerControlled_ReturnValue) == 0x000078, "Member 'BP_SkillEffect_AcidRain_Cloud_C_GetTargetLocation::CallFunc_IsPlayerControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_GetTargetLocation, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000080, "Member 'BP_SkillEffect_AcidRain_Cloud_C_GetTargetLocation::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_GetTargetLocation, CallFunc_GetActionTargetActor_ReturnValue_1) == 0x000098, "Member 'BP_SkillEffect_AcidRain_Cloud_C_GetTargetLocation::CallFunc_GetActionTargetActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_GetTargetLocation, CallFunc_IsApplicableDamage_ReturnValue) == 0x0000A0, "Member 'BP_SkillEffect_AcidRain_Cloud_C_GetTargetLocation::CallFunc_IsApplicableDamage_ReturnValue' has a wrong offset!");

// Function BP_SkillEffect_AcidRain_Cloud.BP_SkillEffect_AcidRain_Cloud_C.OnDamageSkill
// 0x00D0 (0x00D0 - 0x0000)
struct BP_SkillEffect_AcidRain_Cloud_C_OnDamageSkill final
{
public:
	struct FPalDamageInfo                         DamageInfo;                                        // 0x0000(0x00D0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_SkillEffect_AcidRain_Cloud_C_OnDamageSkill) == 0x000008, "Wrong alignment on BP_SkillEffect_AcidRain_Cloud_C_OnDamageSkill");
static_assert(sizeof(BP_SkillEffect_AcidRain_Cloud_C_OnDamageSkill) == 0x0000D0, "Wrong size on BP_SkillEffect_AcidRain_Cloud_C_OnDamageSkill");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_OnDamageSkill, DamageInfo) == 0x000000, "Member 'BP_SkillEffect_AcidRain_Cloud_C_OnDamageSkill::DamageInfo' has a wrong offset!");

// Function BP_SkillEffect_AcidRain_Cloud.BP_SkillEffect_AcidRain_Cloud_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_SkillEffect_AcidRain_Cloud_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_AcidRain_Cloud_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_SkillEffect_AcidRain_Cloud_C_ReceiveTick");
static_assert(sizeof(BP_SkillEffect_AcidRain_Cloud_C_ReceiveTick) == 0x000004, "Wrong size on BP_SkillEffect_AcidRain_Cloud_C_ReceiveTick");
static_assert(offsetof(BP_SkillEffect_AcidRain_Cloud_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_SkillEffect_AcidRain_Cloud_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

