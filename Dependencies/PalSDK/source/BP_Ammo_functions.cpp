#include "PalServer/Basic.hpp"

#include "PalServer/BP_Ammo_classes.hpp"
#include "PalServer/BP_Ammo_parameters.hpp"


namespace PalServer
{

// Function BP_Ammo.BP_Ammo_C.ExecuteUbergraph_BP_Ammo
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Ammo_C::ExecuteUbergraph_BP_Ammo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ammo_C", "ExecuteUbergraph_BP_Ammo");

	Params::BP_Ammo_C_ExecuteUbergraph_BP_Ammo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Ammo.BP_Ammo_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Ammo_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ammo_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

