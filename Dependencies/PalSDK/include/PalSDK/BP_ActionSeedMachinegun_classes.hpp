#pragma once

#include "Basic.hpp"

#include "BP_ActionGeneralAttackFarBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_ActionSeedMachinegun.BP_ActionSeedMachinegun_C
// 0x0000 (0x02C0 - 0x02C0)
class UBP_ActionSeedMachinegun_C final : public UBP_ActionGeneralAttackFarBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionSeedMachinegun_C">();
	}
	static class UBP_ActionSeedMachinegun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionSeedMachinegun_C>();
	}
};
static_assert(alignof(UBP_ActionSeedMachinegun_C) == 0x000010, "Wrong alignment on UBP_ActionSeedMachinegun_C");
static_assert(sizeof(UBP_ActionSeedMachinegun_C) == 0x0002C0, "Wrong size on UBP_ActionSeedMachinegun_C");

}

