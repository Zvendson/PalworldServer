#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_PalCharacterSlotButtonBase_classes.hpp"
#include "PalSDK/WBP_PalCharacterSlotButtonBase_parameters.hpp"


namespace PalSDK
{

// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.BindButtonEvents
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PalCharacterSlotButtonBase_C::BindButtonEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "BindButtonEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.ExecuteUbergraph_WBP_PalCharacterSlotButtonBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::ExecuteUbergraph_WBP_PalCharacterSlotButtonBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "ExecuteUbergraph_WBP_PalCharacterSlotButtonBase");

	Params::WBP_PalCharacterSlotButtonBase_C_ExecuteUbergraph_WBP_PalCharacterSlotButtonBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalCharacterSlotButtonBase_C::Focus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "Focus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.GetIsSlotSync
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    WaitingSync                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::GetIsSlotSync(bool* WaitingSync)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "GetIsSlotSync");

	Params::WBP_PalCharacterSlotButtonBase_C_GetIsSlotSync Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (WaitingSync != nullptr)
		*WaitingSync = Parms.WaitingSync;
}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.GetTargetSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalIndividualCharacterSlot*      TargetSlot                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::GetTargetSlot(class UPalIndividualCharacterSlot** TargetSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "GetTargetSlot");

	Params::WBP_PalCharacterSlotButtonBase_C_GetTargetSlot Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TargetSlot != nullptr)
		*TargetSlot = Parms.TargetSlot;
}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.On Slot Synced
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalCharacterSlotButtonBase_C::On_Slot_Synced()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "On Slot Synced");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_PalCharacterSlotButtonBase_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnAddedToFocusPath");

	Params::WBP_PalCharacterSlotButtonBase_C_OnAddedToFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnClicked_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::OnClicked_Internal(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnClicked_Internal");

	Params::WBP_PalCharacterSlotButtonBase_C_OnClicked_Internal Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnClickedButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EPalItemSlotPressType                   PressType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::OnClickedButton__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnClickedButton__DelegateSignature");

	Params::WBP_PalCharacterSlotButtonBase_C_OnClickedButton__DelegateSignature Parms{};

	Parms.Widget = Widget;
	Parms.PressType = PressType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*               Operation                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnDragDetected");

	Params::WBP_PalCharacterSlotButtonBase_C_OnDragDetected Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);

	UObject::ProcessEvent(Func, &Parms);

	if (Operation != nullptr)
		*Operation = Parms.Operation;
}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnDragged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::OnDragged__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnDragged__DelegateSignature");

	Params::WBP_PalCharacterSlotButtonBase_C_OnDragged__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnDragged_Internal
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PalCharacterSlotButtonBase_C::OnDragged_Internal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnDragged_Internal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*               Operation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_PalCharacterSlotButtonBase_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnDrop");

	Params::WBP_PalCharacterSlotButtonBase_C_OnDrop Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnDropped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::OnDropped__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnDropped__DelegateSignature");

	Params::WBP_PalCharacterSlotButtonBase_C_OnDropped__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnDropped_Internal
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PalCharacterSlotButtonBase_C::OnDropped_Internal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnDropped_Internal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnFocusedWidget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::OnFocusedWidget__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnFocusedWidget__DelegateSignature");

	Params::WBP_PalCharacterSlotButtonBase_C_OnFocusedWidget__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnHovered_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::OnHovered_Internal(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnHovered_Internal");

	Params::WBP_PalCharacterSlotButtonBase_C_OnHovered_Internal Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnHoveredButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::OnHoveredButton__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnHoveredButton__DelegateSignature");

	Params::WBP_PalCharacterSlotButtonBase_C_OnHoveredButton__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalCharacterSlotButtonBase_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_PalCharacterSlotButtonBase_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnMouseButtonDown");

	Params::WBP_PalCharacterSlotButtonBase_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_PalCharacterSlotButtonBase_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnMouseButtonUp");

	Params::WBP_PalCharacterSlotButtonBase_C_OnMouseButtonUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_PalCharacterSlotButtonBase_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnPreviewMouseButtonDown");

	Params::WBP_PalCharacterSlotButtonBase_C_OnPreviewMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_PalCharacterSlotButtonBase_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnRemovedFromFocusPath");

	Params::WBP_PalCharacterSlotButtonBase_C_OnRemovedFromFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnRightClicked_Internal
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PalCharacterSlotButtonBase_C::OnRightClicked_Internal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnRightClicked_Internal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnRightClickedButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*buttonBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::OnRightClickedButton__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* buttonBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnRightClickedButton__DelegateSignature");

	Params::WBP_PalCharacterSlotButtonBase_C_OnRightClickedButton__DelegateSignature Parms{};

	Parms.buttonBase = buttonBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnSlotSync__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*SelfButton                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::OnSlotSync__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* SelfButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnSlotSync__DelegateSignature");

	Params::WBP_PalCharacterSlotButtonBase_C_OnSlotSync__DelegateSignature Parms{};

	Parms.SelfButton = SelfButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnUnFocusedWidget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::OnUnFocusedWidget__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnUnFocusedWidget__DelegateSignature");

	Params::WBP_PalCharacterSlotButtonBase_C_OnUnFocusedWidget__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnUnhovered_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::OnUnhovered_Internal(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnUnhovered_Internal");

	Params::WBP_PalCharacterSlotButtonBase_C_OnUnhovered_Internal Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnUnhoveredButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::OnUnhoveredButton__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "OnUnhoveredButton__DelegateSignature");

	Params::WBP_PalCharacterSlotButtonBase_C_OnUnhoveredButton__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.RegisterButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::RegisterButton(class UCommonButtonBase** Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "RegisterButton");

	Params::WBP_PalCharacterSlotButtonBase_C_RegisterButton Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Button != nullptr)
		*Button = Parms.Button;
}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.RegisterCharacterSlotWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotBase_C*      CharacterSlotWidget                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::RegisterCharacterSlotWidget(class UWBP_PalCharacterSlotBase_C** CharacterSlotWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "RegisterCharacterSlotWidget");

	Params::WBP_PalCharacterSlotButtonBase_C_RegisterCharacterSlotWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CharacterSlotWidget != nullptr)
		*CharacterSlotWidget = Parms.CharacterSlotWidget;
}


// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot*      TargetSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotButtonBase_C::Setup(class UPalIndividualCharacterSlot* TargetSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotButtonBase_C", "Setup");

	Params::WBP_PalCharacterSlotButtonBase_C_Setup Parms{};

	Parms.TargetSlot = TargetSlot;

	UObject::ProcessEvent(Func, &Parms);
}

}

