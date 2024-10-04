#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "EPalCaptureSphereState_structs.hpp"
#include "E_PalCaptureSphereBouncedReason_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function BP_PalSphere_Body.BP_PalSphere_Body_C.BallShakeTick
// 0x0258 (0x0258 - 0x0000)
struct BP_PalSphere_Body_C_BallShakeTick final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0008(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetVectorValue_ReturnValue;               // 0x0118(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0130(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x0148(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult_1;  // 0x0168(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_GetVectorValue_InTime_ImplicitCast;       // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_Body_C_BallShakeTick) == 0x000008, "Wrong alignment on BP_PalSphere_Body_C_BallShakeTick");
static_assert(sizeof(BP_PalSphere_Body_C_BallShakeTick) == 0x000258, "Wrong size on BP_PalSphere_Body_C_BallShakeTick");
static_assert(offsetof(BP_PalSphere_Body_C_BallShakeTick, DeltaTime) == 0x000000, "Member 'BP_PalSphere_Body_C_BallShakeTick::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_BallShakeTick, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000008, "Member 'BP_PalSphere_Body_C_BallShakeTick::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_BallShakeTick, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x0000F0, "Member 'BP_PalSphere_Body_C_BallShakeTick::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_BallShakeTick, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000108, "Member 'BP_PalSphere_Body_C_BallShakeTick::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_BallShakeTick, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000110, "Member 'BP_PalSphere_Body_C_BallShakeTick::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_BallShakeTick, CallFunc_GetVectorValue_ReturnValue) == 0x000118, "Member 'BP_PalSphere_Body_C_BallShakeTick::CallFunc_GetVectorValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_BallShakeTick, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000130, "Member 'BP_PalSphere_Body_C_BallShakeTick::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_BallShakeTick, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x000148, "Member 'BP_PalSphere_Body_C_BallShakeTick::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_BallShakeTick, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000160, "Member 'BP_PalSphere_Body_C_BallShakeTick::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_BallShakeTick, CallFunc_K2_SetRelativeRotation_SweepHitResult_1) == 0x000168, "Member 'BP_PalSphere_Body_C_BallShakeTick::CallFunc_K2_SetRelativeRotation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_BallShakeTick, CallFunc_GetVectorValue_InTime_ImplicitCast) == 0x000250, "Member 'BP_PalSphere_Body_C_BallShakeTick::CallFunc_GetVectorValue_InTime_ImplicitCast' has a wrong offset!");

// Function BP_PalSphere_Body.BP_PalSphere_Body_C.CheckBouncedReason
// 0x0080 (0x0080 - 0x0000)
struct BP_PalSphere_Body_C_CheckBouncedReason final
{
public:
	E_PalCaptureSphereBouncedReason               ReasonType;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetTargetActor_TargetActor;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsWildNPC_ReturnValue;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetTargetActor_TargetActor_1;             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCaptureLevel_level;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetTargetActor_TargetActor_2;             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevel_ReturnValue;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFixedPoint64                          CallFunc_GetHP_ReturnValue;                        // 0x0038(0x0008)(NoDestructor)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;  // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFixedPoint64                          CallFunc_GetMaxHP_ReturnValue;                     // 0x0050(0x0008)(NoDestructor)
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1; // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_Body_C_CheckBouncedReason) == 0x000008, "Wrong alignment on BP_PalSphere_Body_C_CheckBouncedReason");
static_assert(sizeof(BP_PalSphere_Body_C_CheckBouncedReason) == 0x000080, "Wrong size on BP_PalSphere_Body_C_CheckBouncedReason");
static_assert(offsetof(BP_PalSphere_Body_C_CheckBouncedReason, ReasonType) == 0x000000, "Member 'BP_PalSphere_Body_C_CheckBouncedReason::ReasonType' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_CheckBouncedReason, CallFunc_GetTargetActor_TargetActor) == 0x000008, "Member 'BP_PalSphere_Body_C_CheckBouncedReason::CallFunc_GetTargetActor_TargetActor' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_CheckBouncedReason, CallFunc_IsWildNPC_ReturnValue) == 0x000010, "Member 'BP_PalSphere_Body_C_CheckBouncedReason::CallFunc_IsWildNPC_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_CheckBouncedReason, CallFunc_GetTargetActor_TargetActor_1) == 0x000018, "Member 'BP_PalSphere_Body_C_CheckBouncedReason::CallFunc_GetTargetActor_TargetActor_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_CheckBouncedReason, CallFunc_GetCaptureLevel_level) == 0x000020, "Member 'BP_PalSphere_Body_C_CheckBouncedReason::CallFunc_GetCaptureLevel_level' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_CheckBouncedReason, CallFunc_GetTargetActor_TargetActor_2) == 0x000028, "Member 'BP_PalSphere_Body_C_CheckBouncedReason::CallFunc_GetTargetActor_TargetActor_2' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_CheckBouncedReason, CallFunc_GetLevel_ReturnValue) == 0x000030, "Member 'BP_PalSphere_Body_C_CheckBouncedReason::CallFunc_GetLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_CheckBouncedReason, CallFunc_GetHP_ReturnValue) == 0x000038, "Member 'BP_PalSphere_Body_C_CheckBouncedReason::CallFunc_GetHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_CheckBouncedReason, CallFunc_Subtract_IntInt_ReturnValue) == 0x000040, "Member 'BP_PalSphere_Body_C_CheckBouncedReason::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_CheckBouncedReason, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue) == 0x000044, "Member 'BP_PalSphere_Body_C_CheckBouncedReason::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_CheckBouncedReason, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000048, "Member 'BP_PalSphere_Body_C_CheckBouncedReason::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_CheckBouncedReason, CallFunc_GetMaxHP_ReturnValue) == 0x000050, "Member 'BP_PalSphere_Body_C_CheckBouncedReason::CallFunc_GetMaxHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_CheckBouncedReason, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1) == 0x000058, "Member 'BP_PalSphere_Body_C_CheckBouncedReason::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_CheckBouncedReason, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000060, "Member 'BP_PalSphere_Body_C_CheckBouncedReason::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_CheckBouncedReason, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000068, "Member 'BP_PalSphere_Body_C_CheckBouncedReason::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_CheckBouncedReason, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000070, "Member 'BP_PalSphere_Body_C_CheckBouncedReason::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_CheckBouncedReason, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000078, "Member 'BP_PalSphere_Body_C_CheckBouncedReason::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");

// Function BP_PalSphere_Body.BP_PalSphere_Body_C.DelayPassingPhase
// 0x0010 (0x0010 - 0x0000)
struct BP_PalSphere_Body_C_DelayPassingPhase final
{
public:
	int32                                         Phase;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DelayTime;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_Body_C_DelayPassingPhase) == 0x000008, "Wrong alignment on BP_PalSphere_Body_C_DelayPassingPhase");
static_assert(sizeof(BP_PalSphere_Body_C_DelayPassingPhase) == 0x000010, "Wrong size on BP_PalSphere_Body_C_DelayPassingPhase");
static_assert(offsetof(BP_PalSphere_Body_C_DelayPassingPhase, Phase) == 0x000000, "Member 'BP_PalSphere_Body_C_DelayPassingPhase::Phase' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_DelayPassingPhase, DelayTime) == 0x000008, "Member 'BP_PalSphere_Body_C_DelayPassingPhase::DelayTime' has a wrong offset!");

// Function BP_PalSphere_Body.BP_PalSphere_Body_C.DelayPassingPhase_WithEffect
// 0x0010 (0x0010 - 0x0000)
struct BP_PalSphere_Body_C_DelayPassingPhase_WithEffect final
{
public:
	int32                                         Phase;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DelayTime;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_Body_C_DelayPassingPhase_WithEffect) == 0x000008, "Wrong alignment on BP_PalSphere_Body_C_DelayPassingPhase_WithEffect");
