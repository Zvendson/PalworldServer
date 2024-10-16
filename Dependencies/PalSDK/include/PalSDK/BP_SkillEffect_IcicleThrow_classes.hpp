#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_IcicleThrow.BP_SkillEffect_IcicleThrow_C
// 0x00C8 (0x0488 - 0x03C0)
class ABP_SkillEffect_IcicleThrow_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_IcicleThrow_C;       // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Effect_Charge;                                     // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Effect_MainBullet;                                 // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      AttackCollision;                                   // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       ChildSpawnPosition;                                // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        AttachEffectScale;                                 // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ShotStartTime;                                     // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ExplosionTime;                                     // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Explosion_volume;                                  // 0x0408(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Explosion_Num;                                     // 0x040C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Explosion_Rot_Y;                                   // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BulletExtent;                                      // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                BulletPos;                                         // 0x0420(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               BulletRot;                                         // 0x0438(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsHit;                                             // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HitGround;                                         // 0x0451(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OnRide;                                            // 0x0452(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EndWait;                                           // 0x0453(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_454[0x4];                                      // 0x0454(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      AttachedEffect;                                    // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        Rate_of_ImpactPoint;                               // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RandSeedNum;                                       // 0x0468(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCharging;                                        // 0x046C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46D[0x3];                                      // 0x046D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        MainBulletSize;                                    // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentTime;                                       // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MainBulletSpeed;                                   // 0x0480(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_SkillEffect_IcicleThrow_MovementSphereRoot_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_BP_SkillEffect_IcicleThrow(int32 EntryPoint);
	void ExplosionMainBullet();
	void FadeOutEffect(double DeltaSecond);
	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveTick(float DeltaSeconds);
	void ShootMainBullet();
	void UpdateMainBulletRotation();
	void UpdateMainBulletScale();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_IcicleThrow_C">();
	}
	static class ABP_SkillEffect_IcicleThrow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_IcicleThrow_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_IcicleThrow_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_IcicleThrow_C");
static_assert(sizeof(ABP_SkillEffect_IcicleThrow_C) == 0x000488, "Wrong size on ABP_SkillEffect_IcicleThrow_C");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_C, UberGraphFrame_BP_SkillEffect_IcicleThrow_C) == 0x0003C0, "Member 'ABP_SkillEffect_IcicleThrow_C::UberGraphFrame_BP_SkillEffect_IcicleThrow_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_C, Effect_Charge) == 0x0003C8, "Member 'ABP_SkillEffect_IcicleThrow_C::Effect_Charge' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_C, Effect_MainBullet) == 0x0003D0, "Member 'ABP_SkillEffect_IcicleThrow_C::Effect_MainBullet' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_C, AttackCollision) == 0x0003D8, "Member 'ABP_SkillEffect_IcicleThrow_C::AttackCollision' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_C, ChildSpawnPosition) == 0x0003E0, "Member 'ABP_SkillEffect_IcicleThrow_C::ChildSpawnPosition' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_C, ProjectileMovement) == 0x0003E8, "Member 'ABP_SkillEffect_IcicleThrow_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_C, AttachEffectScale) == 0x0003F0, "Member 'ABP_SkillEffect_IcicleThrow_C::AttachEffectScale' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_C, ShotStartTime) == 0x0003F8, "Member 'ABP_SkillEffect_IcicleThrow_C::ShotStartTime' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_C, ExplosionTime) == 0x000400, "Member 'ABP_SkillEffect_IcicleThrow_C::ExplosionTime' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_C, Explosion_volume) == 0x000408, "Member 'ABP_SkillEffect_IcicleThrow_C::Explosion_volume' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_C, Explosion_Num) == 0x00040C, "Member 'ABP_SkillEffect_IcicleThrow_C::Explosion_Num' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_C, Explosion_Rot_Y) == 0x000410, "Member 'ABP_SkillEffect_IcicleThrow_C::Explosion_Rot_Y' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_C, BulletExtent) == 0x000418, "Member 'ABP_SkillEffect_IcicleThrow_C::BulletExtent' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_C, BulletPos) == 0x000420, "Member 'ABP_SkillEffect_IcicleThrow_C::BulletPos' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_C, BulletRot) == 0x000438, "Member 'ABP_SkillEffect_IcicleThrow_C::BulletRot' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_C, IsHit) == 0x000450, "Member 'ABP_SkillEffect_IcicleThrow_C::IsHit' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_C, HitGround) == 0x000451, "Member 'ABP_SkillEffect_IcicleThrow_C::HitGround' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_C, OnRide) == 0x000452, "Member 'ABP_SkillEffect_IcicleThrow_C::OnRide' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_C, EndWait) == 0x000453, "Member 'ABP_SkillEffect_IcicleThrow_C::EndWait' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_C, AttachedEffect) == 0x000458, "Member 'ABP_SkillEffect_IcicleThrow_C::AttachedEffect' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_C, Rate_of_ImpactPoint) == 0x000460, "Member 'ABP_SkillEffect_IcicleThrow_C::Rate_of_ImpactPoint' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_C, RandSeedNum) == 0x000468, "Member 'ABP_SkillEffect_IcicleThrow_C::RandSeedNum' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_C, IsCharging) == 0x00046C, "Member 'ABP_SkillEffect_IcicleThrow_C::IsCharging' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_C, MainBulletSize) == 0x000470, "Member 'ABP_SkillEffect_IcicleThrow_C::MainBulletSize' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_C, CurrentTime) == 0x000478, "Member 'ABP_SkillEffect_IcicleThrow_C::CurrentTime' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_C, MainBulletSpeed) == 0x000480, "Member 'ABP_SkillEffect_IcicleThrow_C::MainBulletSpeed' has a wrong offset!");

}

