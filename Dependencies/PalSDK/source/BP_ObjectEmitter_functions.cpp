#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_ObjectEmitter_classes.hpp"
#include "PalSDK/BP_ObjectEmitter_parameters.hpp"


namespace PalSDK
{

// Function BP_ObjectEmitter.BP_ObjectEmitter_C.Update Lights
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ObjectEmitter_C::Update_Lights()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectEmitter_C", "Update Lights");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ObjectEmitter.BP_ObjectEmitter_C.Update Emissions
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ObjectEmitter_C::Update_Emissions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectEmitter_C", "Update Emissions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ObjectEmitter.BP_ObjectEmitter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ObjectEmitter_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectEmitter_C", "ReceiveTick");

	Params::BP_ObjectEmitter_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectEmitter.BP_ObjectEmitter_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_ObjectEmitter_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectEmitter_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ObjectEmitter.BP_ObjectEmitter_C.ExecuteUbergraph_BP_ObjectEmitter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ObjectEmitter_C::ExecuteUbergraph_BP_ObjectEmitter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectEmitter_C", "ExecuteUbergraph_BP_ObjectEmitter");

	Params::BP_ObjectEmitter_C_ExecuteUbergraph_BP_ObjectEmitter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

