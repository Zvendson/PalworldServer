#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_UniqueRideWeapon_DualGrenadeLauncher.BP_UniqueRideWeapon_DualGrenadeLauncher_C.ShootBulletBP
// 0x0010 (0x0010 - 0x0000)
struct BP_UniqueRideWeapon_DualGrenadeLauncher_C_ShootBulletBP final
{
public:
	struct FPalSoundOptions                       K2Node_MakeStruct_PalSoundOptions;                 // 0x0000(0x0004)(NoDestructor)
	struct FPalDataTableRowName_SoundID           K2Node_MakeStruct_PalDataTableRowName_SoundID;     // 0x0004(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_ShootBulletBP) == 0x000004, "Wrong alignment on BP_UniqueRideWeapon_DualGrenadeLauncher_C_ShootBulletBP");
static_assert(sizeof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_ShootBulletBP) == 0x000010, "Wrong size on BP_UniqueRideWeapon_DualGrenadeLauncher_C_ShootBulletBP");
static_assert(offsetof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_ShootBulletBP, K2Node_MakeStruct_PalSoundOptions) == 0x000000, "Member 'BP_UniqueRideWeapon_DualGrenadeLauncher_C_ShootBulletBP::K2Node_MakeStruct_PalSoundOptions' has a wrong offset!");
static_assert(offsetof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_ShootBulletBP, K2Node_MakeStruct_PalDataTableRowName_SoundID) == 0x000004, "Member 'BP_UniqueRideWeapon_DualGrenadeLauncher_C_ShootBulletBP::K2Node_MakeStruct_PalDataTableRowName_SoundID' has a wrong offset!");
static_assert(offsetof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_ShootBulletBP, CallFunc_Not_PreBool_ReturnValue) == 0x00000C, "Member 'BP_UniqueRideWeapon_DualGrenadeLauncher_C_ShootBulletBP::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BP_UniqueRideWeapon_DualGrenadeLauncher.BP_UniqueRideWeapon_DualGrenadeLauncher_C.OnAttachWeapon
// 0x0008 (0x0008 - 0x0000)
struct BP_UniqueRideWeapon_DualGrenadeLauncher_C_OnAttachWeapon final
{
public:
	class AActor*                                 AttachActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_OnAttachWeapon) == 0x000008, "Wrong alignment on BP_UniqueRideWeapon_DualGrenadeLauncher_C_OnAttachWeapon");
static_assert(sizeof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_OnAttachWeapon) == 0x000008, "Wrong size on BP_UniqueRideWeapon_DualGrenadeLauncher_C_OnAttachWeapon");
static_assert(offsetof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_OnAttachWeapon, AttachActor) == 0x000000, "Member 'BP_UniqueRideWeapon_DualGrenadeLauncher_C_OnAttachWeapon::AttachActor' has a wrong offset!");

// Function BP_UniqueRideWeapon_DualGrenadeLauncher.BP_UniqueRideWeapon_DualGrenadeLauncher_C.GetUseWeaponMesh
// 0x0008 (0x0008 - 0x0000)
struct BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetUseWeaponMesh final
{
public:
	class USkeletalMeshComponent*                 Mesh;                                              // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetUseWeaponMesh) == 0x000008, "Wrong alignment on BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetUseWeaponMesh");
static_assert(sizeof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetUseWeaponMesh) == 0x000008, "Wrong size on BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetUseWeaponMesh");
static_assert(offsetof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetUseWeaponMesh, Mesh) == 0x000000, "Member 'BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetUseWeaponMesh::Mesh' has a wrong offset!");

// Function BP_UniqueRideWeapon_DualGrenadeLauncher.BP_UniqueRideWeapon_DualGrenadeLauncher_C.GetMuzzleRotation
// 0x0038 (0x0038 - 0x0000)
struct BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetMuzzleRotation final
{
public:
	struct FRotator                               ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	class USkeletalMeshComponent*                 CallFunc_GetUseWeaponMesh_Mesh;                    // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetSocketRotation_ReturnValue;            // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetMuzzleRotation) == 0x000008, "Wrong alignment on BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetMuzzleRotation");
static_assert(sizeof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetMuzzleRotation) == 0x000038, "Wrong size on BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetMuzzleRotation");
static_assert(offsetof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetMuzzleRotation, ReturnValue) == 0x000000, "Member 'BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetMuzzleRotation::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetMuzzleRotation, CallFunc_GetUseWeaponMesh_Mesh) == 0x000018, "Member 'BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetMuzzleRotation::CallFunc_GetUseWeaponMesh_Mesh' has a wrong offset!");
static_assert(offsetof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetMuzzleRotation, CallFunc_GetSocketRotation_ReturnValue) == 0x000020, "Member 'BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetMuzzleRotation::CallFunc_GetSocketRotation_ReturnValue' has a wrong offset!");

