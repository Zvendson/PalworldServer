#include "PalServer/Basic.hpp"

#include "PalServer/BP_OtomoPalHolderComponentForNPC_classes.hpp"
#include "PalServer/BP_OtomoPalHolderComponentForNPC_parameters.hpp"


namespace PalServer
{

// Function BP_OtomoPalHolderComponentForNPC.BP_OtomoPalHolderComponentForNPC_C.ExecuteUbergraph_BP_OtomoPalHolderComponentForNPC
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponentForNPC_C::ExecuteUbergraph_BP_OtomoPalHolderComponentForNPC(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OtomoPalHolderComponentForNPC_C", "ExecuteUbergraph_BP_OtomoPalHolderComponentForNPC");

	Params::BP_OtomoPalHolderComponentForNPC_C_ExecuteUbergraph_BP_OtomoPalHolderComponentForNPC Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OtomoPalHolderComponentForNPC.BP_OtomoPalHolderComponentForNPC_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_OtomoPalHolderComponentForNPC_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OtomoPalHolderComponentForNPC_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

