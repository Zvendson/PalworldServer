#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_BaseCampTaskChecker.BP_BaseCampTaskChecker_C
// 0x0000 (0x0030 - 0x0030)
class UBP_BaseCampTaskChecker_C final : public UPalBaseCampTaskChecker
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BaseCampTaskChecker_C">();
	}
	static class UBP_BaseCampTaskChecker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BaseCampTaskChecker_C>();
	}
};
static_assert(alignof(UBP_BaseCampTaskChecker_C) == 0x000008, "Wrong alignment on UBP_BaseCampTaskChecker_C");
static_assert(sizeof(UBP_BaseCampTaskChecker_C) == 0x000030, "Wrong size on UBP_BaseCampTaskChecker_C");

}

