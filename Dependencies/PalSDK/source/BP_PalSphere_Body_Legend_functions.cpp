#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_PalSphere_Body_Legend_classes.hpp"
#include "PalSDK/BP_PalSphere_Body_Legend_parameters.hpp"


namespace PalSDK
{

// Function BP_PalSphere_Body_Legend.BP_PalSphere_Body_Legend_C.ExecuteUbergraph_BP_PalSphere_Body_Legend
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_Body_Legend_C::ExecuteUbergraph_BP_PalSphere_Body_Legend(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_Legend_C", "ExecuteUbergraph_BP_PalSphere_Body_Legend");

	Params::BP_PalSphere_Body_Legend_C_ExecuteUbergraph_BP_PalSphere_Body_Legend Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSphere_Body_Legend.BP_PalSphere_Body_Legend_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PalSphere_Body_Legend_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_Legend_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

