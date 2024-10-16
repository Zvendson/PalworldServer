#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SupplyDropActor_Meteor_classes.hpp"
#include "PalSDK/BP_SupplyDropActor_Meteor_parameters.hpp"


namespace PalSDK
{

// Function BP_SupplyDropActor_Meteor.BP_SupplyDropActor_Meteor_C.ExecuteUbergraph_BP_SupplyDropActor_Meteor
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SupplyDropActor_Meteor_C::ExecuteUbergraph_BP_SupplyDropActor_Meteor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SupplyDropActor_Meteor_C", "ExecuteUbergraph_BP_SupplyDropActor_Meteor");

	Params::BP_SupplyDropActor_Meteor_C_ExecuteUbergraph_BP_SupplyDropActor_Meteor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SupplyDropActor_Meteor.BP_SupplyDropActor_Meteor_C.OnLanded_BP
// (Event, Protected, BlueprintEvent)

void ABP_SupplyDropActor_Meteor_C::OnLanded_BP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SupplyDropActor_Meteor_C", "OnLanded_BP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SupplyDropActor_Meteor.BP_SupplyDropActor_Meteor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SupplyDropActor_Meteor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SupplyDropActor_Meteor_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

