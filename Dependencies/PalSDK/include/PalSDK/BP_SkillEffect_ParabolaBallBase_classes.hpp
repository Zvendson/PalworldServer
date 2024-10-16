#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_ParabolaBallBase.BP_SkillEffect_ParabolaBallBase_C
// 0x0058 (0x0418 - 0x03C0)
class ABP_SkillEffect_ParabolaBallBase_C : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_ParabolaBallBase_C;  // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       ExplosionSphere;                                   // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Charge;                                            // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      ball;                                              // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         Const_ImpactEffect;                                // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Const_AK_Charge;                                   // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Const_AK_Loop;                                     // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Const_AK_Cast;                                     // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Const_AK_Hit;                                      // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_SkillEffect_FlareArrow_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature(class AActor* Defencer, const struct FPalDamageInfo& DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
	void BndEvt__BP_SkillEffect_PowerBall_1_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void CancelShoot();
	void EndCollision();
	void ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ShootBullet(const struct FVector& TargetLocation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_ParabolaBallBase_C">();
	}
	static class ABP_SkillEffect_ParabolaBallBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_ParabolaBallBase_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_ParabolaBallBase_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_ParabolaBallBase_C");
static_assert(sizeof(ABP_SkillEffect_ParabolaBallBase_C) == 0x000418, "Wrong size on ABP_SkillEffect_ParabolaBallBase_C");
static_assert(offsetof(ABP_SkillEffect_ParabolaBallBase_C, UberGraphFrame_BP_SkillEffect_ParabolaBallBase_C) == 0x0003C0, "Member 'ABP_SkillEffect_ParabolaBallBase_C::UberGraphFrame_BP_SkillEffect_ParabolaBallBase_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_ParabolaBallBase_C, ProjectileMovement) == 0x0003C8, "Member 'ABP_SkillEffect_ParabolaBallBase_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_ParabolaBallBase_C, ExplosionSphere) == 0x0003D0, "Member 'ABP_SkillEffect_ParabolaBallBase_C::ExplosionSphere' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_ParabolaBallBase_C, Charge) == 0x0003D8, "Member 'ABP_SkillEffect_ParabolaBallBase_C::Charge' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_ParabolaBallBase_C, Sphere) == 0x0003E0, "Member 'ABP_SkillEffect_ParabolaBallBase_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_ParabolaBallBase_C, ball) == 0x0003E8, "Member 'ABP_SkillEffect_ParabolaBallBase_C::ball' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_ParabolaBallBase_C, Const_ImpactEffect) == 0x0003F0, "Member 'ABP_SkillEffect_ParabolaBallBase_C::Const_ImpactEffect' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_ParabolaBallBase_C, Const_AK_Charge) == 0x0003F8, "Member 'ABP_SkillEffect_ParabolaBallBase_C::Const_AK_Charge' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_ParabolaBallBase_C, Const_AK_Loop) == 0x000400, "Member 'ABP_SkillEffect_ParabolaBallBase_C::Const_AK_Loop' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_ParabolaBallBase_C, Const_AK_Cast) == 0x000408, "Member 'ABP_SkillEffect_ParabolaBallBase_C::Const_AK_Cast' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_ParabolaBallBase_C, Const_AK_Hit) == 0x000410, "Member 'ABP_SkillEffect_ParabolaBallBase_C::Const_AK_Hit' has a wrong offset!");

}

