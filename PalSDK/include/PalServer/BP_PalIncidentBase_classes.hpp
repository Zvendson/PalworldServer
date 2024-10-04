#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalIncidentBase.BP_PalIncidentBase_C
// 0x0000 (0x0160 - 0x0160)
class UBP_PalIncidentBase_C : public UPalIncidentBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalIncidentBase_C">();
	}
	static class UBP_PalIncidentBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalIncidentBase_C>();
	}
};
static_assert(alignof(UBP_PalIncidentBase_C) == 0x000010, "Wrong alignment on UBP_PalIncidentBase_C");
static_assert(sizeof(UBP_PalIncidentBase_C) == 0x000160, "Wrong size on UBP_PalIncidentBase_C");

}

