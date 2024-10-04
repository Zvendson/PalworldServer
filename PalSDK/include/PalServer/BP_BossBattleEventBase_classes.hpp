#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_BossBattleEventBase.BP_BossBattleEventBase_C
// 0x0010 (0x0050 - 0x0040)
class UBP_BossBattleEventBase_C final : public UPalBossBattleEventBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0040(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_BossBattle_BossCharacterSpawner_C*  BossSpawner;                                       // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

public:
	void ActivateCharacter(class UPalIndividualCharacterHandle* IndividualHandle, const struct FVector& Offset);
	void ExecuteUbergraph_BP_BossBattleEventBase(int32 EntryPoint);
	void GetDebugNo(int32 BitFlag, bool* Result);
	void OnTerminate();
	void SetSpawner(class ABP_BossBattle_BossCharacterSpawner_C* Spawner);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BossBattleEventBase_C">();
	}
	static class UBP_BossBattleEventBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BossBattleEventBase_C>();
	}
};
static_assert(alignof(UBP_BossBattleEventBase_C) == 0x000008, "Wrong alignment on UBP_BossBattleEventBase_C");
static_assert(sizeof(UBP_BossBattleEventBase_C) == 0x000050, "Wrong size on UBP_BossBattleEventBase_C");
static_assert(offsetof(UBP_BossBattleEventBase_C, UberGraphFrame) == 0x000040, "Member 'UBP_BossBattleEventBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_BossBattleEventBase_C, BossSpawner) == 0x000048, "Member 'UBP_BossBattleEventBase_C::BossSpawner' has a wrong offset!");

}

