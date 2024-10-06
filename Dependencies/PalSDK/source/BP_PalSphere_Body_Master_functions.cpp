#include "PalServer/Basic.hpp"

#include "PalServer/BP_PalSphere_Body_Master_classes.hpp"
#include "PalServer/BP_PalSphere_Body_Master_parameters.hpp"


namespace PalServer
{

// Function BP_PalSphere_Body_Master.BP_PalSphere_Body_Master_C.ExecuteUbergraph_BP_PalSphere_Body_Master
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_Body_Master_C::ExecuteUbergraph_BP_PalSphere_Body_Master(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_Master_C", "ExecuteUbergraph_BP_PalSphere_Body_Master");

	Params::BP_PalSphere_Body_Master_C_ExecuteUbergraph_BP_PalSphere_Body_Master Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSphere_Body_Master.BP_PalSphere_Body_Master_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PalSphere_Body_Master_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_Master_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

