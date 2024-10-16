#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_SkillEffect_ThrowRockBullet.BP_SkillEffect_ThrowRockBullet_C.AddShotImpulse
// 0x01B0 (0x01B0 - 0x0000)
struct BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse final
{
public:
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x00F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0110(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_4;        // 0x0128(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0140(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity; // 0x0158(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue; // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_171[0x7];                                      // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_5;        // 0x0178(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity_1; // 0x0190(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue_1; // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse) == 0x000008, "Wrong alignment on BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse");
static_assert(sizeof(BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse) == 0x0001B0, "Wrong size on BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000000, "Member 'BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000030, "Member 'BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse, CallFunc_BreakVector_X) == 0x000048, "Member 'BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse, CallFunc_BreakVector_Y) == 0x000050, "Member 'BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse, CallFunc_BreakVector_Z) == 0x000058, "Member 'BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000060, "Member 'BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse, CallFunc_MakeVector_ReturnValue) == 0x000068, "Member 'BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000080, "Member 'BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse, CallFunc_BreakVector_X_1) == 0x000098, "Member 'BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse, CallFunc_BreakVector_Y_1) == 0x0000A0, "Member 'BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse, CallFunc_BreakVector_Z_1) == 0x0000A8, "Member 'BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x0000B0, "Member 'BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse, CallFunc_MakeVector_ReturnValue_1) == 0x0000C8, "Member 'BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000E0, "Member 'BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse, CallFunc_Normal_ReturnValue) == 0x0000F8, "Member 'BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000110, "Member 'BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse, CallFunc_K2_GetActorLocation_ReturnValue_4) == 0x000128, "Member 'BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse::CallFunc_K2_GetActorLocation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse, CallFunc_Add_VectorVector_ReturnValue) == 0x000140, "Member 'BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse, CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity) == 0x000158, "Member 'BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse::CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse, CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue) == 0x000170, "Member 'BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse::CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse, CallFunc_K2_GetActorLocation_ReturnValue_5) == 0x000178, "Member 'BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse::CallFunc_K2_GetActorLocation_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse, CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity_1) == 0x000190, "Member 'BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse::CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse, CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue_1) == 0x0001A8, "Member 'BP_SkillEffect_ThrowRockBullet_C_AddShotImpulse::CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue_1' has a wrong offset!");

// Function BP_SkillEffect_ThrowRockBullet.BP_SkillEffect_ThrowRockBullet_C.BndEvt__BP_SkillEffect_ThrowRockBullet_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct BP_SkillEffect_ThrowRockBullet_C_BndEvt__BP_SkillEffect_ThrowRockBullet_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0030(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_SkillEffect_ThrowRockBullet_C_BndEvt__BP_SkillEffect_ThrowRockBullet_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_SkillEffect_ThrowRockBullet_C_BndEvt__BP_SkillEffect_ThrowRockBullet_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(BP_SkillEffect_ThrowRockBullet_C_BndEvt__BP_SkillEffect_ThrowRockBullet_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000118, "Wrong size on BP_SkillEffect_ThrowRockBullet_C_BndEvt__BP_SkillEffect_ThrowRockBullet_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_BndEvt__BP_SkillEffect_ThrowRockBullet_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'BP_SkillEffect_ThrowRockBullet_C_BndEvt__BP_SkillEffect_ThrowRockBullet_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_BndEvt__BP_SkillEffect_ThrowRockBullet_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_SkillEffect_ThrowRockBullet_C_BndEvt__BP_SkillEffect_ThrowRockBullet_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_BndEvt__BP_SkillEffect_ThrowRockBullet_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_SkillEffect_ThrowRockBullet_C_BndEvt__BP_SkillEffect_ThrowRockBullet_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_BndEvt__BP_SkillEffect_ThrowRockBullet_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'BP_SkillEffect_ThrowRockBullet_C_BndEvt__BP_SkillEffect_ThrowRockBullet_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_BndEvt__BP_SkillEffect_ThrowRockBullet_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, Hit) == 0x000030, "Member 'BP_SkillEffect_ThrowRockBullet_C_BndEvt__BP_SkillEffect_ThrowRockBullet_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::Hit' has a wrong offset!");

