#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalMasterDataTables.BP_PalMasterDataTables_C
// 0x0000 (0x0258 - 0x0258)
class UBP_PalMasterDataTables_C final : public UPalMasterDataTables
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalMasterDataTables_C">();
	}
	static class UBP_PalMasterDataTables_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalMasterDataTables_C>();
	}
};
static_assert(alignof(UBP_PalMasterDataTables_C) == 0x000008, "Wrong alignment on UBP_PalMasterDataTables_C");
static_assert(sizeof(UBP_PalMasterDataTables_C) == 0x000258, "Wrong size on UBP_PalMasterDataTables_C");

}

