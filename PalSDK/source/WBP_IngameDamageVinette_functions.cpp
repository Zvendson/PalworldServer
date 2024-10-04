#include "PalServer/Basic.hpp"

#include "PalServer/WBP_IngameDamageVinette_classes.hpp"
#include "PalServer/WBP_IngameDamageVinette_parameters.hpp"


namespace PalServer
{

// Function WBP_IngameDamageVinette.WBP_IngameDamageVinette_C.AnmEvent_End
// (BlueprintCallable, BlueprintEvent)

void UWBP_IngameDamageVinette_C::AnmEvent_End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameDamageVinette_C", "AnmEvent_End");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameDamageVinette.WBP_IngameDamageVinette_C.AnmEvent_Start
// (BlueprintCallable, BlueprintEvent)

void UWBP_IngameDamageVinette_C::AnmEvent_Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameDamageVinette_C", "AnmEvent_Start");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameDamageVinette.WBP_IngameDamageVinette_C.ExecuteUbergraph_WBP_IngameDamageVinette
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameDamageVinette_C::ExecuteUbergraph_WBP_IngameDamageVinette(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameDamageVinette_C", "ExecuteUbergraph_WBP_IngameDamageVinette");

	Params::WBP_IngameDamageVinette_C_ExecuteUbergraph_WBP_IngameDamageVinette Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

