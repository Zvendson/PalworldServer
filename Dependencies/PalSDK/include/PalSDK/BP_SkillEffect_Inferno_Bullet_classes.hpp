#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_Inferno_Bullet.BP_SkillEffect_Inferno_Bullet_C
// 0x0030 (0x03F0 - 0x03C0)
class ABP_SkillEffect_Inferno_Bullet_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_Inferno_Bullet_C;    // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       SphereCollision;                                   // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      ExplosionEffect;                                   // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      OmenEffect;                                        // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        CollisionTime;                                     // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Timer;                                             // 0x03E8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SkillEffect_Inferno_Bullet(int32 EntryPoint);
	void Explosion();
	void FadeOutEffect(double DeltaSecond);
	void InitializeEffect();
	void OnEndCollision();
	void OnExplosion();
	void OnInitialize();
	void SetRandomValueIntoNiagaraVariable(class UNiagaraComponent* NiagaraComp);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_Inferno_Bullet_C">();
	}
	static class ABP_SkillEffect_Inferno_Bullet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_Inferno_Bullet_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_Inferno_Bullet_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_Inferno_Bullet_C");
static_assert(sizeof(ABP_SkillEffect_Inferno_Bullet_C) == 0x0003F0, "Wrong size on ABP_SkillEffect_Inferno_Bullet_C");
static_assert(offsetof(ABP_SkillEffect_Inferno_Bullet_C, UberGraphFrame_BP_SkillEffect_Inferno_Bullet_C) == 0x0003C0, "Member 'ABP_SkillEffect_Inferno_Bullet_C::UberGraphFrame_BP_SkillEffect_Inferno_Bullet_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Inferno_Bullet_C, SphereCollision) == 0x0003C8, "Member 'ABP_SkillEffect_Inferno_Bullet_C::SphereCollision' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Inferno_Bullet_C, ExplosionEffect) == 0x0003D0, "Member 'ABP_SkillEffect_Inferno_Bullet_C::ExplosionEffect' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Inferno_Bullet_C, OmenEffect) == 0x0003D8, "Member 'ABP_SkillEffect_Inferno_Bullet_C::OmenEffect' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Inferno_Bullet_C, CollisionTime) == 0x0003E0, "Member 'ABP_SkillEffect_Inferno_Bullet_C::CollisionTime' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Inferno_Bullet_C, Timer) == 0x0003E8, "Member 'ABP_SkillEffect_Inferno_Bullet_C::Timer' has a wrong offset!");

}

