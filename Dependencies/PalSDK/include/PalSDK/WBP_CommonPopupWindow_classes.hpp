#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_CommonPopupWindow.WBP_CommonPopupWindow_C
// 0x0080 (0x02F8 - 0x0278)
class UWBP_CommonPopupWindow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Close;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Open;                                          // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalRichTextBlock_C*                 BP_PalRichTextBlock_Message;                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_RButton;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonButton_C*                    WBP_CommonButton_L;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonButton_C*                    WBP_CommonButton_R;                                // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonWindow_C*                 WBP_PalCommonWindow;                               // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    LeftButtonMsgID;                                   // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    RightButtonMsgID;                                  // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	FMulticastInlineDelegateProperty_             OnClickedLeftButton;                               // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickedRightButton;                              // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_CommonPopupWindow_WBP_CommonButton_L_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__WBP_CommonPopupWindow_WBP_CommonButton_L_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature();
	void BndEvt__WBP_CommonPopupWindow_WBP_CommonButton_R_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__WBP_CommonPopupWindow_WBP_CommonButton_R_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature();
	void ExecuteUbergraph_WBP_CommonPopupWindow(int32 EntryPoint);
	void GetLeftButton(class UCommonButtonBase** RightButton);
	void GetRightButton(class UCommonButtonBase** Button);
	void OnClickedLeftButton__DelegateSignature();
	void OnClickedRightButton__DelegateSignature();
	void OnInitialized();
	void OverrideLeftButtonText(const class FText& Text);
	void OverrideRightButtonText(const class FText& Text);
	void SetMainText(const class FText& Text);
	void SetOneButton(bool IsOneButton);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CommonPopupWindow_C">();
	}
	static class UWBP_CommonPopupWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CommonPopupWindow_C>();
	}
};
static_assert(alignof(UWBP_CommonPopupWindow_C) == 0x000008, "Wrong alignment on UWBP_CommonPopupWindow_C");
static_assert(sizeof(UWBP_CommonPopupWindow_C) == 0x0002F8, "Wrong size on UWBP_CommonPopupWindow_C");
static_assert(offsetof(UWBP_CommonPopupWindow_C, UberGraphFrame) == 0x000278, "Member 'UWBP_CommonPopupWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CommonPopupWindow_C, Anm_Close) == 0x000280, "Member 'UWBP_CommonPopupWindow_C::Anm_Close' has a wrong offset!");
static_assert(offsetof(UWBP_CommonPopupWindow_C, Anm_Open) == 0x000288, "Member 'UWBP_CommonPopupWindow_C::Anm_Open' has a wrong offset!");
static_assert(offsetof(UWBP_CommonPopupWindow_C, BP_PalRichTextBlock_Message) == 0x000290, "Member 'UWBP_CommonPopupWindow_C::BP_PalRichTextBlock_Message' has a wrong offset!");
static_assert(offsetof(UWBP_CommonPopupWindow_C, SizeBox_RButton) == 0x000298, "Member 'UWBP_CommonPopupWindow_C::SizeBox_RButton' has a wrong offset!");
static_assert(offsetof(UWBP_CommonPopupWindow_C, WBP_CommonButton_L) == 0x0002A0, "Member 'UWBP_CommonPopupWindow_C::WBP_CommonButton_L' has a wrong offset!");
static_assert(offsetof(UWBP_CommonPopupWindow_C, WBP_CommonButton_R) == 0x0002A8, "Member 'UWBP_CommonPopupWindow_C::WBP_CommonButton_R' has a wrong offset!");
static_assert(offsetof(UWBP_CommonPopupWindow_C, WBP_PalCommonWindow) == 0x0002B0, "Member 'UWBP_CommonPopupWindow_C::WBP_PalCommonWindow' has a wrong offset!");
static_assert(offsetof(UWBP_CommonPopupWindow_C, LeftButtonMsgID) == 0x0002B8, "Member 'UWBP_CommonPopupWindow_C::LeftButtonMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_CommonPopupWindow_C, RightButtonMsgID) == 0x0002C8, "Member 'UWBP_CommonPopupWindow_C::RightButtonMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_CommonPopupWindow_C, OnClickedLeftButton) == 0x0002D8, "Member 'UWBP_CommonPopupWindow_C::OnClickedLeftButton' has a wrong offset!");
static_assert(offsetof(UWBP_CommonPopupWindow_C, OnClickedRightButton) == 0x0002E8, "Member 'UWBP_CommonPopupWindow_C::OnClickedRightButton' has a wrong offset!");

}

