#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_IndividualParameterBindWidget_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_InGame_Match_HPPal.WBP_InGame_Match_HPPal_C
// 0x0050 (0x0608 - 0x05B8)
class UWBP_InGame_Match_HPPal_C final : public UWBP_IndividualParameterBindWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_InGame_Match_HPPal_C;           // 0x05B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Pinch;                                         // 0x05C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Death;                                         // 0x05C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Default;                                       // 0x05D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_PalIconBase;                                 // 0x05D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_HPGauge;                               // 0x05E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_HPGauge_Back;                          // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterIcon_C*          WBP_PalCommonCharacterIcon;                        // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalUIDelayGaugeCalculator*             DelayGauge;                                        // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       IndividualParam;                                   // 0x0600(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BindFromHandle(class UPalIndividualCharacterHandle* TargetHandle);
	void CheckState(double HPPercent, bool IsDead);
	void ExecuteUbergraph_WBP_InGame_Match_HPPal(int32 EntryPoint);
	void On_Update_HP_Binded(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP);
	void OnInitialized();
	void SetIsRival(bool IsRival);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InGame_Match_HPPal_C">();
	}
	static class UWBP_InGame_Match_HPPal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InGame_Match_HPPal_C>();
	}
};
static_assert(alignof(UWBP_InGame_Match_HPPal_C) == 0x000008, "Wrong alignment on UWBP_InGame_Match_HPPal_C");
static_assert(sizeof(UWBP_InGame_Match_HPPal_C) == 0x000608, "Wrong size on UWBP_InGame_Match_HPPal_C");
static_assert(offsetof(UWBP_InGame_Match_HPPal_C, UberGraphFrame_WBP_InGame_Match_HPPal_C) == 0x0005B8, "Member 'UWBP_InGame_Match_HPPal_C::UberGraphFrame_WBP_InGame_Match_HPPal_C' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Match_HPPal_C, Anm_Pinch) == 0x0005C0, "Member 'UWBP_InGame_Match_HPPal_C::Anm_Pinch' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Match_HPPal_C, Anm_Death) == 0x0005C8, "Member 'UWBP_InGame_Match_HPPal_C::Anm_Death' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Match_HPPal_C, Anm_Default) == 0x0005D0, "Member 'UWBP_InGame_Match_HPPal_C::Anm_Default' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Match_HPPal_C, Image_PalIconBase) == 0x0005D8, "Member 'UWBP_InGame_Match_HPPal_C::Image_PalIconBase' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Match_HPPal_C, ProgressBar_HPGauge) == 0x0005E0, "Member 'UWBP_InGame_Match_HPPal_C::ProgressBar_HPGauge' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Match_HPPal_C, ProgressBar_HPGauge_Back) == 0x0005E8, "Member 'UWBP_InGame_Match_HPPal_C::ProgressBar_HPGauge_Back' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Match_HPPal_C, WBP_PalCommonCharacterIcon) == 0x0005F0, "Member 'UWBP_InGame_Match_HPPal_C::WBP_PalCommonCharacterIcon' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Match_HPPal_C, DelayGauge) == 0x0005F8, "Member 'UWBP_InGame_Match_HPPal_C::DelayGauge' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Match_HPPal_C, IndividualParam) == 0x000600, "Member 'UWBP_InGame_Match_HPPal_C::IndividualParam' has a wrong offset!");

}

