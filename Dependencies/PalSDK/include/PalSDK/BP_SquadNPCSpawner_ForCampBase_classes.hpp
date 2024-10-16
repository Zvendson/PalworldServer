#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SquadNPCSpawner_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SquadNPCSpawner_ForCampBase.BP_SquadNPCSpawner_ForCampBase_C
// 0x0008 (0x0480 - 0x0478)
class ABP_SquadNPCSpawner_ForCampBase_C : public ABP_SquadNPCSpawner_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SquadNPCSpawner_ForCampBase_C;   // 0x0478(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void AdjustFloor(class AActor* SpaenedChara);
	void DeleteOnePoint(class AActor* Point);
	void ExecuteUbergraph_BP_SquadNPCSpawner_ForCampBase(int32 EntryPoint);
	void RayAdjustFloor();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SquadNPCSpawner_ForCampBase_C">();
	}
	static class ABP_SquadNPCSpawner_ForCampBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SquadNPCSpawner_ForCampBase_C>();
	}
};
static_assert(alignof(ABP_SquadNPCSpawner_ForCampBase_C) == 0x000008, "Wrong alignment on ABP_SquadNPCSpawner_ForCampBase_C");
static_assert(sizeof(ABP_SquadNPCSpawner_ForCampBase_C) == 0x000480, "Wrong size on ABP_SquadNPCSpawner_ForCampBase_C");
static_assert(offsetof(ABP_SquadNPCSpawner_ForCampBase_C, UberGraphFrame_BP_SquadNPCSpawner_ForCampBase_C) == 0x000478, "Member 'ABP_SquadNPCSpawner_ForCampBase_C::UberGraphFrame_BP_SquadNPCSpawner_ForCampBase_C' has a wrong offset!");

}

