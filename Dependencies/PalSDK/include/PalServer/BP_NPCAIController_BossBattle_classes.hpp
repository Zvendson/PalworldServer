#pragma once

#include "Basic.hpp"

#include "BP_NPCAIController_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_NPCAIController_BossBattle.BP_NPCAIController_BossBattle_C
// 0x0000 (0x0590 - 0x0590)
class ABP_NPCAIController_BossBattle_C final : public ABP_NPCAIController_C
{
public:
	void ForceBattleStartToTarget_Boss(class APalPlayerCharacter* Player, TArray<class APalPlayerCharacter*>& AllPlayer);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NPCAIController_BossBattle_C">();
	}
	static class ABP_NPCAIController_BossBattle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NPCAIController_BossBattle_C>();
	}
};
static_assert(alignof(ABP_NPCAIController_BossBattle_C) == 0x000008, "Wrong alignment on ABP_NPCAIController_BossBattle_C");
static_assert(sizeof(ABP_NPCAIController_BossBattle_C) == 0x000590, "Wrong size on ABP_NPCAIController_BossBattle_C");

}

