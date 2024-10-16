#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_SkillEffect_GhostFlame.BP_SkillEffect_GhostFlame_C.ExecuteUbergraph_BP_SkillEffect_GhostFlame
// 0x0028 (0x0028 - 0x0000)
struct BP_SkillEffect_GhostFlame_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetGameTimeSinceCreation_ReturnValue;     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_GhostFlame_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame) == 0x000008, "Wrong alignment on BP_SkillEffect_GhostFlame_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame");
static_assert(sizeof(BP_SkillEffect_GhostFlame_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame) == 0x000028, "Wrong size on BP_SkillEffect_GhostFlame_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_GhostFlame_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_SkillEffect_GhostFlame_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame, CallFunc_GetGameTimeSinceCreation_ReturnValue) == 0x000008, "Member 'BP_SkillEffect_GhostFlame_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame::CallFunc_GetGameTimeSinceCreation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame, CallFunc_Less_IntInt_ReturnValue) == 0x00000C, "Member 'BP_SkillEffect_GhostFlame_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000010, "Member 'BP_SkillEffect_GhostFlame_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000018, "Member 'BP_SkillEffect_GhostFlame_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x000020, "Member 'BP_SkillEffect_GhostFlame_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_SkillEffect_GhostFlame.BP_SkillEffect_GhostFlame_C.Explosion
// 0x0220 (0x0220 - 0x0000)
struct BP_SkillEffect_GhostFlame_C_Explosion final
{
public:
	struct FRotator                               LocalRotator;                                      // 0x0000(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue_1;           // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00E0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0140(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SkillEffect_GhostFlame_Bullet_C*    CallFunc_FinishSpawningActor_ReturnValue;          // 0x0160(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0178(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1AC[0x4];                                      // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x01B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_GetActionTargetActor_ReturnValue;         // 0x01D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x01D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UCapsuleComponent*                      CallFunc_GetComponentByClass_ReturnValue;          // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetGameTimeSinceCreation_ReturnValue;     // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FC[0x4];                                      // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Roll_ImplicitCast;            // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20C[0x4];                                      // 0x020C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_VariableSet_Temp_time_ImplicitCast;         // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_GhostFlame_C_Explosion) == 0x000010, "Wrong alignment on BP_SkillEffect_GhostFlame_C_Explosion");
static_assert(sizeof(BP_SkillEffect_GhostFlame_C_Explosion) == 0x000220, "Wrong size on BP_SkillEffect_GhostFlame_C_Explosion");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_Explosion, LocalRotator) == 0x000000, "Member 'BP_SkillEffect_GhostFlame_C_Explosion::LocalRotator' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_Explosion, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'BP_SkillEffect_GhostFlame_C_Explosion::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_Explosion, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000020, "Member 'BP_SkillEffect_GhostFlame_C_Explosion::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_Explosion, CallFunc_GetForwardVector_ReturnValue) == 0x000038, "Member 'BP_SkillEffect_GhostFlame_C_Explosion::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_Explosion, CallFunc_GetForwardVector_ReturnValue_1) == 0x000050, "Member 'BP_SkillEffect_GhostFlame_C_Explosion::CallFunc_GetForwardVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_Explosion, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000068, "Member 'BP_SkillEffect_GhostFlame_C_Explosion::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_Explosion, Temp_int_Variable) == 0x000080, "Member 'BP_SkillEffect_GhostFlame_C_Explosion::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_Explosion, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000084, "Member 'BP_SkillEffect_GhostFlame_C_Explosion::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_Explosion, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000088, "Member 'BP_SkillEffect_GhostFlame_C_Explosion::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_Explosion, CallFunc_K2_GetActorRotation_ReturnValue) == 0x0000A0, "Member 'BP_SkillEffect_GhostFlame_C_Explosion::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_Explosion, CallFunc_Add_VectorVector_ReturnValue) == 0x0000B8, "Member 'BP_SkillEffect_GhostFlame_C_Explosion::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_Explosion, CallFunc_BreakRotator_Roll) == 0x0000D0, "Member 'BP_SkillEffect_GhostFlame_C_Explosion::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_Explosion, CallFunc_BreakRotator_Pitch) == 0x0000D4, "Member 'BP_SkillEffect_GhostFlame_C_Explosion::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_Explosion, CallFunc_BreakRotator_Yaw) == 0x0000D8, "Member 'BP_SkillEffect_GhostFlame_C_Explosion::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_Explosion, CallFunc_MakeTransform_ReturnValue) == 0x0000E0, "Member 'BP_SkillEffect_GhostFlame_C_Explosion::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_Explosion, CallFunc_MakeRotator_ReturnValue) == 0x000140, "Member 'BP_SkillEffect_GhostFlame_C_Explosion::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_Explosion, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000158, "Member 'BP_SkillEffect_GhostFlame_C_Explosion::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_Explosion, CallFunc_FinishSpawningActor_ReturnValue) == 0x000160, "Member 'BP_SkillEffect_GhostFlame_C_Explosion::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_Explosion, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000168, "Member 'BP_SkillEffect_GhostFlame_C_Explosion::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_Explosion, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000170, "Member 'BP_SkillEffect_GhostFlame_C_Explosion::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_Explosion, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000178, "Member 'BP_SkillEffect_GhostFlame_C_Explosion::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_Explosion, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000190, "Member 'BP_SkillEffect_GhostFlame_C_Explosion::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_Explosion, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000198, "Member 'BP_SkillEffect_GhostFlame_C_Explosion::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_Explosion, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0001A0, "Member 'BP_SkillEffect_GhostFlame_C_Explosion::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_Explosion, CallFunc_Add_IntInt_ReturnValue) == 0x0001A8, "Member 'BP_SkillEffect_GhostFlame_C_Explosion::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_Explosion, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x0001B0, "Member 'BP_SkillEffect_GhostFlame_C_Explosion::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_Explosion, CallFunc_MakeRotator_ReturnValue_1) == 0x0001B8, "Member 'BP_SkillEffect_GhostFlame_C_Explosion::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_Explosion, CallFunc_GetActionTargetActor_ReturnValue) == 0x0001D0, "Member 'BP_SkillEffect_GhostFlame_C_Explosion::CallFunc_GetActionTargetActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_Explosion, CallFunc_ComposeRotators_ReturnValue) == 0x0001D8, "Member 'BP_SkillEffect_GhostFlame_C_Explosion::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_Explosion, CallFunc_GetComponentByClass_ReturnValue) == 0x0001F0, "Member 'BP_SkillEffect_GhostFlame_C_Explosion::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_Explosion, CallFunc_GetGameTimeSinceCreation_ReturnValue) == 0x0001F8, "Member 'BP_SkillEffect_GhostFlame_C_Explosion::CallFunc_GetGameTimeSinceCreation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_Explosion, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000200, "Member 'BP_SkillEffect_GhostFlame_C_Explosion::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_Explosion, CallFunc_MakeRotator_Roll_ImplicitCast) == 0x000208, "Member 'BP_SkillEffect_GhostFlame_C_Explosion::CallFunc_MakeRotator_Roll_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_Explosion, K2Node_VariableSet_Temp_time_ImplicitCast) == 0x000210, "Member 'BP_SkillEffect_GhostFlame_C_Explosion::K2Node_VariableSet_Temp_time_ImplicitCast' has a wrong offset!");

// Function BP_SkillEffect_GhostFlame.BP_SkillEffect_GhostFlame_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_SkillEffect_GhostFlame_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_GhostFlame_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_SkillEffect_GhostFlame_C_ReceiveTick");
static_assert(sizeof(BP_SkillEffect_GhostFlame_C_ReceiveTick) == 0x000004, "Wrong size on BP_SkillEffect_GhostFlame_C_ReceiveTick");
static_assert(offsetof(BP_SkillEffect_GhostFlame_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_SkillEffect_GhostFlame_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

