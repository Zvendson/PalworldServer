#pragma once

#include "Basic.hpp"

#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_Mudshot_Ground.BP_SkillEffect_Mudshot_Ground_C
// 0x0008 (0x03C8 - 0x03C0)
class ABP_SkillEffect_Mudshot_Ground_C final : public ABP_SkillEffectBase_C
{
public:
	class UNiagaraComponent*                      Niagara;                                           // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_Mudshot_Ground_C">();
	}
	static class ABP_SkillEffect_Mudshot_Ground_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_Mudshot_Ground_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_Mudshot_Ground_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_Mudshot_Ground_C");
static_assert(sizeof(ABP_SkillEffect_Mudshot_Ground_C) == 0x0003C8, "Wrong size on ABP_SkillEffect_Mudshot_Ground_C");
static_assert(offsetof(ABP_SkillEffect_Mudshot_Ground_C, Niagara) == 0x0003C0, "Member 'ABP_SkillEffect_Mudshot_Ground_C::Niagara' has a wrong offset!");

}

