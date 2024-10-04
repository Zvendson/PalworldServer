#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalLocationManager.BP_PalLocationManager_C
// 0x0000 (0x0168 - 0x0168)
class UBP_PalLocationManager_C final : public UPalLocationManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalLocationManager_C">();
	}
	static class UBP_PalLocationManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalLocationManager_C>();
	}
};
static_assert(alignof(UBP_PalLocationManager_C) == 0x000008, "Wrong alignment on UBP_PalLocationManager_C");
static_assert(sizeof(UBP_PalLocationManager_C) == 0x000168, "Wrong size on UBP_PalLocationManager_C");

}

