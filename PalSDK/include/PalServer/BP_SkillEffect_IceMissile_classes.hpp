#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_SkillEffect_IceMissile.BP_SkillEffect_IceMissile_C
// 0x0068 (0x0428 - 0x03C0)
class ABP_SkillEffect_IceMissile_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_IceMissile_C;        // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         ShootIceNum;                                       // 0x03C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CC[0x4];                                      // 0x03CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ShootDegree;                                       // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ShootInterval;                                     // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsShootStarted;                                    // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E1[0x7];                                      // 0x03E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Timer;                                             // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Count;                                             // 0x03F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F4[0x4];                                      // 0x03F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 Target;                                            // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        ShootSpeed;                                        // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_SkillEffect_IceMissile_Bullet_C*> SpawnedBullet;                                     // 0x0408(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnSpawnedChildEffect;                              // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_BP_SkillEffect_IceMissile(int32 EntryPoint);
	void OnInitialize();
	void OnSpawnedChildEffect__DelegateSignature();
	void ReceiveTick(float DeltaSeconds);
	void ShootProcess(double DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_IceMissile_C">();
	}
	static class ABP_SkillEffect_IceMissile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_IceMissile_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_IceMissile_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_IceMissile_C");
static_assert(sizeof(ABP_SkillEffect_IceMissile_C) == 0x000428, "Wrong size on ABP_SkillEffect_IceMissile_C");
static_assert(offsetof(ABP_SkillEffect_IceMissile_C, UberGraphFrame_BP_SkillEffect_IceMissile_C) == 0x0003C0, "Member 'ABP_SkillEffect_IceMissile_C::UberGraphFrame_BP_SkillEffect_IceMissile_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IceMissile_C, ShootIceNum) == 0x0003C8, "Member 'ABP_SkillEffect_IceMissile_C::ShootIceNum' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IceMissile_C, ShootDegree) == 0x0003D0, "Member 'ABP_SkillEffect_IceMissile_C::ShootDegree' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IceMissile_C, ShootInterval) == 0x0003D8, "Member 'ABP_SkillEffect_IceMissile_C::ShootInterval' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IceMissile_C, IsShootStarted) == 0x0003E0, "Member 'ABP_SkillEffect_IceMissile_C::IsShootStarted' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IceMissile_C, Timer) == 0x0003E8, "Member 'ABP_SkillEffect_IceMissile_C::Timer' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IceMissile_C, Count) == 0x0003F0, "Member 'ABP_SkillEffect_IceMissile_C::Count' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IceMissile_C, Target) == 0x0003F8, "Member 'ABP_SkillEffect_IceMissile_C::Target' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IceMissile_C, ShootSpeed) == 0x000400, "Member 'ABP_SkillEffect_IceMissile_C::ShootSpeed' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IceMissile_C, SpawnedBullet) == 0x000408, "Member 'ABP_SkillEffect_IceMissile_C::SpawnedBullet' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_IceMissile_C, OnSpawnedChildEffect) == 0x000418, "Member 'ABP_SkillEffect_IceMissile_C::OnSpawnedChildEffect' has a wrong offset!");

}

