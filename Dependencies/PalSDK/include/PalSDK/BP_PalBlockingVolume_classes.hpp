#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalBlockingVolume.BP_PalBlockingVolume_C
// 0x0010 (0x02A0 - 0x0290)
class ABP_PalBlockingVolume_C final : public AActor
{
public:
	class UStaticMeshComponent*                   Cube;                                              // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalBlockingVolume_C">();
	}
	static class ABP_PalBlockingVolume_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalBlockingVolume_C>();
	}
};
static_assert(alignof(ABP_PalBlockingVolume_C) == 0x000008, "Wrong alignment on ABP_PalBlockingVolume_C");
static_assert(sizeof(ABP_PalBlockingVolume_C) == 0x0002A0, "Wrong size on ABP_PalBlockingVolume_C");
static_assert(offsetof(ABP_PalBlockingVolume_C, Cube) == 0x000290, "Member 'ABP_PalBlockingVolume_C::Cube' has a wrong offset!");
static_assert(offsetof(ABP_PalBlockingVolume_C, DefaultSceneRoot) == 0x000298, "Member 'ABP_PalBlockingVolume_C::DefaultSceneRoot' has a wrong offset!");

}

