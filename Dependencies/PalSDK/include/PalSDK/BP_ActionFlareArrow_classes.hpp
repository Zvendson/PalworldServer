#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ActionGeneralAttackFarBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_ActionFlareArrow.BP_ActionFlareArrow_C
// 0x0020 (0x02E0 - 0x02C0)
class UBP_ActionFlareArrow_C final : public UBP_ActionGeneralAttackFarBase_C
{
public:
	uint8                                         Pad_2B3[0x5];                                      // 0x02B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ActionFlareArrow_C;              // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          IsShooted;                                         // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_2C1[0x3];                                      // 0x02C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Counter;                                           // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int32                                         BulletNum;                                         // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BulletInterval;                                    // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           BulletTimer;                                       // 0x02D0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BulletHasShooted(class APalSkillEffectBase* Effect_0);
	void ExecuteUbergraph_BP_ActionFlareArrow(int32 EntryPoint);
	void OnEndAction();
	void OnSpawnEffect(class APalSkillEffectBase* Effect_0);
	void SetBulletSpeed(class APalSkillEffectBase** Effect_0);
	void SpawnBullet();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionFlareArrow_C">();
	}
	static class UBP_ActionFlareArrow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionFlareArrow_C>();
	}
};
static_assert(alignof(UBP_ActionFlareArrow_C) == 0x000010, "Wrong alignment on UBP_ActionFlareArrow_C");
static_assert(sizeof(UBP_ActionFlareArrow_C) == 0x0002E0, "Wrong size on UBP_ActionFlareArrow_C");
static_assert(offsetof(UBP_ActionFlareArrow_C, UberGraphFrame_BP_ActionFlareArrow_C) == 0x0002B8, "Member 'UBP_ActionFlareArrow_C::UberGraphFrame_BP_ActionFlareArrow_C' has a wrong offset!");
static_assert(offsetof(UBP_ActionFlareArrow_C, IsShooted) == 0x0002C0, "Member 'UBP_ActionFlareArrow_C::IsShooted' has a wrong offset!");
static_assert(offsetof(UBP_ActionFlareArrow_C, Counter) == 0x0002C4, "Member 'UBP_ActionFlareArrow_C::Counter' has a wrong offset!");
static_assert(offsetof(UBP_ActionFlareArrow_C, BulletNum) == 0x0002C8, "Member 'UBP_ActionFlareArrow_C::BulletNum' has a wrong offset!");
static_assert(offsetof(UBP_ActionFlareArrow_C, BulletInterval) == 0x0002CC, "Member 'UBP_ActionFlareArrow_C::BulletInterval' has a wrong offset!");
static_assert(offsetof(UBP_ActionFlareArrow_C, BulletTimer) == 0x0002D0, "Member 'UBP_ActionFlareArrow_C::BulletTimer' has a wrong offset!");

}

