#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalMapObjectSpawner_RedBerry.BP_PalMapObjectSpawner_RedBerry_C
// 0x0008 (0x02E8 - 0x02E0)
class ABP_PalMapObjectSpawner_RedBerry_C final : public APalMapObjectSpawnerSimple
{
public:
	class UStaticMeshComponent*                   Mesh;                                              // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalMapObjectSpawner_RedBerry_C">();
	}
	static class ABP_PalMapObjectSpawner_RedBerry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalMapObjectSpawner_RedBerry_C>();
	}
};
static_assert(alignof(ABP_PalMapObjectSpawner_RedBerry_C) == 0x000008, "Wrong alignment on ABP_PalMapObjectSpawner_RedBerry_C");
static_assert(sizeof(ABP_PalMapObjectSpawner_RedBerry_C) == 0x0002E8, "Wrong size on ABP_PalMapObjectSpawner_RedBerry_C");
static_assert(offsetof(ABP_PalMapObjectSpawner_RedBerry_C, Mesh) == 0x0002E0, "Member 'ABP_PalMapObjectSpawner_RedBerry_C::Mesh' has a wrong offset!");

}

