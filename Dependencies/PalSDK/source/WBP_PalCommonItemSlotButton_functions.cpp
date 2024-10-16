#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_PalCommonItemSlotButton_classes.hpp"
#include "PalSDK/WBP_PalCommonItemSlotButton_parameters.hpp"


namespace PalSDK
{

// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.AnmEvent_Focus
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalCommonItemSlotButton_C::AnmEvent_Focus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonItemSlotButton_C", "AnmEvent_Focus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.AnmEvent_Lock
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalCommonItemSlotButton_C::AnmEvent_Lock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonItemSlotButton_C", "AnmEvent_Lock");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.AnmEvent_Push
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalCommonItemSlotButton_C::AnmEvent_Push()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonItemSlotButton_C", "AnmEvent_Push");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.AnmEvent_Unfocus
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalCommonItemSlotButton_C::AnmEvent_Unfocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonItemSlotButton_C", "AnmEvent_Unfocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.AnmEvent_Unlock
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalCommonItemSlotButton_C::AnmEvent_Unlock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonItemSlotButton_C", "AnmEvent_Unlock");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.DraggedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonItemSlotButton_C::DraggedEvent(class UWBP_PalItemSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonItemSlotButton_C", "DraggedEvent");

	Params::WBP_PalCommonItemSlotButton_C_DraggedEvent Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.ExecuteUbergraph_WBP_PalCommonItemSlotButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonItemSlotButton_C::ExecuteUbergraph_WBP_PalCommonItemSlotButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonItemSlotButton_C", "ExecuteUbergraph_WBP_PalCommonItemSlotButton");

	Params::WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.LiftedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LiftNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemSlotButtonBase_C*     Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonItemSlotButton_C::LiftedEvent(int32 LiftNum, class UWBP_PalItemSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonItemSlotButton_C", "LiftedEvent");

	Params::WBP_PalCommonItemSlotButton_C_LiftedEvent Parms{};

	Parms.LiftNum = LiftNum;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalCommonItemSlotButton_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonItemSlotButton_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.PlayDropAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonItemSlotButton_C::PlayDropAnim(class UWBP_PalItemSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonItemSlotButton_C", "PlayDropAnim");

	Params::WBP_PalCommonItemSlotButton_C_PlayDropAnim Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.PlayFocusAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonItemSlotButton_C::PlayFocusAnim(class UWBP_PalItemSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonItemSlotButton_C", "PlayFocusAnim");

	Params::WBP_PalCommonItemSlotButton_C_PlayFocusAnim Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.PlayPushAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EPalItemSlotPressType                   PressType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonItemSlotButton_C::PlayPushAnim(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonItemSlotButton_C", "PlayPushAnim");

	Params::WBP_PalCommonItemSlotButton_C_PlayPushAnim Parms{};

	Parms.Widget = Widget;
	Parms.PressType = PressType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.PlayUnfocusAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonItemSlotButton_C::PlayUnfocusAnim(class UWBP_PalItemSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonItemSlotButton_C", "PlayUnfocusAnim");

	Params::WBP_PalCommonItemSlotButton_C_PlayUnfocusAnim Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.RegisterButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonItemSlotButton_C::RegisterButton(class UCommonButtonBase** Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonItemSlotButton_C", "RegisterButton");

	Params::WBP_PalCommonItemSlotButton_C_RegisterButton Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Button != nullptr)
		*Button = Parms.Button;
}


// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.RegisterItemSlotWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotBase_C*           ItemSlotWidget                                         (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonItemSlotButton_C::RegisterItemSlotWidget(class UWBP_PalItemSlotBase_C** ItemSlotWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonItemSlotButton_C", "RegisterItemSlotWidget");

	Params::WBP_PalCommonItemSlotButton_C_RegisterItemSlotWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ItemSlotWidget != nullptr)
		*ItemSlotWidget = Parms.ItemSlotWidget;
}

}

