#pragma once

#include "Basic.hpp"

#include "BP_CutsceneActorBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_CutsceneActor_Arena_Result.BP_CutsceneActor_Arena_Result_C
// 0x0000 (0x0318 - 0x0318)
class ABP_CutsceneActor_Arena_Result_C final : public ABP_CutsceneActorBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CutsceneActor_Arena_Result_C">();
	}
	static class ABP_CutsceneActor_Arena_Result_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CutsceneActor_Arena_Result_C>();
	}
};
static_assert(alignof(ABP_CutsceneActor_Arena_Result_C) == 0x000008, "Wrong alignment on ABP_CutsceneActor_Arena_Result_C");
static_assert(sizeof(ABP_CutsceneActor_Arena_Result_C) == 0x000318, "Wrong size on ABP_CutsceneActor_Arena_Result_C");

}

