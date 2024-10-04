#include "PalServer/Basic.hpp"

#include "PalServer/BP_AIAction_NPC_Relax_Wander_classes.hpp"
#include "PalServer/BP_AIAction_NPC_Relax_Wander_parameters.hpp"


namespace PalServer
{

// Function BP_AIAction_NPC_Relax_Wander.BP_AIAction_NPC_Relax_Wander_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Relax_Wander_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Relax_Wander_C", "ActionStart");

	Params::BP_AIAction_NPC_Relax_Wander_C_ActionStart Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_Relax_Wander.BP_AIAction_NPC_Relax_Wander_C.ExecuteUbergraph_BP_AIAction_NPC_Relax_Wander
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Relax_Wander_C::ExecuteUbergraph_BP_AIAction_NPC_Relax_Wander(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Relax_Wander_C", "ExecuteUbergraph_BP_AIAction_NPC_Relax_Wander");

	Params::BP_AIAction_NPC_Relax_Wander_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Wander Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_Relax_Wander.BP_AIAction_NPC_Relax_Wander_C.Get Arrivable Location
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          V                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Relax_Wander_C::Get_Arrivable_Location(const struct FVector& V, bool* Result, struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Relax_Wander_C", "Get Arrivable Location");

	Params::BP_AIAction_NPC_Relax_Wander_C_Get_Arrivable_Location Parms{};

	Parms.V = std::move(V);

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}


// Function BP_AIAction_NPC_Relax_Wander.BP_AIAction_NPC_Relax_Wander_C.OnStuck
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AIAction_NPC_Relax_Wander_C::OnStuck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Relax_Wander_C", "OnStuck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_NPC_Relax_Wander.BP_AIAction_NPC_Relax_Wander_C.OnTargetPointUpdateStart
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_AIAction_NPC_Relax_Wander_C::OnTargetPointUpdateStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Relax_Wander_C", "OnTargetPointUpdateStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_NPC_Relax_Wander.BP_AIAction_NPC_Relax_Wander_C.SelectTargetNode
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Index_0                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Relax_Wander_C::SelectTargetNode(struct FVector* Location, int32* Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Relax_Wander_C", "SelectTargetNode");

	Params::BP_AIAction_NPC_Relax_Wander_C_SelectTargetNode Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Index_0 != nullptr)
		*Index_0 = Parms.Index_0;
}


// Function BP_AIAction_NPC_Relax_Wander.BP_AIAction_NPC_Relax_Wander_C.TryGetTargetLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TryCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Relax_Wander_C::TryGetTargetLocation(int32 TryCount, bool* Result, struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Relax_Wander_C", "TryGetTargetLocation");

	Params::BP_AIAction_NPC_Relax_Wander_C_TryGetTargetLocation Parms{};

	Parms.TryCount = TryCount;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}

}

