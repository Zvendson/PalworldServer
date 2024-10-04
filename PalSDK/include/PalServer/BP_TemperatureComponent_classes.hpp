#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_TemperatureComponent.BP_TemperatureComponent_C
// 0x0000 (0x05F0 - 0x05F0)
class UBP_TemperatureComponent_C final : public UPalTemperatureComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TemperatureComponent_C">();
	}
	static class UBP_TemperatureComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TemperatureComponent_C>();
	}
};
static_assert(alignof(UBP_TemperatureComponent_C) == 0x000010, "Wrong alignment on UBP_TemperatureComponent_C");
static_assert(sizeof(UBP_TemperatureComponent_C) == 0x0005F0, "Wrong size on UBP_TemperatureComponent_C");

}

