#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_SkillEffect_Unique_Alpaca_Loop.BP_SkillEffect_Unique_Alpaca_Loop_C
// 0x0010 (0x03D0 - 0x03C0)
class ABP_SkillEffect_Unique_Alpaca_Loop_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_Unique_Alpaca_Loop_C; // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NiagaraEffect;                                     // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SkillEffect_Unique_Alpaca_Loop(int32 EntryPoint);
	void FadeOutEffect(double DeltaSecond);
	void OnEndAction();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_Unique_Alpaca_Loop_C">();
	}
	static class ABP_SkillEffect_Unique_Alpaca_Loop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_Unique_Alpaca_Loop_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_Unique_Alpaca_Loop_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_Unique_Alpaca_Loop_C");
static_assert(sizeof(ABP_SkillEffect_Unique_Alpaca_Loop_C) == 0x0003D0, "Wrong size on ABP_SkillEffect_Unique_Alpaca_Loop_C");
static_assert(offsetof(ABP_SkillEffect_Unique_Alpaca_Loop_C, UberGraphFrame_BP_SkillEffect_Unique_Alpaca_Loop_C) == 0x0003C0, "Member 'ABP_SkillEffect_Unique_Alpaca_Loop_C::UberGraphFrame_BP_SkillEffect_Unique_Alpaca_Loop_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_Alpaca_Loop_C, NiagaraEffect) == 0x0003C8, "Member 'ABP_SkillEffect_Unique_Alpaca_Loop_C::NiagaraEffect' has a wrong offset!");

}

