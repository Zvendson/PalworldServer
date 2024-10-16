#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_PalAudioWorldSubsystem_classes.hpp"
#include "PalSDK/BP_PalAudioWorldSubsystem_parameters.hpp"


namespace PalSDK
{

// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.ChangeBattleBGMType
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPalBattleBGMType                       GameType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPalAudioStateGroup                     AudioType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::ChangeBattleBGMType(EPalBattleBGMType GameType, EPalAudioStateGroup* AudioType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "ChangeBattleBGMType");

	Params::BP_PalAudioWorldSubsystem_C_ChangeBattleBGMType Parms{};

	Parms.GameType = GameType;

	UObject::ProcessEvent(Func, &Parms);

	if (AudioType != nullptr)
		*AudioType = Parms.AudioType;
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.CreateDebugModel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           NewParam                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::CreateDebugModel(class AActor** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "CreateDebugModel");

	Params::BP_PalAudioWorldSubsystem_C_CreateDebugModel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.DeathPlayer
// (BlueprintCallable, BlueprintEvent)

void UBP_PalAudioWorldSubsystem_C::DeathPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "DeathPlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.ExecuteUbergraph_BP_PalAudioWorldSubsystem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::ExecuteUbergraph_BP_PalAudioWorldSubsystem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "ExecuteUbergraph_BP_PalAudioWorldSubsystem");

