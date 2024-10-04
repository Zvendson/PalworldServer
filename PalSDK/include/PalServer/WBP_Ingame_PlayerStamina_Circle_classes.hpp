#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_Ingame_PlayerStamina_Circle.WBP_Ingame_PlayerStamina_Circle_C
// 0x0110 (0x0388 - 0x0278)
class UWBP_Ingame_PlayerStamina_Circle_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_StaminaWarning_Loop;                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_StaminaWarning_InToOut;                        // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_1To3;                                          // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_PalStaminaIcon;                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_StaminaWarning;                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Gauge_Delay;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Gauge_Main;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GaugeFlare;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GaugeShadow;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PalIcon;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PalIconB;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PalIconBarB;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PalIconBarF;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PalIconCircleB;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PalIconCircleF;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsLastOverHeated;                                  // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F9[0x3];                                      // 0x02F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           DefaultFillColor;                                  // 0x02FC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_30C[0x4];                                      // 0x030C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ChachedSPPercent;                                  // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       EdgeImageSlot;                                     // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       GaugeSlot;                                         // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalUIDelayGaugeCalculator*             DelayGauge;                                        // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MainGaugeMat;                                      // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               ShadowGaugeMat;                                    // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               FlareGaugeMat;                                     // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           DelayGaugeTimer;                                   // 0x0348(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsActiveDelayGauge;                                // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_351[0x7];                                      // 0x0351(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DelayGaugePercent;                                 // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DelayGaugeMat;                                     // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        CachedLastTickSP;                                  // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        StackedDelayGauge;                                 // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LastDecreaseDelayGauge;                            // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsWarning;                                         // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle(int32 EntryPoint);
	void Finished_06A641D34FCE57CEABA661947727700A();
	void Finished_A235210E4CFA5CD880150D987765704F();
	void GetChachedSPPercent(double* Percent);
	void HideNotEnoughStamina();
	void OnInitialized();
	void SetOtomoMarkVisible(bool IsVisible_0);
	void SetPercent(double Percent, bool IsOverHeated);
	void ShowNotEnoughStamina();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Ingame_PlayerStamina_Circle_C">();
	}
	static class UWBP_Ingame_PlayerStamina_Circle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Ingame_PlayerStamina_Circle_C>();
	}
};
static_assert(alignof(UWBP_Ingame_PlayerStamina_Circle_C) == 0x000008, "Wrong alignment on UWBP_Ingame_PlayerStamina_Circle_C");
static_assert(sizeof(UWBP_Ingame_PlayerStamina_Circle_C) == 0x000388, "Wrong size on UWBP_Ingame_PlayerStamina_Circle_C");
static_assert(offsetof(UWBP_Ingame_PlayerStamina_Circle_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Ingame_PlayerStamina_Circle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerStamina_Circle_C, Anm_StaminaWarning_Loop) == 0x000280, "Member 'UWBP_Ingame_PlayerStamina_Circle_C::Anm_StaminaWarning_Loop' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerStamina_Circle_C, Anm_StaminaWarning_InToOut) == 0x000288, "Member 'UWBP_Ingame_PlayerStamina_Circle_C::Anm_StaminaWarning_InToOut' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerStamina_Circle_C, Anm_1To3) == 0x000290, "Member 'UWBP_Ingame_PlayerStamina_Circle_C::Anm_1To3' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerStamina_Circle_C, Canvas_PalStaminaIcon) == 0x000298, "Member 'UWBP_Ingame_PlayerStamina_Circle_C::Canvas_PalStaminaIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerStamina_Circle_C, CanvasPanel_StaminaWarning) == 0x0002A0, "Member 'UWBP_Ingame_PlayerStamina_Circle_C::CanvasPanel_StaminaWarning' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerStamina_Circle_C, Gauge_Delay) == 0x0002A8, "Member 'UWBP_Ingame_PlayerStamina_Circle_C::Gauge_Delay' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerStamina_Circle_C, Gauge_Main) == 0x0002B0, "Member 'UWBP_Ingame_PlayerStamina_Circle_C::Gauge_Main' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerStamina_Circle_C, GaugeFlare) == 0x0002B8, "Member 'UWBP_Ingame_PlayerStamina_Circle_C::GaugeFlare' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerStamina_Circle_C, GaugeShadow) == 0x0002C0, "Member 'UWBP_Ingame_PlayerStamina_Circle_C::GaugeShadow' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerStamina_Circle_C, PalIcon) == 0x0002C8, "Member 'UWBP_Ingame_PlayerStamina_Circle_C::PalIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerStamina_Circle_C, PalIconB) == 0x0002D0, "Member 'UWBP_Ingame_PlayerStamina_Circle_C::PalIconB' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerStamina_Circle_C, PalIconBarB) == 0x0002D8, "Member 'UWBP_Ingame_PlayerStamina_Circle_C::PalIconBarB' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerStamina_Circle_C, PalIconBarF) == 0x0002E0, "Member 'UWBP_Ingame_PlayerStamina_Circle_C::PalIconBarF' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerStamina_Circle_C, PalIconCircleB) == 0x0002E8, "Member 'UWBP_Ingame_PlayerStamina_Circle_C::PalIconCircleB' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerStamina_Circle_C, PalIconCircleF) == 0x0002F0, "Member 'UWBP_Ingame_PlayerStamina_Circle_C::PalIconCircleF' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerStamina_Circle_C, IsLastOverHeated) == 0x0002F8, "Member 'UWBP_Ingame_PlayerStamina_Circle_C::IsLastOverHeated' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerStamina_Circle_C, DefaultFillColor) == 0x0002FC, "Member 'UWBP_Ingame_PlayerStamina_Circle_C::DefaultFillColor' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerStamina_Circle_C, ChachedSPPercent) == 0x000310, "Member 'UWBP_Ingame_PlayerStamina_Circle_C::ChachedSPPercent' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerStamina_Circle_C, EdgeImageSlot) == 0x000318, "Member 'UWBP_Ingame_PlayerStamina_Circle_C::EdgeImageSlot' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerStamina_Circle_C, GaugeSlot) == 0x000320, "Member 'UWBP_Ingame_PlayerStamina_Circle_C::GaugeSlot' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerStamina_Circle_C, DelayGauge) == 0x000328, "Member 'UWBP_Ingame_PlayerStamina_Circle_C::DelayGauge' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerStamina_Circle_C, MainGaugeMat) == 0x000330, "Member 'UWBP_Ingame_PlayerStamina_Circle_C::MainGaugeMat' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerStamina_Circle_C, ShadowGaugeMat) == 0x000338, "Member 'UWBP_Ingame_PlayerStamina_Circle_C::ShadowGaugeMat' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerStamina_Circle_C, FlareGaugeMat) == 0x000340, "Member 'UWBP_Ingame_PlayerStamina_Circle_C::FlareGaugeMat' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerStamina_Circle_C, DelayGaugeTimer) == 0x000348, "Member 'UWBP_Ingame_PlayerStamina_Circle_C::DelayGaugeTimer' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerStamina_Circle_C, IsActiveDelayGauge) == 0x000350, "Member 'UWBP_Ingame_PlayerStamina_Circle_C::IsActiveDelayGauge' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerStamina_Circle_C, DelayGaugePercent) == 0x000358, "Member 'UWBP_Ingame_PlayerStamina_Circle_C::DelayGaugePercent' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerStamina_Circle_C, DelayGaugeMat) == 0x000360, "Member 'UWBP_Ingame_PlayerStamina_Circle_C::DelayGaugeMat' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerStamina_Circle_C, CachedLastTickSP) == 0x000368, "Member 'UWBP_Ingame_PlayerStamina_Circle_C::CachedLastTickSP' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerStamina_Circle_C, StackedDelayGauge) == 0x000370, "Member 'UWBP_Ingame_PlayerStamina_Circle_C::StackedDelayGauge' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerStamina_Circle_C, LastDecreaseDelayGauge) == 0x000378, "Member 'UWBP_Ingame_PlayerStamina_Circle_C::LastDecreaseDelayGauge' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerStamina_Circle_C, IsWarning) == 0x000380, "Member 'UWBP_Ingame_PlayerStamina_Circle_C::IsWarning' has a wrong offset!");

}

