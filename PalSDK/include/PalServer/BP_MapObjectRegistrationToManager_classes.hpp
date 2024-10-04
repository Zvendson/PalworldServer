#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_MapObjectRegistrationToManager.BP_MapObjectRegistrationToManager_C
// 0x0008 (0x02A0 - 0x0298)
class ABP_MapObjectRegistrationToManager_C final : public APalTestMapObjectRegistrationToManager
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapObjectRegistrationToManager_C">();
	}
	static class ABP_MapObjectRegistrationToManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MapObjectRegistrationToManager_C>();
	}
};
static_assert(alignof(ABP_MapObjectRegistrationToManager_C) == 0x000008, "Wrong alignment on ABP_MapObjectRegistrationToManager_C");
static_assert(sizeof(ABP_MapObjectRegistrationToManager_C) == 0x0002A0, "Wrong size on ABP_MapObjectRegistrationToManager_C");
static_assert(offsetof(ABP_MapObjectRegistrationToManager_C, DefaultSceneRoot) == 0x000298, "Member 'ABP_MapObjectRegistrationToManager_C::DefaultSceneRoot' has a wrong offset!");

}

