#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_Ingame_Sleep_classes.hpp"
#include "PalSDK/WBP_Ingame_Sleep_parameters.hpp"


namespace PalSDK
{

// Function WBP_Ingame_Sleep.WBP_Ingame_Sleep_C.CloseMenu
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_Sleep_C::CloseMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Sleep_C", "CloseMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_Sleep.WBP_Ingame_Sleep_C.ExecuteUbergraph_WBP_Ingame_Sleep
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Sleep_C::ExecuteUbergraph_WBP_Ingame_Sleep(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Sleep_C", "ExecuteUbergraph_WBP_Ingame_Sleep");

	Params::WBP_Ingame_Sleep_C_ExecuteUbergraph_WBP_Ingame_Sleep Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Sleep.WBP_Ingame_Sleep_C.SetSleepCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Sleep_C::SetSleepCount(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Sleep_C", "SetSleepCount");

	Params::WBP_Ingame_Sleep_C_SetSleepCount Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Sleep.WBP_Ingame_Sleep_C.SetupMenu
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_Sleep_C::SetupMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Sleep_C", "SetupMenu");

	UObject::ProcessEvent(Func, nullptr);
}

}

