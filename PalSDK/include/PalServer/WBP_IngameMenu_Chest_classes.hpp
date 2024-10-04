#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"
#include "Pal_structs.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_IngameMenu_Chest.WBP_IngameMenu_Chest_C
// 0x00F0 (0x0368 - 0x0278)
class UWBP_IngameMenu_Chest_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Canvas_Inventory;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_TargetContainer;                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_TargetContainerName;                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_btn_C*                        WBP_Menu_btn;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*              WBP_PalInvisibleButton_QuickMove;                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*              WBP_PalInvisibleButton_Sort_Inventory;             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*              WBP_PalInvisibleButton_Sort_TargetContainer;       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalItemScrollList_C*               WBP_PalItemScrollList;                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalPlayerInventoryScrollList_C*    WBP_PalPlayerInventoryScrollList;                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerInventoryWeightInfo_C*       WBP_PlayerInventoryWeightInfo;                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalInventoryModel_C*                Model;                                             // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedInventorySortButton;                      // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickedQuickMoveButton;                          // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickedTargetContainerSortButton;                // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnHoveredInventorySlot;                            // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnhoveredInventorySlot;                          // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnHoveredTargetContainerSlot;                      // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnhoveredTargetContainerSlot;                    // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickedCloseButton;                              // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickedPreferenceButton;                         // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_IngameMenu_Chest_WBP_Menu_btn_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature();
	void BndEvt__WBP_IngameMenu_Chest_WBP_PalInvisibleButton_QuickMove_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_IngameMenu_Chest_WBP_PalInvisibleButton_Sort_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_IngameMenu_Chest_WBP_PalInvisibleButton_Sort_TargetContainer_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_IngameMenu_Chest_WBP_PalItemScrollList_K2Node_ComponentBoundEvent_3_OnHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* buttonBase);
	void BndEvt__WBP_IngameMenu_Chest_WBP_PalItemScrollList_K2Node_ComponentBoundEvent_6_OnEndHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* buttonBase);
	void BndEvt__WBP_IngameMenu_Chest_WBP_PalPlayerInventoryScrollList_K2Node_ComponentBoundEvent_4_OnHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* buttonBase);
	void BndEvt__WBP_IngameMenu_Chest_WBP_PalPlayerInventoryScrollList_K2Node_ComponentBoundEvent_5_OnEndHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* buttonBase);
	void Construct();
	class UWidget* CustomNavi_ToCloseButton(EUINavigation Navigation_0);
	class UWidget* CustomNavi_ToPreferenceOrCloseButton(EUINavigation Navigation_0);
	class UWidget* CustomNavi_ToTargetContainerSortButton(EUINavigation Navigation_0);
	void ExecuteUbergraph_WBP_IngameMenu_Chest(int32 EntryPoint);
	void FilteringInventoryByInventoryType(TArray<EPalPlayerInventoryType>& InventoryType);
	void GetInventoryLastHoveredFocusTarget(class UWidget** Widget);
	void GetInventoryTopFocustTarget(class UWidget** FocusTarget);
	void GetTargetContainerLastHoveredFocusTarget(class UWidget** Widget);
	void GetTargetContainerTopFocustTarget(class UWidget** FocusTarget);
	void OnClickedCloseButton__DelegateSignature();
	void OnClickedInventorySortButton__DelegateSignature();
	void OnClickedPreferenceButton__DelegateSignature();
	void OnClickedQuickMoveButton__DelegateSignature();
	void OnClickedTargetContainerSortButton__DelegateSignature();
	void OnHoveredInventorySlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton);
	void OnHoveredTargetContainerSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton);
	void OnLeftClickedTargetContainerSLot(class UWBP_PalItemSlotButtonBase_C* buttonBase, EPalItemSlotPressType PressType);
	void OnUnhoveredInventorySlot__DelegateSignature();
	void OnUnhoveredTargetContainerSlot__DelegateSignature();
	void SetTagetContainerDisplayName(const class FText& TargetContainerName);
	void Setup(class UBP_PalInventoryModel_C* Model_0, class UPalItemContainer* TargetContainer);
	void SetupInventory();
	void SetupTargetItemContainer(class UPalItemContainer* TargetContainer);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IngameMenu_Chest_C">();
	}
	static class UWBP_IngameMenu_Chest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IngameMenu_Chest_C>();
	}
};
static_assert(alignof(UWBP_IngameMenu_Chest_C) == 0x000008, "Wrong alignment on UWBP_IngameMenu_Chest_C");
static_assert(sizeof(UWBP_IngameMenu_Chest_C) == 0x000368, "Wrong size on UWBP_IngameMenu_Chest_C");
static_assert(offsetof(UWBP_IngameMenu_Chest_C, UberGraphFrame) == 0x000278, "Member 'UWBP_IngameMenu_Chest_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Chest_C, Canvas_Inventory) == 0x000280, "Member 'UWBP_IngameMenu_Chest_C::Canvas_Inventory' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Chest_C, Canvas_TargetContainer) == 0x000288, "Member 'UWBP_IngameMenu_Chest_C::Canvas_TargetContainer' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Chest_C, Text_TargetContainerName) == 0x000290, "Member 'UWBP_IngameMenu_Chest_C::Text_TargetContainerName' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Chest_C, WBP_Menu_btn) == 0x000298, "Member 'UWBP_IngameMenu_Chest_C::WBP_Menu_btn' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Chest_C, WBP_PalInvisibleButton_QuickMove) == 0x0002A0, "Member 'UWBP_IngameMenu_Chest_C::WBP_PalInvisibleButton_QuickMove' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Chest_C, WBP_PalInvisibleButton_Sort_Inventory) == 0x0002A8, "Member 'UWBP_IngameMenu_Chest_C::WBP_PalInvisibleButton_Sort_Inventory' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Chest_C, WBP_PalInvisibleButton_Sort_TargetContainer) == 0x0002B0, "Member 'UWBP_IngameMenu_Chest_C::WBP_PalInvisibleButton_Sort_TargetContainer' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Chest_C, WBP_PalItemScrollList) == 0x0002B8, "Member 'UWBP_IngameMenu_Chest_C::WBP_PalItemScrollList' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Chest_C, WBP_PalPlayerInventoryScrollList) == 0x0002C0, "Member 'UWBP_IngameMenu_Chest_C::WBP_PalPlayerInventoryScrollList' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Chest_C, WBP_PlayerInventoryWeightInfo) == 0x0002C8, "Member 'UWBP_IngameMenu_Chest_C::WBP_PlayerInventoryWeightInfo' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Chest_C, Model) == 0x0002D0, "Member 'UWBP_IngameMenu_Chest_C::Model' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Chest_C, OnClickedInventorySortButton) == 0x0002D8, "Member 'UWBP_IngameMenu_Chest_C::OnClickedInventorySortButton' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Chest_C, OnClickedQuickMoveButton) == 0x0002E8, "Member 'UWBP_IngameMenu_Chest_C::OnClickedQuickMoveButton' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Chest_C, OnClickedTargetContainerSortButton) == 0x0002F8, "Member 'UWBP_IngameMenu_Chest_C::OnClickedTargetContainerSortButton' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Chest_C, OnHoveredInventorySlot) == 0x000308, "Member 'UWBP_IngameMenu_Chest_C::OnHoveredInventorySlot' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Chest_C, OnUnhoveredInventorySlot) == 0x000318, "Member 'UWBP_IngameMenu_Chest_C::OnUnhoveredInventorySlot' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Chest_C, OnHoveredTargetContainerSlot) == 0x000328, "Member 'UWBP_IngameMenu_Chest_C::OnHoveredTargetContainerSlot' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Chest_C, OnUnhoveredTargetContainerSlot) == 0x000338, "Member 'UWBP_IngameMenu_Chest_C::OnUnhoveredTargetContainerSlot' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Chest_C, OnClickedCloseButton) == 0x000348, "Member 'UWBP_IngameMenu_Chest_C::OnClickedCloseButton' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Chest_C, OnClickedPreferenceButton) == 0x000358, "Member 'UWBP_IngameMenu_Chest_C::OnClickedPreferenceButton' has a wrong offset!");

}

