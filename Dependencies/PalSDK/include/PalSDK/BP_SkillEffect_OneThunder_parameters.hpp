#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_SkillEffect_OneThunder.BP_SkillEffect_OneThunder_C.SpawnBullet
// 0x00E0 (0x00E0 - 0x0000)
struct BP_SkillEffect_OneThunder_C_SpawnBullet final
{
public:
	int32                                         Count;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetActionTargetLocation_ReturnValue;      // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorScale3D_ReturnValue;              // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58[0x8];                                       // 0x0058(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0060(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_AdjustActorToFloor_ReturnValue;           // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_OneThunder_C_SpawnBullet) == 0x000010, "Wrong alignment on BP_SkillEffect_OneThunder_C_SpawnBullet");
static_assert(sizeof(BP_SkillEffect_OneThunder_C_SpawnBullet) == 0x0000E0, "Wrong size on BP_SkillEffect_OneThunder_C_SpawnBullet");
static_assert(offsetof(BP_SkillEffect_OneThunder_C_SpawnBullet, Count) == 0x000000, "Member 'BP_SkillEffect_OneThunder_C_SpawnBullet::Count' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_OneThunder_C_SpawnBullet, CallFunc_GetActionTargetLocation_ReturnValue) == 0x000008, "Member 'BP_SkillEffect_OneThunder_C_SpawnBullet::CallFunc_GetActionTargetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_OneThunder_C_SpawnBullet, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'BP_SkillEffect_OneThunder_C_SpawnBullet::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_OneThunder_C_SpawnBullet, CallFunc_GetActorScale3D_ReturnValue) == 0x000028, "Member 'BP_SkillEffect_OneThunder_C_SpawnBullet::CallFunc_GetActorScale3D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_OneThunder_C_SpawnBullet, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000040, "Member 'BP_SkillEffect_OneThunder_C_SpawnBullet::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_OneThunder_C_SpawnBullet, CallFunc_MakeTransform_ReturnValue) == 0x000060, "Member 'BP_SkillEffect_OneThunder_C_SpawnBullet::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_OneThunder_C_SpawnBullet, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000C0, "Member 'BP_SkillEffect_OneThunder_C_SpawnBullet::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_OneThunder_C_SpawnBullet, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000C8, "Member 'BP_SkillEffect_OneThunder_C_SpawnBullet::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_OneThunder_C_SpawnBullet, CallFunc_AdjustActorToFloor_ReturnValue) == 0x0000D0, "Member 'BP_SkillEffect_OneThunder_C_SpawnBullet::CallFunc_AdjustActorToFloor_ReturnValue' has a wrong offset!");

}

