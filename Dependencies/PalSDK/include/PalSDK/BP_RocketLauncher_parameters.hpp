#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_RocketLauncher.BP_RocketLauncher_C.ChangeTransformForRocketReload
// 0x0118 (0x0118 - 0x0000)
struct BP_RocketLauncher_C_ChangeTransformForRocketReload final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Rotation;                                          // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult; // 0x0030(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_RocketLauncher_C_ChangeTransformForRocketReload) == 0x000008, "Wrong alignment on BP_RocketLauncher_C_ChangeTransformForRocketReload");
static_assert(sizeof(BP_RocketLauncher_C_ChangeTransformForRocketReload) == 0x000118, "Wrong size on BP_RocketLauncher_C_ChangeTransformForRocketReload");
static_assert(offsetof(BP_RocketLauncher_C_ChangeTransformForRocketReload, Location) == 0x000000, "Member 'BP_RocketLauncher_C_ChangeTransformForRocketReload::Location' has a wrong offset!");
static_assert(offsetof(BP_RocketLauncher_C_ChangeTransformForRocketReload, Rotation) == 0x000018, "Member 'BP_RocketLauncher_C_ChangeTransformForRocketReload::Rotation' has a wrong offset!");
static_assert(offsetof(BP_RocketLauncher_C_ChangeTransformForRocketReload, CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult) == 0x000030, "Member 'BP_RocketLauncher_C_ChangeTransformForRocketReload::CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult' has a wrong offset!");

// Function BP_RocketLauncher.BP_RocketLauncher_C.ChangeTransformForRocketWhenReloadIsDone
// 0x0118 (0x0118 - 0x0000)
struct BP_RocketLauncher_C_ChangeTransformForRocketWhenReloadIsDone final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Lotation;                                          // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult; // 0x0030(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_RocketLauncher_C_ChangeTransformForRocketWhenReloadIsDone) == 0x000008, "Wrong alignment on BP_RocketLauncher_C_ChangeTransformForRocketWhenReloadIsDone");
static_assert(sizeof(BP_RocketLauncher_C_ChangeTransformForRocketWhenReloadIsDone) == 0x000118, "Wrong size on BP_RocketLauncher_C_ChangeTransformForRocketWhenReloadIsDone");
static_assert(offsetof(BP_RocketLauncher_C_ChangeTransformForRocketWhenReloadIsDone, Location) == 0x000000, "Member 'BP_RocketLauncher_C_ChangeTransformForRocketWhenReloadIsDone::Location' has a wrong offset!");
static_assert(offsetof(BP_RocketLauncher_C_ChangeTransformForRocketWhenReloadIsDone, Lotation) == 0x000018, "Member 'BP_RocketLauncher_C_ChangeTransformForRocketWhenReloadIsDone::Lotation' has a wrong offset!");
static_assert(offsetof(BP_RocketLauncher_C_ChangeTransformForRocketWhenReloadIsDone, CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult) == 0x000030, "Member 'BP_RocketLauncher_C_ChangeTransformForRocketWhenReloadIsDone::CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult' has a wrong offset!");

