#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PlayerGenderChanger.BP_PlayerGenderChanger_C
// 0x0000 (0x0180 - 0x0180)
class UBP_PlayerGenderChanger_C final : public UPalPlayerGenderChanger
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerGenderChanger_C">();
	}
	static class UBP_PlayerGenderChanger_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerGenderChanger_C>();
	}
};
static_assert(alignof(UBP_PlayerGenderChanger_C) == 0x000008, "Wrong alignment on UBP_PlayerGenderChanger_C");
static_assert(sizeof(UBP_PlayerGenderChanger_C) == 0x000180, "Wrong size on UBP_PlayerGenderChanger_C");

}

