#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "EPalBoxHoveredSlotType_structs.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_PalStorageMenu.WBP_PalStorageMenu_C
// 0x00D0 (0x0518 - 0x0448)
class UWBP_PalStorageMenu_C : public UPalUIPalBoxBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0448(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Default_In;                                        // 0x0450(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_IngameMenu_PalBox_C*               WBP_IngameMenu_PalBox;                             // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_UIPalStorageManageModel_C*          Model;                                             // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     NextBoxInput;                                      // 0x0468(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     PrevBoxInput;                                      // 0x0470(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    TitleMsgID;                                        // 0x0478(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    LoosePalCheckMsgId;                                // 0x0488(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TSoftObjectPtr<class UPalIndividualCharacterSlot> CachedLooseSlot;                                   // 0x0498(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	EPalBoxHoveredSlotType                        HoverdSlotType;                                    // 0x04C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C9[0x3];                                      // 0x04C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalDataTableRowName_UIInputAction     PrevCursorShortcutInput;                           // 0x04CC(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     NextCursorShortcutInput;                           // 0x04D4(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     SendSlotInput;                                     // 0x04DC(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   SendSlotInputHandle;                               // 0x04E4(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalUIActionBindData                   ViewDetailInputHandle;                             // 0x04E8(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                         Pad_4EC[0x4];                                      // 0x04EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterSlot*            CachedLastHoveredSlot;                             // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   TabActionName;                                     // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     ViewDetailInput;                                   // 0x0500(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UPalIndividualCharacterSlot*>    LockSlotList;                                      // 0x0508(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_0_OnHoveredPartySlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot_0);
	void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_10_OnAnySlotHovered__DelegateSignature(class UPalIndividualCharacterSlot* Slot_0);
	void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_11_OnClickedLooseButton__DelegateSignature();
	void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_12_OnRightClickedBoxSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot_0);
	void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_13_OnRightClickedWorkerSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot_0);
	void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_1_OnHoveredBoxSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot_0);
	void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_2_OnHoveredWorkerSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot_0);
	void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_3_OnAnySlotUnhovered__DelegateSignature();
	void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_4_OnClickedPalBoxPal__DelegateSignature(class UPalIndividualCharacterSlot* Slot_0, EPalItemSlotPressType PressType);
	void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_5_OnClickedPartySlot__DelegateSignature(class UPalIndividualCharacterSlot* TargetSlot);
	void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_6_OnClickedPalBoxNextPage__DelegateSignature();
	void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_7_OnClickedBaseCampPal__DelegateSignature(class UPalIndividualCharacterSlot* Slot_0, EPalItemSlotPressType PressType);
	void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_8_OnClickedPalBoxPrevPage__DelegateSignature();
	void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_9_OnClickedCloseButton__DelegateSignature();
	void CheckLoosePal(class UPalIndividualCharacterSlot* Slot_0);
	void ExecuteUbergraph_WBP_PalStorageMenu(int32 EntryPoint);
	void On_Send_Slot_Input();
	void OnCursorShortcutNext();
	void OnCursorShortcutPrev();
	void OnRecieveLostDialogResponse(bool bResult);
	void OnSetup();
	void OnUpdatePagePalBoxList(int32 NowPage, const TArray<class UPalIndividualCharacterSlot*>& SlotList);
	void OnUpdatePageWorkerList(const TArray<class UPalIndividualCharacterSlot*>& SlotList);
	void OnUpdateSlotHandle(class UPalIndividualCharacterSlot* Slot_0, class UPalIndividualCharacterHandle* LastHandle);
	void OnViewDetailInput();
	void RegisterPalOperateInput();
	void RegisterStaticActionInput();
	void SelectSlot(class UPalIndividualCharacterSlot* Slot_0, EPalItemSlotPressType PressType);
	void SetEnableDragDrop(bool bIsEnableDragDrop);
	void Setup();
	void UnregisterPalOperateInput();

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalStorageMenu_C">();
	}
	static class UWBP_PalStorageMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalStorageMenu_C>();
	}
};
static_assert(alignof(UWBP_PalStorageMenu_C) == 0x000008, "Wrong alignment on UWBP_PalStorageMenu_C");
static_assert(sizeof(UWBP_PalStorageMenu_C) == 0x000518, "Wrong size on UWBP_PalStorageMenu_C");
static_assert(offsetof(UWBP_PalStorageMenu_C, UberGraphFrame) == 0x000448, "Member 'UWBP_PalStorageMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageMenu_C, Default_In) == 0x000450, "Member 'UWBP_PalStorageMenu_C::Default_In' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageMenu_C, WBP_IngameMenu_PalBox) == 0x000458, "Member 'UWBP_PalStorageMenu_C::WBP_IngameMenu_PalBox' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageMenu_C, Model) == 0x000460, "Member 'UWBP_PalStorageMenu_C::Model' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageMenu_C, NextBoxInput) == 0x000468, "Member 'UWBP_PalStorageMenu_C::NextBoxInput' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageMenu_C, PrevBoxInput) == 0x000470, "Member 'UWBP_PalStorageMenu_C::PrevBoxInput' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageMenu_C, TitleMsgID) == 0x000478, "Member 'UWBP_PalStorageMenu_C::TitleMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageMenu_C, LoosePalCheckMsgId) == 0x000488, "Member 'UWBP_PalStorageMenu_C::LoosePalCheckMsgId' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageMenu_C, CachedLooseSlot) == 0x000498, "Member 'UWBP_PalStorageMenu_C::CachedLooseSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageMenu_C, HoverdSlotType) == 0x0004C8, "Member 'UWBP_PalStorageMenu_C::HoverdSlotType' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageMenu_C, PrevCursorShortcutInput) == 0x0004CC, "Member 'UWBP_PalStorageMenu_C::PrevCursorShortcutInput' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageMenu_C, NextCursorShortcutInput) == 0x0004D4, "Member 'UWBP_PalStorageMenu_C::NextCursorShortcutInput' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageMenu_C, SendSlotInput) == 0x0004DC, "Member 'UWBP_PalStorageMenu_C::SendSlotInput' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageMenu_C, SendSlotInputHandle) == 0x0004E4, "Member 'UWBP_PalStorageMenu_C::SendSlotInputHandle' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageMenu_C, ViewDetailInputHandle) == 0x0004E8, "Member 'UWBP_PalStorageMenu_C::ViewDetailInputHandle' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageMenu_C, CachedLastHoveredSlot) == 0x0004F0, "Member 'UWBP_PalStorageMenu_C::CachedLastHoveredSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageMenu_C, TabActionName) == 0x0004F8, "Member 'UWBP_PalStorageMenu_C::TabActionName' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageMenu_C, ViewDetailInput) == 0x000500, "Member 'UWBP_PalStorageMenu_C::ViewDetailInput' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageMenu_C, LockSlotList) == 0x000508, "Member 'UWBP_PalStorageMenu_C::LockSlotList' has a wrong offset!");

}

