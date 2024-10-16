#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_BuildObject_StationDeforest2.BP_BuildObject_StationDeforest2_C
// 0x0068 (0x0690 - 0x0628)
class ABP_BuildObject_StationDeforest2_C final : public APalBuildObject
{
public:
	class UPalWorkFacingComponent*                PalWorkFacing_;                                    // 0x0628(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalWorkFacingComponent*                PalWorkFacing_1;                                   // 0x0630(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalWorkFacingComponent*                PalWorkFacing_2;                                   // 0x0638(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Loggingcamp_Tree;                               // 0x0640(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Loggingcamp_Fence;                              // 0x0648(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Loggingcamp_Acce;                               // 0x0650(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0658(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableBox_C*                  BP_InteractableBox;                                // 0x0660(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildWorkableBounds;                               // 0x0668(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CheckOverlapCollision;                             // 0x0670(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0678(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectItemSimpleProductParameterComponent* ItemSimpleProductParameter;                        // 0x0680(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0688(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuildObject_StationDeforest2_C">();
	}
	static class ABP_BuildObject_StationDeforest2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BuildObject_StationDeforest2_C>();
	}
};
static_assert(alignof(ABP_BuildObject_StationDeforest2_C) == 0x000008, "Wrong alignment on ABP_BuildObject_StationDeforest2_C");
static_assert(sizeof(ABP_BuildObject_StationDeforest2_C) == 0x000690, "Wrong size on ABP_BuildObject_StationDeforest2_C");
static_assert(offsetof(ABP_BuildObject_StationDeforest2_C, PalWorkFacing_) == 0x000628, "Member 'ABP_BuildObject_StationDeforest2_C::PalWorkFacing_' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_StationDeforest2_C, PalWorkFacing_1) == 0x000630, "Member 'ABP_BuildObject_StationDeforest2_C::PalWorkFacing_1' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_StationDeforest2_C, PalWorkFacing_2) == 0x000638, "Member 'ABP_BuildObject_StationDeforest2_C::PalWorkFacing_2' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_StationDeforest2_C, SM_Loggingcamp_Tree) == 0x000640, "Member 'ABP_BuildObject_StationDeforest2_C::SM_Loggingcamp_Tree' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_StationDeforest2_C, SM_Loggingcamp_Fence) == 0x000648, "Member 'ABP_BuildObject_StationDeforest2_C::SM_Loggingcamp_Fence' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_StationDeforest2_C, SM_Loggingcamp_Acce) == 0x000650, "Member 'ABP_BuildObject_StationDeforest2_C::SM_Loggingcamp_Acce' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_StationDeforest2_C, StaticMesh) == 0x000658, "Member 'ABP_BuildObject_StationDeforest2_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_StationDeforest2_C, BP_InteractableBox) == 0x000660, "Member 'ABP_BuildObject_StationDeforest2_C::BP_InteractableBox' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_StationDeforest2_C, BuildWorkableBounds) == 0x000668, "Member 'ABP_BuildObject_StationDeforest2_C::BuildWorkableBounds' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_StationDeforest2_C, CheckOverlapCollision) == 0x000670, "Member 'ABP_BuildObject_StationDeforest2_C::CheckOverlapCollision' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_StationDeforest2_C, Scene) == 0x000678, "Member 'ABP_BuildObject_StationDeforest2_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_StationDeforest2_C, ItemSimpleProductParameter) == 0x000680, "Member 'ABP_BuildObject_StationDeforest2_C::ItemSimpleProductParameter' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_StationDeforest2_C, Root) == 0x000688, "Member 'ABP_BuildObject_StationDeforest2_C::Root' has a wrong offset!");

}

