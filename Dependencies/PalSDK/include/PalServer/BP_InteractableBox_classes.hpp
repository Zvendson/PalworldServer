#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_InteractableBox.BP_InteractableBox_C
// 0x0000 (0x05F0 - 0x05F0)
class UBP_InteractableBox_C final : public UPalInteractiveObjectBoxComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_InteractableBox_C">();
	}
	static class UBP_InteractableBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_InteractableBox_C>();
	}
};
static_assert(alignof(UBP_InteractableBox_C) == 0x000010, "Wrong alignment on UBP_InteractableBox_C");
static_assert(sizeof(UBP_InteractableBox_C) == 0x0005F0, "Wrong size on UBP_InteractableBox_C");

}

