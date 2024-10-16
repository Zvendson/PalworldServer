#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_GrapplingGun_Bullet.BP_GrapplingGun_Bullet_C.ExecuteUbergraph_BP_GrapplingGun_Bullet
// 0x0004 (0x0004 - 0x0000)
struct BP_GrapplingGun_Bullet_C_ExecuteUbergraph_BP_GrapplingGun_Bullet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrapplingGun_Bullet_C_ExecuteUbergraph_BP_GrapplingGun_Bullet) == 0x000004, "Wrong alignment on BP_GrapplingGun_Bullet_C_ExecuteUbergraph_BP_GrapplingGun_Bullet");
static_assert(sizeof(BP_GrapplingGun_Bullet_C_ExecuteUbergraph_BP_GrapplingGun_Bullet) == 0x000004, "Wrong size on BP_GrapplingGun_Bullet_C_ExecuteUbergraph_BP_GrapplingGun_Bullet");
static_assert(offsetof(BP_GrapplingGun_Bullet_C_ExecuteUbergraph_BP_GrapplingGun_Bullet, EntryPoint) == 0x000000, "Member 'BP_GrapplingGun_Bullet_C_ExecuteUbergraph_BP_GrapplingGun_Bullet::EntryPoint' has a wrong offset!");

// Function BP_GrapplingGun_Bullet.BP_GrapplingGun_Bullet_C.UpdateCable
// 0x02A0 (0x02A0 - 0x0000)
struct BP_GrapplingGun_Bullet_C_UpdateCable final
{
public:
	struct FVector                                Start;                                             // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                End;                                               // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHit;                                             // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsVisible;                                         // 0x0031(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetActorLocationAndRotation_SweepHitResult; // 0x0050(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocationAndRotation_ReturnValue; // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0140(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_InverseTransformLocation_ReturnValue;     // 0x01A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x01B8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_GrapplingGun_Bullet_C_UpdateCable) == 0x000010, "Wrong alignment on BP_GrapplingGun_Bullet_C_UpdateCable");
static_assert(sizeof(BP_GrapplingGun_Bullet_C_UpdateCable) == 0x0002A0, "Wrong size on BP_GrapplingGun_Bullet_C_UpdateCable");
static_assert(offsetof(BP_GrapplingGun_Bullet_C_UpdateCable, Start) == 0x000000, "Member 'BP_GrapplingGun_Bullet_C_UpdateCable::Start' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_Bullet_C_UpdateCable, End) == 0x000018, "Member 'BP_GrapplingGun_Bullet_C_UpdateCable::End' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_Bullet_C_UpdateCable, IsHit) == 0x000030, "Member 'BP_GrapplingGun_Bullet_C_UpdateCable::IsHit' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_Bullet_C_UpdateCable, IsVisible) == 0x000031, "Member 'BP_GrapplingGun_Bullet_C_UpdateCable::IsVisible' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_Bullet_C_UpdateCable, CallFunc_FindLookAtRotation_ReturnValue) == 0x000038, "Member 'BP_GrapplingGun_Bullet_C_UpdateCable::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_Bullet_C_UpdateCable, CallFunc_K2_SetActorLocationAndRotation_SweepHitResult) == 0x000050, "Member 'BP_GrapplingGun_Bullet_C_UpdateCable::CallFunc_K2_SetActorLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_Bullet_C_UpdateCable, CallFunc_K2_SetActorLocationAndRotation_ReturnValue) == 0x000138, "Member 'BP_GrapplingGun_Bullet_C_UpdateCable::CallFunc_K2_SetActorLocationAndRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_Bullet_C_UpdateCable, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000140, "Member 'BP_GrapplingGun_Bullet_C_UpdateCable::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_Bullet_C_UpdateCable, CallFunc_InverseTransformLocation_ReturnValue) == 0x0001A0, "Member 'BP_GrapplingGun_Bullet_C_UpdateCable::CallFunc_InverseTransformLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_Bullet_C_UpdateCable, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x0001B8, "Member 'BP_GrapplingGun_Bullet_C_UpdateCable::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");

}

