#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ActionGeneralAttackFarBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_ActionLightningStrike.BP_ActionLightningStrike_C
// 0x0010 (0x02D0 - 0x02C0)
class UBP_ActionLightningStrike_C final : public UBP_ActionGeneralAttackFarBase_C
{
public:
	uint8                                         Pad_2B3[0x5];                                      // 0x02B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ActionLightningStrike_C;         // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      SkillSign;                                         // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ActionLightningStrike(int32 EntryPoint);
	void OnBeginAction();
	void OnBreakAction();
	void OnEndAction();
	void OnSpawnEffect(class APalSkillEffectBase* Effect_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionLightningStrike_C">();
	}
	static class UBP_ActionLightningStrike_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionLightningStrike_C>();
	}
};
static_assert(alignof(UBP_ActionLightningStrike_C) == 0x000010, "Wrong alignment on UBP_ActionLightningStrike_C");
static_assert(sizeof(UBP_ActionLightningStrike_C) == 0x0002D0, "Wrong size on UBP_ActionLightningStrike_C");
static_assert(offsetof(UBP_ActionLightningStrike_C, UberGraphFrame_BP_ActionLightningStrike_C) == 0x0002B8, "Member 'UBP_ActionLightningStrike_C::UberGraphFrame_BP_ActionLightningStrike_C' has a wrong offset!");
static_assert(offsetof(UBP_ActionLightningStrike_C, SkillSign) == 0x0002C0, "Member 'UBP_ActionLightningStrike_C::SkillSign' has a wrong offset!");

}

