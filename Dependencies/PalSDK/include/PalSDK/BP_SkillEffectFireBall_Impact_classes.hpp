#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffectFireBall_Impact.BP_SkillEffectFireBall_Impact_C
// 0x0018 (0x03D8 - 0x03C0)
class ABP_SkillEffectFireBall_Impact_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffectFireBall_Impact_C;    // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      ImpactEffect;                                      // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       ImpactDamage;                                      // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void EndCollision();
	void ExecuteUbergraph_BP_SkillEffectFireBall_Impact(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffectFireBall_Impact_C">();
	}
	static class ABP_SkillEffectFireBall_Impact_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffectFireBall_Impact_C>();
	}
};
static_assert(alignof(ABP_SkillEffectFireBall_Impact_C) == 0x000008, "Wrong alignment on ABP_SkillEffectFireBall_Impact_C");
static_assert(sizeof(ABP_SkillEffectFireBall_Impact_C) == 0x0003D8, "Wrong size on ABP_SkillEffectFireBall_Impact_C");
static_assert(offsetof(ABP_SkillEffectFireBall_Impact_C, UberGraphFrame_BP_SkillEffectFireBall_Impact_C) == 0x0003C0, "Member 'ABP_SkillEffectFireBall_Impact_C::UberGraphFrame_BP_SkillEffectFireBall_Impact_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectFireBall_Impact_C, ImpactEffect) == 0x0003C8, "Member 'ABP_SkillEffectFireBall_Impact_C::ImpactEffect' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectFireBall_Impact_C, ImpactDamage) == 0x0003D0, "Member 'ABP_SkillEffectFireBall_Impact_C::ImpactDamage' has a wrong offset!");

}

