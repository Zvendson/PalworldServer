#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_PalSkeletalMeshComponent_AutoRotation.BP_PalSkeletalMeshComponent_AutoRotation_C.ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation
// 0x0170 (0x0170 - 0x0000)
struct BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_AddRelativeRotation_SweepHitResult;    // 0x0048(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1;   // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast_2;   // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2;   // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Roll_ImplicitCast;            // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Pitch_ImplicitCast;           // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation) == 0x000008, "Wrong alignment on BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation");
static_assert(sizeof(BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation) == 0x000170, "Wrong size on BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation");
static_assert(offsetof(BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation, EntryPoint) == 0x000000, "Member 'BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation, CallFunc_BreakRotator_Roll) == 0x000004, "Member 'BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation, CallFunc_BreakRotator_Pitch) == 0x000008, "Member 'BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation, CallFunc_BreakRotator_Yaw) == 0x00000C, "Member 'BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation, K2Node_Event_DeltaSeconds) == 0x000010, "Member 'BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000018, "Member 'BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000020, "Member 'BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000028, "Member 'BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation, CallFunc_MakeRotator_ReturnValue) == 0x000030, "Member 'BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation, CallFunc_K2_AddRelativeRotation_SweepHitResult) == 0x000048, "Member 'BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation::CallFunc_K2_AddRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x000130, "Member 'BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation, CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1) == 0x000138, "Member 'BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation::CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation, CallFunc_Multiply_DoubleDouble_B_ImplicitCast_2) == 0x000140, "Member 'BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation::CallFunc_Multiply_DoubleDouble_B_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000148, "Member 'BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1) == 0x000150, "Member 'BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2) == 0x000158, "Member 'BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x000160, "Member 'BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation, CallFunc_MakeRotator_Roll_ImplicitCast) == 0x000164, "Member 'BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation::CallFunc_MakeRotator_Roll_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation, CallFunc_MakeRotator_Pitch_ImplicitCast) == 0x000168, "Member 'BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation::CallFunc_MakeRotator_Pitch_ImplicitCast' has a wrong offset!");

// Function BP_PalSkeletalMeshComponent_AutoRotation.BP_PalSkeletalMeshComponent_AutoRotation_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_PalSkeletalMeshComponent_AutoRotation_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSkeletalMeshComponent_AutoRotation_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_PalSkeletalMeshComponent_AutoRotation_C_ReceiveTick");
static_assert(sizeof(BP_PalSkeletalMeshComponent_AutoRotation_C_ReceiveTick) == 0x000004, "Wrong size on BP_PalSkeletalMeshComponent_AutoRotation_C_ReceiveTick");
static_assert(offsetof(BP_PalSkeletalMeshComponent_AutoRotation_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_PalSkeletalMeshComponent_AutoRotation_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

