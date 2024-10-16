#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "Pal_structs.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_IngameBossHP.WBP_IngameBossHP_C
// 0x00D0 (0x0348 - 0x0278)
class UWBP_IngameBossHP_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_BossDefeat;                                    // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Close;                                         // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Open;                                          // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UProgressBar*                           BossGaugeHP;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           BossGaugeHP_Back;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_C_380;                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_Num_HP_00;                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_Num_HP_01;                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BPPalTextBlock_ATK;                                // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BPPalTextBlock_DEF;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BPPalTextBlock_HP;                                 // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_PalCommonDetail;                            // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_145;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Base;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Frame;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Potencial;                                 // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_BossName;                                     // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_LvTitle;                                      // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_LvValue;                                      // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalElementIcon_C*                  WBP_PalElementIcon_Double_00;                      // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalElementIcon_C*                  WBP_PalElementIcon_Double_01;                      // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalElementIcon_C*                  WBP_PalElementIcon_Single;                         // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalUIDelayGaugeCalculator*             DelayGauge;                                        // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_IngameBossHP(int32 EntryPoint);
	void OnInitialized();
	void Set_Enable_Talent_Detail(bool IsEnable, class UPalIndividualCharacterParameter* Parameter);
	void SetBossName(const class FText& InText);
	void SetBossPrefix(const class FText& Text);
	void SetElement(EPalElementType Type1, EPalElementType Type2);
	void SetHP(int32 NowHP, int32 MaxHP);
	void SetLevel(int32 Level);
	void SetLevelVisibility(bool Visible);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IngameBossHP_C">();
	}
	static class UWBP_IngameBossHP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IngameBossHP_C>();
	}
};
static_assert(alignof(UWBP_IngameBossHP_C) == 0x000008, "Wrong alignment on UWBP_IngameBossHP_C");
static_assert(sizeof(UWBP_IngameBossHP_C) == 0x000348, "Wrong size on UWBP_IngameBossHP_C");
static_assert(offsetof(UWBP_IngameBossHP_C, UberGraphFrame) == 0x000278, "Member 'UWBP_IngameBossHP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_IngameBossHP_C, Anm_BossDefeat) == 0x000280, "Member 'UWBP_IngameBossHP_C::Anm_BossDefeat' has a wrong offset!");
static_assert(offsetof(UWBP_IngameBossHP_C, Anm_Close) == 0x000288, "Member 'UWBP_IngameBossHP_C::Anm_Close' has a wrong offset!");
static_assert(offsetof(UWBP_IngameBossHP_C, Anm_Open) == 0x000290, "Member 'UWBP_IngameBossHP_C::Anm_Open' has a wrong offset!");
static_assert(offsetof(UWBP_IngameBossHP_C, BossGaugeHP) == 0x000298, "Member 'UWBP_IngameBossHP_C::BossGaugeHP' has a wrong offset!");
static_assert(offsetof(UWBP_IngameBossHP_C, BossGaugeHP_Back) == 0x0002A0, "Member 'UWBP_IngameBossHP_C::BossGaugeHP_Back' has a wrong offset!");
static_assert(offsetof(UWBP_IngameBossHP_C, BP_PalTextBlock_C_380) == 0x0002A8, "Member 'UWBP_IngameBossHP_C::BP_PalTextBlock_C_380' has a wrong offset!");
static_assert(offsetof(UWBP_IngameBossHP_C, BP_PalTextBlock_Num_HP_00) == 0x0002B0, "Member 'UWBP_IngameBossHP_C::BP_PalTextBlock_Num_HP_00' has a wrong offset!");
static_assert(offsetof(UWBP_IngameBossHP_C, BP_PalTextBlock_Num_HP_01) == 0x0002B8, "Member 'UWBP_IngameBossHP_C::BP_PalTextBlock_Num_HP_01' has a wrong offset!");
static_assert(offsetof(UWBP_IngameBossHP_C, BPPalTextBlock_ATK) == 0x0002C0, "Member 'UWBP_IngameBossHP_C::BPPalTextBlock_ATK' has a wrong offset!");
static_assert(offsetof(UWBP_IngameBossHP_C, BPPalTextBlock_DEF) == 0x0002C8, "Member 'UWBP_IngameBossHP_C::BPPalTextBlock_DEF' has a wrong offset!");
static_assert(offsetof(UWBP_IngameBossHP_C, BPPalTextBlock_HP) == 0x0002D0, "Member 'UWBP_IngameBossHP_C::BPPalTextBlock_HP' has a wrong offset!");
static_assert(offsetof(UWBP_IngameBossHP_C, Canvas_PalCommonDetail) == 0x0002D8, "Member 'UWBP_IngameBossHP_C::Canvas_PalCommonDetail' has a wrong offset!");
static_assert(offsetof(UWBP_IngameBossHP_C, Image) == 0x0002E0, "Member 'UWBP_IngameBossHP_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_IngameBossHP_C, Image_1) == 0x0002E8, "Member 'UWBP_IngameBossHP_C::Image_1' has a wrong offset!");
static_assert(offsetof(UWBP_IngameBossHP_C, Image_145) == 0x0002F0, "Member 'UWBP_IngameBossHP_C::Image_145' has a wrong offset!");
static_assert(offsetof(UWBP_IngameBossHP_C, Image_Base) == 0x0002F8, "Member 'UWBP_IngameBossHP_C::Image_Base' has a wrong offset!");
static_assert(offsetof(UWBP_IngameBossHP_C, Image_Frame) == 0x000300, "Member 'UWBP_IngameBossHP_C::Image_Frame' has a wrong offset!");
static_assert(offsetof(UWBP_IngameBossHP_C, Overlay_Potencial) == 0x000308, "Member 'UWBP_IngameBossHP_C::Overlay_Potencial' has a wrong offset!");
static_assert(offsetof(UWBP_IngameBossHP_C, Text_BossName) == 0x000310, "Member 'UWBP_IngameBossHP_C::Text_BossName' has a wrong offset!");
static_assert(offsetof(UWBP_IngameBossHP_C, Text_LvTitle) == 0x000318, "Member 'UWBP_IngameBossHP_C::Text_LvTitle' has a wrong offset!");
static_assert(offsetof(UWBP_IngameBossHP_C, Text_LvValue) == 0x000320, "Member 'UWBP_IngameBossHP_C::Text_LvValue' has a wrong offset!");
static_assert(offsetof(UWBP_IngameBossHP_C, WBP_PalElementIcon_Double_00) == 0x000328, "Member 'UWBP_IngameBossHP_C::WBP_PalElementIcon_Double_00' has a wrong offset!");
static_assert(offsetof(UWBP_IngameBossHP_C, WBP_PalElementIcon_Double_01) == 0x000330, "Member 'UWBP_IngameBossHP_C::WBP_PalElementIcon_Double_01' has a wrong offset!");
static_assert(offsetof(UWBP_IngameBossHP_C, WBP_PalElementIcon_Single) == 0x000338, "Member 'UWBP_IngameBossHP_C::WBP_PalElementIcon_Single' has a wrong offset!");
static_assert(offsetof(UWBP_IngameBossHP_C, DelayGauge) == 0x000340, "Member 'UWBP_IngameBossHP_C::DelayGauge' has a wrong offset!");

}

