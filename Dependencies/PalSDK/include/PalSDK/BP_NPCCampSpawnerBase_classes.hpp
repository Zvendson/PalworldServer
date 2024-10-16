#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"
#include "F_NPCCampPreset_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C
// 0x0080 (0x0318 - 0x0298)
class ABP_NPCCampSpawnerBase_C final : public APalNPCCampSpawnerBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   DebugMesh;                                         // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        Probability;                                       // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_NPCCampPresetBase_C*                CampObject;                                        // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class FName                                   RewardName;                                        // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RespawnTime_RealMinutes;                           // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           TimerHand;                                         // 0x02D0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          RespawnPossible;                                   // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_2D9[0x7];                                      // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        RespawnDistance_FromPlayer;                        // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DisableDistance_FromBaseCamp;                      // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FF_NPCCampPreset>               PresetList;                                        // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UPalIndividualCharacterHandle*>  CampEnemys;                                        // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          LoadCamp;                                          // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CheckWorldLoadComplete(bool* Loaded);
	void CREATEDELEGATE_PROXYFUNCTION_0(class UPalIndividualCharacterHandle* NewParam);
	void DespawnCamp();
	void ExecuteUbergraph_BP_NPCCampSpawnerBase(int32 EntryPoint);
	void IsNearPlayerCamp(bool* IsNear);
	void IsProbabilitySuccess(bool* Success);
	void OnEnemyDead(const struct FPalDeadInfo& DeadInfo);
	void OnEnemySpawned(class UPalIndividualCharacterHandle*& SpawnHandle);
	void OnReceivedReward();
	void PlayerCheck(bool* RespawnOK);
	void RandomLottery(class UClass** ResultClass);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void SetRespawnAble();
	void SetupCampStatus();
	void StartDespawnTimer(double DespawnTime);
	void StartRespawnTimer(double RespawnTime);
	void TryCampSpawn();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NPCCampSpawnerBase_C">();
	}
	static class ABP_NPCCampSpawnerBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NPCCampSpawnerBase_C>();
	}
};
static_assert(alignof(ABP_NPCCampSpawnerBase_C) == 0x000008, "Wrong alignment on ABP_NPCCampSpawnerBase_C");
static_assert(sizeof(ABP_NPCCampSpawnerBase_C) == 0x000318, "Wrong size on ABP_NPCCampSpawnerBase_C");
static_assert(offsetof(ABP_NPCCampSpawnerBase_C, UberGraphFrame) == 0x000298, "Member 'ABP_NPCCampSpawnerBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_NPCCampSpawnerBase_C, DebugMesh) == 0x0002A0, "Member 'ABP_NPCCampSpawnerBase_C::DebugMesh' has a wrong offset!");
static_assert(offsetof(ABP_NPCCampSpawnerBase_C, DefaultSceneRoot) == 0x0002A8, "Member 'ABP_NPCCampSpawnerBase_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_NPCCampSpawnerBase_C, Probability) == 0x0002B0, "Member 'ABP_NPCCampSpawnerBase_C::Probability' has a wrong offset!");
static_assert(offsetof(ABP_NPCCampSpawnerBase_C, CampObject) == 0x0002B8, "Member 'ABP_NPCCampSpawnerBase_C::CampObject' has a wrong offset!");
static_assert(offsetof(ABP_NPCCampSpawnerBase_C, RewardName) == 0x0002C0, "Member 'ABP_NPCCampSpawnerBase_C::RewardName' has a wrong offset!");
static_assert(offsetof(ABP_NPCCampSpawnerBase_C, RespawnTime_RealMinutes) == 0x0002C8, "Member 'ABP_NPCCampSpawnerBase_C::RespawnTime_RealMinutes' has a wrong offset!");
static_assert(offsetof(ABP_NPCCampSpawnerBase_C, TimerHand) == 0x0002D0, "Member 'ABP_NPCCampSpawnerBase_C::TimerHand' has a wrong offset!");
static_assert(offsetof(ABP_NPCCampSpawnerBase_C, RespawnPossible) == 0x0002D8, "Member 'ABP_NPCCampSpawnerBase_C::RespawnPossible' has a wrong offset!");
static_assert(offsetof(ABP_NPCCampSpawnerBase_C, RespawnDistance_FromPlayer) == 0x0002E0, "Member 'ABP_NPCCampSpawnerBase_C::RespawnDistance_FromPlayer' has a wrong offset!");
static_assert(offsetof(ABP_NPCCampSpawnerBase_C, DisableDistance_FromBaseCamp) == 0x0002E8, "Member 'ABP_NPCCampSpawnerBase_C::DisableDistance_FromBaseCamp' has a wrong offset!");
static_assert(offsetof(ABP_NPCCampSpawnerBase_C, PresetList) == 0x0002F0, "Member 'ABP_NPCCampSpawnerBase_C::PresetList' has a wrong offset!");
static_assert(offsetof(ABP_NPCCampSpawnerBase_C, CampEnemys) == 0x000300, "Member 'ABP_NPCCampSpawnerBase_C::CampEnemys' has a wrong offset!");
static_assert(offsetof(ABP_NPCCampSpawnerBase_C, LoadCamp) == 0x000310, "Member 'ABP_NPCCampSpawnerBase_C::LoadCamp' has a wrong offset!");

}