// Function BP_UniqueRideWeapon_DualGrenadeLauncher.BP_UniqueRideWeapon_DualGrenadeLauncher_C.GetMuzzleLocation
// 0x0038 (0x0038 - 0x0000)
struct BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetMuzzleLocation final
{
public:
	struct FVector                                ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetUseWeaponMesh_Mesh;                    // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetMuzzleLocation) == 0x000008, "Wrong alignment on BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetMuzzleLocation");
static_assert(sizeof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetMuzzleLocation) == 0x000038, "Wrong size on BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetMuzzleLocation");
static_assert(offsetof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetMuzzleLocation, ReturnValue) == 0x000000, "Member 'BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetMuzzleLocation::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetMuzzleLocation, CallFunc_GetUseWeaponMesh_Mesh) == 0x000018, "Member 'BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetMuzzleLocation::CallFunc_GetUseWeaponMesh_Mesh' has a wrong offset!");
static_assert(offsetof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetMuzzleLocation, CallFunc_GetSocketLocation_ReturnValue) == 0x000020, "Member 'BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetMuzzleLocation::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");

// Function BP_UniqueRideWeapon_DualGrenadeLauncher.BP_UniqueRideWeapon_DualGrenadeLauncher_C.GetMuzzleEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetMuzzleEffect final
{
public:
	class UNiagaraSystem*                         ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetMuzzleEffect) == 0x000008, "Wrong alignment on BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetMuzzleEffect");
static_assert(sizeof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetMuzzleEffect) == 0x000008, "Wrong size on BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetMuzzleEffect");
static_assert(offsetof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetMuzzleEffect, ReturnValue) == 0x000000, "Member 'BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetMuzzleEffect::ReturnValue' has a wrong offset!");

// Function BP_UniqueRideWeapon_DualGrenadeLauncher.BP_UniqueRideWeapon_DualGrenadeLauncher_C.GetBulletClass
// 0x0008 (0x0008 - 0x0000)
struct BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetBulletClass final
{
public:
	TSubclassOf<class APalBullet>                 ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetBulletClass) == 0x000008, "Wrong alignment on BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetBulletClass");
static_assert(sizeof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetBulletClass) == 0x000008, "Wrong size on BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetBulletClass");
static_assert(offsetof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetBulletClass, ReturnValue) == 0x000000, "Member 'BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetBulletClass::ReturnValue' has a wrong offset!");

// Function BP_UniqueRideWeapon_DualGrenadeLauncher.BP_UniqueRideWeapon_DualGrenadeLauncher_C.GetAllMeshComponent
// 0x0028 (0x0028 - 0x0000)
struct BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetAllMeshComponent final
{
public:
	TArray<class UMeshComponent*>                 OutMesh;                                           // 0x0000(0x0010)(Parm, OutParm, ContainsInstancedReference)
	TArray<class UMeshComponent*>                 NewLocalVar_0;                                     // 0x0010(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetAllMeshComponent) == 0x000008, "Wrong alignment on BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetAllMeshComponent");
static_assert(sizeof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetAllMeshComponent) == 0x000028, "Wrong size on BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetAllMeshComponent");
static_assert(offsetof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetAllMeshComponent, OutMesh) == 0x000000, "Member 'BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetAllMeshComponent::OutMesh' has a wrong offset!");
static_assert(offsetof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetAllMeshComponent, NewLocalVar_0) == 0x000010, "Member 'BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetAllMeshComponent::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetAllMeshComponent, CallFunc_Array_Add_ReturnValue) == 0x000020, "Member 'BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetAllMeshComponent::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetAllMeshComponent, CallFunc_Array_Add_ReturnValue_1) == 0x000024, "Member 'BP_UniqueRideWeapon_DualGrenadeLauncher_C_GetAllMeshComponent::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");

