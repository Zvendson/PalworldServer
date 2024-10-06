#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalMonsterInframeRendererSoundPlayer.BP_PalMonsterInframeRendererSoundPlayer_C
// 0x0010 (0x02A0 - 0x0290)
class ABP_PalMonsterInframeRendererSoundPlayer_C final : public AActor
{
public:
	class UPalSoundPlayerComponent*               PalSoundPlayer;                                    // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalMonsterInframeRendererSoundPlayer_C">();
	}
	static class ABP_PalMonsterInframeRendererSoundPlayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalMonsterInframeRendererSoundPlayer_C>();
	}
};
static_assert(alignof(ABP_PalMonsterInframeRendererSoundPlayer_C) == 0x000008, "Wrong alignment on ABP_PalMonsterInframeRendererSoundPlayer_C");
static_assert(sizeof(ABP_PalMonsterInframeRendererSoundPlayer_C) == 0x0002A0, "Wrong size on ABP_PalMonsterInframeRendererSoundPlayer_C");
static_assert(offsetof(ABP_PalMonsterInframeRendererSoundPlayer_C, PalSoundPlayer) == 0x000290, "Member 'ABP_PalMonsterInframeRendererSoundPlayer_C::PalSoundPlayer' has a wrong offset!");
static_assert(offsetof(ABP_PalMonsterInframeRendererSoundPlayer_C, DefaultSceneRoot) == 0x000298, "Member 'ABP_PalMonsterInframeRendererSoundPlayer_C::DefaultSceneRoot' has a wrong offset!");

}

