#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_BossBattle_BossCharacterSpawner.BP_BossBattle_BossCharacterSpawner_C
// 0x0040 (0x02D0 - 0x0290)
class ABP_BossBattle_BossCharacterSpawner_C final : public AActor
{
public:
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          BossCharacterHandle;                               // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         StartPlayerNum;                                    // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AC[0x4];                                      // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnOtherSpawned;                                    // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UPalIndividualCharacterHandle*>  OtherCharacterHandles;                             // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void GetDebugNo(int32 BitFlag, bool* Result);
	void IsSkipCutscene(bool* Skip);
	void OnOtherSpawned__DelegateSignature(class UPalIndividualCharacterHandle* SpawnCharacterHandle);
	void RequestBossSpawn(class FName CharacterID, int32 Level);
	void RequestDespawn();
	void RequestOtherSpawn(class FName CharacterID, int32 Level, class UClass* AIController, bool IsOutAreaSpawn);
	void SetBossLocationToStartPoint();
	void SetCharacterStartLocation(class UPalIndividualCharacterHandle* TargetHandle, const struct FVector& Offset);
	void SetMultiPlayerHPRate(class APalCharacter* SpawnCharacter);
	void SpawnBossDelegate(const struct FPalInstanceID& ID);
	void SpawnOtherDelegate(const struct FPalInstanceID& ID);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BossBattle_BossCharacterSpawner_C">();
	}
	static class ABP_BossBattle_BossCharacterSpawner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BossBattle_BossCharacterSpawner_C>();
	}
};
static_assert(alignof(ABP_BossBattle_BossCharacterSpawner_C) == 0x000008, "Wrong alignment on ABP_BossBattle_BossCharacterSpawner_C");
static_assert(sizeof(ABP_BossBattle_BossCharacterSpawner_C) == 0x0002D0, "Wrong size on ABP_BossBattle_BossCharacterSpawner_C");
static_assert(offsetof(ABP_BossBattle_BossCharacterSpawner_C, StaticMesh) == 0x000290, "Member 'ABP_BossBattle_BossCharacterSpawner_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_BossBattle_BossCharacterSpawner_C, DefaultSceneRoot) == 0x000298, "Member 'ABP_BossBattle_BossCharacterSpawner_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_BossBattle_BossCharacterSpawner_C, BossCharacterHandle) == 0x0002A0, "Member 'ABP_BossBattle_BossCharacterSpawner_C::BossCharacterHandle' has a wrong offset!");
static_assert(offsetof(ABP_BossBattle_BossCharacterSpawner_C, StartPlayerNum) == 0x0002A8, "Member 'ABP_BossBattle_BossCharacterSpawner_C::StartPlayerNum' has a wrong offset!");
static_assert(offsetof(ABP_BossBattle_BossCharacterSpawner_C, OnOtherSpawned) == 0x0002B0, "Member 'ABP_BossBattle_BossCharacterSpawner_C::OnOtherSpawned' has a wrong offset!");
static_assert(offsetof(ABP_BossBattle_BossCharacterSpawner_C, OtherCharacterHandles) == 0x0002C0, "Member 'ABP_BossBattle_BossCharacterSpawner_C::OtherCharacterHandles' has a wrong offset!");

}

