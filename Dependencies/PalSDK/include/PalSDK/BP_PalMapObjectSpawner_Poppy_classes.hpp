#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalMapObjectSpawner_Poppy.BP_PalMapObjectSpawner_Poppy_C
// 0x0018 (0x02F8 - 0x02E0)
class ABP_PalMapObjectSpawner_Poppy_C final : public APalMapObjectSpawnerSimple
{
public:
	class UStaticMeshComponent*                   StaticMesh3;                                       // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh1;                                       // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh2;                                       // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalMapObjectSpawner_Poppy_C">();
	}
	static class ABP_PalMapObjectSpawner_Poppy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalMapObjectSpawner_Poppy_C>();
	}
};
static_assert(alignof(ABP_PalMapObjectSpawner_Poppy_C) == 0x000008, "Wrong alignment on ABP_PalMapObjectSpawner_Poppy_C");
static_assert(sizeof(ABP_PalMapObjectSpawner_Poppy_C) == 0x0002F8, "Wrong size on ABP_PalMapObjectSpawner_Poppy_C");
static_assert(offsetof(ABP_PalMapObjectSpawner_Poppy_C, StaticMesh3) == 0x0002E0, "Member 'ABP_PalMapObjectSpawner_Poppy_C::StaticMesh3' has a wrong offset!");
static_assert(offsetof(ABP_PalMapObjectSpawner_Poppy_C, StaticMesh1) == 0x0002E8, "Member 'ABP_PalMapObjectSpawner_Poppy_C::StaticMesh1' has a wrong offset!");
static_assert(offsetof(ABP_PalMapObjectSpawner_Poppy_C, StaticMesh2) == 0x0002F0, "Member 'ABP_PalMapObjectSpawner_Poppy_C::StaticMesh2' has a wrong offset!");

}

