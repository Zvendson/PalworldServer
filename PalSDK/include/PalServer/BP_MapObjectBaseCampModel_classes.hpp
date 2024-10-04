#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_MapObjectBaseCampModel.BP_MapObjectBaseCampModel_C
// 0x0000 (0x0238 - 0x0238)
class UBP_MapObjectBaseCampModel_C final : public UPalMapObjectBaseCampPoint
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapObjectBaseCampModel_C">();
	}
	static class UBP_MapObjectBaseCampModel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_MapObjectBaseCampModel_C>();
	}
};
static_assert(alignof(UBP_MapObjectBaseCampModel_C) == 0x000008, "Wrong alignment on UBP_MapObjectBaseCampModel_C");
static_assert(sizeof(UBP_MapObjectBaseCampModel_C) == 0x000238, "Wrong size on UBP_MapObjectBaseCampModel_C");

}

