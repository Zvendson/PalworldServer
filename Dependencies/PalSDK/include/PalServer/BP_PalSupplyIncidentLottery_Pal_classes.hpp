#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalSupplyIncidentLottery_Pal.BP_PalSupplyIncidentLottery_Pal_C
// 0x0000 (0x0040 - 0x0040)
class UBP_PalSupplyIncidentLottery_Pal_C final : public UPalRandomIncidentLotteryBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalSupplyIncidentLottery_Pal_C">();
	}
	static class UBP_PalSupplyIncidentLottery_Pal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalSupplyIncidentLottery_Pal_C>();
	}
};
static_assert(alignof(UBP_PalSupplyIncidentLottery_Pal_C) == 0x000008, "Wrong alignment on UBP_PalSupplyIncidentLottery_Pal_C");
static_assert(sizeof(UBP_PalSupplyIncidentLottery_Pal_C) == 0x000040, "Wrong size on UBP_PalSupplyIncidentLottery_Pal_C");

}

