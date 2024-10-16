#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_BuildObjectInstallStrategy_ItemProvider_CrudeOil.BP_BuildObjectInstallStrategy_ItemProvider_CrudeOil_C
// 0x0000 (0x0058 - 0x0058)
class UBP_BuildObjectInstallStrategy_ItemProvider_CrudeOil_C final : public UPalBuildObjectInstallStrategyPlaceOnItemProvider
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuildObjectInstallStrategy_ItemProvider_CrudeOil_C">();
	}
	static class UBP_BuildObjectInstallStrategy_ItemProvider_CrudeOil_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BuildObjectInstallStrategy_ItemProvider_CrudeOil_C>();
	}
};
static_assert(alignof(UBP_BuildObjectInstallStrategy_ItemProvider_CrudeOil_C) == 0x000008, "Wrong alignment on UBP_BuildObjectInstallStrategy_ItemProvider_CrudeOil_C");
static_assert(sizeof(UBP_BuildObjectInstallStrategy_ItemProvider_CrudeOil_C) == 0x000058, "Wrong size on UBP_BuildObjectInstallStrategy_ItemProvider_CrudeOil_C");

}

