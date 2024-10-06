#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BI_PalGrapplingAimInterface.BI_PalGrapplingAimInterface_C
// 0x0000 (0x0028 - 0x0028)
class IBI_PalGrapplingAimInterface_C final : public IInterface
{
public:
	void IsShowReticle(bool* IsShow) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BI_PalGrapplingAimInterface_C">();
	}
	static class IBI_PalGrapplingAimInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBI_PalGrapplingAimInterface_C>();
	}
};
static_assert(alignof(IBI_PalGrapplingAimInterface_C) == 0x000008, "Wrong alignment on IBI_PalGrapplingAimInterface_C");
static_assert(sizeof(IBI_PalGrapplingAimInterface_C) == 0x000028, "Wrong size on IBI_PalGrapplingAimInterface_C");

}

