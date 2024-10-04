#include "PalServer/Basic.hpp"

#include "PalServer/BP_LevelInstance_BossRoomBase_classes.hpp"
#include "PalServer/BP_LevelInstance_BossRoomBase_parameters.hpp"


namespace PalServer
{

// Function BP_LevelInstance_BossRoomBase.BP_LevelInstance_BossRoomBase_C.ExecuteUbergraph_BP_LevelInstance_BossRoomBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LevelInstance_BossRoomBase_C::ExecuteUbergraph_BP_LevelInstance_BossRoomBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LevelInstance_BossRoomBase_C", "ExecuteUbergraph_BP_LevelInstance_BossRoomBase");

	Params::BP_LevelInstance_BossRoomBase_C_ExecuteUbergraph_BP_LevelInstance_BossRoomBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LevelInstance_BossRoomBase.BP_LevelInstance_BossRoomBase_C.GetBossSpawner
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_BossBattle_BossCharacterSpawner_C*BossSpawner_0                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_LevelInstance_BossRoomBase_C::GetBossSpawner(class ABP_BossBattle_BossCharacterSpawner_C** BossSpawner_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LevelInstance_BossRoomBase_C", "GetBossSpawner");

	Params::BP_LevelInstance_BossRoomBase_C_GetBossSpawner Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (BossSpawner_0 != nullptr)
		*BossSpawner_0 = Parms.BossSpawner_0;
}


// Function BP_LevelInstance_BossRoomBase.BP_LevelInstance_BossRoomBase_C.OnLoadedLevel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_LevelInstance_BossRoomBase_C::OnLoadedLevel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LevelInstance_BossRoomBase_C", "OnLoadedLevel__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LevelInstance_BossRoomBase.BP_LevelInstance_BossRoomBase_C.OnSetBoss__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    Boss                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_LevelInstance_BossRoomBase_C::OnSetBoss__DelegateSignature(class APalCharacter* Boss)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LevelInstance_BossRoomBase_C", "OnSetBoss__DelegateSignature");

	Params::BP_LevelInstance_BossRoomBase_C_OnSetBoss__DelegateSignature Parms{};

	Parms.Boss = Boss;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LevelInstance_BossRoomBase.BP_LevelInstance_BossRoomBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LevelInstance_BossRoomBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LevelInstance_BossRoomBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LevelInstance_BossRoomBase.BP_LevelInstance_BossRoomBase_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LevelInstance_BossRoomBase_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LevelInstance_BossRoomBase_C", "ReceiveEndPlay");

	Params::BP_LevelInstance_BossRoomBase_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LevelInstance_BossRoomBase.BP_LevelInstance_BossRoomBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LevelInstance_BossRoomBase_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LevelInstance_BossRoomBase_C", "ReceiveTick");

	Params::BP_LevelInstance_BossRoomBase_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LevelInstance_BossRoomBase.BP_LevelInstance_BossRoomBase_C.ResetBossLocation
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LevelInstance_BossRoomBase_C::ResetBossLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LevelInstance_BossRoomBase_C", "ResetBossLocation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LevelInstance_BossRoomBase.BP_LevelInstance_BossRoomBase_C.Set Spawn Boss Character
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    Boss                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_LevelInstance_BossRoomBase_C::Set_Spawn_Boss_Character(class APalCharacter* Boss)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LevelInstance_BossRoomBase_C", "Set Spawn Boss Character");

	Params::BP_LevelInstance_BossRoomBase_C_Set_Spawn_Boss_Character Parms{};

	Parms.Boss = Boss;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LevelInstance_BossRoomBase.BP_LevelInstance_BossRoomBase_C.Spawn Boss Spawner_Internal
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalBossType                            Boss                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   JoinPlayerNum                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LevelInstance_BossRoomBase_C::Spawn_Boss_Spawner_Internal(EPalBossType Boss, int32 JoinPlayerNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LevelInstance_BossRoomBase_C", "Spawn Boss Spawner_Internal");

	Params::BP_LevelInstance_BossRoomBase_C_Spawn_Boss_Spawner_Internal Parms{};

	Parms.Boss = Boss;
	Parms.JoinPlayerNum = JoinPlayerNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LevelInstance_BossRoomBase.BP_LevelInstance_BossRoomBase_C.SpawnBossSpawner
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalBossType                            BossType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   JoinPlayerNum                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LevelInstance_BossRoomBase_C::SpawnBossSpawner(EPalBossType BossType, int32 JoinPlayerNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LevelInstance_BossRoomBase_C", "SpawnBossSpawner");

	Params::BP_LevelInstance_BossRoomBase_C_SpawnBossSpawner Parms{};

	Parms.BossType = BossType;
	Parms.JoinPlayerNum = JoinPlayerNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LevelInstance_BossRoomBase.BP_LevelInstance_BossRoomBase_C.CheckLevelLoaded
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_LevelInstance_BossRoomBase_C::CheckLevelLoaded() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LevelInstance_BossRoomBase_C", "CheckLevelLoaded");

	Params::BP_LevelInstance_BossRoomBase_C_CheckLevelLoaded Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_LevelInstance_BossRoomBase.BP_LevelInstance_BossRoomBase_C.GetPlayerStartTransform
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTransform                       ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FTransform ABP_LevelInstance_BossRoomBase_C::GetPlayerStartTransform() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LevelInstance_BossRoomBase_C", "GetPlayerStartTransform");

	Params::BP_LevelInstance_BossRoomBase_C_GetPlayerStartTransform Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_LevelInstance_BossRoomBase.BP_LevelInstance_BossRoomBase_C.GetSequencerTransform
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTransform                       ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FTransform ABP_LevelInstance_BossRoomBase_C::GetSequencerTransform() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LevelInstance_BossRoomBase_C", "GetSequencerTransform");

	Params::BP_LevelInstance_BossRoomBase_C_GetSequencerTransform Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

