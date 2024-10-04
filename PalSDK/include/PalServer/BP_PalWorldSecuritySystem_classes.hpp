#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalWorldSecuritySystem.BP_PalWorldSecuritySystem_C
// 0x0000 (0x0258 - 0x0258)
class UBP_PalWorldSecuritySystem_C final : public UPalWorldSecuritySystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalWorldSecuritySystem_C">();
	}
	static class UBP_PalWorldSecuritySystem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalWorldSecuritySystem_C>();
	}
};
static_assert(alignof(UBP_PalWorldSecuritySystem_C) == 0x000008, "Wrong alignment on UBP_PalWorldSecuritySystem_C");
static_assert(sizeof(UBP_PalWorldSecuritySystem_C) == 0x000258, "Wrong size on UBP_PalWorldSecuritySystem_C");

}

