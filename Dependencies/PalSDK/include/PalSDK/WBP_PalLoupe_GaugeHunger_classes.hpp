#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_PalLoupe_GaugeHunger.WBP_PalLoupe_GaugeHunger_C
// 0x0008 (0x0280 - 0x0278)
class UWBP_PalLoupe_GaugeHunger_C final : public UUserWidget
{
public:
	class UProgressBar*                           ProgressBar_39;                                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetPercent(double Percent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalLoupe_GaugeHunger_C">();
	}
	static class UWBP_PalLoupe_GaugeHunger_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalLoupe_GaugeHunger_C>();
	}
};
static_assert(alignof(UWBP_PalLoupe_GaugeHunger_C) == 0x000008, "Wrong alignment on UWBP_PalLoupe_GaugeHunger_C");
static_assert(sizeof(UWBP_PalLoupe_GaugeHunger_C) == 0x000280, "Wrong size on UWBP_PalLoupe_GaugeHunger_C");
static_assert(offsetof(UWBP_PalLoupe_GaugeHunger_C, ProgressBar_39) == 0x000278, "Member 'UWBP_PalLoupe_GaugeHunger_C::ProgressBar_39' has a wrong offset!");

}

