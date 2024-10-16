#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_Skill_ThunderFunnel_Bullet.BP_Skill_ThunderFunnel_Bullet_C
// 0x0028 (0x03E8 - 0x03C0)
class ABP_Skill_ThunderFunnel_Bullet_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Skill_ThunderFunnel_Bullet_C;    // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NS_CommonSkill_ThunderFunnel_Bullet;               // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        LifeTimeAfterDestroyFunnel;                        // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_SkillEffect_SpreadPulse_Bullet_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature(class AActor* Defencer, const struct FPalDamageInfo& DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
	void BndEvt__BP_SkillEffect_SpreadPulse_Bullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_BP_Skill_ThunderFunnel_Bullet(int32 EntryPoint);
	void FadeOutEffect(double DeltaSecond);
	void OnHitGround();
	void ReceiveBeginPlay();
	void SetDelayFadeOutEffect(double Delay);
	void SetDelayFadeOutEffectInternal();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Skill_ThunderFunnel_Bullet_C">();
	}
	static class ABP_Skill_ThunderFunnel_Bullet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Skill_ThunderFunnel_Bullet_C>();
	}
};
static_assert(alignof(ABP_Skill_ThunderFunnel_Bullet_C) == 0x000008, "Wrong alignment on ABP_Skill_ThunderFunnel_Bullet_C");
static_assert(sizeof(ABP_Skill_ThunderFunnel_Bullet_C) == 0x0003E8, "Wrong size on ABP_Skill_ThunderFunnel_Bullet_C");
static_assert(offsetof(ABP_Skill_ThunderFunnel_Bullet_C, UberGraphFrame_BP_Skill_ThunderFunnel_Bullet_C) == 0x0003C0, "Member 'ABP_Skill_ThunderFunnel_Bullet_C::UberGraphFrame_BP_Skill_ThunderFunnel_Bullet_C' has a wrong offset!");
static_assert(offsetof(ABP_Skill_ThunderFunnel_Bullet_C, NS_CommonSkill_ThunderFunnel_Bullet) == 0x0003C8, "Member 'ABP_Skill_ThunderFunnel_Bullet_C::NS_CommonSkill_ThunderFunnel_Bullet' has a wrong offset!");
static_assert(offsetof(ABP_Skill_ThunderFunnel_Bullet_C, Sphere) == 0x0003D0, "Member 'ABP_Skill_ThunderFunnel_Bullet_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_Skill_ThunderFunnel_Bullet_C, ProjectileMovement) == 0x0003D8, "Member 'ABP_Skill_ThunderFunnel_Bullet_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(ABP_Skill_ThunderFunnel_Bullet_C, LifeTimeAfterDestroyFunnel) == 0x0003E0, "Member 'ABP_Skill_ThunderFunnel_Bullet_C::LifeTimeAfterDestroyFunnel' has a wrong offset!");

}

