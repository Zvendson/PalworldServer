#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_SkillEffect_DarkBall.BP_SkillEffect_DarkBall_C
// 0x0028 (0x03E8 - 0x03C0)
class ABP_SkillEffect_DarkBall_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_DarkBall_C;          // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       DamageCollisionSphere;                             // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      P_Pentagon01;                                      // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         SkillDuration;                                     // 0x03E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_SkillEffect_ThunderBall_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature(class AActor* Defencer, const struct FPalDamageInfo& DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
	void BndEvt__BP_SkillEffect_ThunderBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_BP_SkillEffect_DarkBall(int32 EntryPoint);
	void ReachEndOfLife();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_DarkBall_C">();
	}
	static class ABP_SkillEffect_DarkBall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_DarkBall_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_DarkBall_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_DarkBall_C");
static_assert(sizeof(ABP_SkillEffect_DarkBall_C) == 0x0003E8, "Wrong size on ABP_SkillEffect_DarkBall_C");
static_assert(offsetof(ABP_SkillEffect_DarkBall_C, UberGraphFrame_BP_SkillEffect_DarkBall_C) == 0x0003C0, "Member 'ABP_SkillEffect_DarkBall_C::UberGraphFrame_BP_SkillEffect_DarkBall_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_DarkBall_C, ProjectileMovement) == 0x0003C8, "Member 'ABP_SkillEffect_DarkBall_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_DarkBall_C, DamageCollisionSphere) == 0x0003D0, "Member 'ABP_SkillEffect_DarkBall_C::DamageCollisionSphere' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_DarkBall_C, P_Pentagon01) == 0x0003D8, "Member 'ABP_SkillEffect_DarkBall_C::P_Pentagon01' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_DarkBall_C, SkillDuration) == 0x0003E0, "Member 'ABP_SkillEffect_DarkBall_C::SkillDuration' has a wrong offset!");

}

