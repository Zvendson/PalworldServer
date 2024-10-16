#pragma once

#include "Basic.hpp"

#include "LevelSequence_classes.hpp"
#include "Engine_structs.hpp"
#include "Pal_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass LS_Arena_PreBattle_Cutscene.LS_Arena_PreBattle_Cutscene (Director BP)_C
// 0x0008 (0x0040 - 0x0038)
class ULS_Arena_PreBattle_Cutscene__Director_BP__C final : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_LS_Arena_PreBattle_Cutscene__Director_BP_(int32 EntryPoint);
	void PreBattleEvent_Event(class APalArenaPreBattleCutsceneEvent* PreBattleEvent, EPalArenaPlayerIndex PlayerIndex);
	void PreBattleEvent_Event_0(class APalArenaPreBattleCutsceneEvent* PreBattleEvent, EPalArenaPlayerIndex PlayerIndex);
	void SequenceEvent__ENTRYPOINTLS_Arena_PreBattle_Cutscene__Director_BP_(class APalArenaPreBattleCutsceneEvent* PreBattleEvent);
	void SequenceEvent__ENTRYPOINTLS_Arena_PreBattle_Cutscene__Director_BP__0(class APalArenaPreBattleCutsceneEvent* PreBattleEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LS_Arena_PreBattle_Cutscene (Director BP)_C">();
	}
	static class ULS_Arena_PreBattle_Cutscene__Director_BP__C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULS_Arena_PreBattle_Cutscene__Director_BP__C>();
	}
};
static_assert(alignof(ULS_Arena_PreBattle_Cutscene__Director_BP__C) == 0x000008, "Wrong alignment on ULS_Arena_PreBattle_Cutscene__Director_BP__C");
static_assert(sizeof(ULS_Arena_PreBattle_Cutscene__Director_BP__C) == 0x000040, "Wrong size on ULS_Arena_PreBattle_Cutscene__Director_BP__C");
static_assert(offsetof(ULS_Arena_PreBattle_Cutscene__Director_BP__C, UberGraphFrame) == 0x000038, "Member 'ULS_Arena_PreBattle_Cutscene__Director_BP__C::UberGraphFrame' has a wrong offset!");

}

