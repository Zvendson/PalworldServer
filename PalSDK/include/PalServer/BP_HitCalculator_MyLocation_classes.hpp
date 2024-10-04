#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_HitCalculator_MyLocation.BP_HitCalculator_MyLocation_C
// 0x0000 (0x0028 - 0x0028)
class UBP_HitCalculator_MyLocation_C final : public UPalHitLocationCalculator
{
public:
	struct FVector CalcLocation(class UPrimitiveComponent* MyHitComponent, class UPrimitiveComponent* OtherHitComponent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HitCalculator_MyLocation_C">();
	}
	static class UBP_HitCalculator_MyLocation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_HitCalculator_MyLocation_C>();
	}
};
static_assert(alignof(UBP_HitCalculator_MyLocation_C) == 0x000008, "Wrong alignment on UBP_HitCalculator_MyLocation_C");
static_assert(sizeof(UBP_HitCalculator_MyLocation_C) == 0x000028, "Wrong size on UBP_HitCalculator_MyLocation_C");

}

