#include "PalServer/Basic.hpp"

#include "PalServer/BP_Status_Muddy_classes.hpp"
#include "PalServer/BP_Status_Muddy_parameters.hpp"


namespace PalServer
{

// Function BP_Status_Muddy.BP_Status_Muddy_C.ExecuteUbergraph_BP_Status_Muddy
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_Muddy_C::ExecuteUbergraph_BP_Status_Muddy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Muddy_C", "ExecuteUbergraph_BP_Status_Muddy");

	Params::BP_Status_Muddy_C_ExecuteUbergraph_BP_Status_Muddy Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_Muddy.BP_Status_Muddy_C.OnBeginStatus
// (Event, Public, BlueprintEvent)

void UBP_Status_Muddy_C::OnBeginStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Muddy_C", "OnBeginStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_Muddy.BP_Status_Muddy_C.OnEndStatus
// (Event, Public, BlueprintEvent)

void UBP_Status_Muddy_C::OnEndStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Muddy_C", "OnEndStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_Muddy.BP_Status_Muddy_C.カスタムイベント_2
// (BlueprintCallable, BlueprintEvent)

void UBP_Status_Muddy_C::_________________________2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Muddy_C", "カスタムイベント_2");

	UObject::ProcessEvent(Func, nullptr);
}

}

