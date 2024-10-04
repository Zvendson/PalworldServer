#pragma once

#include "Basic.hpp"

#include "BP_MonsterAIController_Wild_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_MonsterAIController_Wild_Mimicdog.BP_MonsterAIController_Wild_Mimicdog_C
// 0x0000 (0x0570 - 0x0570)
class ABP_MonsterAIController_Wild_Mimicdog_C final : public ABP_MonsterAIController_Wild_C
{
public:
	void PlayDefaultAction();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MonsterAIController_Wild_Mimicdog_C">();
	}
	static class ABP_MonsterAIController_Wild_Mimicdog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MonsterAIController_Wild_Mimicdog_C>();
	}
};
static_assert(alignof(ABP_MonsterAIController_Wild_Mimicdog_C) == 0x000008, "Wrong alignment on ABP_MonsterAIController_Wild_Mimicdog_C");
static_assert(sizeof(ABP_MonsterAIController_Wild_Mimicdog_C) == 0x000570, "Wrong size on ABP_MonsterAIController_Wild_Mimicdog_C");

}

