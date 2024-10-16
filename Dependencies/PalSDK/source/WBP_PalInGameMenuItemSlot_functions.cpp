#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_PalInGameMenuItemSlot_classes.hpp"
#include "PalSDK/WBP_PalInGameMenuItemSlot_parameters.hpp"


namespace PalSDK
{

// Function WBP_PalInGameMenuItemSlot.WBP_PalInGameMenuItemSlot_C.EmptySlotEvent
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalInGameMenuItemSlot_C::EmptySlotEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlot_C", "EmptySlotEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalInGameMenuItemSlot.WBP_PalInGameMenuItemSlot_C.ExecuteUbergraph_WBP_PalInGameMenuItemSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInGameMenuItemSlot_C::ExecuteUbergraph_WBP_PalInGameMenuItemSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlot_C", "ExecuteUbergraph_WBP_PalInGameMenuItemSlot");

	Params::WBP_PalInGameMenuItemSlot_C_ExecuteUbergraph_WBP_PalInGameMenuItemSlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalInGameMenuItemSlot.WBP_PalInGameMenuItemSlot_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalInGameMenuItemSlot_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlot_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalInGameMenuItemSlot.WBP_PalInGameMenuItemSlot_C.RegisterItemIconWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemIconBase_C*           IconWidget                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInGameMenuItemSlot_C::RegisterItemIconWidget(class UWBP_PalItemIconBase_C** IconWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlot_C", "RegisterItemIconWidget");

	Params::WBP_PalInGameMenuItemSlot_C_RegisterItemIconWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IconWidget != nullptr)
		*IconWidget = Parms.IconWidget;
}


// Function WBP_PalInGameMenuItemSlot.WBP_PalInGameMenuItemSlot_C.UpdateSlotEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemSlot*                     TargetSlot_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInGameMenuItemSlot_C::UpdateSlotEvent(class UPalItemSlot* TargetSlot_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlot_C", "UpdateSlotEvent");

	Params::WBP_PalInGameMenuItemSlot_C_UpdateSlotEvent Parms{};

	Parms.TargetSlot_0 = TargetSlot_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalInGameMenuItemSlot.WBP_PalInGameMenuItemSlot_C.ValidSlotEvent
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalInGameMenuItemSlot_C::ValidSlotEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlot_C", "ValidSlotEvent");

	UObject::ProcessEvent(Func, nullptr);
}

}