static_assert(sizeof(BP_PalSphere_Body_C_DelayPassingPhase_WithEffect) == 0x000010, "Wrong size on BP_PalSphere_Body_C_DelayPassingPhase_WithEffect");
static_assert(offsetof(BP_PalSphere_Body_C_DelayPassingPhase_WithEffect, Phase) == 0x000000, "Member 'BP_PalSphere_Body_C_DelayPassingPhase_WithEffect::Phase' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_DelayPassingPhase_WithEffect, DelayTime) == 0x000008, "Member 'BP_PalSphere_Body_C_DelayPassingPhase_WithEffect::DelayTime' has a wrong offset!");

// Function BP_PalSphere_Body.BP_PalSphere_Body_C.ExecuteUbergraph_BP_PalSphere_Body
// 0x0498 (0x0498 - 0x0000)
struct BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalVisualEffectDynamicParameterFloat  K2Node_MakeStruct_PalVisualEffectDynamicParameterFloat; // 0x0028(0x000C)(NoDestructor)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPalVisualEffectDynamicParameterFloat> K2Node_MakeArray_Array;                            // 0x0050(0x0010)(ReferenceParm)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalVisualEffectDynamicParameter       K2Node_MakeStruct_PalVisualEffectDynamicParameter; // 0x0078(0x0010)()
	struct FRotator                               CallFunc_MakeRotFromY_ReturnValue;                 // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APalCharacter*                          CallFunc_GetTargetActor_TargetActor;               // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalVisualEffectBase*                   CallFunc_AddVisualEffectForActor_ReturnValue;      // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetTargetHandle_targetHandle;             // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 PhaseCount, class UPalIndividualCharacterHandle* TargetHandle)> K2Node_CreateDelegate_OutputDelegate;              // 0x00C0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_GetTargetHandle_targetHandle_1;           // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetTargetActor_TargetActor_1;             // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EA[0x6];                                       // 0x00EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_CustomEvent_Delay;                          // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetTargetActor_TargetActor_2;             // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_2;               // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_112[0x6];                                      // 0x0112(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetTargetActor_TargetActor_3;             // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_phase_1;                        // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_124[0x4];                                      // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_CustomEvent_DelayTime_1;                    // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetTargetHandle_targetHandle_2;           // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_phase;                          // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13C[0x4];                                      // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_CustomEvent_DelayTime;                      // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0148(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentScale_ReturnValue;         // 0x0160(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue_1;      // 0x0178(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0184(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0185(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_186[0x2];                                      // 0x0186(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Array_Get_Item;                           // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetTargetActor_TargetActor_4;             // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A1[0x3];                                      // 0x01A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Round_ReturnValue;                        // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A9[0x7];                                      // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionComponent*                    CallFunc_GetActionComponent_ReturnValue;           // 0x01B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalVisualEffectBase*                   K2Node_CustomEvent_visualEffect;                   // 0x01B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_phaseCount;                     // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C4[0x4];                                      // 0x01C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          K2Node_CustomEvent_targetHandle;                   // 0x01C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetTargetHandle_targetHandle_3;           // 0x01D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetTargetActor_TargetActor_5;             // 0x01D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x01E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetTargetActor_TargetActor_6;             // 0x01E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalAIController*                       K2Node_DynamicCast_AsPal_AIController;             // 0x01F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F9[0x7];                                      // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalVisualEffectBase*                   CallFunc_AddVisualEffectForActor_ReturnValue_1;    // 0x0200(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetTargetActor_TargetActor_7;             // 0x0208(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetTargetActor_TargetActor_8;             // 0x0210(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetPalCharacterMovementComponent_ReturnValue; // 0x0218(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetTargetActor_TargetActor_9;             // 0x0220(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetTargetActor_TargetActor_10;            // 0x0228(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_AdjustActorToFloor_ReturnValue;           // 0x0230(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetTargetActor_TargetActor_11;            // 0x0238(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0240(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x0248(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0260(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0268(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0350(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_351[0x7];                                      // 0x0351(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_CustomEvent_GoolLocation;                   // 0x0358(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetTargetActor_TargetActor_12;            // 0x0370(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalVisualEffectBase* VisualEffect)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0378(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalVisualEffectBase*                   CallFunc_AddVisualEffectForActor_ReturnValue_2;    // 0x0388(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0390(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RandomUnitVector_ReturnValue;             // 0x03A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                  K2Node_CustomEvent_JudgeFlagArray;                 // 0x03C0(0x0010)(ConstParm, ReferenceParm)
	TArray<double>                                K2Node_CustomEvent_JudgeRateArray;                 // 0x03D0(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x03E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x03F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_PalCaptureSphereBouncedReason               CallFunc_CheckBouncedReason_ReasonType;            // 0x0410(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_3;               // 0x0411(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_412[0x6];                                      // 0x0412(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraSystem*                         CallFunc_Map_Find_Value;                           // 0x0418(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0420(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_421[0x7];                                      // 0x0421(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue_2;      // 0x0428(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetTargetActor_TargetActor_13;            // 0x0430(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetTargetHandle_targetHandle_4;           // 0x0438(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDamageReactionComponent*            CallFunc_GetComponentByClass_ReturnValue;          // 0x0440(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0448(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_449[0x7];                                      // 0x0449(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetTargetActor_TargetActor_14;            // 0x0450(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_FindOwnerPlayer_Player;                   // 0x0458(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue_1; // 0x0460(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0468(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_469[0x7];                                      // 0x0469(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_TickMovement_HitedBall_DeltaTime_ImplicitCast; // 0x0470(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Judging_DeltaTime_ImplicitCast;           // 0x0478(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_TickMovement_MoveToSky_DeltaTime_ImplicitCast; // 0x0480(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x0488(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast_1;            // 0x048C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast_2;            // 0x0490(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body) == 0x000008, "Wrong alignment on BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body");
static_assert(sizeof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body) == 0x000498, "Wrong size on BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, EntryPoint) == 0x000000, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000008, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000020, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, K2Node_MakeStruct_PalVisualEffectDynamicParameterFloat) == 0x000028, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::K2Node_MakeStruct_PalVisualEffectDynamicParameterFloat' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000038, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, K2Node_MakeArray_Array) == 0x000050, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000060, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, K2Node_MakeStruct_PalVisualEffectDynamicParameter) == 0x000078, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::K2Node_MakeStruct_PalVisualEffectDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_MakeRotFromY_ReturnValue) == 0x000088, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_MakeRotFromY_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_GetTargetActor_TargetActor) == 0x0000A0, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_GetTargetActor_TargetActor' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x0000A8, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_AddVisualEffectForActor_ReturnValue) == 0x0000B0, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_AddVisualEffectForActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_GetTargetHandle_targetHandle) == 0x0000B8, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_GetTargetHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, K2Node_CreateDelegate_OutputDelegate) == 0x0000C0, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, K2Node_SwitchEnum_CmpSuccess) == 0x0000D0, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_GetTargetHandle_targetHandle_1) == 0x0000D8, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_GetTargetHandle_targetHandle_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_GetTargetActor_TargetActor_1) == 0x0000E0, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_GetTargetActor_TargetActor_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_HasAuthority_ReturnValue) == 0x0000E8, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_IsValid_ReturnValue) == 0x0000E9, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x0000F0, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, K2Node_CustomEvent_Delay) == 0x0000F8, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::K2Node_CustomEvent_Delay' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_HasAuthority_ReturnValue_1) == 0x000100, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_GetTargetActor_TargetActor_2) == 0x000108, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_GetTargetActor_TargetActor_2' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_HasAuthority_ReturnValue_2) == 0x000110, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_HasAuthority_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_IsValid_ReturnValue_1) == 0x000111, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_GetTargetActor_TargetActor_3) == 0x000118, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_GetTargetActor_TargetActor_3' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, K2Node_CustomEvent_phase_1) == 0x000120, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::K2Node_CustomEvent_phase_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, K2Node_CustomEvent_DelayTime_1) == 0x000128, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::K2Node_CustomEvent_DelayTime_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_GetTargetHandle_targetHandle_2) == 0x000130, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_GetTargetHandle_targetHandle_2' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, K2Node_CustomEvent_phase) == 0x000138, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::K2Node_CustomEvent_phase' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, K2Node_CustomEvent_DelayTime) == 0x000140, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::K2Node_CustomEvent_DelayTime' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000148, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_K2_GetComponentScale_ReturnValue) == 0x000160, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_K2_GetComponentScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_SpawnSystemAtLocation_ReturnValue_1) == 0x000178, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_SpawnSystemAtLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_Array_Length_ReturnValue) == 0x000180, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000184, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000185, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_Array_Get_Item) == 0x000188, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_GetTargetActor_TargetActor_4) == 0x000190, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_GetTargetActor_TargetActor_4' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000198, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_IsValid_ReturnValue_2) == 0x0001A0, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_Round_ReturnValue) == 0x0001A4, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x0001A8, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_GetActionComponent_ReturnValue) == 0x0001B0, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_GetActionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, K2Node_CustomEvent_visualEffect) == 0x0001B8, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::K2Node_CustomEvent_visualEffect' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, K2Node_CustomEvent_phaseCount) == 0x0001C0, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::K2Node_CustomEvent_phaseCount' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, K2Node_CustomEvent_targetHandle) == 0x0001C8, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::K2Node_CustomEvent_targetHandle' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_GetTargetHandle_targetHandle_3) == 0x0001D0, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_GetTargetHandle_targetHandle_3' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_GetTargetActor_TargetActor_5) == 0x0001D8, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_GetTargetActor_TargetActor_5' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_GetController_ReturnValue) == 0x0001E0, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_GetTargetActor_TargetActor_6) == 0x0001E8, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_GetTargetActor_TargetActor_6' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, K2Node_DynamicCast_AsPal_AIController) == 0x0001F0, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::K2Node_DynamicCast_AsPal_AIController' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, K2Node_DynamicCast_bSuccess) == 0x0001F8, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_AddVisualEffectForActor_ReturnValue_1) == 0x000200, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_AddVisualEffectForActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_GetTargetActor_TargetActor_7) == 0x000208, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_GetTargetActor_TargetActor_7' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_GetTargetActor_TargetActor_8) == 0x000210, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_GetTargetActor_TargetActor_8' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_GetPalCharacterMovementComponent_ReturnValue) == 0x000218, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_GetPalCharacterMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_GetTargetActor_TargetActor_9) == 0x000220, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_GetTargetActor_TargetActor_9' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_GetTargetActor_TargetActor_10) == 0x000228, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_GetTargetActor_TargetActor_10' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_AdjustActorToFloor_ReturnValue) == 0x000230, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_AdjustActorToFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_GetTargetActor_TargetActor_11) == 0x000238, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_GetTargetActor_TargetActor_11' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_GetMainMesh_ReturnValue) == 0x000240, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000248, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_GetAnimInstance_ReturnValue) == 0x000260, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000268, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000350, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, K2Node_CustomEvent_GoolLocation) == 0x000358, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::K2Node_CustomEvent_GoolLocation' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_GetTargetActor_TargetActor_12) == 0x000370, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_GetTargetActor_TargetActor_12' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, K2Node_CreateDelegate_OutputDelegate_1) == 0x000378, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_AddVisualEffectForActor_ReturnValue_2) == 0x000388, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_AddVisualEffectForActor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000390, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_RandomUnitVector_ReturnValue) == 0x0003A8, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_RandomUnitVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, K2Node_CustomEvent_JudgeFlagArray) == 0x0003C0, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::K2Node_CustomEvent_JudgeFlagArray' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, K2Node_CustomEvent_JudgeRateArray) == 0x0003D0, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::K2Node_CustomEvent_JudgeRateArray' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x0003E0, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0003F8, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_CheckBouncedReason_ReasonType) == 0x000410, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_CheckBouncedReason_ReasonType' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_HasAuthority_ReturnValue_3) == 0x000411, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_HasAuthority_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_Map_Find_Value) == 0x000418, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_Map_Find_ReturnValue) == 0x000420, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_SpawnSystemAtLocation_ReturnValue_2) == 0x000428, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_SpawnSystemAtLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_GetTargetActor_TargetActor_13) == 0x000430, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_GetTargetActor_TargetActor_13' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_GetTargetHandle_targetHandle_4) == 0x000438, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_GetTargetHandle_targetHandle_4' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_GetComponentByClass_ReturnValue) == 0x000440, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_IsValid_ReturnValue_3) == 0x000448, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_GetTargetActor_TargetActor_14) == 0x000450, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_GetTargetActor_TargetActor_14' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_FindOwnerPlayer_Player) == 0x000458, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_FindOwnerPlayer_Player' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_GetCharacterParameterComponent_ReturnValue_1) == 0x000460, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_GetCharacterParameterComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_IsValid_ReturnValue_4) == 0x000468, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_TickMovement_HitedBall_DeltaTime_ImplicitCast) == 0x000470, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_TickMovement_HitedBall_DeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_Judging_DeltaTime_ImplicitCast) == 0x000478, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_Judging_DeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_TickMovement_MoveToSky_DeltaTime_ImplicitCast) == 0x000480, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_TickMovement_MoveToSky_DeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_Delay_Duration_ImplicitCast) == 0x000488, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_Delay_Duration_ImplicitCast_1) == 0x00048C, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_Delay_Duration_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body, CallFunc_Delay_Duration_ImplicitCast_2) == 0x000490, "Member 'BP_PalSphere_Body_C_ExecuteUbergraph_BP_PalSphere_Body::CallFunc_Delay_Duration_ImplicitCast_2' has a wrong offset!");

// Function BP_PalSphere_Body.BP_PalSphere_Body_C.FindOwnerPlayer
// 0x0068 (0x0068 - 0x0000)
struct BP_PalSphere_Body_C_FindOwnerPlayer final
{
public:
	class APalPlayerCharacter*                    Player;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalRideMarkerComponent*                CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetRiderCharacter_ReturnValue;            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character;         // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character_1;       // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x6];                                       // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;                   // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character_2;       // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_Body_C_FindOwnerPlayer) == 0x000008, "Wrong alignment on BP_PalSphere_Body_C_FindOwnerPlayer");
static_assert(sizeof(BP_PalSphere_Body_C_FindOwnerPlayer) == 0x000068, "Wrong size on BP_PalSphere_Body_C_FindOwnerPlayer");
static_assert(offsetof(BP_PalSphere_Body_C_FindOwnerPlayer, Player) == 0x000000, "Member 'BP_PalSphere_Body_C_FindOwnerPlayer::Player' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_FindOwnerPlayer, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_PalSphere_Body_C_FindOwnerPlayer::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_FindOwnerPlayer, CallFunc_GetOwner_ReturnValue_1) == 0x000010, "Member 'BP_PalSphere_Body_C_FindOwnerPlayer::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_FindOwnerPlayer, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'BP_PalSphere_Body_C_FindOwnerPlayer::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_FindOwnerPlayer, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000020, "Member 'BP_PalSphere_Body_C_FindOwnerPlayer::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_FindOwnerPlayer, CallFunc_GetRiderCharacter_ReturnValue) == 0x000028, "Member 'BP_PalSphere_Body_C_FindOwnerPlayer::CallFunc_GetRiderCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_FindOwnerPlayer, K2Node_DynamicCast_AsPal_Player_Character) == 0x000030, "Member 'BP_PalSphere_Body_C_FindOwnerPlayer::K2Node_DynamicCast_AsPal_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_FindOwnerPlayer, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_PalSphere_Body_C_FindOwnerPlayer::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_FindOwnerPlayer, K2Node_DynamicCast_AsPal_Player_Character_1) == 0x000040, "Member 'BP_PalSphere_Body_C_FindOwnerPlayer::K2Node_DynamicCast_AsPal_Player_Character_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_FindOwnerPlayer, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'BP_PalSphere_Body_C_FindOwnerPlayer::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_FindOwnerPlayer, CallFunc_IsValid_ReturnValue) == 0x000049, "Member 'BP_PalSphere_Body_C_FindOwnerPlayer::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_FindOwnerPlayer, CallFunc_GetOwner_ReturnValue_2) == 0x000050, "Member 'BP_PalSphere_Body_C_FindOwnerPlayer::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_FindOwnerPlayer, K2Node_DynamicCast_AsPal_Player_Character_2) == 0x000058, "Member 'BP_PalSphere_Body_C_FindOwnerPlayer::K2Node_DynamicCast_AsPal_Player_Character_2' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_FindOwnerPlayer, K2Node_DynamicCast_bSuccess_2) == 0x000060, "Member 'BP_PalSphere_Body_C_FindOwnerPlayer::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

// Function BP_PalSphere_Body.BP_PalSphere_Body_C.FlyToSkyEvent
// 0x0008 (0x0008 - 0x0000)
struct BP_PalSphere_Body_C_FlyToSkyEvent final
{
public:
	double                                        Delay;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_Body_C_FlyToSkyEvent) == 0x000008, "Wrong alignment on BP_PalSphere_Body_C_FlyToSkyEvent");