// Function BP_SkillEffect_ThrowRockBullet.BP_SkillEffect_ThrowRockBullet_C.ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet
// 0x0470 (0x0470 - 0x0000)
struct BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0030(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_TargetLocation;                       // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTargetActor_ReturnValue;         // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D2[0x6];                                       // 0x00D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x00F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActionTargetLocation_ReturnValue;      // 0x0110(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0128(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0140(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult_1;     // 0x0228(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0310(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0318(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;           // 0x0320(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0328(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0330(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;          // 0x0338(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;                    // 0x0350(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x0438(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_AdjustActorToFloor_ReturnValue;           // 0x0440(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetVelocity_ReturnValue_1;                // 0x0448(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue;                        // 0x0460(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetRTPCValue_Value_ImplicitCast;          // 0x0468(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet) == 0x000010, "Wrong alignment on BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet");
static_assert(sizeof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet) == 0x000470, "Wrong size on BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet, Temp_bool_IsClosed_Variable) == 0x000004, "Member 'BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet, Temp_bool_Has_Been_Initd_Variable) == 0x000005, "Member 'BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet, K2Node_Event_DeltaSeconds) == 0x000020, "Member 'BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000028, "Member 'BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet, CallFunc_GetTransform_ReturnValue) == 0x000030, "Member 'BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet, K2Node_Event_TargetLocation) == 0x000090, "Member 'BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet::K2Node_Event_TargetLocation' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet, CallFunc_Conv_FloatToVector_ReturnValue) == 0x0000A8, "Member 'BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet, CallFunc_K2_GetRootComponent_ReturnValue) == 0x0000C0, "Member 'BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet, CallFunc_GetActionTargetActor_ReturnValue) == 0x0000C8, "Member 'BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet::CallFunc_GetActionTargetActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet, CallFunc_IsValid_ReturnValue) == 0x0000D0, "Member 'BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet, CallFunc_IsValid_ReturnValue_1) == 0x0000D1, "Member 'BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet, CallFunc_GetVelocity_ReturnValue) == 0x0000D8, "Member 'BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet, K2Node_Event_EndPlayReason) == 0x0000F0, "Member 'BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0000F8, "Member 'BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet, CallFunc_GetActionTargetLocation_ReturnValue) == 0x000110, "Member 'BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet::CallFunc_GetActionTargetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet, CallFunc_Add_VectorVector_ReturnValue) == 0x000128, "Member 'BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000140, "Member 'BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet, CallFunc_K2_SetWorldLocation_SweepHitResult_1) == 0x000228, "Member 'BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet::CallFunc_K2_SetWorldLocation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet, CallFunc_GetOwner_ReturnValue) == 0x000310, "Member 'BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000318, "Member 'BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet, K2Node_ComponentBoundEvent_HitComponent) == 0x000320, "Member 'BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet, K2Node_ComponentBoundEvent_OtherActor) == 0x000328, "Member 'BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet, K2Node_ComponentBoundEvent_OtherComp) == 0x000330, "Member 'BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet, K2Node_ComponentBoundEvent_NormalImpulse) == 0x000338, "Member 'BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet, K2Node_ComponentBoundEvent_Hit) == 0x000350, "Member 'BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet, CallFunc_FinishSpawningActor_ReturnValue) == 0x000438, "Member 'BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet, CallFunc_AdjustActorToFloor_ReturnValue) == 0x000440, "Member 'BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet::CallFunc_AdjustActorToFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet, CallFunc_GetVelocity_ReturnValue_1) == 0x000448, "Member 'BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet::CallFunc_GetVelocity_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet, CallFunc_VSize_ReturnValue) == 0x000460, "Member 'BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet, CallFunc_SetRTPCValue_Value_ImplicitCast) == 0x000468, "Member 'BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet::CallFunc_SetRTPCValue_Value_ImplicitCast' has a wrong offset!");

