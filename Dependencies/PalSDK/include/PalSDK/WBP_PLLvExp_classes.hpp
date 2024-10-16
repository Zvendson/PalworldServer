#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_IndividualParameterBindWidget_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_PLLvExp.WBP_PLLvExp_C
// 0x0080 (0x0638 - 0x05B8)
class UWBP_PLLvExp_C final : public UWBP_IndividualParameterBindWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_PLLvExp_C;                      // 0x05B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Close;                                         // 0x05C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Open;                                          // 0x05C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UProgressBar*                           Gage_Exp_Back;                                     // 0x05D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           Gauge_Exp;                                         // 0x05D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GaugeBarPoint;                                     // 0x05E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Exp;                                          // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LvNum_C*                           WBP_LvNum;                                         // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        CloseAnimeDelay;                                   // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOpened;                                          // 0x0600(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_601[0x7];                                      // 0x0601(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DelayGaugeTimer;                                   // 0x0608(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DelayGaugeTime;                                    // 0x0610(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DelayGaugeProgressPerSecond;                       // 0x0618(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TargetPercent;                                     // 0x0620(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         TotalDIsplayExp;                                   // 0x0628(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CloseTimer;                                        // 0x0630(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnmEvent_Close_UI();
	void AnmEvent_Open_UI();
	void ExecuteUbergraph_WBP_PLLvExp(int32 EntryPoint);
	void Finished_45DAD3564BCF5FB025F120A933EEC011();
	void Finished_D0ED7FF7495A5D9266FC3DB1824EA6F6();
	void OnInitialized();
	void SetAddExpText(int64 Value);
	void Setup();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateExp(int64 AddExp, int64 OldExp, double NowExpRate);
	void UpdateGaugeEdgeImagePosition(double Percent);
	void UpdateLevel(int32 NewLevel);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PLLvExp_C">();
	}
	static class UWBP_PLLvExp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PLLvExp_C>();
	}
};
static_assert(alignof(UWBP_PLLvExp_C) == 0x000008, "Wrong alignment on UWBP_PLLvExp_C");
static_assert(sizeof(UWBP_PLLvExp_C) == 0x000638, "Wrong size on UWBP_PLLvExp_C");
static_assert(offsetof(UWBP_PLLvExp_C, UberGraphFrame_WBP_PLLvExp_C) == 0x0005B8, "Member 'UWBP_PLLvExp_C::UberGraphFrame_WBP_PLLvExp_C' has a wrong offset!");
static_assert(offsetof(UWBP_PLLvExp_C, Anm_Close) == 0x0005C0, "Member 'UWBP_PLLvExp_C::Anm_Close' has a wrong offset!");
static_assert(offsetof(UWBP_PLLvExp_C, Anm_Open) == 0x0005C8, "Member 'UWBP_PLLvExp_C::Anm_Open' has a wrong offset!");
static_assert(offsetof(UWBP_PLLvExp_C, Gage_Exp_Back) == 0x0005D0, "Member 'UWBP_PLLvExp_C::Gage_Exp_Back' has a wrong offset!");
static_assert(offsetof(UWBP_PLLvExp_C, Gauge_Exp) == 0x0005D8, "Member 'UWBP_PLLvExp_C::Gauge_Exp' has a wrong offset!");
static_assert(offsetof(UWBP_PLLvExp_C, GaugeBarPoint) == 0x0005E0, "Member 'UWBP_PLLvExp_C::GaugeBarPoint' has a wrong offset!");
static_assert(offsetof(UWBP_PLLvExp_C, Text_Exp) == 0x0005E8, "Member 'UWBP_PLLvExp_C::Text_Exp' has a wrong offset!");
static_assert(offsetof(UWBP_PLLvExp_C, WBP_LvNum) == 0x0005F0, "Member 'UWBP_PLLvExp_C::WBP_LvNum' has a wrong offset!");
static_assert(offsetof(UWBP_PLLvExp_C, CloseAnimeDelay) == 0x0005F8, "Member 'UWBP_PLLvExp_C::CloseAnimeDelay' has a wrong offset!");
static_assert(offsetof(UWBP_PLLvExp_C, IsOpened) == 0x000600, "Member 'UWBP_PLLvExp_C::IsOpened' has a wrong offset!");
static_assert(offsetof(UWBP_PLLvExp_C, DelayGaugeTimer) == 0x000608, "Member 'UWBP_PLLvExp_C::DelayGaugeTimer' has a wrong offset!");
static_assert(offsetof(UWBP_PLLvExp_C, DelayGaugeTime) == 0x000610, "Member 'UWBP_PLLvExp_C::DelayGaugeTime' has a wrong offset!");
static_assert(offsetof(UWBP_PLLvExp_C, DelayGaugeProgressPerSecond) == 0x000618, "Member 'UWBP_PLLvExp_C::DelayGaugeProgressPerSecond' has a wrong offset!");
static_assert(offsetof(UWBP_PLLvExp_C, TargetPercent) == 0x000620, "Member 'UWBP_PLLvExp_C::TargetPercent' has a wrong offset!");
static_assert(offsetof(UWBP_PLLvExp_C, TotalDIsplayExp) == 0x000628, "Member 'UWBP_PLLvExp_C::TotalDIsplayExp' has a wrong offset!");
static_assert(offsetof(UWBP_PLLvExp_C, CloseTimer) == 0x000630, "Member 'UWBP_PLLvExp_C::CloseTimer' has a wrong offset!");

}

