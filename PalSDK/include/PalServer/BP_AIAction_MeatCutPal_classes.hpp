#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_AIAction_MeatCutPal.BP_AIAction_MeatCutPal_C
// 0x0000 (0x0130 - 0x0130)
class UBP_AIAction_MeatCutPal_C final : public UPalAIActionBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_MeatCutPal_C">();
	}
	static class UBP_AIAction_MeatCutPal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_MeatCutPal_C>();
	}
};
static_assert(alignof(UBP_AIAction_MeatCutPal_C) == 0x000008, "Wrong alignment on UBP_AIAction_MeatCutPal_C");
static_assert(sizeof(UBP_AIAction_MeatCutPal_C) == 0x000130, "Wrong size on UBP_AIAction_MeatCutPal_C");

}

