#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_SkillEffect_Unique_ThunderSword_Wave.BP_SkillEffect_Unique_ThunderSword_Wave_C.ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave
// 0x0390 (0x0390 - 0x0000)
struct BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_Event_DeltaSecond;                          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0078(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMaxSpeed_ReturnValue;                  // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_CustomEvent_NewDirct;                       // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_DirctIndex;                     // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_WaveCount;                      // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_CustomEvent_InitialAngle;                   // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue_1;         // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F4[0x4];                                       // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x00F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_AddLocalOffset_SweepHitResult;         // 0x0118(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0228(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RotateAngleAxis_ReturnValue;              // 0x0240(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_CustomEvent_time;                           // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x0260(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0278(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x0280(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast;        // 0x0368(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36C[0x4];                                      // 0x036C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0370(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x0378(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x037C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x0380(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast;    // 0x0388(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x038C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave) == 0x000008, "Wrong alignment on BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave");
static_assert(sizeof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave) == 0x000390, "Wrong size on BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable) == 0x000004, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, Temp_bool_Has_Been_Initd_Variable) == 0x000005, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, Temp_bool_IsClosed_Variable) == 0x000006, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000018, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000020, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000028, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, CallFunc_FClamp_ReturnValue) == 0x000030, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, CallFunc_SelectFloat_ReturnValue) == 0x000038, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, CallFunc_GetFloatValue_ReturnValue) == 0x000040, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000048, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, K2Node_Event_DeltaSeconds) == 0x000050, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000058, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, K2Node_Event_DeltaSecond) == 0x000070, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::K2Node_Event_DeltaSecond' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, K2Node_CreateDelegate_OutputDelegate_1) == 0x000078, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, CallFunc_GetMaxSpeed_ReturnValue) == 0x000088, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::CallFunc_GetMaxSpeed_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, K2Node_CustomEvent_NewDirct) == 0x000090, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::K2Node_CustomEvent_NewDirct' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, K2Node_CustomEvent_DirctIndex) == 0x0000A8, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::K2Node_CustomEvent_DirctIndex' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, K2Node_CustomEvent_WaveCount) == 0x0000AC, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::K2Node_CustomEvent_WaveCount' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, K2Node_CustomEvent_InitialAngle) == 0x0000B0, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::K2Node_CustomEvent_InitialAngle' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, CallFunc_Conv_FloatToVector_ReturnValue_1) == 0x0000B8, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::CallFunc_Conv_FloatToVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, CallFunc_Divide_IntInt_ReturnValue) == 0x0000D0, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0000D8, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, CallFunc_Conv_IntToFloat_ReturnValue) == 0x0000F0, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, CallFunc_Multiply_VectorVector_ReturnValue_1) == 0x0000F8, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::CallFunc_Multiply_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000110, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, CallFunc_K2_AddLocalOffset_SweepHitResult) == 0x000118, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::CallFunc_K2_AddLocalOffset_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000200, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, CallFunc_BreakVector_X) == 0x000208, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, CallFunc_BreakVector_Y) == 0x000210, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, CallFunc_BreakVector_Z) == 0x000218, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000220, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, CallFunc_MakeVector_ReturnValue) == 0x000228, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, CallFunc_RotateAngleAxis_ReturnValue) == 0x000240, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::CallFunc_RotateAngleAxis_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, K2Node_CustomEvent_time) == 0x000258, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::K2Node_CustomEvent_time' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x000260, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000278, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000280, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, CallFunc_GetFloatValue_InTime_ImplicitCast) == 0x000368, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::CallFunc_GetFloatValue_InTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000370, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, CallFunc_SetVariableFloat_InValue_ImplicitCast) == 0x000378, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::CallFunc_SetVariableFloat_InValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, CallFunc_Delay_Duration_ImplicitCast) == 0x00037C, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x000380, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast) == 0x000388, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x00038C, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

// Function BP_SkillEffect_Unique_ThunderSword_Wave.BP_SkillEffect_Unique_ThunderSword_Wave_C.FadeOutEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_SkillEffect_Unique_ThunderSword_Wave_C_FadeOutEffect final
{
public:
	double                                        DeltaSecond;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_Unique_ThunderSword_Wave_C_FadeOutEffect) == 0x000008, "Wrong alignment on BP_SkillEffect_Unique_ThunderSword_Wave_C_FadeOutEffect");
static_assert(sizeof(BP_SkillEffect_Unique_ThunderSword_Wave_C_FadeOutEffect) == 0x000008, "Wrong size on BP_SkillEffect_Unique_ThunderSword_Wave_C_FadeOutEffect");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_FadeOutEffect, DeltaSecond) == 0x000000, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_FadeOutEffect::DeltaSecond' has a wrong offset!");

// Function BP_SkillEffect_Unique_ThunderSword_Wave.BP_SkillEffect_Unique_ThunderSword_Wave_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_SkillEffect_Unique_ThunderSword_Wave_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_SkillEffect_Unique_ThunderSword_Wave_C_ReceiveTick");
static_assert(sizeof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ReceiveTick) == 0x000004, "Wrong size on BP_SkillEffect_Unique_ThunderSword_Wave_C_ReceiveTick");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_SkillEffect_Unique_ThunderSword_Wave.BP_SkillEffect_Unique_ThunderSword_Wave_C.SetDirection
// 0x0028 (0x0028 - 0x0000)
struct BP_SkillEffect_Unique_ThunderSword_Wave_C_SetDirection final
{
public:
	struct FVector                                NewDirct;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DirctIndex;                                        // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WaveCount;                                         // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        InitialAngle;                                      // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_Unique_ThunderSword_Wave_C_SetDirection) == 0x000008, "Wrong alignment on BP_SkillEffect_Unique_ThunderSword_Wave_C_SetDirection");
static_assert(sizeof(BP_SkillEffect_Unique_ThunderSword_Wave_C_SetDirection) == 0x000028, "Wrong size on BP_SkillEffect_Unique_ThunderSword_Wave_C_SetDirection");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_SetDirection, NewDirct) == 0x000000, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_SetDirection::NewDirct' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_SetDirection, DirctIndex) == 0x000018, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_SetDirection::DirctIndex' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_SetDirection, WaveCount) == 0x00001C, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_SetDirection::WaveCount' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_SetDirection, InitialAngle) == 0x000020, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_SetDirection::InitialAngle' has a wrong offset!");

// Function BP_SkillEffect_Unique_ThunderSword_Wave.BP_SkillEffect_Unique_ThunderSword_Wave_C.SetLifeTime
// 0x0008 (0x0008 - 0x0000)
struct BP_SkillEffect_Unique_ThunderSword_Wave_C_SetLifeTime final
{
public:
	double                                        Time;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_Unique_ThunderSword_Wave_C_SetLifeTime) == 0x000008, "Wrong alignment on BP_SkillEffect_Unique_ThunderSword_Wave_C_SetLifeTime");
static_assert(sizeof(BP_SkillEffect_Unique_ThunderSword_Wave_C_SetLifeTime) == 0x000008, "Wrong size on BP_SkillEffect_Unique_ThunderSword_Wave_C_SetLifeTime");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_Wave_C_SetLifeTime, Time) == 0x000000, "Member 'BP_SkillEffect_Unique_ThunderSword_Wave_C_SetLifeTime::Time' has a wrong offset!");

}

