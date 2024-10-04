#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass DmgTypeBP_Environmental.DmgTypeBP_Environmental_C
// 0x0000 (0x0040 - 0x0040)
class UDmgTypeBP_Environmental_C final : public UDamageType
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DmgTypeBP_Environmental_C">();
	}
	static class UDmgTypeBP_Environmental_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDmgTypeBP_Environmental_C>();
	}
};
static_assert(alignof(UDmgTypeBP_Environmental_C) == 0x000008, "Wrong alignment on UDmgTypeBP_Environmental_C");
static_assert(sizeof(UDmgTypeBP_Environmental_C) == 0x000040, "Wrong size on UDmgTypeBP_Environmental_C");

}