// Function BP_UniqueRideWeapon_DualGrenadeLauncher.BP_UniqueRideWeapon_DualGrenadeLauncher_C.ExecuteUbergraph_BP_UniqueRideWeapon_DualGrenadeLauncher
// 0x0200 (0x0200 - 0x0000)
struct BP_UniqueRideWeapon_DualGrenadeLauncher_C_ExecuteUbergraph_BP_UniqueRideWeapon_DualGrenadeLauncher final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_attachActor;                          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetMainMeshByActor_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetMainMeshByActor_ReturnValue_1;         // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0028(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult_1;  // 0x0110(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue_1;       // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_ExecuteUbergraph_BP_UniqueRideWeapon_DualGrenadeLauncher) == 0x000008, "Wrong alignment on BP_UniqueRideWeapon_DualGrenadeLauncher_C_ExecuteUbergraph_BP_UniqueRideWeapon_DualGrenadeLauncher");
static_assert(sizeof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_ExecuteUbergraph_BP_UniqueRideWeapon_DualGrenadeLauncher) == 0x000200, "Wrong size on BP_UniqueRideWeapon_DualGrenadeLauncher_C_ExecuteUbergraph_BP_UniqueRideWeapon_DualGrenadeLauncher");
static_assert(offsetof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_ExecuteUbergraph_BP_UniqueRideWeapon_DualGrenadeLauncher, EntryPoint) == 0x000000, "Member 'BP_UniqueRideWeapon_DualGrenadeLauncher_C_ExecuteUbergraph_BP_UniqueRideWeapon_DualGrenadeLauncher::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_ExecuteUbergraph_BP_UniqueRideWeapon_DualGrenadeLauncher, K2Node_Event_attachActor) == 0x000008, "Member 'BP_UniqueRideWeapon_DualGrenadeLauncher_C_ExecuteUbergraph_BP_UniqueRideWeapon_DualGrenadeLauncher::K2Node_Event_attachActor' has a wrong offset!");
static_assert(offsetof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_ExecuteUbergraph_BP_UniqueRideWeapon_DualGrenadeLauncher, CallFunc_GetMainMeshByActor_ReturnValue) == 0x000010, "Member 'BP_UniqueRideWeapon_DualGrenadeLauncher_C_ExecuteUbergraph_BP_UniqueRideWeapon_DualGrenadeLauncher::CallFunc_GetMainMeshByActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_ExecuteUbergraph_BP_UniqueRideWeapon_DualGrenadeLauncher, CallFunc_GetMainMeshByActor_ReturnValue_1) == 0x000018, "Member 'BP_UniqueRideWeapon_DualGrenadeLauncher_C_ExecuteUbergraph_BP_UniqueRideWeapon_DualGrenadeLauncher::CallFunc_GetMainMeshByActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_ExecuteUbergraph_BP_UniqueRideWeapon_DualGrenadeLauncher, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000020, "Member 'BP_UniqueRideWeapon_DualGrenadeLauncher_C_ExecuteUbergraph_BP_UniqueRideWeapon_DualGrenadeLauncher::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_ExecuteUbergraph_BP_UniqueRideWeapon_DualGrenadeLauncher, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000028, "Member 'BP_UniqueRideWeapon_DualGrenadeLauncher_C_ExecuteUbergraph_BP_UniqueRideWeapon_DualGrenadeLauncher::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_ExecuteUbergraph_BP_UniqueRideWeapon_DualGrenadeLauncher, CallFunc_K2_SetRelativeRotation_SweepHitResult_1) == 0x000110, "Member 'BP_UniqueRideWeapon_DualGrenadeLauncher_C_ExecuteUbergraph_BP_UniqueRideWeapon_DualGrenadeLauncher::CallFunc_K2_SetRelativeRotation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_UniqueRideWeapon_DualGrenadeLauncher_C_ExecuteUbergraph_BP_UniqueRideWeapon_DualGrenadeLauncher, CallFunc_K2_AttachToComponent_ReturnValue_1) == 0x0001F8, "Member 'BP_UniqueRideWeapon_DualGrenadeLauncher_C_ExecuteUbergraph_BP_UniqueRideWeapon_DualGrenadeLauncher::CallFunc_K2_AttachToComponent_ReturnValue_1' has a wrong offset!");

}

