#include "PalServer/Basic.hpp"

#include "PalServer/WBP_IngameMenu_PalBox_PageControl_classes.hpp"
#include "PalServer/WBP_IngameMenu_PalBox_PageControl_parameters.hpp"


namespace PalServer
{

// Function WBP_IngameMenu_PalBox_PageControl.WBP_IngameMenu_PalBox_PageControl_C.AnmEvent_Select
// (BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_PalBox_PageControl_C::AnmEvent_Select()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_PageControl_C", "AnmEvent_Select");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalBox_PageControl.WBP_IngameMenu_PalBox_PageControl_C.AnmEvent_Unselect
// (BlueprintCallable, BlueprintEvent)

void UWBP_IngameMenu_PalBox_PageControl_C::AnmEvent_Unselect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_PageControl_C", "AnmEvent_Unselect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_PalBox_PageControl.WBP_IngameMenu_PalBox_PageControl_C.ExecuteUbergraph_WBP_IngameMenu_PalBox_PageControl
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_PageControl_C::ExecuteUbergraph_WBP_IngameMenu_PalBox_PageControl(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_PageControl_C", "ExecuteUbergraph_WBP_IngameMenu_PalBox_PageControl");

	Params::WBP_IngameMenu_PalBox_PageControl_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PageControl Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

