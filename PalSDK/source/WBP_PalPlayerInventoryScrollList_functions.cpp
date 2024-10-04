#include "PalServer/Basic.hpp"

#include "PalServer/WBP_PalPlayerInventoryScrollList_classes.hpp"
#include "PalServer/WBP_PalPlayerInventoryScrollList_parameters.hpp"


namespace PalServer
{

// Function WBP_PalPlayerInventoryScrollList.WBP_PalPlayerInventoryScrollList_C.Add Player Inventory Block
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalPlayerInventoryType                 InventoryType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemListBlock_C*          CreatedBlock                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalPlayerInventoryScrollList_C::Add_Player_Inventory_Block(EPalPlayerInventoryType InventoryType, class UWBP_PalItemListBlock_C** CreatedBlock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalPlayerInventoryScrollList_C", "Add Player Inventory Block");

	Params::WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block Parms{};

	Parms.InventoryType = InventoryType;

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedBlock != nullptr)
		*CreatedBlock = Parms.CreatedBlock;
}


// Function WBP_PalPlayerInventoryScrollList.WBP_PalPlayerInventoryScrollList_C.ClearFiltering
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PalPlayerInventoryScrollList_C::ClearFiltering()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalPlayerInventoryScrollList_C", "ClearFiltering");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalPlayerInventoryScrollList.WBP_PalPlayerInventoryScrollList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalPlayerInventoryScrollList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalPlayerInventoryScrollList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalPlayerInventoryScrollList.WBP_PalPlayerInventoryScrollList_C.ExecuteUbergraph_WBP_PalPlayerInventoryScrollList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalPlayerInventoryScrollList_C::ExecuteUbergraph_WBP_PalPlayerInventoryScrollList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalPlayerInventoryScrollList_C", "ExecuteUbergraph_WBP_PalPlayerInventoryScrollList");

	Params::WBP_PalPlayerInventoryScrollList_C_ExecuteUbergraph_WBP_PalPlayerInventoryScrollList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalPlayerInventoryScrollList.WBP_PalPlayerInventoryScrollList_C.FilteringFromInventoryType
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<EPalPlayerInventoryType>         DisplayTypes                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    IsEmptyDisplaySlot                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalPlayerInventoryScrollList_C::FilteringFromInventoryType(TArray<EPalPlayerInventoryType>& DisplayTypes, bool* IsEmptyDisplaySlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalPlayerInventoryScrollList_C", "FilteringFromInventoryType");

	Params::WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType Parms{};

	Parms.DisplayTypes = std::move(DisplayTypes);

	UObject::ProcessEvent(Func, &Parms);

	DisplayTypes = std::move(Parms.DisplayTypes);

	if (IsEmptyDisplaySlot != nullptr)
		*IsEmptyDisplaySlot = Parms.IsEmptyDisplaySlot;
}


// Function WBP_PalPlayerInventoryScrollList.WBP_PalPlayerInventoryScrollList_C.FilteringFromItemTypeA
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<EPalItemTypeA>                   DisplayTypesA                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    IsEmptySlotDIsplay                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalPlayerInventoryScrollList_C::FilteringFromItemTypeA(TArray<EPalItemTypeA>& DisplayTypesA, bool IsEmptySlotDIsplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalPlayerInventoryScrollList_C", "FilteringFromItemTypeA");

	Params::WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeA Parms{};

	Parms.DisplayTypesA = std::move(DisplayTypesA);
	Parms.IsEmptySlotDIsplay = IsEmptySlotDIsplay;

	UObject::ProcessEvent(Func, &Parms);

	DisplayTypesA = std::move(Parms.DisplayTypesA);
}


// Function WBP_PalPlayerInventoryScrollList.WBP_PalPlayerInventoryScrollList_C.FilteringFromItemTypeB
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<EPalItemTypeB>                   DisplayTypesB                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    IsEmptySlotDIsplay                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalPlayerInventoryScrollList_C::FilteringFromItemTypeB(TArray<EPalItemTypeB>& DisplayTypesB, bool IsEmptySlotDIsplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalPlayerInventoryScrollList_C", "FilteringFromItemTypeB");

	Params::WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeB Parms{};

	Parms.DisplayTypesB = std::move(DisplayTypesB);
	Parms.IsEmptySlotDIsplay = IsEmptySlotDIsplay;

	UObject::ProcessEvent(Func, &Parms);

	DisplayTypesB = std::move(Parms.DisplayTypesB);
}


