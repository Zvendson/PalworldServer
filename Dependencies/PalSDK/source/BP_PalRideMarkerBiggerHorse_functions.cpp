#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_PalRideMarkerBiggerHorse_classes.hpp"
#include "PalSDK/BP_PalRideMarkerBiggerHorse_parameters.hpp"


namespace PalSDK
{

// Function BP_PalRideMarkerBiggerHorse.BP_PalRideMarkerBiggerHorse_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalRideMarkerBiggerHorse_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRideMarkerBiggerHorse_C", "ReceiveTick");

	Params::BP_PalRideMarkerBiggerHorse_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalRideMarkerBiggerHorse.BP_PalRideMarkerBiggerHorse_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_PalRideMarkerBiggerHorse_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRideMarkerBiggerHorse_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalRideMarkerBiggerHorse.BP_PalRideMarkerBiggerHorse_C.OnChangeRiding_イベント_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalRideMarkerBiggerHorse_C::OnChangeRiding______________0(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRideMarkerBiggerHorse_C", "OnChangeRiding_イベント_0");

	Params::BP_PalRideMarkerBiggerHorse_C_OnChangeRiding______________0 Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalRideMarkerBiggerHorse.BP_PalRideMarkerBiggerHorse_C.ExecuteUbergraph_BP_PalRideMarkerBiggerHorse
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalRideMarkerBiggerHorse_C::ExecuteUbergraph_BP_PalRideMarkerBiggerHorse(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRideMarkerBiggerHorse_C", "ExecuteUbergraph_BP_PalRideMarkerBiggerHorse");

	Params::BP_PalRideMarkerBiggerHorse_C_ExecuteUbergraph_BP_PalRideMarkerBiggerHorse Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

