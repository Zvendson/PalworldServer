#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_pal_b00_tree_RainforestIvy_01_x2.BP_pal_b00_tree_RainforestIvy_01_x2_C
// 0x0018 (0x02A8 - 0x0290)
class ABP_pal_b00_tree_RainforestIvy_01_x2_C final : public AActor
{
public:
	class UStaticMeshComponent*                   SM_pal_b00_tree_RainforestIvy_02;                  // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_pal_b00_tree_RainforestIvy_01;                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_pal_b00_tree_RainforestIvy_01_x2_C">();
	}
	static class ABP_pal_b00_tree_RainforestIvy_01_x2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_pal_b00_tree_RainforestIvy_01_x2_C>();
	}
};
static_assert(alignof(ABP_pal_b00_tree_RainforestIvy_01_x2_C) == 0x000008, "Wrong alignment on ABP_pal_b00_tree_RainforestIvy_01_x2_C");
static_assert(sizeof(ABP_pal_b00_tree_RainforestIvy_01_x2_C) == 0x0002A8, "Wrong size on ABP_pal_b00_tree_RainforestIvy_01_x2_C");
static_assert(offsetof(ABP_pal_b00_tree_RainforestIvy_01_x2_C, SM_pal_b00_tree_RainforestIvy_02) == 0x000290, "Member 'ABP_pal_b00_tree_RainforestIvy_01_x2_C::SM_pal_b00_tree_RainforestIvy_02' has a wrong offset!");
static_assert(offsetof(ABP_pal_b00_tree_RainforestIvy_01_x2_C, SM_pal_b00_tree_RainforestIvy_01) == 0x000298, "Member 'ABP_pal_b00_tree_RainforestIvy_01_x2_C::SM_pal_b00_tree_RainforestIvy_01' has a wrong offset!");
static_assert(offsetof(ABP_pal_b00_tree_RainforestIvy_01_x2_C, DefaultSceneRoot) == 0x0002A0, "Member 'ABP_pal_b00_tree_RainforestIvy_01_x2_C::DefaultSceneRoot' has a wrong offset!");

}

