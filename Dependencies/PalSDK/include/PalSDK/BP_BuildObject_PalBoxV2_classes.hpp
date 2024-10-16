#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_BuildObject_PalBoxV2.BP_BuildObject_PalBoxV2_C
// 0x00A8 (0x06D0 - 0x0628)
class ABP_BuildObject_PalBoxV2_C final : public APalBuildObjectBaseCampPoint
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0628(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWorldPartitionStreamingSourceComponent* WorldPartitionStreamingSource_oilrig;              // 0x0630(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWorldPartitionStreamingSourceComponent* WorldPartitionStreamingSource_HugeProps;           // 0x0638(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWorldPartitionStreamingSourceComponent* WorldPartitionStreamingSource_SmallProps;          // 0x0640(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CannotOverlapArea;                                 // 0x0648(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   AreaRange1;                                        // 0x0650(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   AreaRange;                                         // 0x0658(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalNavigationInvokerComponent*         PalNavigationInvoker;                              // 0x0660(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWorldPartitionStreamingSourceComponent* WorldPartitionStreamingSource_FarMountain;         // 0x0668(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWorldPartitionStreamingSourceComponent* WorldPartitionStreamingSource_Foliage;             // 0x0670(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalLimitVolumeBoxComponent*            PalLimitVolumeBox;                                 // 0x0678(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   PalSphereLight;                                    // 0x0680(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildWorkableBounds;                               // 0x0688(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Space;                                             // 0x0690(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        WorkerSpawnPoint;                                  // 0x0698(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        FastTravelPoint;                                   // 0x06A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableCapsule_C*              BP_PalBoxInteractableCapsule;                      // 0x06A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWorldPartitionStreamingSourceComponent* WorldPartitionStreamingSource_MainGrid;            // 0x06B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CheckOverlapCollision;                             // 0x06B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   PCStaticMesh;                                      // 0x06C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x06C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_BuildObject_PalBoxV2(int32 EntryPoint);
	void OnAvailable_BlueprintImpl();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void UpdateVisibleAreaRange();

	class UStaticMeshComponent* GetBaseCampPointMeshComponent() const;
	struct FTransform GetFastTravelLocalTransform() const;
	struct FTransform GetWorkerSpawnLocalTransform() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuildObject_PalBoxV2_C">();
	}
	static class ABP_BuildObject_PalBoxV2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BuildObject_PalBoxV2_C>();
	}
};
static_assert(alignof(ABP_BuildObject_PalBoxV2_C) == 0x000008, "Wrong alignment on ABP_BuildObject_PalBoxV2_C");
static_assert(sizeof(ABP_BuildObject_PalBoxV2_C) == 0x0006D0, "Wrong size on ABP_BuildObject_PalBoxV2_C");
static_assert(offsetof(ABP_BuildObject_PalBoxV2_C, UberGraphFrame) == 0x000628, "Member 'ABP_BuildObject_PalBoxV2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_PalBoxV2_C, WorldPartitionStreamingSource_oilrig) == 0x000630, "Member 'ABP_BuildObject_PalBoxV2_C::WorldPartitionStreamingSource_oilrig' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_PalBoxV2_C, WorldPartitionStreamingSource_HugeProps) == 0x000638, "Member 'ABP_BuildObject_PalBoxV2_C::WorldPartitionStreamingSource_HugeProps' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_PalBoxV2_C, WorldPartitionStreamingSource_SmallProps) == 0x000640, "Member 'ABP_BuildObject_PalBoxV2_C::WorldPartitionStreamingSource_SmallProps' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_PalBoxV2_C, CannotOverlapArea) == 0x000648, "Member 'ABP_BuildObject_PalBoxV2_C::CannotOverlapArea' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_PalBoxV2_C, AreaRange1) == 0x000650, "Member 'ABP_BuildObject_PalBoxV2_C::AreaRange1' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_PalBoxV2_C, AreaRange) == 0x000658, "Member 'ABP_BuildObject_PalBoxV2_C::AreaRange' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_PalBoxV2_C, PalNavigationInvoker) == 0x000660, "Member 'ABP_BuildObject_PalBoxV2_C::PalNavigationInvoker' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_PalBoxV2_C, WorldPartitionStreamingSource_FarMountain) == 0x000668, "Member 'ABP_BuildObject_PalBoxV2_C::WorldPartitionStreamingSource_FarMountain' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_PalBoxV2_C, WorldPartitionStreamingSource_Foliage) == 0x000670, "Member 'ABP_BuildObject_PalBoxV2_C::WorldPartitionStreamingSource_Foliage' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_PalBoxV2_C, PalLimitVolumeBox) == 0x000678, "Member 'ABP_BuildObject_PalBoxV2_C::PalLimitVolumeBox' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_PalBoxV2_C, PalSphereLight) == 0x000680, "Member 'ABP_BuildObject_PalBoxV2_C::PalSphereLight' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_PalBoxV2_C, BuildWorkableBounds) == 0x000688, "Member 'ABP_BuildObject_PalBoxV2_C::BuildWorkableBounds' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_PalBoxV2_C, Space) == 0x000690, "Member 'ABP_BuildObject_PalBoxV2_C::Space' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_PalBoxV2_C, WorkerSpawnPoint) == 0x000698, "Member 'ABP_BuildObject_PalBoxV2_C::WorkerSpawnPoint' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_PalBoxV2_C, FastTravelPoint) == 0x0006A0, "Member 'ABP_BuildObject_PalBoxV2_C::FastTravelPoint' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_PalBoxV2_C, BP_PalBoxInteractableCapsule) == 0x0006A8, "Member 'ABP_BuildObject_PalBoxV2_C::BP_PalBoxInteractableCapsule' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_PalBoxV2_C, WorldPartitionStreamingSource_MainGrid) == 0x0006B0, "Member 'ABP_BuildObject_PalBoxV2_C::WorldPartitionStreamingSource_MainGrid' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_PalBoxV2_C, CheckOverlapCollision) == 0x0006B8, "Member 'ABP_BuildObject_PalBoxV2_C::CheckOverlapCollision' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_PalBoxV2_C, PCStaticMesh) == 0x0006C0, "Member 'ABP_BuildObject_PalBoxV2_C::PCStaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_PalBoxV2_C, DefaultSceneRoot) == 0x0006C8, "Member 'ABP_BuildObject_PalBoxV2_C::DefaultSceneRoot' has a wrong offset!");

}

