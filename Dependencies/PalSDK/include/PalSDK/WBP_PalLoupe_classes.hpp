#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_IndividualParameterBindWidget_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_PalLoupe.WBP_PalLoupe_C
// 0x0040 (0x05F8 - 0x05B8)
class UWBP_PalLoupe_C final : public UWBP_IndividualParameterBindWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_PalLoupe_C;                     // 0x05B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Loupe_Angle;                                       // 0x05C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Loupe_Circle;                                      // 0x05C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Pal_base;                                          // 0x05D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlot_C*          WBP_PalCommonCharacterSlot;                        // 0x05D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalLoupe_GaugeHP_C*                WBP_PalLoupe_GaugeHP;                              // 0x05E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalLoupe_GaugeHunger_C*            WBP_PalLoupe_GaugeHunger;                          // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          TargetHandle;                                      // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Clear();
	void ExecuteUbergraph_WBP_PalLoupe(int32 EntryPoint);
	void OnInitialized();
	void SetTargetPal(class UPalIndividualCharacterSlot* TargetSlot);
	void UpdateHP(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP);
	void UpdateHunger(double NowHunger, double NowMaxHunger);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalLoupe_C">();
	}
	static class UWBP_PalLoupe_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalLoupe_C>();
	}
};
static_assert(alignof(UWBP_PalLoupe_C) == 0x000008, "Wrong alignment on UWBP_PalLoupe_C");
static_assert(sizeof(UWBP_PalLoupe_C) == 0x0005F8, "Wrong size on UWBP_PalLoupe_C");
static_assert(offsetof(UWBP_PalLoupe_C, UberGraphFrame_WBP_PalLoupe_C) == 0x0005B8, "Member 'UWBP_PalLoupe_C::UberGraphFrame_WBP_PalLoupe_C' has a wrong offset!");
static_assert(offsetof(UWBP_PalLoupe_C, Loupe_Angle) == 0x0005C0, "Member 'UWBP_PalLoupe_C::Loupe_Angle' has a wrong offset!");
static_assert(offsetof(UWBP_PalLoupe_C, Loupe_Circle) == 0x0005C8, "Member 'UWBP_PalLoupe_C::Loupe_Circle' has a wrong offset!");
static_assert(offsetof(UWBP_PalLoupe_C, Pal_base) == 0x0005D0, "Member 'UWBP_PalLoupe_C::Pal_base' has a wrong offset!");
static_assert(offsetof(UWBP_PalLoupe_C, WBP_PalCommonCharacterSlot) == 0x0005D8, "Member 'UWBP_PalLoupe_C::WBP_PalCommonCharacterSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalLoupe_C, WBP_PalLoupe_GaugeHP) == 0x0005E0, "Member 'UWBP_PalLoupe_C::WBP_PalLoupe_GaugeHP' has a wrong offset!");
static_assert(offsetof(UWBP_PalLoupe_C, WBP_PalLoupe_GaugeHunger) == 0x0005E8, "Member 'UWBP_PalLoupe_C::WBP_PalLoupe_GaugeHunger' has a wrong offset!");
static_assert(offsetof(UWBP_PalLoupe_C, TargetHandle) == 0x0005F0, "Member 'UWBP_PalLoupe_C::TargetHandle' has a wrong offset!");

}

