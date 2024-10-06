#include "PalServer/Basic.hpp"

#include "PalServer/BP_CutsceneActor_Arena_PreBattle_classes.hpp"
#include "PalServer/BP_CutsceneActor_Arena_PreBattle_parameters.hpp"


namespace PalServer
{

// Function BP_CutsceneActor_Arena_PreBattle.BP_CutsceneActor_Arena_PreBattle_C.ExecuteUbergraph_BP_CutsceneActor_Arena_PreBattle
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CutsceneActor_Arena_PreBattle_C::ExecuteUbergraph_BP_CutsceneActor_Arena_PreBattle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CutsceneActor_Arena_PreBattle_C", "ExecuteUbergraph_BP_CutsceneActor_Arena_PreBattle");

	Params::BP_CutsceneActor_Arena_PreBattle_C_ExecuteUbergraph_BP_CutsceneActor_Arena_PreBattle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CutsceneActor_Arena_PreBattle.BP_CutsceneActor_Arena_PreBattle_C.OnPrePlayCutscene
// (Event, Public, BlueprintEvent)

void ABP_CutsceneActor_Arena_PreBattle_C::OnPrePlayCutscene()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CutsceneActor_Arena_PreBattle_C", "OnPrePlayCutscene");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CutsceneActor_Arena_PreBattle.BP_CutsceneActor_Arena_PreBattle_C.SetBindParameter
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalCutsceneBindParameter*        BindParameter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CutsceneActor_Arena_PreBattle_C::SetBindParameter(class UPalCutsceneBindParameter* BindParameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CutsceneActor_Arena_PreBattle_C", "SetBindParameter");

	Params::BP_CutsceneActor_Arena_PreBattle_C_SetBindParameter Parms{};

	Parms.BindParameter = BindParameter;

	UObject::ProcessEvent(Func, &Parms);
}

}

