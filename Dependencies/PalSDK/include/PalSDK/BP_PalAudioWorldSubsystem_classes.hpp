#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C
// 0x0158 (0x01D8 - 0x0080)
class UBP_PalAudioWorldSubsystem_C final : public UPalAudioWorldSubsystem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0080(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          IsDead;                                            // 0x0088(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 DeubugModel;                                       // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 LastOneEnemy;                                      // 0x0098(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuid>                          ExecRaid;                                          // 0x00A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGuid>                          ArrivedRaid;                                       // 0x00B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsLocalPlayerInsideBaseCamp;                       // 0x00C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APalSpotAreaBase*>               SpotList;                                          // 0x00C8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class APalAmbientSoundAreaBase*>       AmbientSoundList;                                  // 0x00D8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class APalAmbientSoundAreaBase*>       AmbientSoundListPrev;                              // 0x00E8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<int32>                                 AmbinetSoundPlayingIdList;                         // 0x00F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EPalBattleBGMType, EPalAudioStateGroup>  BattleBGMMap;                                      // 0x0108(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPalAmbientSoundAreaData               CurrentAmbientData;                                // 0x0158(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EPalBattleBGMType, EPalAudioState>       BattleBGMMap2;                                     // 0x0180(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsDisableBattleBGM;                                // 0x01D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalBattleBGMType                             BattleBGMRankCache;                                // 0x01D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ChangeBattleBGMType(EPalBattleBGMType GameType, EPalAudioStateGroup* AudioType);
	void CreateDebugModel(class AActor** NewParam);
	void DeathPlayer();
	void ExecuteUbergraph_BP_PalAudioWorldSubsystem(int32 EntryPoint);
	void FindMaxPriorityAmbientSoundArea(class APalAmbientSoundAreaBase** AmbinetSoundArea);
	bool IsPlayingArea(class APalAmbientSoundAreaBase* AmbientSoundArea);
	void On_Change_Battle_BGM(EPalBattleBGMType Rank);
	void OnArenaSequenceChanged(int32 CurrentIndex);
	void OnArenaSequenceEnd();
	void OnArenaSequenceStart(class UPalArenaSequencer* ArenaSequencer);
	void OnArrivedRaid(const struct FPalIncidentBroadcastParameter& Param);
	void OnBattleModeChanged(bool IsBattleMode);
	void OnBattleRankDown(EPalPlayerBattleFinishType Finish);
	void OnChangeOneDayTimeType(EPalOneDayTimeType OneDayTimeType);
	void OnEndOfEvent();
	void OnEndRaid(const struct FPalIncidentBroadcastParameter& Parameter);
	void OnNightEnd();
	void OnNightStart();
	void OnPlayerEnterAmbientArea(class APalPlayerCharacter* Player, class APalAmbientSoundAreaBase* AmbientSoundArea);
	void OnPlayerEnterBaseCamp(class APalPlayerCharacter* Player, class UPalBaseCampModel* BaseCampModel);
	void OnPlayerEnterSpotArea(class APalPlayerCharacter* Player, class APalSpotAreaBase* SpotArea);
	void OnPlayerExitAmbientArea(class APalPlayerCharacter* Player, class APalAmbientSoundAreaBase* AmbientSoundArea);
	void OnPlayerExitBaseCamp(class APalPlayerCharacter* Player, class UPalBaseCampModel* BaseCampModel);
	void OnPlayerExitSpotArea(class APalPlayerCharacter* Player, class APalSpotAreaBase* SpotArea);
	void OnSpawnedLocalPlayerCharacter(class APawn* Pawn, class AController* Controller);
	void OnStartRaid(const struct FPalIncidentBroadcastParameter& Parameter);
	void PlayAmbientSounds(EPalOneDayTimeType OneDayTimeType);
	void RespawnPlayer(class APalPlayerCharacter* Player);
	void SetDefaultState();
	void SetDsiableBattleBGM(bool bIsDisable);
	void Tick_BP(float DeltaTime);
	void UpdateAmbient();
	void UpdateDebugDisplay();
	void UpdateRaid();
	void UpdateSpot();
	void UpdateStatePlayerAlive();
	void UpdateWorldLocation();
	void UpdateWorldTime();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalAudioWorldSubsystem_C">();
	}
	static class UBP_PalAudioWorldSubsystem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalAudioWorldSubsystem_C>();
	}
};
static_assert(alignof(UBP_PalAudioWorldSubsystem_C) == 0x000008, "Wrong alignment on UBP_PalAudioWorldSubsystem_C");
static_assert(sizeof(UBP_PalAudioWorldSubsystem_C) == 0x0001D8, "Wrong size on UBP_PalAudioWorldSubsystem_C");
static_assert(offsetof(UBP_PalAudioWorldSubsystem_C, UberGraphFrame) == 0x000080, "Member 'UBP_PalAudioWorldSubsystem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PalAudioWorldSubsystem_C, IsDead) == 0x000088, "Member 'UBP_PalAudioWorldSubsystem_C::IsDead' has a wrong offset!");
static_assert(offsetof(UBP_PalAudioWorldSubsystem_C, DeubugModel) == 0x000090, "Member 'UBP_PalAudioWorldSubsystem_C::DeubugModel' has a wrong offset!");
static_assert(offsetof(UBP_PalAudioWorldSubsystem_C, LastOneEnemy) == 0x000098, "Member 'UBP_PalAudioWorldSubsystem_C::LastOneEnemy' has a wrong offset!");
static_assert(offsetof(UBP_PalAudioWorldSubsystem_C, ExecRaid) == 0x0000A0, "Member 'UBP_PalAudioWorldSubsystem_C::ExecRaid' has a wrong offset!");
static_assert(offsetof(UBP_PalAudioWorldSubsystem_C, ArrivedRaid) == 0x0000B0, "Member 'UBP_PalAudioWorldSubsystem_C::ArrivedRaid' has a wrong offset!");
static_assert(offsetof(UBP_PalAudioWorldSubsystem_C, IsLocalPlayerInsideBaseCamp) == 0x0000C0, "Member 'UBP_PalAudioWorldSubsystem_C::IsLocalPlayerInsideBaseCamp' has a wrong offset!");
static_assert(offsetof(UBP_PalAudioWorldSubsystem_C, SpotList) == 0x0000C8, "Member 'UBP_PalAudioWorldSubsystem_C::SpotList' has a wrong offset!");
static_assert(offsetof(UBP_PalAudioWorldSubsystem_C, AmbientSoundList) == 0x0000D8, "Member 'UBP_PalAudioWorldSubsystem_C::AmbientSoundList' has a wrong offset!");
static_assert(offsetof(UBP_PalAudioWorldSubsystem_C, AmbientSoundListPrev) == 0x0000E8, "Member 'UBP_PalAudioWorldSubsystem_C::AmbientSoundListPrev' has a wrong offset!");
static_assert(offsetof(UBP_PalAudioWorldSubsystem_C, AmbinetSoundPlayingIdList) == 0x0000F8, "Member 'UBP_PalAudioWorldSubsystem_C::AmbinetSoundPlayingIdList' has a wrong offset!");
static_assert(offsetof(UBP_PalAudioWorldSubsystem_C, BattleBGMMap) == 0x000108, "Member 'UBP_PalAudioWorldSubsystem_C::BattleBGMMap' has a wrong offset!");
static_assert(offsetof(UBP_PalAudioWorldSubsystem_C, CurrentAmbientData) == 0x000158, "Member 'UBP_PalAudioWorldSubsystem_C::CurrentAmbientData' has a wrong offset!");
static_assert(offsetof(UBP_PalAudioWorldSubsystem_C, BattleBGMMap2) == 0x000180, "Member 'UBP_PalAudioWorldSubsystem_C::BattleBGMMap2' has a wrong offset!");
static_assert(offsetof(UBP_PalAudioWorldSubsystem_C, IsDisableBattleBGM) == 0x0001D0, "Member 'UBP_PalAudioWorldSubsystem_C::IsDisableBattleBGM' has a wrong offset!");
static_assert(offsetof(UBP_PalAudioWorldSubsystem_C, BattleBGMRankCache) == 0x0001D1, "Member 'UBP_PalAudioWorldSubsystem_C::BattleBGMRankCache' has a wrong offset!");

}

