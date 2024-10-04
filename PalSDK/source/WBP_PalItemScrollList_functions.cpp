#include "PalServer/Basic.hpp"

#include "PalServer/WBP_PalItemScrollList_classes.hpp"
#include "PalServer/WBP_PalItemScrollList_parameters.hpp"


namespace PalServer
{

// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.AddItemContainer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemContainer*                TargetContainer                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                             DisplayName                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    IgnoreEmptySlot                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemListBlock_C*          CreatedBlock                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::AddItemContainer(class UPalItemContainer* TargetContainer, const class FText& DisplayName, bool IgnoreEmptySlot, class UWBP_PalItemListBlock_C** CreatedBlock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "AddItemContainer");

	Params::WBP_PalItemScrollList_C_AddItemContainer Parms{};

	Parms.TargetContainer = TargetContainer;
	Parms.DisplayName = std::move(DisplayName);
	Parms.IgnoreEmptySlot = IgnoreEmptySlot;

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedBlock != nullptr)
		*CreatedBlock = Parms.CreatedBlock;
}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.ClearAllChildren
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalItemScrollList_C::ClearAllChildren()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "ClearAllChildren");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalItemScrollList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.CreateBlock
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemContainer*                TargetContainer                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                             DisplayName                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    IgnoreEmptySlot                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemListBlock_C*          CreatedBlock                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::CreateBlock(class UPalItemContainer* TargetContainer, const class FText& DisplayName, bool IgnoreEmptySlot, class UWBP_PalItemListBlock_C** CreatedBlock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "CreateBlock");

	Params::WBP_PalItemScrollList_C_CreateBlock Parms{};

	Parms.TargetContainer = TargetContainer;
	Parms.DisplayName = std::move(DisplayName);
	Parms.IgnoreEmptySlot = IgnoreEmptySlot;

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedBlock != nullptr)
		*CreatedBlock = Parms.CreatedBlock;
}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.CreateEmptyBlock
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemListBlock_C*          CreatedBlock                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::CreateEmptyBlock(class UWBP_PalItemListBlock_C** CreatedBlock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "CreateEmptyBlock");

	Params::WBP_PalItemScrollList_C_CreateEmptyBlock Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedBlock != nullptr)
		*CreatedBlock = Parms.CreatedBlock;
}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalItemScrollList_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.ExecuteUbergraph_WBP_PalItemScrollList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::ExecuteUbergraph_WBP_PalItemScrollList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "ExecuteUbergraph_WBP_PalItemScrollList");

	Params::WBP_PalItemScrollList_C_ExecuteUbergraph_WBP_PalItemScrollList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.FilteringBySellableItemDataMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, double>               SellableItemDataMap                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PalItemScrollList_C::FilteringBySellableItemDataMap(const TMap<class FName, double>& SellableItemDataMap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "FilteringBySellableItemDataMap");

	Params::WBP_PalItemScrollList_C_FilteringBySellableItemDataMap Parms{};

	Parms.SellableItemDataMap = std::move(SellableItemDataMap);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalItemScrollList_C::Focus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "Focus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.GetAllItemSlotButton
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWBP_PalItemSlotButtonBase_C*>Slots                                                  (Parm, OutParm, ContainsInstancedReference)

