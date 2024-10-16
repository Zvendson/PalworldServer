#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_TutorialManager.BP_TutorialManager_C
// 0x0000 (0x00F8 - 0x00F8)
class UBP_TutorialManager_C final : public UPalTutorialManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TutorialManager_C">();
	}
	static class UBP_TutorialManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TutorialManager_C>();
	}
};
static_assert(alignof(UBP_TutorialManager_C) == 0x000008, "Wrong alignment on UBP_TutorialManager_C");
static_assert(sizeof(UBP_TutorialManager_C) == 0x0000F8, "Wrong size on UBP_TutorialManager_C");

}

