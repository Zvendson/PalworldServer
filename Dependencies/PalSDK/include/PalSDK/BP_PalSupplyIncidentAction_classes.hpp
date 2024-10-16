#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_PalIncidentRandomActionBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalSupplyIncidentAction.BP_PalSupplyIncidentAction_C
// 0x0010 (0x0060 - 0x0050)
class UBP_PalSupplyIncidentAction_C final : public UBP_PalIncidentRandomActionBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_PalSupplyIncidentAction_C;       // 0x0050(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          IsAllNpcSpawned;                                   // 0x0058(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CollectChangeHateTargets(TArray<class APalCharacter*>* SourceCharacters, TArray<class APalCharacter*>* TargetCharacters);
	void ExecuteUbergraph_BP_PalSupplyIncidentAction(int32 EntryPoint);
	void ExistsAliveCharacter(bool NPCSpawner, bool* IsAlive);
	void GetNPCSpawner(bool bIsPalSpawner, class APalRandomIncidentNPCSpawner** Result);
	void GetSpawnedLocation(class APalAIController* Controller, bool* Found, struct FVector* Location);
	void GetSpawnerLocation(struct FVector* Location);
	void GetSpawnRadius(double* Radius);
	void OnAllNpcSpawned();
	void OnInitialized();
	void OnStart();
	void OnTerminate();
	void OnTick(float DeltaTime);
	void ResetAIController(bool NPCSpawner);
	void ResetAIController_Monster(class ABP_MonsterAIControllerBase_C* Controller);
	void ResetAIController_NPC(class ABP_NPCAIController_C* Controller);
	void Set_Hate_To_Targets(class APalCharacter* Character, TArray<class APalCharacter*>& Targets);
	void SetHate();

	void GetSpawner(class APalRandomIncidentNPCSpawner** Spawmer) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalSupplyIncidentAction_C">();
	}
	static class UBP_PalSupplyIncidentAction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalSupplyIncidentAction_C>();
	}
};
static_assert(alignof(UBP_PalSupplyIncidentAction_C) == 0x000008, "Wrong alignment on UBP_PalSupplyIncidentAction_C");
static_assert(sizeof(UBP_PalSupplyIncidentAction_C) == 0x000060, "Wrong size on UBP_PalSupplyIncidentAction_C");
static_assert(offsetof(UBP_PalSupplyIncidentAction_C, UberGraphFrame_BP_PalSupplyIncidentAction_C) == 0x000050, "Member 'UBP_PalSupplyIncidentAction_C::UberGraphFrame_BP_PalSupplyIncidentAction_C' has a wrong offset!");
static_assert(offsetof(UBP_PalSupplyIncidentAction_C, IsAllNpcSpawned) == 0x000058, "Member 'UBP_PalSupplyIncidentAction_C::IsAllNpcSpawned' has a wrong offset!");

}

