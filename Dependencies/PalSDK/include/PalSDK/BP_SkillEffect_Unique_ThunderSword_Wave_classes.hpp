#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_Unique_ThunderSword_Wave.BP_SkillEffect_Unique_ThunderSword_Wave_C
// 0x0028 (0x03E8 - 0x03C0)
class ABP_SkillEffect_Unique_ThunderSword_Wave_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_Unique_ThunderSword_Wave_C; // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NiagaraEffect;                                     // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule;                                           // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         CollisionDelay;                                    // 0x03E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DelayEnableCollision();
	void ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave(int32 EntryPoint);
	void FadeOutEffect(double DeltaSecond);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetDirection(const struct FVector& NewDirct, int32 DirctIndex, int32 WaveCount, double InitialAngle);
	void SetLifeTime(double Time);
	void WaveEnd();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_Unique_ThunderSword_Wave_C">();
	}
	static class ABP_SkillEffect_Unique_ThunderSword_Wave_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_Unique_ThunderSword_Wave_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_Unique_ThunderSword_Wave_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_Unique_ThunderSword_Wave_C");
static_assert(sizeof(ABP_SkillEffect_Unique_ThunderSword_Wave_C) == 0x0003E8, "Wrong size on ABP_SkillEffect_Unique_ThunderSword_Wave_C");
static_assert(offsetof(ABP_SkillEffect_Unique_ThunderSword_Wave_C, UberGraphFrame_BP_SkillEffect_Unique_ThunderSword_Wave_C) == 0x0003C0, "Member 'ABP_SkillEffect_Unique_ThunderSword_Wave_C::UberGraphFrame_BP_SkillEffect_Unique_ThunderSword_Wave_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_ThunderSword_Wave_C, NiagaraEffect) == 0x0003C8, "Member 'ABP_SkillEffect_Unique_ThunderSword_Wave_C::NiagaraEffect' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_ThunderSword_Wave_C, Capsule) == 0x0003D0, "Member 'ABP_SkillEffect_Unique_ThunderSword_Wave_C::Capsule' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_ThunderSword_Wave_C, ProjectileMovement) == 0x0003D8, "Member 'ABP_SkillEffect_Unique_ThunderSword_Wave_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_ThunderSword_Wave_C, CollisionDelay) == 0x0003E0, "Member 'ABP_SkillEffect_Unique_ThunderSword_Wave_C::CollisionDelay' has a wrong offset!");

}

