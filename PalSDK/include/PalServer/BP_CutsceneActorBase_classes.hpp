#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_CutsceneActorBase.BP_CutsceneActorBase_C
// 0x0000 (0x0318 - 0x0318)
class ABP_CutsceneActorBase_C : public APalCutsceneActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CutsceneActorBase_C">();
	}
	static class ABP_CutsceneActorBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CutsceneActorBase_C>();
	}
};
static_assert(alignof(ABP_CutsceneActorBase_C) == 0x000008, "Wrong alignment on ABP_CutsceneActorBase_C");
static_assert(sizeof(ABP_CutsceneActorBase_C) == 0x000318, "Wrong size on ABP_CutsceneActorBase_C");

}

