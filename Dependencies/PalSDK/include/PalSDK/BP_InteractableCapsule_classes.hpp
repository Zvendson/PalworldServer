#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_InteractableCapsule.BP_InteractableCapsule_C
// 0x0000 (0x05D0 - 0x05D0)
class UBP_InteractableCapsule_C final : public UPalInteractiveObjectCapsuleComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_InteractableCapsule_C">();
	}
	static class UBP_InteractableCapsule_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_InteractableCapsule_C>();
	}
};
static_assert(alignof(UBP_InteractableCapsule_C) == 0x000010, "Wrong alignment on UBP_InteractableCapsule_C");
static_assert(sizeof(UBP_InteractableCapsule_C) == 0x0005D0, "Wrong size on UBP_InteractableCapsule_C");

}

