#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_SkillEffect_ThrowRockBullet.BP_SkillEffect_ThrowRockBullet_C
// 0x0078 (0x03A8 - 0x0330)
class ABP_SkillEffect_ThrowRockBullet_C final : public APalSkillEffectBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Niagara;                                           // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        Speed;                                             // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AddImplse;                                         // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GroundEffect;                                      // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             NewEventDispatcher_0;                              // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UClass*                                 PredictedTargetClass;                              // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 PredictedTarget;                                   // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         PredictPowerRate;                                  // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NearTarget;                                        // 0x038C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38D[0x3];                                      // 0x038D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Out_Launch_Velocity;                               // 0x0390(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddShotImpulse();
	void BndEvt__BP_SkillEffect_ThrowRockBullet_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void CancelShoot();
	void Drop();
	void ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet(int32 EntryPoint);
	void NewEventDispatcher_0__DelegateSignature();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void SetPredictedTarget();
	void Shoot(const struct FVector& TargetLocation);
	void ShootBullet(const struct FVector& TargetLocation);
	void SpawnEffect();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_ThrowRockBullet_C">();
	}
	static class ABP_SkillEffect_ThrowRockBullet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_ThrowRockBullet_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_ThrowRockBullet_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_ThrowRockBullet_C");
static_assert(sizeof(ABP_SkillEffect_ThrowRockBullet_C) == 0x0003A8, "Wrong size on ABP_SkillEffect_ThrowRockBullet_C");
static_assert(offsetof(ABP_SkillEffect_ThrowRockBullet_C, UberGraphFrame) == 0x000330, "Member 'ABP_SkillEffect_ThrowRockBullet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_ThrowRockBullet_C, Niagara) == 0x000338, "Member 'ABP_SkillEffect_ThrowRockBullet_C::Niagara' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_ThrowRockBullet_C, StaticMesh) == 0x000340, "Member 'ABP_SkillEffect_ThrowRockBullet_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_ThrowRockBullet_C, Sphere) == 0x000348, "Member 'ABP_SkillEffect_ThrowRockBullet_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_ThrowRockBullet_C, Speed) == 0x000350, "Member 'ABP_SkillEffect_ThrowRockBullet_C::Speed' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_ThrowRockBullet_C, AddImplse) == 0x000358, "Member 'ABP_SkillEffect_ThrowRockBullet_C::AddImplse' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_ThrowRockBullet_C, GroundEffect) == 0x000360, "Member 'ABP_SkillEffect_ThrowRockBullet_C::GroundEffect' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_ThrowRockBullet_C, NewEventDispatcher_0) == 0x000368, "Member 'ABP_SkillEffect_ThrowRockBullet_C::NewEventDispatcher_0' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_ThrowRockBullet_C, PredictedTargetClass) == 0x000378, "Member 'ABP_SkillEffect_ThrowRockBullet_C::PredictedTargetClass' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_ThrowRockBullet_C, PredictedTarget) == 0x000380, "Member 'ABP_SkillEffect_ThrowRockBullet_C::PredictedTarget' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_ThrowRockBullet_C, PredictPowerRate) == 0x000388, "Member 'ABP_SkillEffect_ThrowRockBullet_C::PredictPowerRate' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_ThrowRockBullet_C, NearTarget) == 0x00038C, "Member 'ABP_SkillEffect_ThrowRockBullet_C::NearTarget' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_ThrowRockBullet_C, Out_Launch_Velocity) == 0x000390, "Member 'ABP_SkillEffect_ThrowRockBullet_C::Out_Launch_Velocity' has a wrong offset!");

}

