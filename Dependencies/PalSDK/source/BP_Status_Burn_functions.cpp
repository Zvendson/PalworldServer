#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_Status_Burn_classes.hpp"
#include "PalSDK/BP_Status_Burn_parameters.hpp"


namespace PalSDK
{

// Function BP_Status_Burn.BP_Status_Burn_C.ExecuteUbergraph_BP_Status_Burn
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_Burn_C::ExecuteUbergraph_BP_Status_Burn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Burn_C", "ExecuteUbergraph_BP_Status_Burn");

	Params::BP_Status_Burn_C_ExecuteUbergraph_BP_Status_Burn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_Burn.BP_Status_Burn_C.OnBeginStatus
// (Event, Public, BlueprintEvent)

void UBP_Status_Burn_C::OnBeginStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Burn_C", "OnBeginStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_Burn.BP_Status_Burn_C.OnEndStatus
// (Event, Public, BlueprintEvent)

void UBP_Status_Burn_C::OnEndStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Burn_C", "OnEndStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_Burn.BP_Status_Burn_C.TickStatus
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_Burn_C::TickStatus(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Burn_C", "TickStatus");

	Params::BP_Status_Burn_C_TickStatus Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_Burn.BP_Status_Burn_C.カスタムイベント_2
// (BlueprintCallable, BlueprintEvent)

void UBP_Status_Burn_C::_________________________2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Burn_C", "カスタムイベント_2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_Burn.BP_Status_Burn_C.カスタムイベント_SlipDamage
// (BlueprintCallable, BlueprintEvent)

void UBP_Status_Burn_C::_________________________SlipDamage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Burn_C", "カスタムイベント_SlipDamage");

	UObject::ProcessEvent(Func, nullptr);
}

}

