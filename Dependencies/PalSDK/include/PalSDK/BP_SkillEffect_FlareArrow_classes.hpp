#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_FlareArrow.BP_SkillEffect_FlareArrow_C
// 0x0030 (0x03F0 - 0x03C0)
class ABP_SkillEffect_FlareArrow_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_FlareArrow_C;        // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                      Capsule;                                           // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_FireBlastOura;                                  // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHoming;                                          // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_3E1[0x7];                                      // 0x03E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        HomingOffDistance;                                 // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_SkillEffect_FlareArrow_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature(class AActor* Defencer, const struct FPalDamageInfo& DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
	void BndEvt__BP_SkillEffect_FlareArrow_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_BP_SkillEffect_FlareArrow(int32 EntryPoint);
	void FadeOutEffect(double DeltaSecond);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_FlareArrow_C">();
	}
	static class ABP_SkillEffect_FlareArrow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_FlareArrow_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_FlareArrow_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_FlareArrow_C");
static_assert(sizeof(ABP_SkillEffect_FlareArrow_C) == 0x0003F0, "Wrong size on ABP_SkillEffect_FlareArrow_C");
static_assert(offsetof(ABP_SkillEffect_FlareArrow_C, UberGraphFrame_BP_SkillEffect_FlareArrow_C) == 0x0003C0, "Member 'ABP_SkillEffect_FlareArrow_C::UberGraphFrame_BP_SkillEffect_FlareArrow_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FlareArrow_C, Capsule) == 0x0003C8, "Member 'ABP_SkillEffect_FlareArrow_C::Capsule' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FlareArrow_C, NS_FireBlastOura) == 0x0003D0, "Member 'ABP_SkillEffect_FlareArrow_C::NS_FireBlastOura' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FlareArrow_C, ProjectileMovement) == 0x0003D8, "Member 'ABP_SkillEffect_FlareArrow_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FlareArrow_C, IsHoming) == 0x0003E0, "Member 'ABP_SkillEffect_FlareArrow_C::IsHoming' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FlareArrow_C, HomingOffDistance) == 0x0003E8, "Member 'ABP_SkillEffect_FlareArrow_C::HomingOffDistance' has a wrong offset!");

}

