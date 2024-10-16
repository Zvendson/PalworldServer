#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_PalGetReticle.WBP_PalGetReticle_C
// 0x01E0 (0x0458 - 0x0278)
class UWBP_PalGetReticle_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_New;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Captured;                                      // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Shot_After_Gauge_02;                           // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Shot_After_Gauge_01;                           // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Shot_After_Gauge_00;                           // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Loop_After_Gauge;                              // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnmClose_Success;                                  // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnmClose_After;                                    // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnmOpen_After;                                     // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnmAfterToBefore;                                  // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_BeforeToAfter;                                 // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Loop_After;                                    // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Loop_Before;                                   // 0x02E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnmClose_Before;                                   // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnmOpen_Before;                                    // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_C;                                 // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_C_1;                               // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_C_2;                               // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_C_4;                               // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_C_5;                               // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_C_115;                             // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_PalCaptureText;                             // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Gauge_00;                                          // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Gauge_00_Bloom;                                    // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Gauge_01;                                          // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Gauge_01_Bloom;                                    // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GaugeBaseFlare;                                    // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           GetPercentNumDecimal;                              // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_CaptureIcon;                                 // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Icon_Shadow;                                 // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_CaptureNum;                                // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Capturerate_SneakBonus;                       // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_CurrentCaptureNum;                            // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_MaxCaptureNum;                                // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     TextCaptured;                                      // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalGetReticle_Arrow_C*             WBP_PalGetReticle_Arrow;                           // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        TargetCaptureRate;                                 // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        OldCaptureRate;                                    // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       GaugeMaterials;                                    // 0x03B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UCurveFloat*                            DisplayRateCalcCurve;                              // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        RateCalcTimer;                                     // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                WorldLocation;                                     // 0x03D8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRelativeWorldLocation;                           // 0x03F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F1[0x7];                                      // 0x03F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<double>                                RateList;                                          // 0x03F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UCurveLinearColor*                      ColorCurve;                                        // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidgetAnimation*>               ShakeAnimArray;                                    // 0x0410(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsSneakBonus;                                      // 0x0420(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_421[0x7];                                      // 0x0421(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    SneakBonusMsgID;                                   // 0x0428(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    CaptureRateMsgID;                                  // 0x0438(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	double                                        OriginalInitialCaptureRate;                        // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           ClearTimerHandle;                                  // 0x0450(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AnmEvent_Captured(bool IsDisplay);
	void AnmEvent_CloseAndRemoveSecondStep();
	void AnmEvent_CloseFirstStep();
	void AnmEvent_CloseSecondStep();
	void AnmEvent_FirstToSecond();
	void AnmEvent_New(bool IsDisplay);
	void AnmEvent_OpenFirstStep();
	void AnmEvent_OpenSecondStep();
	void AnmEvent_RandomShake();
	void AnmEvent_ResetCloseAnim();
	void AnmEvent_ResetOpenAnim();
	void AnmEvent_SecondToFirst();
	void Construct();
	void Destruct();
	void DisplayCaptureBonusNum(int32 CaptureBonusCount);
	void ExecuteUbergraph_WBP_PalGetReticle(int32 EntryPoint);
	void Finished_EC162AC8447DABC2CF5BD2942C8E3A64();
	void OnInitialized();
	void OnTimer_RemoveSelf();
	void RestartTick();
	void Set_Display_Capture_Rate_Force(double Rate);
	void SetCaptureRateForce(double CaptureRate);
	void SetCaptureRateFromListIndex(int32 Index_0);
	void SetCaptureRateList(TArray<double>& RateList_0);
	void SetSneakBonusFlag(bool IsBonus);
	void SetWorldLocation(const struct FVector& Location);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Update_Display_Rate(double DeltaTime);
	void Update_Position();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalGetReticle_C">();
	}
	static class UWBP_PalGetReticle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalGetReticle_C>();
	}
};
static_assert(alignof(UWBP_PalGetReticle_C) == 0x000008, "Wrong alignment on UWBP_PalGetReticle_C");
static_assert(sizeof(UWBP_PalGetReticle_C) == 0x000458, "Wrong size on UWBP_PalGetReticle_C");
static_assert(offsetof(UWBP_PalGetReticle_C, UberGraphFrame) == 0x000278, "Member 'UWBP_PalGetReticle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, Anm_New) == 0x000280, "Member 'UWBP_PalGetReticle_C::Anm_New' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, Anm_Captured) == 0x000288, "Member 'UWBP_PalGetReticle_C::Anm_Captured' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, Anm_Shot_After_Gauge_02) == 0x000290, "Member 'UWBP_PalGetReticle_C::Anm_Shot_After_Gauge_02' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, Anm_Shot_After_Gauge_01) == 0x000298, "Member 'UWBP_PalGetReticle_C::Anm_Shot_After_Gauge_01' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, Anm_Shot_After_Gauge_00) == 0x0002A0, "Member 'UWBP_PalGetReticle_C::Anm_Shot_After_Gauge_00' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, Anm_Loop_After_Gauge) == 0x0002A8, "Member 'UWBP_PalGetReticle_C::Anm_Loop_After_Gauge' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, AnmClose_Success) == 0x0002B0, "Member 'UWBP_PalGetReticle_C::AnmClose_Success' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, AnmClose_After) == 0x0002B8, "Member 'UWBP_PalGetReticle_C::AnmClose_After' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, AnmOpen_After) == 0x0002C0, "Member 'UWBP_PalGetReticle_C::AnmOpen_After' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, AnmAfterToBefore) == 0x0002C8, "Member 'UWBP_PalGetReticle_C::AnmAfterToBefore' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, Anm_BeforeToAfter) == 0x0002D0, "Member 'UWBP_PalGetReticle_C::Anm_BeforeToAfter' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, Anm_Loop_After) == 0x0002D8, "Member 'UWBP_PalGetReticle_C::Anm_Loop_After' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, Anm_Loop_Before) == 0x0002E0, "Member 'UWBP_PalGetReticle_C::Anm_Loop_Before' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, AnmClose_Before) == 0x0002E8, "Member 'UWBP_PalGetReticle_C::AnmClose_Before' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, AnmOpen_Before) == 0x0002F0, "Member 'UWBP_PalGetReticle_C::AnmOpen_Before' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, BP_PalTextBlock_C) == 0x0002F8, "Member 'UWBP_PalGetReticle_C::BP_PalTextBlock_C' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, BP_PalTextBlock_C_1) == 0x000300, "Member 'UWBP_PalGetReticle_C::BP_PalTextBlock_C_1' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, BP_PalTextBlock_C_2) == 0x000308, "Member 'UWBP_PalGetReticle_C::BP_PalTextBlock_C_2' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, BP_PalTextBlock_C_4) == 0x000310, "Member 'UWBP_PalGetReticle_C::BP_PalTextBlock_C_4' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, BP_PalTextBlock_C_5) == 0x000318, "Member 'UWBP_PalGetReticle_C::BP_PalTextBlock_C_5' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, BP_PalTextBlock_C_115) == 0x000320, "Member 'UWBP_PalGetReticle_C::BP_PalTextBlock_C_115' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, Canvas_PalCaptureText) == 0x000328, "Member 'UWBP_PalGetReticle_C::Canvas_PalCaptureText' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, CanvasPanel_0) == 0x000330, "Member 'UWBP_PalGetReticle_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, Gauge_00) == 0x000338, "Member 'UWBP_PalGetReticle_C::Gauge_00' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, Gauge_00_Bloom) == 0x000340, "Member 'UWBP_PalGetReticle_C::Gauge_00_Bloom' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, Gauge_01) == 0x000348, "Member 'UWBP_PalGetReticle_C::Gauge_01' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, Gauge_01_Bloom) == 0x000350, "Member 'UWBP_PalGetReticle_C::Gauge_01_Bloom' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, GaugeBaseFlare) == 0x000358, "Member 'UWBP_PalGetReticle_C::GaugeBaseFlare' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, GetPercentNumDecimal) == 0x000360, "Member 'UWBP_PalGetReticle_C::GetPercentNumDecimal' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, Image_CaptureIcon) == 0x000368, "Member 'UWBP_PalGetReticle_C::Image_CaptureIcon' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, Image_Icon_Shadow) == 0x000370, "Member 'UWBP_PalGetReticle_C::Image_Icon_Shadow' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, Overlay_CaptureNum) == 0x000378, "Member 'UWBP_PalGetReticle_C::Overlay_CaptureNum' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, Text_Capturerate_SneakBonus) == 0x000380, "Member 'UWBP_PalGetReticle_C::Text_Capturerate_SneakBonus' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, Text_CurrentCaptureNum) == 0x000388, "Member 'UWBP_PalGetReticle_C::Text_CurrentCaptureNum' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, Text_MaxCaptureNum) == 0x000390, "Member 'UWBP_PalGetReticle_C::Text_MaxCaptureNum' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, TextCaptured) == 0x000398, "Member 'UWBP_PalGetReticle_C::TextCaptured' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, WBP_PalGetReticle_Arrow) == 0x0003A0, "Member 'UWBP_PalGetReticle_C::WBP_PalGetReticle_Arrow' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, TargetCaptureRate) == 0x0003A8, "Member 'UWBP_PalGetReticle_C::TargetCaptureRate' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, OldCaptureRate) == 0x0003B0, "Member 'UWBP_PalGetReticle_C::OldCaptureRate' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, GaugeMaterials) == 0x0003B8, "Member 'UWBP_PalGetReticle_C::GaugeMaterials' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, DisplayRateCalcCurve) == 0x0003C8, "Member 'UWBP_PalGetReticle_C::DisplayRateCalcCurve' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, RateCalcTimer) == 0x0003D0, "Member 'UWBP_PalGetReticle_C::RateCalcTimer' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, WorldLocation) == 0x0003D8, "Member 'UWBP_PalGetReticle_C::WorldLocation' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, IsRelativeWorldLocation) == 0x0003F0, "Member 'UWBP_PalGetReticle_C::IsRelativeWorldLocation' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, RateList) == 0x0003F8, "Member 'UWBP_PalGetReticle_C::RateList' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, ColorCurve) == 0x000408, "Member 'UWBP_PalGetReticle_C::ColorCurve' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, ShakeAnimArray) == 0x000410, "Member 'UWBP_PalGetReticle_C::ShakeAnimArray' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, IsSneakBonus) == 0x000420, "Member 'UWBP_PalGetReticle_C::IsSneakBonus' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, SneakBonusMsgID) == 0x000428, "Member 'UWBP_PalGetReticle_C::SneakBonusMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, CaptureRateMsgID) == 0x000438, "Member 'UWBP_PalGetReticle_C::CaptureRateMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, OriginalInitialCaptureRate) == 0x000448, "Member 'UWBP_PalGetReticle_C::OriginalInitialCaptureRate' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_C, ClearTimerHandle) == 0x000450, "Member 'UWBP_PalGetReticle_C::ClearTimerHandle' has a wrong offset!");

}

