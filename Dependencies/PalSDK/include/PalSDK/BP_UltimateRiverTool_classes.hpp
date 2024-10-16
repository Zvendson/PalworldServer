#pragma once

#include "Basic.hpp"

#include "SplineAttachment_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "SplinesInEditor_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "RiverSplineElement_structs.hpp"
#include "SplineObject_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_UltimateRiverTool.BP_UltimateRiverTool_C
// 0x03D0 (0x0660 - 0x0290)
class ABP_UltimateRiverTool_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USplineComponent*                       MainSpline;                                        // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          UpdateBlueprint;                                   // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A9[0x7];                                      // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 BasePrefabBlueprint;                               // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRiverSplineElement>            SplineMeshes;                                      // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSplineAttachment>              Objects;                                           // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSplinesInEditor>               Splines;                                           // 0x02D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          UseSplineMeshes;                                   // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseEndFixedObjects;                                // 0x02E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseStartFixedObjects;                              // 0x02EA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2EB[0x5];                                      // 0x02EB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSplineObject>                  SplineObjects;                                     // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 DebugText;                                         // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          CurrentObjectIsSpline;                             // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_311[0x7];                                      // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CurrentStartPos;                                   // 0x0318(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CurrentEndPos;                                     // 0x0330(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CalcSpacing;                                       // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UpVector;                                          // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsStartFixedObject;                                // 0x0351(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEndFixedObject;                                  // 0x0352(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_353[0x5];                                      // 0x0353(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSplineAttachment>              Objects_StartFixed;                                // 0x0358(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSplineAttachment>              Objects_EndFixed;                                  // 0x0368(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          UseObjectLoops;                                    // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_379[0x7];                                      // 0x0379(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CalcTangentScale;                                  // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Int;                                               // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsScaleable;                                       // 0x038C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38D[0x3];                                      // 0x038D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USplineComponent*                       CurrentSpline;                                     // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          SplineObjectExists;                                // 0x0398(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseSplineObjects;                                  // 0x0399(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39A[0x6];                                      // 0x039A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        PointLocations;                                    // 0x03A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                        PointTangets;                                      // 0x03B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                        PointScales;                                       // 0x03C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<double>                                PointRolls;                                        // 0x03D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FRotator>                       PointRotations;                                    // 0x03E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FRotator>                       Debug;                                             // 0x03F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	ECollisionEnabled                             Collision;                                         // 0x0400(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CastShadow;                                        // 0x0401(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_402[0x6];                                      // 0x0402(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        GlobalScale;                                       // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SimulateFlowPhysics;                               // 0x0410(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnabledForSwimming;                                // 0x0411(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_412[0x6];                                      // 0x0412(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Physics_FlowSpeed;                                 // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Physics_CenterMassOffset;                          // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RiverWidth;                                        // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RiverSpline_TangetScale;                           // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RiverMeshSmoothness;                               // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     RiverMaterial;                                     // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            RiverMesh;                                         // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MaterialOverrideInstance;                          // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         SimpleTiling_Scale_Y;                              // 0x0458(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45C[0x4];                                      // 0x045C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Tiling_Scale_X;                                    // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SimpleTiling_Y;                                    // 0x0468(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_469[0x7];                                      // 0x0469(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Tiling_Scale_Y;                                    // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<double>                                SplineLenghtsDebug;                                // 0x0478(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        MASTER_UV_WarpIntensity;                           // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MASTER_UV_WarpFalloff;                             // 0x0490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MASTER_UV_WarpRadius;                              // 0x0498(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MASTER_WaterReflection;                            // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LINEAR_POWER;                                      // 0x04A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LINEAR_Foam2Intensity;                             // 0x04B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LINEAR_FoamIntensity;                              // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LINEAR_FlowSpeed;                                  // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LINEAR_UV_WarpIntensity;                           // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LINEAR_Obstacles_UV_WarpIntensity;                 // 0x04D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LINEAR_ObstaclesFoamIntensity;                     // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LINEAR_Obstacles_FlowSpeed;                        // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LINEAR_WaterDistortion;                            // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SLOPES_UV_WarpIntensity;                           // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SLOPES_WaterDistortion;                            // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FoamIntensity_Slopes;                              // 0x0500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FoamIntensity_Slopes_Power;                        // 0x0508(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FoamIntensity_Slopes_Small;                        // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FoamIntensity_Slopes_Large;                        // 0x0518(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SLOPES_UV_FlowWarp;                                // 0x0520(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ObstacleAffectDistance;                            // 0x0528(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Metallic;                                          // 0x0530(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Specular;                                          // 0x0538(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Roughness;                                         // 0x0540(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Obstacle_Side_Intensity;                           // 0x0548(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Obstacle_Side_Falloff;                             // 0x0550(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Obstacle_Front_Intensity;                          // 0x0558(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Obstacle_Front_Falloff;                            // 0x0560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Obstacle_Back_Intensity;                           // 0x0568(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Obstacle_Back_Falloff;                             // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SlopeStartAngle;                                   // 0x0578(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SlopeEndAngle;                                     // 0x0580(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SlopeAngleFalloff;                                 // 0x0588(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Emissive;                                          // 0x0590(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Opacity;                                           // 0x0598(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Displacement_Intensity;                            // 0x05A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Displacement_FrontScale;                           // 0x05A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Displacement_BackScale;                            // 0x05B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Displacement_BackPower;                            // 0x05B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Displacement_Noize_Obstacles_Intensity;            // 0x05C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Displacement_Noize_Linear_Intensity;               // 0x05C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           WaterColor_Linear;                                 // 0x05D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           WaterColor_Slopes;                                 // 0x05E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        WaterDiffusivity_Slopes;                           // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DistanceField_ZOffset;                             // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ObstacleFront_BubblesPower;                        // 0x0600(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ObstacleFront_BubblesIntensity;                    // 0x0608(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ObstacleFront_LandscapeDFOffset;                   // 0x0610(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USplineMeshComponent*>           SplineOverlapVolumes;                              // 0x0618(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	double                                        Obstacles_FoamIntensityGlobal;                     // 0x0628(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowVolumes;                                       // 0x0630(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_631[0x7];                                      // 0x0631(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DepthVolumesScaleZ;                                // 0x0638(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DepthVolumesOffsetZ;                               // 0x0640(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Con;                                               // 0x0648(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_649[0x3];                                      // 0x0649(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TranslucentSortPriority;                           // 0x064C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PlayInFX;                                          // 0x0650(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_651[0x7];                                      // 0x0651(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        Emitter_In;                                        // 0x0658(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_UltimateRiverTool(int32 EntryPoint);
	void GenerateSplineMesh(ECollisionEnabled Collision_0, bool CastShadow_0, class UMaterialInterface* Material, class USplineComponent* TargetSpline, double SplineStartOffset, const struct FVector& Offset, const struct FVector& Scale, double TangetScale, double Spacing, const struct FRotator& Rotation, class UStaticMesh* StaticMesh, class USplineComponent* PathDeform_0, double PathDeformDistance, bool IsTriggerVolume, int32 TranslucentSortPriority_0);
	void GenerateSplineMesh_Cycle(ECollisionEnabled Collision_0, bool CastShadow_0, class UMaterialInterface* Material, class USplineComponent* TargetSpline, double SplineStartOffset, const struct FVector& Offset, const struct FVector& Scale, double TangetScale, double Spacing, const struct FRotator& Rotation, class UStaticMesh* StaticMesh);
	void GenerateSplineMesh_TriggerVolume(ECollisionEnabled Collision_0, bool CastShadow_0, class UMaterialInterface* Material, class USplineComponent* TargetSpline, double SplineStartOffset, const struct FVector& Offset, const struct FVector& Scale, double TangetScale, double Spacing, const struct FRotator& Rotation, class UStaticMesh* StaticMesh, class USplineComponent* PathDeform, double PathDeformDistance, bool IsTriggerVolume);
	void PathDeform(class USplineComponent* Spline, const struct FVector& CoorinatesIn, double Distance, struct FVector* _CoordinatesOut);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetupCollision(class USplineMeshComponent* SplineMesh);
	void UserConstructionScript();
	void WaterBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void WaterEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UltimateRiverTool_C">();
	}
	static class ABP_UltimateRiverTool_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_UltimateRiverTool_C>();
	}
};
static_assert(alignof(ABP_UltimateRiverTool_C) == 0x000008, "Wrong alignment on ABP_UltimateRiverTool_C");
static_assert(sizeof(ABP_UltimateRiverTool_C) == 0x000660, "Wrong size on ABP_UltimateRiverTool_C");
static_assert(offsetof(ABP_UltimateRiverTool_C, UberGraphFrame) == 0x000290, "Member 'ABP_UltimateRiverTool_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, MainSpline) == 0x000298, "Member 'ABP_UltimateRiverTool_C::MainSpline' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, Scene) == 0x0002A0, "Member 'ABP_UltimateRiverTool_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, UpdateBlueprint) == 0x0002A8, "Member 'ABP_UltimateRiverTool_C::UpdateBlueprint' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, BasePrefabBlueprint) == 0x0002B0, "Member 'ABP_UltimateRiverTool_C::BasePrefabBlueprint' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, SplineMeshes) == 0x0002B8, "Member 'ABP_UltimateRiverTool_C::SplineMeshes' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, Objects) == 0x0002C8, "Member 'ABP_UltimateRiverTool_C::Objects' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, Splines) == 0x0002D8, "Member 'ABP_UltimateRiverTool_C::Splines' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, UseSplineMeshes) == 0x0002E8, "Member 'ABP_UltimateRiverTool_C::UseSplineMeshes' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, UseEndFixedObjects) == 0x0002E9, "Member 'ABP_UltimateRiverTool_C::UseEndFixedObjects' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, UseStartFixedObjects) == 0x0002EA, "Member 'ABP_UltimateRiverTool_C::UseStartFixedObjects' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, SplineObjects) == 0x0002F0, "Member 'ABP_UltimateRiverTool_C::SplineObjects' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, DebugText) == 0x000300, "Member 'ABP_UltimateRiverTool_C::DebugText' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, CurrentObjectIsSpline) == 0x000310, "Member 'ABP_UltimateRiverTool_C::CurrentObjectIsSpline' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, CurrentStartPos) == 0x000318, "Member 'ABP_UltimateRiverTool_C::CurrentStartPos' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, CurrentEndPos) == 0x000330, "Member 'ABP_UltimateRiverTool_C::CurrentEndPos' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, CalcSpacing) == 0x000348, "Member 'ABP_UltimateRiverTool_C::CalcSpacing' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, UpVector) == 0x000350, "Member 'ABP_UltimateRiverTool_C::UpVector' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, IsStartFixedObject) == 0x000351, "Member 'ABP_UltimateRiverTool_C::IsStartFixedObject' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, IsEndFixedObject) == 0x000352, "Member 'ABP_UltimateRiverTool_C::IsEndFixedObject' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, Objects_StartFixed) == 0x000358, "Member 'ABP_UltimateRiverTool_C::Objects_StartFixed' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, Objects_EndFixed) == 0x000368, "Member 'ABP_UltimateRiverTool_C::Objects_EndFixed' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, UseObjectLoops) == 0x000378, "Member 'ABP_UltimateRiverTool_C::UseObjectLoops' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, CalcTangentScale) == 0x000380, "Member 'ABP_UltimateRiverTool_C::CalcTangentScale' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, Int) == 0x000388, "Member 'ABP_UltimateRiverTool_C::Int' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, IsScaleable) == 0x00038C, "Member 'ABP_UltimateRiverTool_C::IsScaleable' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, CurrentSpline) == 0x000390, "Member 'ABP_UltimateRiverTool_C::CurrentSpline' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, SplineObjectExists) == 0x000398, "Member 'ABP_UltimateRiverTool_C::SplineObjectExists' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, UseSplineObjects) == 0x000399, "Member 'ABP_UltimateRiverTool_C::UseSplineObjects' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, PointLocations) == 0x0003A0, "Member 'ABP_UltimateRiverTool_C::PointLocations' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, PointTangets) == 0x0003B0, "Member 'ABP_UltimateRiverTool_C::PointTangets' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, PointScales) == 0x0003C0, "Member 'ABP_UltimateRiverTool_C::PointScales' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, PointRolls) == 0x0003D0, "Member 'ABP_UltimateRiverTool_C::PointRolls' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, PointRotations) == 0x0003E0, "Member 'ABP_UltimateRiverTool_C::PointRotations' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, Debug) == 0x0003F0, "Member 'ABP_UltimateRiverTool_C::Debug' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, Collision) == 0x000400, "Member 'ABP_UltimateRiverTool_C::Collision' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, CastShadow) == 0x000401, "Member 'ABP_UltimateRiverTool_C::CastShadow' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, GlobalScale) == 0x000408, "Member 'ABP_UltimateRiverTool_C::GlobalScale' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, SimulateFlowPhysics) == 0x000410, "Member 'ABP_UltimateRiverTool_C::SimulateFlowPhysics' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, EnabledForSwimming) == 0x000411, "Member 'ABP_UltimateRiverTool_C::EnabledForSwimming' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, Physics_FlowSpeed) == 0x000418, "Member 'ABP_UltimateRiverTool_C::Physics_FlowSpeed' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, Physics_CenterMassOffset) == 0x000420, "Member 'ABP_UltimateRiverTool_C::Physics_CenterMassOffset' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, RiverWidth) == 0x000428, "Member 'ABP_UltimateRiverTool_C::RiverWidth' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, RiverSpline_TangetScale) == 0x000430, "Member 'ABP_UltimateRiverTool_C::RiverSpline_TangetScale' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, RiverMeshSmoothness) == 0x000438, "Member 'ABP_UltimateRiverTool_C::RiverMeshSmoothness' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, RiverMaterial) == 0x000440, "Member 'ABP_UltimateRiverTool_C::RiverMaterial' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, RiverMesh) == 0x000448, "Member 'ABP_UltimateRiverTool_C::RiverMesh' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, MaterialOverrideInstance) == 0x000450, "Member 'ABP_UltimateRiverTool_C::MaterialOverrideInstance' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, SimpleTiling_Scale_Y) == 0x000458, "Member 'ABP_UltimateRiverTool_C::SimpleTiling_Scale_Y' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, Tiling_Scale_X) == 0x000460, "Member 'ABP_UltimateRiverTool_C::Tiling_Scale_X' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, SimpleTiling_Y) == 0x000468, "Member 'ABP_UltimateRiverTool_C::SimpleTiling_Y' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, Tiling_Scale_Y) == 0x000470, "Member 'ABP_UltimateRiverTool_C::Tiling_Scale_Y' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, SplineLenghtsDebug) == 0x000478, "Member 'ABP_UltimateRiverTool_C::SplineLenghtsDebug' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, MASTER_UV_WarpIntensity) == 0x000488, "Member 'ABP_UltimateRiverTool_C::MASTER_UV_WarpIntensity' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, MASTER_UV_WarpFalloff) == 0x000490, "Member 'ABP_UltimateRiverTool_C::MASTER_UV_WarpFalloff' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, MASTER_UV_WarpRadius) == 0x000498, "Member 'ABP_UltimateRiverTool_C::MASTER_UV_WarpRadius' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, MASTER_WaterReflection) == 0x0004A0, "Member 'ABP_UltimateRiverTool_C::MASTER_WaterReflection' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, LINEAR_POWER) == 0x0004A8, "Member 'ABP_UltimateRiverTool_C::LINEAR_POWER' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, LINEAR_Foam2Intensity) == 0x0004B0, "Member 'ABP_UltimateRiverTool_C::LINEAR_Foam2Intensity' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, LINEAR_FoamIntensity) == 0x0004B8, "Member 'ABP_UltimateRiverTool_C::LINEAR_FoamIntensity' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, LINEAR_FlowSpeed) == 0x0004C0, "Member 'ABP_UltimateRiverTool_C::LINEAR_FlowSpeed' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, LINEAR_UV_WarpIntensity) == 0x0004C8, "Member 'ABP_UltimateRiverTool_C::LINEAR_UV_WarpIntensity' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, LINEAR_Obstacles_UV_WarpIntensity) == 0x0004D0, "Member 'ABP_UltimateRiverTool_C::LINEAR_Obstacles_UV_WarpIntensity' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, LINEAR_ObstaclesFoamIntensity) == 0x0004D8, "Member 'ABP_UltimateRiverTool_C::LINEAR_ObstaclesFoamIntensity' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, LINEAR_Obstacles_FlowSpeed) == 0x0004E0, "Member 'ABP_UltimateRiverTool_C::LINEAR_Obstacles_FlowSpeed' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, LINEAR_WaterDistortion) == 0x0004E8, "Member 'ABP_UltimateRiverTool_C::LINEAR_WaterDistortion' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, SLOPES_UV_WarpIntensity) == 0x0004F0, "Member 'ABP_UltimateRiverTool_C::SLOPES_UV_WarpIntensity' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, SLOPES_WaterDistortion) == 0x0004F8, "Member 'ABP_UltimateRiverTool_C::SLOPES_WaterDistortion' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, FoamIntensity_Slopes) == 0x000500, "Member 'ABP_UltimateRiverTool_C::FoamIntensity_Slopes' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, FoamIntensity_Slopes_Power) == 0x000508, "Member 'ABP_UltimateRiverTool_C::FoamIntensity_Slopes_Power' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, FoamIntensity_Slopes_Small) == 0x000510, "Member 'ABP_UltimateRiverTool_C::FoamIntensity_Slopes_Small' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, FoamIntensity_Slopes_Large) == 0x000518, "Member 'ABP_UltimateRiverTool_C::FoamIntensity_Slopes_Large' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, SLOPES_UV_FlowWarp) == 0x000520, "Member 'ABP_UltimateRiverTool_C::SLOPES_UV_FlowWarp' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, ObstacleAffectDistance) == 0x000528, "Member 'ABP_UltimateRiverTool_C::ObstacleAffectDistance' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, Metallic) == 0x000530, "Member 'ABP_UltimateRiverTool_C::Metallic' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, Specular) == 0x000538, "Member 'ABP_UltimateRiverTool_C::Specular' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, Roughness) == 0x000540, "Member 'ABP_UltimateRiverTool_C::Roughness' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, Obstacle_Side_Intensity) == 0x000548, "Member 'ABP_UltimateRiverTool_C::Obstacle_Side_Intensity' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, Obstacle_Side_Falloff) == 0x000550, "Member 'ABP_UltimateRiverTool_C::Obstacle_Side_Falloff' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, Obstacle_Front_Intensity) == 0x000558, "Member 'ABP_UltimateRiverTool_C::Obstacle_Front_Intensity' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, Obstacle_Front_Falloff) == 0x000560, "Member 'ABP_UltimateRiverTool_C::Obstacle_Front_Falloff' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, Obstacle_Back_Intensity) == 0x000568, "Member 'ABP_UltimateRiverTool_C::Obstacle_Back_Intensity' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, Obstacle_Back_Falloff) == 0x000570, "Member 'ABP_UltimateRiverTool_C::Obstacle_Back_Falloff' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, SlopeStartAngle) == 0x000578, "Member 'ABP_UltimateRiverTool_C::SlopeStartAngle' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, SlopeEndAngle) == 0x000580, "Member 'ABP_UltimateRiverTool_C::SlopeEndAngle' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, SlopeAngleFalloff) == 0x000588, "Member 'ABP_UltimateRiverTool_C::SlopeAngleFalloff' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, Emissive) == 0x000590, "Member 'ABP_UltimateRiverTool_C::Emissive' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, Opacity) == 0x000598, "Member 'ABP_UltimateRiverTool_C::Opacity' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, Displacement_Intensity) == 0x0005A0, "Member 'ABP_UltimateRiverTool_C::Displacement_Intensity' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, Displacement_FrontScale) == 0x0005A8, "Member 'ABP_UltimateRiverTool_C::Displacement_FrontScale' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, Displacement_BackScale) == 0x0005B0, "Member 'ABP_UltimateRiverTool_C::Displacement_BackScale' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, Displacement_BackPower) == 0x0005B8, "Member 'ABP_UltimateRiverTool_C::Displacement_BackPower' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, Displacement_Noize_Obstacles_Intensity) == 0x0005C0, "Member 'ABP_UltimateRiverTool_C::Displacement_Noize_Obstacles_Intensity' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, Displacement_Noize_Linear_Intensity) == 0x0005C8, "Member 'ABP_UltimateRiverTool_C::Displacement_Noize_Linear_Intensity' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, WaterColor_Linear) == 0x0005D0, "Member 'ABP_UltimateRiverTool_C::WaterColor_Linear' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, WaterColor_Slopes) == 0x0005E0, "Member 'ABP_UltimateRiverTool_C::WaterColor_Slopes' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, WaterDiffusivity_Slopes) == 0x0005F0, "Member 'ABP_UltimateRiverTool_C::WaterDiffusivity_Slopes' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, DistanceField_ZOffset) == 0x0005F8, "Member 'ABP_UltimateRiverTool_C::DistanceField_ZOffset' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, ObstacleFront_BubblesPower) == 0x000600, "Member 'ABP_UltimateRiverTool_C::ObstacleFront_BubblesPower' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, ObstacleFront_BubblesIntensity) == 0x000608, "Member 'ABP_UltimateRiverTool_C::ObstacleFront_BubblesIntensity' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, ObstacleFront_LandscapeDFOffset) == 0x000610, "Member 'ABP_UltimateRiverTool_C::ObstacleFront_LandscapeDFOffset' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, SplineOverlapVolumes) == 0x000618, "Member 'ABP_UltimateRiverTool_C::SplineOverlapVolumes' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, Obstacles_FoamIntensityGlobal) == 0x000628, "Member 'ABP_UltimateRiverTool_C::Obstacles_FoamIntensityGlobal' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, ShowVolumes) == 0x000630, "Member 'ABP_UltimateRiverTool_C::ShowVolumes' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, DepthVolumesScaleZ) == 0x000638, "Member 'ABP_UltimateRiverTool_C::DepthVolumesScaleZ' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, DepthVolumesOffsetZ) == 0x000640, "Member 'ABP_UltimateRiverTool_C::DepthVolumesOffsetZ' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, Con) == 0x000648, "Member 'ABP_UltimateRiverTool_C::Con' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, TranslucentSortPriority) == 0x00064C, "Member 'ABP_UltimateRiverTool_C::TranslucentSortPriority' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, PlayInFX) == 0x000650, "Member 'ABP_UltimateRiverTool_C::PlayInFX' has a wrong offset!");
static_assert(offsetof(ABP_UltimateRiverTool_C, Emitter_In) == 0x000658, "Member 'ABP_UltimateRiverTool_C::Emitter_In' has a wrong offset!");

}

