#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ActionGeneralAttackFarBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_ActionHydroPump.BP_ActionHydroPump_C
// 0x0010 (0x02D0 - 0x02C0)
class UBP_ActionHydroPump_C final : public UBP_ActionGeneralAttackFarBase_C
{
public:
	uint8                                         Pad_2B3[0x5];                                      // 0x02B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ActionHydroPump_C;               // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraSystem*                         EndEffect;                                         // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         EndEffectTimeOffset;                               // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ActionHydroPump(int32 EntryPoint);
	void OnSpawnEffect(class APalSkillEffectBase* Effect_0);
	void _________________________0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionHydroPump_C">();
	}
	static class UBP_ActionHydroPump_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionHydroPump_C>();
	}
};
static_assert(alignof(UBP_ActionHydroPump_C) == 0x000010, "Wrong alignment on UBP_ActionHydroPump_C");
static_assert(sizeof(UBP_ActionHydroPump_C) == 0x0002D0, "Wrong size on UBP_ActionHydroPump_C");
static_assert(offsetof(UBP_ActionHydroPump_C, UberGraphFrame_BP_ActionHydroPump_C) == 0x0002B8, "Member 'UBP_ActionHydroPump_C::UberGraphFrame_BP_ActionHydroPump_C' has a wrong offset!");
static_assert(offsetof(UBP_ActionHydroPump_C, EndEffect) == 0x0002C0, "Member 'UBP_ActionHydroPump_C::EndEffect' has a wrong offset!");
static_assert(offsetof(UBP_ActionHydroPump_C, EndEffectTimeOffset) == 0x0002C8, "Member 'UBP_ActionHydroPump_C::EndEffectTimeOffset' has a wrong offset!");

}

