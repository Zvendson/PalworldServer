#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SplinesInEditor_structs.hpp"
#include "RiverSplineElement_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PrefabBase.BP_PrefabBase_C
// 0x0170 (0x0400 - 0x0290)
class ABP_PrefabBase_C final : public AActor
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            StaticMesh;                                        // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        ThicknessScale;                                    // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseJointMeshes;                                    // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A9[0x7];                                      // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  JointsToExclude;                                   // 0x02B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRandomStream                          RandomStream;                                      // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)
	int32                                         RandomSeed;                                        // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2CC[0x4];                                      // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSplinesInEditor>               Splines;                                           // 0x02D0(0x0010)(Edit, BlueprintVisible)
	bool                                          UseAdvancedSplines;                                // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E1[0x7];                                      // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         Debug;                                             // 0x02E8(0x0010)(Edit, BlueprintVisible)
	class USplineComponent*                       CurrentSpline;                                     // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          SplineNotExists;                                   // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_301[0x7];                                      // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSplinesInEditor                       DefaultSplineSetup;                                // 0x0308(0x0080)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FRiverSplineElement                    CurrentSplineProperties;                           // 0x0388(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          SplineExist;                                       // 0x03F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void GenerateSplineMesh(ECollisionEnabled Collision, bool CastShadow, class UMaterialInterface* Material, class USplineComponent* TargetSpline, double SplineStartOffset, const struct FVector& Offset, const struct FVector& Scale, double TangetScale, double Spacing, const struct FRotator& Rotation, class UStaticMesh* StaticMesh_0);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PrefabBase_C">();
	}
	static class ABP_PrefabBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PrefabBase_C>();
	}
};
static_assert(alignof(ABP_PrefabBase_C) == 0x000008, "Wrong alignment on ABP_PrefabBase_C");
static_assert(sizeof(ABP_PrefabBase_C) == 0x000400, "Wrong size on ABP_PrefabBase_C");
static_assert(offsetof(ABP_PrefabBase_C, DefaultSceneRoot) == 0x000290, "Member 'ABP_PrefabBase_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PrefabBase_C, StaticMesh) == 0x000298, "Member 'ABP_PrefabBase_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_PrefabBase_C, ThicknessScale) == 0x0002A0, "Member 'ABP_PrefabBase_C::ThicknessScale' has a wrong offset!");
static_assert(offsetof(ABP_PrefabBase_C, UseJointMeshes) == 0x0002A8, "Member 'ABP_PrefabBase_C::UseJointMeshes' has a wrong offset!");
static_assert(offsetof(ABP_PrefabBase_C, JointsToExclude) == 0x0002B0, "Member 'ABP_PrefabBase_C::JointsToExclude' has a wrong offset!");
static_assert(offsetof(ABP_PrefabBase_C, RandomStream) == 0x0002C0, "Member 'ABP_PrefabBase_C::RandomStream' has a wrong offset!");
static_assert(offsetof(ABP_PrefabBase_C, RandomSeed) == 0x0002C8, "Member 'ABP_PrefabBase_C::RandomSeed' has a wrong offset!");
static_assert(offsetof(ABP_PrefabBase_C, Splines) == 0x0002D0, "Member 'ABP_PrefabBase_C::Splines' has a wrong offset!");
static_assert(offsetof(ABP_PrefabBase_C, UseAdvancedSplines) == 0x0002E0, "Member 'ABP_PrefabBase_C::UseAdvancedSplines' has a wrong offset!");
static_assert(offsetof(ABP_PrefabBase_C, Debug) == 0x0002E8, "Member 'ABP_PrefabBase_C::Debug' has a wrong offset!");
static_assert(offsetof(ABP_PrefabBase_C, CurrentSpline) == 0x0002F8, "Member 'ABP_PrefabBase_C::CurrentSpline' has a wrong offset!");
static_assert(offsetof(ABP_PrefabBase_C, SplineNotExists) == 0x000300, "Member 'ABP_PrefabBase_C::SplineNotExists' has a wrong offset!");
static_assert(offsetof(ABP_PrefabBase_C, DefaultSplineSetup) == 0x000308, "Member 'ABP_PrefabBase_C::DefaultSplineSetup' has a wrong offset!");
static_assert(offsetof(ABP_PrefabBase_C, CurrentSplineProperties) == 0x000388, "Member 'ABP_PrefabBase_C::CurrentSplineProperties' has a wrong offset!");
static_assert(offsetof(ABP_PrefabBase_C, SplineExist) == 0x0003F8, "Member 'ABP_PrefabBase_C::SplineExist' has a wrong offset!");

}