static_assert(sizeof(BP_PalSphere_Body_C_FlyToSkyEvent) == 0x000008, "Wrong size on BP_PalSphere_Body_C_FlyToSkyEvent");
static_assert(offsetof(BP_PalSphere_Body_C_FlyToSkyEvent, Delay) == 0x000000, "Member 'BP_PalSphere_Body_C_FlyToSkyEvent::Delay' has a wrong offset!");

// Function BP_PalSphere_Body.BP_PalSphere_Body_C.intoBall
// 0x0018 (0x0018 - 0x0000)
struct BP_PalSphere_Body_C_IntoBall final
{
public:
	struct FVector                                GoolLocation;                                      // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_Body_C_IntoBall) == 0x000008, "Wrong alignment on BP_PalSphere_Body_C_IntoBall");
static_assert(sizeof(BP_PalSphere_Body_C_IntoBall) == 0x000018, "Wrong size on BP_PalSphere_Body_C_IntoBall");
static_assert(offsetof(BP_PalSphere_Body_C_IntoBall, GoolLocation) == 0x000000, "Member 'BP_PalSphere_Body_C_IntoBall::GoolLocation' has a wrong offset!");

// Function BP_PalSphere_Body.BP_PalSphere_Body_C.IsSkipFirstJudge
// 0x00A0 (0x00A0 - 0x0000)
struct BP_PalSphere_Body_C_IsSkipFirstJudge final
{
public:
	class UPalCharacterParameterComponent*        Parameter;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<double>                                RateList;                                          // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          IsSkip;                                            // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Rate;                                              // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsWildNPC_ReturnValue;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFixedPoint64                          CallFunc_GetMaxHP_ReturnValue;                     // 0x0040(0x0008)(NoDestructor)
	struct FFixedPoint64                          CallFunc_GetHP_ReturnValue;                        // 0x0048(0x0008)(NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFixedPoint64                          CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue; // 0x0058(0x0008)(NoDestructor)
	bool                                          CallFunc_IsSneakBonusEnabled_enabled;              // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62[0x2];                                       // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Array_Get_Item;                           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSneakBonusEnabled_enabled_1;            // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FixedPoint64Float_ReturnValue;  // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_Body_C_IsSkipFirstJudge) == 0x000008, "Wrong alignment on BP_PalSphere_Body_C_IsSkipFirstJudge");
static_assert(sizeof(BP_PalSphere_Body_C_IsSkipFirstJudge) == 0x0000A0, "Wrong size on BP_PalSphere_Body_C_IsSkipFirstJudge");
static_assert(offsetof(BP_PalSphere_Body_C_IsSkipFirstJudge, Parameter) == 0x000000, "Member 'BP_PalSphere_Body_C_IsSkipFirstJudge::Parameter' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_IsSkipFirstJudge, RateList) == 0x000008, "Member 'BP_PalSphere_Body_C_IsSkipFirstJudge::RateList' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_IsSkipFirstJudge, IsSkip) == 0x000018, "Member 'BP_PalSphere_Body_C_IsSkipFirstJudge::IsSkip' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_IsSkipFirstJudge, Rate) == 0x000020, "Member 'BP_PalSphere_Body_C_IsSkipFirstJudge::Rate' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_IsSkipFirstJudge, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_PalSphere_Body_C_IsSkipFirstJudge::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_IsSkipFirstJudge, CallFunc_GetOwner_ReturnValue) == 0x000030, "Member 'BP_PalSphere_Body_C_IsSkipFirstJudge::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_IsSkipFirstJudge, CallFunc_IsWildNPC_ReturnValue) == 0x000038, "Member 'BP_PalSphere_Body_C_IsSkipFirstJudge::CallFunc_IsWildNPC_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_IsSkipFirstJudge, CallFunc_GetMaxHP_ReturnValue) == 0x000040, "Member 'BP_PalSphere_Body_C_IsSkipFirstJudge::CallFunc_GetMaxHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_IsSkipFirstJudge, CallFunc_GetHP_ReturnValue) == 0x000048, "Member 'BP_PalSphere_Body_C_IsSkipFirstJudge::CallFunc_GetHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_IsSkipFirstJudge, Temp_int_Array_Index_Variable) == 0x000050, "Member 'BP_PalSphere_Body_C_IsSkipFirstJudge::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_IsSkipFirstJudge, CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue) == 0x000058, "Member 'BP_PalSphere_Body_C_IsSkipFirstJudge::CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_IsSkipFirstJudge, CallFunc_IsSneakBonusEnabled_enabled) == 0x000060, "Member 'BP_PalSphere_Body_C_IsSkipFirstJudge::CallFunc_IsSneakBonusEnabled_enabled' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_IsSkipFirstJudge, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000061, "Member 'BP_PalSphere_Body_C_IsSkipFirstJudge::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_IsSkipFirstJudge, Temp_int_Loop_Counter_Variable) == 0x000064, "Member 'BP_PalSphere_Body_C_IsSkipFirstJudge::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_IsSkipFirstJudge, CallFunc_Array_Get_Item) == 0x000068, "Member 'BP_PalSphere_Body_C_IsSkipFirstJudge::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_IsSkipFirstJudge, CallFunc_Array_Length_ReturnValue) == 0x000070, "Member 'BP_PalSphere_Body_C_IsSkipFirstJudge::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_IsSkipFirstJudge, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000078, "Member 'BP_PalSphere_Body_C_IsSkipFirstJudge::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_IsSkipFirstJudge, CallFunc_Less_IntInt_ReturnValue) == 0x000080, "Member 'BP_PalSphere_Body_C_IsSkipFirstJudge::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_IsSkipFirstJudge, CallFunc_Add_IntInt_ReturnValue) == 0x000084, "Member 'BP_PalSphere_Body_C_IsSkipFirstJudge::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_IsSkipFirstJudge, CallFunc_IsSneakBonusEnabled_enabled_1) == 0x000088, "Member 'BP_PalSphere_Body_C_IsSkipFirstJudge::CallFunc_IsSneakBonusEnabled_enabled_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_IsSkipFirstJudge, CallFunc_GetGameSetting_ReturnValue) == 0x000090, "Member 'BP_PalSphere_Body_C_IsSkipFirstJudge::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_IsSkipFirstJudge, CallFunc_LessEqual_FixedPoint64Float_ReturnValue) == 0x000098, "Member 'BP_PalSphere_Body_C_IsSkipFirstJudge::CallFunc_LessEqual_FixedPoint64Float_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_IsSkipFirstJudge, CallFunc_BooleanOR_ReturnValue) == 0x000099, "Member 'BP_PalSphere_Body_C_IsSkipFirstJudge::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function BP_PalSphere_Body.BP_PalSphere_Body_C.JudgeProcess
// 0x0098 (0x0098 - 0x0000)
struct BP_PalSphere_Body_C_JudgeProcess final
{
public:
	int32                                         JudgeIndex;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0010(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0060(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0070(0x0018)()
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Get_Item;                           // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_Body_C_JudgeProcess) == 0x000008, "Wrong alignment on BP_PalSphere_Body_C_JudgeProcess");
static_assert(sizeof(BP_PalSphere_Body_C_JudgeProcess) == 0x000098, "Wrong size on BP_PalSphere_Body_C_JudgeProcess");
static_assert(offsetof(BP_PalSphere_Body_C_JudgeProcess, JudgeIndex) == 0x000000, "Member 'BP_PalSphere_Body_C_JudgeProcess::JudgeIndex' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_JudgeProcess, Result) == 0x000004, "Member 'BP_PalSphere_Body_C_JudgeProcess::Result' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_JudgeProcess, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000008, "Member 'BP_PalSphere_Body_C_JudgeProcess::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_JudgeProcess, K2Node_MakeStruct_FormatArgumentData) == 0x000010, "Member 'BP_PalSphere_Body_C_JudgeProcess::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_JudgeProcess, K2Node_MakeArray_Array) == 0x000060, "Member 'BP_PalSphere_Body_C_JudgeProcess::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_JudgeProcess, CallFunc_Format_ReturnValue) == 0x000070, "Member 'BP_PalSphere_Body_C_JudgeProcess::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_JudgeProcess, CallFunc_GetGameSetting_ReturnValue) == 0x000088, "Member 'BP_PalSphere_Body_C_JudgeProcess::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_JudgeProcess, CallFunc_Array_Get_Item) == 0x000090, "Member 'BP_PalSphere_Body_C_JudgeProcess::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_JudgeProcess, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000091, "Member 'BP_PalSphere_Body_C_JudgeProcess::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

// Function BP_PalSphere_Body.BP_PalSphere_Body_C.Judging
// 0x0040 (0x0040 - 0x0000)
struct BP_PalSphere_Body_C_Judging final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PrevIndexFullPercentage_IsFull;           // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E[0x2];                                        // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_JudgeProcess_result;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue_1;             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_Body_C_Judging) == 0x000008, "Wrong alignment on BP_PalSphere_Body_C_Judging");
static_assert(sizeof(BP_PalSphere_Body_C_Judging) == 0x000040, "Wrong size on BP_PalSphere_Body_C_Judging");
static_assert(offsetof(BP_PalSphere_Body_C_Judging, DeltaTime) == 0x000000, "Member 'BP_PalSphere_Body_C_Judging::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_Judging, Temp_int_Variable) == 0x000008, "Member 'BP_PalSphere_Body_C_Judging::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_Judging, CallFunc_HasAuthority_ReturnValue) == 0x00000C, "Member 'BP_PalSphere_Body_C_Judging::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_Judging, CallFunc_PrevIndexFullPercentage_IsFull) == 0x00000D, "Member 'BP_PalSphere_Body_C_Judging::CallFunc_PrevIndexFullPercentage_IsFull' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_Judging, CallFunc_GetGameSetting_ReturnValue) == 0x000010, "Member 'BP_PalSphere_Body_C_Judging::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_Judging, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'BP_PalSphere_Body_C_Judging::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_Judging, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'BP_PalSphere_Body_C_Judging::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_Judging, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000020, "Member 'BP_PalSphere_Body_C_Judging::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_Judging, CallFunc_JudgeProcess_result) == 0x000021, "Member 'BP_PalSphere_Body_C_Judging::CallFunc_JudgeProcess_result' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_Judging, CallFunc_GetGameSetting_ReturnValue_1) == 0x000028, "Member 'BP_PalSphere_Body_C_Judging::CallFunc_GetGameSetting_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_Judging, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000030, "Member 'BP_PalSphere_Body_C_Judging::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_Judging, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000031, "Member 'BP_PalSphere_Body_C_Judging::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_Judging, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000038, "Member 'BP_PalSphere_Body_C_Judging::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");

// Function BP_PalSphere_Body.BP_PalSphere_Body_C.OnCompleteCaptureEmissiveEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_PalSphere_Body_C_OnCompleteCaptureEmissiveEffect final
{
public:
	class UPalVisualEffectBase*                   VisualEffect;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_Body_C_OnCompleteCaptureEmissiveEffect) == 0x000008, "Wrong alignment on BP_PalSphere_Body_C_OnCompleteCaptureEmissiveEffect");
static_assert(sizeof(BP_PalSphere_Body_C_OnCompleteCaptureEmissiveEffect) == 0x000008, "Wrong size on BP_PalSphere_Body_C_OnCompleteCaptureEmissiveEffect");
static_assert(offsetof(BP_PalSphere_Body_C_OnCompleteCaptureEmissiveEffect, VisualEffect) == 0x000000, "Member 'BP_PalSphere_Body_C_OnCompleteCaptureEmissiveEffect::VisualEffect' has a wrong offset!");

// Function BP_PalSphere_Body.BP_PalSphere_Body_C.OnPassingCapturePhase_イベント_0
// 0x0010 (0x0010 - 0x0000)
struct BP_PalSphere_Body_C_OnPassingCapturePhase______________0 final
{
public:
	int32                                         PhaseCount;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          TargetHandle_0;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_Body_C_OnPassingCapturePhase______________0) == 0x000008, "Wrong alignment on BP_PalSphere_Body_C_OnPassingCapturePhase______________0");
