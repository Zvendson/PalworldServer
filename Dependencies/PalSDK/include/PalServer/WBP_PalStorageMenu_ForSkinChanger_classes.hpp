#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_PalStorageMenu_classes.hpp"
#include "Pal_structs.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_PalStorageMenu_ForSkinChanger.WBP_PalStorageMenu_ForSkinChanger_C
// 0x0038 (0x0550 - 0x0518)
class UWBP_PalStorageMenu_ForSkinChanger_C final : public UWBP_PalStorageMenu_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_PalStorageMenu_ForSkinChanger_C; // 0x0518(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_             OnClickedAnySlot;                                  // 0x0520(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   TargetCharacterID;                                 // 0x0530(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedCloseButton;                              // 0x0538(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bDisableNoSkinCharacter;                           // 0x0548(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DisableNoSkinCharacterButton();
	void ExecuteUbergraph_WBP_PalStorageMenu_ForSkinChanger(int32 EntryPoint);
	void IsMatchCharacterID(class UPalIndividualCharacterSlot* Slot_0, bool* bIsMatch);
	void IsSkinApplied(class UPalIndividualCharacterSlot* Slot_0, bool* bSkinApplied);
	void OnClickedAnySlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot_0);
	void OnClickedCloseButton__DelegateSignature();
	void OnSetup();
	void OnUpdatePagePalBoxList(int32 NowPage, const TArray<class UPalIndividualCharacterSlot*>& SlotList);
	void OnUpdatePageWorkerList(const TArray<class UPalIndividualCharacterSlot*>& SlotList);
	void SelectSlot(class UPalIndividualCharacterSlot* Slot_0, EPalItemSlotPressType PressType);
	void SetTargetCharacterID(class FName CharacterID);
	void UpdateButtonEnable();
	void ________________________();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalStorageMenu_ForSkinChanger_C">();
	}
	static class UWBP_PalStorageMenu_ForSkinChanger_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalStorageMenu_ForSkinChanger_C>();
	}
};
static_assert(alignof(UWBP_PalStorageMenu_ForSkinChanger_C) == 0x000008, "Wrong alignment on UWBP_PalStorageMenu_ForSkinChanger_C");
static_assert(sizeof(UWBP_PalStorageMenu_ForSkinChanger_C) == 0x000550, "Wrong size on UWBP_PalStorageMenu_ForSkinChanger_C");
static_assert(offsetof(UWBP_PalStorageMenu_ForSkinChanger_C, UberGraphFrame_WBP_PalStorageMenu_ForSkinChanger_C) == 0x000518, "Member 'UWBP_PalStorageMenu_ForSkinChanger_C::UberGraphFrame_WBP_PalStorageMenu_ForSkinChanger_C' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageMenu_ForSkinChanger_C, OnClickedAnySlot) == 0x000520, "Member 'UWBP_PalStorageMenu_ForSkinChanger_C::OnClickedAnySlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageMenu_ForSkinChanger_C, TargetCharacterID) == 0x000530, "Member 'UWBP_PalStorageMenu_ForSkinChanger_C::TargetCharacterID' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageMenu_ForSkinChanger_C, OnClickedCloseButton) == 0x000538, "Member 'UWBP_PalStorageMenu_ForSkinChanger_C::OnClickedCloseButton' has a wrong offset!");
static_assert(offsetof(UWBP_PalStorageMenu_ForSkinChanger_C, bDisableNoSkinCharacter) == 0x000548, "Member 'UWBP_PalStorageMenu_ForSkinChanger_C::bDisableNoSkinCharacter' has a wrong offset!");

}

