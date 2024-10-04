#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_PalItemListBlock.WBP_PalItemListBlock_C
// 0x00C8 (0x04D0 - 0x0408)
class UWBP_PalItemListBlock_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_InventoryListContent_C*            WBP_InventoryListContent;                          // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 ItemSlotButtonClass;                               // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnLeftClickedAnyContent;                           // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnMiddleClickedAnyContent;                         // 0x0430(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRightClickedAnyContent;                          // 0x0440(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnHoverdAnyContent;                                // 0x0450(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnEndHoveredAnyContent;                            // 0x0460(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnFocusedAnyContent;                               // 0x0470(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnfocusedAnyContent;                             // 0x0480(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCreatedSlotButton;                               // 0x0490(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector2D                              ChildrenPadding;                                   // 0x04A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnDragDetectedAnyContent;                          // 0x04B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRequestUseItem;                                  // 0x04C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void AddItemContainer(class UPalItemContainer* TargetContainer, bool IsEnableQuickMove, bool IgnoreEmptySlot);
	void AddItemSlot(class UPalItemSlot* TargetSlot);
	void ChangeItemSlotButtonClass(class UClass* NewClass);
	void ClearFiltering();
	void Construct();
	void CreateItemSlotWidget(class UPalItemSlot* TargetSlot, bool IsEnableQuickMove, bool IgnoreEmptySlot);
	void EditCreatedSlotWidget(class UWBP_PalItemSlotButtonBase_C* CreatedSlotWidget, class UWidget** EditedWidget);
	void ExecuteUbergraph_WBP_PalItemListBlock(int32 EntryPoint);
	void FilteringFromItemTypeA(TArray<EPalItemTypeA>& DisplayTypesA, bool IsEmptySlotDIsplay);
	void FilteringFromItemTypeB(TArray<EPalItemTypeB>& DisplayItemTypesB, bool IsEmptySlotDIsplay);
	void Focus();
	void GetAllItemSlotButtons(TArray<class UWBP_PalItemSlotButtonBase_C*>* SlotButtons);
	void GetFocusTarget(class UWidget** NewParam);
	void IsAllSlotEmpty(bool* IsALLEmpty);
	void On_Drag_Detected_Internal(class UWBP_PalItemSlotButtonBase_C* Widget);
	void OnCreatedSlotButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* CreatedWidget);
	void OnDragDetectedAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget);
	void OnEndHoveredAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* buttonBase);
	void OnEndHoveredSlot_Internal(class UWBP_PalItemSlotButtonBase_C* buttonBase);
	void OnFocusedAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* buttonBase);
	void OnFocusedSlot_Internal(class UWBP_PalItemSlotButtonBase_C* buttonBase);
	void OnHoverdAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* buttonBase);
	void OnHoveredSlot_Internal(class UWBP_PalItemSlotButtonBase_C* buttonBase);
	void OnLeftClickedAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* buttonBase, EPalItemSlotPressType PressType);
	void OnLeftClickedSlot_Internal(class UWBP_PalItemSlotButtonBase_C* buttonBase, EPalItemSlotPressType PressType);
	void OnMiddleClickedAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* buttonBase);
	void OnMiddletClickedSlot_Internal(class UWBP_PalItemSlotButtonBase_C* buttonBase);
	void OnRequestUse_Internal(class UWBP_PalItemSlotButtonBase_C* buttonBase);
	void OnRequestUseItem__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Button);
	void OnRightClickedAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* buttonBase, EPalItemSlotPressType PressType);
	void OnRightClickedSlot_Internal(class UWBP_PalItemSlotButtonBase_C* buttonBase, EPalItemSlotPressType PressType);
	void OnUnfocusedAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* buttonBase);
	void OnUnfocusedSlot_Internal(class UWBP_PalItemSlotButtonBase_C* buttonBase);
	void SetListName(const class FText& InName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalItemListBlock_C">();
	}
	static class UWBP_PalItemListBlock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalItemListBlock_C>();
	}
};
static_assert(alignof(UWBP_PalItemListBlock_C) == 0x000008, "Wrong alignment on UWBP_PalItemListBlock_C");
static_assert(sizeof(UWBP_PalItemListBlock_C) == 0x0004D0, "Wrong size on UWBP_PalItemListBlock_C");
static_assert(offsetof(UWBP_PalItemListBlock_C, UberGraphFrame) == 0x000408, "Member 'UWBP_PalItemListBlock_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemListBlock_C, WBP_InventoryListContent) == 0x000410, "Member 'UWBP_PalItemListBlock_C::WBP_InventoryListContent' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemListBlock_C, ItemSlotButtonClass) == 0x000418, "Member 'UWBP_PalItemListBlock_C::ItemSlotButtonClass' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemListBlock_C, OnLeftClickedAnyContent) == 0x000420, "Member 'UWBP_PalItemListBlock_C::OnLeftClickedAnyContent' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemListBlock_C, OnMiddleClickedAnyContent) == 0x000430, "Member 'UWBP_PalItemListBlock_C::OnMiddleClickedAnyContent' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemListBlock_C, OnRightClickedAnyContent) == 0x000440, "Member 'UWBP_PalItemListBlock_C::OnRightClickedAnyContent' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemListBlock_C, OnHoverdAnyContent) == 0x000450, "Member 'UWBP_PalItemListBlock_C::OnHoverdAnyContent' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemListBlock_C, OnEndHoveredAnyContent) == 0x000460, "Member 'UWBP_PalItemListBlock_C::OnEndHoveredAnyContent' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemListBlock_C, OnFocusedAnyContent) == 0x000470, "Member 'UWBP_PalItemListBlock_C::OnFocusedAnyContent' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemListBlock_C, OnUnfocusedAnyContent) == 0x000480, "Member 'UWBP_PalItemListBlock_C::OnUnfocusedAnyContent' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemListBlock_C, OnCreatedSlotButton) == 0x000490, "Member 'UWBP_PalItemListBlock_C::OnCreatedSlotButton' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemListBlock_C, ChildrenPadding) == 0x0004A0, "Member 'UWBP_PalItemListBlock_C::ChildrenPadding' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemListBlock_C, OnDragDetectedAnyContent) == 0x0004B0, "Member 'UWBP_PalItemListBlock_C::OnDragDetectedAnyContent' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemListBlock_C, OnRequestUseItem) == 0x0004C0, "Member 'UWBP_PalItemListBlock_C::OnRequestUseItem' has a wrong offset!");

}

