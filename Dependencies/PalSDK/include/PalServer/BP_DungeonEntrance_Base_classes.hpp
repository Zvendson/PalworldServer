#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_DungeonEntrance_Base.BP_DungeonEntrance_Base_C
// 0x0020 (0x02C0 - 0x02A0)
class ABP_DungeonEntrance_Base_C : public APalDungeonEntrance
{
public:
	class UStaticMeshComponent*                   SM_Pal_DungeonPortalMarker;                        // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableBox_C*                  BP_InteractableBox;                                // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        WarpPoint;                                         // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void GetInteractWidget(class UPalUserWidget** CreatedWidget);

	struct FTransform GetWarpPoint() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DungeonEntrance_Base_C">();
	}
	static class ABP_DungeonEntrance_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DungeonEntrance_Base_C>();
	}
};
static_assert(alignof(ABP_DungeonEntrance_Base_C) == 0x000008, "Wrong alignment on ABP_DungeonEntrance_Base_C");
static_assert(sizeof(ABP_DungeonEntrance_Base_C) == 0x0002C0, "Wrong size on ABP_DungeonEntrance_Base_C");
static_assert(offsetof(ABP_DungeonEntrance_Base_C, SM_Pal_DungeonPortalMarker) == 0x0002A0, "Member 'ABP_DungeonEntrance_Base_C::SM_Pal_DungeonPortalMarker' has a wrong offset!");
static_assert(offsetof(ABP_DungeonEntrance_Base_C, BP_InteractableBox) == 0x0002A8, "Member 'ABP_DungeonEntrance_Base_C::BP_InteractableBox' has a wrong offset!");
static_assert(offsetof(ABP_DungeonEntrance_Base_C, WarpPoint) == 0x0002B0, "Member 'ABP_DungeonEntrance_Base_C::WarpPoint' has a wrong offset!");
static_assert(offsetof(ABP_DungeonEntrance_Base_C, DefaultSceneRoot) == 0x0002B8, "Member 'ABP_DungeonEntrance_Base_C::DefaultSceneRoot' has a wrong offset!");

}

