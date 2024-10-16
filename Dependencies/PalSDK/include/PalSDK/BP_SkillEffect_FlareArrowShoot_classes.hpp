#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_FlareArrowShoot.BP_SkillEffect_FlareArrowShoot_C
// 0x0010 (0x03D0 - 0x03C0)
class ABP_SkillEffect_FlareArrowShoot_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_FlareArrowShoot_C;   // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               PS_FireBlastShoot;                                 // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SkillEffect_FlareArrowShoot(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_FlareArrowShoot_C">();
	}
	static class ABP_SkillEffect_FlareArrowShoot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_FlareArrowShoot_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_FlareArrowShoot_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_FlareArrowShoot_C");
static_assert(sizeof(ABP_SkillEffect_FlareArrowShoot_C) == 0x0003D0, "Wrong size on ABP_SkillEffect_FlareArrowShoot_C");
static_assert(offsetof(ABP_SkillEffect_FlareArrowShoot_C, UberGraphFrame_BP_SkillEffect_FlareArrowShoot_C) == 0x0003C0, "Member 'ABP_SkillEffect_FlareArrowShoot_C::UberGraphFrame_BP_SkillEffect_FlareArrowShoot_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FlareArrowShoot_C, PS_FireBlastShoot) == 0x0003C8, "Member 'ABP_SkillEffect_FlareArrowShoot_C::PS_FireBlastShoot' has a wrong offset!");

}

