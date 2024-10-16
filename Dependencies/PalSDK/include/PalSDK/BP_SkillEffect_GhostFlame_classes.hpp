#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_GhostFlame.BP_SkillEffect_GhostFlame_C
// 0x0040 (0x0400 - 0x03C0)
class ABP_SkillEffect_GhostFlame_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_GhostFlame_C;        // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         Shoot_volume;                                      // 0x03C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CC[0x4];                                      // 0x03CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Shoot_extent;                                      // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ShootInterval;                                     // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_time;                                         // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Shoot_Count;                                       // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EC[0x4];                                      // 0x03EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ShootDegree;                                       // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ShootHeight;                                       // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SkillEffect_GhostFlame(int32 EntryPoint);
	void Explosion();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_GhostFlame_C">();
	}
	static class ABP_SkillEffect_GhostFlame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_GhostFlame_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_GhostFlame_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_GhostFlame_C");
static_assert(sizeof(ABP_SkillEffect_GhostFlame_C) == 0x000400, "Wrong size on ABP_SkillEffect_GhostFlame_C");
static_assert(offsetof(ABP_SkillEffect_GhostFlame_C, UberGraphFrame_BP_SkillEffect_GhostFlame_C) == 0x0003C0, "Member 'ABP_SkillEffect_GhostFlame_C::UberGraphFrame_BP_SkillEffect_GhostFlame_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GhostFlame_C, Shoot_volume) == 0x0003C8, "Member 'ABP_SkillEffect_GhostFlame_C::Shoot_volume' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GhostFlame_C, Shoot_extent) == 0x0003D0, "Member 'ABP_SkillEffect_GhostFlame_C::Shoot_extent' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GhostFlame_C, ShootInterval) == 0x0003D8, "Member 'ABP_SkillEffect_GhostFlame_C::ShootInterval' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GhostFlame_C, Temp_time) == 0x0003E0, "Member 'ABP_SkillEffect_GhostFlame_C::Temp_time' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GhostFlame_C, Shoot_Count) == 0x0003E8, "Member 'ABP_SkillEffect_GhostFlame_C::Shoot_Count' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GhostFlame_C, ShootDegree) == 0x0003F0, "Member 'ABP_SkillEffect_GhostFlame_C::ShootDegree' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_GhostFlame_C, ShootHeight) == 0x0003F8, "Member 'ABP_SkillEffect_GhostFlame_C::ShootHeight' has a wrong offset!");

}

