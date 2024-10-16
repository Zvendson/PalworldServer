#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalGameStateInGame.BP_PalGameStateInGame_C
// 0x0008 (0x0468 - 0x0460)
class ABP_PalGameStateInGame_C final : public APalGameStateInGame
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0460(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalGameStateInGame_C">();
	}
	static class ABP_PalGameStateInGame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalGameStateInGame_C>();
	}
};
static_assert(alignof(ABP_PalGameStateInGame_C) == 0x000008, "Wrong alignment on ABP_PalGameStateInGame_C");
static_assert(sizeof(ABP_PalGameStateInGame_C) == 0x000468, "Wrong size on ABP_PalGameStateInGame_C");
static_assert(offsetof(ABP_PalGameStateInGame_C, DefaultSceneRoot) == 0x000460, "Member 'ABP_PalGameStateInGame_C::DefaultSceneRoot' has a wrong offset!");

}

