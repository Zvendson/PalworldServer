#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_Skill_RootAttack.BP_Skill_RootAttack_C.ExecuteUbergraph_BP_Skill_RootAttack
// 0x0180 (0x0180 - 0x0000)
struct BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_RideTarget;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Vector;                         // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_AdjustActorToFloor_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0040(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0058(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0080(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Skill_RootAttack_Road_C*            CallFunc_FinishSpawningActor_ReturnValue;          // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x00F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x0110(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Skill_RootAttack_Attack_C*          CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack) == 0x000010, "Wrong alignment on BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack");
static_assert(sizeof(BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack) == 0x000180, "Wrong size on BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack");
static_assert(offsetof(BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack, EntryPoint) == 0x000000, "Member 'BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack, K2Node_CustomEvent_RideTarget) == 0x000008, "Member 'BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack::K2Node_CustomEvent_RideTarget' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack, K2Node_CustomEvent_Vector) == 0x000010, "Member 'BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack::K2Node_CustomEvent_Vector' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack, CallFunc_AdjustActorToFloor_ReturnValue) == 0x000028, "Member 'BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack::CallFunc_AdjustActorToFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000040, "Member 'BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack, K2Node_CreateDelegate_OutputDelegate_1) == 0x000048, "Member 'BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000058, "Member 'BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack, CallFunc_GetOwner_ReturnValue) == 0x000060, "Member 'BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000068, "Member 'BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack, CallFunc_MakeTransform_ReturnValue) == 0x000080, "Member 'BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000E0, "Member 'BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000E8, "Member 'BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack, CallFunc_GetOwner_ReturnValue_1) == 0x0000F0, "Member 'BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000F8, "Member 'BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack, CallFunc_MakeTransform_ReturnValue_1) == 0x000110, "Member 'BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1) == 0x000170, "Member 'BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack, CallFunc_FinishSpawningActor_ReturnValue_1) == 0x000178, "Member 'BP_Skill_RootAttack_C_ExecuteUbergraph_BP_Skill_RootAttack::CallFunc_FinishSpawningActor_ReturnValue_1' has a wrong offset!");

