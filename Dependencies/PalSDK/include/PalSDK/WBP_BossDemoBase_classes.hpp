#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_BossDemoBase.WBP_BossDemoBase_C
// 0x0000 (0x0408 - 0x0408)
class UWBP_BossDemoBase_C final : public UPalUserWidget
{
public:
	void OnStartEvent();
	void SetupText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BossDemoBase_C">();
	}
	static class UWBP_BossDemoBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BossDemoBase_C>();
	}
};
static_assert(alignof(UWBP_BossDemoBase_C) == 0x000008, "Wrong alignment on UWBP_BossDemoBase_C");
static_assert(sizeof(UWBP_BossDemoBase_C) == 0x000408, "Wrong size on UWBP_BossDemoBase_C");

}

