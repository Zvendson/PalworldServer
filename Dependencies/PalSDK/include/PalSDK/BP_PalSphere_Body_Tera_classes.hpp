#pragma once

#include "Basic.hpp"

#include "BP_PalSphere_Body_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalSphere_Body_Tera.BP_PalSphere_Body_Tera_C
// 0x0000 (0x0468 - 0x0468)
class ABP_PalSphere_Body_Tera_C final : public ABP_PalSphere_Body_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalSphere_Body_Tera_C">();
	}
	static class ABP_PalSphere_Body_Tera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalSphere_Body_Tera_C>();
	}
};
static_assert(alignof(ABP_PalSphere_Body_Tera_C) == 0x000008, "Wrong alignment on ABP_PalSphere_Body_Tera_C");
static_assert(sizeof(ABP_PalSphere_Body_Tera_C) == 0x000468, "Wrong size on ABP_PalSphere_Body_Tera_C");

}