// Function WBP_PalPlayerInventoryScrollList.WBP_PalPlayerInventoryScrollList_C.OnLeftCllicked
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     buttonBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EPalItemSlotPressType                   PressType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalPlayerInventoryScrollList_C::OnLeftCllicked(class UWBP_PalItemSlotButtonBase_C* buttonBase, EPalItemSlotPressType PressType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalPlayerInventoryScrollList_C", "OnLeftCllicked");

	Params::WBP_PalPlayerInventoryScrollList_C_OnLeftCllicked Parms{};

	Parms.buttonBase = buttonBase;
	Parms.PressType = PressType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalPlayerInventoryScrollList.WBP_PalPlayerInventoryScrollList_C.OnRequestOpenUseItemPanel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemSlot*                     SelectedSlot                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalPlayerInventoryScrollList_C::OnRequestOpenUseItemPanel__DelegateSignature(class UPalItemSlot* SelectedSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalPlayerInventoryScrollList_C", "OnRequestOpenUseItemPanel__DelegateSignature");

	Params::WBP_PalPlayerInventoryScrollList_C_OnRequestOpenUseItemPanel__DelegateSignature Parms{};

	Parms.SelectedSlot = SelectedSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalPlayerInventoryScrollList.WBP_PalPlayerInventoryScrollList_C.OnTriedEquipSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     SlotButton                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalPlayerInventoryScrollList_C::OnTriedEquipSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalPlayerInventoryScrollList_C", "OnTriedEquipSlot__DelegateSignature");

	Params::WBP_PalPlayerInventoryScrollList_C_OnTriedEquipSlot__DelegateSignature Parms{};

	Parms.SlotButton = SlotButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalPlayerInventoryScrollList.WBP_PalPlayerInventoryScrollList_C.OnTriedEquipSlot_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalPlayerInventoryScrollList_C::OnTriedEquipSlot_Internal(class UWBP_PalItemSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalPlayerInventoryScrollList_C", "OnTriedEquipSlot_Internal");

	Params::WBP_PalPlayerInventoryScrollList_C_OnTriedEquipSlot_Internal Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalPlayerInventoryScrollList.WBP_PalPlayerInventoryScrollList_C.Open Use Item Panel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalPlayerInventoryScrollList_C::Open_Use_Item_Panel(class UWBP_PalItemSlotButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalPlayerInventoryScrollList_C", "Open Use Item Panel");

	Params::WBP_PalPlayerInventoryScrollList_C_Open_Use_Item_Panel Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalPlayerInventoryScrollList.WBP_PalPlayerInventoryScrollList_C.ScrollToCategoryTop
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalPlayerInventoryType                 TargetType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          TopFocusTarget                                         (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalPlayerInventoryScrollList_C::ScrollToCategoryTop(EPalPlayerInventoryType TargetType, class UWidget** TopFocusTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalPlayerInventoryScrollList_C", "ScrollToCategoryTop");

	Params::WBP_PalPlayerInventoryScrollList_C_ScrollToCategoryTop Parms{};

	Parms.TargetType = TargetType;

	UObject::ProcessEvent(Func, &Parms);

	if (TopFocusTarget != nullptr)
		*TopFocusTarget = Parms.TopFocusTarget;
}


// Function WBP_PalPlayerInventoryScrollList.WBP_PalPlayerInventoryScrollList_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalUIInventoryModel*             UseModel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalPlayerInventoryScrollList_C::Setup(class UPalUIInventoryModel* UseModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalPlayerInventoryScrollList_C", "Setup");

	Params::WBP_PalPlayerInventoryScrollList_C_Setup Parms{};

	Parms.UseModel = UseModel;

	UObject::ProcessEvent(Func, &Parms);
}

}

