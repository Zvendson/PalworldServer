#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_RocketBullet.BP_RocketBullet_C.ExecuteUbergraph_BP_RocketBullet
// 0x02A0 (0x02A0 - 0x0000)
struct BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetExplosionClass_ExplosionClass;         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_Event_HitComp;                              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherCharacter;                       // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_Event_OtherComp;                            // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_Hit;                                  // 0x0030(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_118[0x8];                                      // 0x0118(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0120(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetWeaponDamage_ReturnValue;              // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_184[0x4];                                      // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSneakAttackRate_ReturnValue;           // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_194[0x4];                                      // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0198(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_ExplosionAttackBase_C*              CallFunc_FinishSpawningActor_ReturnValue;          // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_AddLocalRotation_SweepHitResult;       // 0x01A8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_SetPower_SnakeRate_ImplicitCast;          // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet) == 0x000010, "Wrong alignment on BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet");
static_assert(sizeof(BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet) == 0x0002A0, "Wrong size on BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet");
static_assert(offsetof(BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet, EntryPoint) == 0x000000, "Member 'BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet, CallFunc_GetExplosionClass_ExplosionClass) == 0x000008, "Member 'BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet::CallFunc_GetExplosionClass_ExplosionClass' has a wrong offset!");
static_assert(offsetof(BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet, K2Node_Event_DeltaSeconds) == 0x000010, "Member 'BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet, K2Node_Event_HitComp) == 0x000018, "Member 'BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet::K2Node_Event_HitComp' has a wrong offset!");
static_assert(offsetof(BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet, K2Node_Event_OtherCharacter) == 0x000020, "Member 'BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet::K2Node_Event_OtherCharacter' has a wrong offset!");
static_assert(offsetof(BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet, K2Node_Event_OtherComp) == 0x000028, "Member 'BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet::K2Node_Event_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet, K2Node_Event_Hit) == 0x000030, "Member 'BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet, CallFunc_GetTransform_ReturnValue) == 0x000120, "Member 'BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet, CallFunc_GetWeaponDamage_ReturnValue) == 0x000180, "Member 'BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet::CallFunc_GetWeaponDamage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000188, "Member 'BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet, CallFunc_GetSneakAttackRate_ReturnValue) == 0x000190, "Member 'BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet::CallFunc_GetSneakAttackRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000198, "Member 'BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet, CallFunc_FinishSpawningActor_ReturnValue) == 0x0001A0, "Member 'BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet, CallFunc_K2_AddLocalRotation_SweepHitResult) == 0x0001A8, "Member 'BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet::CallFunc_K2_AddLocalRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet, CallFunc_SetPower_SnakeRate_ImplicitCast) == 0x000290, "Member 'BP_RocketBullet_C_ExecuteUbergraph_BP_RocketBullet::CallFunc_SetPower_SnakeRate_ImplicitCast' has a wrong offset!");

// Function BP_RocketBullet.BP_RocketBullet_C.GetExplosionClass
// 0x0008 (0x0008 - 0x0000)
struct BP_RocketBullet_C_GetExplosionClass final
{
public:
	class UClass*                                 ExplosionClass;                                    // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RocketBullet_C_GetExplosionClass) == 0x000008, "Wrong alignment on BP_RocketBullet_C_GetExplosionClass");
static_assert(sizeof(BP_RocketBullet_C_GetExplosionClass) == 0x000008, "Wrong size on BP_RocketBullet_C_GetExplosionClass");
static_assert(offsetof(BP_RocketBullet_C_GetExplosionClass, ExplosionClass) == 0x000000, "Member 'BP_RocketBullet_C_GetExplosionClass::ExplosionClass' has a wrong offset!");

// Function BP_RocketBullet.BP_RocketBullet_C.OnDestroy
// 0x0100 (0x0100 - 0x0000)
struct BP_RocketBullet_C_OnDestroy final
{
public:
	class UPrimitiveComponent*                    HitComp;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherCharacter;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0018(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_RocketBullet_C_OnDestroy) == 0x000008, "Wrong alignment on BP_RocketBullet_C_OnDestroy");
static_assert(sizeof(BP_RocketBullet_C_OnDestroy) == 0x000100, "Wrong size on BP_RocketBullet_C_OnDestroy");
static_assert(offsetof(BP_RocketBullet_C_OnDestroy, HitComp) == 0x000000, "Member 'BP_RocketBullet_C_OnDestroy::HitComp' has a wrong offset!");
static_assert(offsetof(BP_RocketBullet_C_OnDestroy, OtherCharacter) == 0x000008, "Member 'BP_RocketBullet_C_OnDestroy::OtherCharacter' has a wrong offset!");
static_assert(offsetof(BP_RocketBullet_C_OnDestroy, OtherComp) == 0x000010, "Member 'BP_RocketBullet_C_OnDestroy::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_RocketBullet_C_OnDestroy, Hit) == 0x000018, "Member 'BP_RocketBullet_C_OnDestroy::Hit' has a wrong offset!");

// Function BP_RocketBullet.BP_RocketBullet_C.OnHitToActor
// 0x0100 (0x0100 - 0x0000)
struct BP_RocketBullet_C_OnHitToActor final
{
public:
	class UPrimitiveComponent*                    HitComp;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0018(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_RocketBullet_C_OnHitToActor) == 0x000008, "Wrong alignment on BP_RocketBullet_C_OnHitToActor");
static_assert(sizeof(BP_RocketBullet_C_OnHitToActor) == 0x000100, "Wrong size on BP_RocketBullet_C_OnHitToActor");
static_assert(offsetof(BP_RocketBullet_C_OnHitToActor, HitComp) == 0x000000, "Member 'BP_RocketBullet_C_OnHitToActor::HitComp' has a wrong offset!");
static_assert(offsetof(BP_RocketBullet_C_OnHitToActor, OtherActor) == 0x000008, "Member 'BP_RocketBullet_C_OnHitToActor::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_RocketBullet_C_OnHitToActor, OtherComp) == 0x000010, "Member 'BP_RocketBullet_C_OnHitToActor::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_RocketBullet_C_OnHitToActor, Hit) == 0x000018, "Member 'BP_RocketBullet_C_OnHitToActor::Hit' has a wrong offset!");

// Function BP_RocketBullet.BP_RocketBullet_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_RocketBullet_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RocketBullet_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_RocketBullet_C_ReceiveTick");
static_assert(sizeof(BP_RocketBullet_C_ReceiveTick) == 0x000004, "Wrong size on BP_RocketBullet_C_ReceiveTick");
static_assert(offsetof(BP_RocketBullet_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_RocketBullet_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