static_assert(sizeof(BP_PalSphere_Body_C_OnPassingCapturePhase______________0) == 0x000010, "Wrong size on BP_PalSphere_Body_C_OnPassingCapturePhase______________0");
static_assert(offsetof(BP_PalSphere_Body_C_OnPassingCapturePhase______________0, PhaseCount) == 0x000000, "Member 'BP_PalSphere_Body_C_OnPassingCapturePhase______________0::PhaseCount' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_OnPassingCapturePhase______________0, TargetHandle_0) == 0x000008, "Member 'BP_PalSphere_Body_C_OnPassingCapturePhase______________0::TargetHandle_0' has a wrong offset!");

// Function BP_PalSphere_Body.BP_PalSphere_Body_C.PlayBallCenterEffect
// 0x0038 (0x0038 - 0x0000)
struct BP_PalSphere_Body_C_PlayBallCenterEffect final
{
public:
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentScale_ReturnValue;         // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_Body_C_PlayBallCenterEffect) == 0x000008, "Wrong alignment on BP_PalSphere_Body_C_PlayBallCenterEffect");
static_assert(sizeof(BP_PalSphere_Body_C_PlayBallCenterEffect) == 0x000038, "Wrong size on BP_PalSphere_Body_C_PlayBallCenterEffect");
static_assert(offsetof(BP_PalSphere_Body_C_PlayBallCenterEffect, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000000, "Member 'BP_PalSphere_Body_C_PlayBallCenterEffect::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_PlayBallCenterEffect, CallFunc_K2_GetComponentScale_ReturnValue) == 0x000018, "Member 'BP_PalSphere_Body_C_PlayBallCenterEffect::CallFunc_K2_GetComponentScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_PlayBallCenterEffect, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000030, "Member 'BP_PalSphere_Body_C_PlayBallCenterEffect::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");

// Function BP_PalSphere_Body.BP_PalSphere_Body_C.PlayCaptureAbsorbToBallEffect
// 0x01C0 (0x01C0 - 0x0000)
struct BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetTargetActor_TargetActor;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetTargetActor_TargetActor_1;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue_1;                // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0030(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue_1;     // 0x0090(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0108(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0120(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location_1;                // 0x0138(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;                // 0x0150(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_1;                   // 0x0168(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0180(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0188(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x01A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect) == 0x000010, "Wrong alignment on BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect");
static_assert(sizeof(BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect) == 0x0001C0, "Wrong size on BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect");
static_assert(offsetof(BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect, CallFunc_GetTargetActor_TargetActor) == 0x000008, "Member 'BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect::CallFunc_GetTargetActor_TargetActor' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect, CallFunc_GetTargetActor_TargetActor_1) == 0x000010, "Member 'BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect::CallFunc_GetTargetActor_TargetActor_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect, CallFunc_GetMainMesh_ReturnValue) == 0x000018, "Member 'BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect, CallFunc_GetMainMesh_ReturnValue_1) == 0x000020, "Member 'BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect::CallFunc_GetMainMesh_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000030, "Member 'BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect, CallFunc_K2_GetComponentToWorld_ReturnValue_1) == 0x000090, "Member 'BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect::CallFunc_K2_GetComponentToWorld_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect, CallFunc_BreakTransform_Location) == 0x0000F0, "Member 'BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect, CallFunc_BreakTransform_Rotation) == 0x000108, "Member 'BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect, CallFunc_BreakTransform_Scale) == 0x000120, "Member 'BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect, CallFunc_BreakTransform_Location_1) == 0x000138, "Member 'BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect, CallFunc_BreakTransform_Rotation_1) == 0x000150, "Member 'BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect, CallFunc_BreakTransform_Scale_1) == 0x000168, "Member 'BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect::CallFunc_BreakTransform_Scale_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000180, "Member 'BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000188, "Member 'BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect, CallFunc_Normal_ReturnValue) == 0x0001A0, "Member 'BP_PalSphere_Body_C_PlayCaptureAbsorbToBallEffect::CallFunc_Normal_ReturnValue' has a wrong offset!");

// Function BP_PalSphere_Body.BP_PalSphere_Body_C.PlayOpenSphereEffect
// 0x0020 (0x0020 - 0x0000)
struct BP_PalSphere_Body_C_PlayOpenSphereEffect final
{
public:
	struct FVector                                CallFunc_K2_GetComponentScale_ReturnValue;         // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_Body_C_PlayOpenSphereEffect) == 0x000008, "Wrong alignment on BP_PalSphere_Body_C_PlayOpenSphereEffect");
static_assert(sizeof(BP_PalSphere_Body_C_PlayOpenSphereEffect) == 0x000020, "Wrong size on BP_PalSphere_Body_C_PlayOpenSphereEffect");
static_assert(offsetof(BP_PalSphere_Body_C_PlayOpenSphereEffect, CallFunc_K2_GetComponentScale_ReturnValue) == 0x000000, "Member 'BP_PalSphere_Body_C_PlayOpenSphereEffect::CallFunc_K2_GetComponentScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_PlayOpenSphereEffect, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000018, "Member 'BP_PalSphere_Body_C_PlayOpenSphereEffect::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");

// Function BP_PalSphere_Body.BP_PalSphere_Body_C.PrevIndexFullPercentage
// 0x0028 (0x0028 - 0x0000)
struct BP_PalSphere_Body_C_PrevIndexFullPercentage final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFull;                                            // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_Body_C_PrevIndexFullPercentage) == 0x000008, "Wrong alignment on BP_PalSphere_Body_C_PrevIndexFullPercentage");
static_assert(sizeof(BP_PalSphere_Body_C_PrevIndexFullPercentage) == 0x000028, "Wrong size on BP_PalSphere_Body_C_PrevIndexFullPercentage");
static_assert(offsetof(BP_PalSphere_Body_C_PrevIndexFullPercentage, Index_0) == 0x000000, "Member 'BP_PalSphere_Body_C_PrevIndexFullPercentage::Index_0' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_PrevIndexFullPercentage, IsFull) == 0x000004, "Member 'BP_PalSphere_Body_C_PrevIndexFullPercentage::IsFull' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_PrevIndexFullPercentage, CallFunc_Subtract_IntInt_ReturnValue) == 0x000008, "Member 'BP_PalSphere_Body_C_PrevIndexFullPercentage::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_PrevIndexFullPercentage, CallFunc_Array_IsValidIndex_ReturnValue) == 0x00000C, "Member 'BP_PalSphere_Body_C_PrevIndexFullPercentage::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_PrevIndexFullPercentage, CallFunc_Array_Get_Item) == 0x000010, "Member 'BP_PalSphere_Body_C_PrevIndexFullPercentage::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_PrevIndexFullPercentage, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000018, "Member 'BP_PalSphere_Body_C_PrevIndexFullPercentage::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_PrevIndexFullPercentage, CallFunc_Round_ReturnValue) == 0x000020, "Member 'BP_PalSphere_Body_C_PrevIndexFullPercentage::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_PrevIndexFullPercentage, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000024, "Member 'BP_PalSphere_Body_C_PrevIndexFullPercentage::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_PalSphere_Body.BP_PalSphere_Body_C.SetCaptureState
// 0x0001 (0x0001 - 0x0000)
struct BP_PalSphere_Body_C_SetCaptureState final
{
public:
	EPalCaptureSphereState                        NewState;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_Body_C_SetCaptureState) == 0x000001, "Wrong alignment on BP_PalSphere_Body_C_SetCaptureState");
static_assert(sizeof(BP_PalSphere_Body_C_SetCaptureState) == 0x000001, "Wrong size on BP_PalSphere_Body_C_SetCaptureState");
static_assert(offsetof(BP_PalSphere_Body_C_SetCaptureState, NewState) == 0x000000, "Member 'BP_PalSphere_Body_C_SetCaptureState::NewState' has a wrong offset!");

// Function BP_PalSphere_Body.BP_PalSphere_Body_C.SetParameterCaptureAbsorbToBallEffectBySize
// 0x0028 (0x0028 - 0x0000)
struct BP_PalSphere_Body_C_SetParameterCaptureAbsorbToBallEffectBySize final
{
public:
	class UNiagaraComponent*                      Effect;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FPalCaptureBallEffectSettingData       EffectSettingData;                                 // 0x0008(0x0008)(Edit, BlueprintVisible, NoDestructor)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetTargetActor_TargetActor;               // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalCaptureBallEffectSettingData       CallFunc_GetEffectSettingData_ReturnValue;         // 0x0020(0x0008)(ConstParm, NoDestructor)
};
static_assert(alignof(BP_PalSphere_Body_C_SetParameterCaptureAbsorbToBallEffectBySize) == 0x000008, "Wrong alignment on BP_PalSphere_Body_C_SetParameterCaptureAbsorbToBallEffectBySize");
static_assert(sizeof(BP_PalSphere_Body_C_SetParameterCaptureAbsorbToBallEffectBySize) == 0x000028, "Wrong size on BP_PalSphere_Body_C_SetParameterCaptureAbsorbToBallEffectBySize");
static_assert(offsetof(BP_PalSphere_Body_C_SetParameterCaptureAbsorbToBallEffectBySize, Effect) == 0x000000, "Member 'BP_PalSphere_Body_C_SetParameterCaptureAbsorbToBallEffectBySize::Effect' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetParameterCaptureAbsorbToBallEffectBySize, EffectSettingData) == 0x000008, "Member 'BP_PalSphere_Body_C_SetParameterCaptureAbsorbToBallEffectBySize::EffectSettingData' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetParameterCaptureAbsorbToBallEffectBySize, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000010, "Member 'BP_PalSphere_Body_C_SetParameterCaptureAbsorbToBallEffectBySize::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetParameterCaptureAbsorbToBallEffectBySize, CallFunc_GetTargetActor_TargetActor) == 0x000018, "Member 'BP_PalSphere_Body_C_SetParameterCaptureAbsorbToBallEffectBySize::CallFunc_GetTargetActor_TargetActor' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetParameterCaptureAbsorbToBallEffectBySize, CallFunc_GetEffectSettingData_ReturnValue) == 0x000020, "Member 'BP_PalSphere_Body_C_SetParameterCaptureAbsorbToBallEffectBySize::CallFunc_GetEffectSettingData_ReturnValue' has a wrong offset!");

// Function BP_PalSphere_Body.BP_PalSphere_Body_C.StopTargetPal
// 0x0048 (0x0048 - 0x0000)
struct BP_PalSphere_Body_C_StopTargetPal final
{
public:
	class APalCharacter*                          CallFunc_GetTargetActor_TargetActor;               // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetTargetActor_TargetActor_1;             // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalAIController*                       K2Node_DynamicCast_AsPal_AIController;             // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetPalCharacterMovementComponent_ReturnValue; // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_Body_C_StopTargetPal) == 0x000008, "Wrong alignment on BP_PalSphere_Body_C_StopTargetPal");
static_assert(sizeof(BP_PalSphere_Body_C_StopTargetPal) == 0x000048, "Wrong size on BP_PalSphere_Body_C_StopTargetPal");
static_assert(offsetof(BP_PalSphere_Body_C_StopTargetPal, CallFunc_GetTargetActor_TargetActor) == 0x000000, "Member 'BP_PalSphere_Body_C_StopTargetPal::CallFunc_GetTargetActor_TargetActor' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_StopTargetPal, CallFunc_GetTargetActor_TargetActor_1) == 0x000008, "Member 'BP_PalSphere_Body_C_StopTargetPal::CallFunc_GetTargetActor_TargetActor_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_StopTargetPal, CallFunc_GetController_ReturnValue) == 0x000010, "Member 'BP_PalSphere_Body_C_StopTargetPal::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_StopTargetPal, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'BP_PalSphere_Body_C_StopTargetPal::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_StopTargetPal, K2Node_DynamicCast_AsPal_AIController) == 0x000020, "Member 'BP_PalSphere_Body_C_StopTargetPal::K2Node_DynamicCast_AsPal_AIController' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_StopTargetPal, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_PalSphere_Body_C_StopTargetPal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_StopTargetPal, CallFunc_GetMainMesh_ReturnValue) == 0x000030, "Member 'BP_PalSphere_Body_C_StopTargetPal::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_StopTargetPal, CallFunc_GetPalCharacterMovementComponent_ReturnValue) == 0x000038, "Member 'BP_PalSphere_Body_C_StopTargetPal::CallFunc_GetPalCharacterMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_StopTargetPal, CallFunc_GetAnimInstance_ReturnValue) == 0x000040, "Member 'BP_PalSphere_Body_C_StopTargetPal::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");

// Function BP_PalSphere_Body.BP_PalSphere_Body_C.SynchronizeJudgeParameter
// 0x0020 (0x0020 - 0x0000)
struct BP_PalSphere_Body_C_SynchronizeJudgeParameter final
{
public:
	TArray<bool>                                  JudgeFlagArray;                                    // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<double>                                JudgeRateArray;                                    // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_PalSphere_Body_C_SynchronizeJudgeParameter) == 0x000008, "Wrong alignment on BP_PalSphere_Body_C_SynchronizeJudgeParameter");
static_assert(sizeof(BP_PalSphere_Body_C_SynchronizeJudgeParameter) == 0x000020, "Wrong size on BP_PalSphere_Body_C_SynchronizeJudgeParameter");
static_assert(offsetof(BP_PalSphere_Body_C_SynchronizeJudgeParameter, JudgeFlagArray) == 0x000000, "Member 'BP_PalSphere_Body_C_SynchronizeJudgeParameter::JudgeFlagArray' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SynchronizeJudgeParameter, JudgeRateArray) == 0x000010, "Member 'BP_PalSphere_Body_C_SynchronizeJudgeParameter::JudgeRateArray' has a wrong offset!");

// Function BP_PalSphere_Body.BP_PalSphere_Body_C.TickMovement_HitedBall
// 0x0350 (0x0350 - 0x0000)
struct BP_PalSphere_Body_C_TickMovement_HitedBall final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLocalIsComplete;                                  // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetTargetActor_TargetActor;               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0030(0x0010)(ConstParm, ReferenceParm)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_ReturnValue;                         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VEase_ReturnValue;                        // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_SphereTraceSingle_OutHit;                 // 0x0098(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_SphereTraceSingle_ReturnValue;            // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_181[0x7];                                      // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0188(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0271(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0272(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_273[0x1];                                      // 0x0273(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0274(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27C[0x4];                                      // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0280(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0298(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x02B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x02C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x02E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x02E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x02F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x02F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x030C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_314[0x4];                                      // 0x0314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0318(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0330(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VEase_Alpha_ImplicitCast;                 // 0x0348(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SphereTraceSingle_Radius_ImplicitCast;    // 0x034C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_Body_C_TickMovement_HitedBall) == 0x000008, "Wrong alignment on BP_PalSphere_Body_C_TickMovement_HitedBall");
static_assert(sizeof(BP_PalSphere_Body_C_TickMovement_HitedBall) == 0x000350, "Wrong size on BP_PalSphere_Body_C_TickMovement_HitedBall");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, DeltaTime) == 0x000000, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, bLocalIsComplete) == 0x000008, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::bLocalIsComplete' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, CallFunc_GetTargetActor_TargetActor) == 0x000010, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::CallFunc_GetTargetActor_TargetActor' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, K2Node_MakeArray_Array) == 0x000030, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000040, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000048, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, CallFunc_FClamp_ReturnValue) == 0x000050, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, CallFunc_Lerp_ReturnValue) == 0x000058, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000060, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000068, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, CallFunc_VEase_ReturnValue) == 0x000080, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::CallFunc_VEase_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, CallFunc_SphereTraceSingle_OutHit) == 0x000098, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::CallFunc_SphereTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, CallFunc_SphereTraceSingle_ReturnValue) == 0x000180, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::CallFunc_SphereTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000188, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000270, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, CallFunc_BreakHitResult_bBlockingHit) == 0x000271, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, CallFunc_BreakHitResult_bInitialOverlap) == 0x000272, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, CallFunc_BreakHitResult_Time) == 0x000274, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, CallFunc_BreakHitResult_Distance) == 0x000278, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, CallFunc_BreakHitResult_Location) == 0x000280, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, CallFunc_BreakHitResult_ImpactPoint) == 0x000298, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, CallFunc_BreakHitResult_Normal) == 0x0002B0, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, CallFunc_BreakHitResult_ImpactNormal) == 0x0002C8, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, CallFunc_BreakHitResult_PhysMat) == 0x0002E0, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, CallFunc_BreakHitResult_HitActor) == 0x0002E8, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, CallFunc_BreakHitResult_HitComponent) == 0x0002F0, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, CallFunc_BreakHitResult_HitBoneName) == 0x0002F8, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, CallFunc_BreakHitResult_BoneName) == 0x000300, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, CallFunc_BreakHitResult_HitItem) == 0x000308, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, CallFunc_BreakHitResult_ElementIndex) == 0x00030C, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, CallFunc_BreakHitResult_FaceIndex) == 0x000310, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, CallFunc_BreakHitResult_TraceStart) == 0x000318, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, CallFunc_BreakHitResult_TraceEnd) == 0x000330, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, CallFunc_VEase_Alpha_ImplicitCast) == 0x000348, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::CallFunc_VEase_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_HitedBall, CallFunc_SphereTraceSingle_Radius_ImplicitCast) == 0x00034C, "Member 'BP_PalSphere_Body_C_TickMovement_HitedBall::CallFunc_SphereTraceSingle_Radius_ImplicitCast' has a wrong offset!");

