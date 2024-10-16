#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "Pal_structs.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_Paldex_List.WBP_Paldex_List_C
// 0x00E8 (0x0360 - 0x0278)
class UWBP_Paldex_List_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_EmptyNormalToFocus;                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_NormalToFocus;                                 // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_NotCapture;                                    // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Normal;                                        // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Focus;                                         // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_DexNo;                               // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBox_0;                                 // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_IndexTitle;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_IndexValue_1;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_IndexValue_10;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_IndexValue_100;                               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_PalName;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_PalName_Center;                               // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Suffix;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_NewDot_C*                 WBP_MainMenu_NewDot;                               // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_StatusElement_C*      WBP_MainMenu_Pal_StatusElement;                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_StatusElement_C*      WBP_MainMenu_Pal_StatusElement_1;                  // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterIcon_C*          WBP_PalCommonCharacterIcon;                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*              WBP_PalInvisibleButton;                            // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnHovered;                                         // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   ChachedBaseCharacterID;                            // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsNotCaptured;                                     // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_331[0x7];                                      // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        NotCapturedFraction;                               // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bEnableFocusAnim;                                  // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_351[0x3];                                      // 0x0351(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   BindedSkinName;                                    // 0x0354(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnmEvent_Focus();
	void AnmEvent_NotCapture();
	void AnmEvent_Unfocus();
	void BndEvt__WBP_Paldex_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Paldex_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Paldex_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Construct();
	void ExecuteUbergraph_WBP_Paldex_List(int32 EntryPoint);
	void Focus();
	void OnClicked__DelegateSignature(class FName CharacterID, class UWBP_Paldex_List_C* Widget);
	void OnClickEvent();
	void OnHovered__DelegateSignature(class FName CharacterID, class UWBP_Paldex_List_C* SelfWidget);
	void Setup(const struct FPalUIPaldex_DisplayInfo& DisplayInfo);
	void Setup_Captured(const struct FPalUIPaldex_DisplayInfo& DisplayInfo);
	void Setup_Encounted(const struct FPalUIPaldex_DisplayInfo& DisplayInfo);
	void Setup_NotEncounted(const struct FPalUIPaldex_DisplayInfo& DisplayInfo);
	void SetupByCharacterID(class FName CharacterID);
	void SetupBySimpleText(const class FText& InText);
	void SetupForSkinData(class FName SkinName, TSoftObjectPtr<class UTexture2D> Texture, const class FText& LocalizedSkinNameText);
	void SetVisibilityNewMark(ESlateVisibility NewVisibility);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Paldex_List_C">();
	}
	static class UWBP_Paldex_List_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Paldex_List_C>();
	}
};
static_assert(alignof(UWBP_Paldex_List_C) == 0x000008, "Wrong alignment on UWBP_Paldex_List_C");
static_assert(sizeof(UWBP_Paldex_List_C) == 0x000360, "Wrong size on UWBP_Paldex_List_C");
static_assert(offsetof(UWBP_Paldex_List_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Paldex_List_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_List_C, Anm_EmptyNormalToFocus) == 0x000280, "Member 'UWBP_Paldex_List_C::Anm_EmptyNormalToFocus' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_List_C, Anm_NormalToFocus) == 0x000288, "Member 'UWBP_Paldex_List_C::Anm_NormalToFocus' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_List_C, Anm_NotCapture) == 0x000290, "Member 'UWBP_Paldex_List_C::Anm_NotCapture' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_List_C, Anm_Normal) == 0x000298, "Member 'UWBP_Paldex_List_C::Anm_Normal' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_List_C, Anm_Focus) == 0x0002A0, "Member 'UWBP_Paldex_List_C::Anm_Focus' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_List_C, HorizontalBox_DexNo) == 0x0002A8, "Member 'UWBP_Paldex_List_C::HorizontalBox_DexNo' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_List_C, InvalidationBox_0) == 0x0002B0, "Member 'UWBP_Paldex_List_C::InvalidationBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_List_C, Text_IndexTitle) == 0x0002B8, "Member 'UWBP_Paldex_List_C::Text_IndexTitle' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_List_C, Text_IndexValue_1) == 0x0002C0, "Member 'UWBP_Paldex_List_C::Text_IndexValue_1' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_List_C, Text_IndexValue_10) == 0x0002C8, "Member 'UWBP_Paldex_List_C::Text_IndexValue_10' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_List_C, Text_IndexValue_100) == 0x0002D0, "Member 'UWBP_Paldex_List_C::Text_IndexValue_100' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_List_C, Text_PalName) == 0x0002D8, "Member 'UWBP_Paldex_List_C::Text_PalName' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_List_C, Text_PalName_Center) == 0x0002E0, "Member 'UWBP_Paldex_List_C::Text_PalName_Center' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_List_C, Text_Suffix) == 0x0002E8, "Member 'UWBP_Paldex_List_C::Text_Suffix' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_List_C, WBP_MainMenu_NewDot) == 0x0002F0, "Member 'UWBP_Paldex_List_C::WBP_MainMenu_NewDot' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_List_C, WBP_MainMenu_Pal_StatusElement) == 0x0002F8, "Member 'UWBP_Paldex_List_C::WBP_MainMenu_Pal_StatusElement' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_List_C, WBP_MainMenu_Pal_StatusElement_1) == 0x000300, "Member 'UWBP_Paldex_List_C::WBP_MainMenu_Pal_StatusElement_1' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_List_C, WBP_PalCommonCharacterIcon) == 0x000308, "Member 'UWBP_Paldex_List_C::WBP_PalCommonCharacterIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_List_C, WBP_PalInvisibleButton) == 0x000310, "Member 'UWBP_Paldex_List_C::WBP_PalInvisibleButton' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_List_C, OnHovered) == 0x000318, "Member 'UWBP_Paldex_List_C::OnHovered' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_List_C, ChachedBaseCharacterID) == 0x000328, "Member 'UWBP_Paldex_List_C::ChachedBaseCharacterID' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_List_C, IsNotCaptured) == 0x000330, "Member 'UWBP_Paldex_List_C::IsNotCaptured' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_List_C, NotCapturedFraction) == 0x000338, "Member 'UWBP_Paldex_List_C::NotCapturedFraction' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_List_C, OnClicked) == 0x000340, "Member 'UWBP_Paldex_List_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_List_C, bEnableFocusAnim) == 0x000350, "Member 'UWBP_Paldex_List_C::bEnableFocusAnim' has a wrong offset!");
static_assert(offsetof(UWBP_Paldex_List_C, BindedSkinName) == 0x000354, "Member 'UWBP_Paldex_List_C::BindedSkinName' has a wrong offset!");

}

