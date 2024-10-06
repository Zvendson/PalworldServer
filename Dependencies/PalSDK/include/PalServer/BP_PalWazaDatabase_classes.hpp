#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalWazaDatabase.BP_PalWazaDatabase_C
// 0x0000 (0x0090 - 0x0090)
class UBP_PalWazaDatabase_C final : public UPalWazaDatabase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalWazaDatabase_C">();
	}
	static class UBP_PalWazaDatabase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalWazaDatabase_C>();
	}
};
static_assert(alignof(UBP_PalWazaDatabase_C) == 0x000008, "Wrong alignment on UBP_PalWazaDatabase_C");
static_assert(sizeof(UBP_PalWazaDatabase_C) == 0x000090, "Wrong size on UBP_PalWazaDatabase_C");

}

