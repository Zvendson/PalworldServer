#include "PalServer/Basic.hpp"

#include "PalServer/BP_PalSupplyIncidentSpawnerBase_classes.hpp"
#include "PalServer/BP_PalSupplyIncidentSpawnerBase_parameters.hpp"


namespace PalServer
{

// Function BP_PalSupplyIncidentSpawnerBase.BP_PalSupplyIncidentSpawnerBase_C.ExecuteUbergraph_BP_PalSupplyIncidentSpawnerBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSupplyIncidentSpawnerBase_C::ExecuteUbergraph_BP_PalSupplyIncidentSpawnerBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncidentSpawnerBase_C", "ExecuteUbergraph_BP_PalSupplyIncidentSpawnerBase");

	Params::BP_PalSupplyIncidentSpawnerBase_C_ExecuteUbergraph_BP_PalSupplyIncidentSpawnerBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSupplyIncidentSpawnerBase.BP_PalSupplyIncidentSpawnerBase_C.WipedOut
// (BlueprintCallable, BlueprintEvent)

void ABP_PalSupplyIncidentSpawnerBase_C::WipedOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncidentSpawnerBase_C", "WipedOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSupplyIncidentSpawnerBase.BP_PalSupplyIncidentSpawnerBase_C.OnIncidentSpawned
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UPalIncidentBase*                 Incident                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentDynamicParameterRandom*DynamicParameter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalSupplyIncidentSpawnerBase_C::OnIncidentSpawned(class UPalIncidentBase* Incident, class UPalIncidentDynamicParameterRandom* DynamicParameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncidentSpawnerBase_C", "OnIncidentSpawned");

	Params::BP_PalSupplyIncidentSpawnerBase_C_OnIncidentSpawned Parms{};

	Parms.Incident = Incident;
	Parms.DynamicParameter = DynamicParameter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSupplyIncidentSpawnerBase.BP_PalSupplyIncidentSpawnerBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PalSupplyIncidentSpawnerBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncidentSpawnerBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSupplyIncidentSpawnerBase.BP_PalSupplyIncidentSpawnerBase_C.ReleaseIncident
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PalSupplyIncidentSpawnerBase_C::ReleaseIncident()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncidentSpawnerBase_C", "ReleaseIncident");

	UObject::ProcessEvent(Func, nullptr);
}

}

