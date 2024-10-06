#include "PalServer/Basic.hpp"

#include "PalServer/BP_SupplyDropActor_Capsule_classes.hpp"
#include "PalServer/BP_SupplyDropActor_Capsule_parameters.hpp"


namespace PalServer
{

// Function BP_SupplyDropActor_Capsule.BP_SupplyDropActor_Capsule_C.ExecuteUbergraph_BP_SupplyDropActor_Capsule
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SupplyDropActor_Capsule_C::ExecuteUbergraph_BP_SupplyDropActor_Capsule(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SupplyDropActor_Capsule_C", "ExecuteUbergraph_BP_SupplyDropActor_Capsule");

	Params::BP_SupplyDropActor_Capsule_C_ExecuteUbergraph_BP_SupplyDropActor_Capsule Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SupplyDropActor_Capsule.BP_SupplyDropActor_Capsule_C.OnLanded_BP
// (Event, Protected, BlueprintEvent)

void ABP_SupplyDropActor_Capsule_C::OnLanded_BP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SupplyDropActor_Capsule_C", "OnLanded_BP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SupplyDropActor_Capsule.BP_SupplyDropActor_Capsule_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SupplyDropActor_Capsule_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SupplyDropActor_Capsule_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

