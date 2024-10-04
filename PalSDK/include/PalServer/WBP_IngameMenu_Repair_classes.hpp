#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "Pal_structs.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_IngameMenu_Repair.WBP_IngameMenu_Repair_C
// 0x0128 (0x03A0 - 0x0278)
class UWBP_IngameMenu_Repair_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanelDurable;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DurableFrameB;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1007;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_TargetItemIcon;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayMaterialHead;                               // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_Durability;                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_RepairTargetItemName;                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_TargetItemInfo;                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_RepairAllButton_C*      WBP_IngameMenu_RepairAllButton;                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_RepairButton_C*         WBP_IngameMenu_RepairButton;                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenuConstruction_InfoItem_C* WBP_IngameMenuConstruction_InfoItem;               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenuConstruction_InfoItem_C* WBP_IngameMenuConstruction_InfoItem_1;             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenuConstruction_InfoItem_C* WBP_IngameMenuConstruction_InfoItem_2;             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenuConstruction_InfoItem_C* WBP_IngameMenuConstruction_InfoItem_3;             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenuConstruction_InfoItem_C* WBP_IngameMenuConstruction_InfoItem_4;             // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInGameMenuItemSlotButton_C*     WBP_ItemSlotButton_BodyArmor;                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInGameMenuItemSlotButton_C*     WBP_ItemSlotButton_HeadArmor;                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInGameMenuItemSlotButton_C*     WBP_ItemSlotButton_Shield;                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInGameMenuItemSlotButton_C*     WBP_ItemSlotButton_Weapon_00;                      // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInGameMenuItemSlotButton_C*     WBP_ItemSlotButton_Weapon_01;                      // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInGameMenuItemSlotButton_C*     WBP_ItemSlotButton_Weapon_02;                      // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInGameMenuItemSlotButton_C*     WBP_ItemSlotButton_Weapon_03;                      // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_btn_C*                        WBP_Menu_btn;                                      // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalPlayerInventoryScrollList_C*    WBP_PalPlayerInventoryScrollList;                  // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedCloseButton;                              // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UWBP_PalInGameMenuItemSlotButton_C*> WeaponSlotArray;                                   // 0x0350(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             OnClickedAnyItemSlot;                              // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UWBP_IngameMenuConstruction_InfoItem_C*> MaterialInfoArray;                                 // 0x0370(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             OnClickedRepairButton;                             // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickedRepairAllButton;                          // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_IngameMenu_Repair_WBP_IngameMenu_RepairAllButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature();
	void BndEvt__WBP_IngameMenu_Repair_WBP_IngameMenu_RepairButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
	void BndEvt__WBP_IngameMenu_Repair_WBP_ItemSlotButton_BodyArmor_K2Node_ComponentBoundEvent_7_OnClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
	void BndEvt__WBP_IngameMenu_Repair_WBP_ItemSlotButton_HeadArmor_K2Node_ComponentBoundEvent_6_OnClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
	void BndEvt__WBP_IngameMenu_Repair_WBP_ItemSlotButton_Shield_K2Node_ComponentBoundEvent_8_OnClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
	void BndEvt__WBP_IngameMenu_Repair_WBP_ItemSlotButton_Weapon_00_K2Node_ComponentBoundEvent_2_OnClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
	void BndEvt__WBP_IngameMenu_Repair_WBP_ItemSlotButton_Weapon_01_K2Node_ComponentBoundEvent_3_OnClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
	void BndEvt__WBP_IngameMenu_Repair_WBP_ItemSlotButton_Weapon_02_K2Node_ComponentBoundEvent_4_OnClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
	void BndEvt__WBP_IngameMenu_Repair_WBP_ItemSlotButton_Weapon_03_K2Node_ComponentBoundEvent_5_OnClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
	void BndEvt__WBP_IngameMenu_Repair_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
	void BndEvt__WBP_IngameMenu_Repair_WBP_PalPlayerInventoryScrollList_K2Node_ComponentBoundEvent_1_OnLeftClickedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* buttonBase, EPalItemSlotPressType PressType);
	void DisplayRequireMaterials(TArray<struct FPalStaticItemIdAndNum>& Materials);
	void DisplayTargetItem(class UPalItemSlot* TargetItemSlot);
	void ExecuteUbergraph_WBP_IngameMenu_Repair(int32 EntryPoint);
	void GetDefaultFocusTarget(class UWidget** TargetWidget);
	void HideRepairItemInfo();
	void IsRepairable();
	void OnClickedAnyItemSlot__DelegateSignature(class UPalItemSlot* ItemSlot);
	void OnClickedCloseButton__DelegateSignature();
	void OnClickedInventory_Internal(class UWBP_PalItemSlotButtonBase_C* buttonBase, EPalItemSlotPressType PressType);
	void OnClickedRepairAllButton__DelegateSignature();
	void OnClickedRepairButton__DelegateSignature();
	void OnClickedSlot_Internal(class UWBP_PalItemSlotButtonBase_C* SlotWidget);
	void OnInitialized();
	void OnUpdateItemDurability(double MaxDurability, double NowDurability, class UWBP_PalItemSlotButtonBase_C* SelfWidget);
	void SetEnableRepairAllButton(bool IsEnableButton);
	void SetEnableRepairButton(bool IsEnableButton);
	void Setup();
	void SetupItemSlot();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IngameMenu_Repair_C">();
	}
	static class UWBP_IngameMenu_Repair_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IngameMenu_Repair_C>();
	}
};
static_assert(alignof(UWBP_IngameMenu_Repair_C) == 0x000008, "Wrong alignment on UWBP_IngameMenu_Repair_C");
static_assert(sizeof(UWBP_IngameMenu_Repair_C) == 0x0003A0, "Wrong size on UWBP_IngameMenu_Repair_C");
static_assert(offsetof(UWBP_IngameMenu_Repair_C, UberGraphFrame) == 0x000278, "Member 'UWBP_IngameMenu_Repair_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Repair_C, CanvasPanelDurable) == 0x000280, "Member 'UWBP_IngameMenu_Repair_C::CanvasPanelDurable' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Repair_C, DurableFrameB) == 0x000288, "Member 'UWBP_IngameMenu_Repair_C::DurableFrameB' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Repair_C, Image_1007) == 0x000290, "Member 'UWBP_IngameMenu_Repair_C::Image_1007' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Repair_C, Image_TargetItemIcon) == 0x000298, "Member 'UWBP_IngameMenu_Repair_C::Image_TargetItemIcon' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Repair_C, OverlayMaterialHead) == 0x0002A0, "Member 'UWBP_IngameMenu_Repair_C::OverlayMaterialHead' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Repair_C, ProgressBar_Durability) == 0x0002A8, "Member 'UWBP_IngameMenu_Repair_C::ProgressBar_Durability' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Repair_C, Text_RepairTargetItemName) == 0x0002B0, "Member 'UWBP_IngameMenu_Repair_C::Text_RepairTargetItemName' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Repair_C, VerticalBox_TargetItemInfo) == 0x0002B8, "Member 'UWBP_IngameMenu_Repair_C::VerticalBox_TargetItemInfo' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Repair_C, WBP_IngameMenu_RepairAllButton) == 0x0002C0, "Member 'UWBP_IngameMenu_Repair_C::WBP_IngameMenu_RepairAllButton' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Repair_C, WBP_IngameMenu_RepairButton) == 0x0002C8, "Member 'UWBP_IngameMenu_Repair_C::WBP_IngameMenu_RepairButton' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Repair_C, WBP_IngameMenuConstruction_InfoItem) == 0x0002D0, "Member 'UWBP_IngameMenu_Repair_C::WBP_IngameMenuConstruction_InfoItem' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Repair_C, WBP_IngameMenuConstruction_InfoItem_1) == 0x0002D8, "Member 'UWBP_IngameMenu_Repair_C::WBP_IngameMenuConstruction_InfoItem_1' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Repair_C, WBP_IngameMenuConstruction_InfoItem_2) == 0x0002E0, "Member 'UWBP_IngameMenu_Repair_C::WBP_IngameMenuConstruction_InfoItem_2' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Repair_C, WBP_IngameMenuConstruction_InfoItem_3) == 0x0002E8, "Member 'UWBP_IngameMenu_Repair_C::WBP_IngameMenuConstruction_InfoItem_3' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Repair_C, WBP_IngameMenuConstruction_InfoItem_4) == 0x0002F0, "Member 'UWBP_IngameMenu_Repair_C::WBP_IngameMenuConstruction_InfoItem_4' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Repair_C, WBP_ItemSlotButton_BodyArmor) == 0x0002F8, "Member 'UWBP_IngameMenu_Repair_C::WBP_ItemSlotButton_BodyArmor' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Repair_C, WBP_ItemSlotButton_HeadArmor) == 0x000300, "Member 'UWBP_IngameMenu_Repair_C::WBP_ItemSlotButton_HeadArmor' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Repair_C, WBP_ItemSlotButton_Shield) == 0x000308, "Member 'UWBP_IngameMenu_Repair_C::WBP_ItemSlotButton_Shield' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Repair_C, WBP_ItemSlotButton_Weapon_00) == 0x000310, "Member 'UWBP_IngameMenu_Repair_C::WBP_ItemSlotButton_Weapon_00' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Repair_C, WBP_ItemSlotButton_Weapon_01) == 0x000318, "Member 'UWBP_IngameMenu_Repair_C::WBP_ItemSlotButton_Weapon_01' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Repair_C, WBP_ItemSlotButton_Weapon_02) == 0x000320, "Member 'UWBP_IngameMenu_Repair_C::WBP_ItemSlotButton_Weapon_02' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Repair_C, WBP_ItemSlotButton_Weapon_03) == 0x000328, "Member 'UWBP_IngameMenu_Repair_C::WBP_ItemSlotButton_Weapon_03' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Repair_C, WBP_Menu_btn) == 0x000330, "Member 'UWBP_IngameMenu_Repair_C::WBP_Menu_btn' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Repair_C, WBP_PalPlayerInventoryScrollList) == 0x000338, "Member 'UWBP_IngameMenu_Repair_C::WBP_PalPlayerInventoryScrollList' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Repair_C, OnClickedCloseButton) == 0x000340, "Member 'UWBP_IngameMenu_Repair_C::OnClickedCloseButton' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Repair_C, WeaponSlotArray) == 0x000350, "Member 'UWBP_IngameMenu_Repair_C::WeaponSlotArray' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Repair_C, OnClickedAnyItemSlot) == 0x000360, "Member 'UWBP_IngameMenu_Repair_C::OnClickedAnyItemSlot' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Repair_C, MaterialInfoArray) == 0x000370, "Member 'UWBP_IngameMenu_Repair_C::MaterialInfoArray' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Repair_C, OnClickedRepairButton) == 0x000380, "Member 'UWBP_IngameMenu_Repair_C::OnClickedRepairButton' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Repair_C, OnClickedRepairAllButton) == 0x000390, "Member 'UWBP_IngameMenu_Repair_C::OnClickedRepairAllButton' has a wrong offset!");

}

