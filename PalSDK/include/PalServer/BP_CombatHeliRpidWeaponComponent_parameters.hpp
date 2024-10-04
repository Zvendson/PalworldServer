#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function BP_CombatHeliRpidWeaponComponent.BP_CombatHeliRpidWeaponComponent_C.ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent
// 0x0028 (0x0028 - 0x0000)
struct BP_CombatHeliRpidWeaponComponent_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CombatHeliRpidWeaponComponent_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent) == 0x000008, "Wrong alignment on BP_CombatHeliRpidWeaponComponent_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent");
static_assert(sizeof(BP_CombatHeliRpidWeaponComponent_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent) == 0x000028, "Wrong size on BP_CombatHeliRpidWeaponComponent_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent, EntryPoint) == 0x000000, "Member 'BP_CombatHeliRpidWeaponComponent_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_CombatHeliRpidWeaponComponent_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'BP_CombatHeliRpidWeaponComponent_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000020, "Member 'BP_CombatHeliRpidWeaponComponent_C_ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

// Function BP_CombatHeliRpidWeaponComponent.BP_CombatHeliRpidWeaponComponent_C.GetMuzzleTransform
// 0x00C0 (0x00C0 - 0x0000)
struct BP_CombatHeliRpidWeaponComponent_C_GetMuzzleTransform final
{
public:
	struct FTransform                             MzlTF;                                             // 0x0000(0x0060)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue;           // 0x0060(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CombatHeliRpidWeaponComponent_C_GetMuzzleTransform) == 0x000010, "Wrong alignment on BP_CombatHeliRpidWeaponComponent_C_GetMuzzleTransform");
static_assert(sizeof(BP_CombatHeliRpidWeaponComponent_C_GetMuzzleTransform) == 0x0000C0, "Wrong size on BP_CombatHeliRpidWeaponComponent_C_GetMuzzleTransform");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_GetMuzzleTransform, MzlTF) == 0x000000, "Member 'BP_CombatHeliRpidWeaponComponent_C_GetMuzzleTransform::MzlTF' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_GetMuzzleTransform, CallFunc_GetSocketTransform_ReturnValue) == 0x000060, "Member 'BP_CombatHeliRpidWeaponComponent_C_GetMuzzleTransform::CallFunc_GetSocketTransform_ReturnValue' has a wrong offset!");

// Function BP_CombatHeliRpidWeaponComponent.BP_CombatHeliRpidWeaponComponent_C.GunAim
// 0x01A0 (0x01A0 - 0x0000)
struct BP_CombatHeliRpidWeaponComponent_C_GunAim final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Target;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;                 // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_RLerp_ReturnValue;                        // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x00B0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_RLerp_Alpha_ImplicitCast;                 // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CombatHeliRpidWeaponComponent_C_GunAim) == 0x000008, "Wrong alignment on BP_CombatHeliRpidWeaponComponent_C_GunAim");
static_assert(sizeof(BP_CombatHeliRpidWeaponComponent_C_GunAim) == 0x0001A0, "Wrong size on BP_CombatHeliRpidWeaponComponent_C_GunAim");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_GunAim, DeltaTime) == 0x000000, "Member 'BP_CombatHeliRpidWeaponComponent_C_GunAim::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_GunAim, Target) == 0x000008, "Member 'BP_CombatHeliRpidWeaponComponent_C_GunAim::Target' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_GunAim, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_CombatHeliRpidWeaponComponent_C_GunAim::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_GunAim, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000018, "Member 'BP_CombatHeliRpidWeaponComponent_C_GunAim::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_GunAim, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000020, "Member 'BP_CombatHeliRpidWeaponComponent_C_GunAim::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_GunAim, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000038, "Member 'BP_CombatHeliRpidWeaponComponent_C_GunAim::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_GunAim, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000050, "Member 'BP_CombatHeliRpidWeaponComponent_C_GunAim::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_GunAim, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000068, "Member 'BP_CombatHeliRpidWeaponComponent_C_GunAim::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_GunAim, CallFunc_MakeRotFromX_ReturnValue) == 0x000080, "Member 'BP_CombatHeliRpidWeaponComponent_C_GunAim::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_GunAim, CallFunc_RLerp_ReturnValue) == 0x000098, "Member 'BP_CombatHeliRpidWeaponComponent_C_GunAim::CallFunc_RLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_GunAim, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x0000B0, "Member 'BP_CombatHeliRpidWeaponComponent_C_GunAim::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_GunAim, CallFunc_RLerp_Alpha_ImplicitCast) == 0x000198, "Member 'BP_CombatHeliRpidWeaponComponent_C_GunAim::CallFunc_RLerp_Alpha_ImplicitCast' has a wrong offset!");

// Function BP_CombatHeliRpidWeaponComponent.BP_CombatHeliRpidWeaponComponent_C.SetGunMesh
// 0x0008 (0x0008 - 0x0000)
struct BP_CombatHeliRpidWeaponComponent_C_SetGunMesh final
{
public:
	class UStaticMeshComponent*                   GunMesh_0;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CombatHeliRpidWeaponComponent_C_SetGunMesh) == 0x000008, "Wrong alignment on BP_CombatHeliRpidWeaponComponent_C_SetGunMesh");
static_assert(sizeof(BP_CombatHeliRpidWeaponComponent_C_SetGunMesh) == 0x000008, "Wrong size on BP_CombatHeliRpidWeaponComponent_C_SetGunMesh");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_SetGunMesh, GunMesh_0) == 0x000000, "Member 'BP_CombatHeliRpidWeaponComponent_C_SetGunMesh::GunMesh_0' has a wrong offset!");