// Function BP_PalSphere_Body.BP_PalSphere_Body_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_PalSphere_Body_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_Body_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_PalSphere_Body_C_ReceiveTick");
static_assert(sizeof(BP_PalSphere_Body_C_ReceiveTick) == 0x000004, "Wrong size on BP_PalSphere_Body_C_ReceiveTick");
static_assert(offsetof(BP_PalSphere_Body_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_PalSphere_Body_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_PalSphere_Body.BP_PalSphere_Body_C.SetupInServer
// 0x0198 (0x0198 - 0x0000)
struct BP_PalSphere_Body_C_SetupInServer final
{
public:
	class APalCharacter*                          TargetCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsCapturedProcessing_ReturnValue;      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x001B(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwnerCharacterOrRiderCharacter_Character; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalInstanceID                         CallFunc_GetIndividualIDByActor_ReturnValue;       // 0x0028(0x0030)(HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwnerCharacterOrRiderCharacter_Character_1; // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character;         // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterManager*                   CallFunc_GetCharacterManager_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetCameraRotator_ReturnValue;             // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPalIndividualCharacterHandle*          CallFunc_GetIndividualHandle_ReturnValue;          // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x00F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0110(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetTargetHandle_targetHandle;             // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Get_Item;                           // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_139[0x3];                                      // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_141[0x3];                                      // 0x0141(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCaptureLevel_level;                    // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                  CallFunc_JudgePalCapture_TryAllPhase_outJudgeFlagArray; // 0x0148(0x0010)(ReferenceParm)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_CalcCaptureRate_ReturnValue;              // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                 CallFunc_GetCalculatedCaptureRate_outCalculatedRateArray; // 0x0160(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsSkipFirstJudge_isSkip;                  // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_171[0x7];                                      // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<double>                                CallFunc_IsSkipFirstJudge_RateList_ImplicitCast;   // 0x0178(0x0010)(ReferenceParm)
	TArray<double>                                K2Node_VariableSet_RateArray_ImplicitCast;         // 0x0188(0x0010)(ReferenceParm)
};
static_assert(alignof(BP_PalSphere_Body_C_SetupInServer) == 0x000008, "Wrong alignment on BP_PalSphere_Body_C_SetupInServer");
static_assert(sizeof(BP_PalSphere_Body_C_SetupInServer) == 0x000198, "Wrong size on BP_PalSphere_Body_C_SetupInServer");
static_assert(offsetof(BP_PalSphere_Body_C_SetupInServer, TargetCharacter) == 0x000000, "Member 'BP_PalSphere_Body_C_SetupInServer::TargetCharacter' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetupInServer, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_PalSphere_Body_C_SetupInServer::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetupInServer, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x000010, "Member 'BP_PalSphere_Body_C_SetupInServer::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetupInServer, CallFunc_IsValid_ReturnValue_1) == 0x000018, "Member 'BP_PalSphere_Body_C_SetupInServer::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetupInServer, CallFunc_GetIsCapturedProcessing_ReturnValue) == 0x000019, "Member 'BP_PalSphere_Body_C_SetupInServer::CallFunc_GetIsCapturedProcessing_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetupInServer, CallFunc_IsValid_ReturnValue_2) == 0x00001A, "Member 'BP_PalSphere_Body_C_SetupInServer::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetupInServer, Temp_bool_Variable) == 0x00001B, "Member 'BP_PalSphere_Body_C_SetupInServer::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetupInServer, CallFunc_GetOwnerCharacterOrRiderCharacter_Character) == 0x000020, "Member 'BP_PalSphere_Body_C_SetupInServer::CallFunc_GetOwnerCharacterOrRiderCharacter_Character' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetupInServer, CallFunc_GetIndividualIDByActor_ReturnValue) == 0x000028, "Member 'BP_PalSphere_Body_C_SetupInServer::CallFunc_GetIndividualIDByActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetupInServer, CallFunc_GetOwnerCharacterOrRiderCharacter_Character_1) == 0x000058, "Member 'BP_PalSphere_Body_C_SetupInServer::CallFunc_GetOwnerCharacterOrRiderCharacter_Character_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetupInServer, K2Node_DynamicCast_AsPal_Player_Character) == 0x000060, "Member 'BP_PalSphere_Body_C_SetupInServer::K2Node_DynamicCast_AsPal_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetupInServer, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'BP_PalSphere_Body_C_SetupInServer::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetupInServer, CallFunc_GetCharacterManager_ReturnValue) == 0x000070, "Member 'BP_PalSphere_Body_C_SetupInServer::CallFunc_GetCharacterManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetupInServer, CallFunc_GetCameraRotator_ReturnValue) == 0x000078, "Member 'BP_PalSphere_Body_C_SetupInServer::CallFunc_GetCameraRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetupInServer, CallFunc_GetIndividualHandle_ReturnValue) == 0x000090, "Member 'BP_PalSphere_Body_C_SetupInServer::CallFunc_GetIndividualHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetupInServer, CallFunc_GreaterGreater_VectorRotator_ReturnValue) == 0x000098, "Member 'BP_PalSphere_Body_C_SetupInServer::CallFunc_GreaterGreater_VectorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetupInServer, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000B0, "Member 'BP_PalSphere_Body_C_SetupInServer::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetupInServer, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0000C8, "Member 'BP_PalSphere_Body_C_SetupInServer::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetupInServer, CallFunc_Add_VectorVector_ReturnValue) == 0x0000E0, "Member 'BP_PalSphere_Body_C_SetupInServer::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetupInServer, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000F8, "Member 'BP_PalSphere_Body_C_SetupInServer::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetupInServer, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000110, "Member 'BP_PalSphere_Body_C_SetupInServer::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetupInServer, CallFunc_GetTargetHandle_targetHandle) == 0x000128, "Member 'BP_PalSphere_Body_C_SetupInServer::CallFunc_GetTargetHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetupInServer, CallFunc_GetGameSetting_ReturnValue) == 0x000130, "Member 'BP_PalSphere_Body_C_SetupInServer::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetupInServer, CallFunc_Array_Get_Item) == 0x000138, "Member 'BP_PalSphere_Body_C_SetupInServer::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetupInServer, CallFunc_Array_Length_ReturnValue) == 0x00013C, "Member 'BP_PalSphere_Body_C_SetupInServer::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetupInServer, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000140, "Member 'BP_PalSphere_Body_C_SetupInServer::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetupInServer, CallFunc_GetCaptureLevel_level) == 0x000144, "Member 'BP_PalSphere_Body_C_SetupInServer::CallFunc_GetCaptureLevel_level' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetupInServer, CallFunc_JudgePalCapture_TryAllPhase_outJudgeFlagArray) == 0x000148, "Member 'BP_PalSphere_Body_C_SetupInServer::CallFunc_JudgePalCapture_TryAllPhase_outJudgeFlagArray' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetupInServer, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000158, "Member 'BP_PalSphere_Body_C_SetupInServer::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetupInServer, CallFunc_CalcCaptureRate_ReturnValue) == 0x00015C, "Member 'BP_PalSphere_Body_C_SetupInServer::CallFunc_CalcCaptureRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetupInServer, CallFunc_GetCalculatedCaptureRate_outCalculatedRateArray) == 0x000160, "Member 'BP_PalSphere_Body_C_SetupInServer::CallFunc_GetCalculatedCaptureRate_outCalculatedRateArray' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetupInServer, CallFunc_IsSkipFirstJudge_isSkip) == 0x000170, "Member 'BP_PalSphere_Body_C_SetupInServer::CallFunc_IsSkipFirstJudge_isSkip' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetupInServer, CallFunc_IsSkipFirstJudge_RateList_ImplicitCast) == 0x000178, "Member 'BP_PalSphere_Body_C_SetupInServer::CallFunc_IsSkipFirstJudge_RateList_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_SetupInServer, K2Node_VariableSet_RateArray_ImplicitCast) == 0x000188, "Member 'BP_PalSphere_Body_C_SetupInServer::K2Node_VariableSet_RateArray_ImplicitCast' has a wrong offset!");

