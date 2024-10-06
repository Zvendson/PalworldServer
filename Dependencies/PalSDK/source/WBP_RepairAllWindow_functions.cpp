#include "PalServer/Basic.hpp"

#include "PalServer/WBP_RepairAllWindow_classes.hpp"
#include "PalServer/WBP_RepairAllWindow_parameters.hpp"


namespace PalServer
{

// Function WBP_RepairAllWindow.WBP_RepairAllWindow_C.BndEvt__WBP_RepairAllWindow_WBP_IngameMenu_RepairAll_K2Node_ComponentBoundEvent_0_OnClickedButton__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsYes                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RepairAllWindow_C::BndEvt__WBP_RepairAllWindow_WBP_IngameMenu_RepairAll_K2Node_ComponentBoundEvent_0_OnClickedButton__DelegateSignature(bool IsYes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RepairAllWindow_C", "BndEvt__WBP_RepairAllWindow_WBP_IngameMenu_RepairAll_K2Node_ComponentBoundEvent_0_OnClickedButton__DelegateSignature");

	Params::WBP_RepairAllWindow_C_BndEvt__WBP_RepairAllWindow_WBP_IngameMenu_RepairAll_K2Node_ComponentBoundEvent_0_OnClickedButton__DelegateSignature Parms{};

	Parms.IsYes = IsYes;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_RepairAllWindow.WBP_RepairAllWindow_C.ExecuteUbergraph_WBP_RepairAllWindow
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RepairAllWindow_C::ExecuteUbergraph_WBP_RepairAllWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RepairAllWindow_C", "ExecuteUbergraph_WBP_RepairAllWindow");

	Params::WBP_RepairAllWindow_C_ExecuteUbergraph_WBP_RepairAllWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_RepairAllWindow.WBP_RepairAllWindow_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_RepairAllWindow_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RepairAllWindow_C", "OnSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_RepairAllWindow.WBP_RepairAllWindow_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_RepairAllWindow_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RepairAllWindow_C", "BP_GetDesiredFocusTarget");

	Params::WBP_RepairAllWindow_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

