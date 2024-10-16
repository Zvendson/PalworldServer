#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_AIActionRiding_classes.hpp"
#include "PalSDK/BP_AIActionRiding_parameters.hpp"


namespace PalSDK
{

// Function BP_AIActionRiding.BP_AIActionRiding_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionRiding_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionRiding_C", "ActionStart");

	Params::BP_AIActionRiding_C_ActionStart Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionRiding.BP_AIActionRiding_C.ExecuteUbergraph_BP_AIActionRiding
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionRiding_C::ExecuteUbergraph_BP_AIActionRiding(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionRiding_C", "ExecuteUbergraph_BP_AIActionRiding");

	Params::BP_AIActionRiding_C_ExecuteUbergraph_BP_AIActionRiding Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionRiding.BP_AIActionRiding_C.OnCoopReleaseDelegate_イベント_0
// (BlueprintCallable, BlueprintEvent)

void UBP_AIActionRiding_C::OnCoopReleaseDelegate______________0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionRiding_C", "OnCoopReleaseDelegate_イベント_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIActionRiding.BP_AIActionRiding_C.SetRidingCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    RidingCharacter_0                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionRiding_C::SetRidingCharacter(class APalCharacter* RidingCharacter_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionRiding_C", "SetRidingCharacter");

	Params::BP_AIActionRiding_C_SetRidingCharacter Parms{};

	Parms.RidingCharacter_0 = RidingCharacter_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

