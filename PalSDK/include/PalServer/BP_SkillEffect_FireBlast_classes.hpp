#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_SkillEffect_FireBlast.BP_SkillEffect_FireBlast_C
// 0x0020 (0x03E0 - 0x03C0)
class ABP_SkillEffect_FireBlast_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_FireBlast_C;         // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NS_FireBlastOura;                                  // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_SkillEffect_FireBlast_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature(class AActor* Defencer, const struct FPalDamageInfo& DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
	void BndEvt__BP_SkillEffect_FireBlast_MovementSphereRoot_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_BP_SkillEffect_FireBlast(int32 EntryPoint);
	void FadeOutEffect(double DeltaSecond);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_FireBlast_C">();
	}
	static class ABP_SkillEffect_FireBlast_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_FireBlast_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_FireBlast_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_FireBlast_C");
static_assert(sizeof(ABP_SkillEffect_FireBlast_C) == 0x0003E0, "Wrong size on ABP_SkillEffect_FireBlast_C");
static_assert(offsetof(ABP_SkillEffect_FireBlast_C, UberGraphFrame_BP_SkillEffect_FireBlast_C) == 0x0003C0, "Member 'ABP_SkillEffect_FireBlast_C::UberGraphFrame_BP_SkillEffect_FireBlast_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FireBlast_C, NS_FireBlastOura) == 0x0003C8, "Member 'ABP_SkillEffect_FireBlast_C::NS_FireBlastOura' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FireBlast_C, Sphere) == 0x0003D0, "Member 'ABP_SkillEffect_FireBlast_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FireBlast_C, ProjectileMovement) == 0x0003D8, "Member 'ABP_SkillEffect_FireBlast_C::ProjectileMovement' has a wrong offset!");

}

