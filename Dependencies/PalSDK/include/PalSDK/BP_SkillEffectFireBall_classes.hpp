#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffectFireBall.BP_SkillEffectFireBall_C
// 0x0058 (0x0418 - 0x03C0)
class ABP_SkillEffectFireBall_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffectFireBall_C;           // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Aura;                                              // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      ball;                                              // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       BallDamage;                                        // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        ReadyTime;                                         // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetActor;                                       // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         ImpactEffect;                                      // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ImpactPoint;                                       // 0x0400(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

public:
	void BndEvt__BP_SkillEffect_FlareArrow_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature(class AActor* Defencer, const struct FPalDamageInfo& DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
	void BndEvt__BP_SkillEffectFireBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_BP_SkillEffectFireBall(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffectFireBall_C">();
	}
	static class ABP_SkillEffectFireBall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffectFireBall_C>();
	}
};
static_assert(alignof(ABP_SkillEffectFireBall_C) == 0x000008, "Wrong alignment on ABP_SkillEffectFireBall_C");
static_assert(sizeof(ABP_SkillEffectFireBall_C) == 0x000418, "Wrong size on ABP_SkillEffectFireBall_C");
static_assert(offsetof(ABP_SkillEffectFireBall_C, UberGraphFrame_BP_SkillEffectFireBall_C) == 0x0003C0, "Member 'ABP_SkillEffectFireBall_C::UberGraphFrame_BP_SkillEffectFireBall_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectFireBall_C, Aura) == 0x0003C8, "Member 'ABP_SkillEffectFireBall_C::Aura' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectFireBall_C, ball) == 0x0003D0, "Member 'ABP_SkillEffectFireBall_C::ball' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectFireBall_C, ProjectileMovement) == 0x0003D8, "Member 'ABP_SkillEffectFireBall_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectFireBall_C, BallDamage) == 0x0003E0, "Member 'ABP_SkillEffectFireBall_C::BallDamage' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectFireBall_C, ReadyTime) == 0x0003E8, "Member 'ABP_SkillEffectFireBall_C::ReadyTime' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectFireBall_C, TargetActor) == 0x0003F0, "Member 'ABP_SkillEffectFireBall_C::TargetActor' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectFireBall_C, ImpactEffect) == 0x0003F8, "Member 'ABP_SkillEffectFireBall_C::ImpactEffect' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectFireBall_C, ImpactPoint) == 0x000400, "Member 'ABP_SkillEffectFireBall_C::ImpactPoint' has a wrong offset!");

}

