#include "PalServer/Basic.hpp"

#include "PalServer/BP_PalSpawnerInfoReporter_classes.hpp"
#include "PalServer/BP_PalSpawnerInfoReporter_parameters.hpp"


namespace PalServer
{

// Function BP_PalSpawnerInfoReporter.BP_PalSpawnerInfoReporter_C.GetDebugInfoString
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalNPCSpawnerBase*               Spawner                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString ABP_PalSpawnerInfoReporter_C::GetDebugInfoString(class APalNPCSpawnerBase* Spawner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSpawnerInfoReporter_C", "GetDebugInfoString");

	Params::BP_PalSpawnerInfoReporter_C_GetDebugInfoString Parms{};

	Parms.Spawner = Spawner;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

