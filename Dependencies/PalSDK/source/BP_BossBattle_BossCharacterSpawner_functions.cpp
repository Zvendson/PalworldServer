#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_BossBattle_BossCharacterSpawner_classes.hpp"
#include "PalSDK/BP_BossBattle_BossCharacterSpawner_parameters.hpp"


namespace PalSDK
{

// Function BP_BossBattle_BossCharacterSpawner.BP_BossBattle_BossCharacterSpawner_C.GetDebugNo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   BitFlag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BossBattle_BossCharacterSpawner_C::GetDebugNo(int32 BitFlag, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BossBattle_BossCharacterSpawner_C", "GetDebugNo");

	Params::BP_BossBattle_BossCharacterSpawner_C_GetDebugNo Parms{};

	Parms.BitFlag = BitFlag;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_BossBattle_BossCharacterSpawner.BP_BossBattle_BossCharacterSpawner_C.IsSkipCutscene
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Skip                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BossBattle_BossCharacterSpawner_C::IsSkipCutscene(bool* Skip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BossBattle_BossCharacterSpawner_C", "IsSkipCutscene");

	Params::BP_BossBattle_BossCharacterSpawner_C_IsSkipCutscene Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Skip != nullptr)
		*Skip = Parms.Skip;
}


// Function BP_BossBattle_BossCharacterSpawner.BP_BossBattle_BossCharacterSpawner_C.OnOtherSpawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    SpawnCharacterHandle                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BossBattle_BossCharacterSpawner_C::OnOtherSpawned__DelegateSignature(class UPalIndividualCharacterHandle* SpawnCharacterHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BossBattle_BossCharacterSpawner_C", "OnOtherSpawned__DelegateSignature");

	Params::BP_BossBattle_BossCharacterSpawner_C_OnOtherSpawned__DelegateSignature Parms{};

	Parms.SpawnCharacterHandle = SpawnCharacterHandle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BossBattle_BossCharacterSpawner.BP_BossBattle_BossCharacterSpawner_C.RequestBossSpawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CharacterID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BossBattle_BossCharacterSpawner_C::RequestBossSpawn(class FName CharacterID, int32 Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BossBattle_BossCharacterSpawner_C", "RequestBossSpawn");

	Params::BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn Parms{};

	Parms.CharacterID = CharacterID;
	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BossBattle_BossCharacterSpawner.BP_BossBattle_BossCharacterSpawner_C.RequestDespawn
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BossBattle_BossCharacterSpawner_C::RequestDespawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BossBattle_BossCharacterSpawner_C", "RequestDespawn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BossBattle_BossCharacterSpawner.BP_BossBattle_BossCharacterSpawner_C.RequestOtherSpawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CharacterID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           AIController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsOutAreaSpawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BossBattle_BossCharacterSpawner_C::RequestOtherSpawn(class FName CharacterID, int32 Level, class UClass* AIController, bool IsOutAreaSpawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BossBattle_BossCharacterSpawner_C", "RequestOtherSpawn");

	Params::BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn Parms{};

	Parms.CharacterID = CharacterID;
	Parms.Level = Level;
	Parms.AIController = AIController;
	Parms.IsOutAreaSpawn = IsOutAreaSpawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BossBattle_BossCharacterSpawner.BP_BossBattle_BossCharacterSpawner_C.SetBossLocationToStartPoint
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BossBattle_BossCharacterSpawner_C::SetBossLocationToStartPoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BossBattle_BossCharacterSpawner_C", "SetBossLocationToStartPoint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BossBattle_BossCharacterSpawner.BP_BossBattle_BossCharacterSpawner_C.SetCharacterStartLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    TargetHandle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BossBattle_BossCharacterSpawner_C::SetCharacterStartLocation(class UPalIndividualCharacterHandle* TargetHandle, const struct FVector& Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BossBattle_BossCharacterSpawner_C", "SetCharacterStartLocation");

	Params::BP_BossBattle_BossCharacterSpawner_C_SetCharacterStartLocation Parms{};

	Parms.TargetHandle = TargetHandle;
	Parms.Offset = std::move(Offset);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BossBattle_BossCharacterSpawner.BP_BossBattle_BossCharacterSpawner_C.SetMultiPlayerHPRate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    SpawnCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BossBattle_BossCharacterSpawner_C::SetMultiPlayerHPRate(class APalCharacter* SpawnCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BossBattle_BossCharacterSpawner_C", "SetMultiPlayerHPRate");

	Params::BP_BossBattle_BossCharacterSpawner_C_SetMultiPlayerHPRate Parms{};

	Parms.SpawnCharacter = SpawnCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BossBattle_BossCharacterSpawner.BP_BossBattle_BossCharacterSpawner_C.SpawnBossDelegate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_BossBattle_BossCharacterSpawner_C::SpawnBossDelegate(const struct FPalInstanceID& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BossBattle_BossCharacterSpawner_C", "SpawnBossDelegate");

	Params::BP_BossBattle_BossCharacterSpawner_C_SpawnBossDelegate Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BossBattle_BossCharacterSpawner.BP_BossBattle_BossCharacterSpawner_C.SpawnOtherDelegate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_BossBattle_BossCharacterSpawner_C::SpawnOtherDelegate(const struct FPalInstanceID& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BossBattle_BossCharacterSpawner_C", "SpawnOtherDelegate");

	Params::BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}

}

