#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalBaseCampManager.BP_PalBaseCampManager_C
// 0x0000 (0x0240 - 0x0240)
class UBP_PalBaseCampManager_C final : public UPalBaseCampManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalBaseCampManager_C">();
	}
	static class UBP_PalBaseCampManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalBaseCampManager_C>();
	}
};
static_assert(alignof(UBP_PalBaseCampManager_C) == 0x000010, "Wrong alignment on UBP_PalBaseCampManager_C");
static_assert(sizeof(UBP_PalBaseCampManager_C) == 0x000240, "Wrong size on UBP_PalBaseCampManager_C");

}