void UWBP_PalItemScrollList_C::GetAllItemSlotButton(TArray<class UWBP_PalItemSlotButtonBase_C*>* Slots)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "GetAllItemSlotButton");

	Params::WBP_PalItemScrollList_C_GetAllItemSlotButton Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Slots != nullptr)
		*Slots = std::move(Parms.Slots);
}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.GetFocusTarget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          Target                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::GetFocusTarget(class UWidget** Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "GetFocusTarget");

	Params::WBP_PalItemScrollList_C_GetFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Target != nullptr)
		*Target = Parms.Target;
}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.GetLastHoveredSlotButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     SlotButton                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::GetLastHoveredSlotButton(class UWBP_PalItemSlotButtonBase_C** SlotButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "GetLastHoveredSlotButton");

	Params::WBP_PalItemScrollList_C_GetLastHoveredSlotButton Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SlotButton != nullptr)
		*SlotButton = Parms.SlotButton;
}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.HiddenEmptySlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PalItemScrollList_C::HiddenEmptySlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "HiddenEmptySlot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.InitializeArrowVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalItemScrollList_C::InitializeArrowVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "InitializeArrowVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnDragDetected_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnDragDetected_Internal(class UWBP_PalItemSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnDragDetected_Internal");

	Params::WBP_PalItemScrollList_C_OnDragDetected_Internal Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnDragDetectedSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnDragDetectedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnDragDetectedSlot__DelegateSignature");

	Params::WBP_PalItemScrollList_C_OnDragDetectedSlot__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnEndHovered_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     buttonBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnEndHovered_Internal(class UWBP_PalItemSlotButtonBase_C* buttonBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnEndHovered_Internal");

	Params::WBP_PalItemScrollList_C_OnEndHovered_Internal Parms{};

	Parms.buttonBase = buttonBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnEndHoveredSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     buttonBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnEndHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* buttonBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnEndHoveredSlot__DelegateSignature");

	Params::WBP_PalItemScrollList_C_OnEndHoveredSlot__DelegateSignature Parms{};

	Parms.buttonBase = buttonBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnFocused_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     buttonBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnFocused_Internal(class UWBP_PalItemSlotButtonBase_C* buttonBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnFocused_Internal");

	Params::WBP_PalItemScrollList_C_OnFocused_Internal Parms{};

	Parms.buttonBase = buttonBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnFocusedSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     buttonBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnFocusedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* buttonBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnFocusedSlot__DelegateSignature");

	Params::WBP_PalItemScrollList_C_OnFocusedSlot__DelegateSignature Parms{};

	Parms.buttonBase = buttonBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnHovered_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     buttonBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnHovered_Internal(class UWBP_PalItemSlotButtonBase_C* buttonBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnHovered_Internal");

	Params::WBP_PalItemScrollList_C_OnHovered_Internal Parms{};

	Parms.buttonBase = buttonBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnHoveredSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     buttonBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* buttonBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnHoveredSlot__DelegateSignature");

	Params::WBP_PalItemScrollList_C_OnHoveredSlot__DelegateSignature Parms{};

	Parms.buttonBase = buttonBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalItemScrollList_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnLeftClicked_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     buttonBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EPalItemSlotPressType                   PressType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnLeftClicked_Internal(class UWBP_PalItemSlotButtonBase_C* buttonBase, EPalItemSlotPressType PressType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnLeftClicked_Internal");

	Params::WBP_PalItemScrollList_C_OnLeftClicked_Internal Parms{};

	Parms.buttonBase = buttonBase;
	Parms.PressType = PressType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnLeftClickedSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     buttonBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EPalItemSlotPressType                   PressType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnLeftClickedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* buttonBase, EPalItemSlotPressType PressType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnLeftClickedSlot__DelegateSignature");

	Params::WBP_PalItemScrollList_C_OnLeftClickedSlot__DelegateSignature Parms{};

	Parms.buttonBase = buttonBase;
	Parms.PressType = PressType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnMiddleClicked_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     buttonBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnMiddleClicked_Internal(class UWBP_PalItemSlotButtonBase_C* buttonBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnMiddleClicked_Internal");

	Params::WBP_PalItemScrollList_C_OnMiddleClicked_Internal Parms{};

	Parms.buttonBase = buttonBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnMiddleClickedSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     buttonBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnMiddleClickedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* buttonBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnMiddleClickedSlot__DelegateSignature");

	Params::WBP_PalItemScrollList_C_OnMiddleClickedSlot__DelegateSignature Parms{};

	Parms.buttonBase = buttonBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnRequestUseItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnRequestUseItem__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnRequestUseItem__DelegateSignature");

	Params::WBP_PalItemScrollList_C_OnRequestUseItem__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnRequestUseItem_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     buttonBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnRequestUseItem_Internal(class UWBP_PalItemSlotButtonBase_C* buttonBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnRequestUseItem_Internal");

	Params::WBP_PalItemScrollList_C_OnRequestUseItem_Internal Parms{};

	Parms.buttonBase = buttonBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnRightClicked_Internal
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     buttonBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EPalItemSlotPressType                   PressType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnRightClicked_Internal(class UWBP_PalItemSlotButtonBase_C* buttonBase, EPalItemSlotPressType PressType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnRightClicked_Internal");

	Params::WBP_PalItemScrollList_C_OnRightClicked_Internal Parms{};

	Parms.buttonBase = buttonBase;
	Parms.PressType = PressType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnRightClickedSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     buttonBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EPalItemSlotPressType                   PressType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnRightClickedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* buttonBase, EPalItemSlotPressType PressType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnRightClickedSlot__DelegateSignature");

	Params::WBP_PalItemScrollList_C_OnRightClickedSlot__DelegateSignature Parms{};

	Parms.buttonBase = buttonBase;
	Parms.PressType = PressType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnUnfocused_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     buttonBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnUnfocused_Internal(class UWBP_PalItemSlotButtonBase_C* buttonBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnUnfocused_Internal");

	Params::WBP_PalItemScrollList_C_OnUnfocused_Internal Parms{};

	Parms.buttonBase = buttonBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnUnfocusedSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     buttonBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::OnUnfocusedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* buttonBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "OnUnfocusedSlot__DelegateSignature");

	Params::WBP_PalItemScrollList_C_OnUnfocusedSlot__DelegateSignature Parms{};

	Parms.buttonBase = buttonBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.SetQuickMoveTargetContainer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemContainer*                TargetContainer                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemScrollList_C::SetQuickMoveTargetContainer(class UPalItemContainer* TargetContainer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemScrollList_C", "SetQuickMoveTargetContainer");

	Params::WBP_PalItemScrollList_C_SetQuickMoveTargetContainer Parms{};

	Parms.TargetContainer = TargetContainer;

	UObject::ProcessEvent(Func, &Parms);
}

}