// Function BP_RocketLauncher.BP_RocketLauncher_C.ExecuteUbergraph_BP_RocketLauncher
// 0x0058 (0x0058 - 0x0000)
struct BP_RocketLauncher_C_ExecuteUbergraph_BP_RocketLauncher final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 bulletsNum)>             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_bulletsNum;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetOwnerCharacter_ReturnValue;            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue_1;       // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_detachActor;                          // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue_2;       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_attachActor;                          // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmptyMagazine_ReturnValue;              // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RocketLauncher_C_ExecuteUbergraph_BP_RocketLauncher) == 0x000008, "Wrong alignment on BP_RocketLauncher_C_ExecuteUbergraph_BP_RocketLauncher");
static_assert(sizeof(BP_RocketLauncher_C_ExecuteUbergraph_BP_RocketLauncher) == 0x000058, "Wrong size on BP_RocketLauncher_C_ExecuteUbergraph_BP_RocketLauncher");
static_assert(offsetof(BP_RocketLauncher_C_ExecuteUbergraph_BP_RocketLauncher, EntryPoint) == 0x000000, "Member 'BP_RocketLauncher_C_ExecuteUbergraph_BP_RocketLauncher::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_RocketLauncher_C_ExecuteUbergraph_BP_RocketLauncher, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_RocketLauncher_C_ExecuteUbergraph_BP_RocketLauncher::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_RocketLauncher_C_ExecuteUbergraph_BP_RocketLauncher, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_RocketLauncher_C_ExecuteUbergraph_BP_RocketLauncher::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_RocketLauncher_C_ExecuteUbergraph_BP_RocketLauncher, K2Node_CustomEvent_bulletsNum) == 0x000018, "Member 'BP_RocketLauncher_C_ExecuteUbergraph_BP_RocketLauncher::K2Node_CustomEvent_bulletsNum' has a wrong offset!");
static_assert(offsetof(BP_RocketLauncher_C_ExecuteUbergraph_BP_RocketLauncher, CallFunc_GetOwnerCharacter_ReturnValue) == 0x000020, "Member 'BP_RocketLauncher_C_ExecuteUbergraph_BP_RocketLauncher::CallFunc_GetOwnerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RocketLauncher_C_ExecuteUbergraph_BP_RocketLauncher, CallFunc_GetMainMesh_ReturnValue) == 0x000028, "Member 'BP_RocketLauncher_C_ExecuteUbergraph_BP_RocketLauncher::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RocketLauncher_C_ExecuteUbergraph_BP_RocketLauncher, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000030, "Member 'BP_RocketLauncher_C_ExecuteUbergraph_BP_RocketLauncher::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RocketLauncher_C_ExecuteUbergraph_BP_RocketLauncher, CallFunc_K2_AttachToComponent_ReturnValue_1) == 0x000031, "Member 'BP_RocketLauncher_C_ExecuteUbergraph_BP_RocketLauncher::CallFunc_K2_AttachToComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RocketLauncher_C_ExecuteUbergraph_BP_RocketLauncher, K2Node_Event_detachActor) == 0x000038, "Member 'BP_RocketLauncher_C_ExecuteUbergraph_BP_RocketLauncher::K2Node_Event_detachActor' has a wrong offset!");
static_assert(offsetof(BP_RocketLauncher_C_ExecuteUbergraph_BP_RocketLauncher, CallFunc_K2_AttachToComponent_ReturnValue_2) == 0x000040, "Member 'BP_RocketLauncher_C_ExecuteUbergraph_BP_RocketLauncher::CallFunc_K2_AttachToComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_RocketLauncher_C_ExecuteUbergraph_BP_RocketLauncher, K2Node_Event_attachActor) == 0x000048, "Member 'BP_RocketLauncher_C_ExecuteUbergraph_BP_RocketLauncher::K2Node_Event_attachActor' has a wrong offset!");
static_assert(offsetof(BP_RocketLauncher_C_ExecuteUbergraph_BP_RocketLauncher, CallFunc_IsEmptyMagazine_ReturnValue) == 0x000050, "Member 'BP_RocketLauncher_C_ExecuteUbergraph_BP_RocketLauncher::CallFunc_IsEmptyMagazine_ReturnValue' has a wrong offset!");

// Function BP_RocketLauncher.BP_RocketLauncher_C.Get Right Hand Location
// 0x0030 (0x0030 - 0x0000)
struct BP_RocketLauncher_C_Get_Right_Hand_Location final
{
public:
	struct FVector                                RightHandLocation;                                 // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RocketLauncher_C_Get_Right_Hand_Location) == 0x000008, "Wrong alignment on BP_RocketLauncher_C_Get_Right_Hand_Location");
static_assert(sizeof(BP_RocketLauncher_C_Get_Right_Hand_Location) == 0x000030, "Wrong size on BP_RocketLauncher_C_Get_Right_Hand_Location");
static_assert(offsetof(BP_RocketLauncher_C_Get_Right_Hand_Location, RightHandLocation) == 0x000000, "Member 'BP_RocketLauncher_C_Get_Right_Hand_Location::RightHandLocation' has a wrong offset!");
static_assert(offsetof(BP_RocketLauncher_C_Get_Right_Hand_Location, CallFunc_GetSocketLocation_ReturnValue) == 0x000018, "Member 'BP_RocketLauncher_C_Get_Right_Hand_Location::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");

// Function BP_RocketLauncher.BP_RocketLauncher_C.GetAimingBlurAngle
// 0x0008 (0x0008 - 0x0000)
struct BP_RocketLauncher_C_GetAimingBlurAngle final
{
public:
	double                                        Angle;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RocketLauncher_C_GetAimingBlurAngle) == 0x000008, "Wrong alignment on BP_RocketLauncher_C_GetAimingBlurAngle");
static_assert(sizeof(BP_RocketLauncher_C_GetAimingBlurAngle) == 0x000008, "Wrong size on BP_RocketLauncher_C_GetAimingBlurAngle");
static_assert(offsetof(BP_RocketLauncher_C_GetAimingBlurAngle, Angle) == 0x000000, "Member 'BP_RocketLauncher_C_GetAimingBlurAngle::Angle' has a wrong offset!");

// Function BP_RocketLauncher.BP_RocketLauncher_C.GetBackFireLocation
// 0x00E0 (0x00E0 - 0x0000)
struct BP_RocketLauncher_C_GetBackFireLocation final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Rotation;                                          // 0x0018(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue;           // 0x0030(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RocketLauncher_C_GetBackFireLocation) == 0x000010, "Wrong alignment on BP_RocketLauncher_C_GetBackFireLocation");
static_assert(sizeof(BP_RocketLauncher_C_GetBackFireLocation) == 0x0000E0, "Wrong size on BP_RocketLauncher_C_GetBackFireLocation");
static_assert(offsetof(BP_RocketLauncher_C_GetBackFireLocation, Location) == 0x000000, "Member 'BP_RocketLauncher_C_GetBackFireLocation::Location' has a wrong offset!");
static_assert(offsetof(BP_RocketLauncher_C_GetBackFireLocation, Rotation) == 0x000018, "Member 'BP_RocketLauncher_C_GetBackFireLocation::Rotation' has a wrong offset!");
static_assert(offsetof(BP_RocketLauncher_C_GetBackFireLocation, CallFunc_GetSocketTransform_ReturnValue) == 0x000030, "Member 'BP_RocketLauncher_C_GetBackFireLocation::CallFunc_GetSocketTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RocketLauncher_C_GetBackFireLocation, CallFunc_BreakTransform_Location) == 0x000090, "Member 'BP_RocketLauncher_C_GetBackFireLocation::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_RocketLauncher_C_GetBackFireLocation, CallFunc_BreakTransform_Rotation) == 0x0000A8, "Member 'BP_RocketLauncher_C_GetBackFireLocation::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_RocketLauncher_C_GetBackFireLocation, CallFunc_BreakTransform_Scale) == 0x0000C0, "Member 'BP_RocketLauncher_C_GetBackFireLocation::CallFunc_BreakTransform_Scale' has a wrong offset!");

// Function BP_RocketLauncher.BP_RocketLauncher_C.GetBlurAngle
// 0x0008 (0x0008 - 0x0000)
struct BP_RocketLauncher_C_GetBlurAngle final
{
public:
	double                                        Angle;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RocketLauncher_C_GetBlurAngle) == 0x000008, "Wrong alignment on BP_RocketLauncher_C_GetBlurAngle");
