#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_BubbleShot_Bullet.BP_SkillEffect_BubbleShot_Bullet_C
// 0x0058 (0x0418 - 0x03C0)
class ABP_SkillEffect_BubbleShot_Bullet_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_BubbleShot_Bullet_C; // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       AttackCollision;                                   // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       DisableHomingTrigger;                              // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      BubbleShotEffect;                                  // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         RandSpeed;                                         // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EC[0x4];                                      // 0x03EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        MinSpeed;                                          // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Gravity;                                           // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Max_Homing;                                        // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Add_Homing;                                        // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EffectDuration;                                    // 0x0410(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_SkillEffect_BubbleShot_Bullet_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature(class AActor* Defencer, const struct FPalDamageInfo& DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
	void BndEvt__BP_SkillEffect_BubbleShot_Bullet_BubbleShotEffect_K2Node_ComponentBoundEvent_2_OnNiagaraSystemFinished__DelegateSignature(class UNiagaraComponent* PSystem);
	void BndEvt__BP_SkillEffect_BubbleShot_Bullet_DisableHomingTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_SkillEffect_BubbleShot_Bullet_MovementSphereRoot_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_BP_SkillEffect_BubbleShot_Bullet(int32 EntryPoint);
	void FadeOutEffect(double DeltaSecond);
	void GetHomingEndDot(double* Dot);
	void OnHitGround();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetRandomValueIntoNiagaraVariable(class UNiagaraComponent* NiagaraComp);
	void ________________________();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_BubbleShot_Bullet_C">();
	}
	static class ABP_SkillEffect_BubbleShot_Bullet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_BubbleShot_Bullet_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_BubbleShot_Bullet_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_BubbleShot_Bullet_C");
static_assert(sizeof(ABP_SkillEffect_BubbleShot_Bullet_C) == 0x000418, "Wrong size on ABP_SkillEffect_BubbleShot_Bullet_C");
static_assert(offsetof(ABP_SkillEffect_BubbleShot_Bullet_C, UberGraphFrame_BP_SkillEffect_BubbleShot_Bullet_C) == 0x0003C0, "Member 'ABP_SkillEffect_BubbleShot_Bullet_C::UberGraphFrame_BP_SkillEffect_BubbleShot_Bullet_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_BubbleShot_Bullet_C, AttackCollision) == 0x0003C8, "Member 'ABP_SkillEffect_BubbleShot_Bullet_C::AttackCollision' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_BubbleShot_Bullet_C, DisableHomingTrigger) == 0x0003D0, "Member 'ABP_SkillEffect_BubbleShot_Bullet_C::DisableHomingTrigger' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_BubbleShot_Bullet_C, BubbleShotEffect) == 0x0003D8, "Member 'ABP_SkillEffect_BubbleShot_Bullet_C::BubbleShotEffect' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_BubbleShot_Bullet_C, ProjectileMovement) == 0x0003E0, "Member 'ABP_SkillEffect_BubbleShot_Bullet_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_BubbleShot_Bullet_C, RandSpeed) == 0x0003E8, "Member 'ABP_SkillEffect_BubbleShot_Bullet_C::RandSpeed' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_BubbleShot_Bullet_C, MinSpeed) == 0x0003F0, "Member 'ABP_SkillEffect_BubbleShot_Bullet_C::MinSpeed' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_BubbleShot_Bullet_C, Gravity) == 0x0003F8, "Member 'ABP_SkillEffect_BubbleShot_Bullet_C::Gravity' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_BubbleShot_Bullet_C, Max_Homing) == 0x000400, "Member 'ABP_SkillEffect_BubbleShot_Bullet_C::Max_Homing' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_BubbleShot_Bullet_C, Add_Homing) == 0x000408, "Member 'ABP_SkillEffect_BubbleShot_Bullet_C::Add_Homing' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_BubbleShot_Bullet_C, EffectDuration) == 0x000410, "Member 'ABP_SkillEffect_BubbleShot_Bullet_C::EffectDuration' has a wrong offset!");

}

