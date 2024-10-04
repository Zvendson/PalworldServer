#include "PalServer/Basic.hpp"

#include "PalServer/BP_SquadNPCSpawner_classes.hpp"
#include "PalServer/BP_SquadNPCSpawner_parameters.hpp"


namespace PalServer
{

// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.BlueprintTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SquadNPCSpawner_C::BlueprintTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "BlueprintTick");

	Params::BP_SquadNPCSpawner_C_BlueprintTick Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.Check Spawn
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SquadNPCSpawner_C::Check_Spawn(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "Check Spawn");

	Params::BP_SquadNPCSpawner_C_Check_Spawn Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.DeleteOnePoint
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Point                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SquadNPCSpawner_C::DeleteOnePoint(class AActor* Point)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "DeleteOnePoint");

	Params::BP_SquadNPCSpawner_C_DeleteOnePoint Parms{};

	Parms.Point = Point;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.Despawn
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_SquadNPCSpawner_C::Despawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "Despawn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.DespawnDelegate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_SquadNPCSpawner_C::DespawnDelegate(const struct FPalInstanceID& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "DespawnDelegate");

	Params::BP_SquadNPCSpawner_C_DespawnDelegate Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.ExecuteUbergraph_BP_SquadNPCSpawner
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SquadNPCSpawner_C::ExecuteUbergraph_BP_SquadNPCSpawner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "ExecuteUbergraph_BP_SquadNPCSpawner");

	Params::BP_SquadNPCSpawner_C_ExecuteUbergraph_BP_SquadNPCSpawner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.FindIndividualHandle
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*    Handle                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   Index_0                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SquadNPCSpawner_C::FindIndividualHandle(const struct FPalInstanceID& ID, class UPalIndividualCharacterHandle** Handle, int32* Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "FindIndividualHandle");

	Params::BP_SquadNPCSpawner_C_FindIndividualHandle Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);

	if (Handle != nullptr)
		*Handle = Parms.Handle;

	if (Index_0 != nullptr)
		*Index_0 = Parms.Index_0;
}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.GetAllSpawnedNPCHandle
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPalIndividualCharacterHandle*>Handles                                                (Parm, OutParm)

void ABP_SquadNPCSpawner_C::GetAllSpawnedNPCHandle(TArray<class UPalIndividualCharacterHandle*>* Handles)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "GetAllSpawnedNPCHandle");

	Params::BP_SquadNPCSpawner_C_GetAllSpawnedNPCHandle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Handles != nullptr)
		*Handles = std::move(Parms.Handles);
}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.GetSpawnPointRadius_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_SquadNPCSpawner_C::GetSpawnPointRadius_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "GetSpawnPointRadius_0");

	Params::BP_SquadNPCSpawner_C_GetSpawnPointRadius_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.GetWorldLoadWaitRadius
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Radius                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SquadNPCSpawner_C::GetWorldLoadWaitRadius(double* Radius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "GetWorldLoadWaitRadius");

	Params::BP_SquadNPCSpawner_C_GetWorldLoadWaitRadius Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Radius != nullptr)
		*Radius = Parms.Radius;
}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.OnSquadSpawnedCharacter__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SquadNPCSpawner_C::OnSquadSpawnedCharacter__DelegateSignature(class UPalIndividualCharacterHandle* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "OnSquadSpawnedCharacter__DelegateSignature");

	Params::BP_SquadNPCSpawner_C_OnSquadSpawnedCharacter__DelegateSignature Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SquadNPCSpawner_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.SetAllNPCLocation
// (Event, Protected, BlueprintEvent)

void ABP_SquadNPCSpawner_C::SetAllNPCLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "SetAllNPCLocation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.SetCharaNames
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_SquadNPCSpawner_C::SetCharaNames()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "SetCharaNames");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.SetNullHandleWhenDestoryNPC
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SquadNPCSpawner_C::SetNullHandleWhenDestoryNPC(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "SetNullHandleWhenDestoryNPC");

	Params::BP_SquadNPCSpawner_C_SetNullHandleWhenDestoryNPC Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.SetupSpawnInfoList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SquadNPCSpawner_C::SetupSpawnInfoList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "SetupSpawnInfoList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.Spawn
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SquadNPCSpawner_C::Spawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "Spawn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.SpawnDelegate
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_SquadNPCSpawner_C::SpawnDelegate(const struct FPalInstanceID& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "SpawnDelegate");

	Params::BP_SquadNPCSpawner_C_SpawnDelegate Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}

}

