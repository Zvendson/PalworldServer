#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_PalDialog_classes.hpp"
#include "PalSDK/WBP_PalDialog_parameters.hpp"


namespace PalSDK
{

// Function WBP_PalDialog.WBP_PalDialog_C.BndEvt__WBP_PalDialog_WBP_CommonPopupWindow_K2Node_ComponentBoundEvent_2_OnClickedLeftButton__DelegateSignature
// (BlueprintEvent)

void UWBP_PalDialog_C::BndEvt__WBP_PalDialog_WBP_CommonPopupWindow_K2Node_ComponentBoundEvent_2_OnClickedLeftButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalDialog_C", "BndEvt__WBP_PalDialog_WBP_CommonPopupWindow_K2Node_ComponentBoundEvent_2_OnClickedLeftButton__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalDialog.WBP_PalDialog_C.BndEvt__WBP_PalDialog_WBP_CommonPopupWindow_K2Node_ComponentBoundEvent_3_OnClickedRightButton__DelegateSignature
// (BlueprintEvent)

void UWBP_PalDialog_C::BndEvt__WBP_PalDialog_WBP_CommonPopupWindow_K2Node_ComponentBoundEvent_3_OnClickedRightButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalDialog_C", "BndEvt__WBP_PalDialog_WBP_CommonPopupWindow_K2Node_ComponentBoundEvent_3_OnClickedRightButton__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalDialog.WBP_PalDialog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalDialog_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalDialog_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalDialog.WBP_PalDialog_C.ExecuteUbergraph_WBP_PalDialog
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDialog_C::ExecuteUbergraph_WBP_PalDialog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalDialog_C", "ExecuteUbergraph_WBP_PalDialog");

	Params::WBP_PalDialog_C_ExecuteUbergraph_WBP_PalDialog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalDialog.WBP_PalDialog_C.OnCancelAction
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalDialog_C::OnCancelAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalDialog_C", "OnCancelAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalDialog.WBP_PalDialog_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_PalDialog_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalDialog_C", "OnSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalDialog.WBP_PalDialog_C.OnShortcutConfirm
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalDialog_C::OnShortcutConfirm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalDialog_C", "OnShortcutConfirm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalDialog.WBP_PalDialog_C.SetupUI
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalDialogType                          DialogType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Message                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PalDialog_C::SetupUI(EPalDialogType DialogType, const class FText& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalDialog_C", "SetupUI");

	Params::WBP_PalDialog_C_SetupUI Parms{};

	Parms.DialogType = DialogType;
	Parms.Message = std::move(Message);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalDialog.WBP_PalDialog_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_PalDialog_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalDialog_C", "BP_GetDesiredFocusTarget");

	Params::WBP_PalDialog_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

