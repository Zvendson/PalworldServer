#include "PalServer/Basic.hpp"

#include "PalServer/BP_Status_RarePal_classes.hpp"
#include "PalServer/BP_Status_RarePal_parameters.hpp"


namespace PalServer
{

// Function BP_Status_RarePal.BP_Status_RarePal_C.ExecuteUbergraph_BP_Status_RarePal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_RarePal_C::ExecuteUbergraph_BP_Status_RarePal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_RarePal_C", "ExecuteUbergraph_BP_Status_RarePal");

	Params::BP_Status_RarePal_C_ExecuteUbergraph_BP_Status_RarePal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_RarePal.BP_Status_RarePal_C.OnBeginStatus
// (Event, Public, BlueprintEvent)

void UBP_Status_RarePal_C::OnBeginStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_RarePal_C", "OnBeginStatus");

	UObject::ProcessEvent(Func, nullptr);
}

}