// Function BP_SkillEffect_ThrowRockBullet.BP_SkillEffect_ThrowRockBullet_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_SkillEffect_ThrowRockBullet_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_ThrowRockBullet_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_SkillEffect_ThrowRockBullet_C_ReceiveEndPlay");
static_assert(sizeof(BP_SkillEffect_ThrowRockBullet_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_SkillEffect_ThrowRockBullet_C_ReceiveEndPlay");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_SkillEffect_ThrowRockBullet_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_SkillEffect_ThrowRockBullet.BP_SkillEffect_ThrowRockBullet_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_SkillEffect_ThrowRockBullet_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_ThrowRockBullet_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_SkillEffect_ThrowRockBullet_C_ReceiveTick");
static_assert(sizeof(BP_SkillEffect_ThrowRockBullet_C_ReceiveTick) == 0x000004, "Wrong size on BP_SkillEffect_ThrowRockBullet_C_ReceiveTick");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_SkillEffect_ThrowRockBullet_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_SkillEffect_ThrowRockBullet.BP_SkillEffect_ThrowRockBullet_C.SetPredictedTarget
// 0x0080 (0x0080 - 0x0000)
struct BP_SkillEffect_ThrowRockBullet_C_SetPredictedTarget final
{
public:
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0000(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTargetActor_ReturnValue;         // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_ThrowRockBullet_C_SetPredictedTarget) == 0x000010, "Wrong alignment on BP_SkillEffect_ThrowRockBullet_C_SetPredictedTarget");
static_assert(sizeof(BP_SkillEffect_ThrowRockBullet_C_SetPredictedTarget) == 0x000080, "Wrong size on BP_SkillEffect_ThrowRockBullet_C_SetPredictedTarget");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_SetPredictedTarget, CallFunc_MakeTransform_ReturnValue) == 0x000000, "Member 'BP_SkillEffect_ThrowRockBullet_C_SetPredictedTarget::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_SetPredictedTarget, CallFunc_GetActionTargetActor_ReturnValue) == 0x000060, "Member 'BP_SkillEffect_ThrowRockBullet_C_SetPredictedTarget::CallFunc_GetActionTargetActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_SetPredictedTarget, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000068, "Member 'BP_SkillEffect_ThrowRockBullet_C_SetPredictedTarget::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_SetPredictedTarget, CallFunc_FinishSpawningActor_ReturnValue) == 0x000070, "Member 'BP_SkillEffect_ThrowRockBullet_C_SetPredictedTarget::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function BP_SkillEffect_ThrowRockBullet.BP_SkillEffect_ThrowRockBullet_C.Shoot
// 0x0080 (0x0080 - 0x0000)
struct BP_SkillEffect_ThrowRockBullet_C_Shoot final
{
public:
	struct FVector                                TargetLocation;                                    // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMass_ReturnValue;                      // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity; // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue; // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_ThrowRockBullet_C_Shoot) == 0x000008, "Wrong alignment on BP_SkillEffect_ThrowRockBullet_C_Shoot");
static_assert(sizeof(BP_SkillEffect_ThrowRockBullet_C_Shoot) == 0x000080, "Wrong size on BP_SkillEffect_ThrowRockBullet_C_Shoot");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_Shoot, TargetLocation) == 0x000000, "Member 'BP_SkillEffect_ThrowRockBullet_C_Shoot::TargetLocation' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_Shoot, CallFunc_GetMass_ReturnValue) == 0x000018, "Member 'BP_SkillEffect_ThrowRockBullet_C_Shoot::CallFunc_GetMass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_Shoot, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000020, "Member 'BP_SkillEffect_ThrowRockBullet_C_Shoot::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_Shoot, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'BP_SkillEffect_ThrowRockBullet_C_Shoot::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_Shoot, CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity) == 0x000040, "Member 'BP_SkillEffect_ThrowRockBullet_C_Shoot::CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_Shoot, CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue) == 0x000058, "Member 'BP_SkillEffect_ThrowRockBullet_C_Shoot::CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_Shoot, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000060, "Member 'BP_SkillEffect_ThrowRockBullet_C_Shoot::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_Shoot, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000078, "Member 'BP_SkillEffect_ThrowRockBullet_C_Shoot::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_SkillEffect_ThrowRockBullet.BP_SkillEffect_ThrowRockBullet_C.ShootBullet
// 0x0018 (0x0018 - 0x0000)
struct BP_SkillEffect_ThrowRockBullet_C_ShootBullet final
{
public:
	struct FVector                                TargetLocation;                                    // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_ThrowRockBullet_C_ShootBullet) == 0x000008, "Wrong alignment on BP_SkillEffect_ThrowRockBullet_C_ShootBullet");
static_assert(sizeof(BP_SkillEffect_ThrowRockBullet_C_ShootBullet) == 0x000018, "Wrong size on BP_SkillEffect_ThrowRockBullet_C_ShootBullet");
static_assert(offsetof(BP_SkillEffect_ThrowRockBullet_C_ShootBullet, TargetLocation) == 0x000000, "Member 'BP_SkillEffect_ThrowRockBullet_C_ShootBullet::TargetLocation' has a wrong offset!");

}

