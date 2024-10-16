#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_PalSphere_Body_Ultimate_classes.hpp"
#include "PalSDK/BP_PalSphere_Body_Ultimate_parameters.hpp"


namespace PalSDK
{

// Function BP_PalSphere_Body_Ultimate.BP_PalSphere_Body_Ultimate_C.ExecuteUbergraph_BP_PalSphere_Body_Ultimate
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_Body_Ultimate_C::ExecuteUbergraph_BP_PalSphere_Body_Ultimate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_Ultimate_C", "ExecuteUbergraph_BP_PalSphere_Body_Ultimate");

	Params::BP_PalSphere_Body_Ultimate_C_ExecuteUbergraph_BP_PalSphere_Body_Ultimate Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSphere_Body_Ultimate.BP_PalSphere_Body_Ultimate_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PalSphere_Body_Ultimate_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_Body_Ultimate_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

