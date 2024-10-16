#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_HomingMissile.BP_HomingMissile_C.ExecuteUbergraph_BP_HomingMissile
// 0x01B0 (0x01B0 - 0x0000)
struct BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_Event_HitComp;                              // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherCharacter;                       // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_Event_OtherComp;                            // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_Hit;                                  // 0x0028(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0110(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetWeaponDamage_ReturnValue;              // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_17C[0x4];                                      // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetExplosionClass_ExplosionClass;         // 0x0180(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ExplosionAttackBase_C*              CallFunc_FinishSpawningActor_ReturnValue;          // 0x0198(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_HomingAccelerationMagnitude_ImplicitCast; // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile) == 0x000010, "Wrong alignment on BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile");
static_assert(sizeof(BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile) == 0x0001B0, "Wrong size on BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile");
static_assert(offsetof(BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile, EntryPoint) == 0x000000, "Member 'BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile, CallFunc_RandomFloatInRange_ReturnValue) == 0x000008, "Member 'BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile, K2Node_Event_HitComp) == 0x000010, "Member 'BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile::K2Node_Event_HitComp' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile, K2Node_Event_OtherCharacter) == 0x000018, "Member 'BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile::K2Node_Event_OtherCharacter' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile, K2Node_Event_OtherComp) == 0x000020, "Member 'BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile::K2Node_Event_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile, K2Node_Event_Hit) == 0x000028, "Member 'BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile, CallFunc_GetTransform_ReturnValue) == 0x000110, "Member 'BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000170, "Member 'BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile, CallFunc_GetWeaponDamage_ReturnValue) == 0x000178, "Member 'BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile::CallFunc_GetWeaponDamage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile, CallFunc_GetExplosionClass_ExplosionClass) == 0x000180, "Member 'BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile::CallFunc_GetExplosionClass_ExplosionClass' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000188, "Member 'BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000190, "Member 'BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile, CallFunc_FinishSpawningActor_ReturnValue) == 0x000198, "Member 'BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x0001A0, "Member 'BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile, K2Node_VariableSet_HomingAccelerationMagnitude_ImplicitCast) == 0x0001A8, "Member 'BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile::K2Node_VariableSet_HomingAccelerationMagnitude_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile, CallFunc_Delay_Duration_ImplicitCast) == 0x0001AC, "Member 'BP_HomingMissile_C_ExecuteUbergraph_BP_HomingMissile::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

// Function BP_HomingMissile.BP_HomingMissile_C.GetBulletAttackType
// 0x0001 (0x0001 - 0x0000)
struct BP_HomingMissile_C_GetBulletAttackType final
{
public:
	EPalAttackType                                AttackType;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HomingMissile_C_GetBulletAttackType) == 0x000001, "Wrong alignment on BP_HomingMissile_C_GetBulletAttackType");
static_assert(sizeof(BP_HomingMissile_C_GetBulletAttackType) == 0x000001, "Wrong size on BP_HomingMissile_C_GetBulletAttackType");
static_assert(offsetof(BP_HomingMissile_C_GetBulletAttackType, AttackType) == 0x000000, "Member 'BP_HomingMissile_C_GetBulletAttackType::AttackType' has a wrong offset!");

// Function BP_HomingMissile.BP_HomingMissile_C.GetExplosionClass
// 0x0008 (0x0008 - 0x0000)
struct BP_HomingMissile_C_GetExplosionClass final
{
public:
	class UClass*                                 ExplosionClass;                                    // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HomingMissile_C_GetExplosionClass) == 0x000008, "Wrong alignment on BP_HomingMissile_C_GetExplosionClass");
static_assert(sizeof(BP_HomingMissile_C_GetExplosionClass) == 0x000008, "Wrong size on BP_HomingMissile_C_GetExplosionClass");
static_assert(offsetof(BP_HomingMissile_C_GetExplosionClass, ExplosionClass) == 0x000000, "Member 'BP_HomingMissile_C_GetExplosionClass::ExplosionClass' has a wrong offset!");

// Function BP_HomingMissile.BP_HomingMissile_C.OnDestroy
// 0x0100 (0x0100 - 0x0000)
struct BP_HomingMissile_C_OnDestroy final
{
public:
	class UPrimitiveComponent*                    HitComp;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherCharacter;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0018(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_HomingMissile_C_OnDestroy) == 0x000008, "Wrong alignment on BP_HomingMissile_C_OnDestroy");
static_assert(sizeof(BP_HomingMissile_C_OnDestroy) == 0x000100, "Wrong size on BP_HomingMissile_C_OnDestroy");
static_assert(offsetof(BP_HomingMissile_C_OnDestroy, HitComp) == 0x000000, "Member 'BP_HomingMissile_C_OnDestroy::HitComp' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_C_OnDestroy, OtherCharacter) == 0x000008, "Member 'BP_HomingMissile_C_OnDestroy::OtherCharacter' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_C_OnDestroy, OtherComp) == 0x000010, "Member 'BP_HomingMissile_C_OnDestroy::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_C_OnDestroy, Hit) == 0x000018, "Member 'BP_HomingMissile_C_OnDestroy::Hit' has a wrong offset!");

// Function BP_HomingMissile.BP_HomingMissile_C.OnHitToActor
// 0x0100 (0x0100 - 0x0000)
struct BP_HomingMissile_C_OnHitToActor final
{
public:
	class UPrimitiveComponent*                    HitComp;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0018(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_HomingMissile_C_OnHitToActor) == 0x000008, "Wrong alignment on BP_HomingMissile_C_OnHitToActor");
static_assert(sizeof(BP_HomingMissile_C_OnHitToActor) == 0x000100, "Wrong size on BP_HomingMissile_C_OnHitToActor");
static_assert(offsetof(BP_HomingMissile_C_OnHitToActor, HitComp) == 0x000000, "Member 'BP_HomingMissile_C_OnHitToActor::HitComp' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_C_OnHitToActor, OtherActor) == 0x000008, "Member 'BP_HomingMissile_C_OnHitToActor::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_C_OnHitToActor, OtherComp) == 0x000010, "Member 'BP_HomingMissile_C_OnHitToActor::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_C_OnHitToActor, Hit) == 0x000018, "Member 'BP_HomingMissile_C_OnHitToActor::Hit' has a wrong offset!");

// Function BP_HomingMissile.BP_HomingMissile_C.SetAttackTarget
// 0x0018 (0x0018 - 0x0000)
struct BP_HomingMissile_C_SetAttackTarget final
{
public:
	class APalCharacter*                          Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HomingMissile_C_SetAttackTarget) == 0x000008, "Wrong alignment on BP_HomingMissile_C_SetAttackTarget");
static_assert(sizeof(BP_HomingMissile_C_SetAttackTarget) == 0x000018, "Wrong size on BP_HomingMissile_C_SetAttackTarget");
static_assert(offsetof(BP_HomingMissile_C_SetAttackTarget, Target) == 0x000000, "Member 'BP_HomingMissile_C_SetAttackTarget::Target' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_C_SetAttackTarget, CallFunc_GetMainMesh_ReturnValue) == 0x000008, "Member 'BP_HomingMissile_C_SetAttackTarget::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_C_SetAttackTarget, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_HomingMissile_C_SetAttackTarget::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

