#include "PalServer/Basic.hpp"

#include "PalServer/BP_Status_Poison_classes.hpp"
#include "PalServer/BP_Status_Poison_parameters.hpp"


namespace PalServer
{

// Function BP_Status_Poison.BP_Status_Poison_C.ExecuteUbergraph_BP_Status_Poison
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_Poison_C::ExecuteUbergraph_BP_Status_Poison(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Poison_C", "ExecuteUbergraph_BP_Status_Poison");

	Params::BP_Status_Poison_C_ExecuteUbergraph_BP_Status_Poison Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_Poison.BP_Status_Poison_C.GetDamageRate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_Poison_C::GetDamageRate(double* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Poison_C", "GetDamageRate");

	Params::BP_Status_Poison_C_GetDamageRate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BP_Status_Poison.BP_Status_Poison_C.OnBeginStatus
// (Event, Public, BlueprintEvent)

void UBP_Status_Poison_C::OnBeginStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Poison_C", "OnBeginStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_Poison.BP_Status_Poison_C.OnEndStatus
// (Event, Public, BlueprintEvent)

void UBP_Status_Poison_C::OnEndStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Poison_C", "OnEndStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_Poison.BP_Status_Poison_C.カスタムイベント_SlipDamage
// (BlueprintCallable, BlueprintEvent)

void UBP_Status_Poison_C::_________________________SlipDamage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Poison_C", "カスタムイベント_SlipDamage");

	UObject::ProcessEvent(Func, nullptr);
}

}