	Params::BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.FindMaxPriorityAmbientSoundArea
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalAmbientSoundAreaBase*         AmbinetSoundArea                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::FindMaxPriorityAmbientSoundArea(class APalAmbientSoundAreaBase** AmbinetSoundArea)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "FindMaxPriorityAmbientSoundArea");

	Params::BP_PalAudioWorldSubsystem_C_FindMaxPriorityAmbientSoundArea Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AmbinetSoundArea != nullptr)
		*AmbinetSoundArea = Parms.AmbinetSoundArea;
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.IsPlayingArea
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalAmbientSoundAreaBase*         AmbientSoundArea                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_PalAudioWorldSubsystem_C::IsPlayingArea(class APalAmbientSoundAreaBase* AmbientSoundArea)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "IsPlayingArea");

	Params::BP_PalAudioWorldSubsystem_C_IsPlayingArea Parms{};

	Parms.AmbientSoundArea = AmbientSoundArea;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.On Change Battle BGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalBattleBGMType                       Rank                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::On_Change_Battle_BGM(EPalBattleBGMType Rank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "On Change Battle BGM");

	Params::BP_PalAudioWorldSubsystem_C_On_Change_Battle_BGM Parms{};

	Parms.Rank = Rank;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnArenaSequenceChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CurrentIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::OnArenaSequenceChanged(int32 CurrentIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnArenaSequenceChanged");

	Params::BP_PalAudioWorldSubsystem_C_OnArenaSequenceChanged Parms{};

	Parms.CurrentIndex = CurrentIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnArenaSequenceEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PalAudioWorldSubsystem_C::OnArenaSequenceEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnArenaSequenceEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnArenaSequenceStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalArenaSequencer*               ArenaSequencer                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::OnArenaSequenceStart(class UPalArenaSequencer* ArenaSequencer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnArenaSequenceStart");

	Params::BP_PalAudioWorldSubsystem_C_OnArenaSequenceStart Parms{};

	Parms.ArenaSequencer = ArenaSequencer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnArrivedRaid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalIncidentBroadcastParameter   Param                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_PalAudioWorldSubsystem_C::OnArrivedRaid(const struct FPalIncidentBroadcastParameter& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnArrivedRaid");

	Params::BP_PalAudioWorldSubsystem_C_OnArrivedRaid Parms{};

	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnBattleModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsBattleMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::OnBattleModeChanged(bool IsBattleMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnBattleModeChanged");

	Params::BP_PalAudioWorldSubsystem_C_OnBattleModeChanged Parms{};

	Parms.IsBattleMode = IsBattleMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnBattleRankDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalPlayerBattleFinishType              Finish                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::OnBattleRankDown(EPalPlayerBattleFinishType Finish)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnBattleRankDown");

	Params::BP_PalAudioWorldSubsystem_C_OnBattleRankDown Parms{};

	Parms.Finish = Finish;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnChangeOneDayTimeType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalOneDayTimeType                      OneDayTimeType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::OnChangeOneDayTimeType(EPalOneDayTimeType OneDayTimeType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnChangeOneDayTimeType");

	Params::BP_PalAudioWorldSubsystem_C_OnChangeOneDayTimeType Parms{};

	Parms.OneDayTimeType = OneDayTimeType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnEndOfEvent
// (Event, Protected, BlueprintEvent)

void UBP_PalAudioWorldSubsystem_C::OnEndOfEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnEndOfEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnEndRaid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalIncidentBroadcastParameter   Parameter                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_PalAudioWorldSubsystem_C::OnEndRaid(const struct FPalIncidentBroadcastParameter& Parameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnEndRaid");

	Params::BP_PalAudioWorldSubsystem_C_OnEndRaid Parms{};

	Parms.Parameter = std::move(Parameter);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnNightEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PalAudioWorldSubsystem_C::OnNightEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnNightEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnNightStart
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PalAudioWorldSubsystem_C::OnNightStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnNightStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnPlayerEnterAmbientArea
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*              Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalAmbientSoundAreaBase*         AmbientSoundArea                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::OnPlayerEnterAmbientArea(class APalPlayerCharacter* Player, class APalAmbientSoundAreaBase* AmbientSoundArea)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnPlayerEnterAmbientArea");

	Params::BP_PalAudioWorldSubsystem_C_OnPlayerEnterAmbientArea Parms{};

	Parms.Player = Player;
	Parms.AmbientSoundArea = AmbientSoundArea;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnPlayerEnterBaseCamp
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*              Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalBaseCampModel*                BaseCampModel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::OnPlayerEnterBaseCamp(class APalPlayerCharacter* Player, class UPalBaseCampModel* BaseCampModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnPlayerEnterBaseCamp");

	Params::BP_PalAudioWorldSubsystem_C_OnPlayerEnterBaseCamp Parms{};

	Parms.Player = Player;
	Parms.BaseCampModel = BaseCampModel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnPlayerEnterSpotArea
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*              Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalSpotAreaBase*                 SpotArea                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::OnPlayerEnterSpotArea(class APalPlayerCharacter* Player, class APalSpotAreaBase* SpotArea)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnPlayerEnterSpotArea");

	Params::BP_PalAudioWorldSubsystem_C_OnPlayerEnterSpotArea Parms{};

	Parms.Player = Player;
	Parms.SpotArea = SpotArea;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnPlayerExitAmbientArea
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*              Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalAmbientSoundAreaBase*         AmbientSoundArea                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::OnPlayerExitAmbientArea(class APalPlayerCharacter* Player, class APalAmbientSoundAreaBase* AmbientSoundArea)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnPlayerExitAmbientArea");

	Params::BP_PalAudioWorldSubsystem_C_OnPlayerExitAmbientArea Parms{};

	Parms.Player = Player;
	Parms.AmbientSoundArea = AmbientSoundArea;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnPlayerExitBaseCamp
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*              Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalBaseCampModel*                BaseCampModel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::OnPlayerExitBaseCamp(class APalPlayerCharacter* Player, class UPalBaseCampModel* BaseCampModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnPlayerExitBaseCamp");

	Params::BP_PalAudioWorldSubsystem_C_OnPlayerExitBaseCamp Parms{};

	Parms.Player = Player;
	Parms.BaseCampModel = BaseCampModel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnPlayerExitSpotArea
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*              Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalSpotAreaBase*                 SpotArea                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::OnPlayerExitSpotArea(class APalPlayerCharacter* Player, class APalSpotAreaBase* SpotArea)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnPlayerExitSpotArea");

	Params::BP_PalAudioWorldSubsystem_C_OnPlayerExitSpotArea Parms{};

	Parms.Player = Player;
	Parms.SpotArea = SpotArea;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnSpawnedLocalPlayerCharacter
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                            Pawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                      Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::OnSpawnedLocalPlayerCharacter(class APawn* Pawn, class AController* Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnSpawnedLocalPlayerCharacter");

	Params::BP_PalAudioWorldSubsystem_C_OnSpawnedLocalPlayerCharacter Parms{};

	Parms.Pawn = Pawn;
	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnStartRaid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalIncidentBroadcastParameter   Parameter                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_PalAudioWorldSubsystem_C::OnStartRaid(const struct FPalIncidentBroadcastParameter& Parameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnStartRaid");

	Params::BP_PalAudioWorldSubsystem_C_OnStartRaid Parms{};

	Parms.Parameter = std::move(Parameter);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.PlayAmbientSounds
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalOneDayTimeType                      OneDayTimeType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::PlayAmbientSounds(EPalOneDayTimeType OneDayTimeType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "PlayAmbientSounds");

	Params::BP_PalAudioWorldSubsystem_C_PlayAmbientSounds Parms{};

	Parms.OneDayTimeType = OneDayTimeType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.RespawnPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*              Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::RespawnPlayer(class APalPlayerCharacter* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "RespawnPlayer");

	Params::BP_PalAudioWorldSubsystem_C_RespawnPlayer Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.SetDefaultState
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PalAudioWorldSubsystem_C::SetDefaultState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "SetDefaultState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.SetDsiableBattleBGM
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsDisable                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::SetDsiableBattleBGM(bool bIsDisable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "SetDsiableBattleBGM");

	Params::BP_PalAudioWorldSubsystem_C_SetDsiableBattleBGM Parms{};

	Parms.bIsDisable = bIsDisable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.Tick_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::Tick_BP(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "Tick_BP");

	Params::BP_PalAudioWorldSubsystem_C_Tick_BP Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.UpdateAmbient
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PalAudioWorldSubsystem_C::UpdateAmbient()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "UpdateAmbient");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.UpdateDebugDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PalAudioWorldSubsystem_C::UpdateDebugDisplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "UpdateDebugDisplay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.UpdateRaid
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PalAudioWorldSubsystem_C::UpdateRaid()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "UpdateRaid");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.UpdateSpot
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PalAudioWorldSubsystem_C::UpdateSpot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "UpdateSpot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.UpdateStatePlayerAlive
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PalAudioWorldSubsystem_C::UpdateStatePlayerAlive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "UpdateStatePlayerAlive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.UpdateWorldLocation
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PalAudioWorldSubsystem_C::UpdateWorldLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "UpdateWorldLocation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.UpdateWorldTime
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PalAudioWorldSubsystem_C::UpdateWorldTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "UpdateWorldTime");

	UObject::ProcessEvent(Func, nullptr);
}

}

