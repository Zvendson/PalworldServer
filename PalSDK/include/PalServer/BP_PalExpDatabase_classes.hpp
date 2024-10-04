#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalExpDatabase.BP_PalExpDatabase_C
// 0x0000 (0x0038 - 0x0038)
class UBP_PalExpDatabase_C final : public UPalExpDatabase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalExpDatabase_C">();
	}
	static class UBP_PalExpDatabase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalExpDatabase_C>();
	}
};
static_assert(alignof(UBP_PalExpDatabase_C) == 0x000008, "Wrong alignment on UBP_PalExpDatabase_C");
static_assert(sizeof(UBP_PalExpDatabase_C) == 0x000038, "Wrong size on UBP_PalExpDatabase_C");

}

