#include "PalServer/Basic.hpp"

#include "PalServer/BP_ItemBase_classes.hpp"
#include "PalServer/BP_ItemBase_parameters.hpp"


namespace PalServer
{

// Function BP_ItemBase.BP_ItemBase_C.ExecuteUbergraph_BP_ItemBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemBase_C::ExecuteUbergraph_BP_ItemBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemBase_C", "ExecuteUbergraph_BP_ItemBase");

	Params::BP_ItemBase_C_ExecuteUbergraph_BP_ItemBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemBase.BP_ItemBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ItemBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

