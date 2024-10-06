#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_InvaderStartPoint.BP_InvaderStartPoint_C
// 0x0010 (0x02B8 - 0x02A8)
class ABP_InvaderStartPoint_C final : public APalInvaderStartPoint
{
public:
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_InvaderStartPoint_C">();
	}
	static class ABP_InvaderStartPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_InvaderStartPoint_C>();
	}
};
static_assert(alignof(ABP_InvaderStartPoint_C) == 0x000008, "Wrong alignment on ABP_InvaderStartPoint_C");
static_assert(sizeof(ABP_InvaderStartPoint_C) == 0x0002B8, "Wrong size on ABP_InvaderStartPoint_C");
static_assert(offsetof(ABP_InvaderStartPoint_C, StaticMesh) == 0x0002A8, "Member 'ABP_InvaderStartPoint_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_InvaderStartPoint_C, DefaultSceneRoot) == 0x0002B0, "Member 'ABP_InvaderStartPoint_C::DefaultSceneRoot' has a wrong offset!");

}

