#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffec_AcidRain_Bullet.BP_SkillEffec_AcidRain_Bullet_C
// 0x0020 (0x03E0 - 0x03C0)
class ABP_SkillEffec_AcidRain_Bullet_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffec_AcidRain_Bullet_C;    // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      BulletEffect;                                      // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule;                                           // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_SkillEffec_AcidRain_Bullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature(class AActor* Defencer, const struct FPalDamageInfo& DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
	void ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet(int32 EntryPoint);
	void FadeOutEffect(double DeltaSecond);
	void ReceiveBeginPlay();
	void SetRandomValueIntoNiagaraVariable(class UNiagaraComponent* NiagaraComp);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffec_AcidRain_Bullet_C">();
	}
	static class ABP_SkillEffec_AcidRain_Bullet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffec_AcidRain_Bullet_C>();
	}
};
static_assert(alignof(ABP_SkillEffec_AcidRain_Bullet_C) == 0x000008, "Wrong alignment on ABP_SkillEffec_AcidRain_Bullet_C");
static_assert(sizeof(ABP_SkillEffec_AcidRain_Bullet_C) == 0x0003E0, "Wrong size on ABP_SkillEffec_AcidRain_Bullet_C");
static_assert(offsetof(ABP_SkillEffec_AcidRain_Bullet_C, UberGraphFrame_BP_SkillEffec_AcidRain_Bullet_C) == 0x0003C0, "Member 'ABP_SkillEffec_AcidRain_Bullet_C::UberGraphFrame_BP_SkillEffec_AcidRain_Bullet_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffec_AcidRain_Bullet_C, BulletEffect) == 0x0003C8, "Member 'ABP_SkillEffec_AcidRain_Bullet_C::BulletEffect' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffec_AcidRain_Bullet_C, Capsule) == 0x0003D0, "Member 'ABP_SkillEffec_AcidRain_Bullet_C::Capsule' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffec_AcidRain_Bullet_C, ProjectileMovement) == 0x0003D8, "Member 'ABP_SkillEffec_AcidRain_Bullet_C::ProjectileMovement' has a wrong offset!");

}

