#pragma once

#include "Basic.hpp"

#include "BP_Umihebi_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_Umihebi_Fire.BP_Umihebi_Fire_C
// 0x0000 (0x0AB0 - 0x0AB0)
class ABP_Umihebi_Fire_C final : public ABP_Umihebi_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Umihebi_Fire_C">();
	}
	static class ABP_Umihebi_Fire_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Umihebi_Fire_C>();
	}
};
static_assert(alignof(ABP_Umihebi_Fire_C) == 0x000010, "Wrong alignment on ABP_Umihebi_Fire_C");
static_assert(sizeof(ABP_Umihebi_Fire_C) == 0x000AB0, "Wrong size on ABP_Umihebi_Fire_C");

}

