#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C
// 0x00B0 (0x04B8 - 0x0408)
class UWBP_PalCharacterSlotButtonBase_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonButtonBase*                      My_Button;                                         // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalCharacterSlotBase_C*            MyCharacterSlotWidget;                             // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedButton;                                   // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRightClickedButton;                              // 0x0430(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnHoveredButton;                                   // 0x0440(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnhoveredButton;                                 // 0x0450(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnFocusedWidget;                                   // 0x0460(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnFocusedWidget;                                 // 0x0470(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnDragged;                                         // 0x0480(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnDropped;                                         // 0x0490(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsDragging;                                        // 0x04A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEnableDragDrop;                                  // 0x04A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEnableClick;                                     // 0x04A2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A3[0x5];                                      // 0x04A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSlotSync;                                        // 0x04A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BindButtonEvents();
	void ExecuteUbergraph_WBP_PalCharacterSlotButtonBase(int32 EntryPoint);
	void Focus();
	void GetIsSlotSync(bool* WaitingSync);
	void GetTargetSlot(class UPalIndividualCharacterSlot** TargetSlot);
	void On_Slot_Synced();
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnClicked_Internal(class UCommonButtonBase* Button);
	void OnClickedButton__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
	void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
	void OnDragged__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void OnDragged_Internal();
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDropped__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void OnDropped_Internal();
	void OnFocusedWidget__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void OnHovered_Internal(class UCommonButtonBase* Button);
	void OnHoveredButton__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void OnInitialized();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRightClicked_Internal();
	void OnRightClickedButton__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* buttonBase);
	void OnSlotSync__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* SelfButton);
	void OnUnFocusedWidget__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void OnUnhovered_Internal(class UCommonButtonBase* Button);
	void OnUnhoveredButton__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void RegisterButton(class UCommonButtonBase** Button);
	void RegisterCharacterSlotWidget(class UWBP_PalCharacterSlotBase_C** CharacterSlotWidget);
	void Setup(class UPalIndividualCharacterSlot* TargetSlot);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalCharacterSlotButtonBase_C">();
	}
	static class UWBP_PalCharacterSlotButtonBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalCharacterSlotButtonBase_C>();
	}
};
static_assert(alignof(UWBP_PalCharacterSlotButtonBase_C) == 0x000008, "Wrong alignment on UWBP_PalCharacterSlotButtonBase_C");
static_assert(sizeof(UWBP_PalCharacterSlotButtonBase_C) == 0x0004B8, "Wrong size on UWBP_PalCharacterSlotButtonBase_C");
static_assert(offsetof(UWBP_PalCharacterSlotButtonBase_C, UberGraphFrame) == 0x000408, "Member 'UWBP_PalCharacterSlotButtonBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterSlotButtonBase_C, My_Button) == 0x000410, "Member 'UWBP_PalCharacterSlotButtonBase_C::My_Button' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterSlotButtonBase_C, MyCharacterSlotWidget) == 0x000418, "Member 'UWBP_PalCharacterSlotButtonBase_C::MyCharacterSlotWidget' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterSlotButtonBase_C, OnClickedButton) == 0x000420, "Member 'UWBP_PalCharacterSlotButtonBase_C::OnClickedButton' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterSlotButtonBase_C, OnRightClickedButton) == 0x000430, "Member 'UWBP_PalCharacterSlotButtonBase_C::OnRightClickedButton' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterSlotButtonBase_C, OnHoveredButton) == 0x000440, "Member 'UWBP_PalCharacterSlotButtonBase_C::OnHoveredButton' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterSlotButtonBase_C, OnUnhoveredButton) == 0x000450, "Member 'UWBP_PalCharacterSlotButtonBase_C::OnUnhoveredButton' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterSlotButtonBase_C, OnFocusedWidget) == 0x000460, "Member 'UWBP_PalCharacterSlotButtonBase_C::OnFocusedWidget' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterSlotButtonBase_C, OnUnFocusedWidget) == 0x000470, "Member 'UWBP_PalCharacterSlotButtonBase_C::OnUnFocusedWidget' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterSlotButtonBase_C, OnDragged) == 0x000480, "Member 'UWBP_PalCharacterSlotButtonBase_C::OnDragged' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterSlotButtonBase_C, OnDropped) == 0x000490, "Member 'UWBP_PalCharacterSlotButtonBase_C::OnDropped' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterSlotButtonBase_C, IsDragging) == 0x0004A0, "Member 'UWBP_PalCharacterSlotButtonBase_C::IsDragging' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterSlotButtonBase_C, IsEnableDragDrop) == 0x0004A1, "Member 'UWBP_PalCharacterSlotButtonBase_C::IsEnableDragDrop' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterSlotButtonBase_C, IsEnableClick) == 0x0004A2, "Member 'UWBP_PalCharacterSlotButtonBase_C::IsEnableClick' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterSlotButtonBase_C, OnSlotSync) == 0x0004A8, "Member 'UWBP_PalCharacterSlotButtonBase_C::OnSlotSync' has a wrong offset!");

}

