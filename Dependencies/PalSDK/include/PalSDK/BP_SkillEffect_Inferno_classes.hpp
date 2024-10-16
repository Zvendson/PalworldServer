#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_Inferno.BP_SkillEffect_Inferno_C
// 0x0088 (0x0448 - 0x03C0)
class ABP_SkillEffect_Inferno_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_Inferno_C;           // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         BulletNumLimit;                                    // 0x03C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CC[0x4];                                      // 0x03CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        SpawnRadius;                                       // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ExplosionWaitTime;                                 // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ExplosionInterval;                                 // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APalSkillEffectBase*>            SpawnEffects;                                      // 0x03E8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTimerHandle                           ExplosionTimer;                                    // 0x03F8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           IntervalTimer;                                     // 0x0400(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSpawned;                                         // 0x0408(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_409[0x3];                                      // 0x0409(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Index_0;                                           // 0x040C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        Locations;                                         // 0x0410(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        BulletRadius;                                      // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SpawnCenterDistance;                               // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SpawnCenterLocation;                               // 0x0430(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SkillEffect_Inferno(int32 EntryPoint);
	void Explosion();
	void GetEffect(class UClass** NewParam);
	void GetInsertIndex(const struct FVector& Location, int32* Index_0, bool* IsInside);
	void GetRandomPointList(TArray<struct FVector2D>* NewParam);
	void OnExlosion();
	void ReceiveTick(float DeltaSeconds);
	void SpawnBullet();
	void StartInterval();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_Inferno_C">();
	}
	static class ABP_SkillEffect_Inferno_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_Inferno_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_Inferno_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_Inferno_C");
static_assert(sizeof(ABP_SkillEffect_Inferno_C) == 0x000448, "Wrong size on ABP_SkillEffect_Inferno_C");
static_assert(offsetof(ABP_SkillEffect_Inferno_C, UberGraphFrame_BP_SkillEffect_Inferno_C) == 0x0003C0, "Member 'ABP_SkillEffect_Inferno_C::UberGraphFrame_BP_SkillEffect_Inferno_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Inferno_C, BulletNumLimit) == 0x0003C8, "Member 'ABP_SkillEffect_Inferno_C::BulletNumLimit' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Inferno_C, SpawnRadius) == 0x0003D0, "Member 'ABP_SkillEffect_Inferno_C::SpawnRadius' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Inferno_C, ExplosionWaitTime) == 0x0003D8, "Member 'ABP_SkillEffect_Inferno_C::ExplosionWaitTime' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Inferno_C, ExplosionInterval) == 0x0003E0, "Member 'ABP_SkillEffect_Inferno_C::ExplosionInterval' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Inferno_C, SpawnEffects) == 0x0003E8, "Member 'ABP_SkillEffect_Inferno_C::SpawnEffects' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Inferno_C, ExplosionTimer) == 0x0003F8, "Member 'ABP_SkillEffect_Inferno_C::ExplosionTimer' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Inferno_C, IntervalTimer) == 0x000400, "Member 'ABP_SkillEffect_Inferno_C::IntervalTimer' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Inferno_C, IsSpawned) == 0x000408, "Member 'ABP_SkillEffect_Inferno_C::IsSpawned' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Inferno_C, Index_0) == 0x00040C, "Member 'ABP_SkillEffect_Inferno_C::Index_0' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Inferno_C, Locations) == 0x000410, "Member 'ABP_SkillEffect_Inferno_C::Locations' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Inferno_C, BulletRadius) == 0x000420, "Member 'ABP_SkillEffect_Inferno_C::BulletRadius' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Inferno_C, SpawnCenterDistance) == 0x000428, "Member 'ABP_SkillEffect_Inferno_C::SpawnCenterDistance' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Inferno_C, SpawnCenterLocation) == 0x000430, "Member 'ABP_SkillEffect_Inferno_C::SpawnCenterLocation' has a wrong offset!");

}

