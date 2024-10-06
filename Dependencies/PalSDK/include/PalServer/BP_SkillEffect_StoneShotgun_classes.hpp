#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_SkillEffect_StoneShotgun.BP_SkillEffect_StoneShotgun_C
// 0x0020 (0x03E0 - 0x03C0)
class ABP_SkillEffect_StoneShotgun_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_StoneShotgun_C;      // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        BaseAngle;                                         // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BlurAngle;                                         // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WidthShotNum;                                      // 0x03D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HightShotNum;                                      // 0x03DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SkillEffect_StoneShotgun(int32 EntryPoint);
	void GetBulletTransform(TArray<struct FTransform>* Result);
	void OnAttackDelegate______________0(class AActor* Defencer, const struct FPalDamageInfo& DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
	void OnInitialize();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_StoneShotgun_C">();
	}
	static class ABP_SkillEffect_StoneShotgun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_StoneShotgun_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_StoneShotgun_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_StoneShotgun_C");
static_assert(sizeof(ABP_SkillEffect_StoneShotgun_C) == 0x0003E0, "Wrong size on ABP_SkillEffect_StoneShotgun_C");
static_assert(offsetof(ABP_SkillEffect_StoneShotgun_C, UberGraphFrame_BP_SkillEffect_StoneShotgun_C) == 0x0003C0, "Member 'ABP_SkillEffect_StoneShotgun_C::UberGraphFrame_BP_SkillEffect_StoneShotgun_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_StoneShotgun_C, BaseAngle) == 0x0003C8, "Member 'ABP_SkillEffect_StoneShotgun_C::BaseAngle' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_StoneShotgun_C, BlurAngle) == 0x0003D0, "Member 'ABP_SkillEffect_StoneShotgun_C::BlurAngle' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_StoneShotgun_C, WidthShotNum) == 0x0003D8, "Member 'ABP_SkillEffect_StoneShotgun_C::WidthShotNum' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_StoneShotgun_C, HightShotNum) == 0x0003DC, "Member 'ABP_SkillEffect_StoneShotgun_C::HightShotNum' has a wrong offset!");

}

