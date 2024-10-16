#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_PalSupplyIncidentAction_classes.hpp"
#include "PalSDK/BP_PalSupplyIncidentAction_parameters.hpp"


namespace PalSDK
{

// Function BP_PalSupplyIncidentAction.BP_PalSupplyIncidentAction_C.CollectChangeHateTargets
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class APalCharacter*>            SourceCharacters                                       (Parm, OutParm)
// TArray<class APalCharacter*>            TargetCharacters                                       (Parm, OutParm)

void UBP_PalSupplyIncidentAction_C::CollectChangeHateTargets(TArray<class APalCharacter*>* SourceCharacters, TArray<class APalCharacter*>* TargetCharacters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncidentAction_C", "CollectChangeHateTargets");

	Params::BP_PalSupplyIncidentAction_C_CollectChangeHateTargets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SourceCharacters != nullptr)
		*SourceCharacters = std::move(Parms.SourceCharacters);

	if (TargetCharacters != nullptr)
		*TargetCharacters = std::move(Parms.TargetCharacters);
}


// Function BP_PalSupplyIncidentAction.BP_PalSupplyIncidentAction_C.ExecuteUbergraph_BP_PalSupplyIncidentAction
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalSupplyIncidentAction_C::ExecuteUbergraph_BP_PalSupplyIncidentAction(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncidentAction_C", "ExecuteUbergraph_BP_PalSupplyIncidentAction");

	Params::BP_PalSupplyIncidentAction_C_ExecuteUbergraph_BP_PalSupplyIncidentAction Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSupplyIncidentAction.BP_PalSupplyIncidentAction_C.ExistsAliveCharacter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    NPCSpawner                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsAlive                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalSupplyIncidentAction_C::ExistsAliveCharacter(bool NPCSpawner, bool* IsAlive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncidentAction_C", "ExistsAliveCharacter");

	Params::BP_PalSupplyIncidentAction_C_ExistsAliveCharacter Parms{};

	Parms.NPCSpawner = NPCSpawner;

	UObject::ProcessEvent(Func, &Parms);

	if (IsAlive != nullptr)
		*IsAlive = Parms.IsAlive;
}


// Function BP_PalSupplyIncidentAction.BP_PalSupplyIncidentAction_C.GetNPCSpawner
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bIsPalSpawner                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalRandomIncidentNPCSpawner*     Result                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalSupplyIncidentAction_C::GetNPCSpawner(bool bIsPalSpawner, class APalRandomIncidentNPCSpawner** Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncidentAction_C", "GetNPCSpawner");

	Params::BP_PalSupplyIncidentAction_C_GetNPCSpawner Parms{};

	Parms.bIsPalSpawner = bIsPalSpawner;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_PalSupplyIncidentAction.BP_PalSupplyIncidentAction_C.GetSpawnedLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalAIController*                 Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Found                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalSupplyIncidentAction_C::GetSpawnedLocation(class APalAIController* Controller, bool* Found, struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncidentAction_C", "GetSpawnedLocation");

	Params::BP_PalSupplyIncidentAction_C_GetSpawnedLocation Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}


// Function BP_PalSupplyIncidentAction.BP_PalSupplyIncidentAction_C.GetSpawnerLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalSupplyIncidentAction_C::GetSpawnerLocation(struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncidentAction_C", "GetSpawnerLocation");

	Params::BP_PalSupplyIncidentAction_C_GetSpawnerLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}


// Function BP_PalSupplyIncidentAction.BP_PalSupplyIncidentAction_C.GetSpawnRadius
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Radius                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalSupplyIncidentAction_C::GetSpawnRadius(double* Radius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncidentAction_C", "GetSpawnRadius");

	Params::BP_PalSupplyIncidentAction_C_GetSpawnRadius Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Radius != nullptr)
		*Radius = Parms.Radius;
}


// Function BP_PalSupplyIncidentAction.BP_PalSupplyIncidentAction_C.OnAllNpcSpawned
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_PalSupplyIncidentAction_C::OnAllNpcSpawned()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncidentAction_C", "OnAllNpcSpawned");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSupplyIncidentAction.BP_PalSupplyIncidentAction_C.OnInitialized
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UBP_PalSupplyIncidentAction_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncidentAction_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSupplyIncidentAction.BP_PalSupplyIncidentAction_C.OnStart
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UBP_PalSupplyIncidentAction_C::OnStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncidentAction_C", "OnStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSupplyIncidentAction.BP_PalSupplyIncidentAction_C.OnTerminate
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UBP_PalSupplyIncidentAction_C::OnTerminate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncidentAction_C", "OnTerminate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSupplyIncidentAction.BP_PalSupplyIncidentAction_C.OnTick
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalSupplyIncidentAction_C::OnTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncidentAction_C", "OnTick");

	Params::BP_PalSupplyIncidentAction_C_OnTick Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSupplyIncidentAction.BP_PalSupplyIncidentAction_C.ResetAIController
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NPCSpawner                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalSupplyIncidentAction_C::ResetAIController(bool NPCSpawner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncidentAction_C", "ResetAIController");

	Params::BP_PalSupplyIncidentAction_C_ResetAIController Parms{};

	Parms.NPCSpawner = NPCSpawner;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSupplyIncidentAction.BP_PalSupplyIncidentAction_C.ResetAIController_Monster
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MonsterAIControllerBase_C*    Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalSupplyIncidentAction_C::ResetAIController_Monster(class ABP_MonsterAIControllerBase_C* Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncidentAction_C", "ResetAIController_Monster");

	Params::BP_PalSupplyIncidentAction_C_ResetAIController_Monster Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSupplyIncidentAction.BP_PalSupplyIncidentAction_C.ResetAIController_NPC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_NPCAIController_C*            Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalSupplyIncidentAction_C::ResetAIController_NPC(class ABP_NPCAIController_C* Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncidentAction_C", "ResetAIController_NPC");

	Params::BP_PalSupplyIncidentAction_C_ResetAIController_NPC Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSupplyIncidentAction.BP_PalSupplyIncidentAction_C.Set Hate To Targets
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class APalCharacter*>            Targets                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_PalSupplyIncidentAction_C::Set_Hate_To_Targets(class APalCharacter* Character, TArray<class APalCharacter*>& Targets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncidentAction_C", "Set Hate To Targets");

	Params::BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets Parms{};

	Parms.Character = Character;
	Parms.Targets = std::move(Targets);

	UObject::ProcessEvent(Func, &Parms);

	Targets = std::move(Parms.Targets);
}


// Function BP_PalSupplyIncidentAction.BP_PalSupplyIncidentAction_C.SetHate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PalSupplyIncidentAction_C::SetHate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncidentAction_C", "SetHate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSupplyIncidentAction.BP_PalSupplyIncidentAction_C.GetSpawner
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APalRandomIncidentNPCSpawner*     Spawmer                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalSupplyIncidentAction_C::GetSpawner(class APalRandomIncidentNPCSpawner** Spawmer) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncidentAction_C", "GetSpawner");

	Params::BP_PalSupplyIncidentAction_C_GetSpawner Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Spawmer != nullptr)
		*Spawmer = Parms.Spawmer;
}

}

