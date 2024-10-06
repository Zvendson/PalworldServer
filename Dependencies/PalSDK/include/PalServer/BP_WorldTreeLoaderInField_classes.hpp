#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_WorldTreeLoaderInField.BP_WorldTreeLoaderInField_C
// 0x0008 (0x02E0 - 0x02D8)
class ABP_WorldTreeLoaderInField_C final : public APalActorClassSpawnerOnlyFieldActiveInClient
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WorldTreeLoaderInField_C">();
	}
	static class ABP_WorldTreeLoaderInField_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_WorldTreeLoaderInField_C>();
	}
};
static_assert(alignof(ABP_WorldTreeLoaderInField_C) == 0x000008, "Wrong alignment on ABP_WorldTreeLoaderInField_C");
static_assert(sizeof(ABP_WorldTreeLoaderInField_C) == 0x0002E0, "Wrong size on ABP_WorldTreeLoaderInField_C");
static_assert(offsetof(ABP_WorldTreeLoaderInField_C, DefaultSceneRoot) == 0x0002D8, "Member 'ABP_WorldTreeLoaderInField_C::DefaultSceneRoot' has a wrong offset!");

}

