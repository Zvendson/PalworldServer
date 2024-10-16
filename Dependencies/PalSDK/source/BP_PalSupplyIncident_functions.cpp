#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_PalSupplyIncident_classes.hpp"
#include "PalSDK/BP_PalSupplyIncident_parameters.hpp"


namespace PalSDK
{

// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.BindDelegate_Action
// (BlueprintCallable, BlueprintEvent)

void UBP_PalSupplyIncident_C::BindDelegate_Action()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "BindDelegate_Action");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.BindDelegate_NpcSpawner
// (BlueprintCallable, BlueprintEvent)

void UBP_PalSupplyIncident_C::BindDelegate_NpcSpawner()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "BindDelegate_NpcSpawner");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.BindIDelegate_AreaInOut
// (BlueprintCallable, BlueprintEvent)

void UBP_PalSupplyIncident_C::BindIDelegate_AreaInOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "BindIDelegate_AreaInOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.CheckLive
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsLivePal                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalSupplyIncident_C::CheckLive(bool* IsLivePal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "CheckLive");

	Params::BP_PalSupplyIncident_C_CheckLive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsLivePal != nullptr)
		*IsLivePal = Parms.IsLivePal;
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.CreateAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PalSupplyIncident_C::CreateAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "CreateAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.CreateCharacterIdList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FName>                     CharacterIds                                           (Parm, OutParm)

void UBP_PalSupplyIncident_C::CreateCharacterIdList(TArray<class FName>* CharacterIds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "CreateCharacterIdList");

	Params::BP_PalSupplyIncident_C_CreateCharacterIdList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CharacterIds != nullptr)
		*CharacterIds = std::move(Parms.CharacterIds);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.CreateNpcSpawner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PalSupplyIncident_C::CreateNpcSpawner()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "CreateNpcSpawner");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.ExcludeOtherPal
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PalSupplyIncident_C::ExcludeOtherPal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "ExcludeOtherPal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.ExecuteUbergraph_BP_PalSupplyIncident
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalSupplyIncident_C::ExecuteUbergraph_BP_PalSupplyIncident(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "ExecuteUbergraph_BP_PalSupplyIncident");

	Params::BP_PalSupplyIncident_C_ExecuteUbergraph_BP_PalSupplyIncident Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.GetGroupList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int32>                           GroupNo                                                (Parm, OutParm)

void UBP_PalSupplyIncident_C::GetGroupList(TArray<int32>* GroupNo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "GetGroupList");

	Params::BP_PalSupplyIncident_C_GetGroupList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (GroupNo != nullptr)
		*GroupNo = std::move(Parms.GroupNo);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.GetNPCSpawner
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalRandomIncidentNPCSpawner*     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class APalRandomIncidentNPCSpawner* UBP_PalSupplyIncident_C::GetNPCSpawner()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "GetNPCSpawner");

	Params::BP_PalSupplyIncident_C_GetNPCSpawner Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.IsAllNpcSpawned
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsSpawned                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalSupplyIncident_C::IsAllNpcSpawned(bool* IsSpawned)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "IsAllNpcSpawned");

	Params::BP_PalSupplyIncident_C_IsAllNpcSpawned Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsSpawned != nullptr)
		*IsSpawned = Parms.IsSpawned;
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.OnBegin
// (Event, Public, BlueprintEvent)

void UBP_PalSupplyIncident_C::OnBegin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "OnBegin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.OnEnd
// (Event, Public, BlueprintEvent)

