#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"
#include "EPalBoxHoveredSlotType_structs.hpp"
#include "Pal_structs.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C
// 0x01B8 (0x0430 - 0x0278)
class UWBP_IngameMenu_PalBox_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Close;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Open;                                          // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_PalBox;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_PalCamp;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                CloseButton;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_PageControlInternal;                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_BaseCampName;                                 // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_BoxName;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCharacterScrollList_C*          WBP_BaseCampPalList;                               // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCharacterScrollList_C*          WBP_BoxPalScrollList;                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonButton_1_C*                  WBP_CommonButton_1;                                // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_PalBox_PalDetail_C*     WBP_IngameMenu_PalBox_PalDetail;                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_PalBox_PalList_C*       WBP_IngameMenu_PalBox_PalList_0;                   // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_PalBox_PalList_C*       WBP_IngameMenu_PalBox_PalList_1;                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_PalBox_PalList_C*       WBP_IngameMenu_PalBox_PalList_2;                   // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_PalBox_PalList_C*       WBP_IngameMenu_PalBox_PalList_3;                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_PalBox_PalList_C*       WBP_IngameMenu_PalBox_PalList_4;                   // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_btn_C*                        WBP_Menu_btn;                                      // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_IngameMenu_PalBox_PalList_C*> PartyPalDetails;                                   // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             OnClickedPartySlot;                                // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UWBP_IngameMenu_PalBox_PageControl_C*> PalBoxPageSelectImage;                             // 0x0330(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         LastPalBoxPageNum;                                 // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_344[0x4];                                      // 0x0344(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClickedPalBoxPal;                                // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickedBaseCampPal;                              // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickedPalBoxNextPage;                           // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickedPalBoxPrevPage;                           // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickedCloseButton;                              // 0x0388(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnAnySlotHovered;                                  // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnAnySlotUnhovered;                                // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickedLooseButton;                              // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnHoveredPartySlot;                                // 0x03C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnHoveredBoxSlot;                                  // 0x03D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnHoveredWorkerSlot;                               // 0x03E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                    BoxNameMsgID;                                      // 0x03F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	FMulticastInlineDelegateProperty_             OnRightClickedBoxSlot;                             // 0x0408(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRightClickedWorkerSlot;                          // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsEnableDragDropControl;                          // 0x0428(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnmEvent_Close();
	void AnmEvent_Open();
	void BndEvt__WBP_InGameMainMenu_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
	void BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_0_OnCreatedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* CreatedSlot);
	void BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_10_OnRightClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_3_OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
	void BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_5_OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_8_OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_1_OnCreatedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* CreatedSlot);
	void BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_2_OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
	void BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_4_OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_7_OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_9_OnRightClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void BndEvt__WBP_IngameMenu_PalBox_WBP_CommonButton_1_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature();
	void Construct();
	void CreatePageControlWidget();
	class UWidget* CustomNavi_ToSortButton(EUINavigation Navigation_0);
	void Display_Pal_Detail(class UPalIndividualCharacterSlot* Slot_0, EPalBoxHoveredSlotType SlotType);
	class UWidget* DoCustomNavigation(EUINavigation Navigation_0);
	void ExecuteUbergraph_WBP_IngameMenu_PalBox(int32 EntryPoint);
	void FocusToBoxTopSlot();
	void FocusToPartyTopSlot();
	void FocusToWorkerTopSlot();
	void GetFocusTarget(class UWidget** TargetWidget);
	void OnAnySlotHovered__DelegateSignature(class UPalIndividualCharacterSlot* Slot_0);
	void OnAnySlotUnhovered__DelegateSignature();
	void OnClickedBaseCampPal__DelegateSignature(class UPalIndividualCharacterSlot* Slot_0, EPalItemSlotPressType PressType);
	void OnClickedCloseButton__DelegateSignature();
	void OnClickedLooseButton__DelegateSignature();
	void OnClickedPalBoxNextPage__DelegateSignature();
	void OnClickedPalBoxPal__DelegateSignature(class UPalIndividualCharacterSlot* Slot_0, EPalItemSlotPressType PressType);
	void OnClickedPalBoxPrevPage__DelegateSignature();
	void OnClickedPartySlot__DelegateSignature(class UPalIndividualCharacterSlot* TargetSlot);
	void OnClickedPartySlotInternal(class UPalIndividualCharacterSlot* TargetSlot);
	void OnHoveredBoxSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot_0);
	void OnHoveredPartySlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot_0);
	void OnHoveredPartySlot_Internal(class UPalIndividualCharacterSlot* Slot_0);
	void OnHoveredWorkerSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot_0);
	void OnInitialized();
	void OnRightClickedBoxSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot_0);
	void OnRightClickedWorkerSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot_0);
	void OnUnhoveredPartySlot_Internal();
	void SetBaseCampPalList(TArray<class UPalIndividualCharacterSlot*>& Slots);
	void SetCurrentPalBoxPageNum(int32 PageNum);
	void SetEnableDragDrop(bool bIsEnableDragDrop);
	void SetPalBoxList(TArray<class UPalIndividualCharacterSlot*>& TargetSlots, int32 PageNum);
	void Setup();
	void Setup_Party_Pal();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IngameMenu_PalBox_C">();
	}
	static class UWBP_IngameMenu_PalBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IngameMenu_PalBox_C>();
	}
};
static_assert(alignof(UWBP_IngameMenu_PalBox_C) == 0x000008, "Wrong alignment on UWBP_IngameMenu_PalBox_C");
static_assert(sizeof(UWBP_IngameMenu_PalBox_C) == 0x000430, "Wrong size on UWBP_IngameMenu_PalBox_C");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, UberGraphFrame) == 0x000278, "Member 'UWBP_IngameMenu_PalBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, Anm_Close) == 0x000280, "Member 'UWBP_IngameMenu_PalBox_C::Anm_Close' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, Anm_Open) == 0x000288, "Member 'UWBP_IngameMenu_PalBox_C::Anm_Open' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, Canvas_PalBox) == 0x000290, "Member 'UWBP_IngameMenu_PalBox_C::Canvas_PalBox' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, Canvas_PalCamp) == 0x000298, "Member 'UWBP_IngameMenu_PalBox_C::Canvas_PalCamp' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, CloseButton) == 0x0002A0, "Member 'UWBP_IngameMenu_PalBox_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, HorizontalBox_PageControlInternal) == 0x0002A8, "Member 'UWBP_IngameMenu_PalBox_C::HorizontalBox_PageControlInternal' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, Text_BaseCampName) == 0x0002B0, "Member 'UWBP_IngameMenu_PalBox_C::Text_BaseCampName' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, Text_BoxName) == 0x0002B8, "Member 'UWBP_IngameMenu_PalBox_C::Text_BoxName' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, WBP_BaseCampPalList) == 0x0002C0, "Member 'UWBP_IngameMenu_PalBox_C::WBP_BaseCampPalList' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, WBP_BoxPalScrollList) == 0x0002C8, "Member 'UWBP_IngameMenu_PalBox_C::WBP_BoxPalScrollList' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, WBP_CommonButton_1) == 0x0002D0, "Member 'UWBP_IngameMenu_PalBox_C::WBP_CommonButton_1' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, WBP_IngameMenu_PalBox_PalDetail) == 0x0002D8, "Member 'UWBP_IngameMenu_PalBox_C::WBP_IngameMenu_PalBox_PalDetail' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, WBP_IngameMenu_PalBox_PalList_0) == 0x0002E0, "Member 'UWBP_IngameMenu_PalBox_C::WBP_IngameMenu_PalBox_PalList_0' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, WBP_IngameMenu_PalBox_PalList_1) == 0x0002E8, "Member 'UWBP_IngameMenu_PalBox_C::WBP_IngameMenu_PalBox_PalList_1' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, WBP_IngameMenu_PalBox_PalList_2) == 0x0002F0, "Member 'UWBP_IngameMenu_PalBox_C::WBP_IngameMenu_PalBox_PalList_2' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, WBP_IngameMenu_PalBox_PalList_3) == 0x0002F8, "Member 'UWBP_IngameMenu_PalBox_C::WBP_IngameMenu_PalBox_PalList_3' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, WBP_IngameMenu_PalBox_PalList_4) == 0x000300, "Member 'UWBP_IngameMenu_PalBox_C::WBP_IngameMenu_PalBox_PalList_4' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, WBP_Menu_btn) == 0x000308, "Member 'UWBP_IngameMenu_PalBox_C::WBP_Menu_btn' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, PartyPalDetails) == 0x000310, "Member 'UWBP_IngameMenu_PalBox_C::PartyPalDetails' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, OnClickedPartySlot) == 0x000320, "Member 'UWBP_IngameMenu_PalBox_C::OnClickedPartySlot' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, PalBoxPageSelectImage) == 0x000330, "Member 'UWBP_IngameMenu_PalBox_C::PalBoxPageSelectImage' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, LastPalBoxPageNum) == 0x000340, "Member 'UWBP_IngameMenu_PalBox_C::LastPalBoxPageNum' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, OnClickedPalBoxPal) == 0x000348, "Member 'UWBP_IngameMenu_PalBox_C::OnClickedPalBoxPal' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, OnClickedBaseCampPal) == 0x000358, "Member 'UWBP_IngameMenu_PalBox_C::OnClickedBaseCampPal' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, OnClickedPalBoxNextPage) == 0x000368, "Member 'UWBP_IngameMenu_PalBox_C::OnClickedPalBoxNextPage' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, OnClickedPalBoxPrevPage) == 0x000378, "Member 'UWBP_IngameMenu_PalBox_C::OnClickedPalBoxPrevPage' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, OnClickedCloseButton) == 0x000388, "Member 'UWBP_IngameMenu_PalBox_C::OnClickedCloseButton' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, OnAnySlotHovered) == 0x000398, "Member 'UWBP_IngameMenu_PalBox_C::OnAnySlotHovered' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, OnAnySlotUnhovered) == 0x0003A8, "Member 'UWBP_IngameMenu_PalBox_C::OnAnySlotUnhovered' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, OnClickedLooseButton) == 0x0003B8, "Member 'UWBP_IngameMenu_PalBox_C::OnClickedLooseButton' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, OnHoveredPartySlot) == 0x0003C8, "Member 'UWBP_IngameMenu_PalBox_C::OnHoveredPartySlot' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, OnHoveredBoxSlot) == 0x0003D8, "Member 'UWBP_IngameMenu_PalBox_C::OnHoveredBoxSlot' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, OnHoveredWorkerSlot) == 0x0003E8, "Member 'UWBP_IngameMenu_PalBox_C::OnHoveredWorkerSlot' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, BoxNameMsgID) == 0x0003F8, "Member 'UWBP_IngameMenu_PalBox_C::BoxNameMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, OnRightClickedBoxSlot) == 0x000408, "Member 'UWBP_IngameMenu_PalBox_C::OnRightClickedBoxSlot' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, OnRightClickedWorkerSlot) == 0x000418, "Member 'UWBP_IngameMenu_PalBox_C::OnRightClickedWorkerSlot' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_C, bIsEnableDragDropControl) == 0x000428, "Member 'UWBP_IngameMenu_PalBox_C::bIsEnableDragDropControl' has a wrong offset!");

}

