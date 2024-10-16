#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_FireSeed.BP_SkillEffect_FireSeed_C
// 0x0088 (0x0448 - 0x03C0)
class ABP_SkillEffect_FireSeed_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_FireSeed_C;          // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       DamageCollision;                                   // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_FireSeed;                                       // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       DisableHomingTrigger;                              // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       ExplosionTrigger;                                  // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       SpawnPos;                                          // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Rotater;                                           // 0x03F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x03F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        ExplosionTime;                                     // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Explosion_volume;                                  // 0x0408(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40C[0x4];                                      // 0x040C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Explosion_extent;                                  // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Explosion_Rot_Y;                                   // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                          Random_Stream;                                     // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)
	bool                                          Explosioned;                                       // 0x0428(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_429[0x7];                                      // 0x0429(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DistanceRequiredForExplosion;                      // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxEffectDuration;                                 // 0x0438(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ChildFireMinScale;                                 // 0x043C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ChildFireMaxScale;                                 // 0x0440(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ExplosionEffectDelay;                              // 0x0444(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_SkillEffect_FireSeed_DisableHomingTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_SkillEffect_FireSeed_ExplosionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_SkillEffect_FireSeed_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_BP_SkillEffect_FireSeed(int32 EntryPoint);
	void Explosion();
	void FadeOutEffect(double DeltaSecond);
	void Get_Predicted_Target(class AActor** PredictedTarget_0);
	void OnHitGround();
	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_FireSeed_C">();
	}
	static class ABP_SkillEffect_FireSeed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_FireSeed_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_FireSeed_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_FireSeed_C");
static_assert(sizeof(ABP_SkillEffect_FireSeed_C) == 0x000448, "Wrong size on ABP_SkillEffect_FireSeed_C");
static_assert(offsetof(ABP_SkillEffect_FireSeed_C, UberGraphFrame_BP_SkillEffect_FireSeed_C) == 0x0003C0, "Member 'ABP_SkillEffect_FireSeed_C::UberGraphFrame_BP_SkillEffect_FireSeed_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FireSeed_C, DamageCollision) == 0x0003C8, "Member 'ABP_SkillEffect_FireSeed_C::DamageCollision' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FireSeed_C, NS_FireSeed) == 0x0003D0, "Member 'ABP_SkillEffect_FireSeed_C::NS_FireSeed' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FireSeed_C, DisableHomingTrigger) == 0x0003D8, "Member 'ABP_SkillEffect_FireSeed_C::DisableHomingTrigger' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FireSeed_C, ExplosionTrigger) == 0x0003E0, "Member 'ABP_SkillEffect_FireSeed_C::ExplosionTrigger' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FireSeed_C, SpawnPos) == 0x0003E8, "Member 'ABP_SkillEffect_FireSeed_C::SpawnPos' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FireSeed_C, Rotater) == 0x0003F0, "Member 'ABP_SkillEffect_FireSeed_C::Rotater' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FireSeed_C, ProjectileMovement) == 0x0003F8, "Member 'ABP_SkillEffect_FireSeed_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FireSeed_C, ExplosionTime) == 0x000400, "Member 'ABP_SkillEffect_FireSeed_C::ExplosionTime' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FireSeed_C, Explosion_volume) == 0x000408, "Member 'ABP_SkillEffect_FireSeed_C::Explosion_volume' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FireSeed_C, Explosion_extent) == 0x000410, "Member 'ABP_SkillEffect_FireSeed_C::Explosion_extent' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FireSeed_C, Explosion_Rot_Y) == 0x000418, "Member 'ABP_SkillEffect_FireSeed_C::Explosion_Rot_Y' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FireSeed_C, Random_Stream) == 0x000420, "Member 'ABP_SkillEffect_FireSeed_C::Random_Stream' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FireSeed_C, Explosioned) == 0x000428, "Member 'ABP_SkillEffect_FireSeed_C::Explosioned' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FireSeed_C, DistanceRequiredForExplosion) == 0x000430, "Member 'ABP_SkillEffect_FireSeed_C::DistanceRequiredForExplosion' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FireSeed_C, MaxEffectDuration) == 0x000438, "Member 'ABP_SkillEffect_FireSeed_C::MaxEffectDuration' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FireSeed_C, ChildFireMinScale) == 0x00043C, "Member 'ABP_SkillEffect_FireSeed_C::ChildFireMinScale' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FireSeed_C, ChildFireMaxScale) == 0x000440, "Member 'ABP_SkillEffect_FireSeed_C::ChildFireMaxScale' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FireSeed_C, ExplosionEffectDelay) == 0x000444, "Member 'ABP_SkillEffect_FireSeed_C::ExplosionEffectDelay' has a wrong offset!");

}

