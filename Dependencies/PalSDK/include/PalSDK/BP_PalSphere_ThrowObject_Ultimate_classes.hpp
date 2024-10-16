#pragma once

#include "Basic.hpp"

#include "BP_PalSphere_ThrowObject_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalSphere_ThrowObject_Ultimate.BP_PalSphere_ThrowObject_Ultimate_C
// 0x0000 (0x0430 - 0x0430)
class ABP_PalSphere_ThrowObject_Ultimate_C final : public ABP_PalSphere_ThrowObject_C
{
public:
	void GetBodyClass(class UClass** bodyClass);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalSphere_ThrowObject_Ultimate_C">();
	}
	static class ABP_PalSphere_ThrowObject_Ultimate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalSphere_ThrowObject_Ultimate_C>();
	}
};
static_assert(alignof(ABP_PalSphere_ThrowObject_Ultimate_C) == 0x000008, "Wrong alignment on ABP_PalSphere_ThrowObject_Ultimate_C");
static_assert(sizeof(ABP_PalSphere_ThrowObject_Ultimate_C) == 0x000430, "Wrong size on ABP_PalSphere_ThrowObject_Ultimate_C");

}

