#include "PalServer/Basic.hpp"

#include "PalServer/WBP_PalItemListBlock_classes.hpp"
#include "PalServer/WBP_PalItemListBlock_parameters.hpp"


namespace PalServer
{

// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.AddItemContainer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemContainer*                TargetContainer                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEnableQuickMove                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IgnoreEmptySlot                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemListBlock_C::AddItemContainer(class UPalItemContainer* TargetContainer, bool IsEnableQuickMove, bool IgnoreEmptySlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemListBlock_C", "AddItemContainer");

	Params::WBP_PalItemListBlock_C_AddItemContainer Parms{};

	Parms.TargetContainer = TargetContainer;
	Parms.IsEnableQuickMove = IsEnableQuickMove;
	Parms.IgnoreEmptySlot = IgnoreEmptySlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.AddItemSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemSlot*                     TargetSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemListBlock_C::AddItemSlot(class UPalItemSlot* TargetSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemListBlock_C", "AddItemSlot");

	Params::WBP_PalItemListBlock_C_AddItemSlot Parms{};

	Parms.TargetSlot = TargetSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.ChangeItemSlotButtonClass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           NewClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemListBlock_C::ChangeItemSlotButtonClass(class UClass* NewClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemListBlock_C", "ChangeItemSlotButtonClass");

	Params::WBP_PalItemListBlock_C_ChangeItemSlotButtonClass Parms{};

	Parms.NewClass = NewClass;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.ClearFiltering
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PalItemListBlock_C::ClearFiltering()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemListBlock_C", "ClearFiltering");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalItemListBlock_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemListBlock_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.CreateItemSlotWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemSlot*                     TargetSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEnableQuickMove                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IgnoreEmptySlot                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemListBlock_C::CreateItemSlotWidget(class UPalItemSlot* TargetSlot, bool IsEnableQuickMove, bool IgnoreEmptySlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemListBlock_C", "CreateItemSlotWidget");

	Params::WBP_PalItemListBlock_C_CreateItemSlotWidget Parms{};

	Parms.TargetSlot = TargetSlot;
	Parms.IsEnableQuickMove = IsEnableQuickMove;
	Parms.IgnoreEmptySlot = IgnoreEmptySlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.EditCreatedSlotWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     CreatedSlotWidget                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          EditedWidget                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemListBlock_C::EditCreatedSlotWidget(class UWBP_PalItemSlotButtonBase_C* CreatedSlotWidget, class UWidget** EditedWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemListBlock_C", "EditCreatedSlotWidget");

	Params::WBP_PalItemListBlock_C_EditCreatedSlotWidget Parms{};

	Parms.CreatedSlotWidget = CreatedSlotWidget;

	UObject::ProcessEvent(Func, &Parms);

	if (EditedWidget != nullptr)
		*EditedWidget = Parms.EditedWidget;
}


// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.ExecuteUbergraph_WBP_PalItemListBlock
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemListBlock_C::ExecuteUbergraph_WBP_PalItemListBlock(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemListBlock_C", "ExecuteUbergraph_WBP_PalItemListBlock");

	Params::WBP_PalItemListBlock_C_ExecuteUbergraph_WBP_PalItemListBlock Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.FilteringFromItemTypeA
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<EPalItemTypeA>                   DisplayTypesA                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    IsEmptySlotDIsplay                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemListBlock_C::FilteringFromItemTypeA(TArray<EPalItemTypeA>& DisplayTypesA, bool IsEmptySlotDIsplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemListBlock_C", "FilteringFromItemTypeA");

	Params::WBP_PalItemListBlock_C_FilteringFromItemTypeA Parms{};

	Parms.DisplayTypesA = std::move(DisplayTypesA);
	Parms.IsEmptySlotDIsplay = IsEmptySlotDIsplay;

	UObject::ProcessEvent(Func, &Parms);

	DisplayTypesA = std::move(Parms.DisplayTypesA);
}


// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.FilteringFromItemTypeB
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<EPalItemTypeB>                   DisplayItemTypesB                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    IsEmptySlotDIsplay                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemListBlock_C::FilteringFromItemTypeB(TArray<EPalItemTypeB>& DisplayItemTypesB, bool IsEmptySlotDIsplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemListBlock_C", "FilteringFromItemTypeB");

	Params::WBP_PalItemListBlock_C_FilteringFromItemTypeB Parms{};

	Parms.DisplayItemTypesB = std::move(DisplayItemTypesB);
	Parms.IsEmptySlotDIsplay = IsEmptySlotDIsplay;

	UObject::ProcessEvent(Func, &Parms);

	DisplayItemTypesB = std::move(Parms.DisplayItemTypesB);
}


// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalItemListBlock_C::Focus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemListBlock_C", "Focus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.GetAllItemSlotButtons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWBP_PalItemSlotButtonBase_C*>SlotButtons                                            (Parm, OutParm, ContainsInstancedReference)

void UWBP_PalItemListBlock_C::GetAllItemSlotButtons(TArray<class UWBP_PalItemSlotButtonBase_C*>* SlotButtons)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemListBlock_C", "GetAllItemSlotButtons");

	Params::WBP_PalItemListBlock_C_GetAllItemSlotButtons Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SlotButtons != nullptr)
		*SlotButtons = std::move(Parms.SlotButtons);
}


// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.GetFocusTarget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          NewParam                                               (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemListBlock_C::GetFocusTarget(class UWidget** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemListBlock_C", "GetFocusTarget");

