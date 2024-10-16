#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_ItemChest.WBP_ItemChest_C
// 0x0088 (0x04B8 - 0x0430)
class UWBP_ItemChest_C final : public UPalUserWidgetOverlayUI
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Default_In;                                        // 0x0438(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_IngameMenu_Chest_C*                WBP_IngameMenu_Chest;                              // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalInventoryModel_C*                InventoryModel;                                    // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     LeftFocusInput;                                    // 0x0450(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     RightFocusInput;                                   // 0x0458(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     FastGetInput;                                      // 0x0460(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalItemSlot*                           CachedLastFocusedInventorySlot;                    // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalItemSlot*                           CachedLastFocusedTargetContainerSlot;              // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     AllGetInput;                                       // 0x0478(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<EPalPlayerInventoryType>               DisplayInventoryType;                              // 0x0480(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   TabActionName;                                     // 0x0490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     RefillInput;                                       // 0x0498(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalContainerId                        TargetContainerId;                                 // 0x04A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     SortInput;                                         // 0x04B0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AllGet();
	void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_12_OnClickedTargetContainerSortButton__DelegateSignature();
	void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_13_OnUnhoveredInventorySlot__DelegateSignature();
	void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_14_OnHoveredTargetContainerSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton);
	void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_15_OnUnhoveredTargetContainerSlot__DelegateSignature();
	void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_16_OnClickedCloseButton__DelegateSignature();
	void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_3_OnClickedQuickMoveButton__DelegateSignature();
	void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_8_OnClickedInventorySortButton__DelegateSignature();
	void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_9_OnHoveredInventorySlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton);
	void ChangeFocus_Chest_Pad();
	void ChangeFocus_Inv_Pad();
	void Construct();
	void ExecuteUbergraph_WBP_ItemChest(int32 EntryPoint);
	void FastMove();
	void OnSetup();
	void OnUpdatePrivateLockPlayerUId(class UPalMapObjectItemChestModel* ConcreteModel);
	void Refill();
	void Setup();
	void Sort();

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ItemChest_C">();
	}
	static class UWBP_ItemChest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ItemChest_C>();
	}
};
static_assert(alignof(UWBP_ItemChest_C) == 0x000008, "Wrong alignment on UWBP_ItemChest_C");
static_assert(sizeof(UWBP_ItemChest_C) == 0x0004B8, "Wrong size on UWBP_ItemChest_C");
static_assert(offsetof(UWBP_ItemChest_C, UberGraphFrame) == 0x000430, "Member 'UWBP_ItemChest_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ItemChest_C, Default_In) == 0x000438, "Member 'UWBP_ItemChest_C::Default_In' has a wrong offset!");
static_assert(offsetof(UWBP_ItemChest_C, WBP_IngameMenu_Chest) == 0x000440, "Member 'UWBP_ItemChest_C::WBP_IngameMenu_Chest' has a wrong offset!");
static_assert(offsetof(UWBP_ItemChest_C, InventoryModel) == 0x000448, "Member 'UWBP_ItemChest_C::InventoryModel' has a wrong offset!");
static_assert(offsetof(UWBP_ItemChest_C, LeftFocusInput) == 0x000450, "Member 'UWBP_ItemChest_C::LeftFocusInput' has a wrong offset!");
static_assert(offsetof(UWBP_ItemChest_C, RightFocusInput) == 0x000458, "Member 'UWBP_ItemChest_C::RightFocusInput' has a wrong offset!");
static_assert(offsetof(UWBP_ItemChest_C, FastGetInput) == 0x000460, "Member 'UWBP_ItemChest_C::FastGetInput' has a wrong offset!");
static_assert(offsetof(UWBP_ItemChest_C, CachedLastFocusedInventorySlot) == 0x000468, "Member 'UWBP_ItemChest_C::CachedLastFocusedInventorySlot' has a wrong offset!");
static_assert(offsetof(UWBP_ItemChest_C, CachedLastFocusedTargetContainerSlot) == 0x000470, "Member 'UWBP_ItemChest_C::CachedLastFocusedTargetContainerSlot' has a wrong offset!");
static_assert(offsetof(UWBP_ItemChest_C, AllGetInput) == 0x000478, "Member 'UWBP_ItemChest_C::AllGetInput' has a wrong offset!");
static_assert(offsetof(UWBP_ItemChest_C, DisplayInventoryType) == 0x000480, "Member 'UWBP_ItemChest_C::DisplayInventoryType' has a wrong offset!");
static_assert(offsetof(UWBP_ItemChest_C, TabActionName) == 0x000490, "Member 'UWBP_ItemChest_C::TabActionName' has a wrong offset!");
static_assert(offsetof(UWBP_ItemChest_C, RefillInput) == 0x000498, "Member 'UWBP_ItemChest_C::RefillInput' has a wrong offset!");
static_assert(offsetof(UWBP_ItemChest_C, TargetContainerId) == 0x0004A0, "Member 'UWBP_ItemChest_C::TargetContainerId' has a wrong offset!");
static_assert(offsetof(UWBP_ItemChest_C, SortInput) == 0x0004B0, "Member 'UWBP_ItemChest_C::SortInput' has a wrong offset!");

}

