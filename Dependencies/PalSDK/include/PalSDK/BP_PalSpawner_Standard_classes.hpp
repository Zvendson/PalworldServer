#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalSpawner_Standard.BP_PalSpawner_Standard_C
// 0x00C8 (0x0440 - 0x0378)
class ABP_PalSpawner_Standard_C : public APalNPCSpawnerBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextRenderComponent*                   DummyTextRender;                                   // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 DummySkeletalMesh;                                 // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       SpawnCollision;                                    // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          NotSleepFlag;                                      // 0x03A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A1[0x7];                                      // 0x03A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MonsterBase_C*                      TempSpawnedMonster;                                // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TArray<class UPalIndividualCharacterHandle*>  IndividualHandleList;                              // 0x03B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	double                                        ReturnTerritoryRadius;                             // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        WanderingRadius;                                   // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                BattleStartLocation;                               // 0x03D0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                        SpawnRadius;                                       // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPalSpawnerGroupInfo>           SpawnGroupList;                                    // 0x03F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        RayStartUpOffset;                                  // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalSpawnerGroupInfo                   TempSpawnGroupInfo;                                // 0x0408(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	double                                        WildLifeWalkingAreaRadius;                         // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                        DespawnPlusDistance;                               // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLoading;                                         // 0x0430(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          IsWorldLoadComplete;                               // 0x0431(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_432[0x2];                                      // 0x0432(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SpawnerName;                                       // 0x0434(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalSpawnedCharacterType                      SpawnerType;                                       // 0x043C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BlueprintTick_Despawning(float DeltaTime);
	void BlueprintTick_Spawning(float DeltaTime);
	void BP_PalSpawner_Standard_AutoGenFunc(class AActor* DestroyedActor);
	void CheckIntervalByDistance();
	void CheckSpawn(double DeltaTime);
	void CheckWorldLoadCompleted();
	void CreateDebugSpawnerGroupInfo(const struct FPalSpawnerGroupInfo& OneGroupInfo);
	void Despawn();
	void DespawnDelegate(const struct FPalInstanceID& ID);
	void ExecuteUbergraph_BP_PalSpawner_Standard(int32 EntryPoint);
	void ExistAliveCharacter(bool* Exist);
	void FindIndividualHandle(const struct FPalInstanceID& ID, class UPalIndividualCharacterHandle** Handle);
	void GetAllSpawnedNPCHandle(TArray<class UPalIndividualCharacterHandle*>* Handles);
	void GetFixedSpawnInfo(struct FPalSpawnerGroupInfo* Group);
	float GetSpawnPointRadius();
	void Is_Field_Boss_or_Imprisonment_Boss_Spawner(bool* IsTimer);
	void IsAlwaysSpawn(bool* Always);
	void IsCharacterLoading(bool* IsLoading_0);
	bool IsSuppressedByRandomIncident();
	void IsWorldPartitionLoadComplete(bool* IsLoading_0);
	void Lottery_and_Spawn_Reauest();
	void LotterySpawnPalListIndex(bool* Success, struct FPalSpawnerGroupInfo* SpawnGroup);
	void OnCaptured(class APalCharacter* SelfPal, class APalCharacter* Attacker);
	void OnDead(const struct FPalDeadInfo& Info);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void RemoveHandleList(class APalCharacter* Monster);
	void SetAllNPCLocation();
	void Spawn(const struct FPalSpawnerGroupInfo& SpawnGroup);
	void Spawn_Delegate(const struct FPalInstanceID& ID);
	void SpawnRequest_ByOutside(bool IsDeleteAliveCharacter);
	void _________________________0();

	int32 GetMaxMonsterLevel() const;
	TArray<struct FPalSpawnerGroupInfo> GetOriginalSpawnGroupList() const;
	class FName GetSpawnerName() const;
	EPalSpawnedCharacterType GetSpawnerType() const;
	TArray<struct FPalSpawnerGroupInfo> GetSpawnGroupList(class UObject* WorldContextObject) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalSpawner_Standard_C">();
	}
	static class ABP_PalSpawner_Standard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalSpawner_Standard_C>();
	}
};
static_assert(alignof(ABP_PalSpawner_Standard_C) == 0x000008, "Wrong alignment on ABP_PalSpawner_Standard_C");
static_assert(sizeof(ABP_PalSpawner_Standard_C) == 0x000440, "Wrong size on ABP_PalSpawner_Standard_C");
static_assert(offsetof(ABP_PalSpawner_Standard_C, UberGraphFrame) == 0x000378, "Member 'ABP_PalSpawner_Standard_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PalSpawner_Standard_C, DummyTextRender) == 0x000380, "Member 'ABP_PalSpawner_Standard_C::DummyTextRender' has a wrong offset!");
static_assert(offsetof(ABP_PalSpawner_Standard_C, DummySkeletalMesh) == 0x000388, "Member 'ABP_PalSpawner_Standard_C::DummySkeletalMesh' has a wrong offset!");
static_assert(offsetof(ABP_PalSpawner_Standard_C, SpawnCollision) == 0x000390, "Member 'ABP_PalSpawner_Standard_C::SpawnCollision' has a wrong offset!");
static_assert(offsetof(ABP_PalSpawner_Standard_C, DefaultSceneRoot) == 0x000398, "Member 'ABP_PalSpawner_Standard_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PalSpawner_Standard_C, NotSleepFlag) == 0x0003A0, "Member 'ABP_PalSpawner_Standard_C::NotSleepFlag' has a wrong offset!");
static_assert(offsetof(ABP_PalSpawner_Standard_C, TempSpawnedMonster) == 0x0003A8, "Member 'ABP_PalSpawner_Standard_C::TempSpawnedMonster' has a wrong offset!");
static_assert(offsetof(ABP_PalSpawner_Standard_C, IndividualHandleList) == 0x0003B0, "Member 'ABP_PalSpawner_Standard_C::IndividualHandleList' has a wrong offset!");
static_assert(offsetof(ABP_PalSpawner_Standard_C, ReturnTerritoryRadius) == 0x0003C0, "Member 'ABP_PalSpawner_Standard_C::ReturnTerritoryRadius' has a wrong offset!");
static_assert(offsetof(ABP_PalSpawner_Standard_C, WanderingRadius) == 0x0003C8, "Member 'ABP_PalSpawner_Standard_C::WanderingRadius' has a wrong offset!");
static_assert(offsetof(ABP_PalSpawner_Standard_C, BattleStartLocation) == 0x0003D0, "Member 'ABP_PalSpawner_Standard_C::BattleStartLocation' has a wrong offset!");
static_assert(offsetof(ABP_PalSpawner_Standard_C, SpawnRadius) == 0x0003E8, "Member 'ABP_PalSpawner_Standard_C::SpawnRadius' has a wrong offset!");
static_assert(offsetof(ABP_PalSpawner_Standard_C, SpawnGroupList) == 0x0003F0, "Member 'ABP_PalSpawner_Standard_C::SpawnGroupList' has a wrong offset!");
static_assert(offsetof(ABP_PalSpawner_Standard_C, RayStartUpOffset) == 0x000400, "Member 'ABP_PalSpawner_Standard_C::RayStartUpOffset' has a wrong offset!");
static_assert(offsetof(ABP_PalSpawner_Standard_C, TempSpawnGroupInfo) == 0x000408, "Member 'ABP_PalSpawner_Standard_C::TempSpawnGroupInfo' has a wrong offset!");
static_assert(offsetof(ABP_PalSpawner_Standard_C, WildLifeWalkingAreaRadius) == 0x000420, "Member 'ABP_PalSpawner_Standard_C::WildLifeWalkingAreaRadius' has a wrong offset!");
static_assert(offsetof(ABP_PalSpawner_Standard_C, DespawnPlusDistance) == 0x000428, "Member 'ABP_PalSpawner_Standard_C::DespawnPlusDistance' has a wrong offset!");
static_assert(offsetof(ABP_PalSpawner_Standard_C, IsLoading) == 0x000430, "Member 'ABP_PalSpawner_Standard_C::IsLoading' has a wrong offset!");
static_assert(offsetof(ABP_PalSpawner_Standard_C, IsWorldLoadComplete) == 0x000431, "Member 'ABP_PalSpawner_Standard_C::IsWorldLoadComplete' has a wrong offset!");
static_assert(offsetof(ABP_PalSpawner_Standard_C, SpawnerName) == 0x000434, "Member 'ABP_PalSpawner_Standard_C::SpawnerName' has a wrong offset!");
static_assert(offsetof(ABP_PalSpawner_Standard_C, SpawnerType) == 0x00043C, "Member 'ABP_PalSpawner_Standard_C::SpawnerType' has a wrong offset!");

}

