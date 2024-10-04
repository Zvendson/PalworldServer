#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_AIAction_BaseCampDefenseGunner.BP_AIAction_BaseCampDefenseGunner_C
// 0x0000 (0x0190 - 0x0190)
class UBP_AIAction_BaseCampDefenseGunner_C final : public UPalAIActionBaseCampDefenseGunner
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_BaseCampDefenseGunner_C">();
	}
	static class UBP_AIAction_BaseCampDefenseGunner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_BaseCampDefenseGunner_C>();
	}
};
static_assert(alignof(UBP_AIAction_BaseCampDefenseGunner_C) == 0x000008, "Wrong alignment on UBP_AIAction_BaseCampDefenseGunner_C");
static_assert(sizeof(UBP_AIAction_BaseCampDefenseGunner_C) == 0x000190, "Wrong size on UBP_AIAction_BaseCampDefenseGunner_C");

}

