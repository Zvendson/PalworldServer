#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_PalRegionTriggerBox_classes.hpp"
#include "PalSDK/BP_PalRegionTriggerBox_parameters.hpp"


namespace PalSDK
{

// Function BP_PalRegionTriggerBox.BP_PalRegionTriggerBox_C.ExecuteUbergraph_BP_PalRegionTriggerBox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRegionTriggerBox_C::ExecuteUbergraph_BP_PalRegionTriggerBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRegionTriggerBox_C", "ExecuteUbergraph_BP_PalRegionTriggerBox");

	Params::BP_PalRegionTriggerBox_C_ExecuteUbergraph_BP_PalRegionTriggerBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalRegionTriggerBox.BP_PalRegionTriggerBox_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalRegionTriggerBox_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRegionTriggerBox_C", "ReceiveActorBeginOverlap");

	Params::BP_PalRegionTriggerBox_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}

}

