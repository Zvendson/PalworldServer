#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_AIAction_RandomIncident_MerchantPalWalk_classes.hpp"
#include "PalSDK/BP_AIAction_RandomIncident_MerchantPalWalk_parameters.hpp"


namespace PalSDK
{

// Function BP_AIAction_RandomIncident_MerchantPalWalk.BP_AIAction_RandomIncident_MerchantPalWalk_C.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPawnActionResult                       WithResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_RandomIncident_MerchantPalWalk_C::ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_RandomIncident_MerchantPalWalk_C", "ActionFinished");

	Params::BP_AIAction_RandomIncident_MerchantPalWalk_C_ActionFinished Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_RandomIncident_MerchantPalWalk.BP_AIAction_RandomIncident_MerchantPalWalk_C.ActionPause
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_RandomIncident_MerchantPalWalk_C::ActionPause(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_RandomIncident_MerchantPalWalk_C", "ActionPause");

	Params::BP_AIAction_RandomIncident_MerchantPalWalk_C_ActionPause Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_RandomIncident_MerchantPalWalk.BP_AIAction_RandomIncident_MerchantPalWalk_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_RandomIncident_MerchantPalWalk_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_RandomIncident_MerchantPalWalk_C", "ActionStart");

	Params::BP_AIAction_RandomIncident_MerchantPalWalk_C_ActionStart Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_RandomIncident_MerchantPalWalk.BP_AIAction_RandomIncident_MerchantPalWalk_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_RandomIncident_MerchantPalWalk_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_RandomIncident_MerchantPalWalk_C", "ActionTick");

	Params::BP_AIAction_RandomIncident_MerchantPalWalk_C_ActionTick Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_RandomIncident_MerchantPalWalk.BP_AIAction_RandomIncident_MerchantPalWalk_C.ChangeNextMovePosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_AIAction_RandomIncident_MerchantPalWalk_C::ChangeNextMovePosition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_RandomIncident_MerchantPalWalk_C", "ChangeNextMovePosition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_RandomIncident_MerchantPalWalk.BP_AIAction_RandomIncident_MerchantPalWalk_C.ExecuteUbergraph_BP_AIAction_RandomIncident_MerchantPalWalk
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_RandomIncident_MerchantPalWalk_C::ExecuteUbergraph_BP_AIAction_RandomIncident_MerchantPalWalk(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_RandomIncident_MerchantPalWalk_C", "ExecuteUbergraph_BP_AIAction_RandomIncident_MerchantPalWalk");

	Params::BP_AIAction_RandomIncident_MerchantPalWalk_C_ExecuteUbergraph_BP_AIAction_RandomIncident_MerchantPalWalk Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

