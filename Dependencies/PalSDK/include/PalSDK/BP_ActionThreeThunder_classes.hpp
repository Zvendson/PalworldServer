#pragma once

#include "Basic.hpp"

#include "BP_ActionGeneralAttackFarBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_ActionThreeThunder.BP_ActionThreeThunder_C
// 0x0000 (0x02C0 - 0x02C0)
class UBP_ActionThreeThunder_C final : public UBP_ActionGeneralAttackFarBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionThreeThunder_C">();
	}
	static class UBP_ActionThreeThunder_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionThreeThunder_C>();
	}
};
static_assert(alignof(UBP_ActionThreeThunder_C) == 0x000010, "Wrong alignment on UBP_ActionThreeThunder_C");
static_assert(sizeof(UBP_ActionThreeThunder_C) == 0x0002C0, "Wrong size on UBP_ActionThreeThunder_C");

}

