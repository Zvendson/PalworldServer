#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BI_PalInteractHUDInterface.BI_PalInteractHUDInterface_C
// 0x0000 (0x0028 - 0x0028)
class IBI_PalInteractHUDInterface_C final : public IInterface
{
public:
	void GetInteractWidget(class UPalUserWidget** CreatedWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BI_PalInteractHUDInterface_C">();
	}
	static class IBI_PalInteractHUDInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBI_PalInteractHUDInterface_C>();
	}
};
static_assert(alignof(IBI_PalInteractHUDInterface_C) == 0x000008, "Wrong alignment on IBI_PalInteractHUDInterface_C");
static_assert(sizeof(IBI_PalInteractHUDInterface_C) == 0x000028, "Wrong size on IBI_PalInteractHUDInterface_C");

}

