#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function BP_SkillEffect_SeedMachinegun.BP_SkillEffect_SeedMachinegun_C.BndEvt__BP_SkillEffect_SeedMachinegun_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature
// 0x00E8 (0x00E8 - 0x0000)
struct BP_SkillEffect_SeedMachinegun_C_BndEvt__BP_SkillEffect_SeedMachinegun_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature final
{
public:
	class AActor*                                 Defencer;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDamageInfo                         DamageInfo;                                        // 0x0008(0x00D0)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         HitCount;                                          // 0x00D8(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    AttackerComponent;                                 // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_SeedMachinegun_C_BndEvt__BP_SkillEffect_SeedMachinegun_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature) == 0x000008, "Wrong alignment on BP_SkillEffect_SeedMachinegun_C_BndEvt__BP_SkillEffect_SeedMachinegun_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature");
static_assert(sizeof(BP_SkillEffect_SeedMachinegun_C_BndEvt__BP_SkillEffect_SeedMachinegun_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature) == 0x0000E8, "Wrong size on BP_SkillEffect_SeedMachinegun_C_BndEvt__BP_SkillEffect_SeedMachinegun_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_BndEvt__BP_SkillEffect_SeedMachinegun_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature, Defencer) == 0x000000, "Member 'BP_SkillEffect_SeedMachinegun_C_BndEvt__BP_SkillEffect_SeedMachinegun_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature::Defencer' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_BndEvt__BP_SkillEffect_SeedMachinegun_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature, DamageInfo) == 0x000008, "Member 'BP_SkillEffect_SeedMachinegun_C_BndEvt__BP_SkillEffect_SeedMachinegun_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature::DamageInfo' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_BndEvt__BP_SkillEffect_SeedMachinegun_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature, HitCount) == 0x0000D8, "Member 'BP_SkillEffect_SeedMachinegun_C_BndEvt__BP_SkillEffect_SeedMachinegun_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature::HitCount' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_BndEvt__BP_SkillEffect_SeedMachinegun_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature, AttackerComponent) == 0x0000E0, "Member 'BP_SkillEffect_SeedMachinegun_C_BndEvt__BP_SkillEffect_SeedMachinegun_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature::AttackerComponent' has a wrong offset!");

// Function BP_SkillEffect_SeedMachinegun.BP_SkillEffect_SeedMachinegun_C.CalcCapsuleLocation
// 0x00B8 (0x00B8 - 0x0000)
struct BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Square_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_ReturnValue; // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Sqrt_ReturnValue;                         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_ReturnValue_1; // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Square_A_ImplicitCast;                    // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast; // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_MakeVector_Y_ImplicitCast;                // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast; // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast_1; // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MakeVector_Z_ImplicitCast;                // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation) == 0x000008, "Wrong alignment on BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation");
static_assert(sizeof(BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation) == 0x0000B8, "Wrong size on BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation, Location) == 0x000000, "Member 'BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation::Location' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation, CallFunc_Square_ReturnValue) == 0x000018, "Member 'BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation::CallFunc_Square_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000020, "Member 'BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation, CallFunc_RandomFloatInRangeFromStream_ReturnValue) == 0x000028, "Member 'BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation::CallFunc_RandomFloatInRangeFromStream_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000030, "Member 'BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation, CallFunc_BreakVector_X) == 0x000038, "Member 'BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation, CallFunc_BreakVector_Y) == 0x000040, "Member 'BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation, CallFunc_BreakVector_Z) == 0x000048, "Member 'BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation, CallFunc_Sqrt_ReturnValue) == 0x000050, "Member 'BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation::CallFunc_Sqrt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000058, "Member 'BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation, CallFunc_RandomFloatInRangeFromStream_ReturnValue_1) == 0x000060, "Member 'BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation::CallFunc_RandomFloatInRangeFromStream_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation, CallFunc_MakeVector_ReturnValue) == 0x000068, "Member 'BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation, CallFunc_Square_A_ImplicitCast) == 0x000080, "Member 'BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation::CallFunc_Square_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000088, "Member 'BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation, CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast) == 0x000090, "Member 'BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation::CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation, CallFunc_MakeVector_Y_ImplicitCast) == 0x000098, "Member 'BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation::CallFunc_MakeVector_Y_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x0000A0, "Member 'BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation, CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast) == 0x0000A8, "Member 'BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation::CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation, CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast_1) == 0x0000AC, "Member 'BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation::CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation, CallFunc_MakeVector_Z_ImplicitCast) == 0x0000B0, "Member 'BP_SkillEffect_SeedMachinegun_C_CalcCapsuleLocation::CallFunc_MakeVector_Z_ImplicitCast' has a wrong offset!");

// Function BP_SkillEffect_SeedMachinegun.BP_SkillEffect_SeedMachinegun_C.ExecuteUbergraph_BP_SkillEffect_SeedMachinegun
// 0x0278 (0x0278 - 0x0000)
struct BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_CalcCapsuleLocation_Location;             // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0030(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0118(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0120(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0130(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_Defencer;               // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDamageInfo                         K2Node_ComponentBoundEvent_damageInfo;             // 0x0140(0x00D0)()
	int32                                         K2Node_ComponentBoundEvent_hitCount;               // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_214[0x4];                                      // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_AttackerComponent;      // 0x0218(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActionTargetLocation_ReturnValue;      // 0x0220(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0238(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0250(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_269[0x3];                                      // 0x0269(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x026C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1;  // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun) == 0x000008, "Wrong alignment on BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun");
static_assert(sizeof(BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun) == 0x000278, "Wrong size on BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun, CallFunc_CalcCapsuleLocation_Location) == 0x000008, "Member 'BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun::CallFunc_CalcCapsuleLocation_Location' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000030, "Member 'BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000118, "Member 'BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun, K2Node_CreateDelegate_OutputDelegate_1) == 0x000120, "Member 'BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000130, "Member 'BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun, K2Node_ComponentBoundEvent_Defencer) == 0x000138, "Member 'BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun::K2Node_ComponentBoundEvent_Defencer' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun, K2Node_ComponentBoundEvent_damageInfo) == 0x000140, "Member 'BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun::K2Node_ComponentBoundEvent_damageInfo' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun, K2Node_ComponentBoundEvent_hitCount) == 0x000210, "Member 'BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun::K2Node_ComponentBoundEvent_hitCount' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun, K2Node_ComponentBoundEvent_AttackerComponent) == 0x000218, "Member 'BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun::K2Node_ComponentBoundEvent_AttackerComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun, CallFunc_GetActionTargetLocation_ReturnValue) == 0x000220, "Member 'BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun::CallFunc_GetActionTargetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000238, "Member 'BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun, CallFunc_FindLookAtRotation_ReturnValue) == 0x000250, "Member 'BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun, CallFunc_K2_SetActorRotation_ReturnValue) == 0x000268, "Member 'BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x00026C, "Member 'BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1) == 0x000270, "Member 'BP_SkillEffect_SeedMachinegun_C_ExecuteUbergraph_BP_SkillEffect_SeedMachinegun::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1' has a wrong offset!");

// Function BP_SkillEffect_SeedMachinegun.BP_SkillEffect_SeedMachinegun_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_SkillEffect_SeedMachinegun_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_SeedMachinegun_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_SkillEffect_SeedMachinegun_C_ReceiveTick");
static_assert(sizeof(BP_SkillEffect_SeedMachinegun_C_ReceiveTick) == 0x000004, "Wrong size on BP_SkillEffect_SeedMachinegun_C_ReceiveTick");
static_assert(offsetof(BP_SkillEffect_SeedMachinegun_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_SkillEffect_SeedMachinegun_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