static_assert(sizeof(BP_RocketLauncher_C_GetBlurAngle) == 0x000008, "Wrong size on BP_RocketLauncher_C_GetBlurAngle");
static_assert(offsetof(BP_RocketLauncher_C_GetBlurAngle, Angle) == 0x000000, "Member 'BP_RocketLauncher_C_GetBlurAngle::Angle' has a wrong offset!");

// Function BP_RocketLauncher.BP_RocketLauncher_C.GetBulletClass
// 0x0008 (0x0008 - 0x0000)
struct BP_RocketLauncher_C_GetBulletClass final
{
public:
	class UClass*                                 NewParam;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RocketLauncher_C_GetBulletClass) == 0x000008, "Wrong alignment on BP_RocketLauncher_C_GetBulletClass");
static_assert(sizeof(BP_RocketLauncher_C_GetBulletClass) == 0x000008, "Wrong size on BP_RocketLauncher_C_GetBulletClass");
static_assert(offsetof(BP_RocketLauncher_C_GetBulletClass, NewParam) == 0x000000, "Member 'BP_RocketLauncher_C_GetBulletClass::NewParam' has a wrong offset!");

// Function BP_RocketLauncher.BP_RocketLauncher_C.GetInitializeInterval
// 0x0018 (0x0018 - 0x0000)
struct BP_RocketLauncher_C_GetInitializeInterval final
{
public:
	double                                        Time;                                              // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetShootInterval_Time;                    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RocketLauncher_C_GetInitializeInterval) == 0x000008, "Wrong alignment on BP_RocketLauncher_C_GetInitializeInterval");
static_assert(sizeof(BP_RocketLauncher_C_GetInitializeInterval) == 0x000018, "Wrong size on BP_RocketLauncher_C_GetInitializeInterval");
static_assert(offsetof(BP_RocketLauncher_C_GetInitializeInterval, Time) == 0x000000, "Member 'BP_RocketLauncher_C_GetInitializeInterval::Time' has a wrong offset!");
static_assert(offsetof(BP_RocketLauncher_C_GetInitializeInterval, CallFunc_GetShootInterval_Time) == 0x000008, "Member 'BP_RocketLauncher_C_GetInitializeInterval::CallFunc_GetShootInterval_Time' has a wrong offset!");
static_assert(offsetof(BP_RocketLauncher_C_GetInitializeInterval, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000010, "Member 'BP_RocketLauncher_C_GetInitializeInterval::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");

// Function BP_RocketLauncher.BP_RocketLauncher_C.GetMuzzleEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_RocketLauncher_C_GetMuzzleEffect final
{
public:
	class UNiagaraSystem*                         NewParam;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RocketLauncher_C_GetMuzzleEffect) == 0x000008, "Wrong alignment on BP_RocketLauncher_C_GetMuzzleEffect");
static_assert(sizeof(BP_RocketLauncher_C_GetMuzzleEffect) == 0x000008, "Wrong size on BP_RocketLauncher_C_GetMuzzleEffect");
static_assert(offsetof(BP_RocketLauncher_C_GetMuzzleEffect, NewParam) == 0x000000, "Member 'BP_RocketLauncher_C_GetMuzzleEffect::NewParam' has a wrong offset!");

// Function BP_RocketLauncher.BP_RocketLauncher_C.GetMuzzleLocation
// 0x0030 (0x0030 - 0x0000)
struct BP_RocketLauncher_C_GetMuzzleLocation final
{
public:
	struct FVector                                MuzzleLocation;                                    // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RocketLauncher_C_GetMuzzleLocation) == 0x000008, "Wrong alignment on BP_RocketLauncher_C_GetMuzzleLocation");
static_assert(sizeof(BP_RocketLauncher_C_GetMuzzleLocation) == 0x000030, "Wrong size on BP_RocketLauncher_C_GetMuzzleLocation");
static_assert(offsetof(BP_RocketLauncher_C_GetMuzzleLocation, MuzzleLocation) == 0x000000, "Member 'BP_RocketLauncher_C_GetMuzzleLocation::MuzzleLocation' has a wrong offset!");
static_assert(offsetof(BP_RocketLauncher_C_GetMuzzleLocation, CallFunc_GetSocketLocation_ReturnValue) == 0x000018, "Member 'BP_RocketLauncher_C_GetMuzzleLocation::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");

// Function BP_RocketLauncher.BP_RocketLauncher_C.GetMuzzleRotator
// 0x0030 (0x0030 - 0x0000)
struct BP_RocketLauncher_C_GetMuzzleRotator final
{
public:
	struct FRotator                               Rotator;                                           // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_GetSocketRotation_ReturnValue;            // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_RocketLauncher_C_GetMuzzleRotator) == 0x000008, "Wrong alignment on BP_RocketLauncher_C_GetMuzzleRotator");
static_assert(sizeof(BP_RocketLauncher_C_GetMuzzleRotator) == 0x000030, "Wrong size on BP_RocketLauncher_C_GetMuzzleRotator");
static_assert(offsetof(BP_RocketLauncher_C_GetMuzzleRotator, Rotator) == 0x000000, "Member 'BP_RocketLauncher_C_GetMuzzleRotator::Rotator' has a wrong offset!");
static_assert(offsetof(BP_RocketLauncher_C_GetMuzzleRotator, CallFunc_GetSocketRotation_ReturnValue) == 0x000018, "Member 'BP_RocketLauncher_C_GetMuzzleRotator::CallFunc_GetSocketRotation_ReturnValue' has a wrong offset!");

// Function BP_RocketLauncher.BP_RocketLauncher_C.isUseRightHandAttach
// 0x0001 (0x0001 - 0x0000)
struct BP_RocketLauncher_C_IsUseRightHandAttach final
{
public:
	bool                                          IsUse;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RocketLauncher_C_IsUseRightHandAttach) == 0x000001, "Wrong alignment on BP_RocketLauncher_C_IsUseRightHandAttach");
static_assert(sizeof(BP_RocketLauncher_C_IsUseRightHandAttach) == 0x000001, "Wrong size on BP_RocketLauncher_C_IsUseRightHandAttach");
static_assert(offsetof(BP_RocketLauncher_C_IsUseRightHandAttach, IsUse) == 0x000000, "Member 'BP_RocketLauncher_C_IsUseRightHandAttach::IsUse' has a wrong offset!");

// Function BP_RocketLauncher.BP_RocketLauncher_C.OnEndShootAnimation
// 0x0010 (0x0010 - 0x0000)
struct BP_RocketLauncher_C_OnEndShootAnimation final
{
public:
	class UAnimMontage*                           Montage;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmptyMagazine_ReturnValue;              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RocketLauncher_C_OnEndShootAnimation) == 0x000008, "Wrong alignment on BP_RocketLauncher_C_OnEndShootAnimation");
static_assert(sizeof(BP_RocketLauncher_C_OnEndShootAnimation) == 0x000010, "Wrong size on BP_RocketLauncher_C_OnEndShootAnimation");
static_assert(offsetof(BP_RocketLauncher_C_OnEndShootAnimation, Montage) == 0x000000, "Member 'BP_RocketLauncher_C_OnEndShootAnimation::Montage' has a wrong offset!");
static_assert(offsetof(BP_RocketLauncher_C_OnEndShootAnimation, CallFunc_IsEmptyMagazine_ReturnValue) == 0x000008, "Member 'BP_RocketLauncher_C_OnEndShootAnimation::CallFunc_IsEmptyMagazine_ReturnValue' has a wrong offset!");

// Function BP_RocketLauncher.BP_RocketLauncher_C.OnReload
// 0x0004 (0x0004 - 0x0000)
struct BP_RocketLauncher_C_OnReload final
{
public:
	int32                                         bulletsNum;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RocketLauncher_C_OnReload) == 0x000004, "Wrong alignment on BP_RocketLauncher_C_OnReload");
