#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_PalRandomIncidentSpawnerTemplate_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalSupplyIncidentSpawnerBase.BP_PalSupplyIncidentSpawnerBase_C
// 0x0010 (0x0468 - 0x0458)
class ABP_PalSupplyIncidentSpawnerBase_C : public ABP_PalRandomIncidentSpawnerTemplate_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_PalSupplyIncidentSpawnerBase_C;  // 0x0458(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          bIsPalSpawner;                                     // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bWipedOut;                                         // 0x0461(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PalSupplyIncidentSpawnerBase(int32 EntryPoint);
	void WipedOut();
	void OnIncidentSpawned(class UPalIncidentBase* Incident, class UPalIncidentDynamicParameterRandom* DynamicParameter);
	void ReceiveBeginPlay();
	void ReleaseIncident();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalSupplyIncidentSpawnerBase_C">();
	}
	static class ABP_PalSupplyIncidentSpawnerBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalSupplyIncidentSpawnerBase_C>();
	}
};
static_assert(alignof(ABP_PalSupplyIncidentSpawnerBase_C) == 0x000008, "Wrong alignment on ABP_PalSupplyIncidentSpawnerBase_C");
static_assert(sizeof(ABP_PalSupplyIncidentSpawnerBase_C) == 0x000468, "Wrong size on ABP_PalSupplyIncidentSpawnerBase_C");
static_assert(offsetof(ABP_PalSupplyIncidentSpawnerBase_C, UberGraphFrame_BP_PalSupplyIncidentSpawnerBase_C) == 0x000458, "Member 'ABP_PalSupplyIncidentSpawnerBase_C::UberGraphFrame_BP_PalSupplyIncidentSpawnerBase_C' has a wrong offset!");
static_assert(offsetof(ABP_PalSupplyIncidentSpawnerBase_C, bIsPalSpawner) == 0x000460, "Member 'ABP_PalSupplyIncidentSpawnerBase_C::bIsPalSpawner' has a wrong offset!");
static_assert(offsetof(ABP_PalSupplyIncidentSpawnerBase_C, bWipedOut) == 0x000461, "Member 'ABP_PalSupplyIncidentSpawnerBase_C::bWipedOut' has a wrong offset!");

}

