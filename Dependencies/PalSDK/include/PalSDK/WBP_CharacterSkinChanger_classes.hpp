#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_PalUISkinChangerSequenceType_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_CharacterSkinChanger.WBP_CharacterSkinChanger_C
// 0x0150 (0x05E0 - 0x0490)
class UWBP_CharacterSkinChanger_C final : public UPalUICharacterSkinChanger
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0490(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_ApplySkinCharacterSelect;              // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_SelectSkin;                            // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_SelectSkinCharacter;                   // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_71;                                          // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_InframeRender_SelectSkin;                  // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_InframeRender_SelectSkinCharacter;         // 0x04C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_WaitInitialize;                            // 0x04C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalScrollBox*                          PalScrollBox_SelectCharacter;                      // 0x04D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalScrollBox*                          PalScrollBox_SelectSkin;                           // 0x04D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_LoadingIcon_C*              WBP_Common_LoadingIcon;                            // 0x04E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_btn_C*                        WBP_Menu_btn;                                      // 0x04E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_btn_C*                        WBP_Menu_btn_1;                                    // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalMonsterInframeRender_C*         WBP_PalMonsterInframeRender;                       // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalStorageMenu_ForSkinChanger_C*   WBP_PalStorageMenu_ForSkinChanger;                 // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NoData_C*                          WBP_WaitInitialize;                                // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_109;                                // 0x0510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	E_PalUISkinChangerSequenceType                SequenceType;                                      // 0x0518(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_519[0x3];                                      // 0x0519(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SelectedSkinName;                                  // 0x051C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_524[0x4];                                      // 0x0524(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UPalIndividualCharacterSlot> SelectedSoftTargetSlot;                            // 0x0528(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class FName                                   SelectedCharacterID;                               // 0x0558(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    DIalogMsgID_NoSkin;                                // 0x0560(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    DIalogMsgID_OverwriteSkin;                         // 0x0570(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    WaitInitializeMsgID;                               // 0x0580(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    RemoveSkinMsgID;                                   // 0x0590(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    DialogMsgID_Remove;                                // 0x05A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TSoftObjectPtr<class UWBP_Paldex_List_C>      SelectedCharacterPanel;                            // 0x05B0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, InstancedReference, HasGetValueTypeHash)

public:
	void BndEvt__WBP_CharacterSkinChanger_WBP_Menu_btn_1_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature();
	void BndEvt__WBP_CharacterSkinChanger_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
	void BndEvt__WBP_CharacterSkinChanger_WBP_PalStorageMenu_ForSkinChanger_K2Node_ComponentBoundEvent_2_OnClickedCloseButton__DelegateSignature();
	void BndEvt__WBP_CharacterSkinChanger_WBP_PalStorageMenu_ForSkinChanger_K2Node_ComponentBoundEvent_3_OnClickedAnySlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot_0);
	void ChangeSequence(E_PalUISkinChangerSequenceType NewSequence);
	void Destruct();
	void ExecuteUbergraph_WBP_CharacterSkinChanger(int32 EntryPoint);
	void Get_Localized_Skin_Name(class FName SkinName, class FText* SkinNameText);
	void GetNowInsideBaseCampId(struct FGuid* ID);
	void OnCancelAction();
	void OnClickedCharacterPanel(class FName CharacterID, class UWBP_Paldex_List_C* Widget);
	void OnClickedRemoveSkinButton(class FName CharacterID, class UWBP_Paldex_List_C* Widget);
	void OnClickedSkinPanel(class FName CharacterID, class UWBP_Paldex_List_C* Widget);
	void OnClosedCheckDialog(bool bResult);
	void OnClosedRemoveSkinDialog(bool bResult);
	void OnHoveredCharacterPanel(class FName CharacterID, class UWBP_Paldex_List_C* SelfWidget);
	void OnHoveredRemoveSkinButton(class FName CharacterID, class UWBP_Paldex_List_C* SelfWidget);
	void OnHoveredSkinPanel(class FName CharacterID, class UWBP_Paldex_List_C* SelfWidget);
	void OnInitialized();
	void OnSetup();
	void OnUpdateSkillInfo();
	void OpenChangeSkinDIalog(class UPalIndividualCharacterParameter* TargetCharacterParameter);
	void OpenRemoveSkinDialog(class UPalIndividualCharacterParameter* TargetCharacterParameter);
	void SetupExistSkinCharacterList();
	void SetupSkinList(class FName CharacterID);
	void ________________________();

	class UWidget* BP_GetDesiredFocusTarget() const;
	void GetNowSequenceFocusTarget(class UWidget** Widget) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CharacterSkinChanger_C">();
	}
	static class UWBP_CharacterSkinChanger_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CharacterSkinChanger_C>();
	}
};
static_assert(alignof(UWBP_CharacterSkinChanger_C) == 0x000008, "Wrong alignment on UWBP_CharacterSkinChanger_C");
static_assert(sizeof(UWBP_CharacterSkinChanger_C) == 0x0005E0, "Wrong size on UWBP_CharacterSkinChanger_C");
static_assert(offsetof(UWBP_CharacterSkinChanger_C, UberGraphFrame) == 0x000490, "Member 'UWBP_CharacterSkinChanger_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSkinChanger_C, CanvasPanel_ApplySkinCharacterSelect) == 0x000498, "Member 'UWBP_CharacterSkinChanger_C::CanvasPanel_ApplySkinCharacterSelect' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSkinChanger_C, CanvasPanel_SelectSkin) == 0x0004A0, "Member 'UWBP_CharacterSkinChanger_C::CanvasPanel_SelectSkin' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSkinChanger_C, CanvasPanel_SelectSkinCharacter) == 0x0004A8, "Member 'UWBP_CharacterSkinChanger_C::CanvasPanel_SelectSkinCharacter' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSkinChanger_C, Image_71) == 0x0004B0, "Member 'UWBP_CharacterSkinChanger_C::Image_71' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSkinChanger_C, Overlay_InframeRender_SelectSkin) == 0x0004B8, "Member 'UWBP_CharacterSkinChanger_C::Overlay_InframeRender_SelectSkin' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSkinChanger_C, Overlay_InframeRender_SelectSkinCharacter) == 0x0004C0, "Member 'UWBP_CharacterSkinChanger_C::Overlay_InframeRender_SelectSkinCharacter' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSkinChanger_C, Overlay_WaitInitialize) == 0x0004C8, "Member 'UWBP_CharacterSkinChanger_C::Overlay_WaitInitialize' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSkinChanger_C, PalScrollBox_SelectCharacter) == 0x0004D0, "Member 'UWBP_CharacterSkinChanger_C::PalScrollBox_SelectCharacter' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSkinChanger_C, PalScrollBox_SelectSkin) == 0x0004D8, "Member 'UWBP_CharacterSkinChanger_C::PalScrollBox_SelectSkin' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSkinChanger_C, WBP_Common_LoadingIcon) == 0x0004E0, "Member 'UWBP_CharacterSkinChanger_C::WBP_Common_LoadingIcon' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSkinChanger_C, WBP_Menu_btn) == 0x0004E8, "Member 'UWBP_CharacterSkinChanger_C::WBP_Menu_btn' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSkinChanger_C, WBP_Menu_btn_1) == 0x0004F0, "Member 'UWBP_CharacterSkinChanger_C::WBP_Menu_btn_1' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSkinChanger_C, WBP_PalMonsterInframeRender) == 0x0004F8, "Member 'UWBP_CharacterSkinChanger_C::WBP_PalMonsterInframeRender' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSkinChanger_C, WBP_PalStorageMenu_ForSkinChanger) == 0x000500, "Member 'UWBP_CharacterSkinChanger_C::WBP_PalStorageMenu_ForSkinChanger' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSkinChanger_C, WBP_WaitInitialize) == 0x000508, "Member 'UWBP_CharacterSkinChanger_C::WBP_WaitInitialize' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSkinChanger_C, WidgetSwitcher_109) == 0x000510, "Member 'UWBP_CharacterSkinChanger_C::WidgetSwitcher_109' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSkinChanger_C, SequenceType) == 0x000518, "Member 'UWBP_CharacterSkinChanger_C::SequenceType' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSkinChanger_C, SelectedSkinName) == 0x00051C, "Member 'UWBP_CharacterSkinChanger_C::SelectedSkinName' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSkinChanger_C, SelectedSoftTargetSlot) == 0x000528, "Member 'UWBP_CharacterSkinChanger_C::SelectedSoftTargetSlot' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSkinChanger_C, SelectedCharacterID) == 0x000558, "Member 'UWBP_CharacterSkinChanger_C::SelectedCharacterID' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSkinChanger_C, DIalogMsgID_NoSkin) == 0x000560, "Member 'UWBP_CharacterSkinChanger_C::DIalogMsgID_NoSkin' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSkinChanger_C, DIalogMsgID_OverwriteSkin) == 0x000570, "Member 'UWBP_CharacterSkinChanger_C::DIalogMsgID_OverwriteSkin' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSkinChanger_C, WaitInitializeMsgID) == 0x000580, "Member 'UWBP_CharacterSkinChanger_C::WaitInitializeMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSkinChanger_C, RemoveSkinMsgID) == 0x000590, "Member 'UWBP_CharacterSkinChanger_C::RemoveSkinMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSkinChanger_C, DialogMsgID_Remove) == 0x0005A0, "Member 'UWBP_CharacterSkinChanger_C::DialogMsgID_Remove' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSkinChanger_C, SelectedCharacterPanel) == 0x0005B0, "Member 'UWBP_CharacterSkinChanger_C::SelectedCharacterPanel' has a wrong offset!");

}

