#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_LightningStrike.BP_SkillEffect_LightningStrike_C
// 0x0020 (0x03E0 - 0x03C0)
class ABP_SkillEffect_LightningStrike_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_LightningStrike_C;   // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                      Capsule;                                           // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_LightningStrike;                                // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        StrikeDelay;                                       // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DisableCollision();
	void ExecuteUbergraph_BP_SkillEffect_LightningStrike(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_LightningStrike_C">();
	}
	static class ABP_SkillEffect_LightningStrike_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_LightningStrike_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_LightningStrike_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_LightningStrike_C");
static_assert(sizeof(ABP_SkillEffect_LightningStrike_C) == 0x0003E0, "Wrong size on ABP_SkillEffect_LightningStrike_C");
static_assert(offsetof(ABP_SkillEffect_LightningStrike_C, UberGraphFrame_BP_SkillEffect_LightningStrike_C) == 0x0003C0, "Member 'ABP_SkillEffect_LightningStrike_C::UberGraphFrame_BP_SkillEffect_LightningStrike_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_LightningStrike_C, Capsule) == 0x0003C8, "Member 'ABP_SkillEffect_LightningStrike_C::Capsule' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_LightningStrike_C, NS_LightningStrike) == 0x0003D0, "Member 'ABP_SkillEffect_LightningStrike_C::NS_LightningStrike' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_LightningStrike_C, StrikeDelay) == 0x0003D8, "Member 'ABP_SkillEffect_LightningStrike_C::StrikeDelay' has a wrong offset!");

}

