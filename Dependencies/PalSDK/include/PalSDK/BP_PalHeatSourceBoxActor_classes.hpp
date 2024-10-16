#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalHeatSourceBoxActor.BP_PalHeatSourceBoxActor_C
// 0x0010 (0x02A0 - 0x0290)
class ABP_PalHeatSourceBoxActor_C final : public AActor
{
public:
	class UBP_HeatSourceBoxComponent_C*           BP_HeatSourceBoxComponent;                         // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalHeatSourceBoxActor_C">();
	}
	static class ABP_PalHeatSourceBoxActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalHeatSourceBoxActor_C>();
	}
};
static_assert(alignof(ABP_PalHeatSourceBoxActor_C) == 0x000008, "Wrong alignment on ABP_PalHeatSourceBoxActor_C");
static_assert(sizeof(ABP_PalHeatSourceBoxActor_C) == 0x0002A0, "Wrong size on ABP_PalHeatSourceBoxActor_C");
static_assert(offsetof(ABP_PalHeatSourceBoxActor_C, BP_HeatSourceBoxComponent) == 0x000290, "Member 'ABP_PalHeatSourceBoxActor_C::BP_HeatSourceBoxComponent' has a wrong offset!");
static_assert(offsetof(ABP_PalHeatSourceBoxActor_C, DefaultSceneRoot) == 0x000298, "Member 'ABP_PalHeatSourceBoxActor_C::DefaultSceneRoot' has a wrong offset!");

}

