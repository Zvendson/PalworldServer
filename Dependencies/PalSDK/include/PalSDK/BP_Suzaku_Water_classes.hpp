#pragma once

#include "Basic.hpp"

#include "BP_Suzaku_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_Suzaku_Water.BP_Suzaku_Water_C
// 0x0000 (0x0AB0 - 0x0AB0)
class ABP_Suzaku_Water_C final : public ABP_Suzaku_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Suzaku_Water_C">();
	}
	static class ABP_Suzaku_Water_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Suzaku_Water_C>();
	}
};
static_assert(alignof(ABP_Suzaku_Water_C) == 0x000010, "Wrong alignment on ABP_Suzaku_Water_C");
static_assert(sizeof(ABP_Suzaku_Water_C) == 0x000AB0, "Wrong size on ABP_Suzaku_Water_C");

}

