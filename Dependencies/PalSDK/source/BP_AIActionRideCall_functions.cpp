#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_AIActionRideCall_classes.hpp"
#include "PalSDK/BP_AIActionRideCall_parameters.hpp"


namespace PalSDK
{

// Function BP_AIActionRideCall.BP_AIActionRideCall_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionRideCall_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionRideCall_C", "ActionTick");

	Params::BP_AIActionRideCall_C_ActionTick Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionRideCall.BP_AIActionRideCall_C.CanRide
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    CanRide_0                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionRideCall_C::CanRide(bool* CanRide_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionRideCall_C", "CanRide");

	Params::BP_AIActionRideCall_C_CanRide Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CanRide_0 != nullptr)
		*CanRide_0 = Parms.CanRide_0;
}


// Function BP_AIActionRideCall.BP_AIActionRideCall_C.CheckWallRaycast
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    HitWall                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionRideCall_C::CheckWallRaycast(bool* HitWall)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionRideCall_C", "CheckWallRaycast");

	Params::BP_AIActionRideCall_C_CheckWallRaycast Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HitWall != nullptr)
		*HitWall = Parms.HitWall;
}


// Function BP_AIActionRideCall.BP_AIActionRideCall_C.DoRide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionRideCall_C::DoRide(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionRideCall_C", "DoRide");

	Params::BP_AIActionRideCall_C_DoRide Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionRideCall.BP_AIActionRideCall_C.ExecuteUbergraph_BP_AIActionRideCall
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionRideCall_C::ExecuteUbergraph_BP_AIActionRideCall(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionRideCall_C", "ExecuteUbergraph_BP_AIActionRideCall");

	Params::BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

