#pragma once

#include "Basic.hpp"

#include "MeshToSpawnAlong_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SubStemStarter_structs.hpp"
#include "SkelMeshToSpawnAlong_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass StemSpline_BP.StemSpline_BP_C
// 0x03F0 (0x0680 - 0x0290)
class AStemSpline_BP_C : public AActor
{
public:
	class UBillboardComponent*                    Billboard;                                         // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow3;                                            // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow2;                                            // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        IrregularityLevel;                                 // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        IrregularityLevel_SubStems;                        // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        PointHeightAboveSurface;                           // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        PointHeightOnEdge;                                 // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AddCornerPoints;                                   // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OptimizeEdges;                                     // 0x02D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D2[0x6];                                      // 0x02D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        TraceSegmentLength;                                // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DownTraceLength;                                   // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Seed;                                              // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountOfSegments;                                  // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         AmountOfSegmentsDone;                              // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EdgeDetectionPrecision;                            // 0x02F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SplineMeshAmountFactor;                            // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MatchDirection_SurfaceNormal;                      // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_301[0x7];                                      // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        Points;                                            // 0x0308(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        SubStemChance;                                     // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowSplinePoints;                                  // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_321[0x7];                                      // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CurrentSubstemDirection;                           // 0x0328(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        CurrentAddingSubstemPoints;                        // 0x0340(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         CurrentAddingSubstemAmountOfSegments;              // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_354[0x4];                                      // 0x0354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSubStemStarter>                SubStemStarters;                                   // 0x0358(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         CurrentAddingSubLevel;                             // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxSubStemLevels;                                  // 0x036C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USplineComponent*>               SubStemSplines;                                    // 0x0370(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	double                                        SubStems_minGrowAlongLength;                       // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SubStems_maxGrowAlongLength;                       // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SubStemAngle;                                      // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SubStemAngleAdditionalRandom;                      // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxSubstemAmount;                                  // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentSubstemAmount;                              // 0x03A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        PerSubLevelLengthMultiplier;                       // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OptimizeToLowerPoly;                               // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B1[0x7];                                      // 0x03B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        OptimizeMesh_DirectionMargin;                      // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        OptimizeMesh_TangentMargin;                        // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StripStem;                                         // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C9[0x7];                                      // 0x03C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        StripStemStartWidth;                               // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        StripStemEndWidth;                                 // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        StripStemFullWidthTime;                            // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            StripStemMain;                                     // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            StripStemLowPoly;                                  // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     StripStemMaterial;                                 // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        StartMeshScaleExtension;                           // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EndMeshScaleExtension;                             // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              MainMeshScale;                                     // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            SplineMesh_Middle;                                 // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            SplineMesh_Start;                                  // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            SplineMesh_End;                                    // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            SplineMesh_LowPoly;                                // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       MainSpline;                                        // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 OccupiedLengths;                                   // 0x0448(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                StartPointSeekDirection;                           // 0x0458(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SplineEndScale;                                    // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MainStemCurve;                                     // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MainStemCurve_Bending;                             // 0x0480(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MainStemCurve_Incremental;                         // 0x0481(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_482[0x6];                                      // 0x0482(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        SubStemCurve;                                      // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SubStemCurve_Bending;                              // 0x0490(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_491[0x7];                                      // 0x0491(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                LastTraceDirection;                                // 0x0498(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DropOffFromBottomEdges;                            // 0x04B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B1[0x3];                                      // 0x04B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DropOffFromBottomEdges_maxDrop;                    // 0x04B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentDropOffs;                                   // 0x04B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DoingDropOffNow;                                   // 0x04BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BD[0x3];                                      // 0x04BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DropOffTolerance;                                  // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DropOff_EdgeAdjust;                                // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DropOffIfDownDirection;                            // 0x04D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D1[0x7];                                      // 0x04D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DropOffIfDownDirection_reqLength;                  // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                DropOffPoint;                                      // 0x04E0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DropOffDownDirection_EdgeAdjust;                   // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MakeBridges;                                       // 0x0500(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MakeBridgesWithSubStems;                           // 0x0501(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_502[0x6];                                      // 0x0502(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        BridgeChance;                                      // 0x0508(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BridgeGravity;                                     // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BridgeGravity_RandomAdd;                           // 0x0518(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            BridgeCurve;                                       // 0x0520(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          badTwistWorkaround;                                // 0x0528(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_529[0x7];                                      // 0x0529(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<double>                                MeshStartTimes;                                    // 0x0530(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<double>                                MeshEndTimes;                                      // 0x0540(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                        EdgePoints_Locations;                              // 0x0550(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        SplineMeshRoll;                                    // 0x0560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FixTangentUVMinusStretching;                       // 0x0568(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_569[0x7];                                      // 0x0569(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<double>                                EdgePointsTimes;                                   // 0x0570(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        SeekDistance;                                      // 0x0580(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SeekStartOffset;                                   // 0x0588(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PrioritizeHigherObjects;                           // 0x0590(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowSeekTraces;                                    // 0x0591(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_592[0x2];                                      // 0x0592(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MaxTraceChecks;                                    // 0x0594(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseFixedSeekDirection;                             // 0x0598(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_599[0x7];                                      // 0x0599(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                FixedSeekDirection;                                // 0x05A0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MakeBridgesFromCeilings;                           // 0x05B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B9[0x7];                                      // 0x05B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        StrongTangentsReduction;                           // 0x05C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          _X__asUpVector;                                    // 0x05C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ClampedEdges;                                      // 0x05C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CreateSplineMeshes;                                // 0x05CA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OnlyFromEdges;                                     // 0x05CB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CC[0x4];                                      // 0x05CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        RequiredEdgeSharpness;                             // 0x05D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxBridgeAmount;                                   // 0x05D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentBridgeAmount;                               // 0x05DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SplineMeshShadow;                                  // 0x05E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SplineMeshCollision;                               // 0x05E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SubStemCurve_Incremental;                          // 0x05E2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HideDirectionArrows;                               // 0x05E3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E4[0x4];                                      // 0x05E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FMeshToSpawnAlong>              MeshesToSpawnAlong;                                // 0x05E8(0x0010)(Edit, BlueprintVisible)
	bool                                          CLICK;                                             // 0x05F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F9[0x7];                                      // 0x05F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSkelMeshToSpawnAlong>          SkelMeshesToSpawnAlong;                            // 0x0600(0x0010)(Edit, BlueprintVisible)
	bool                                          UseTargetPoint;                                    // 0x0610(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_611[0x7];                                      // 0x0611(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASplineTarget_BP_C*                     TargetPoint;                                       // 0x0618(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Direction;                                         // 0x0620(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                          RandomStream;                                      // 0x0638(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)
	bool                                          ProcessSubStems;                                   // 0x0640(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_641[0x7];                                      // 0x0641(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        IrregularityLevelSubStems_Neg;                     // 0x0648(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        IrregularityLevel_Neg;                             // 0x0650(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BridgeGravityRandomAdd_Neg;                        // 0x0658(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           FullRed;                                           // 0x0660(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           NoRed;                                             // 0x0670(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void _Bridge__TraceTowardsDirection(const struct FVector& StartLocation, const struct FVector& RelativeNormal, const struct FVector& Direction_0, bool* HitSomething, struct FVector* LastLocation, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* TraceDirection);
	void _SubStem_MinusDoCheckSegment(const struct FVector& StartLocation, const struct FVector& RelativeNormal, int32 CurrentSubLevel);
	void AddMeshesAlongSpline(class USplineComponent* SplineComp);
	void AddSkelMeshesAlongSpline(class USplineComponent* SplineComp);
	void AddSplineMeshes(class USplineComponent* SplineComponent);
	void AddSplinePoints();
	void AddSubStem(const struct FVector& StartLoc, const struct FVector& StartNormal, int32 CurrentSubLevel);
	void CheckIfContainsValueInRange(TArray<double>& Array, double Range__Min, double Range__Max, bool* Contains_);
	void CheckIfContainsVectorInDistance(TArray<struct FVector>& Array, double InDistance, const struct FVector& Vector, bool* Contains_);
	void ConstructionLogic();
	void DoCheckSegment(const struct FVector& StartLocation, const struct FVector& RelativeNormal);
	void FindBridgeEdge(int32 MaxSegmentChecks, const struct FVector& FromWhere, const struct FVector& StartNormal, const struct FVector& Direction_0, bool* Found, struct FVector* EdgeLocation, struct FVector* EdgeNormal);
	void FindClosestValue(TArray<double>& InArray, double ToValue, int32* ClosestValueIndex_);
	void FindClosestVector(TArray<struct FVector>& InArray, const struct FVector& ToVector, int32* ClosestValueIndex_);
	void FindStartPoint(struct FVector* StartLoc, struct FVector* StartNormal);
	void SearchForEdge(const struct FVector& SearchStartLocation, const struct FVector& SearchDirectionNormal, bool ForSubstem, bool* FoundAnEdge_, struct FVector* FoundEdgeLocation, struct FVector* FoundEdgeNormal);
	void SeekForBridge(const struct FVector& StartLoc, const struct FVector& StartNormal, bool* bridgeBuilt, TArray<struct FVector>* bridgePoints, struct FVector* NewSurfaceNormal);
	void SetMainDirectionVector();
	void TraceDown(const struct FVector& StartLocation, const struct FVector& RelativeNormal, bool ForBridgeSeek, struct FVector* HitLocation, struct FVector* HitNormal, bool* HitSomething);
	void TraceTowardsDirection(const struct FVector& StartLocation, const struct FVector& RelativeNormal, bool ForSubstem, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* LastLocation, struct FVector* TraceDirection, bool* HitSomething, bool* TargetReached);
	void UserConstructionScript();
	void WorldLocToSplineTimeApprox(const struct FVector& WorldLoc, int32 Iterations, double DistanceTolerance_, class USplineComponent* SplineComponent, double StartTime, double EndTime, double* bestTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StemSpline_BP_C">();
	}
	static class AStemSpline_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AStemSpline_BP_C>();
	}
};
static_assert(alignof(AStemSpline_BP_C) == 0x000008, "Wrong alignment on AStemSpline_BP_C");
static_assert(sizeof(AStemSpline_BP_C) == 0x000680, "Wrong size on AStemSpline_BP_C");
static_assert(offsetof(AStemSpline_BP_C, Billboard) == 0x000290, "Member 'AStemSpline_BP_C::Billboard' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, Arrow3) == 0x000298, "Member 'AStemSpline_BP_C::Arrow3' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, Arrow2) == 0x0002A0, "Member 'AStemSpline_BP_C::Arrow2' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, Arrow) == 0x0002A8, "Member 'AStemSpline_BP_C::Arrow' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, IrregularityLevel) == 0x0002B0, "Member 'AStemSpline_BP_C::IrregularityLevel' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, IrregularityLevel_SubStems) == 0x0002B8, "Member 'AStemSpline_BP_C::IrregularityLevel_SubStems' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, PointHeightAboveSurface) == 0x0002C0, "Member 'AStemSpline_BP_C::PointHeightAboveSurface' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, PointHeightOnEdge) == 0x0002C8, "Member 'AStemSpline_BP_C::PointHeightOnEdge' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, AddCornerPoints) == 0x0002D0, "Member 'AStemSpline_BP_C::AddCornerPoints' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, OptimizeEdges) == 0x0002D1, "Member 'AStemSpline_BP_C::OptimizeEdges' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, TraceSegmentLength) == 0x0002D8, "Member 'AStemSpline_BP_C::TraceSegmentLength' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, DownTraceLength) == 0x0002E0, "Member 'AStemSpline_BP_C::DownTraceLength' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, Seed) == 0x0002E8, "Member 'AStemSpline_BP_C::Seed' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, AmountOfSegments) == 0x0002EC, "Member 'AStemSpline_BP_C::AmountOfSegments' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, AmountOfSegmentsDone) == 0x0002F0, "Member 'AStemSpline_BP_C::AmountOfSegmentsDone' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, EdgeDetectionPrecision) == 0x0002F4, "Member 'AStemSpline_BP_C::EdgeDetectionPrecision' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, SplineMeshAmountFactor) == 0x0002F8, "Member 'AStemSpline_BP_C::SplineMeshAmountFactor' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, MatchDirection_SurfaceNormal) == 0x000300, "Member 'AStemSpline_BP_C::MatchDirection_SurfaceNormal' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, Points) == 0x000308, "Member 'AStemSpline_BP_C::Points' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, SubStemChance) == 0x000318, "Member 'AStemSpline_BP_C::SubStemChance' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, ShowSplinePoints) == 0x000320, "Member 'AStemSpline_BP_C::ShowSplinePoints' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, CurrentSubstemDirection) == 0x000328, "Member 'AStemSpline_BP_C::CurrentSubstemDirection' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, CurrentAddingSubstemPoints) == 0x000340, "Member 'AStemSpline_BP_C::CurrentAddingSubstemPoints' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, CurrentAddingSubstemAmountOfSegments) == 0x000350, "Member 'AStemSpline_BP_C::CurrentAddingSubstemAmountOfSegments' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, SubStemStarters) == 0x000358, "Member 'AStemSpline_BP_C::SubStemStarters' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, CurrentAddingSubLevel) == 0x000368, "Member 'AStemSpline_BP_C::CurrentAddingSubLevel' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, MaxSubStemLevels) == 0x00036C, "Member 'AStemSpline_BP_C::MaxSubStemLevels' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, SubStemSplines) == 0x000370, "Member 'AStemSpline_BP_C::SubStemSplines' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, SubStems_minGrowAlongLength) == 0x000380, "Member 'AStemSpline_BP_C::SubStems_minGrowAlongLength' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, SubStems_maxGrowAlongLength) == 0x000388, "Member 'AStemSpline_BP_C::SubStems_maxGrowAlongLength' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, SubStemAngle) == 0x000390, "Member 'AStemSpline_BP_C::SubStemAngle' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, SubStemAngleAdditionalRandom) == 0x000398, "Member 'AStemSpline_BP_C::SubStemAngleAdditionalRandom' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, MaxSubstemAmount) == 0x0003A0, "Member 'AStemSpline_BP_C::MaxSubstemAmount' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, CurrentSubstemAmount) == 0x0003A4, "Member 'AStemSpline_BP_C::CurrentSubstemAmount' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, PerSubLevelLengthMultiplier) == 0x0003A8, "Member 'AStemSpline_BP_C::PerSubLevelLengthMultiplier' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, OptimizeToLowerPoly) == 0x0003B0, "Member 'AStemSpline_BP_C::OptimizeToLowerPoly' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, OptimizeMesh_DirectionMargin) == 0x0003B8, "Member 'AStemSpline_BP_C::OptimizeMesh_DirectionMargin' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, OptimizeMesh_TangentMargin) == 0x0003C0, "Member 'AStemSpline_BP_C::OptimizeMesh_TangentMargin' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, StripStem) == 0x0003C8, "Member 'AStemSpline_BP_C::StripStem' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, StripStemStartWidth) == 0x0003D0, "Member 'AStemSpline_BP_C::StripStemStartWidth' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, StripStemEndWidth) == 0x0003D8, "Member 'AStemSpline_BP_C::StripStemEndWidth' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, StripStemFullWidthTime) == 0x0003E0, "Member 'AStemSpline_BP_C::StripStemFullWidthTime' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, StripStemMain) == 0x0003E8, "Member 'AStemSpline_BP_C::StripStemMain' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, StripStemLowPoly) == 0x0003F0, "Member 'AStemSpline_BP_C::StripStemLowPoly' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, StripStemMaterial) == 0x0003F8, "Member 'AStemSpline_BP_C::StripStemMaterial' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, StartMeshScaleExtension) == 0x000400, "Member 'AStemSpline_BP_C::StartMeshScaleExtension' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, EndMeshScaleExtension) == 0x000408, "Member 'AStemSpline_BP_C::EndMeshScaleExtension' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, MainMeshScale) == 0x000410, "Member 'AStemSpline_BP_C::MainMeshScale' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, SplineMesh_Middle) == 0x000420, "Member 'AStemSpline_BP_C::SplineMesh_Middle' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, SplineMesh_Start) == 0x000428, "Member 'AStemSpline_BP_C::SplineMesh_Start' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, SplineMesh_End) == 0x000430, "Member 'AStemSpline_BP_C::SplineMesh_End' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, SplineMesh_LowPoly) == 0x000438, "Member 'AStemSpline_BP_C::SplineMesh_LowPoly' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, MainSpline) == 0x000440, "Member 'AStemSpline_BP_C::MainSpline' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, OccupiedLengths) == 0x000448, "Member 'AStemSpline_BP_C::OccupiedLengths' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, StartPointSeekDirection) == 0x000458, "Member 'AStemSpline_BP_C::StartPointSeekDirection' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, SplineEndScale) == 0x000470, "Member 'AStemSpline_BP_C::SplineEndScale' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, MainStemCurve) == 0x000478, "Member 'AStemSpline_BP_C::MainStemCurve' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, MainStemCurve_Bending) == 0x000480, "Member 'AStemSpline_BP_C::MainStemCurve_Bending' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, MainStemCurve_Incremental) == 0x000481, "Member 'AStemSpline_BP_C::MainStemCurve_Incremental' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, SubStemCurve) == 0x000488, "Member 'AStemSpline_BP_C::SubStemCurve' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, SubStemCurve_Bending) == 0x000490, "Member 'AStemSpline_BP_C::SubStemCurve_Bending' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, LastTraceDirection) == 0x000498, "Member 'AStemSpline_BP_C::LastTraceDirection' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, DropOffFromBottomEdges) == 0x0004B0, "Member 'AStemSpline_BP_C::DropOffFromBottomEdges' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, DropOffFromBottomEdges_maxDrop) == 0x0004B4, "Member 'AStemSpline_BP_C::DropOffFromBottomEdges_maxDrop' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, CurrentDropOffs) == 0x0004B8, "Member 'AStemSpline_BP_C::CurrentDropOffs' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, DoingDropOffNow) == 0x0004BC, "Member 'AStemSpline_BP_C::DoingDropOffNow' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, DropOffTolerance) == 0x0004C0, "Member 'AStemSpline_BP_C::DropOffTolerance' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, DropOff_EdgeAdjust) == 0x0004C8, "Member 'AStemSpline_BP_C::DropOff_EdgeAdjust' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, DropOffIfDownDirection) == 0x0004D0, "Member 'AStemSpline_BP_C::DropOffIfDownDirection' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, DropOffIfDownDirection_reqLength) == 0x0004D8, "Member 'AStemSpline_BP_C::DropOffIfDownDirection_reqLength' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, DropOffPoint) == 0x0004E0, "Member 'AStemSpline_BP_C::DropOffPoint' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, DropOffDownDirection_EdgeAdjust) == 0x0004F8, "Member 'AStemSpline_BP_C::DropOffDownDirection_EdgeAdjust' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, MakeBridges) == 0x000500, "Member 'AStemSpline_BP_C::MakeBridges' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, MakeBridgesWithSubStems) == 0x000501, "Member 'AStemSpline_BP_C::MakeBridgesWithSubStems' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, BridgeChance) == 0x000508, "Member 'AStemSpline_BP_C::BridgeChance' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, BridgeGravity) == 0x000510, "Member 'AStemSpline_BP_C::BridgeGravity' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, BridgeGravity_RandomAdd) == 0x000518, "Member 'AStemSpline_BP_C::BridgeGravity_RandomAdd' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, BridgeCurve) == 0x000520, "Member 'AStemSpline_BP_C::BridgeCurve' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, badTwistWorkaround) == 0x000528, "Member 'AStemSpline_BP_C::badTwistWorkaround' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, MeshStartTimes) == 0x000530, "Member 'AStemSpline_BP_C::MeshStartTimes' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, MeshEndTimes) == 0x000540, "Member 'AStemSpline_BP_C::MeshEndTimes' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, EdgePoints_Locations) == 0x000550, "Member 'AStemSpline_BP_C::EdgePoints_Locations' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, SplineMeshRoll) == 0x000560, "Member 'AStemSpline_BP_C::SplineMeshRoll' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, FixTangentUVMinusStretching) == 0x000568, "Member 'AStemSpline_BP_C::FixTangentUVMinusStretching' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, EdgePointsTimes) == 0x000570, "Member 'AStemSpline_BP_C::EdgePointsTimes' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, SeekDistance) == 0x000580, "Member 'AStemSpline_BP_C::SeekDistance' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, SeekStartOffset) == 0x000588, "Member 'AStemSpline_BP_C::SeekStartOffset' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, PrioritizeHigherObjects) == 0x000590, "Member 'AStemSpline_BP_C::PrioritizeHigherObjects' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, ShowSeekTraces) == 0x000591, "Member 'AStemSpline_BP_C::ShowSeekTraces' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, MaxTraceChecks) == 0x000594, "Member 'AStemSpline_BP_C::MaxTraceChecks' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, UseFixedSeekDirection) == 0x000598, "Member 'AStemSpline_BP_C::UseFixedSeekDirection' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, FixedSeekDirection) == 0x0005A0, "Member 'AStemSpline_BP_C::FixedSeekDirection' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, MakeBridgesFromCeilings) == 0x0005B8, "Member 'AStemSpline_BP_C::MakeBridgesFromCeilings' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, StrongTangentsReduction) == 0x0005C0, "Member 'AStemSpline_BP_C::StrongTangentsReduction' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, _X__asUpVector) == 0x0005C8, "Member 'AStemSpline_BP_C::_X__asUpVector' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, ClampedEdges) == 0x0005C9, "Member 'AStemSpline_BP_C::ClampedEdges' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, CreateSplineMeshes) == 0x0005CA, "Member 'AStemSpline_BP_C::CreateSplineMeshes' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, OnlyFromEdges) == 0x0005CB, "Member 'AStemSpline_BP_C::OnlyFromEdges' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, RequiredEdgeSharpness) == 0x0005D0, "Member 'AStemSpline_BP_C::RequiredEdgeSharpness' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, MaxBridgeAmount) == 0x0005D8, "Member 'AStemSpline_BP_C::MaxBridgeAmount' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, CurrentBridgeAmount) == 0x0005DC, "Member 'AStemSpline_BP_C::CurrentBridgeAmount' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, SplineMeshShadow) == 0x0005E0, "Member 'AStemSpline_BP_C::SplineMeshShadow' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, SplineMeshCollision) == 0x0005E1, "Member 'AStemSpline_BP_C::SplineMeshCollision' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, SubStemCurve_Incremental) == 0x0005E2, "Member 'AStemSpline_BP_C::SubStemCurve_Incremental' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, HideDirectionArrows) == 0x0005E3, "Member 'AStemSpline_BP_C::HideDirectionArrows' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, MeshesToSpawnAlong) == 0x0005E8, "Member 'AStemSpline_BP_C::MeshesToSpawnAlong' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, CLICK) == 0x0005F8, "Member 'AStemSpline_BP_C::CLICK' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, SkelMeshesToSpawnAlong) == 0x000600, "Member 'AStemSpline_BP_C::SkelMeshesToSpawnAlong' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, UseTargetPoint) == 0x000610, "Member 'AStemSpline_BP_C::UseTargetPoint' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, TargetPoint) == 0x000618, "Member 'AStemSpline_BP_C::TargetPoint' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, Direction) == 0x000620, "Member 'AStemSpline_BP_C::Direction' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, RandomStream) == 0x000638, "Member 'AStemSpline_BP_C::RandomStream' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, ProcessSubStems) == 0x000640, "Member 'AStemSpline_BP_C::ProcessSubStems' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, IrregularityLevelSubStems_Neg) == 0x000648, "Member 'AStemSpline_BP_C::IrregularityLevelSubStems_Neg' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, IrregularityLevel_Neg) == 0x000650, "Member 'AStemSpline_BP_C::IrregularityLevel_Neg' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, BridgeGravityRandomAdd_Neg) == 0x000658, "Member 'AStemSpline_BP_C::BridgeGravityRandomAdd_Neg' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, FullRed) == 0x000660, "Member 'AStemSpline_BP_C::FullRed' has a wrong offset!");
static_assert(offsetof(AStemSpline_BP_C, NoRed) == 0x000670, "Member 'AStemSpline_BP_C::NoRed' has a wrong offset!");

}

