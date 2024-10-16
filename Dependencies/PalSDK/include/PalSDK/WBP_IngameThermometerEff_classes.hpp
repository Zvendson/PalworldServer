#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_IngameThermometerEff.WBP_IngameThermometerEff_C
// 0x0088 (0x0300 - 0x0278)
class UWBP_IngameThermometerEff_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ANm_OffToOn;                                       // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Cold2To0;                                      // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Hot2To0;                                       // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelCold;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelHot;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Cold0;                                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Cold1;                                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Hot;                                               // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Hot_1;                                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HotSpark;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EPalBodyTemperatureState                      CachedBodyState;                                   // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D1[0x3];                                      // 0x02D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CachedDisplayTemperature;                          // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LimitTenperature;                                  // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EffectAnimeEndTime;                                // 0x02DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFirstSetup;                                      // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E1[0x7];                                      // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        TargetEffectAnimeTime;                             // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NowEffectAnimtTime;                                // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PreviousDisplayTemperature;                        // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalBodyTemperatureState                      PreviousBodyState;                                 // 0x02FC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnmEvent_Effect(int32 Temperanture);
	void AnmEvent_Off();
	void AnmEvent_On();
	void Calc_Thermomater_Anime_Target_Time(int32 TargetTenperature, double* TargetTime);
	void Construct();
	void ExecuteUbergraph_WBP_IngameThermometerEff(int32 EntryPoint);
	void OnInitialized();
	void PlayTemperatureSound();
	void SetTemperanture(int32 Temperanture);
	void SetTemperantureBodyState(EPalBodyTemperatureState NewBodyState);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IngameThermometerEff_C">();
	}
	static class UWBP_IngameThermometerEff_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IngameThermometerEff_C>();
	}
};
static_assert(alignof(UWBP_IngameThermometerEff_C) == 0x000008, "Wrong alignment on UWBP_IngameThermometerEff_C");
static_assert(sizeof(UWBP_IngameThermometerEff_C) == 0x000300, "Wrong size on UWBP_IngameThermometerEff_C");
static_assert(offsetof(UWBP_IngameThermometerEff_C, UberGraphFrame) == 0x000278, "Member 'UWBP_IngameThermometerEff_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_IngameThermometerEff_C, ANm_OffToOn) == 0x000280, "Member 'UWBP_IngameThermometerEff_C::ANm_OffToOn' has a wrong offset!");
static_assert(offsetof(UWBP_IngameThermometerEff_C, Anm_Cold2To0) == 0x000288, "Member 'UWBP_IngameThermometerEff_C::Anm_Cold2To0' has a wrong offset!");
static_assert(offsetof(UWBP_IngameThermometerEff_C, Anm_Hot2To0) == 0x000290, "Member 'UWBP_IngameThermometerEff_C::Anm_Hot2To0' has a wrong offset!");
static_assert(offsetof(UWBP_IngameThermometerEff_C, CanvasPanelCold) == 0x000298, "Member 'UWBP_IngameThermometerEff_C::CanvasPanelCold' has a wrong offset!");
static_assert(offsetof(UWBP_IngameThermometerEff_C, CanvasPanelHot) == 0x0002A0, "Member 'UWBP_IngameThermometerEff_C::CanvasPanelHot' has a wrong offset!");
static_assert(offsetof(UWBP_IngameThermometerEff_C, Cold0) == 0x0002A8, "Member 'UWBP_IngameThermometerEff_C::Cold0' has a wrong offset!");
static_assert(offsetof(UWBP_IngameThermometerEff_C, Cold1) == 0x0002B0, "Member 'UWBP_IngameThermometerEff_C::Cold1' has a wrong offset!");
static_assert(offsetof(UWBP_IngameThermometerEff_C, Hot) == 0x0002B8, "Member 'UWBP_IngameThermometerEff_C::Hot' has a wrong offset!");
static_assert(offsetof(UWBP_IngameThermometerEff_C, Hot_1) == 0x0002C0, "Member 'UWBP_IngameThermometerEff_C::Hot_1' has a wrong offset!");
static_assert(offsetof(UWBP_IngameThermometerEff_C, HotSpark) == 0x0002C8, "Member 'UWBP_IngameThermometerEff_C::HotSpark' has a wrong offset!");
static_assert(offsetof(UWBP_IngameThermometerEff_C, CachedBodyState) == 0x0002D0, "Member 'UWBP_IngameThermometerEff_C::CachedBodyState' has a wrong offset!");
static_assert(offsetof(UWBP_IngameThermometerEff_C, CachedDisplayTemperature) == 0x0002D4, "Member 'UWBP_IngameThermometerEff_C::CachedDisplayTemperature' has a wrong offset!");
static_assert(offsetof(UWBP_IngameThermometerEff_C, LimitTenperature) == 0x0002D8, "Member 'UWBP_IngameThermometerEff_C::LimitTenperature' has a wrong offset!");
static_assert(offsetof(UWBP_IngameThermometerEff_C, EffectAnimeEndTime) == 0x0002DC, "Member 'UWBP_IngameThermometerEff_C::EffectAnimeEndTime' has a wrong offset!");
static_assert(offsetof(UWBP_IngameThermometerEff_C, IsFirstSetup) == 0x0002E0, "Member 'UWBP_IngameThermometerEff_C::IsFirstSetup' has a wrong offset!");
static_assert(offsetof(UWBP_IngameThermometerEff_C, TargetEffectAnimeTime) == 0x0002E8, "Member 'UWBP_IngameThermometerEff_C::TargetEffectAnimeTime' has a wrong offset!");
static_assert(offsetof(UWBP_IngameThermometerEff_C, NowEffectAnimtTime) == 0x0002F0, "Member 'UWBP_IngameThermometerEff_C::NowEffectAnimtTime' has a wrong offset!");
static_assert(offsetof(UWBP_IngameThermometerEff_C, PreviousDisplayTemperature) == 0x0002F8, "Member 'UWBP_IngameThermometerEff_C::PreviousDisplayTemperature' has a wrong offset!");
static_assert(offsetof(UWBP_IngameThermometerEff_C, PreviousBodyState) == 0x0002FC, "Member 'UWBP_IngameThermometerEff_C::PreviousBodyState' has a wrong offset!");

}