// Function BP_PalSphere_Body.BP_PalSphere_Body_C.TickMovement_MoveToSky
// 0x0110 (0x0110 - 0x0000)
struct BP_PalSphere_Body_C_TickMovement_MoveToSky final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_AddWorldOffset_SweepHitResult;         // 0x0028(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_PalSphere_Body_C_TickMovement_MoveToSky) == 0x000008, "Wrong alignment on BP_PalSphere_Body_C_TickMovement_MoveToSky");
static_assert(sizeof(BP_PalSphere_Body_C_TickMovement_MoveToSky) == 0x000110, "Wrong size on BP_PalSphere_Body_C_TickMovement_MoveToSky");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_MoveToSky, DeltaTime) == 0x000000, "Member 'BP_PalSphere_Body_C_TickMovement_MoveToSky::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_MoveToSky, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000008, "Member 'BP_PalSphere_Body_C_TickMovement_MoveToSky::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_MoveToSky, CallFunc_MakeVector_ReturnValue) == 0x000010, "Member 'BP_PalSphere_Body_C_TickMovement_MoveToSky::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_Body_C_TickMovement_MoveToSky, CallFunc_K2_AddWorldOffset_SweepHitResult) == 0x000028, "Member 'BP_PalSphere_Body_C_TickMovement_MoveToSky::CallFunc_K2_AddWorldOffset_SweepHitResult' has a wrong offset!");

}

