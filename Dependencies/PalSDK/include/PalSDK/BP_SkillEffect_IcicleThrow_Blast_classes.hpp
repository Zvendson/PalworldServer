#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_IcicleThrow_Blast.BP_SkillEffect_IcicleThrow_Blast_C
// 0x00A0 (0x0460 - 0x03C0)
class ABP_SkillEffect_IcicleThrow_Blast_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_IcicleThrow_Blast_C; // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Effect_Fragment;                                   // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          AttackTrigger_Height;                              // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       AttackTrigger_Inner;                               // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       AttackTrigger_Outer;                               // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Group_Collision;                                   // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Effect_Blast;                                      // 0x03F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        ExpandSpeed;                                       // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USphereComponent*>               AttachedAttackCollisions;                          // 0x0400(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class AActor*>                         ActorsInTrigger_Inner;                             // 0x0410(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                         ActorsInTrigger_Outer;                             // 0x0420(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                         ActorsInTrigger_Height;                            // 0x0430(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          DrawDebugBlast;                                    // 0x0440(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StartExpandInnerTrigger;                           // 0x0441(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_442[0x6];                                      // 0x0442(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            ExpandSpeedRateCurve;                              // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Timer;                                             // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CollisionLifetime;                                 // 0x0458(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AttachOrEnableAttackCollisionToTarget(class AActor* Target);
	void BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Height_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Height_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Inner_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Inner_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Outer_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Outer_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void CheckAttackTriggers();
	void DestroyAllAttachedAttackCollisions();
	void DisableAttachedAttackCollision(class AActor* Target);
	void DrawDebug();
	void EndBlast();
	void ExecuteUbergraph_BP_SkillEffect_IcicleThrow_Blast(int32 EntryPoint);
	void ExpandAttackTrigger(double DeltaTime);
	void FadeOutEffect(double DeltaSecond);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void UpdateTimer(double DeltaTime);
	void _________________________0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_IcicleThrow_Blast_C">();
	}
	static class ABP_SkillEffect_IcicleThrow_Blast_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_IcicleThrow_Blast_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_IcicleThrow_Blast_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_IcicleThrow_Blast_C");
static_assert(sizeof(ABP_SkillEffect_IcicleThrow_Blast_C) == 0x000460, "Wrong size on ABP_SkillEffect_IcicleThrow_Blast_C");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_Blast_C, UberGraphFrame_BP_SkillEffect_IcicleThrow_Blast_C) == 0x0003C0, "Member 'ABP_SkillEffect_IcicleThrow_Blast_C::UberGraphFrame_BP_SkillEffect_IcicleThrow_Blast_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_Blast_C, Effect_Fragment) == 0x0003C8, "Member 'ABP_SkillEffect_IcicleThrow_Blast_C::Effect_Fragment' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_Blast_C, AttackTrigger_Height) == 0x0003D0, "Member 'ABP_SkillEffect_IcicleThrow_Blast_C::AttackTrigger_Height' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_Blast_C, AttackTrigger_Inner) == 0x0003D8, "Member 'ABP_SkillEffect_IcicleThrow_Blast_C::AttackTrigger_Inner' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_Blast_C, AttackTrigger_Outer) == 0x0003E0, "Member 'ABP_SkillEffect_IcicleThrow_Blast_C::AttackTrigger_Outer' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_Blast_C, Group_Collision) == 0x0003E8, "Member 'ABP_SkillEffect_IcicleThrow_Blast_C::Group_Collision' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_Blast_C, Effect_Blast) == 0x0003F0, "Member 'ABP_SkillEffect_IcicleThrow_Blast_C::Effect_Blast' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_Blast_C, ExpandSpeed) == 0x0003F8, "Member 'ABP_SkillEffect_IcicleThrow_Blast_C::ExpandSpeed' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_Blast_C, AttachedAttackCollisions) == 0x000400, "Member 'ABP_SkillEffect_IcicleThrow_Blast_C::AttachedAttackCollisions' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_Blast_C, ActorsInTrigger_Inner) == 0x000410, "Member 'ABP_SkillEffect_IcicleThrow_Blast_C::ActorsInTrigger_Inner' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_Blast_C, ActorsInTrigger_Outer) == 0x000420, "Member 'ABP_SkillEffect_IcicleThrow_Blast_C::ActorsInTrigger_Outer' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_Blast_C, ActorsInTrigger_Height) == 0x000430, "Member 'ABP_SkillEffect_IcicleThrow_Blast_C::ActorsInTrigger_Height' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_Blast_C, DrawDebugBlast) == 0x000440, "Member 'ABP_SkillEffect_IcicleThrow_Blast_C::DrawDebugBlast' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_Blast_C, StartExpandInnerTrigger) == 0x000441, "Member 'ABP_SkillEffect_IcicleThrow_Blast_C::StartExpandInnerTrigger' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_Blast_C, ExpandSpeedRateCurve) == 0x000448, "Member 'ABP_SkillEffect_IcicleThrow_Blast_C::ExpandSpeedRateCurve' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_Blast_C, Timer) == 0x000450, "Member 'ABP_SkillEffect_IcicleThrow_Blast_C::Timer' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IcicleThrow_Blast_C, CollisionLifetime) == 0x000458, "Member 'ABP_SkillEffect_IcicleThrow_Blast_C::CollisionLifetime' has a wrong offset!");

}

