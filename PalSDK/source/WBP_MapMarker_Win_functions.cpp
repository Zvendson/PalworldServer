#include "PalServer/Basic.hpp"

#include "PalServer/WBP_MapMarker_Win_classes.hpp"
#include "PalServer/WBP_MapMarker_Win_parameters.hpp"


namespace PalServer
{

// Function WBP_MapMarker_Win.WBP_MapMarker_Win_C.ChangeCustomIcon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Map_IconCustom_C*            Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapMarker_Win_C::ChangeCustomIcon__DelegateSignature(class UWBP_Map_IconCustom_C* Icon, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapMarker_Win_C", "ChangeCustomIcon__DelegateSignature");

	Params::WBP_MapMarker_Win_C_ChangeCustomIcon__DelegateSignature Parms{};

	Parms.Icon = Icon;
	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MapMarker_Win.WBP_MapMarker_Win_C.ChangeIconType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapMarker_Win_C::ChangeIconType(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapMarker_Win_C", "ChangeIconType");

	Params::WBP_MapMarker_Win_C_ChangeIconType Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MapMarker_Win.WBP_MapMarker_Win_C.ClickDeleteButton
// (BlueprintCallable, BlueprintEvent)

void UWBP_MapMarker_Win_C::ClickDeleteButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapMarker_Win_C", "ClickDeleteButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MapMarker_Win.WBP_MapMarker_Win_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MapMarker_Win_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapMarker_Win_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MapMarker_Win.WBP_MapMarker_Win_C.DoCustomNavigation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_MapMarker_Win_C::DoCustomNavigation(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapMarker_Win_C", "DoCustomNavigation");

	Params::WBP_MapMarker_Win_C_DoCustomNavigation Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_MapMarker_Win.WBP_MapMarker_Win_C.ExecuteUbergraph_WBP_MapMarker_Win
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapMarker_Win_C::ExecuteUbergraph_WBP_MapMarker_Win(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapMarker_Win_C", "ExecuteUbergraph_WBP_MapMarker_Win");

	Params::WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MapMarker_Win.WBP_MapMarker_Win_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_MapMarker_Win_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapMarker_Win_C", "OnRemovedFromFocusPath");

	Params::WBP_MapMarker_Win_C_OnRemovedFromFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MapMarker_Win.WBP_MapMarker_Win_C.RemoveCustomIcon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Map_IconCustom_C*            Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MapMarker_Win_C::RemoveCustomIcon__DelegateSignature(class UWBP_Map_IconCustom_C* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapMarker_Win_C", "RemoveCustomIcon__DelegateSignature");

	Params::WBP_MapMarker_Win_C_RemoveCustomIcon__DelegateSignature Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MapMarker_Win.WBP_MapMarker_Win_C.SetEdittingIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Map_IconCustom_C*            CustomIcon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MapMarker_Win_C::SetEdittingIcon(class UWBP_Map_IconCustom_C* CustomIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapMarker_Win_C", "SetEdittingIcon");

	Params::WBP_MapMarker_Win_C_SetEdittingIcon Parms{};

	Parms.CustomIcon = CustomIcon;

	UObject::ProcessEvent(Func, &Parms);
}

}

