#pragma once

#include "Basic.hpp"

#include "BP_Prop_Base_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PropBread.BP_PropBread_C
// 0x0000 (0x02D8 - 0x02D8)
class ABP_PropBread_C final : public ABP_Prop_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PropBread_C">();
	}
	static class ABP_PropBread_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PropBread_C>();
	}
};
static_assert(alignof(ABP_PropBread_C) == 0x000008, "Wrong alignment on ABP_PropBread_C");
static_assert(sizeof(ABP_PropBread_C) == 0x0002D8, "Wrong size on ABP_PropBread_C");

}

