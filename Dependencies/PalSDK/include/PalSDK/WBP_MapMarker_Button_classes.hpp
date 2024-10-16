#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_MapMarker_Button.WBP_MapMarker_Button_C
// 0x0030 (0x02A8 - 0x0278)
class UWBP_MapMarker_Button_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_EnableToDisable;                               // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_NormalToFocus;                                 // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*              WBP_PalInvisibleButton;                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_MapMarker_Button_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_MapMarker_Button_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_MapMarker_Button_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_MapMarker_Button(int32 EntryPoint);
	void OnClicked__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MapMarker_Button_C">();
	}
	static class UWBP_MapMarker_Button_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MapMarker_Button_C>();
	}
};
static_assert(alignof(UWBP_MapMarker_Button_C) == 0x000008, "Wrong alignment on UWBP_MapMarker_Button_C");
static_assert(sizeof(UWBP_MapMarker_Button_C) == 0x0002A8, "Wrong size on UWBP_MapMarker_Button_C");
static_assert(offsetof(UWBP_MapMarker_Button_C, UberGraphFrame) == 0x000278, "Member 'UWBP_MapMarker_Button_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Button_C, Anm_EnableToDisable) == 0x000280, "Member 'UWBP_MapMarker_Button_C::Anm_EnableToDisable' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Button_C, Anm_NormalToFocus) == 0x000288, "Member 'UWBP_MapMarker_Button_C::Anm_NormalToFocus' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Button_C, WBP_PalInvisibleButton) == 0x000290, "Member 'UWBP_MapMarker_Button_C::WBP_PalInvisibleButton' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Button_C, OnClicked) == 0x000298, "Member 'UWBP_MapMarker_Button_C::OnClicked' has a wrong offset!");

}

