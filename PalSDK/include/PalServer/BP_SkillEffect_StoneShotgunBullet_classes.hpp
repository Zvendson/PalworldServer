#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_SkillEffect_StoneShotgunBullet.BP_SkillEffect_StoneShotgunBullet_C
// 0x0020 (0x03E0 - 0x03C0)
class ABP_SkillEffect_StoneShotgunBullet_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_StoneShotgunBullet_C; // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Niagara;                                           // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule;                                           // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_SkillEffect_StoneShotgunBullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_BP_SkillEffect_StoneShotgunBullet(int32 EntryPoint);
	void FadeOutEffect(double DeltaSecond);
	void ReceiveBeginPlay();
	void SetRandomValueIntoNiagaraVariable(class UNiagaraComponent* NiagaraComp);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_StoneShotgunBullet_C">();
	}
	static class ABP_SkillEffect_StoneShotgunBullet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_StoneShotgunBullet_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_StoneShotgunBullet_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_StoneShotgunBullet_C");
static_assert(sizeof(ABP_SkillEffect_StoneShotgunBullet_C) == 0x0003E0, "Wrong size on ABP_SkillEffect_StoneShotgunBullet_C");
static_assert(offsetof(ABP_SkillEffect_StoneShotgunBullet_C, UberGraphFrame_BP_SkillEffect_StoneShotgunBullet_C) == 0x0003C0, "Member 'ABP_SkillEffect_StoneShotgunBullet_C::UberGraphFrame_BP_SkillEffect_StoneShotgunBullet_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_StoneShotgunBullet_C, Niagara) == 0x0003C8, "Member 'ABP_SkillEffect_StoneShotgunBullet_C::Niagara' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_StoneShotgunBullet_C, Capsule) == 0x0003D0, "Member 'ABP_SkillEffect_StoneShotgunBullet_C::Capsule' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_StoneShotgunBullet_C, ProjectileMovement) == 0x0003D8, "Member 'ABP_SkillEffect_StoneShotgunBullet_C::ProjectileMovement' has a wrong offset!");

}

