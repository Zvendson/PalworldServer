#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_PalCommonScrollList_classes.hpp"
#include "Pal_structs.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_PalItemScrollList.WBP_PalItemScrollList_C
// 0x00C0 (0x0500 - 0x0440)
class UWBP_PalItemScrollList_C : public UWBP_PalCommonScrollList_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_PalItemScrollList_C;            // 0x0440(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_             OnLeftClickedSlot;                                 // 0x0448(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnMiddleClickedSlot;                               // 0x0458(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRightClickedSlot;                                // 0x0468(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnHoveredSlot;                                     // 0x0478(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnEndHoveredSlot;                                  // 0x0488(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnFocusedSlot;                                     // 0x0498(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnfocusedSlot;                                   // 0x04A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UClass*                                 BlockClass;                                        // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnDragDetectedSlot;                                // 0x04C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsDisplayItemInfo;                                 // 0x04D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEnableQuickMoveSlot;                             // 0x04D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D2[0x6];                                      // 0x04D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalItemSlotButtonBase_C*           CachedLastHoveredSlotButton;                       // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalItemSlotButtonBase_C*           CachedNowHoveringSlotButton;                       // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalItemContainer*                      QuickMoveTargetContainer;                          // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnRequestUseItem;                                  // 0x04F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void AddItemContainer(class UPalItemContainer* TargetContainer, const class FText& DisplayName, bool IgnoreEmptySlot, class UWBP_PalItemListBlock_C** CreatedBlock);
	void ClearAllChildren();
	void Construct();
	void CreateBlock(class UPalItemContainer* TargetContainer, const class FText& DisplayName, bool IgnoreEmptySlot, class UWBP_PalItemListBlock_C** CreatedBlock);
	void CreateEmptyBlock(class UWBP_PalItemListBlock_C** CreatedBlock);
	void Destruct();
	void ExecuteUbergraph_WBP_PalItemScrollList(int32 EntryPoint);
	void FilteringBySellableItemDataMap(const TMap<class FName, double>& SellableItemDataMap);
	void Focus();
	void GetAllItemSlotButton(TArray<class UWBP_PalItemSlotButtonBase_C*>* Slots);
	void GetFocusTarget(class UWidget** Target);
	void GetLastHoveredSlotButton(class UWBP_PalItemSlotButtonBase_C** SlotButton);
	void HiddenEmptySlot();
	void InitializeArrowVisibility();
	void OnDragDetected_Internal(class UWBP_PalItemSlotButtonBase_C* Widget);
	void OnDragDetectedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget);
	void OnEndHovered_Internal(class UWBP_PalItemSlotButtonBase_C* buttonBase);
	void OnEndHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* buttonBase);
	void OnFocused_Internal(class UWBP_PalItemSlotButtonBase_C* buttonBase);
	void OnFocusedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* buttonBase);
	void OnHovered_Internal(class UWBP_PalItemSlotButtonBase_C* buttonBase);
	void OnHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* buttonBase);
	void OnInitialized();
	void OnLeftClicked_Internal(class UWBP_PalItemSlotButtonBase_C* buttonBase, EPalItemSlotPressType PressType);
	void OnLeftClickedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* buttonBase, EPalItemSlotPressType PressType);
	void OnMiddleClicked_Internal(class UWBP_PalItemSlotButtonBase_C* buttonBase);
	void OnMiddleClickedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* buttonBase);
	void OnRequestUseItem__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Button);
	void OnRequestUseItem_Internal(class UWBP_PalItemSlotButtonBase_C* buttonBase);
	void OnRightClicked_Internal(class UWBP_PalItemSlotButtonBase_C* buttonBase, EPalItemSlotPressType PressType);
	void OnRightClickedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* buttonBase, EPalItemSlotPressType PressType);
	void OnUnfocused_Internal(class UWBP_PalItemSlotButtonBase_C* buttonBase);
	void OnUnfocusedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* buttonBase);
	void SetQuickMoveTargetContainer(class UPalItemContainer* TargetContainer);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalItemScrollList_C">();
	}
	static class UWBP_PalItemScrollList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalItemScrollList_C>();
	}
};
static_assert(alignof(UWBP_PalItemScrollList_C) == 0x000008, "Wrong alignment on UWBP_PalItemScrollList_C");
static_assert(sizeof(UWBP_PalItemScrollList_C) == 0x000500, "Wrong size on UWBP_PalItemScrollList_C");
static_assert(offsetof(UWBP_PalItemScrollList_C, UberGraphFrame_WBP_PalItemScrollList_C) == 0x000440, "Member 'UWBP_PalItemScrollList_C::UberGraphFrame_WBP_PalItemScrollList_C' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemScrollList_C, OnLeftClickedSlot) == 0x000448, "Member 'UWBP_PalItemScrollList_C::OnLeftClickedSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemScrollList_C, OnMiddleClickedSlot) == 0x000458, "Member 'UWBP_PalItemScrollList_C::OnMiddleClickedSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemScrollList_C, OnRightClickedSlot) == 0x000468, "Member 'UWBP_PalItemScrollList_C::OnRightClickedSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemScrollList_C, OnHoveredSlot) == 0x000478, "Member 'UWBP_PalItemScrollList_C::OnHoveredSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemScrollList_C, OnEndHoveredSlot) == 0x000488, "Member 'UWBP_PalItemScrollList_C::OnEndHoveredSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemScrollList_C, OnFocusedSlot) == 0x000498, "Member 'UWBP_PalItemScrollList_C::OnFocusedSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemScrollList_C, OnUnfocusedSlot) == 0x0004A8, "Member 'UWBP_PalItemScrollList_C::OnUnfocusedSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemScrollList_C, BlockClass) == 0x0004B8, "Member 'UWBP_PalItemScrollList_C::BlockClass' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemScrollList_C, OnDragDetectedSlot) == 0x0004C0, "Member 'UWBP_PalItemScrollList_C::OnDragDetectedSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemScrollList_C, IsDisplayItemInfo) == 0x0004D0, "Member 'UWBP_PalItemScrollList_C::IsDisplayItemInfo' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemScrollList_C, IsEnableQuickMoveSlot) == 0x0004D1, "Member 'UWBP_PalItemScrollList_C::IsEnableQuickMoveSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemScrollList_C, CachedLastHoveredSlotButton) == 0x0004D8, "Member 'UWBP_PalItemScrollList_C::CachedLastHoveredSlotButton' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemScrollList_C, CachedNowHoveringSlotButton) == 0x0004E0, "Member 'UWBP_PalItemScrollList_C::CachedNowHoveringSlotButton' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemScrollList_C, QuickMoveTargetContainer) == 0x0004E8, "Member 'UWBP_PalItemScrollList_C::QuickMoveTargetContainer' has a wrong offset!");
static_assert(offsetof(UWBP_PalItemScrollList_C, OnRequestUseItem) == 0x0004F0, "Member 'UWBP_PalItemScrollList_C::OnRequestUseItem' has a wrong offset!");

}

