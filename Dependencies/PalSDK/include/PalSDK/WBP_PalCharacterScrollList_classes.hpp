#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_PalCommonScrollList_classes.hpp"
#include "Pal_structs.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C
// 0x0088 (0x04C8 - 0x0440)
class UWBP_PalCharacterScrollList_C final : public UWBP_PalCommonScrollList_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_PalCharacterScrollList_C;       // 0x0440(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                 SlotWidgetClass;                                   // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnLeftClickedSlot;                                 // 0x0450(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRightClickedSlot;                                // 0x0460(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnHoveredSlot;                                     // 0x0470(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnhoveredSlot;                                   // 0x0480(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnFocusedSlot;                                     // 0x0490(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnfocusedSlot;                                   // 0x04A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCreatedSlot;                                     // 0x04B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_CharacterScrollListBlock_C*        MyBlock;                                           // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void AddCharacterContainer(class UPalIndividualCharacterContainer* Container);
	void AddCharacterSlot(class UPalIndividualCharacterSlot* TargetSlot);
	void AddCharacterSlots(TArray<class UPalIndividualCharacterSlot*>& TargetSlots);
	void AddSlotButtonToScrollList(class UWBP_PalCharacterSlotButtonBase_C* CreatedSlotButton);
	void BindButtonEvents(class UWBP_PalCharacterSlotButtonBase_C* CreatedSlotButton);
	void ChangeChildrenPadding(const struct FVector2D& Padding_0);
	void ClearAllChildren();
	void ClearInnnerChildren();
	void Construct();
	void CreateSlotWidget(class UPalIndividualCharacterSlot* TargetSlot, class UWBP_PalCharacterSlotButtonBase_C** CreatedSlotButton);
	void ExecuteUbergraph_WBP_PalCharacterScrollList(int32 EntryPoint);
	void FocusPreviousButton(class UWBP_PalCharacterSlotButtonBase_C* RootSlotButton);
	void FocusToTopContent();
	void Get_All_Children(TArray<class UWidget*>* Widgets);
	void GetTopFocusTarget(class UWidget** Widget);
	void On_Right_Clicked_Internal(class UWBP_PalCharacterSlotButtonBase_C* buttonBase);
	void OnCreatedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* CreatedSlot);
	void OnFocused_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void OnFocusedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void OnHovered_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void OnInitialized();
	void OnLeftClicked_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
	void OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
	void OnRightClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void OnUnfocused_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void OnUnfocusedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void OnUnhovered_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void RemoveChild(class UWBP_PalCharacterSlotButtonBase_C* TargetChild);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalCharacterScrollList_C">();
	}
	static class UWBP_PalCharacterScrollList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalCharacterScrollList_C>();
	}
};
static_assert(alignof(UWBP_PalCharacterScrollList_C) == 0x000008, "Wrong alignment on UWBP_PalCharacterScrollList_C");
static_assert(sizeof(UWBP_PalCharacterScrollList_C) == 0x0004C8, "Wrong size on UWBP_PalCharacterScrollList_C");
static_assert(offsetof(UWBP_PalCharacterScrollList_C, UberGraphFrame_WBP_PalCharacterScrollList_C) == 0x000440, "Member 'UWBP_PalCharacterScrollList_C::UberGraphFrame_WBP_PalCharacterScrollList_C' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterScrollList_C, SlotWidgetClass) == 0x000448, "Member 'UWBP_PalCharacterScrollList_C::SlotWidgetClass' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterScrollList_C, OnLeftClickedSlot) == 0x000450, "Member 'UWBP_PalCharacterScrollList_C::OnLeftClickedSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterScrollList_C, OnRightClickedSlot) == 0x000460, "Member 'UWBP_PalCharacterScrollList_C::OnRightClickedSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterScrollList_C, OnHoveredSlot) == 0x000470, "Member 'UWBP_PalCharacterScrollList_C::OnHoveredSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterScrollList_C, OnUnhoveredSlot) == 0x000480, "Member 'UWBP_PalCharacterScrollList_C::OnUnhoveredSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterScrollList_C, OnFocusedSlot) == 0x000490, "Member 'UWBP_PalCharacterScrollList_C::OnFocusedSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterScrollList_C, OnUnfocusedSlot) == 0x0004A0, "Member 'UWBP_PalCharacterScrollList_C::OnUnfocusedSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterScrollList_C, OnCreatedSlot) == 0x0004B0, "Member 'UWBP_PalCharacterScrollList_C::OnCreatedSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterScrollList_C, MyBlock) == 0x0004C0, "Member 'UWBP_PalCharacterScrollList_C::MyBlock' has a wrong offset!");

}

