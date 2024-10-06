#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_Status_DrownCheck.BP_Status_DrownCheck_C
// 0x0000 (0x0068 - 0x0068)
class UBP_Status_DrownCheck_C final : public UPalAction_DrownCheckBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Status_DrownCheck_C">();
	}
	static class UBP_Status_DrownCheck_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Status_DrownCheck_C>();
	}
};
static_assert(alignof(UBP_Status_DrownCheck_C) == 0x000008, "Wrong alignment on UBP_Status_DrownCheck_C");
static_assert(sizeof(UBP_Status_DrownCheck_C) == 0x000068, "Wrong size on UBP_Status_DrownCheck_C");

}

