#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_LevelObject_StaticRespawnPoint.BP_LevelObject_StaticRespawnPoint_C
// 0x0018 (0x02C8 - 0x02B0)
class ABP_LevelObject_StaticRespawnPoint_C final : public APalLevelObjectRespawnPoint
{
public:
	class UPalLimitVolumeBoxComponent*            PalLimitVolumeBox;                                 // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Mesh;                                              // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LevelObject_StaticRespawnPoint_C">();
	}
	static class ABP_LevelObject_StaticRespawnPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LevelObject_StaticRespawnPoint_C>();
	}
};
static_assert(alignof(ABP_LevelObject_StaticRespawnPoint_C) == 0x000008, "Wrong alignment on ABP_LevelObject_StaticRespawnPoint_C");
static_assert(sizeof(ABP_LevelObject_StaticRespawnPoint_C) == 0x0002C8, "Wrong size on ABP_LevelObject_StaticRespawnPoint_C");
static_assert(offsetof(ABP_LevelObject_StaticRespawnPoint_C, PalLimitVolumeBox) == 0x0002B0, "Member 'ABP_LevelObject_StaticRespawnPoint_C::PalLimitVolumeBox' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_StaticRespawnPoint_C, Mesh) == 0x0002B8, "Member 'ABP_LevelObject_StaticRespawnPoint_C::Mesh' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_StaticRespawnPoint_C, Root) == 0x0002C0, "Member 'ABP_LevelObject_StaticRespawnPoint_C::Root' has a wrong offset!");

}

