#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_SkillEffect_SeedMine_Seed.BP_SkillEffect_SeedMine_Seed_C
// 0x0078 (0x0438 - 0x03C0)
class ABP_SkillEffect_SeedMine_Seed_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_SeedMine_Seed_C;     // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NS_CommonSkill_SeedMine_BAN;                       // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_SeedMine_Seed;                                  // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       AtackFeeld;                                        // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       GetLengBullet;                                     // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       GetLengPal;                                        // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Coll;                                              // 0x03F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x03F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        MineSpeed;                                         // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MinSpeed;                                          // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RandSpeed;                                         // 0x0410(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_414[0x4];                                      // 0x0414(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        HitSec;                                            // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Gravity;                                           // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HitGround;                                         // 0x0428(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Hit;                                            // 0x0429(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMine;                                            // 0x042A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Attacked;                                          // 0x042B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LimitTime;                                         // 0x042C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasExploded;                                       // 0x0430(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_SkillEffect_SeedMine_Seed_collision_0_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_SkillEffect_SeedMine_Seed_GetLengBullet_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_SkillEffect_SeedMine_Seed_HitLeng_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_SkillEffect_SeedMine_Seed_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_BP_SkillEffect_SeedMine_Seed(int32 EntryPoint);
	void OnLimitTime();
	void ReceiveTick(float DeltaSeconds);
	void SetRandomValueIntoNiagaraVariable(class UNiagaraComponent* NiagaraComp);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_SeedMine_Seed_C">();
	}
	static class ABP_SkillEffect_SeedMine_Seed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_SeedMine_Seed_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_SeedMine_Seed_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_SeedMine_Seed_C");
static_assert(sizeof(ABP_SkillEffect_SeedMine_Seed_C) == 0x000438, "Wrong size on ABP_SkillEffect_SeedMine_Seed_C");
static_assert(offsetof(ABP_SkillEffect_SeedMine_Seed_C, UberGraphFrame_BP_SkillEffect_SeedMine_Seed_C) == 0x0003C0, "Member 'ABP_SkillEffect_SeedMine_Seed_C::UberGraphFrame_BP_SkillEffect_SeedMine_Seed_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_Seed_C, NS_CommonSkill_SeedMine_BAN) == 0x0003C8, "Member 'ABP_SkillEffect_SeedMine_Seed_C::NS_CommonSkill_SeedMine_BAN' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_Seed_C, NS_SeedMine_Seed) == 0x0003D0, "Member 'ABP_SkillEffect_SeedMine_Seed_C::NS_SeedMine_Seed' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_Seed_C, AtackFeeld) == 0x0003D8, "Member 'ABP_SkillEffect_SeedMine_Seed_C::AtackFeeld' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_Seed_C, GetLengBullet) == 0x0003E0, "Member 'ABP_SkillEffect_SeedMine_Seed_C::GetLengBullet' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_Seed_C, GetLengPal) == 0x0003E8, "Member 'ABP_SkillEffect_SeedMine_Seed_C::GetLengPal' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_Seed_C, Coll) == 0x0003F0, "Member 'ABP_SkillEffect_SeedMine_Seed_C::Coll' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_Seed_C, ProjectileMovement) == 0x0003F8, "Member 'ABP_SkillEffect_SeedMine_Seed_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_Seed_C, MineSpeed) == 0x000400, "Member 'ABP_SkillEffect_SeedMine_Seed_C::MineSpeed' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_Seed_C, MinSpeed) == 0x000408, "Member 'ABP_SkillEffect_SeedMine_Seed_C::MinSpeed' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_Seed_C, RandSpeed) == 0x000410, "Member 'ABP_SkillEffect_SeedMine_Seed_C::RandSpeed' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_Seed_C, HitSec) == 0x000418, "Member 'ABP_SkillEffect_SeedMine_Seed_C::HitSec' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_Seed_C, Gravity) == 0x000420, "Member 'ABP_SkillEffect_SeedMine_Seed_C::Gravity' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_Seed_C, HitGround) == 0x000428, "Member 'ABP_SkillEffect_SeedMine_Seed_C::HitGround' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_Seed_C, Is_Hit) == 0x000429, "Member 'ABP_SkillEffect_SeedMine_Seed_C::Is_Hit' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_Seed_C, IsMine) == 0x00042A, "Member 'ABP_SkillEffect_SeedMine_Seed_C::IsMine' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_Seed_C, Attacked) == 0x00042B, "Member 'ABP_SkillEffect_SeedMine_Seed_C::Attacked' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_Seed_C, LimitTime) == 0x00042C, "Member 'ABP_SkillEffect_SeedMine_Seed_C::LimitTime' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_SeedMine_Seed_C, HasExploded) == 0x000430, "Member 'ABP_SkillEffect_SeedMine_Seed_C::HasExploded' has a wrong offset!");

}

