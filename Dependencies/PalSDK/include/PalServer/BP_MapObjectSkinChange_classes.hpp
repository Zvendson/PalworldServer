#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_MapObjectSkinChange.BP_MapObjectSkinChange_C
// 0x0000 (0x0220 - 0x0220)
class UBP_MapObjectSkinChange_C final : public UPalMapObjectSkinChangeModel
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapObjectSkinChange_C">();
	}
	static class UBP_MapObjectSkinChange_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_MapObjectSkinChange_C>();
	}
};
static_assert(alignof(UBP_MapObjectSkinChange_C) == 0x000008, "Wrong alignment on UBP_MapObjectSkinChange_C");
static_assert(sizeof(UBP_MapObjectSkinChange_C) == 0x000220, "Wrong size on UBP_MapObjectSkinChange_C");

}

