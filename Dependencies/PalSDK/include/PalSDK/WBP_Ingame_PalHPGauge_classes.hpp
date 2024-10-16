#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "WBP_IndividualParameterBindWidget_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C
// 0x0140 (0x06F8 - 0x05B8)
class UWBP_Ingame_PalHPGauge_C final : public UWBP_IndividualParameterBindWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_Ingame_PalHPGauge_C;            // 0x05B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_KeyGuideAttentionLOOP;                         // 0x05C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_PalActive;                                     // 0x05C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_HoldOut;                                       // 0x05D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_HoldIn;                                        // 0x05D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_PalSelect_R;                                   // 0x05E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_PalSelect_L;                                   // 0x05E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BPPalTextBlock_SkillCT;                            // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_HP;                                         // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_PalStatus;                                  // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_Slot_Center;                                // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_SlotL1;                                     // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_SlotL2;                                     // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_SlotR1;                                     // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_SlotR2;                                     // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ActiveCircle_Center;                         // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ActiveCircle_L1;                             // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ActiveCircle_L2;                             // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ActiveCircle_R1;                             // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ActiveCircle_R2;                             // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_SkillCT;                                   // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_HPGauge;                               // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_HPGauge_Back;                          // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_LvValue;                                      // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_PalName;                                      // 0x0678(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlot_C*          WBP_PalCommonCharacterSlot;                        // 0x0680(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlot_C*          WBP_PalCommonCharacterSlot_L;                      // 0x0688(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlot_C*          WBP_PalCommonCharacterSlot_L2;                     // 0x0690(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlot_C*          WBP_PalCommonCharacterSlot_R;                      // 0x0698(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlot_C*          WBP_PalCommonCharacterSlot_R2;                     // 0x06A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalElementIcon_C*                  WBP_PalElementIcon_Double_00;                      // 0x06A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalElementIcon_C*                  WBP_PalElementIcon_Double_01;                      // 0x06B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalElementIcon_C*                  WBP_PalElementIcon_Single;                         // 0x06B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerInputKeyGuideIcon_C*         WBP_PlayerInputKeyGuideIcon_Decrement_1;           // 0x06C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerInputKeyGuideIcon_C*         WBP_PlayerInputKeyGuideIcon_Increment;             // 0x06C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerInputKeyGuideIcon_C*         WBP_PlayerInputKeyGuideIcon_ThrowPal;              // 0x06D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalUIDelayGaugeCalculator*             DelayHPGauge;                                      // 0x06D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         CachedActivatedOtomoID;                            // 0x06E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CachedSelectedOtomoIndex;                          // 0x06E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEquipedOtomoThrowWeapon;                         // 0x06E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsThrowPalActiveAnimeFinished;                     // 0x06E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EA[0x6];                                      // 0x06EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalPartnerSkillParameterComponent*     CurrentPartnerSkillComponent;                      // 0x06F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void AnmEvent_EnableSummonPalGuide(bool EnableFlag);
	void AnmEvent_NextOtomo();
	void AnmEvent_OtomoActive();
	void AnmEvent_OtomoDeactivate();
	void AnmEvent_PrevOtomo();
	void AnmEvent_ThrowActivate();
	void AnmEvent_ThrowOtomoDeactive();
	void BindPartnerSkillCTTime(class APalCharacter* Character);
	void CustomEvent(int32 AddLevel, int32 NowLevel);
	void ExecuteUbergraph_WBP_Ingame_PalHPGauge(int32 EntryPoint);
	void Finished_1811421C440B0864689BD0B33F2F9D51();
	void Finished_1F59E19C478A6C6286266A9C072DA24B();
	void Finished_9B82422440F7C97D278AB2B15E642EE3();
	void GetNextOtomoSlot(class UPalIndividualCharacterSlot** Slot_0, bool* IsEmpty);
	void GetPrevOtomoSlot(class UPalIndividualCharacterSlot** Slot_0, bool* IsEmpty);
	void On_Update_Otomo_Index();
	void On_Update_Otomo_Slot(int32 SlotIndex, class UPalIndividualCharacterHandle* LastHandle);
	void OnActivatedOtomo();
	void OnChangedWeapon(class APalWeaponBase* Weapon);
	void OnCoolEnd();
	void OnCoolStart();
	void OnCTTimeUpdate(const struct FFixedPoint& Now, const struct FFixedPoint& Max);
	void OnDeactivatedOtomo();
	void OnDecrementedOtomo_FromController();
	void OnEndAim();
	void OnIncrementedOtomo_FromController();
	void OnInitialized();
	void OnSetup_AfterCreatedPlayer();
	void OnStartAim();
	void Setup();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UnbindPartnerSkill();
	void Update_Level_Binded(int32 NewLevel);
	void Update_Otomo_List();
	void UpdateHP_Binded(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP);
	void UpdateNickName_Binded(const class FString& NewNickName);
	void SetElementType(EPalElementType Type1, EPalElementType Type2);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Ingame_PalHPGauge_C">();
	}
	static class UWBP_Ingame_PalHPGauge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Ingame_PalHPGauge_C>();
	}
};
static_assert(alignof(UWBP_Ingame_PalHPGauge_C) == 0x000008, "Wrong alignment on UWBP_Ingame_PalHPGauge_C");
static_assert(sizeof(UWBP_Ingame_PalHPGauge_C) == 0x0006F8, "Wrong size on UWBP_Ingame_PalHPGauge_C");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, UberGraphFrame_WBP_Ingame_PalHPGauge_C) == 0x0005B8, "Member 'UWBP_Ingame_PalHPGauge_C::UberGraphFrame_WBP_Ingame_PalHPGauge_C' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, Anm_KeyGuideAttentionLOOP) == 0x0005C0, "Member 'UWBP_Ingame_PalHPGauge_C::Anm_KeyGuideAttentionLOOP' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, Anm_PalActive) == 0x0005C8, "Member 'UWBP_Ingame_PalHPGauge_C::Anm_PalActive' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, Anm_HoldOut) == 0x0005D0, "Member 'UWBP_Ingame_PalHPGauge_C::Anm_HoldOut' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, Anm_HoldIn) == 0x0005D8, "Member 'UWBP_Ingame_PalHPGauge_C::Anm_HoldIn' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, Anm_PalSelect_R) == 0x0005E0, "Member 'UWBP_Ingame_PalHPGauge_C::Anm_PalSelect_R' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, Anm_PalSelect_L) == 0x0005E8, "Member 'UWBP_Ingame_PalHPGauge_C::Anm_PalSelect_L' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, BPPalTextBlock_SkillCT) == 0x0005F0, "Member 'UWBP_Ingame_PalHPGauge_C::BPPalTextBlock_SkillCT' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, Canvas_HP) == 0x0005F8, "Member 'UWBP_Ingame_PalHPGauge_C::Canvas_HP' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, Canvas_PalStatus) == 0x000600, "Member 'UWBP_Ingame_PalHPGauge_C::Canvas_PalStatus' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, Canvas_Slot_Center) == 0x000608, "Member 'UWBP_Ingame_PalHPGauge_C::Canvas_Slot_Center' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, Canvas_SlotL1) == 0x000610, "Member 'UWBP_Ingame_PalHPGauge_C::Canvas_SlotL1' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, Canvas_SlotL2) == 0x000618, "Member 'UWBP_Ingame_PalHPGauge_C::Canvas_SlotL2' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, Canvas_SlotR1) == 0x000620, "Member 'UWBP_Ingame_PalHPGauge_C::Canvas_SlotR1' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, Canvas_SlotR2) == 0x000628, "Member 'UWBP_Ingame_PalHPGauge_C::Canvas_SlotR2' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, Image_ActiveCircle_Center) == 0x000630, "Member 'UWBP_Ingame_PalHPGauge_C::Image_ActiveCircle_Center' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, Image_ActiveCircle_L1) == 0x000638, "Member 'UWBP_Ingame_PalHPGauge_C::Image_ActiveCircle_L1' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, Image_ActiveCircle_L2) == 0x000640, "Member 'UWBP_Ingame_PalHPGauge_C::Image_ActiveCircle_L2' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, Image_ActiveCircle_R1) == 0x000648, "Member 'UWBP_Ingame_PalHPGauge_C::Image_ActiveCircle_R1' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, Image_ActiveCircle_R2) == 0x000650, "Member 'UWBP_Ingame_PalHPGauge_C::Image_ActiveCircle_R2' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, Overlay_SkillCT) == 0x000658, "Member 'UWBP_Ingame_PalHPGauge_C::Overlay_SkillCT' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, ProgressBar_HPGauge) == 0x000660, "Member 'UWBP_Ingame_PalHPGauge_C::ProgressBar_HPGauge' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, ProgressBar_HPGauge_Back) == 0x000668, "Member 'UWBP_Ingame_PalHPGauge_C::ProgressBar_HPGauge_Back' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, Text_LvValue) == 0x000670, "Member 'UWBP_Ingame_PalHPGauge_C::Text_LvValue' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, Text_PalName) == 0x000678, "Member 'UWBP_Ingame_PalHPGauge_C::Text_PalName' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, WBP_PalCommonCharacterSlot) == 0x000680, "Member 'UWBP_Ingame_PalHPGauge_C::WBP_PalCommonCharacterSlot' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, WBP_PalCommonCharacterSlot_L) == 0x000688, "Member 'UWBP_Ingame_PalHPGauge_C::WBP_PalCommonCharacterSlot_L' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, WBP_PalCommonCharacterSlot_L2) == 0x000690, "Member 'UWBP_Ingame_PalHPGauge_C::WBP_PalCommonCharacterSlot_L2' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, WBP_PalCommonCharacterSlot_R) == 0x000698, "Member 'UWBP_Ingame_PalHPGauge_C::WBP_PalCommonCharacterSlot_R' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, WBP_PalCommonCharacterSlot_R2) == 0x0006A0, "Member 'UWBP_Ingame_PalHPGauge_C::WBP_PalCommonCharacterSlot_R2' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, WBP_PalElementIcon_Double_00) == 0x0006A8, "Member 'UWBP_Ingame_PalHPGauge_C::WBP_PalElementIcon_Double_00' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, WBP_PalElementIcon_Double_01) == 0x0006B0, "Member 'UWBP_Ingame_PalHPGauge_C::WBP_PalElementIcon_Double_01' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, WBP_PalElementIcon_Single) == 0x0006B8, "Member 'UWBP_Ingame_PalHPGauge_C::WBP_PalElementIcon_Single' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, WBP_PlayerInputKeyGuideIcon_Decrement_1) == 0x0006C0, "Member 'UWBP_Ingame_PalHPGauge_C::WBP_PlayerInputKeyGuideIcon_Decrement_1' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, WBP_PlayerInputKeyGuideIcon_Increment) == 0x0006C8, "Member 'UWBP_Ingame_PalHPGauge_C::WBP_PlayerInputKeyGuideIcon_Increment' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, WBP_PlayerInputKeyGuideIcon_ThrowPal) == 0x0006D0, "Member 'UWBP_Ingame_PalHPGauge_C::WBP_PlayerInputKeyGuideIcon_ThrowPal' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, DelayHPGauge) == 0x0006D8, "Member 'UWBP_Ingame_PalHPGauge_C::DelayHPGauge' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, CachedActivatedOtomoID) == 0x0006E0, "Member 'UWBP_Ingame_PalHPGauge_C::CachedActivatedOtomoID' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, CachedSelectedOtomoIndex) == 0x0006E4, "Member 'UWBP_Ingame_PalHPGauge_C::CachedSelectedOtomoIndex' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, IsEquipedOtomoThrowWeapon) == 0x0006E8, "Member 'UWBP_Ingame_PalHPGauge_C::IsEquipedOtomoThrowWeapon' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, IsThrowPalActiveAnimeFinished) == 0x0006E9, "Member 'UWBP_Ingame_PalHPGauge_C::IsThrowPalActiveAnimeFinished' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalHPGauge_C, CurrentPartnerSkillComponent) == 0x0006F0, "Member 'UWBP_Ingame_PalHPGauge_C::CurrentPartnerSkillComponent' has a wrong offset!");

}

