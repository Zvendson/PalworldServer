#include "PalServer/Basic.hpp"

#include "PalServer/WBP_PalCharacterScrollList_classes.hpp"
#include "PalServer/WBP_PalCharacterScrollList_parameters.hpp"


namespace PalServer
{

// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.AddCharacterContainer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterContainer* Container                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterScrollList_C::AddCharacterContainer(class UPalIndividualCharacterContainer* Container)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterScrollList_C", "AddCharacterContainer");

	Params::WBP_PalCharacterScrollList_C_AddCharacterContainer Parms{};

	Parms.Container = Container;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.AddCharacterSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot*      TargetSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterScrollList_C::AddCharacterSlot(class UPalIndividualCharacterSlot* TargetSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterScrollList_C", "AddCharacterSlot");

	Params::WBP_PalCharacterScrollList_C_AddCharacterSlot Parms{};

	Parms.TargetSlot = TargetSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.AddCharacterSlots
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPalIndividualCharacterSlot*>TargetSlots                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PalCharacterScrollList_C::AddCharacterSlots(TArray<class UPalIndividualCharacterSlot*>& TargetSlots)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterScrollList_C", "AddCharacterSlots");

	Params::WBP_PalCharacterScrollList_C_AddCharacterSlots Parms{};

	Parms.TargetSlots = std::move(TargetSlots);

	UObject::ProcessEvent(Func, &Parms);

	TargetSlots = std::move(Parms.TargetSlots);
}


// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.AddSlotButtonToScrollList
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*CreatedSlotButton                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterScrollList_C::AddSlotButtonToScrollList(class UWBP_PalCharacterSlotButtonBase_C* CreatedSlotButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterScrollList_C", "AddSlotButtonToScrollList");

	Params::WBP_PalCharacterScrollList_C_AddSlotButtonToScrollList Parms{};

	Parms.CreatedSlotButton = CreatedSlotButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.BindButtonEvents
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*CreatedSlotButton                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterScrollList_C::BindButtonEvents(class UWBP_PalCharacterSlotButtonBase_C* CreatedSlotButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterScrollList_C", "BindButtonEvents");

	Params::WBP_PalCharacterScrollList_C_BindButtonEvents Parms{};

	Parms.CreatedSlotButton = CreatedSlotButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.ChangeChildrenPadding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        Padding_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterScrollList_C::ChangeChildrenPadding(const struct FVector2D& Padding_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterScrollList_C", "ChangeChildrenPadding");

	Params::WBP_PalCharacterScrollList_C_ChangeChildrenPadding Parms{};

	Parms.Padding_0 = std::move(Padding_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.ClearAllChildren
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalCharacterScrollList_C::ClearAllChildren()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterScrollList_C", "ClearAllChildren");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.ClearInnnerChildren
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalCharacterScrollList_C::ClearInnnerChildren()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterScrollList_C", "ClearInnnerChildren");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalCharacterScrollList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterScrollList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.CreateSlotWidget
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot*      TargetSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalCharacterSlotButtonBase_C*CreatedSlotButton                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterScrollList_C::CreateSlotWidget(class UPalIndividualCharacterSlot* TargetSlot, class UWBP_PalCharacterSlotButtonBase_C** CreatedSlotButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterScrollList_C", "CreateSlotWidget");

	Params::WBP_PalCharacterScrollList_C_CreateSlotWidget Parms{};

	Parms.TargetSlot = TargetSlot;

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedSlotButton != nullptr)
		*CreatedSlotButton = Parms.CreatedSlotButton;
}


// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.ExecuteUbergraph_WBP_PalCharacterScrollList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterScrollList_C::ExecuteUbergraph_WBP_PalCharacterScrollList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterScrollList_C", "ExecuteUbergraph_WBP_PalCharacterScrollList");

	Params::WBP_PalCharacterScrollList_C_ExecuteUbergraph_WBP_PalCharacterScrollList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.FocusPreviousButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*RootSlotButton                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterScrollList_C::FocusPreviousButton(class UWBP_PalCharacterSlotButtonBase_C* RootSlotButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterScrollList_C", "FocusPreviousButton");

	Params::WBP_PalCharacterScrollList_C_FocusPreviousButton Parms{};

	Parms.RootSlotButton = RootSlotButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.FocusToTopContent
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalCharacterScrollList_C::FocusToTopContent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterScrollList_C", "FocusToTopContent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.Get All Children
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWidget*>                  Widgets                                                (Parm, OutParm, ContainsInstancedReference)

void UWBP_PalCharacterScrollList_C::Get_All_Children(TArray<class UWidget*>* Widgets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterScrollList_C", "Get All Children");

	Params::WBP_PalCharacterScrollList_C_Get_All_Children Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Widgets != nullptr)
		*Widgets = std::move(Parms.Widgets);
}


// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.GetTopFocusTarget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterScrollList_C::GetTopFocusTarget(class UWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterScrollList_C", "GetTopFocusTarget");

	Params::WBP_PalCharacterScrollList_C_GetTopFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}


// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.On Right Clicked Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*buttonBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterScrollList_C::On_Right_Clicked_Internal(class UWBP_PalCharacterSlotButtonBase_C* buttonBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterScrollList_C", "On Right Clicked Internal");

	Params::WBP_PalCharacterScrollList_C_On_Right_Clicked_Internal Parms{};

	Parms.buttonBase = buttonBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.OnCreatedSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*CreatedSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterScrollList_C::OnCreatedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* CreatedSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterScrollList_C", "OnCreatedSlot__DelegateSignature");

	Params::WBP_PalCharacterScrollList_C_OnCreatedSlot__DelegateSignature Parms{};

	Parms.CreatedSlot = CreatedSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.OnFocused_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterScrollList_C::OnFocused_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterScrollList_C", "OnFocused_Internal");

	Params::WBP_PalCharacterScrollList_C_OnFocused_Internal Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.OnFocusedSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterScrollList_C::OnFocusedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterScrollList_C", "OnFocusedSlot__DelegateSignature");

	Params::WBP_PalCharacterScrollList_C_OnFocusedSlot__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.OnHovered_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterScrollList_C::OnHovered_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterScrollList_C", "OnHovered_Internal");

	Params::WBP_PalCharacterScrollList_C_OnHovered_Internal Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.OnHoveredSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterScrollList_C::OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterScrollList_C", "OnHoveredSlot__DelegateSignature");

	Params::WBP_PalCharacterScrollList_C_OnHoveredSlot__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalCharacterScrollList_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterScrollList_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.OnLeftClicked_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EPalItemSlotPressType                   PressType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterScrollList_C::OnLeftClicked_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterScrollList_C", "OnLeftClicked_Internal");

	Params::WBP_PalCharacterScrollList_C_OnLeftClicked_Internal Parms{};

	Parms.Widget = Widget;
	Parms.PressType = PressType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.OnLeftClickedSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EPalItemSlotPressType                   PressType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterScrollList_C::OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterScrollList_C", "OnLeftClickedSlot__DelegateSignature");

	Params::WBP_PalCharacterScrollList_C_OnLeftClickedSlot__DelegateSignature Parms{};

	Parms.Widget = Widget;
	Parms.PressType = PressType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.OnRightClickedSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterScrollList_C::OnRightClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterScrollList_C", "OnRightClickedSlot__DelegateSignature");

	Params::WBP_PalCharacterScrollList_C_OnRightClickedSlot__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.OnUnfocused_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterScrollList_C::OnUnfocused_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterScrollList_C", "OnUnfocused_Internal");

	Params::WBP_PalCharacterScrollList_C_OnUnfocused_Internal Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.OnUnfocusedSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterScrollList_C::OnUnfocusedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterScrollList_C", "OnUnfocusedSlot__DelegateSignature");

	Params::WBP_PalCharacterScrollList_C_OnUnfocusedSlot__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.OnUnhovered_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterScrollList_C::OnUnhovered_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterScrollList_C", "OnUnhovered_Internal");

	Params::WBP_PalCharacterScrollList_C_OnUnhovered_Internal Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.OnUnhoveredSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterScrollList_C::OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterScrollList_C", "OnUnhoveredSlot__DelegateSignature");

	Params::WBP_PalCharacterScrollList_C_OnUnhoveredSlot__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.RemoveChild
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*TargetChild                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterScrollList_C::RemoveChild(class UWBP_PalCharacterSlotButtonBase_C* TargetChild)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterScrollList_C", "RemoveChild");

	Params::WBP_PalCharacterScrollList_C_RemoveChild Parms{};

	Parms.TargetChild = TargetChild;

	UObject::ProcessEvent(Func, &Parms);
}

}