void UBP_PalSupplyIncident_C::OnEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "OnEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.OnEndProc
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PalSupplyIncident_C::OnEndProc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "OnEndProc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.OnEnterAnyArea_Impl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalRandomIncidentSpawnerAreaType       AreaType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PlayerId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalSupplyIncident_C::OnEnterAnyArea_Impl(EPalRandomIncidentSpawnerAreaType AreaType, int32 PlayerId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "OnEnterAnyArea_Impl");

	Params::BP_PalSupplyIncident_C_OnEnterAnyArea_Impl Parms{};

	Parms.AreaType = AreaType;
	Parms.PlayerId = PlayerId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.OnEnterAnyAreaEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalRandomIncidentSpawnerAreaType       AreaType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PlayerId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalSupplyIncident_C::OnEnterAnyAreaEvent(EPalRandomIncidentSpawnerAreaType AreaType, int32 PlayerId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "OnEnterAnyAreaEvent");

	Params::BP_PalSupplyIncident_C_OnEnterAnyAreaEvent Parms{};

	Parms.AreaType = AreaType;
	Parms.PlayerId = PlayerId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.OnExitAnyArea_Impl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalRandomIncidentSpawnerAreaType       AreaType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PlayerId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalSupplyIncident_C::OnExitAnyArea_Impl(EPalRandomIncidentSpawnerAreaType AreaType, int32 PlayerId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "OnExitAnyArea_Impl");

	Params::BP_PalSupplyIncident_C_OnExitAnyArea_Impl Parms{};

	Parms.AreaType = AreaType;
	Parms.PlayerId = PlayerId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.OnExitAnyAreaEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalRandomIncidentSpawnerAreaType       AreaType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PlayerId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalSupplyIncident_C::OnExitAnyAreaEvent(EPalRandomIncidentSpawnerAreaType AreaType, int32 PlayerId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "OnExitAnyAreaEvent");

	Params::BP_PalSupplyIncident_C_OnExitAnyAreaEvent Parms{};

	Parms.AreaType = AreaType;
	Parms.PlayerId = PlayerId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.OnGroupCreated
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PalSupplyIncident_C::OnGroupCreated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "OnGroupCreated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.OnNpcDespawned
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             RowName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalSupplyIncident_C::OnNpcDespawned(const class FName& RowName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "OnNpcDespawned");

	Params::BP_PalSupplyIncident_C_OnNpcDespawned Parms{};

	Parms.RowName = RowName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.OnNpcSpawned
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             RowName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalSupplyIncident_C::OnNpcSpawned(const class FName& RowName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "OnNpcSpawned");

	Params::BP_PalSupplyIncident_C_OnNpcSpawned Parms{};

	Parms.RowName = RowName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.OnNPCSpawnerDestroyed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalSupplyIncident_C::OnNPCSpawnerDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "OnNPCSpawnerDestroyed");

	Params::BP_PalSupplyIncident_C_OnNPCSpawnerDestroyed Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.OnRandomIncidentActionNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalRandomIncidentActionNotifyType      NotifyType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalSupplyIncident_C::OnRandomIncidentActionNotify(EPalRandomIncidentActionNotifyType NotifyType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "OnRandomIncidentActionNotify");

	Params::BP_PalSupplyIncident_C_OnRandomIncidentActionNotify Parms{};

	Parms.NotifyType = NotifyType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.SetDisableFlagForNPCSpawner_BP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDisable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalSupplyIncident_C::SetDisableFlagForNPCSpawner_BP(bool IsDisable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "SetDisableFlagForNPCSpawner_BP");

	Params::BP_PalSupplyIncident_C_SetDisableFlagForNPCSpawner_BP Parms{};

	Parms.IsDisable = IsDisable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.SetupIncident
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PalSupplyIncident_C::SetupIncident()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "SetupIncident");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.SetupOutbreakData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PalSupplyIncident_C::SetupOutbreakData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "SetupOutbreakData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.ShowErrorNameDuplication
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalSupplyIncident_C::ShowErrorNameDuplication(class FName InName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "ShowErrorNameDuplication");

	Params::BP_PalSupplyIncident_C_ShowErrorNameDuplication Parms{};

	Parms.InName = InName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.Spawn Characters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PalSupplyIncident_C::Spawn_Characters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "Spawn Characters");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.Spawn Monsters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                       SpawnDataList                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalSupplyIncident_C::Spawn_Monsters(class UDataTable* SpawnDataList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "Spawn Monsters");

	Params::BP_PalSupplyIncident_C_Spawn_Monsters Parms{};

	Parms.SpawnDataList = SpawnDataList;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.Spawn NPCs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                       SpawnDataList                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalSupplyIncident_C::Spawn_NPCs(class UDataTable* SpawnDataList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "Spawn NPCs");

	Params::BP_PalSupplyIncident_C_Spawn_NPCs Parms{};

	Parms.SpawnDataList = SpawnDataList;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.StartAction
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PalSupplyIncident_C::StartAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "StartAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.TerminateAction
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PalSupplyIncident_C::TerminateAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "TerminateAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.Tick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalSupplyIncident_C::Tick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "Tick");

	Params::BP_PalSupplyIncident_C_Tick Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.UnbindDelegate_Action
// (BlueprintCallable, BlueprintEvent)

void UBP_PalSupplyIncident_C::UnbindDelegate_Action()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "UnbindDelegate_Action");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.UnbindDelegate_NpcSpawner
// (BlueprintCallable, BlueprintEvent)

void UBP_PalSupplyIncident_C::UnbindDelegate_NpcSpawner()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "UnbindDelegate_NpcSpawner");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.UnbindIDelegate_AreaInOut
// (BlueprintCallable, BlueprintEvent)

void UBP_PalSupplyIncident_C::UnbindIDelegate_AreaInOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "UnbindIDelegate_AreaInOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.Get Incident Spawner
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APalRandomIncidentSpawnerBase*    IncidentSpawner                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalSupplyIncident_C::Get_Incident_Spawner(class APalRandomIncidentSpawnerBase** IncidentSpawner) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "Get Incident Spawner");

	Params::BP_PalSupplyIncident_C_Get_Incident_Spawner Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IncidentSpawner != nullptr)
		*IncidentSpawner = Parms.IncidentSpawner;
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.Get Setting Table Row
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalRandomIncidentSettings       Data                                                   (Parm, OutParm)

void UBP_PalSupplyIncident_C::Get_Setting_Table_Row(bool* Result, struct FPalRandomIncidentSettings* Data) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "Get Setting Table Row");

	Params::BP_PalSupplyIncident_C_Get_Setting_Table_Row Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}


// Function BP_PalSupplyIncident.BP_PalSupplyIncident_C.IsExcludeOtherPal
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_PalSupplyIncident_C::IsExcludeOtherPal() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSupplyIncident_C", "IsExcludeOtherPal");

	Params::BP_PalSupplyIncident_C_IsExcludeOtherPal Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

