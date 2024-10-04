#include "PalServer/Basic.hpp"

#include "PalServer/BP_PalRideMarkerSit_classes.hpp"
#include "PalServer/BP_PalRideMarkerSit_parameters.hpp"


namespace PalServer
{

// Function BP_PalRideMarkerSit.BP_PalRideMarkerSit_C.SetMaterialProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Progress                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalRideMarkerSit_C::SetMaterialProgress(double Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRideMarkerSit_C", "SetMaterialProgress");

	Params::BP_PalRideMarkerSit_C_SetMaterialProgress Parms{};

	Parms.Progress = Progress;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalRideMarkerSit.BP_PalRideMarkerSit_C.ResetMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PalRideMarkerSit_C::ResetMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRideMarkerSit_C", "ResetMaterial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalRideMarkerSit.BP_PalRideMarkerSit_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalRideMarkerSit_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRideMarkerSit_C", "ReceiveTick");

	Params::BP_PalRideMarkerSit_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalRideMarkerSit.BP_PalRideMarkerSit_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_PalRideMarkerSit_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRideMarkerSit_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalRideMarkerSit.BP_PalRideMarkerSit_C.OnChangeRiding_イベント_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalRideMarkerSit_C::OnChangeRiding______________0(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRideMarkerSit_C", "OnChangeRiding_イベント_0");

	Params::BP_PalRideMarkerSit_C_OnChangeRiding______________0 Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalRideMarkerSit.BP_PalRideMarkerSit_C.ExecuteUbergraph_BP_PalRideMarkerSit
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalRideMarkerSit_C::ExecuteUbergraph_BP_PalRideMarkerSit(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRideMarkerSit_C", "ExecuteUbergraph_BP_PalRideMarkerSit");

	Params::BP_PalRideMarkerSit_C_ExecuteUbergraph_BP_PalRideMarkerSit Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

