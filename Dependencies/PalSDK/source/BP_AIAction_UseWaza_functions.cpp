#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_AIAction_UseWaza_classes.hpp"
#include "PalSDK/BP_AIAction_UseWaza_parameters.hpp"


namespace PalSDK
{

// Function BP_AIAction_UseWaza.BP_AIAction_UseWaza_C.SetupAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_UseWaza_C::SetupAction(class APawn* ControlledPawn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_UseWaza_C", "SetupAction");

	Params::BP_AIAction_UseWaza_C_SetupAction Parms{};

	Parms.ControlledPawn_0 = ControlledPawn_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_UseWaza.BP_AIAction_UseWaza_C.OnTargetFound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_UseWaza_C::OnTargetFound(class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_UseWaza_C", "OnTargetFound");

	Params::BP_AIAction_UseWaza_C_OnTargetFound Parms{};

	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_UseWaza.BP_AIAction_UseWaza_C.IsAvailableWaza
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_UseWaza_C::IsAvailableWaza(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_UseWaza_C", "IsAvailableWaza");

	Params::BP_AIAction_UseWaza_C_IsAvailableWaza Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_AIAction_UseWaza.BP_AIAction_UseWaza_C.GetWazaID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPalWazaID                              WazaID                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_UseWaza_C::GetWazaID(EPalWazaID* WazaID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_UseWaza_C", "GetWazaID");

	Params::BP_AIAction_UseWaza_C_GetWazaID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (WazaID != nullptr)
		*WazaID = Parms.WazaID;
}


// Function BP_AIAction_UseWaza.BP_AIAction_UseWaza_C.GetSkillName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UBP_AIAction_UseWaza_C::GetSkillName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_UseWaza_C", "GetSkillName");

	Params::BP_AIAction_UseWaza_C_GetSkillName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_AIAction_UseWaza.BP_AIAction_UseWaza_C.ExecuteUbergraph_BP_AIAction_UseWaza
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_UseWaza_C::ExecuteUbergraph_BP_AIAction_UseWaza(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_UseWaza_C", "ExecuteUbergraph_BP_AIAction_UseWaza");

	Params::BP_AIAction_UseWaza_C_ExecuteUbergraph_BP_AIAction_UseWaza Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_UseWaza.BP_AIAction_UseWaza_C.ExecAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_UseWaza_C::ExecAction(class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_UseWaza_C", "ExecAction");

	Params::BP_AIAction_UseWaza_C_ExecAction Parms{};

	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_UseWaza.BP_AIAction_UseWaza_C.CanFindTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_UseWaza_C::CanFindTarget(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_UseWaza_C", "CanFindTarget");

	Params::BP_AIAction_UseWaza_C_CanFindTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_AIAction_UseWaza.BP_AIAction_UseWaza_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_UseWaza_C::ActionStart(class APawn* ControlledPawn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_UseWaza_C", "ActionStart");

	Params::BP_AIAction_UseWaza_C_ActionStart Parms{};

	Parms.ControlledPawn_0 = ControlledPawn_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

