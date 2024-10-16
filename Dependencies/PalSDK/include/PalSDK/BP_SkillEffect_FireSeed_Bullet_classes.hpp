#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_FireSeed_Bullet.BP_SkillEffect_FireSeed_Bullet_C
// 0x0048 (0x0408 - 0x03C0)
class ABP_SkillEffect_FireSeed_Bullet_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_FireSeed_Bullet_C;   // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Collision_0;                                       // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement_0;                              // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_FireSeed_Bullet;                                // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         RandSpeed;                                         // 0x03E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E4[0x4];                                      // 0x03E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Gravity;                                           // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MinSpeed;                                          // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                          RandomStream_0;                                    // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)
	float                                         EffectLifeTime;                                    // 0x0400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_SkillEffect_FireSeed_Bullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet(int32 EntryPoint);
	void FadeOutEffect(double DeltaSecond);
	void OnHitDelegate_____________(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, const TArray<int32>& FoliageIndex, const struct FVector& HitLocation, int32 HitCount);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_FireSeed_Bullet_C">();
	}
	static class ABP_SkillEffect_FireSeed_Bullet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_FireSeed_Bullet_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_FireSeed_Bullet_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_FireSeed_Bullet_C");
static_assert(sizeof(ABP_SkillEffect_FireSeed_Bullet_C) == 0x000408, "Wrong size on ABP_SkillEffect_FireSeed_Bullet_C");
static_assert(offsetof(ABP_SkillEffect_FireSeed_Bullet_C, UberGraphFrame_BP_SkillEffect_FireSeed_Bullet_C) == 0x0003C0, "Member 'ABP_SkillEffect_FireSeed_Bullet_C::UberGraphFrame_BP_SkillEffect_FireSeed_Bullet_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FireSeed_Bullet_C, Collision_0) == 0x0003C8, "Member 'ABP_SkillEffect_FireSeed_Bullet_C::Collision_0' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FireSeed_Bullet_C, ProjectileMovement_0) == 0x0003D0, "Member 'ABP_SkillEffect_FireSeed_Bullet_C::ProjectileMovement_0' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FireSeed_Bullet_C, NS_FireSeed_Bullet) == 0x0003D8, "Member 'ABP_SkillEffect_FireSeed_Bullet_C::NS_FireSeed_Bullet' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FireSeed_Bullet_C, RandSpeed) == 0x0003E0, "Member 'ABP_SkillEffect_FireSeed_Bullet_C::RandSpeed' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FireSeed_Bullet_C, Gravity) == 0x0003E8, "Member 'ABP_SkillEffect_FireSeed_Bullet_C::Gravity' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FireSeed_Bullet_C, MinSpeed) == 0x0003F0, "Member 'ABP_SkillEffect_FireSeed_Bullet_C::MinSpeed' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FireSeed_Bullet_C, RandomStream_0) == 0x0003F8, "Member 'ABP_SkillEffect_FireSeed_Bullet_C::RandomStream_0' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FireSeed_Bullet_C, EffectLifeTime) == 0x000400, "Member 'ABP_SkillEffect_FireSeed_Bullet_C::EffectLifeTime' has a wrong offset!");

}

