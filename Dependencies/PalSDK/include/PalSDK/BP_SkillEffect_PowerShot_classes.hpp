#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_PowerShot.BP_SkillEffect_PowerShot_C
// 0x0030 (0x03F0 - 0x03C0)
class ABP_SkillEffect_PowerShot_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_PowerShot_C;         // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Bullet;                                            // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      AttackCollision;                                   // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        HomingOffDistance;                                 // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHoming;                                          // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_SkillEffect_PowerShot_AttackFilter_K2Node_ComponentBoundEvent_2_OnAttackDelegate__DelegateSignature(class AActor* Defencer, const struct FPalDamageInfo& DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
	void BndEvt__BP_SkillEffect_PowerShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void CancelShoot();
	void ExecuteUbergraph_BP_SkillEffect_PowerShot(int32 EntryPoint);
	void FadeOutEffect(double DeltaSecond);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ShootBullet(const struct FVector& TargetLocation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_PowerShot_C">();
	}
	static class ABP_SkillEffect_PowerShot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_PowerShot_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_PowerShot_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_PowerShot_C");
static_assert(sizeof(ABP_SkillEffect_PowerShot_C) == 0x0003F0, "Wrong size on ABP_SkillEffect_PowerShot_C");
static_assert(offsetof(ABP_SkillEffect_PowerShot_C, UberGraphFrame_BP_SkillEffect_PowerShot_C) == 0x0003C0, "Member 'ABP_SkillEffect_PowerShot_C::UberGraphFrame_BP_SkillEffect_PowerShot_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_PowerShot_C, Bullet) == 0x0003C8, "Member 'ABP_SkillEffect_PowerShot_C::Bullet' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_PowerShot_C, AttackCollision) == 0x0003D0, "Member 'ABP_SkillEffect_PowerShot_C::AttackCollision' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_PowerShot_C, ProjectileMovement) == 0x0003D8, "Member 'ABP_SkillEffect_PowerShot_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_PowerShot_C, HomingOffDistance) == 0x0003E0, "Member 'ABP_SkillEffect_PowerShot_C::HomingOffDistance' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_PowerShot_C, IsHoming) == 0x0003E8, "Member 'ABP_SkillEffect_PowerShot_C::IsHoming' has a wrong offset!");

}

