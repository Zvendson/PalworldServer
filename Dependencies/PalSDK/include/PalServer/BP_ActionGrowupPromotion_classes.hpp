#pragma once

#include "Basic.hpp"

#include "BP_ActionSimpleMonoMontage_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_ActionGrowupPromotion.BP_ActionGrowupPromotion_C
// 0x0000 (0x0170 - 0x0170)
class UBP_ActionGrowupPromotion_C final : public UBP_ActionSimpleMonoMontage_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionGrowupPromotion_C">();
	}
	static class UBP_ActionGrowupPromotion_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionGrowupPromotion_C>();
	}
};
static_assert(alignof(UBP_ActionGrowupPromotion_C) == 0x000010, "Wrong alignment on UBP_ActionGrowupPromotion_C");
static_assert(sizeof(UBP_ActionGrowupPromotion_C) == 0x000170, "Wrong size on UBP_ActionGrowupPromotion_C");

}

