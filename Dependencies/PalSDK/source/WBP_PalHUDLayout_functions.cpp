#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_PalHUDLayout_classes.hpp"
#include "PalSDK/WBP_PalHUDLayout_parameters.hpp"


namespace PalSDK
{

// Function WBP_PalHUDLayout.WBP_PalHUDLayout_C.AddHUD
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPalUserWidget*                   Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   ZOrder                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalHUDLayout_C::AddHUD(class UPalUserWidget* Widget, const int32 ZOrder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalHUDLayout_C", "AddHUD");

	Params::WBP_PalHUDLayout_C_AddHUD Parms{};

	Parms.Widget = Widget;
	Parms.ZOrder = ZOrder;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalHUDLayout.WBP_PalHUDLayout_C.AddWorldHUD
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPalUserWidgetWorldHUD*           Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalHUDLayout_C::AddWorldHUD(class UPalUserWidgetWorldHUD* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalHUDLayout_C", "AddWorldHUD");

	Params::WBP_PalHUDLayout_C_AddWorldHUD Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalHUDLayout.WBP_PalHUDLayout_C.ExecuteUbergraph_WBP_PalHUDLayout
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalHUDLayout_C::ExecuteUbergraph_WBP_PalHUDLayout(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalHUDLayout_C", "ExecuteUbergraph_WBP_PalHUDLayout");

	Params::WBP_PalHUDLayout_C_ExecuteUbergraph_WBP_PalHUDLayout Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalHUDLayout.WBP_PalHUDLayout_C.RemoveHUD
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPalUserWidget*                   Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalHUDLayout_C::RemoveHUD(class UPalUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalHUDLayout_C", "RemoveHUD");

	Params::WBP_PalHUDLayout_C_RemoveHUD Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalHUDLayout.WBP_PalHUDLayout_C.RemoveWorldHUD
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPalUserWidgetWorldHUD*           Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalHUDLayout_C::RemoveWorldHUD(class UPalUserWidgetWorldHUD* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalHUDLayout_C", "RemoveWorldHUD");

	Params::WBP_PalHUDLayout_C_RemoveWorldHUD Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}

}

