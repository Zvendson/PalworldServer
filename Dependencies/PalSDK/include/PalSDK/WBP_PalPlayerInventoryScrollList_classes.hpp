#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "WBP_PalItemScrollList_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_PalPlayerInventoryScrollList.WBP_PalPlayerInventoryScrollList_C
// 0x00A0 (0x05A0 - 0x0500)
class UWBP_PalPlayerInventoryScrollList_C final : public UWBP_PalItemScrollList_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_PalPlayerInventoryScrollList_C; // 0x0500(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalUIInventoryModel*                   Model;                                             // 0x0508(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<EPalPlayerInventoryType, class UWBP_PalItemListBlock_C*> CategoryBlockMap;                                  // 0x0510(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<EPalPlayerInventoryType>               InventoryTypeArray;                                // 0x0560(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnRequestOpenUseItemPanel;                         // 0x0570(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          CanUseSlot;                                        // 0x0580(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_581[0x3];                                      // 0x0581(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalDataTableRowName_UIInputAction     Handle;                                            // 0x0584(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          CanQuickEquip;                                     // 0x058C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowPrice;                                         // 0x058D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58E[0x2];                                      // 0x058E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnTriedEquipSlot;                                  // 0x0590(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Add_Player_Inventory_Block(EPalPlayerInventoryType InventoryType, class UWBP_PalItemListBlock_C** CreatedBlock);
	void ClearFiltering();
	void Construct();
	void ExecuteUbergraph_WBP_PalPlayerInventoryScrollList(int32 EntryPoint);
	void FilteringFromInventoryType(TArray<EPalPlayerInventoryType>& DisplayTypes, bool* IsEmptyDisplaySlot);
	void FilteringFromItemTypeA(TArray<EPalItemTypeA>& DisplayTypesA, bool IsEmptySlotDIsplay);
	void FilteringFromItemTypeB(TArray<EPalItemTypeB>& DisplayTypesB, bool IsEmptySlotDIsplay);
	void OnLeftCllicked(class UWBP_PalItemSlotButtonBase_C* buttonBase, EPalItemSlotPressType PressType);
	void OnRequestOpenUseItemPanel__DelegateSignature(class UPalItemSlot* SelectedSlot);
	void OnTriedEquipSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton);
	void OnTriedEquipSlot_Internal(class UWBP_PalItemSlotButtonBase_C* Widget);
	void Open_Use_Item_Panel(class UWBP_PalItemSlotButtonBase_C* Button);
	void ScrollToCategoryTop(EPalPlayerInventoryType TargetType, class UWidget** TopFocusTarget);
	void Setup(class UPalUIInventoryModel* UseModel);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalPlayerInventoryScrollList_C">();
	}
	static class UWBP_PalPlayerInventoryScrollList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalPlayerInventoryScrollList_C>();
	}
};
static_assert(alignof(UWBP_PalPlayerInventoryScrollList_C) == 0x000008, "Wrong alignment on UWBP_PalPlayerInventoryScrollList_C");
static_assert(sizeof(UWBP_PalPlayerInventoryScrollList_C) == 0x0005A0, "Wrong size on UWBP_PalPlayerInventoryScrollList_C");
static_assert(offsetof(UWBP_PalPlayerInventoryScrollList_C, UberGraphFrame_WBP_PalPlayerInventoryScrollList_C) == 0x000500, "Member 'UWBP_PalPlayerInventoryScrollList_C::UberGraphFrame_WBP_PalPlayerInventoryScrollList_C' has a wrong offset!");
static_assert(offsetof(UWBP_PalPlayerInventoryScrollList_C, Model) == 0x000508, "Member 'UWBP_PalPlayerInventoryScrollList_C::Model' has a wrong offset!");
static_assert(offsetof(UWBP_PalPlayerInventoryScrollList_C, CategoryBlockMap) == 0x000510, "Member 'UWBP_PalPlayerInventoryScrollList_C::CategoryBlockMap' has a wrong offset!");
static_assert(offsetof(UWBP_PalPlayerInventoryScrollList_C, InventoryTypeArray) == 0x000560, "Member 'UWBP_PalPlayerInventoryScrollList_C::InventoryTypeArray' has a wrong offset!");
static_assert(offsetof(UWBP_PalPlayerInventoryScrollList_C, OnRequestOpenUseItemPanel) == 0x000570, "Member 'UWBP_PalPlayerInventoryScrollList_C::OnRequestOpenUseItemPanel' has a wrong offset!");
static_assert(offsetof(UWBP_PalPlayerInventoryScrollList_C, CanUseSlot) == 0x000580, "Member 'UWBP_PalPlayerInventoryScrollList_C::CanUseSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalPlayerInventoryScrollList_C, Handle) == 0x000584, "Member 'UWBP_PalPlayerInventoryScrollList_C::Handle' has a wrong offset!");
static_assert(offsetof(UWBP_PalPlayerInventoryScrollList_C, CanQuickEquip) == 0x00058C, "Member 'UWBP_PalPlayerInventoryScrollList_C::CanQuickEquip' has a wrong offset!");
static_assert(offsetof(UWBP_PalPlayerInventoryScrollList_C, ShowPrice) == 0x00058D, "Member 'UWBP_PalPlayerInventoryScrollList_C::ShowPrice' has a wrong offset!");
static_assert(offsetof(UWBP_PalPlayerInventoryScrollList_C, OnTriedEquipSlot) == 0x000590, "Member 'UWBP_PalPlayerInventoryScrollList_C::OnTriedEquipSlot' has a wrong offset!");

}

