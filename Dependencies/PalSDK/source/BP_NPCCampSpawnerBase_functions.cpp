#include "PalServer/Basic.hpp"

#include "PalServer/BP_NPCCampSpawnerBase_classes.hpp"
#include "PalServer/BP_NPCCampSpawnerBase_parameters.hpp"


namespace PalServer
{

// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.CheckWorldLoadComplete
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Loaded                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCCampSpawnerBase_C::CheckWorldLoadComplete(bool* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCCampSpawnerBase_C", "CheckWorldLoadComplete");

	Params::BP_NPCCampSpawnerBase_C_CheckWorldLoadComplete Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Loaded != nullptr)
		*Loaded = Parms.Loaded;
}


// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.CREATEDELEGATE_PROXYFUNCTION_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCCampSpawnerBase_C::CREATEDELEGATE_PROXYFUNCTION_0(class UPalIndividualCharacterHandle* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCCampSpawnerBase_C", "CREATEDELEGATE_PROXYFUNCTION_0");

	Params::BP_NPCCampSpawnerBase_C_CREATEDELEGATE_PROXYFUNCTION_0 Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.DespawnCamp
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_NPCCampSpawnerBase_C::DespawnCamp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCCampSpawnerBase_C", "DespawnCamp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.ExecuteUbergraph_BP_NPCCampSpawnerBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCCampSpawnerBase_C::ExecuteUbergraph_BP_NPCCampSpawnerBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCCampSpawnerBase_C", "ExecuteUbergraph_BP_NPCCampSpawnerBase");

	Params::BP_NPCCampSpawnerBase_C_ExecuteUbergraph_BP_NPCCampSpawnerBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.IsNearPlayerCamp
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsNear                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCCampSpawnerBase_C::IsNearPlayerCamp(bool* IsNear)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCCampSpawnerBase_C", "IsNearPlayerCamp");

	Params::BP_NPCCampSpawnerBase_C_IsNearPlayerCamp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsNear != nullptr)
		*IsNear = Parms.IsNear;
}


// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.IsProbabilitySuccess
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCCampSpawnerBase_C::IsProbabilitySuccess(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCCampSpawnerBase_C", "IsProbabilitySuccess");

	Params::BP_NPCCampSpawnerBase_C_IsProbabilitySuccess Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.OnEnemyDead
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                     DeadInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_NPCCampSpawnerBase_C::OnEnemyDead(const struct FPalDeadInfo& DeadInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCCampSpawnerBase_C", "OnEnemyDead");

	Params::BP_NPCCampSpawnerBase_C_OnEnemyDead Parms{};

	Parms.DeadInfo = std::move(DeadInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.OnEnemySpawned
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    SpawnHandle                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void ABP_NPCCampSpawnerBase_C::OnEnemySpawned(class UPalIndividualCharacterHandle*& SpawnHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCCampSpawnerBase_C", "OnEnemySpawned");

	Params::BP_NPCCampSpawnerBase_C_OnEnemySpawned Parms{};

	Parms.SpawnHandle = SpawnHandle;

	UObject::ProcessEvent(Func, &Parms);

	SpawnHandle = Parms.SpawnHandle;
}


// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.OnReceivedReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_NPCCampSpawnerBase_C::OnReceivedReward()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCCampSpawnerBase_C", "OnReceivedReward");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.PlayerCheck
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    RespawnOK                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCCampSpawnerBase_C::PlayerCheck(bool* RespawnOK)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCCampSpawnerBase_C", "PlayerCheck");

	Params::BP_NPCCampSpawnerBase_C_PlayerCheck Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RespawnOK != nullptr)
		*RespawnOK = Parms.RespawnOK;
}


// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.RandomLottery
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           ResultClass                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCCampSpawnerBase_C::RandomLottery(class UClass** ResultClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCCampSpawnerBase_C", "RandomLottery");

	Params::BP_NPCCampSpawnerBase_C_RandomLottery Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ResultClass != nullptr)
		*ResultClass = Parms.ResultClass;
}


// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_NPCCampSpawnerBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCCampSpawnerBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCCampSpawnerBase_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCCampSpawnerBase_C", "ReceiveEndPlay");

	Params::BP_NPCCampSpawnerBase_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCCampSpawnerBase_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCCampSpawnerBase_C", "ReceiveTick");

	Params::BP_NPCCampSpawnerBase_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.SetRespawnAble
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_NPCCampSpawnerBase_C::SetRespawnAble()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCCampSpawnerBase_C", "SetRespawnAble");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.SetupCampStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_NPCCampSpawnerBase_C::SetupCampStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCCampSpawnerBase_C", "SetupCampStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.StartDespawnTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DespawnTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCCampSpawnerBase_C::StartDespawnTimer(double DespawnTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCCampSpawnerBase_C", "StartDespawnTimer");

	Params::BP_NPCCampSpawnerBase_C_StartDespawnTimer Parms{};

	Parms.DespawnTime = DespawnTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.StartRespawnTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  RespawnTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCCampSpawnerBase_C::StartRespawnTimer(double RespawnTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCCampSpawnerBase_C", "StartRespawnTimer");

	Params::BP_NPCCampSpawnerBase_C_StartRespawnTimer Parms{};

	Parms.RespawnTime = RespawnTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.TryCampSpawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_NPCCampSpawnerBase_C::TryCampSpawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCCampSpawnerBase_C", "TryCampSpawn");

	UObject::ProcessEvent(Func, nullptr);
}

}

