#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_MapObjectMedicalPalBedModel.BP_MapObjectMedicalPalBedModel_C
// 0x0000 (0x0290 - 0x0290)
class UBP_MapObjectMedicalPalBedModel_C final : public UPalMapObjectMedicalPalBedModel
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapObjectMedicalPalBedModel_C">();
	}
	static class UBP_MapObjectMedicalPalBedModel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_MapObjectMedicalPalBedModel_C>();
	}
};
static_assert(alignof(UBP_MapObjectMedicalPalBedModel_C) == 0x000008, "Wrong alignment on UBP_MapObjectMedicalPalBedModel_C");
static_assert(sizeof(UBP_MapObjectMedicalPalBedModel_C) == 0x000290, "Wrong size on UBP_MapObjectMedicalPalBedModel_C");

}

