#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_SeedMine.BP_SkillEffect_SeedMine_C
// 0x00C8 (0x0488 - 0x03C0)
class ABP_SkillEffect_SeedMine_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_SeedMine_C;          // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       SpawnPos;                                          // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       StopPos;                                           // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Collision;                                         // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_FirstEffect;                                    // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        Gravity;                                           // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AttachEffectScale;                                 // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ShotStartTime;                                     // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ExplosionTime;                                     // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Explosion_volume;                                  // 0x0410(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Explosion_Num;                                     // 0x0414(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Explosion_Rot_Y;                                   // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BulletExtent;                                      // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                BulletPos;                                         // 0x0428(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               BulletRot;                                         // 0x0440(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Arc_Param;                                         // 0x0458(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45C[0x4];                                      // 0x045C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        MineSpeedConstant;                                 // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHit;                                             // 0x0468(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HitGround;                                         // 0x0469(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OnRide;                                            // 0x046A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EndWait;                                           // 0x046B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46C[0x4];                                      // 0x046C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      AttachedEffect;                                    // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        MineSpeed;                                         // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Attacked;                                          // 0x0480(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_SkillEffect_IcicleThrow_SpawnPos_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_SkillEffect_SeedMine_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_BP_SkillEffect_SeedMine(int32 EntryPoint);
	void Explosion();
	void FadeOutEffect(double DeltaSecond);
	void OnAttackDelegate______________0(class AActor* Defencer, const struct FPalDamageInfo& DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveTick(float DeltaSeconds);
	void SetTarget();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_SeedMine_C">();
	}
	static class ABP_SkillEffect_SeedMine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_SeedMine_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_SeedMine_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_SeedMine_C");
static_assert(sizeof(ABP_SkillEffect_SeedMine_C) == 0x000488, "Wrong size on ABP_SkillEffect_SeedMine_C");
static_assert(offsetof(ABP_SkillEffect_SeedMine_C, UberGraphFrame_BP_SkillEffect_SeedMine_C) == 0x0003C0, "Member 'ABP_SkillEffect_SeedMine_C::UberGraphFrame_BP_SkillEffect_SeedMine_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_C, SpawnPos) == 0x0003C8, "Member 'ABP_SkillEffect_SeedMine_C::SpawnPos' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_C, StopPos) == 0x0003D0, "Member 'ABP_SkillEffect_SeedMine_C::StopPos' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_C, Collision) == 0x0003D8, "Member 'ABP_SkillEffect_SeedMine_C::Collision' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_C, ProjectileMovement) == 0x0003E0, "Member 'ABP_SkillEffect_SeedMine_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_C, NS_FirstEffect) == 0x0003E8, "Member 'ABP_SkillEffect_SeedMine_C::NS_FirstEffect' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_C, Gravity) == 0x0003F0, "Member 'ABP_SkillEffect_SeedMine_C::Gravity' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_C, AttachEffectScale) == 0x0003F8, "Member 'ABP_SkillEffect_SeedMine_C::AttachEffectScale' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_C, ShotStartTime) == 0x000400, "Member 'ABP_SkillEffect_SeedMine_C::ShotStartTime' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_C, ExplosionTime) == 0x000408, "Member 'ABP_SkillEffect_SeedMine_C::ExplosionTime' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_C, Explosion_volume) == 0x000410, "Member 'ABP_SkillEffect_SeedMine_C::Explosion_volume' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_C, Explosion_Num) == 0x000414, "Member 'ABP_SkillEffect_SeedMine_C::Explosion_Num' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_C, Explosion_Rot_Y) == 0x000418, "Member 'ABP_SkillEffect_SeedMine_C::Explosion_Rot_Y' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_C, BulletExtent) == 0x000420, "Member 'ABP_SkillEffect_SeedMine_C::BulletExtent' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_C, BulletPos) == 0x000428, "Member 'ABP_SkillEffect_SeedMine_C::BulletPos' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_C, BulletRot) == 0x000440, "Member 'ABP_SkillEffect_SeedMine_C::BulletRot' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_C, Arc_Param) == 0x000458, "Member 'ABP_SkillEffect_SeedMine_C::Arc_Param' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_C, MineSpeedConstant) == 0x000460, "Member 'ABP_SkillEffect_SeedMine_C::MineSpeedConstant' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_C, IsHit) == 0x000468, "Member 'ABP_SkillEffect_SeedMine_C::IsHit' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_C, HitGround) == 0x000469, "Member 'ABP_SkillEffect_SeedMine_C::HitGround' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_C, OnRide) == 0x00046A, "Member 'ABP_SkillEffect_SeedMine_C::OnRide' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_C, EndWait) == 0x00046B, "Member 'ABP_SkillEffect_SeedMine_C::EndWait' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_C, AttachedEffect) == 0x000470, "Member 'ABP_SkillEffect_SeedMine_C::AttachedEffect' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_C, MineSpeed) == 0x000478, "Member 'ABP_SkillEffect_SeedMine_C::MineSpeed' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_C, Attacked) == 0x000480, "Member 'ABP_SkillEffect_SeedMine_C::Attacked' has a wrong offset!");

}

