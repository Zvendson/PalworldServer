#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function ABP_GrassPanda_Implementation.ABP_GrassPanda_Implementation_C.UpperOverride
// 0x0030 (0x0030 - 0x0000)
struct ABP_GrassPanda_Implementation_C_UpperOverride final
{
public:
	struct FPoseLink                              NativePose;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              ActionPose;                                        // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              UpperOverride_0;                                   // 0x0020(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_GrassPanda_Implementation_C_UpperOverride) == 0x000008, "Wrong alignment on ABP_GrassPanda_Implementation_C_UpperOverride");
static_assert(sizeof(ABP_GrassPanda_Implementation_C_UpperOverride) == 0x000030, "Wrong size on ABP_GrassPanda_Implementation_C_UpperOverride");
static_assert(offsetof(ABP_GrassPanda_Implementation_C_UpperOverride, NativePose) == 0x000000, "Member 'ABP_GrassPanda_Implementation_C_UpperOverride::NativePose' has a wrong offset!");
static_assert(offsetof(ABP_GrassPanda_Implementation_C_UpperOverride, ActionPose) == 0x000010, "Member 'ABP_GrassPanda_Implementation_C_UpperOverride::ActionPose' has a wrong offset!");
static_assert(offsetof(ABP_GrassPanda_Implementation_C_UpperOverride, UpperOverride_0) == 0x000020, "Member 'ABP_GrassPanda_Implementation_C_UpperOverride::UpperOverride_0' has a wrong offset!");

// Function ABP_GrassPanda_Implementation.ABP_GrassPanda_Implementation_C.LookAtOverride
// 0x0038 (0x0038 - 0x0000)
struct ABP_GrassPanda_Implementation_C_LookAtOverride final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FVector                                LookAtWorldLocation_0;                             // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                              LookAtOverride_0;                                  // 0x0028(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_GrassPanda_Implementation_C_LookAtOverride) == 0x000008, "Wrong alignment on ABP_GrassPanda_Implementation_C_LookAtOverride");
static_assert(sizeof(ABP_GrassPanda_Implementation_C_LookAtOverride) == 0x000038, "Wrong size on ABP_GrassPanda_Implementation_C_LookAtOverride");
static_assert(offsetof(ABP_GrassPanda_Implementation_C_LookAtOverride, InPose) == 0x000000, "Member 'ABP_GrassPanda_Implementation_C_LookAtOverride::InPose' has a wrong offset!");
static_assert(offsetof(ABP_GrassPanda_Implementation_C_LookAtOverride, LookAtWorldLocation_0) == 0x000010, "Member 'ABP_GrassPanda_Implementation_C_LookAtOverride::LookAtWorldLocation_0' has a wrong offset!");
static_assert(offsetof(ABP_GrassPanda_Implementation_C_LookAtOverride, LookAtOverride_0) == 0x000028, "Member 'ABP_GrassPanda_Implementation_C_LookAtOverride::LookAtOverride_0' has a wrong offset!");

// Function ABP_GrassPanda_Implementation.ABP_GrassPanda_Implementation_C.ExecuteUbergraph_ABP_GrassPanda_Implementation
// 0x0040 (0x0040 - 0x0000)
struct ABP_GrassPanda_Implementation_C_ExecuteUbergraph_ABP_GrassPanda_Implementation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Roll_ImplicitCast;            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_GrassPanda_Implementation_C_ExecuteUbergraph_ABP_GrassPanda_Implementation) == 0x000008, "Wrong alignment on ABP_GrassPanda_Implementation_C_ExecuteUbergraph_ABP_GrassPanda_Implementation");
static_assert(sizeof(ABP_GrassPanda_Implementation_C_ExecuteUbergraph_ABP_GrassPanda_Implementation) == 0x000040, "Wrong size on ABP_GrassPanda_Implementation_C_ExecuteUbergraph_ABP_GrassPanda_Implementation");
static_assert(offsetof(ABP_GrassPanda_Implementation_C_ExecuteUbergraph_ABP_GrassPanda_Implementation, EntryPoint) == 0x000000, "Member 'ABP_GrassPanda_Implementation_C_ExecuteUbergraph_ABP_GrassPanda_Implementation::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_GrassPanda_Implementation_C_ExecuteUbergraph_ABP_GrassPanda_Implementation, CallFunc_BreakRotator_Roll) == 0x000004, "Member 'ABP_GrassPanda_Implementation_C_ExecuteUbergraph_ABP_GrassPanda_Implementation::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(ABP_GrassPanda_Implementation_C_ExecuteUbergraph_ABP_GrassPanda_Implementation, CallFunc_BreakRotator_Pitch) == 0x000008, "Member 'ABP_GrassPanda_Implementation_C_ExecuteUbergraph_ABP_GrassPanda_Implementation::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(ABP_GrassPanda_Implementation_C_ExecuteUbergraph_ABP_GrassPanda_Implementation, CallFunc_BreakRotator_Yaw) == 0x00000C, "Member 'ABP_GrassPanda_Implementation_C_ExecuteUbergraph_ABP_GrassPanda_Implementation::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(ABP_GrassPanda_Implementation_C_ExecuteUbergraph_ABP_GrassPanda_Implementation, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000010, "Member 'ABP_GrassPanda_Implementation_C_ExecuteUbergraph_ABP_GrassPanda_Implementation::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_GrassPanda_Implementation_C_ExecuteUbergraph_ABP_GrassPanda_Implementation, CallFunc_MakeRotator_ReturnValue) == 0x000018, "Member 'ABP_GrassPanda_Implementation_C_ExecuteUbergraph_ABP_GrassPanda_Implementation::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_GrassPanda_Implementation_C_ExecuteUbergraph_ABP_GrassPanda_Implementation, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000030, "Member 'ABP_GrassPanda_Implementation_C_ExecuteUbergraph_ABP_GrassPanda_Implementation::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ABP_GrassPanda_Implementation_C_ExecuteUbergraph_ABP_GrassPanda_Implementation, CallFunc_MakeRotator_Roll_ImplicitCast) == 0x000038, "Member 'ABP_GrassPanda_Implementation_C_ExecuteUbergraph_ABP_GrassPanda_Implementation::CallFunc_MakeRotator_Roll_ImplicitCast' has a wrong offset!");

// Function ABP_GrassPanda_Implementation.ABP_GrassPanda_Implementation_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_GrassPanda_Implementation_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_GrassPanda_Implementation_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_GrassPanda_Implementation_C_AnimGraph");
static_assert(sizeof(ABP_GrassPanda_Implementation_C_AnimGraph) == 0x000010, "Wrong size on ABP_GrassPanda_Implementation_C_AnimGraph");
static_assert(offsetof(ABP_GrassPanda_Implementation_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'ABP_GrassPanda_Implementation_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function ABP_GrassPanda_Implementation.ABP_GrassPanda_Implementation_C.AimingOverride
// 0x0038 (0x0038 - 0x0000)
struct ABP_GrassPanda_Implementation_C_AimingOverride final
{
public:
	struct FPoseLink                              DefaultPose;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FRotator                               AimRotator_0;                                      // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FPoseLink                              AimingOverride_0;                                  // 0x0028(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_GrassPanda_Implementation_C_AimingOverride) == 0x000008, "Wrong alignment on ABP_GrassPanda_Implementation_C_AimingOverride");
static_assert(sizeof(ABP_GrassPanda_Implementation_C_AimingOverride) == 0x000038, "Wrong size on ABP_GrassPanda_Implementation_C_AimingOverride");
static_assert(offsetof(ABP_GrassPanda_Implementation_C_AimingOverride, DefaultPose) == 0x000000, "Member 'ABP_GrassPanda_Implementation_C_AimingOverride::DefaultPose' has a wrong offset!");
static_assert(offsetof(ABP_GrassPanda_Implementation_C_AimingOverride, AimRotator_0) == 0x000010, "Member 'ABP_GrassPanda_Implementation_C_AimingOverride::AimRotator_0' has a wrong offset!");
static_assert(offsetof(ABP_GrassPanda_Implementation_C_AimingOverride, AimingOverride_0) == 0x000028, "Member 'ABP_GrassPanda_Implementation_C_AimingOverride::AimingOverride_0' has a wrong offset!");

}

