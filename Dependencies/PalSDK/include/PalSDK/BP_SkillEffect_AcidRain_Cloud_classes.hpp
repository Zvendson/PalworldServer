#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_AcidRain_Cloud.BP_SkillEffect_AcidRain_Cloud_C
// 0x00C8 (0x0488 - 0x03C0)
class ABP_SkillEffect_AcidRain_Cloud_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_AcidRain_Cloud_C;    // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalSkillDamageReactionComponent*       PalSkillDamageReaction;                            // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          HitBoxCollision;                                   // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CloudEffect;                                       // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetOffset;                                      // 0x03E0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FollowSpeed;                                       // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ShotExtent;                                        // 0x0400(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ShotInterval;                                      // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TempTime;                                          // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ShotStartTime;                                     // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PreLocation;                                       // 0x0430(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInitialized;                                     // 0x0448(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_449[0x7];                                      // 0x0449(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        FindTargetDistance;                                // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Hp;                                                // 0x0458(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45C[0x4];                                      // 0x045C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                TargetLocation;                                    // 0x0460(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SkillEffec_AcidRain_Bullet_C*       Bullet;                                            // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         SpawnRainBulletTimeOffset;                         // 0x0480(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EndSkill();
	void ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud(int32 EntryPoint);
	void FadeOutEffect(double DeltaSecond);
	void FindNearestTarget(bool* IsExist);
	void GetTargetLocation(struct FVector* Location);
	void OnDamageSkill(const struct FPalDamageInfo& DamageInfo);
	void OnInitialize();
	void ReceiveTick(float DeltaSeconds);
	void SpawnRainBullet();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_AcidRain_Cloud_C">();
	}
	static class ABP_SkillEffect_AcidRain_Cloud_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_AcidRain_Cloud_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_AcidRain_Cloud_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_AcidRain_Cloud_C");
static_assert(sizeof(ABP_SkillEffect_AcidRain_Cloud_C) == 0x000488, "Wrong size on ABP_SkillEffect_AcidRain_Cloud_C");
static_assert(offsetof(ABP_SkillEffect_AcidRain_Cloud_C, UberGraphFrame_BP_SkillEffect_AcidRain_Cloud_C) == 0x0003C0, "Member 'ABP_SkillEffect_AcidRain_Cloud_C::UberGraphFrame_BP_SkillEffect_AcidRain_Cloud_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_AcidRain_Cloud_C, PalSkillDamageReaction) == 0x0003C8, "Member 'ABP_SkillEffect_AcidRain_Cloud_C::PalSkillDamageReaction' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_AcidRain_Cloud_C, HitBoxCollision) == 0x0003D0, "Member 'ABP_SkillEffect_AcidRain_Cloud_C::HitBoxCollision' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_AcidRain_Cloud_C, CloudEffect) == 0x0003D8, "Member 'ABP_SkillEffect_AcidRain_Cloud_C::CloudEffect' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_AcidRain_Cloud_C, TargetOffset) == 0x0003E0, "Member 'ABP_SkillEffect_AcidRain_Cloud_C::TargetOffset' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_AcidRain_Cloud_C, FollowSpeed) == 0x0003F8, "Member 'ABP_SkillEffect_AcidRain_Cloud_C::FollowSpeed' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_AcidRain_Cloud_C, ShotExtent) == 0x000400, "Member 'ABP_SkillEffect_AcidRain_Cloud_C::ShotExtent' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_AcidRain_Cloud_C, ShotInterval) == 0x000418, "Member 'ABP_SkillEffect_AcidRain_Cloud_C::ShotInterval' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_AcidRain_Cloud_C, TempTime) == 0x000420, "Member 'ABP_SkillEffect_AcidRain_Cloud_C::TempTime' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_AcidRain_Cloud_C, ShotStartTime) == 0x000428, "Member 'ABP_SkillEffect_AcidRain_Cloud_C::ShotStartTime' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_AcidRain_Cloud_C, PreLocation) == 0x000430, "Member 'ABP_SkillEffect_AcidRain_Cloud_C::PreLocation' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_AcidRain_Cloud_C, IsInitialized) == 0x000448, "Member 'ABP_SkillEffect_AcidRain_Cloud_C::IsInitialized' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_AcidRain_Cloud_C, FindTargetDistance) == 0x000450, "Member 'ABP_SkillEffect_AcidRain_Cloud_C::FindTargetDistance' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_AcidRain_Cloud_C, Hp) == 0x000458, "Member 'ABP_SkillEffect_AcidRain_Cloud_C::Hp' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_AcidRain_Cloud_C, TargetLocation) == 0x000460, "Member 'ABP_SkillEffect_AcidRain_Cloud_C::TargetLocation' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_AcidRain_Cloud_C, Bullet) == 0x000478, "Member 'ABP_SkillEffect_AcidRain_Cloud_C::Bullet' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_AcidRain_Cloud_C, SpawnRainBulletTimeOffset) == 0x000480, "Member 'ABP_SkillEffect_AcidRain_Cloud_C::SpawnRainBulletTimeOffset' has a wrong offset!");

}

