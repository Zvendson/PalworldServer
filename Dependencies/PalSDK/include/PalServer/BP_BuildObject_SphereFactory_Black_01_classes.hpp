#pragma once

#include "Basic.hpp"

#include "BP_BuildObject_SphereFactory_Black_Base_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_BuildObject_SphereFactory_Black_01.BP_BuildObject_SphereFactory_Black_01_C
// 0x0000 (0x0670 - 0x0670)
class ABP_BuildObject_SphereFactory_Black_01_C final : public ABP_BuildObject_SphereFactory_Black_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuildObject_SphereFactory_Black_01_C">();
	}
	static class ABP_BuildObject_SphereFactory_Black_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BuildObject_SphereFactory_Black_01_C>();
	}
};
static_assert(alignof(ABP_BuildObject_SphereFactory_Black_01_C) == 0x000008, "Wrong alignment on ABP_BuildObject_SphereFactory_Black_01_C");
static_assert(sizeof(ABP_BuildObject_SphereFactory_Black_01_C) == 0x000670, "Wrong size on ABP_BuildObject_SphereFactory_Black_01_C");

}

