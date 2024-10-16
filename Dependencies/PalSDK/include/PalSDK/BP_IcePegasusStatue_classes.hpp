#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_IcePegasusStatue.BP_IcePegasusStatue_C
// 0x0010 (0x02A0 - 0x0290)
class ABP_IcePegasusStatue_C final : public AActor
{
public:
	class UStaticMeshComponent*                   SM_IcePegasusStatue;                               // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_IcePegasusStatue_C">();
	}
	static class ABP_IcePegasusStatue_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_IcePegasusStatue_C>();
	}
};
static_assert(alignof(ABP_IcePegasusStatue_C) == 0x000008, "Wrong alignment on ABP_IcePegasusStatue_C");
static_assert(sizeof(ABP_IcePegasusStatue_C) == 0x0002A0, "Wrong size on ABP_IcePegasusStatue_C");
static_assert(offsetof(ABP_IcePegasusStatue_C, SM_IcePegasusStatue) == 0x000290, "Member 'ABP_IcePegasusStatue_C::SM_IcePegasusStatue' has a wrong offset!");
static_assert(offsetof(ABP_IcePegasusStatue_C, DefaultSceneRoot) == 0x000298, "Member 'ABP_IcePegasusStatue_C::DefaultSceneRoot' has a wrong offset!");

}

