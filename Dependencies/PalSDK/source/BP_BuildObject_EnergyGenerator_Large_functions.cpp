#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_BuildObject_EnergyGenerator_Large_classes.hpp"
#include "PalSDK/BP_BuildObject_EnergyGenerator_Large_parameters.hpp"


namespace PalSDK
{

// Function BP_BuildObject_EnergyGenerator_Large.BP_BuildObject_EnergyGenerator_Large_C.OnEndGenerate
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABP_BuildObject_EnergyGenerator_Large_C::OnEndGenerate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_EnergyGenerator_Large_C", "OnEndGenerate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BuildObject_EnergyGenerator_Large.BP_BuildObject_EnergyGenerator_Large_C.OnStartGenerate
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABP_BuildObject_EnergyGenerator_Large_C::OnStartGenerate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_EnergyGenerator_Large_C", "OnStartGenerate");

	UObject::ProcessEvent(Func, nullptr);
}

}

