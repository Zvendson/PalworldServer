#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_MapObject_PickupItem_Base_classes.hpp"
#include "PalSDK/BP_MapObject_PickupItem_Base_parameters.hpp"


namespace PalSDK
{

// Function BP_MapObject_PickupItem_Base.BP_MapObject_PickupItem_Base_C.ExecuteUbergraph_BP_MapObject_PickupItem_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_PickupItem_Base_C::ExecuteUbergraph_BP_MapObject_PickupItem_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_PickupItem_Base_C", "ExecuteUbergraph_BP_MapObject_PickupItem_Base");

	Params::BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapObject_PickupItem_Base.BP_MapObject_PickupItem_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MapObject_PickupItem_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_PickupItem_Base_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

