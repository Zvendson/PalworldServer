#pragma once

#include "Basic.hpp"

#include "BP_ActionRandomRest_classes.hpp"
#include "Pal_structs.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_ActionRandomRest_BaseCamp.BP_ActionRandomRest_BaseCamp_C
// 0x0000 (0x0180 - 0x0180)
class UBP_ActionRandomRest_BaseCamp_C final : public UBP_ActionRandomRest_C
{
public:
	struct FPalRandomRestInfo GetRandomRestInfo();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionRandomRest_BaseCamp_C">();
	}
	static class UBP_ActionRandomRest_BaseCamp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionRandomRest_BaseCamp_C>();
	}
};
static_assert(alignof(UBP_ActionRandomRest_BaseCamp_C) == 0x000010, "Wrong alignment on UBP_ActionRandomRest_BaseCamp_C");
static_assert(sizeof(UBP_ActionRandomRest_BaseCamp_C) == 0x000180, "Wrong size on UBP_ActionRandomRest_BaseCamp_C");

}

