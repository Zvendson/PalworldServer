#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalRandomIncidentLottery.BP_PalRandomIncidentLottery_C
// 0x0000 (0x0040 - 0x0040)
class UBP_PalRandomIncidentLottery_C final : public UPalRandomIncidentLotteryBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalRandomIncidentLottery_C">();
	}
	static class UBP_PalRandomIncidentLottery_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalRandomIncidentLottery_C>();
	}
};
static_assert(alignof(UBP_PalRandomIncidentLottery_C) == 0x000008, "Wrong alignment on UBP_PalRandomIncidentLottery_C");
static_assert(sizeof(UBP_PalRandomIncidentLottery_C) == 0x000040, "Wrong size on UBP_PalRandomIncidentLottery_C");

}

