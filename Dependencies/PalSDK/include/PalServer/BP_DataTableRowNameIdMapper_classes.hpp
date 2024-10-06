#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_DataTableRowNameIdMapper.BP_DataTableRowNameIdMapper_C
// 0x0000 (0x0088 - 0x0088)
class UBP_DataTableRowNameIdMapper_C final : public UPalDataTableRowIdMapper
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DataTableRowNameIdMapper_C">();
	}
	static class UBP_DataTableRowNameIdMapper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DataTableRowNameIdMapper_C>();
	}
};
static_assert(alignof(UBP_DataTableRowNameIdMapper_C) == 0x000008, "Wrong alignment on UBP_DataTableRowNameIdMapper_C");
static_assert(sizeof(UBP_DataTableRowNameIdMapper_C) == 0x000088, "Wrong size on UBP_DataTableRowNameIdMapper_C");

}

