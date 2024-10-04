#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_NPCCampPresetBase.BP_NPCCampPresetBase_C
// 0x0030 (0x02C0 - 0x0290)
class ABP_NPCCampPresetBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSpawnedCharacter;                                // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsAllEnemyDead;                                    // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2B1[0x7];                                      // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_NPCCampSpawnerBase_C*               OwnerCampSpawner;                                  // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void DeleteChildActor();
	void ExecuteUbergraph_BP_NPCCampPresetBase(int32 EntryPoint);
	void GetCampSpawnerName(class FName* Key);
	void GetRewardKey(class FName* Key);
	void OnCapturedEvent();
	void OnSpawnedCharacter__DelegateSignature(class UPalIndividualCharacterHandle* NewParam);
	void RayAdjustFloor();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ________________________(class UPalIndividualCharacterHandle* NewParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NPCCampPresetBase_C">();
	}
	static class ABP_NPCCampPresetBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NPCCampPresetBase_C>();
	}
};
static_assert(alignof(ABP_NPCCampPresetBase_C) == 0x000008, "Wrong alignment on ABP_NPCCampPresetBase_C");
static_assert(sizeof(ABP_NPCCampPresetBase_C) == 0x0002C0, "Wrong size on ABP_NPCCampPresetBase_C");
static_assert(offsetof(ABP_NPCCampPresetBase_C, UberGraphFrame) == 0x000290, "Member 'ABP_NPCCampPresetBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_NPCCampPresetBase_C, DefaultSceneRoot) == 0x000298, "Member 'ABP_NPCCampPresetBase_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_NPCCampPresetBase_C, OnSpawnedCharacter) == 0x0002A0, "Member 'ABP_NPCCampPresetBase_C::OnSpawnedCharacter' has a wrong offset!");
static_assert(offsetof(ABP_NPCCampPresetBase_C, IsAllEnemyDead) == 0x0002B0, "Member 'ABP_NPCCampPresetBase_C::IsAllEnemyDead' has a wrong offset!");
static_assert(offsetof(ABP_NPCCampPresetBase_C, OwnerCampSpawner) == 0x0002B8, "Member 'ABP_NPCCampPresetBase_C::OwnerCampSpawner' has a wrong offset!");

}

