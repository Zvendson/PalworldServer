#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_CommonButton_1.WBP_CommonButton_1_C
// 0x0098 (0x0310 - 0x0278)
class UWBP_CommonButton_1_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_NormalToFocus;                                 // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_OpenFocus;                                     // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Normal;                                        // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Main;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*              WBP_PalInvisibleButton;                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Is_First_Focus_Target;                             // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B9[0x7];                                      // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnHovered;                                         // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnhovered;                                       // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                    InitializeMsgID;                                   // 0x02E0(0x0010)(Edit, BlueprintVisible, NoDestructor)
	bool                                          OverrideHover;                                     // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F1[0x7];                                      // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          WWiseHoverAudio;                                   // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          UnhoverAKAudioEvent;                               // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          ClickAKAudioEvent;                                 // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void AnmEvent_Focus();
	void AnmEvent_Normal();
	void BndEvt__WBP_CommonButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_CommonButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_CommonButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Construct();
	void ExecuteUbergraph_WBP_CommonButton_1(int32 EntryPoint);
	void GetFocusTarget(class UWidget** Widget);
	void OnClicked__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnInitialized();
	void OnUnhovered__DelegateSignature();
	void SetText(const class FText& Text);
	void Setup(bool IsFirstFocusTarget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CommonButton_1_C">();
	}
	static class UWBP_CommonButton_1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CommonButton_1_C>();
	}
};
static_assert(alignof(UWBP_CommonButton_1_C) == 0x000008, "Wrong alignment on UWBP_CommonButton_1_C");
static_assert(sizeof(UWBP_CommonButton_1_C) == 0x000310, "Wrong size on UWBP_CommonButton_1_C");
static_assert(offsetof(UWBP_CommonButton_1_C, UberGraphFrame) == 0x000278, "Member 'UWBP_CommonButton_1_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CommonButton_1_C, Anm_NormalToFocus) == 0x000280, "Member 'UWBP_CommonButton_1_C::Anm_NormalToFocus' has a wrong offset!");
static_assert(offsetof(UWBP_CommonButton_1_C, Anm_OpenFocus) == 0x000288, "Member 'UWBP_CommonButton_1_C::Anm_OpenFocus' has a wrong offset!");
static_assert(offsetof(UWBP_CommonButton_1_C, Anm_Normal) == 0x000290, "Member 'UWBP_CommonButton_1_C::Anm_Normal' has a wrong offset!");
static_assert(offsetof(UWBP_CommonButton_1_C, Text_Main) == 0x000298, "Member 'UWBP_CommonButton_1_C::Text_Main' has a wrong offset!");
static_assert(offsetof(UWBP_CommonButton_1_C, WBP_PalInvisibleButton) == 0x0002A0, "Member 'UWBP_CommonButton_1_C::WBP_PalInvisibleButton' has a wrong offset!");
static_assert(offsetof(UWBP_CommonButton_1_C, OnClicked) == 0x0002A8, "Member 'UWBP_CommonButton_1_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UWBP_CommonButton_1_C, Is_First_Focus_Target) == 0x0002B8, "Member 'UWBP_CommonButton_1_C::Is_First_Focus_Target' has a wrong offset!");
static_assert(offsetof(UWBP_CommonButton_1_C, OnHovered) == 0x0002C0, "Member 'UWBP_CommonButton_1_C::OnHovered' has a wrong offset!");
static_assert(offsetof(UWBP_CommonButton_1_C, OnUnhovered) == 0x0002D0, "Member 'UWBP_CommonButton_1_C::OnUnhovered' has a wrong offset!");
static_assert(offsetof(UWBP_CommonButton_1_C, InitializeMsgID) == 0x0002E0, "Member 'UWBP_CommonButton_1_C::InitializeMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_CommonButton_1_C, OverrideHover) == 0x0002F0, "Member 'UWBP_CommonButton_1_C::OverrideHover' has a wrong offset!");
static_assert(offsetof(UWBP_CommonButton_1_C, WWiseHoverAudio) == 0x0002F8, "Member 'UWBP_CommonButton_1_C::WWiseHoverAudio' has a wrong offset!");
static_assert(offsetof(UWBP_CommonButton_1_C, UnhoverAKAudioEvent) == 0x000300, "Member 'UWBP_CommonButton_1_C::UnhoverAKAudioEvent' has a wrong offset!");
static_assert(offsetof(UWBP_CommonButton_1_C, ClickAKAudioEvent) == 0x000308, "Member 'UWBP_CommonButton_1_C::ClickAKAudioEvent' has a wrong offset!");

}

