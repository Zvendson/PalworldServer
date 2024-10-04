#include "PalServer/Basic.hpp"

#include "PalServer/BP_BuildObject_EnergyGenerator_Electric_classes.hpp"
#include "PalServer/BP_BuildObject_EnergyGenerator_Electric_parameters.hpp"


namespace PalServer
{

// Function BP_BuildObject_EnergyGenerator_Electric.BP_BuildObject_EnergyGenerator_Electric_C.OnEndGenerate
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABP_BuildObject_EnergyGenerator_Electric_C::OnEndGenerate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_EnergyGenerator_Electric_C", "OnEndGenerate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BuildObject_EnergyGenerator_Electric.BP_BuildObject_EnergyGenerator_Electric_C.OnStartGenerate
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABP_BuildObject_EnergyGenerator_Electric_C::OnStartGenerate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_EnergyGenerator_Electric_C", "OnStartGenerate");

	UObject::ProcessEvent(Func, nullptr);
}

}

