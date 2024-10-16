#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffectShadowBall.BP_SkillEffectShadowBall_C
// 0x0030 (0x03F0 - 0x03C0)
class ABP_SkillEffectShadowBall_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffectShadowBall_C;         // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      ball;                                              // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        ReadyTime;                                         // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetActor;                                       // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_SkillEffectShadowBall_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature(class AActor* Defencer, const struct FPalDamageInfo& DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
	void BndEvt__BP_SkillEffectShadowBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_BP_SkillEffectShadowBall(int32 EntryPoint);
	void FadeOutEffect(double DeltaSecond);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffectShadowBall_C">();
	}
	static class ABP_SkillEffectShadowBall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffectShadowBall_C>();
	}
};
static_assert(alignof(ABP_SkillEffectShadowBall_C) == 0x000008, "Wrong alignment on ABP_SkillEffectShadowBall_C");
static_assert(sizeof(ABP_SkillEffectShadowBall_C) == 0x0003F0, "Wrong size on ABP_SkillEffectShadowBall_C");
static_assert(offsetof(ABP_SkillEffectShadowBall_C, UberGraphFrame_BP_SkillEffectShadowBall_C) == 0x0003C0, "Member 'ABP_SkillEffectShadowBall_C::UberGraphFrame_BP_SkillEffectShadowBall_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectShadowBall_C, ball) == 0x0003C8, "Member 'ABP_SkillEffectShadowBall_C::ball' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectShadowBall_C, ProjectileMovement) == 0x0003D0, "Member 'ABP_SkillEffectShadowBall_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectShadowBall_C, Sphere) == 0x0003D8, "Member 'ABP_SkillEffectShadowBall_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectShadowBall_C, ReadyTime) == 0x0003E0, "Member 'ABP_SkillEffectShadowBall_C::ReadyTime' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectShadowBall_C, TargetActor) == 0x0003E8, "Member 'ABP_SkillEffectShadowBall_C::TargetActor' has a wrong offset!");

}

