#pragma once

#include "Basic.hpp"

#include "BP_ActionSimpleMonoMontage_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_ActionMeleeSkill.BP_ActionMeleeSkill_C
// 0x0000 (0x0170 - 0x0170)
class UBP_ActionMeleeSkill_C final : public UBP_ActionSimpleMonoMontage_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionMeleeSkill_C">();
	}
	static class UBP_ActionMeleeSkill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionMeleeSkill_C>();
	}
};
static_assert(alignof(UBP_ActionMeleeSkill_C) == 0x000010, "Wrong alignment on UBP_ActionMeleeSkill_C");
static_assert(sizeof(UBP_ActionMeleeSkill_C) == 0x000170, "Wrong size on UBP_ActionMeleeSkill_C");

}

