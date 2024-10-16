#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_Ingame_TimeZone_classes.hpp"
#include "PalSDK/WBP_Ingame_TimeZone_parameters.hpp"


namespace PalSDK
{

// Function WBP_Ingame_TimeZone.WBP_Ingame_TimeZone_C.ExecuteUbergraph_WBP_Ingame_TimeZone
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_TimeZone_C::ExecuteUbergraph_WBP_Ingame_TimeZone(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_TimeZone_C", "ExecuteUbergraph_WBP_Ingame_TimeZone");

	Params::WBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_TimeZone.WBP_Ingame_TimeZone_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Ingame_TimeZone_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_TimeZone_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_TimeZone.WBP_Ingame_TimeZone_C.UpdateTime
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_TimeZone_C::UpdateTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_TimeZone_C", "UpdateTime");

	UObject::ProcessEvent(Func, nullptr);
}

}