static_assert(sizeof(BP_RocketLauncher_C_OnReload) == 0x000004, "Wrong size on BP_RocketLauncher_C_OnReload");
static_assert(offsetof(BP_RocketLauncher_C_OnReload, bulletsNum) == 0x000000, "Member 'BP_RocketLauncher_C_OnReload::bulletsNum' has a wrong offset!");

// Function BP_RocketLauncher.BP_RocketLauncher_C.PlayFireSound
// 0x000C (0x000C - 0x0000)
struct BP_RocketLauncher_C_PlayFireSound final
{
public:
	struct FPalSoundOptions                       K2Node_MakeStruct_PalSoundOptions;                 // 0x0000(0x0004)(NoDestructor)
	struct FPalDataTableRowName_SoundID           K2Node_MakeStruct_PalDataTableRowName_SoundID;     // 0x0004(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RocketLauncher_C_PlayFireSound) == 0x000004, "Wrong alignment on BP_RocketLauncher_C_PlayFireSound");
static_assert(sizeof(BP_RocketLauncher_C_PlayFireSound) == 0x00000C, "Wrong size on BP_RocketLauncher_C_PlayFireSound");
static_assert(offsetof(BP_RocketLauncher_C_PlayFireSound, K2Node_MakeStruct_PalSoundOptions) == 0x000000, "Member 'BP_RocketLauncher_C_PlayFireSound::K2Node_MakeStruct_PalSoundOptions' has a wrong offset!");
static_assert(offsetof(BP_RocketLauncher_C_PlayFireSound, K2Node_MakeStruct_PalDataTableRowName_SoundID) == 0x000004, "Member 'BP_RocketLauncher_C_PlayFireSound::K2Node_MakeStruct_PalDataTableRowName_SoundID' has a wrong offset!");

// Function BP_RocketLauncher.BP_RocketLauncher_C.PlayReloadSound
// 0x0028 (0x0028 - 0x0000)
struct BP_RocketLauncher_C_PlayReloadSound final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetOwnerCharacter_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalSoundOptions                       K2Node_MakeStruct_PalSoundOptions;                 // 0x0018(0x0004)(NoDestructor)
	struct FPalDataTableRowName_SoundID           K2Node_MakeStruct_PalDataTableRowName_SoundID;     // 0x001C(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RocketLauncher_C_PlayReloadSound) == 0x000008, "Wrong alignment on BP_RocketLauncher_C_PlayReloadSound");
static_assert(sizeof(BP_RocketLauncher_C_PlayReloadSound) == 0x000028, "Wrong size on BP_RocketLauncher_C_PlayReloadSound");
static_assert(offsetof(BP_RocketLauncher_C_PlayReloadSound, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'BP_RocketLauncher_C_PlayReloadSound::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_RocketLauncher_C_PlayReloadSound, CallFunc_GetOwnerCharacter_ReturnValue) == 0x000010, "Member 'BP_RocketLauncher_C_PlayReloadSound::CallFunc_GetOwnerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RocketLauncher_C_PlayReloadSound, K2Node_MakeStruct_PalSoundOptions) == 0x000018, "Member 'BP_RocketLauncher_C_PlayReloadSound::K2Node_MakeStruct_PalSoundOptions' has a wrong offset!");
static_assert(offsetof(BP_RocketLauncher_C_PlayReloadSound, K2Node_MakeStruct_PalDataTableRowName_SoundID) == 0x00001C, "Member 'BP_RocketLauncher_C_PlayReloadSound::K2Node_MakeStruct_PalDataTableRowName_SoundID' has a wrong offset!");

// Function BP_RocketLauncher.BP_RocketLauncher_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_RocketLauncher_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RocketLauncher_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_RocketLauncher_C_ReceiveTick");
static_assert(sizeof(BP_RocketLauncher_C_ReceiveTick) == 0x000004, "Wrong size on BP_RocketLauncher_C_ReceiveTick");
static_assert(offsetof(BP_RocketLauncher_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_RocketLauncher_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_RocketLauncher.BP_RocketLauncher_C.StopReloadSound
// 0x0008 (0x0008 - 0x0000)
struct BP_RocketLauncher_C_StopReloadSound final
{
public:
	struct FPalDataTableRowName_SoundID           K2Node_MakeStruct_PalDataTableRowName_SoundID;     // 0x0000(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RocketLauncher_C_StopReloadSound) == 0x000004, "Wrong alignment on BP_RocketLauncher_C_StopReloadSound");
static_assert(sizeof(BP_RocketLauncher_C_StopReloadSound) == 0x000008, "Wrong size on BP_RocketLauncher_C_StopReloadSound");
static_assert(offsetof(BP_RocketLauncher_C_StopReloadSound, K2Node_MakeStruct_PalDataTableRowName_SoundID) == 0x000000, "Member 'BP_RocketLauncher_C_StopReloadSound::K2Node_MakeStruct_PalDataTableRowName_SoundID' has a wrong offset!");

// Function BP_RocketLauncher.BP_RocketLauncher_C.GetShootInterval
// 0x0008 (0x0008 - 0x0000)
struct BP_RocketLauncher_C_GetShootInterval final
{
public:
	double                                        Time;                                              // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RocketLauncher_C_GetShootInterval) == 0x000008, "Wrong alignment on BP_RocketLauncher_C_GetShootInterval");
static_assert(sizeof(BP_RocketLauncher_C_GetShootInterval) == 0x000008, "Wrong size on BP_RocketLauncher_C_GetShootInterval");
static_assert(offsetof(BP_RocketLauncher_C_GetShootInterval, Time) == 0x000000, "Member 'BP_RocketLauncher_C_GetShootInterval::Time' has a wrong offset!");

// Function BP_RocketLauncher.BP_RocketLauncher_C.OnAttachWeapon
// 0x0008 (0x0008 - 0x0000)
struct BP_RocketLauncher_C_OnAttachWeapon final
{
public:
	class AActor*                                 AttachActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RocketLauncher_C_OnAttachWeapon) == 0x000008, "Wrong alignment on BP_RocketLauncher_C_OnAttachWeapon");
static_assert(sizeof(BP_RocketLauncher_C_OnAttachWeapon) == 0x000008, "Wrong size on BP_RocketLauncher_C_OnAttachWeapon");
static_assert(offsetof(BP_RocketLauncher_C_OnAttachWeapon, AttachActor) == 0x000000, "Member 'BP_RocketLauncher_C_OnAttachWeapon::AttachActor' has a wrong offset!");

// Function BP_RocketLauncher.BP_RocketLauncher_C.OnDetachWeapon
// 0x0008 (0x0008 - 0x0000)
struct BP_RocketLauncher_C_OnDetachWeapon final
{
public:
	class AActor*                                 DetachActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RocketLauncher_C_OnDetachWeapon) == 0x000008, "Wrong alignment on BP_RocketLauncher_C_OnDetachWeapon");
static_assert(sizeof(BP_RocketLauncher_C_OnDetachWeapon) == 0x000008, "Wrong size on BP_RocketLauncher_C_OnDetachWeapon");
static_assert(offsetof(BP_RocketLauncher_C_OnDetachWeapon, DetachActor) == 0x000000, "Member 'BP_RocketLauncher_C_OnDetachWeapon::DetachActor' has a wrong offset!");

// Function BP_RocketLauncher.BP_RocketLauncher_C.OnShoot
// 0x0038 (0x0038 - 0x0000)
struct BP_RocketLauncher_C_OnShoot final
{
public:
	struct FVector                                CallFunc_GetBackFireLocation_Location;             // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetBackFireLocation_Rotation;             // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RocketLauncher_C_OnShoot) == 0x000008, "Wrong alignment on BP_RocketLauncher_C_OnShoot");
static_assert(sizeof(BP_RocketLauncher_C_OnShoot) == 0x000038, "Wrong size on BP_RocketLauncher_C_OnShoot");
static_assert(offsetof(BP_RocketLauncher_C_OnShoot, CallFunc_GetBackFireLocation_Location) == 0x000000, "Member 'BP_RocketLauncher_C_OnShoot::CallFunc_GetBackFireLocation_Location' has a wrong offset!");
static_assert(offsetof(BP_RocketLauncher_C_OnShoot, CallFunc_GetBackFireLocation_Rotation) == 0x000018, "Member 'BP_RocketLauncher_C_OnShoot::CallFunc_GetBackFireLocation_Rotation' has a wrong offset!");
static_assert(offsetof(BP_RocketLauncher_C_OnShoot, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000030, "Member 'BP_RocketLauncher_C_OnShoot::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");

// Function BP_RocketLauncher.BP_RocketLauncher_C.GetLeftHandTransform
// 0x00C0 (0x00C0 - 0x0000)
struct BP_RocketLauncher_C_GetLeftHandTransform final
{
public:
	struct FTransform                             ReturnValue;                                       // 0x0000(0x0060)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue;           // 0x0060(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RocketLauncher_C_GetLeftHandTransform) == 0x000010, "Wrong alignment on BP_RocketLauncher_C_GetLeftHandTransform");
static_assert(sizeof(BP_RocketLauncher_C_GetLeftHandTransform) == 0x0000C0, "Wrong size on BP_RocketLauncher_C_GetLeftHandTransform");
static_assert(offsetof(BP_RocketLauncher_C_GetLeftHandTransform, ReturnValue) == 0x000000, "Member 'BP_RocketLauncher_C_GetLeftHandTransform::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RocketLauncher_C_GetLeftHandTransform, CallFunc_GetSocketTransform_ReturnValue) == 0x000060, "Member 'BP_RocketLauncher_C_GetLeftHandTransform::CallFunc_GetSocketTransform_ReturnValue' has a wrong offset!");

// Function BP_RocketLauncher.BP_RocketLauncher_C.IsUseLeftHandAttach
// 0x0001 (0x0001 - 0x0000)
struct BP_RocketLauncher_C_IsUseLeftHandAttach final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RocketLauncher_C_IsUseLeftHandAttach) == 0x000001, "Wrong alignment on BP_RocketLauncher_C_IsUseLeftHandAttach");
static_assert(sizeof(BP_RocketLauncher_C_IsUseLeftHandAttach) == 0x000001, "Wrong size on BP_RocketLauncher_C_IsUseLeftHandAttach");
static_assert(offsetof(BP_RocketLauncher_C_IsUseLeftHandAttach, ReturnValue) == 0x000000, "Member 'BP_RocketLauncher_C_IsUseLeftHandAttach::ReturnValue' has a wrong offset!");

}

