#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_DungeonPortalMarker_Sakura.BP_DungeonPortalMarker_Sakura_C
// 0x0010 (0x02E8 - 0x02D8)
class ABP_DungeonPortalMarker_Sakura_C final : public APalDungeonPointMarker
{
public:
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DungeonPortalMarker_Sakura_C">();
	}
	static class ABP_DungeonPortalMarker_Sakura_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DungeonPortalMarker_Sakura_C>();
	}
};
static_assert(alignof(ABP_DungeonPortalMarker_Sakura_C) == 0x000008, "Wrong alignment on ABP_DungeonPortalMarker_Sakura_C");
static_assert(sizeof(ABP_DungeonPortalMarker_Sakura_C) == 0x0002E8, "Wrong size on ABP_DungeonPortalMarker_Sakura_C");
static_assert(offsetof(ABP_DungeonPortalMarker_Sakura_C, StaticMesh) == 0x0002D8, "Member 'ABP_DungeonPortalMarker_Sakura_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_DungeonPortalMarker_Sakura_C, DefaultSceneRoot) == 0x0002E0, "Member 'ABP_DungeonPortalMarker_Sakura_C::DefaultSceneRoot' has a wrong offset!");

}

