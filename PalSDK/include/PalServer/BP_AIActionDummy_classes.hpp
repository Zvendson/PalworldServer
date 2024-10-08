#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_AIActionDummy.BP_AIActionDummy_C
// 0x0000 (0x0130 - 0x0130)
class UBP_AIActionDummy_C final : public UPalAIActionBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIActionDummy_C">();
	}
	static class UBP_AIActionDummy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIActionDummy_C>();
	}
};
static_assert(alignof(UBP_AIActionDummy_C) == 0x000008, "Wrong alignment on UBP_AIActionDummy_C");
static_assert(sizeof(UBP_AIActionDummy_C) == 0x000130, "Wrong size on UBP_AIActionDummy_C");

}

