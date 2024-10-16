#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_GhostFlame_Bullet.BP_SkillEffect_GhostFlame_Bullet_C
// 0x0080 (0x0440 - 0x03C0)
class ABP_SkillEffect_GhostFlame_Bullet_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_GhostFlame_Bullet_C; // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       SlowDownCollision;                                 // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       DamageCollision;                                   // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      GhostFlame;                                        // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         RandSpeed;                                         // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EC[0x4];                                      // 0x03EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        InitialSpeed;                                      // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HomingSpeed;                                       // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Gravity;                                           // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxHoming;                                         // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AddHoming;                                         // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StartDeceleration;                                 // 0x0418(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_419[0x7];                                      // 0x0419(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DecelerationEasingSpeed;                           // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AccumulatedTime;                                   // 0x0428(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DamageCollisionLifeTime;                           // 0x042C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         BurstEffect;                                       // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         MaxEffectDuration;                                 // 0x0438(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_SkillEffect_GhostFlame_Bullet_SlowDownCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet(int32 EntryPoint);
	void FadeOutEffect(double DeltaSecond);
	void InitShot();
	void OnHitDelegate_____________(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, const TArray<int32>& FoliageIndex, const struct FVector& HitLocation, int32 HitCount);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_GhostFlame_Bullet_C">();
	}
	static class ABP_SkillEffect_GhostFlame_Bullet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_GhostFlame_Bullet_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_GhostFlame_Bullet_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_GhostFlame_Bullet_C");
static_assert(sizeof(ABP_SkillEffect_GhostFlame_Bullet_C) == 0x000440, "Wrong size on ABP_SkillEffect_GhostFlame_Bullet_C");
static_assert(offsetof(ABP_SkillEffect_GhostFlame_Bullet_C, UberGraphFrame_BP_SkillEffect_GhostFlame_Bullet_C) == 0x0003C0, "Member 'ABP_SkillEffect_GhostFlame_Bullet_C::UberGraphFrame_BP_SkillEffect_GhostFlame_Bullet_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GhostFlame_Bullet_C, SlowDownCollision) == 0x0003C8, "Member 'ABP_SkillEffect_GhostFlame_Bullet_C::SlowDownCollision' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GhostFlame_Bullet_C, DamageCollision) == 0x0003D0, "Member 'ABP_SkillEffect_GhostFlame_Bullet_C::DamageCollision' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GhostFlame_Bullet_C, GhostFlame) == 0x0003D8, "Member 'ABP_SkillEffect_GhostFlame_Bullet_C::GhostFlame' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GhostFlame_Bullet_C, ProjectileMovement) == 0x0003E0, "Member 'ABP_SkillEffect_GhostFlame_Bullet_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GhostFlame_Bullet_C, RandSpeed) == 0x0003E8, "Member 'ABP_SkillEffect_GhostFlame_Bullet_C::RandSpeed' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GhostFlame_Bullet_C, InitialSpeed) == 0x0003F0, "Member 'ABP_SkillEffect_GhostFlame_Bullet_C::InitialSpeed' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GhostFlame_Bullet_C, HomingSpeed) == 0x0003F8, "Member 'ABP_SkillEffect_GhostFlame_Bullet_C::HomingSpeed' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GhostFlame_Bullet_C, Gravity) == 0x000400, "Member 'ABP_SkillEffect_GhostFlame_Bullet_C::Gravity' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GhostFlame_Bullet_C, MaxHoming) == 0x000408, "Member 'ABP_SkillEffect_GhostFlame_Bullet_C::MaxHoming' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GhostFlame_Bullet_C, AddHoming) == 0x000410, "Member 'ABP_SkillEffect_GhostFlame_Bullet_C::AddHoming' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GhostFlame_Bullet_C, StartDeceleration) == 0x000418, "Member 'ABP_SkillEffect_GhostFlame_Bullet_C::StartDeceleration' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GhostFlame_Bullet_C, DecelerationEasingSpeed) == 0x000420, "Member 'ABP_SkillEffect_GhostFlame_Bullet_C::DecelerationEasingSpeed' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GhostFlame_Bullet_C, AccumulatedTime) == 0x000428, "Member 'ABP_SkillEffect_GhostFlame_Bullet_C::AccumulatedTime' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GhostFlame_Bullet_C, DamageCollisionLifeTime) == 0x00042C, "Member 'ABP_SkillEffect_GhostFlame_Bullet_C::DamageCollisionLifeTime' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GhostFlame_Bullet_C, BurstEffect) == 0x000430, "Member 'ABP_SkillEffect_GhostFlame_Bullet_C::BurstEffect' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GhostFlame_Bullet_C, MaxEffectDuration) == 0x000438, "Member 'ABP_SkillEffect_GhostFlame_Bullet_C::MaxEffectDuration' has a wrong offset!");

}

