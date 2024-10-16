#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SimpleWater.BP_SimpleWater_C
// 0x00A8 (0x0338 - 0x0290)
class ABP_SimpleWater_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          SwimmingVolume;                                    // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent* HierarchicalInstancedStaticMesh;                   // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         TileCount;                                         // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AC[0x4];                                      // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        MeshScaleOffset;                                   // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            WaterPlaneMesh;                                    // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     WaterMaterial;                                     // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OceanMin;                                          // 0x02C8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OceanMax;                                          // 0x02E0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SwimVolumeScale;                                   // 0x02F8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SwimVolumeLocation;                                // 0x0310(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Depth;                                             // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bWorldOceanPlane;                                  // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ExecuteUbergraph_BP_SimpleWater(int32 EntryPoint);
	void GenerateOceanPlane();
	void GenerateOpenSeePlane();
	void GenerateWaterPlane();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void UpdateSwimmingVolume(int32 StartIndex, int32 EndIndex, double MeshScale);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SimpleWater_C">();
	}
	static class ABP_SimpleWater_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SimpleWater_C>();
	}
};
static_assert(alignof(ABP_SimpleWater_C) == 0x000008, "Wrong alignment on ABP_SimpleWater_C");
static_assert(sizeof(ABP_SimpleWater_C) == 0x000338, "Wrong size on ABP_SimpleWater_C");
static_assert(offsetof(ABP_SimpleWater_C, UberGraphFrame) == 0x000290, "Member 'ABP_SimpleWater_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SimpleWater_C, SwimmingVolume) == 0x000298, "Member 'ABP_SimpleWater_C::SwimmingVolume' has a wrong offset!");
static_assert(offsetof(ABP_SimpleWater_C, HierarchicalInstancedStaticMesh) == 0x0002A0, "Member 'ABP_SimpleWater_C::HierarchicalInstancedStaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_SimpleWater_C, TileCount) == 0x0002A8, "Member 'ABP_SimpleWater_C::TileCount' has a wrong offset!");
static_assert(offsetof(ABP_SimpleWater_C, MeshScaleOffset) == 0x0002B0, "Member 'ABP_SimpleWater_C::MeshScaleOffset' has a wrong offset!");
static_assert(offsetof(ABP_SimpleWater_C, WaterPlaneMesh) == 0x0002B8, "Member 'ABP_SimpleWater_C::WaterPlaneMesh' has a wrong offset!");
static_assert(offsetof(ABP_SimpleWater_C, WaterMaterial) == 0x0002C0, "Member 'ABP_SimpleWater_C::WaterMaterial' has a wrong offset!");
static_assert(offsetof(ABP_SimpleWater_C, OceanMin) == 0x0002C8, "Member 'ABP_SimpleWater_C::OceanMin' has a wrong offset!");
static_assert(offsetof(ABP_SimpleWater_C, OceanMax) == 0x0002E0, "Member 'ABP_SimpleWater_C::OceanMax' has a wrong offset!");
static_assert(offsetof(ABP_SimpleWater_C, SwimVolumeScale) == 0x0002F8, "Member 'ABP_SimpleWater_C::SwimVolumeScale' has a wrong offset!");
static_assert(offsetof(ABP_SimpleWater_C, SwimVolumeLocation) == 0x000310, "Member 'ABP_SimpleWater_C::SwimVolumeLocation' has a wrong offset!");
static_assert(offsetof(ABP_SimpleWater_C, Depth) == 0x000328, "Member 'ABP_SimpleWater_C::Depth' has a wrong offset!");
static_assert(offsetof(ABP_SimpleWater_C, bWorldOceanPlane) == 0x000330, "Member 'ABP_SimpleWater_C::bWorldOceanPlane' has a wrong offset!");

}