// Function BP_Skill_RootAttack.BP_Skill_RootAttack_C.ReceiveTick
// 0x0238 (0x0238 - 0x0000)
struct BP_Skill_RootAttack_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 TargetActor;                                       // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTargetActor_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMin_ReturnValue;                         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x00C0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A9[0x7];                                      // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x01B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x01C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_AdjustActorToFloor_ReturnValue;           // 0x01E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSizeXY_ReturnValue;                      // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Vector_Normal2D_ReturnValue;              // 0x01F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0208(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_219[0x7];                                      // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0220(0x0008)(NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Skill_RootAttack_C_ReceiveTick) == 0x000008, "Wrong alignment on BP_Skill_RootAttack_C_ReceiveTick");
static_assert(sizeof(BP_Skill_RootAttack_C_ReceiveTick) == 0x000238, "Wrong size on BP_Skill_RootAttack_C_ReceiveTick");
static_assert(offsetof(BP_Skill_RootAttack_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_Skill_RootAttack_C_ReceiveTick::DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ReceiveTick, TargetActor) == 0x000008, "Member 'BP_Skill_RootAttack_C_ReceiveTick::TargetActor' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ReceiveTick, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'BP_Skill_RootAttack_C_ReceiveTick::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ReceiveTick, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_Skill_RootAttack_C_ReceiveTick::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ReceiveTick, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000030, "Member 'BP_Skill_RootAttack_C_ReceiveTick::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ReceiveTick, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000038, "Member 'BP_Skill_RootAttack_C_ReceiveTick::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ReceiveTick, CallFunc_GetActionTargetActor_ReturnValue) == 0x000040, "Member 'BP_Skill_RootAttack_C_ReceiveTick::CallFunc_GetActionTargetActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ReceiveTick, CallFunc_FMin_ReturnValue) == 0x000048, "Member 'BP_Skill_RootAttack_C_ReceiveTick::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ReceiveTick, CallFunc_IsValid_ReturnValue_1) == 0x000050, "Member 'BP_Skill_RootAttack_C_ReceiveTick::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ReceiveTick, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000058, "Member 'BP_Skill_RootAttack_C_ReceiveTick::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ReceiveTick, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000070, "Member 'BP_Skill_RootAttack_C_ReceiveTick::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ReceiveTick, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000088, "Member 'BP_Skill_RootAttack_C_ReceiveTick::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ReceiveTick, CallFunc_Add_VectorVector_ReturnValue) == 0x0000A0, "Member 'BP_Skill_RootAttack_C_ReceiveTick::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ReceiveTick, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x0000B8, "Member 'BP_Skill_RootAttack_C_ReceiveTick::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ReceiveTick, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x0000C0, "Member 'BP_Skill_RootAttack_C_ReceiveTick::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ReceiveTick, CallFunc_K2_SetActorLocation_ReturnValue) == 0x0001A8, "Member 'BP_Skill_RootAttack_C_ReceiveTick::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ReceiveTick, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x0001B0, "Member 'BP_Skill_RootAttack_C_ReceiveTick::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ReceiveTick, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0001C8, "Member 'BP_Skill_RootAttack_C_ReceiveTick::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ReceiveTick, CallFunc_AdjustActorToFloor_ReturnValue) == 0x0001E0, "Member 'BP_Skill_RootAttack_C_ReceiveTick::CallFunc_AdjustActorToFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ReceiveTick, CallFunc_VSizeXY_ReturnValue) == 0x0001E8, "Member 'BP_Skill_RootAttack_C_ReceiveTick::CallFunc_VSizeXY_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ReceiveTick, CallFunc_Vector_Normal2D_ReturnValue) == 0x0001F0, "Member 'BP_Skill_RootAttack_C_ReceiveTick::CallFunc_Vector_Normal2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ReceiveTick, K2Node_CreateDelegate_OutputDelegate) == 0x000208, "Member 'BP_Skill_RootAttack_C_ReceiveTick::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ReceiveTick, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x000218, "Member 'BP_Skill_RootAttack_C_ReceiveTick::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ReceiveTick, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000220, "Member 'BP_Skill_RootAttack_C_ReceiveTick::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ReceiveTick, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x000228, "Member 'BP_Skill_RootAttack_C_ReceiveTick::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_C_ReceiveTick, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000230, "Member 'BP_Skill_RootAttack_C_ReceiveTick::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

// Function BP_Skill_RootAttack.BP_Skill_RootAttack_C.SetInitVector
// 0x0018 (0x0018 - 0x0000)
struct BP_Skill_RootAttack_C_SetInitVector final
{
public:
	struct FVector                                Vector;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Skill_RootAttack_C_SetInitVector) == 0x000008, "Wrong alignment on BP_Skill_RootAttack_C_SetInitVector");
static_assert(sizeof(BP_Skill_RootAttack_C_SetInitVector) == 0x000018, "Wrong size on BP_Skill_RootAttack_C_SetInitVector");
static_assert(offsetof(BP_Skill_RootAttack_C_SetInitVector, Vector) == 0x000000, "Member 'BP_Skill_RootAttack_C_SetInitVector::Vector' has a wrong offset!");

// Function BP_Skill_RootAttack.BP_Skill_RootAttack_C.SetUseRideTarget
// 0x0008 (0x0008 - 0x0000)
struct BP_Skill_RootAttack_C_SetUseRideTarget final
{
public:
	class AActor*                                 RideTarget_0;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Skill_RootAttack_C_SetUseRideTarget) == 0x000008, "Wrong alignment on BP_Skill_RootAttack_C_SetUseRideTarget");
static_assert(sizeof(BP_Skill_RootAttack_C_SetUseRideTarget) == 0x000008, "Wrong size on BP_Skill_RootAttack_C_SetUseRideTarget");
static_assert(offsetof(BP_Skill_RootAttack_C_SetUseRideTarget, RideTarget_0) == 0x000000, "Member 'BP_Skill_RootAttack_C_SetUseRideTarget::RideTarget_0' has a wrong offset!");

}