// Function BP_CombatHeliRpidWeaponComponent.BP_CombatHeliRpidWeaponComponent_C.ShootBullet
// 0x0260 (0x0260 - 0x0000)
struct BP_CombatHeliRpidWeaponComponent_C_ShootBullet final
{
public:
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38[0x8];                                       // 0x0038(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetMuzzleTransform_MzlTF;                 // 0x0040(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0100(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10C[0x4];                                      // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetMuzzleTransform_MzlTF_1;               // 0x0110(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location_1;                // 0x0178(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;                // 0x0190(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_1;                   // 0x01A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x01C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D8[0x8];                                      // 0x01D8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x01E0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0240(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalBullet*                             CallFunc_FinishSpawningActor_ReturnValue;          // 0x0248(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           CallFunc_GetComponentByClass_ReturnValue;          // 0x0250(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Pitch_ImplicitCast;           // 0x025C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CombatHeliRpidWeaponComponent_C_ShootBullet) == 0x000010, "Wrong alignment on BP_CombatHeliRpidWeaponComponent_C_ShootBullet");
static_assert(sizeof(BP_CombatHeliRpidWeaponComponent_C_ShootBullet) == 0x000260, "Wrong size on BP_CombatHeliRpidWeaponComponent_C_ShootBullet");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_ShootBullet, CallFunc_Add_IntInt_ReturnValue) == 0x000000, "Member 'BP_CombatHeliRpidWeaponComponent_C_ShootBullet::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_ShootBullet, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000008, "Member 'BP_CombatHeliRpidWeaponComponent_C_ShootBullet::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_ShootBullet, CallFunc_MakeVector_ReturnValue) == 0x000010, "Member 'BP_CombatHeliRpidWeaponComponent_C_ShootBullet::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_ShootBullet, CallFunc_RandomFloatInRange_ReturnValue) == 0x000028, "Member 'BP_CombatHeliRpidWeaponComponent_C_ShootBullet::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_ShootBullet, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000030, "Member 'BP_CombatHeliRpidWeaponComponent_C_ShootBullet::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_ShootBullet, CallFunc_GetMuzzleTransform_MzlTF) == 0x000040, "Member 'BP_CombatHeliRpidWeaponComponent_C_ShootBullet::CallFunc_GetMuzzleTransform_MzlTF' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_ShootBullet, CallFunc_MakeRotator_ReturnValue) == 0x0000A0, "Member 'BP_CombatHeliRpidWeaponComponent_C_ShootBullet::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_ShootBullet, CallFunc_BreakTransform_Location) == 0x0000B8, "Member 'BP_CombatHeliRpidWeaponComponent_C_ShootBullet::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_ShootBullet, CallFunc_BreakTransform_Rotation) == 0x0000D0, "Member 'BP_CombatHeliRpidWeaponComponent_C_ShootBullet::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_ShootBullet, CallFunc_BreakTransform_Scale) == 0x0000E8, "Member 'BP_CombatHeliRpidWeaponComponent_C_ShootBullet::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_ShootBullet, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000100, "Member 'BP_CombatHeliRpidWeaponComponent_C_ShootBullet::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_ShootBullet, Temp_int_Variable) == 0x000108, "Member 'BP_CombatHeliRpidWeaponComponent_C_ShootBullet::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_ShootBullet, CallFunc_GetMuzzleTransform_MzlTF_1) == 0x000110, "Member 'BP_CombatHeliRpidWeaponComponent_C_ShootBullet::CallFunc_GetMuzzleTransform_MzlTF_1' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_ShootBullet, CallFunc_GetOwner_ReturnValue) == 0x000170, "Member 'BP_CombatHeliRpidWeaponComponent_C_ShootBullet::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_ShootBullet, CallFunc_BreakTransform_Location_1) == 0x000178, "Member 'BP_CombatHeliRpidWeaponComponent_C_ShootBullet::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_ShootBullet, CallFunc_BreakTransform_Rotation_1) == 0x000190, "Member 'BP_CombatHeliRpidWeaponComponent_C_ShootBullet::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_ShootBullet, CallFunc_BreakTransform_Scale_1) == 0x0001A8, "Member 'BP_CombatHeliRpidWeaponComponent_C_ShootBullet::CallFunc_BreakTransform_Scale_1' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_ShootBullet, CallFunc_ComposeRotators_ReturnValue) == 0x0001C0, "Member 'BP_CombatHeliRpidWeaponComponent_C_ShootBullet::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_ShootBullet, CallFunc_MakeTransform_ReturnValue) == 0x0001E0, "Member 'BP_CombatHeliRpidWeaponComponent_C_ShootBullet::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_ShootBullet, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000240, "Member 'BP_CombatHeliRpidWeaponComponent_C_ShootBullet::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_ShootBullet, CallFunc_FinishSpawningActor_ReturnValue) == 0x000248, "Member 'BP_CombatHeliRpidWeaponComponent_C_ShootBullet::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_ShootBullet, CallFunc_GetComponentByClass_ReturnValue) == 0x000250, "Member 'BP_CombatHeliRpidWeaponComponent_C_ShootBullet::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_ShootBullet, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x000258, "Member 'BP_CombatHeliRpidWeaponComponent_C_ShootBullet::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_CombatHeliRpidWeaponComponent_C_ShootBullet, CallFunc_MakeRotator_Pitch_ImplicitCast) == 0x00025C, "Member 'BP_CombatHeliRpidWeaponComponent_C_ShootBullet::CallFunc_MakeRotator_Pitch_ImplicitCast' has a wrong offset!");

}

