#include "PalServer/Basic.hpp"

#include "PalServer/WBP_Ingame_PalSkill_Flight_classes.hpp"
#include "PalServer/WBP_Ingame_PalSkill_Flight_parameters.hpp"


namespace PalServer
{

// Function WBP_Ingame_PalSkill_Flight.WBP_Ingame_PalSkill_Flight_C.AnmEvent_EndInteract
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalSkill_Flight_C::AnmEvent_EndInteract()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalSkill_Flight_C", "AnmEvent_EndInteract");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalSkill_Flight.WBP_Ingame_PalSkill_Flight_C.AnmEvent_StartInteract
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalSkill_Flight_C::AnmEvent_StartInteract()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalSkill_Flight_C", "AnmEvent_StartInteract");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalSkill_Flight.WBP_Ingame_PalSkill_Flight_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Ingame_PalSkill_Flight_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalSkill_Flight_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalSkill_Flight.WBP_Ingame_PalSkill_Flight_C.ExecuteUbergraph_WBP_Ingame_PalSkill_Flight
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalSkill_Flight_C::ExecuteUbergraph_WBP_Ingame_PalSkill_Flight(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalSkill_Flight_C", "ExecuteUbergraph_WBP_Ingame_PalSkill_Flight");

	Params::WBP_Ingame_PalSkill_Flight_C_ExecuteUbergraph_WBP_Ingame_PalSkill_Flight Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PalSkill_Flight.WBP_Ingame_PalSkill_Flight_C.OnDownInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType                        bNewInputType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalSkill_Flight_C::OnDownInputMethodChanged(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalSkill_Flight_C", "OnDownInputMethodChanged");

	Params::WBP_Ingame_PalSkill_Flight_C_OnDownInputMethodChanged Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}

}

