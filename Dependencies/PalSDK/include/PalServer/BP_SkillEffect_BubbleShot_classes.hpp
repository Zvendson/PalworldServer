#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_SkillEffect_BubbleShot.BP_SkillEffect_BubbleShot_C
// 0x0050 (0x0410 - 0x03C0)
class ABP_SkillEffect_BubbleShot_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_BubbleShot_C;        // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Collision;                                         // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      BubbleShot;                                        // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       SpawnPos;                                          // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         Shot_volume;                                       // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EC[0x4];                                      // 0x03EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Shot_extent;                                       // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ShotSpan;                                          // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_time;                                         // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Shot_Count;                                        // 0x0408(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SkillEffect_BubbleShot(int32 EntryPoint);
	void Explosion();
	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_BubbleShot_C">();
	}
	static class ABP_SkillEffect_BubbleShot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_BubbleShot_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_BubbleShot_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_BubbleShot_C");
static_assert(sizeof(ABP_SkillEffect_BubbleShot_C) == 0x000410, "Wrong size on ABP_SkillEffect_BubbleShot_C");
static_assert(offsetof(ABP_SkillEffect_BubbleShot_C, UberGraphFrame_BP_SkillEffect_BubbleShot_C) == 0x0003C0, "Member 'ABP_SkillEffect_BubbleShot_C::UberGraphFrame_BP_SkillEffect_BubbleShot_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_BubbleShot_C, Collision) == 0x0003C8, "Member 'ABP_SkillEffect_BubbleShot_C::Collision' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_BubbleShot_C, BubbleShot) == 0x0003D0, "Member 'ABP_SkillEffect_BubbleShot_C::BubbleShot' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_BubbleShot_C, SpawnPos) == 0x0003D8, "Member 'ABP_SkillEffect_BubbleShot_C::SpawnPos' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_BubbleShot_C, ProjectileMovement) == 0x0003E0, "Member 'ABP_SkillEffect_BubbleShot_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_BubbleShot_C, Shot_volume) == 0x0003E8, "Member 'ABP_SkillEffect_BubbleShot_C::Shot_volume' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_BubbleShot_C, Shot_extent) == 0x0003F0, "Member 'ABP_SkillEffect_BubbleShot_C::Shot_extent' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_BubbleShot_C, ShotSpan) == 0x0003F8, "Member 'ABP_SkillEffect_BubbleShot_C::ShotSpan' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_BubbleShot_C, Temp_time) == 0x000400, "Member 'ABP_SkillEffect_BubbleShot_C::Temp_time' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_BubbleShot_C, Shot_Count) == 0x000408, "Member 'ABP_SkillEffect_BubbleShot_C::Shot_Count' has a wrong offset!");

}

