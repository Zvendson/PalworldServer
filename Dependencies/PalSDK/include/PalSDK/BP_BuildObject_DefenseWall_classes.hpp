#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_BuildObject_DefenseWall.BP_BuildObject_DefenseWall_C
// 0x0020 (0x0648 - 0x0628)
class ABP_BuildObject_DefenseWall_C final : public APalBuildObject
{
public:
	class UBoxComponent*                          BuildWorkableBounds;                               // 0x0628(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Castle_wall;                                       // 0x0630(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0638(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CheckOverlapCollision;                             // 0x0640(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuildObject_DefenseWall_C">();
	}
	static class ABP_BuildObject_DefenseWall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BuildObject_DefenseWall_C>();
	}
};
static_assert(alignof(ABP_BuildObject_DefenseWall_C) == 0x000008, "Wrong alignment on ABP_BuildObject_DefenseWall_C");
static_assert(sizeof(ABP_BuildObject_DefenseWall_C) == 0x000648, "Wrong size on ABP_BuildObject_DefenseWall_C");
static_assert(offsetof(ABP_BuildObject_DefenseWall_C, BuildWorkableBounds) == 0x000628, "Member 'ABP_BuildObject_DefenseWall_C::BuildWorkableBounds' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_DefenseWall_C, Castle_wall) == 0x000630, "Member 'ABP_BuildObject_DefenseWall_C::Castle_wall' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_DefenseWall_C, Root) == 0x000638, "Member 'ABP_BuildObject_DefenseWall_C::Root' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_DefenseWall_C, CheckOverlapCollision) == 0x000640, "Member 'ABP_BuildObject_DefenseWall_C::CheckOverlapCollision' has a wrong offset!");

}