	Params::WBP_PalItemListBlock_C_GetFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.IsAllSlotEmpty
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsALLEmpty                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemListBlock_C::IsAllSlotEmpty(bool* IsALLEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemListBlock_C", "IsAllSlotEmpty");

	Params::WBP_PalItemListBlock_C_IsAllSlotEmpty Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsALLEmpty != nullptr)
		*IsALLEmpty = Parms.IsALLEmpty;
}


// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.On Drag Detected Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemListBlock_C::On_Drag_Detected_Internal(class UWBP_PalItemSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemListBlock_C", "On Drag Detected Internal");

	Params::WBP_PalItemListBlock_C_On_Drag_Detected_Internal Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnCreatedSlotButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     CreatedWidget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemListBlock_C::OnCreatedSlotButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* CreatedWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemListBlock_C", "OnCreatedSlotButton__DelegateSignature");

	Params::WBP_PalItemListBlock_C_OnCreatedSlotButton__DelegateSignature Parms{};

	Parms.CreatedWidget = CreatedWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnDragDetectedAnyContent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemListBlock_C::OnDragDetectedAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemListBlock_C", "OnDragDetectedAnyContent__DelegateSignature");

	Params::WBP_PalItemListBlock_C_OnDragDetectedAnyContent__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnEndHoveredAnyContent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     buttonBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemListBlock_C::OnEndHoveredAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* buttonBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemListBlock_C", "OnEndHoveredAnyContent__DelegateSignature");

	Params::WBP_PalItemListBlock_C_OnEndHoveredAnyContent__DelegateSignature Parms{};

	Parms.buttonBase = buttonBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnEndHoveredSlot_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     buttonBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemListBlock_C::OnEndHoveredSlot_Internal(class UWBP_PalItemSlotButtonBase_C* buttonBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemListBlock_C", "OnEndHoveredSlot_Internal");

	Params::WBP_PalItemListBlock_C_OnEndHoveredSlot_Internal Parms{};

	Parms.buttonBase = buttonBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnFocusedAnyContent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     buttonBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemListBlock_C::OnFocusedAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* buttonBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemListBlock_C", "OnFocusedAnyContent__DelegateSignature");

	Params::WBP_PalItemListBlock_C_OnFocusedAnyContent__DelegateSignature Parms{};

	Parms.buttonBase = buttonBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnFocusedSlot_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     buttonBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemListBlock_C::OnFocusedSlot_Internal(class UWBP_PalItemSlotButtonBase_C* buttonBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemListBlock_C", "OnFocusedSlot_Internal");

	Params::WBP_PalItemListBlock_C_OnFocusedSlot_Internal Parms{};

	Parms.buttonBase = buttonBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnHoverdAnyContent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     buttonBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemListBlock_C::OnHoverdAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* buttonBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemListBlock_C", "OnHoverdAnyContent__DelegateSignature");

	Params::WBP_PalItemListBlock_C_OnHoverdAnyContent__DelegateSignature Parms{};

	Parms.buttonBase = buttonBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnHoveredSlot_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     buttonBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemListBlock_C::OnHoveredSlot_Internal(class UWBP_PalItemSlotButtonBase_C* buttonBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemListBlock_C", "OnHoveredSlot_Internal");

	Params::WBP_PalItemListBlock_C_OnHoveredSlot_Internal Parms{};

	Parms.buttonBase = buttonBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnLeftClickedAnyContent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     buttonBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EPalItemSlotPressType                   PressType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemListBlock_C::OnLeftClickedAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* buttonBase, EPalItemSlotPressType PressType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemListBlock_C", "OnLeftClickedAnyContent__DelegateSignature");

	Params::WBP_PalItemListBlock_C_OnLeftClickedAnyContent__DelegateSignature Parms{};

	Parms.buttonBase = buttonBase;
	Parms.PressType = PressType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnLeftClickedSlot_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     buttonBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EPalItemSlotPressType                   PressType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemListBlock_C::OnLeftClickedSlot_Internal(class UWBP_PalItemSlotButtonBase_C* buttonBase, EPalItemSlotPressType PressType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemListBlock_C", "OnLeftClickedSlot_Internal");

	Params::WBP_PalItemListBlock_C_OnLeftClickedSlot_Internal Parms{};

	Parms.buttonBase = buttonBase;
	Parms.PressType = PressType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnMiddleClickedAnyContent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     buttonBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemListBlock_C::OnMiddleClickedAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* buttonBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemListBlock_C", "OnMiddleClickedAnyContent__DelegateSignature");

	Params::WBP_PalItemListBlock_C_OnMiddleClickedAnyContent__DelegateSignature Parms{};

	Parms.buttonBase = buttonBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnMiddletClickedSlot_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     buttonBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemListBlock_C::OnMiddletClickedSlot_Internal(class UWBP_PalItemSlotButtonBase_C* buttonBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemListBlock_C", "OnMiddletClickedSlot_Internal");

	Params::WBP_PalItemListBlock_C_OnMiddletClickedSlot_Internal Parms{};

	Parms.buttonBase = buttonBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnRequestUse_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     buttonBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemListBlock_C::OnRequestUse_Internal(class UWBP_PalItemSlotButtonBase_C* buttonBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemListBlock_C", "OnRequestUse_Internal");

	Params::WBP_PalItemListBlock_C_OnRequestUse_Internal Parms{};

	Parms.buttonBase = buttonBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnRequestUseItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemListBlock_C::OnRequestUseItem__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemListBlock_C", "OnRequestUseItem__DelegateSignature");

	Params::WBP_PalItemListBlock_C_OnRequestUseItem__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnRightClickedAnyContent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     buttonBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EPalItemSlotPressType                   PressType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemListBlock_C::OnRightClickedAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* buttonBase, EPalItemSlotPressType PressType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemListBlock_C", "OnRightClickedAnyContent__DelegateSignature");

	Params::WBP_PalItemListBlock_C_OnRightClickedAnyContent__DelegateSignature Parms{};

	Parms.buttonBase = buttonBase;
	Parms.PressType = PressType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnRightClickedSlot_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     buttonBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EPalItemSlotPressType                   PressType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemListBlock_C::OnRightClickedSlot_Internal(class UWBP_PalItemSlotButtonBase_C* buttonBase, EPalItemSlotPressType PressType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemListBlock_C", "OnRightClickedSlot_Internal");

	Params::WBP_PalItemListBlock_C_OnRightClickedSlot_Internal Parms{};

	Parms.buttonBase = buttonBase;
	Parms.PressType = PressType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnUnfocusedAnyContent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     buttonBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemListBlock_C::OnUnfocusedAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* buttonBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemListBlock_C", "OnUnfocusedAnyContent__DelegateSignature");

	Params::WBP_PalItemListBlock_C_OnUnfocusedAnyContent__DelegateSignature Parms{};

	Parms.buttonBase = buttonBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnUnfocusedSlot_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     buttonBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemListBlock_C::OnUnfocusedSlot_Internal(class UWBP_PalItemSlotButtonBase_C* buttonBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemListBlock_C", "OnUnfocusedSlot_Internal");

	Params::WBP_PalItemListBlock_C_OnUnfocusedSlot_Internal Parms{};

	Parms.buttonBase = buttonBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.SetListName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PalItemListBlock_C::SetListName(const class FText& InName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemListBlock_C", "SetListName");

	Params::WBP_PalItemListBlock_C_SetListName Parms{};

	Parms.InName = std::move(InName);

	UObject::ProcessEvent(Func, &Parms);
}

}

