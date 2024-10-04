#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_SkillEffect_IceMissile_Bullet.BP_SkillEffect_IceMissile_Bullet_C
// 0x0060 (0x0420 - 0x03C0)
class ABP_SkillEffect_IceMissile_Bullet_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_IceMissile_Bullet_C; // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                      Capsule;                                           // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_IceMissileBullet;                               // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetActor;                                       // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        UpTime;                                            // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TurnAroundInterval;                                // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsTurnAround;                                      // 0x03F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_3F9[0x7];                                      // 0x03F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Timer;                                             // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                        HomingOffDistance;                                 // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHoming;                                          // 0x0410(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_411[0x3];                                      // 0x0411(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         HomingPowerRate;                                   // 0x0414(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PredictedTarget_C*                  Predicted_Target;                                  // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_EnergyShotBullet_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature(class AActor* Defencer, const struct FPalDamageInfo& DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
	void BndEvt__BP_EnergyShotBullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet(int32 EntryPoint);
	void FadeOutEffect(double DeltaSecond);
	struct FVector GetCurrentTargetLocation();
	void OnBreakAction();
	void OnHitDelegate______________0(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, const TArray<int32>& FoliageIndex, const struct FVector& HitLocation, int32 HitCount);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void StartTurnAround();
	void TurnAround(double DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_IceMissile_Bullet_C">();
	}
	static class ABP_SkillEffect_IceMissile_Bullet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_IceMissile_Bullet_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_IceMissile_Bullet_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_IceMissile_Bullet_C");
static_assert(sizeof(ABP_SkillEffect_IceMissile_Bullet_C) == 0x000420, "Wrong size on ABP_SkillEffect_IceMissile_Bullet_C");
static_assert(offsetof(ABP_SkillEffect_IceMissile_Bullet_C, UberGraphFrame_BP_SkillEffect_IceMissile_Bullet_C) == 0x0003C0, "Member 'ABP_SkillEffect_IceMissile_Bullet_C::UberGraphFrame_BP_SkillEffect_IceMissile_Bullet_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IceMissile_Bullet_C, Capsule) == 0x0003C8, "Member 'ABP_SkillEffect_IceMissile_Bullet_C::Capsule' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IceMissile_Bullet_C, NS_IceMissileBullet) == 0x0003D0, "Member 'ABP_SkillEffect_IceMissile_Bullet_C::NS_IceMissileBullet' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IceMissile_Bullet_C, ProjectileMovement) == 0x0003D8, "Member 'ABP_SkillEffect_IceMissile_Bullet_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IceMissile_Bullet_C, TargetActor) == 0x0003E0, "Member 'ABP_SkillEffect_IceMissile_Bullet_C::TargetActor' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IceMissile_Bullet_C, UpTime) == 0x0003E8, "Member 'ABP_SkillEffect_IceMissile_Bullet_C::UpTime' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IceMissile_Bullet_C, TurnAroundInterval) == 0x0003F0, "Member 'ABP_SkillEffect_IceMissile_Bullet_C::TurnAroundInterval' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IceMissile_Bullet_C, IsTurnAround) == 0x0003F8, "Member 'ABP_SkillEffect_IceMissile_Bullet_C::IsTurnAround' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IceMissile_Bullet_C, Timer) == 0x000400, "Member 'ABP_SkillEffect_IceMissile_Bullet_C::Timer' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IceMissile_Bullet_C, HomingOffDistance) == 0x000408, "Member 'ABP_SkillEffect_IceMissile_Bullet_C::HomingOffDistance' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IceMissile_Bullet_C, IsHoming) == 0x000410, "Member 'ABP_SkillEffect_IceMissile_Bullet_C::IsHoming' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IceMissile_Bullet_C, HomingPowerRate) == 0x000414, "Member 'ABP_SkillEffect_IceMissile_Bullet_C::HomingPowerRate' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IceMissile_Bullet_C, Predicted_Target) == 0x000418, "Member 'ABP_SkillEffect_IceMissile_Bullet_C::Predicted_Target' has a wrong offset!");

}

