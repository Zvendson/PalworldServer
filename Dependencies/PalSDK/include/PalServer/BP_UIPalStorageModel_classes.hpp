#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_UIPalStorageModel.BP_UIPalStorageModel_C
// 0x0000 (0x0048 - 0x0048)
class UBP_UIPalStorageModel_C final : public UPalUIPalStorageModel
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UIPalStorageModel_C">();
	}
	static class UBP_UIPalStorageModel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UIPalStorageModel_C>();
	}
};
static_assert(alignof(UBP_UIPalStorageModel_C) == 0x000008, "Wrong alignment on UBP_UIPalStorageModel_C");
static_assert(sizeof(UBP_UIPalStorageModel_C) == 0x000048, "Wrong size on UBP_UIPalStorageModel_C");

}

