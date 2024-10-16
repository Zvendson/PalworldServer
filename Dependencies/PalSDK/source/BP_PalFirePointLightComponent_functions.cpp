#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_PalFirePointLightComponent_classes.hpp"
#include "PalSDK/BP_PalFirePointLightComponent_parameters.hpp"


namespace PalSDK
{

// Function BP_PalFirePointLightComponent.BP_PalFirePointLightComponent_C.CacheAndClearIntensity
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_PalFirePointLightComponent_C::CacheAndClearIntensity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalFirePointLightComponent_C", "CacheAndClearIntensity");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalFirePointLightComponent.BP_PalFirePointLightComponent_C.ExecuteUbergraph_BP_PalFirePointLightComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalFirePointLightComponent_C::ExecuteUbergraph_BP_PalFirePointLightComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalFirePointLightComponent_C", "ExecuteUbergraph_BP_PalFirePointLightComponent");

	Params::BP_PalFirePointLightComponent_C_ExecuteUbergraph_BP_PalFirePointLightComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalFirePointLightComponent.BP_PalFirePointLightComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_PalFirePointLightComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalFirePointLightComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalFirePointLightComponent.BP_PalFirePointLightComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalFirePointLightComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalFirePointLightComponent_C", "ReceiveTick");

	Params::BP_PalFirePointLightComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalFirePointLightComponent.BP_PalFirePointLightComponent_C.ResetBlinkDuration
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_PalFirePointLightComponent_C::ResetBlinkDuration()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalFirePointLightComponent_C", "ResetBlinkDuration");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalFirePointLightComponent.BP_PalFirePointLightComponent_C.GetCurrentProgressCurveValue
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UBP_PalFirePointLightComponent_C::GetCurrentProgressCurveValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalFirePointLightComponent_C", "GetCurrentProgressCurveValue");

	Params::BP_PalFirePointLightComponent_C_GetCurrentProgressCurveValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

