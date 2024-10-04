#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_DungeonFixedEntrance.BP_DungeonFixedEntrance_C
// 0x0028 (0x0348 - 0x0320)
class ABP_DungeonFixedEntrance_C : public APalDungeonFixedEntrance
{
public:
	class UArrowComponent*                        DeadItemDropPoint;                                 // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        IndicatorOrigin;                                   // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalInteractableSphereComponentNative*  BP_InteractableSphere;                             // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        WarpPoint;                                         // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void GetInteractWidget(class UPalUserWidget** CreatedWidget);

	struct FTransform GetDeadItemDropPoint() const;
	struct FTransform GetWarpPoint() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DungeonFixedEntrance_C">();
	}
	static class ABP_DungeonFixedEntrance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DungeonFixedEntrance_C>();
	}
};
static_assert(alignof(ABP_DungeonFixedEntrance_C) == 0x000008, "Wrong alignment on ABP_DungeonFixedEntrance_C");
static_assert(sizeof(ABP_DungeonFixedEntrance_C) == 0x000348, "Wrong size on ABP_DungeonFixedEntrance_C");
static_assert(offsetof(ABP_DungeonFixedEntrance_C, DeadItemDropPoint) == 0x000320, "Member 'ABP_DungeonFixedEntrance_C::DeadItemDropPoint' has a wrong offset!");
static_assert(offsetof(ABP_DungeonFixedEntrance_C, IndicatorOrigin) == 0x000328, "Member 'ABP_DungeonFixedEntrance_C::IndicatorOrigin' has a wrong offset!");
static_assert(offsetof(ABP_DungeonFixedEntrance_C, BP_InteractableSphere) == 0x000330, "Member 'ABP_DungeonFixedEntrance_C::BP_InteractableSphere' has a wrong offset!");
static_assert(offsetof(ABP_DungeonFixedEntrance_C, WarpPoint) == 0x000338, "Member 'ABP_DungeonFixedEntrance_C::WarpPoint' has a wrong offset!");
static_assert(offsetof(ABP_DungeonFixedEntrance_C, Scene) == 0x000340, "Member 'ABP_DungeonFixedEntrance_C::Scene' has a wrong offset!");

}

