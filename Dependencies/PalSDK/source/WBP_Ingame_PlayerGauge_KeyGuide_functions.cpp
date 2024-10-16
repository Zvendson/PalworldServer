#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_Ingame_PlayerGauge_KeyGuide_classes.hpp"
#include "PalSDK/WBP_Ingame_PlayerGauge_KeyGuide_parameters.hpp"


namespace PalSDK
{

// Function WBP_Ingame_PlayerGauge_KeyGuide.WBP_Ingame_PlayerGauge_KeyGuide_C.ExecuteUbergraph_WBP_Ingame_PlayerGauge_KeyGuide
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_KeyGuide_C::ExecuteUbergraph_WBP_Ingame_PlayerGauge_KeyGuide(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_KeyGuide_C", "ExecuteUbergraph_WBP_Ingame_PlayerGauge_KeyGuide");

	Params::WBP_Ingame_PlayerGauge_KeyGuide_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_KeyGuide Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerGauge_KeyGuide.WBP_Ingame_PlayerGauge_KeyGuide_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Ingame_PlayerGauge_KeyGuide_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_KeyGuide_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

}

