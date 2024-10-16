#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SubStemStarter_structs.hpp"
#include "SkelMeshToSpawnAlong_structs.hpp"
#include "MeshToSpawnAlong_structs.hpp"


namespace PalSDK::Params
{

// Function StemSpline_BP.StemSpline_BP_C.(Bridge)_TraceTowardsDirection
// 0x0350 (0x0350 - 0x0000)
struct StemSpline_BP_C__Bridge__TraceTowardsDirection final
{
public:
	struct FVector                                StartLocation;                                     // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RelativeNormal;                                    // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Direction_0;                                       // 0x0030(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HitSomething;                                      // 0x0048(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                LastLocation;                                      // 0x0050(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitLocation;                                       // 0x0068(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitNormal;                                         // 0x0080(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TraceDirection;                                    // 0x0098(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                EndLoc;                                            // 0x00B0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TraceDir;                                          // 0x00C8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RelNormal;                                         // 0x00E0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartLoc;                                          // 0x00F8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RandomIrregularity;                                // 0x0110(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0118(0x0010)(ConstParm, ReferenceParm)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x0128(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_211[0x7];                                      // 0x0211(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Cross_VectorVector_ReturnValue;           // 0x0218(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0231(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_232[0x2];                                      // 0x0232(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23C[0x4];                                      // 0x023C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0240(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0258(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0270(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0288(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x02A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x02A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x02B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x02CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D4[0x4];                                      // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x02D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x02F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0308(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0320(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0338(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StemSpline_BP_C__Bridge__TraceTowardsDirection) == 0x000008, "Wrong alignment on StemSpline_BP_C__Bridge__TraceTowardsDirection");
static_assert(sizeof(StemSpline_BP_C__Bridge__TraceTowardsDirection) == 0x000350, "Wrong size on StemSpline_BP_C__Bridge__TraceTowardsDirection");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, StartLocation) == 0x000000, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::StartLocation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, RelativeNormal) == 0x000018, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::RelativeNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, Direction_0) == 0x000030, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::Direction_0' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, HitSomething) == 0x000048, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::HitSomething' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, LastLocation) == 0x000050, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::LastLocation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, HitLocation) == 0x000068, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::HitLocation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, HitNormal) == 0x000080, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::HitNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, TraceDirection) == 0x000098, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::TraceDirection' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, EndLoc) == 0x0000B0, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::EndLoc' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, TraceDir) == 0x0000C8, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::TraceDir' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, RelNormal) == 0x0000E0, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::RelNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, StartLoc) == 0x0000F8, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::StartLoc' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, RandomIrregularity) == 0x000110, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::RandomIrregularity' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, Temp_object_Variable) == 0x000118, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, CallFunc_LineTraceSingle_OutHit) == 0x000128, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, CallFunc_LineTraceSingle_ReturnValue) == 0x000210, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, CallFunc_Cross_VectorVector_ReturnValue) == 0x000218, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::CallFunc_Cross_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, CallFunc_BreakHitResult_bBlockingHit) == 0x000230, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, CallFunc_BreakHitResult_bInitialOverlap) == 0x000231, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, CallFunc_BreakHitResult_Time) == 0x000234, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, CallFunc_BreakHitResult_Distance) == 0x000238, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, CallFunc_BreakHitResult_Location) == 0x000240, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, CallFunc_BreakHitResult_ImpactPoint) == 0x000258, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, CallFunc_BreakHitResult_Normal) == 0x000270, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, CallFunc_BreakHitResult_ImpactNormal) == 0x000288, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, CallFunc_BreakHitResult_PhysMat) == 0x0002A0, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, CallFunc_BreakHitResult_HitActor) == 0x0002A8, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, CallFunc_BreakHitResult_HitComponent) == 0x0002B0, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, CallFunc_BreakHitResult_HitBoneName) == 0x0002B8, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, CallFunc_BreakHitResult_BoneName) == 0x0002C0, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, CallFunc_BreakHitResult_HitItem) == 0x0002C8, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, CallFunc_BreakHitResult_ElementIndex) == 0x0002CC, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, CallFunc_BreakHitResult_FaceIndex) == 0x0002D0, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, CallFunc_BreakHitResult_TraceStart) == 0x0002D8, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, CallFunc_BreakHitResult_TraceEnd) == 0x0002F0, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, CallFunc_Normal_ReturnValue) == 0x000308, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000320, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__Bridge__TraceTowardsDirection, CallFunc_Add_VectorVector_ReturnValue) == 0x000338, "Member 'StemSpline_BP_C__Bridge__TraceTowardsDirection::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");

// Function StemSpline_BP.StemSpline_BP_C.[SubStem]-DoCheckSegment
// 0x0B50 (0x0B50 - 0x0000)
struct StemSpline_BP_C__SubStem_MinusDoCheckSegment final
{
public:
	struct FVector                                StartLocation;                                     // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RelativeNormal;                                    // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentSubLevel;                                   // 0x0030(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrSubLevel;                                      // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                bridgeSeek_surfaceNormal;                          // 0x0038(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        bridgeSeek_Points;                                 // 0x0050(0x0010)(Edit, BlueprintVisible)
	struct FVector                                FoundEdgeNormal;                                   // 0x0060(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FoundEdgeLocation;                                 // 0x0078(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        bridgeSeekPoints;                                  // 0x0090(0x0010)(Edit, BlueprintVisible)
	struct FVector                                LocFromTraceDownWithHeight;                        // 0x00A0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitNormalFromTraceDown;                            // 0x00B8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitLocFromTraceDown;                               // 0x00D0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TraceDirectionFromTraceTowards;                    // 0x00E8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitNormalFromTraceTowards;                         // 0x0100(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitLocFromTraceTowards;                            // 0x0118(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SubStarterStartDirection;                          // 0x0130(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                AddingEdgePoint;                                   // 0x0148(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LocAfterDirTrace;                                  // 0x0160(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SubSegmentStartLocation;                           // 0x0178(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SubSegmentStartSurfaceNormal;                      // 0x0190(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RandomBoolFromStream_ReturnValue;         // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B1[0x3];                                      // 0x01B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomFloatInRangeFromStream_ReturnValue; // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_ReturnValue_1; // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x01C8(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue_1;            // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue_2;            // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Array_Get_Item;                           // 0x01E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Array_Get_Item_1;                         // 0x0200(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21C[0x4];                                      // 0x021C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Array_Get_Item_2;                         // 0x0220(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23C[0x4];                                      // 0x023C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0240(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_259[0x7];                                      // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_VSize_ReturnValue;                        // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_269[0x3];                                      // 0x0269(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x026C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0284(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x028C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x02A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_3;            // 0x02A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AC[0x4];                                      // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_2;        // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_4;            // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2BC[0x4];                                      // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_3;        // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_IntFloat_ReturnValue_2;          // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_2;                     // 0x02D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue_3;            // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DC[0x4];                                      // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Array_Get_Item_3;                         // 0x02E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_5;            // 0x02F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FC[0x4];                                      // 0x02FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_4;        // 0x0300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_IntFloat_ReturnValue_3;          // 0x0308(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_6;            // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_314[0x4];                                      // 0x0314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_5;        // 0x0318(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0320(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x0324(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue_4;            // 0x0328(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32C[0x4];                                      // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Array_Get_Item_4;                         // 0x0330(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0348(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34C[0x4];                                      // 0x034C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0350(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Divide_VectorInt_ReturnValue;             // 0x0368(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue;      // 0x0380(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_381[0x7];                                      // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Dot_VectorVector_ReturnValue;             // 0x0388(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0390(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_391[0x7];                                      // 0x0391(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_DegAcos_ReturnValue;                      // 0x0398(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x03A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A4[0x4];                                      // 0x03A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x03A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x03C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C1[0x7];                                      // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Divide_VectorInt_ReturnValue_1;           // 0x03C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x03E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;           // 0x03F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x0410(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0428(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42C[0x4];                                      // 0x042C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_VSize_ReturnValue_1;                      // 0x0430(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0438(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue_1;    // 0x0439(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x043A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43B[0x1];                                      // 0x043B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue_5;            // 0x043C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Array_Get_Item_5;                         // 0x0440(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0458(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x045C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45D[0x3];                                      // 0x045D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0460(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_464[0x4];                                      // 0x0464(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Array_Get_Item_6;                         // 0x0468(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0480(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue_2;    // 0x0484(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_485[0x3];                                      // 0x0485(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_3;                               // 0x0488(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x048C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x048D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48E[0x2];                                      // 0x048E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_3;           // 0x0490(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Divide_VectorInt_ReturnValue_2;           // 0x04A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_2;      // 0x04C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x04D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue_2;                      // 0x04F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x04F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F9[0x7];                                      // 0x04F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_2;       // 0x0500(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0518(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_3;       // 0x0530(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue_3;    // 0x0548(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue_4;    // 0x0549(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x054A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x054B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x054C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54D[0x3];                                      // 0x054D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0550(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0554(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x0558(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_559[0x3];                                      // 0x0559(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x055C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x0560(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_561[0x7];                                      // 0x0561(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetForwardVector_ReturnValue_1;           // 0x0568(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_4;       // 0x0580(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_4;           // 0x0598(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x05B0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x0698(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0699(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_5;                // 0x069A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SeekForBridge_bridgeBuilt;                // 0x069B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69C[0x4];                                      // 0x069C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        CallFunc_SeekForBridge_bridgePoints;               // 0x06A0(0x0010)(ReferenceParm)
	struct FVector                                CallFunc_SeekForBridge_newSurfaceNormal;           // 0x06B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x06C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SeekForBridge_bridgeBuilt_1;              // 0x06C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6CA[0x6];                                      // 0x06CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        CallFunc_SeekForBridge_bridgePoints_1;             // 0x06D0(0x0010)(ReferenceParm)
	struct FVector                                CallFunc_SeekForBridge_newSurfaceNormal_1;         // 0x06E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x06F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x06FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue_5;    // 0x0700(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_701[0x7];                                      // 0x0701(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Array_Get_Item_7;                         // 0x0708(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_4;                  // 0x0720(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_724[0x4];                                      // 0x0724(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector_X;                            // 0x0728(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0730(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0738(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_5;           // 0x0740(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0758(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_5;                  // 0x0770(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0774(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_775[0x3];                                      // 0x0775(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector_X_1;                          // 0x0778(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x0780(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x0788(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x0790(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_5;                // 0x07A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A9[0x7];                                      // 0x07A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x07B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x07C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_5;       // 0x07E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_6;           // 0x07F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_6;                  // 0x0810(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x0814(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_6;                // 0x0818(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;  // 0x0819(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue_6;    // 0x081A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_7;                // 0x081B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x081C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x0820(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_6;                 // 0x0824(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_8;                // 0x0828(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0829(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_82A[0x2];                                      // 0x082A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_7;                 // 0x082C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_9;                // 0x0830(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0831(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2;  // 0x0832(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue_1;     // 0x0833(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0834(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_835[0x3];                                      // 0x0835(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0838(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSubStemStarter                        K2Node_MakeStruct_SubStemStarter;                  // 0x0840(0x0050)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_ReturnValue_2; // 0x0890(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_894[0x4];                                      // 0x0894(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0898(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_7;                  // 0x08A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A4[0x4];                                      // 0x08A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x08A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RotateAngleAxis_ReturnValue;              // 0x08B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_6;       // 0x08C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Cross_VectorVector_ReturnValue;           // 0x08E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_7;           // 0x08F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0910(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_8;           // 0x0928(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_8;                  // 0x0940(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_944[0x4];                                      // 0x0944(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_7;       // 0x0948(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_9;           // 0x0960(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_10;          // 0x0978(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Divide_VectorInt_ReturnValue_3;           // 0x0990(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_8;       // 0x09A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_11;          // 0x09C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SearchForEdge_FoundAnEdge_;               // 0x09D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9D9[0x7];                                      // 0x09D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_SearchForEdge_foundEdgeLocation;          // 0x09E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SearchForEdge_foundEdgeNormal;            // 0x09F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_6;                // 0x0A10(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A11[0x7];                                      // 0x0A11(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_9;       // 0x0A18(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_12;          // 0x0A30(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_TraceDown_hitLocation;                    // 0x0A48(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_TraceDown_hitNormal;                      // 0x0A60(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TraceDown_hitSomething;                   // 0x0A78(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A79[0x7];                                      // 0x0A79(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_TraceTowardsDirection_hitLocation;        // 0x0A80(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_TraceTowardsDirection_hitNormal;          // 0x0A98(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_TraceTowardsDirection_lastLocation;       // 0x0AB0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_TraceTowardsDirection_traceDirection;     // 0x0AC8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TraceTowardsDirection_hitSomething;       // 0x0AE0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TraceTowardsDirection_targetReached;      // 0x0AE1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AE2[0x6];                                      // 0x0AE2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x0AE8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x0AF0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x0AF8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast_1;     // 0x0B00(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0B08(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast_2;     // 0x0B10(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast_3;     // 0x0B18(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast_4;     // 0x0B20(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast_1;     // 0x0B28(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_EqualEqual_VectorVector_ErrorTolerance_ImplicitCast; // 0x0B30(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_EqualEqual_VectorVector_ErrorTolerance_ImplicitCast_1; // 0x0B34(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast; // 0x0B38(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast; // 0x0B3C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0B40(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast;    // 0x0B48(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StemSpline_BP_C__SubStem_MinusDoCheckSegment) == 0x000008, "Wrong alignment on StemSpline_BP_C__SubStem_MinusDoCheckSegment");
static_assert(sizeof(StemSpline_BP_C__SubStem_MinusDoCheckSegment) == 0x000B50, "Wrong size on StemSpline_BP_C__SubStem_MinusDoCheckSegment");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, StartLocation) == 0x000000, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::StartLocation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, RelativeNormal) == 0x000018, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::RelativeNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CurrentSubLevel) == 0x000030, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CurrentSubLevel' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CurrSubLevel) == 0x000034, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CurrSubLevel' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, bridgeSeek_surfaceNormal) == 0x000038, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::bridgeSeek_surfaceNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, bridgeSeek_Points) == 0x000050, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::bridgeSeek_Points' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, FoundEdgeNormal) == 0x000060, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::FoundEdgeNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, FoundEdgeLocation) == 0x000078, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::FoundEdgeLocation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, bridgeSeekPoints) == 0x000090, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::bridgeSeekPoints' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, LocFromTraceDownWithHeight) == 0x0000A0, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::LocFromTraceDownWithHeight' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, HitNormalFromTraceDown) == 0x0000B8, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::HitNormalFromTraceDown' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, HitLocFromTraceDown) == 0x0000D0, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::HitLocFromTraceDown' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, TraceDirectionFromTraceTowards) == 0x0000E8, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::TraceDirectionFromTraceTowards' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, HitNormalFromTraceTowards) == 0x000100, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::HitNormalFromTraceTowards' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, HitLocFromTraceTowards) == 0x000118, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::HitLocFromTraceTowards' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, SubStarterStartDirection) == 0x000130, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::SubStarterStartDirection' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, AddingEdgePoint) == 0x000148, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::AddingEdgePoint' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, LocAfterDirTrace) == 0x000160, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::LocAfterDirTrace' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, SubSegmentStartLocation) == 0x000178, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::SubSegmentStartLocation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, SubSegmentStartSurfaceNormal) == 0x000190, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::SubSegmentStartSurfaceNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, Temp_int_Loop_Counter_Variable) == 0x0001A8, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Add_IntInt_ReturnValue) == 0x0001AC, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_RandomBoolFromStream_ReturnValue) == 0x0001B0, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_RandomBoolFromStream_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_RandomFloatInRangeFromStream_ReturnValue) == 0x0001B4, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_RandomFloatInRangeFromStream_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_SelectFloat_ReturnValue) == 0x0001B8, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_RandomFloatInRangeFromStream_ReturnValue_1) == 0x0001C0, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_RandomFloatInRangeFromStream_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, Temp_int_Variable) == 0x0001C4, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, Temp_object_Variable) == 0x0001C8, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Array_Add_ReturnValue) == 0x0001D8, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Array_LastIndex_ReturnValue) == 0x0001DC, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Array_LastIndex_ReturnValue_1) == 0x0001E0, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Array_LastIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Array_LastIndex_ReturnValue_2) == 0x0001E4, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Array_LastIndex_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Array_Get_Item) == 0x0001E8, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Array_Get_Item_1) == 0x000200, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Subtract_IntInt_ReturnValue) == 0x000218, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Array_Get_Item_2) == 0x000220, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Array_Length_ReturnValue) == 0x000238, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000240, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Greater_IntInt_ReturnValue) == 0x000258, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_VSize_ReturnValue) == 0x000260, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000268, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00026C, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000270, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000278, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Add_IntInt_ReturnValue_1) == 0x000280, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_FTrunc_ReturnValue) == 0x000284, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Array_Add_ReturnValue_1) == 0x000288, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x00028C, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000290, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x000298, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x0002A0, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_FTrunc_ReturnValue_1) == 0x0002A4, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Conv_IntToFloat_ReturnValue_3) == 0x0002A8, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Conv_IntToFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Divide_DoubleDouble_ReturnValue_2) == 0x0002B0, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Divide_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Conv_IntToFloat_ReturnValue_4) == 0x0002B8, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Conv_IntToFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Divide_DoubleDouble_ReturnValue_3) == 0x0002C0, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Divide_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Multiply_IntFloat_ReturnValue_2) == 0x0002C8, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Multiply_IntFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Add_IntInt_ReturnValue_2) == 0x0002D0, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_FTrunc_ReturnValue_2) == 0x0002D4, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_FTrunc_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Array_LastIndex_ReturnValue_3) == 0x0002D8, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Array_LastIndex_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Array_Get_Item_3) == 0x0002E0, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Conv_IntToFloat_ReturnValue_5) == 0x0002F8, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Conv_IntToFloat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Divide_DoubleDouble_ReturnValue_4) == 0x000300, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Divide_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Multiply_IntFloat_ReturnValue_3) == 0x000308, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Multiply_IntFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Conv_IntToFloat_ReturnValue_6) == 0x000310, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Conv_IntToFloat_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Divide_DoubleDouble_ReturnValue_5) == 0x000318, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Divide_DoubleDouble_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000320, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x000324, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Array_LastIndex_ReturnValue_4) == 0x000328, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Array_LastIndex_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Array_Get_Item_4) == 0x000330, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Array_Length_ReturnValue_1) == 0x000348, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Add_VectorVector_ReturnValue) == 0x000350, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Divide_VectorInt_ReturnValue) == 0x000368, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Divide_VectorInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_EqualEqual_VectorVector_ReturnValue) == 0x000380, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_EqualEqual_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Dot_VectorVector_ReturnValue) == 0x000388, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Not_PreBool_ReturnValue) == 0x000390, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_DegAcos_ReturnValue) == 0x000398, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_DegAcos_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, Temp_int_Variable_1) == 0x0003A0, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Add_VectorVector_ReturnValue_1) == 0x0003A8, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Less_IntInt_ReturnValue) == 0x0003C0, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Divide_VectorInt_ReturnValue_1) == 0x0003C8, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Divide_VectorInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0003E0, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Add_VectorVector_ReturnValue_2) == 0x0003F8, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x000410, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, Temp_int_Variable_2) == 0x000428, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_VSize_ReturnValue_1) == 0x000430, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_VSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000438, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_EqualEqual_VectorVector_ReturnValue_1) == 0x000439, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_EqualEqual_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Not_PreBool_ReturnValue_1) == 0x00043A, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Array_LastIndex_ReturnValue_5) == 0x00043C, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Array_LastIndex_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Array_Get_Item_5) == 0x000440, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Array_Length_ReturnValue_2) == 0x000458, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Less_IntInt_ReturnValue_1) == 0x00045C, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, Temp_int_Array_Index_Variable) == 0x000460, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Array_Get_Item_6) == 0x000468, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Array_Get_Item_6' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Array_Add_ReturnValue_2) == 0x000480, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_EqualEqual_VectorVector_ReturnValue_2) == 0x000484, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_EqualEqual_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, Temp_int_Variable_3) == 0x000488, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Not_PreBool_ReturnValue_2) == 0x00048C, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Less_IntInt_ReturnValue_2) == 0x00048D, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Add_VectorVector_ReturnValue_3) == 0x000490, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Add_VectorVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Divide_VectorInt_ReturnValue_2) == 0x0004A8, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Divide_VectorInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Subtract_VectorVector_ReturnValue_2) == 0x0004C0, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Subtract_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x0004D8, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_VSize_ReturnValue_2) == 0x0004F0, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_VSize_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x0004F8, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Multiply_VectorFloat_ReturnValue_2) == 0x000500, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Multiply_VectorFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_GetForwardVector_ReturnValue) == 0x000518, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Multiply_VectorFloat_ReturnValue_3) == 0x000530, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Multiply_VectorFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_EqualEqual_VectorVector_ReturnValue_3) == 0x000548, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_EqualEqual_VectorVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_EqualEqual_VectorVector_ReturnValue_4) == 0x000549, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_EqualEqual_VectorVector_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Not_PreBool_ReturnValue_3) == 0x00054A, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Not_PreBool_ReturnValue_4) == 0x00054B, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_BooleanAND_ReturnValue) == 0x00054C, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, Temp_int_Loop_Counter_Variable_1) == 0x000550, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Add_IntInt_ReturnValue_3) == 0x000554, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Less_IntInt_ReturnValue_3) == 0x000558, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Add_IntInt_ReturnValue_4) == 0x00055C, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Less_IntInt_ReturnValue_4) == 0x000560, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Less_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_GetForwardVector_ReturnValue_1) == 0x000568, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_GetForwardVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Multiply_VectorFloat_ReturnValue_4) == 0x000580, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Multiply_VectorFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Add_VectorVector_ReturnValue_4) == 0x000598, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Add_VectorVector_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_LineTraceSingle_OutHit) == 0x0005B0, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_LineTraceSingle_ReturnValue) == 0x000698, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000699, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Not_PreBool_ReturnValue_5) == 0x00069A, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Not_PreBool_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_SeekForBridge_bridgeBuilt) == 0x00069B, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_SeekForBridge_bridgeBuilt' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_SeekForBridge_bridgePoints) == 0x0006A0, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_SeekForBridge_bridgePoints' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_SeekForBridge_newSurfaceNormal) == 0x0006B0, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_SeekForBridge_newSurfaceNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Less_DoubleDouble_ReturnValue_1) == 0x0006C8, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Less_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_SeekForBridge_bridgeBuilt_1) == 0x0006C9, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_SeekForBridge_bridgeBuilt_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_SeekForBridge_bridgePoints_1) == 0x0006D0, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_SeekForBridge_bridgePoints_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_SeekForBridge_newSurfaceNormal_1) == 0x0006E0, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_SeekForBridge_newSurfaceNormal_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Array_Add_ReturnValue_3) == 0x0006F8, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, Temp_int_Array_Index_Variable_1) == 0x0006FC, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_EqualEqual_VectorVector_ReturnValue_5) == 0x000700, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_EqualEqual_VectorVector_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Array_Get_Item_7) == 0x000708, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Array_Get_Item_7' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Array_Add_ReturnValue_4) == 0x000720, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Array_Add_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_BreakVector_X) == 0x000728, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_BreakVector_Y) == 0x000730, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_BreakVector_Z) == 0x000738, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Add_VectorVector_ReturnValue_5) == 0x000740, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Add_VectorVector_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_MakeVector_ReturnValue) == 0x000758, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Array_Add_ReturnValue_5) == 0x000770, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Array_Add_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000774, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_BreakVector_X_1) == 0x000778, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_BreakVector_Y_1) == 0x000780, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_BreakVector_Z_1) == 0x000788, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_MakeVector_ReturnValue_1) == 0x000790, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Less_IntInt_ReturnValue_5) == 0x0007A8, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Less_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_FindLookAtRotation_ReturnValue) == 0x0007B0, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Conv_RotatorToVector_ReturnValue) == 0x0007C8, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Conv_RotatorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Multiply_VectorFloat_ReturnValue_5) == 0x0007E0, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Multiply_VectorFloat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Add_VectorVector_ReturnValue_6) == 0x0007F8, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Add_VectorVector_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Array_Add_ReturnValue_6) == 0x000810, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Array_Add_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Add_IntInt_ReturnValue_5) == 0x000814, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Less_IntInt_ReturnValue_6) == 0x000818, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Less_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1) == 0x000819, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_EqualEqual_VectorVector_ReturnValue_6) == 0x00081A, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_EqualEqual_VectorVector_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Less_IntInt_ReturnValue_7) == 0x00081B, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Less_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, Temp_int_Variable_4) == 0x00081C, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, Temp_int_Variable_5) == 0x000820, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Add_IntInt_ReturnValue_6) == 0x000824, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Add_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Less_IntInt_ReturnValue_8) == 0x000828, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Less_IntInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_BooleanAND_ReturnValue_1) == 0x000829, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Add_IntInt_ReturnValue_7) == 0x00082C, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Add_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Less_IntInt_ReturnValue_9) == 0x000830, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Less_IntInt_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000831, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2) == 0x000832, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_LessEqual_DoubleDouble_ReturnValue_1) == 0x000833, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_LessEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_BooleanAND_ReturnValue_2) == 0x000834, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000838, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, K2Node_MakeStruct_SubStemStarter) == 0x000840, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::K2Node_MakeStruct_SubStemStarter' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_RandomFloatInRangeFromStream_ReturnValue_2) == 0x000890, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_RandomFloatInRangeFromStream_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000898, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Array_Add_ReturnValue_7) == 0x0008A0, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Array_Add_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x0008A8, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_RotateAngleAxis_ReturnValue) == 0x0008B0, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_RotateAngleAxis_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Multiply_VectorFloat_ReturnValue_6) == 0x0008C8, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Multiply_VectorFloat_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Cross_VectorVector_ReturnValue) == 0x0008E0, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Cross_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Add_VectorVector_ReturnValue_7) == 0x0008F8, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Add_VectorVector_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Normal_ReturnValue) == 0x000910, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Add_VectorVector_ReturnValue_8) == 0x000928, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Add_VectorVector_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Array_Add_ReturnValue_8) == 0x000940, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Array_Add_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Multiply_VectorFloat_ReturnValue_7) == 0x000948, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Multiply_VectorFloat_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Add_VectorVector_ReturnValue_9) == 0x000960, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Add_VectorVector_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Add_VectorVector_ReturnValue_10) == 0x000978, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Add_VectorVector_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Divide_VectorInt_ReturnValue_3) == 0x000990, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Divide_VectorInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Multiply_VectorFloat_ReturnValue_8) == 0x0009A8, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Multiply_VectorFloat_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Add_VectorVector_ReturnValue_11) == 0x0009C0, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Add_VectorVector_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_SearchForEdge_FoundAnEdge_) == 0x0009D8, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_SearchForEdge_FoundAnEdge_' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_SearchForEdge_foundEdgeLocation) == 0x0009E0, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_SearchForEdge_foundEdgeLocation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_SearchForEdge_foundEdgeNormal) == 0x0009F8, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_SearchForEdge_foundEdgeNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Not_PreBool_ReturnValue_6) == 0x000A10, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Not_PreBool_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Multiply_VectorFloat_ReturnValue_9) == 0x000A18, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Multiply_VectorFloat_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Add_VectorVector_ReturnValue_12) == 0x000A30, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Add_VectorVector_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_TraceDown_hitLocation) == 0x000A48, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_TraceDown_hitLocation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_TraceDown_hitNormal) == 0x000A60, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_TraceDown_hitNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_TraceDown_hitSomething) == 0x000A78, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_TraceDown_hitSomething' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_TraceTowardsDirection_hitLocation) == 0x000A80, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_TraceTowardsDirection_hitLocation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_TraceTowardsDirection_hitNormal) == 0x000A98, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_TraceTowardsDirection_hitNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_TraceTowardsDirection_lastLocation) == 0x000AB0, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_TraceTowardsDirection_lastLocation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_TraceTowardsDirection_traceDirection) == 0x000AC8, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_TraceTowardsDirection_traceDirection' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_TraceTowardsDirection_hitSomething) == 0x000AE0, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_TraceTowardsDirection_hitSomething' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_TraceTowardsDirection_targetReached) == 0x000AE1, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_TraceTowardsDirection_targetReached' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Less_DoubleDouble_A_ImplicitCast) == 0x000AE8, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Less_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x000AF0, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000AF8, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Divide_DoubleDouble_B_ImplicitCast_1) == 0x000B00, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Divide_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000B08, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Divide_DoubleDouble_B_ImplicitCast_2) == 0x000B10, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Divide_DoubleDouble_B_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Divide_DoubleDouble_B_ImplicitCast_3) == 0x000B18, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Divide_DoubleDouble_B_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Divide_DoubleDouble_B_ImplicitCast_4) == 0x000B20, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Divide_DoubleDouble_B_ImplicitCast_4' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Divide_DoubleDouble_A_ImplicitCast_1) == 0x000B28, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Divide_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_EqualEqual_VectorVector_ErrorTolerance_ImplicitCast) == 0x000B30, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_EqualEqual_VectorVector_ErrorTolerance_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_EqualEqual_VectorVector_ErrorTolerance_ImplicitCast_1) == 0x000B34, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_EqualEqual_VectorVector_ErrorTolerance_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast) == 0x000B38, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast) == 0x000B3C, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000B40, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C__SubStem_MinusDoCheckSegment, CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast) == 0x000B48, "Member 'StemSpline_BP_C__SubStem_MinusDoCheckSegment::CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast' has a wrong offset!");

// Function StemSpline_BP.StemSpline_BP_C.AddMeshesAlongSpline
// 0x1170 (0x1170 - 0x0000)
struct StemSpline_BP_C_AddMeshesAlongSpline final
{
public:
	class USplineComponent*                       SplineComp;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        PointHeightAboveSurface_x2;                        // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitNormal;                                         // 0x0010(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitLoc;                                            // 0x0028(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             SphereTraceHit;                                    // 0x0040(0x00E8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          AddCollision;                                      // 0x0128(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        OnePlusScaleRandom;                                // 0x0130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        OneMinusScaleRandom;                               // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SplineLength;                                      // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TraceHitNormal;                                    // 0x0148(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HeightAboveSurface;                                // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ScaleRandom;                                       // 0x0168(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LengthSecTolerance;                                // 0x0170(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LengthSection;                                     // 0x0178(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MeshAmount;                                        // 0x0180(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_184[0x4];                                      // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               base___RandomRotation;                             // 0x0188(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         MinDistBetweenMeshes;                              // 0x01A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A4[0x4];                                      // 0x01A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               BaseRotation;                                      // 0x01A8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UseWorldRot;                                       // 0x01C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C1[0x7];                                      // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   AddingMesh;                                        // 0x01C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       Spline;                                            // 0x01D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          RotateWithSpline;                                  // 0x01D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OnlyMidAir;                                        // 0x01D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OnlyNearSurfaces;                                  // 0x01DA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DB[0x5];                                      // 0x01DB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Scale;                                             // 0x01E0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Mesh;                                              // 0x01F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         I;                                                 // 0x0200(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RandomLength;                                      // 0x0204(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x020C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21C[0x4];                                      // 0x021C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0228(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0240(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0258(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0271(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_272[0x2];                                      // 0x0272(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0274(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27C[0x4];                                      // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0280(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0298(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x02B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x02C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x02E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x02E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x02F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x02F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x030C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_314[0x4];                                      // 0x0314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0318(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0330(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0348(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_349[0x7];                                      // 0x0349(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0350(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0358(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_ReturnValue; // 0x0360(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0364(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0368(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36C[0x4];                                      // 0x036C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector_X;                            // 0x0370(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0378(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0380(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x0388(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0390(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_394[0x4];                                      // 0x0394(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue; // 0x0398(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x03B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_AddWorldOffset_SweepHitResult;         // 0x03C8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x04B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x04B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_3;      // 0x04C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x04C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x04D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x04D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x04DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRangeFromStream_ReturnValue; // 0x04E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x04E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E5[0x3];                                      // 0x04E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x04E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EC[0x4];                                      // 0x04EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x04F0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x05D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D9[0x3];                                      // 0x05D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x05DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_AddLocalRotation_SweepHitResult;       // 0x05E0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1; // 0x06C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x06E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetUpVector_ReturnValue;                  // 0x06F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0710(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0714(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0718(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_VectorVector_ReturnValue;        // 0x071C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71D[0x3];                                      // 0x071D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0720(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult_1;     // 0x0738(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0820(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_TransformLocation_ReturnValue;            // 0x0880(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x0898(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89C[0x4];                                      // 0x089C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x08A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetDirectionAtDistanceAlongSpline_ReturnValue; // 0x08B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x08D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x08E8(0x0010)(ConstParm, ReferenceParm)
	float                                         CallFunc_BreakRotator_Roll_1;                      // 0x08F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x08FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x0900(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_904[0x4];                                      // 0x0904(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x0908(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetSplineLength_ReturnValue;              // 0x0920(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_924[0x4];                                      // 0x0924(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult_2;     // 0x0928(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TArray<class AActor*>                         Temp_object_Variable_1;                            // 0x0A10(0x0010)(ConstParm, ReferenceParm)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x0A20(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x0B08(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit_1;            // 0x0B09(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap_1;         // 0x0B0A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B0B[0x1];                                      // 0x0B0B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time_1;                    // 0x0B0C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance_1;                // 0x0B10(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B14[0x4];                                      // 0x0B14(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location_1;                // 0x0B18(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint_1;             // 0x0B30(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal_1;                  // 0x0B48(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal_1;            // 0x0B60(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat_1;                 // 0x0B78(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor_1;                // 0x0B80(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent_1;            // 0x0B88(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName_1;             // 0x0B90(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName_1;                // 0x0B98(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem_1;                 // 0x0BA0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex_1;            // 0x0BA4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex_1;               // 0x0BA8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BAC[0x4];                                      // 0x0BAC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart_1;              // 0x0BB0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd_1;                // 0x0BC8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0BE0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BE1[0x7];                                      // 0x0BE1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_2;       // 0x0BE8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue_1;               // 0x0C00(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0C60(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C61[0x7];                                      // 0x0C61(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_TransformLocation_ReturnValue_1;          // 0x0C68(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable_2;                            // 0x0C80(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;           // 0x0C90(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_SphereTraceSingle_OutHit;                 // 0x0CA8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_SphereTraceSingle_ReturnValue;            // 0x0D90(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D91[0x7];                                      // 0x0D91(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_SphereTraceSingle_OutHit_1;               // 0x0D98(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_SphereTraceSingle_ReturnValue_1;          // 0x0E80(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit_2;            // 0x0E81(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap_2;         // 0x0E82(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E83[0x1];                                      // 0x0E83(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time_2;                    // 0x0E84(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance_2;                // 0x0E88(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E8C[0x4];                                      // 0x0E8C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location_2;                // 0x0E90(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint_2;             // 0x0EA8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal_2;                  // 0x0EC0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal_2;            // 0x0ED8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat_2;                 // 0x0EF0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor_2;                // 0x0EF8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent_2;            // 0x0F00(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName_2;             // 0x0F08(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName_2;                // 0x0F10(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem_2;                 // 0x0F18(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex_2;            // 0x0F1C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex_2;               // 0x0F20(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F24[0x4];                                      // 0x0F24(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart_2;              // 0x0F28(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd_2;                // 0x0F40(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0F58(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0F5C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F5D[0x3];                                      // 0x0F5D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x0F60(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F64[0x4];                                      // 0x0F64(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMeshToSpawnAlong                      CallFunc_Array_Get_Item;                           // 0x0F68(0x0098)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x1000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x1004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1005[0x3];                                     // 0x1005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector_X_1;                          // 0x1008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x1010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x1018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_2;                          // 0x1020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_2;                          // 0x1028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_2;                          // 0x1030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_ReturnValue_1; // 0x1038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_ReturnValue_2; // 0x103C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_ReturnValue_3; // 0x1040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1044[0x4];                                     // 0x1044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_2;                // 0x1048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x1060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x1078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x107C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_107D[0x3];                                     // 0x107D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_3;            // 0x1080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1084[0x4];                                     // 0x1084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_2; // 0x1088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x10A0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x1100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1104[0x4];                                     // 0x1104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   CallFunc_AddComponent_ReturnValue;                 // 0x1108(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast; // 0x1110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast; // 0x1114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_VectorFloat_B_ImplicitCast;      // 0x1118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Roll_ImplicitCast;            // 0x1120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1124[0x4];                                     // 0x1124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_VariableSet_SplineLength_ImplicitCast;      // 0x1128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_scaleRandom_ImplicitCast;       // 0x1130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_lengthSection_ImplicitCast;     // 0x1138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_lengthSecTolerance_ImplicitCast; // 0x1140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_heightAboveSurface_ImplicitCast; // 0x1148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast_1; // 0x1150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast_2; // 0x1154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast_3; // 0x1158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast_1; // 0x115C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast_2; // 0x1160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast_3; // 0x1164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StemSpline_BP_C_AddMeshesAlongSpline) == 0x000010, "Wrong alignment on StemSpline_BP_C_AddMeshesAlongSpline");
static_assert(sizeof(StemSpline_BP_C_AddMeshesAlongSpline) == 0x001170, "Wrong size on StemSpline_BP_C_AddMeshesAlongSpline");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, SplineComp) == 0x000000, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::SplineComp' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, PointHeightAboveSurface_x2) == 0x000008, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::PointHeightAboveSurface_x2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, HitNormal) == 0x000010, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::HitNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, HitLoc) == 0x000028, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::HitLoc' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, SphereTraceHit) == 0x000040, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::SphereTraceHit' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, AddCollision) == 0x000128, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::AddCollision' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, OnePlusScaleRandom) == 0x000130, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::OnePlusScaleRandom' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, OneMinusScaleRandom) == 0x000138, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::OneMinusScaleRandom' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, SplineLength) == 0x000140, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::SplineLength' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, TraceHitNormal) == 0x000148, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::TraceHitNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, HeightAboveSurface) == 0x000160, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::HeightAboveSurface' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, ScaleRandom) == 0x000168, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::ScaleRandom' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, LengthSecTolerance) == 0x000170, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::LengthSecTolerance' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, LengthSection) == 0x000178, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::LengthSection' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, MeshAmount) == 0x000180, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::MeshAmount' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, base___RandomRotation) == 0x000188, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::base___RandomRotation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, MinDistBetweenMeshes) == 0x0001A0, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::MinDistBetweenMeshes' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, BaseRotation) == 0x0001A8, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::BaseRotation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, UseWorldRot) == 0x0001C0, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::UseWorldRot' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, AddingMesh) == 0x0001C8, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::AddingMesh' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, Spline) == 0x0001D0, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::Spline' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, RotateWithSpline) == 0x0001D8, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::RotateWithSpline' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, OnlyMidAir) == 0x0001D9, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::OnlyMidAir' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, OnlyNearSurfaces) == 0x0001DA, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::OnlyNearSurfaces' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, Scale) == 0x0001E0, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::Scale' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, Mesh) == 0x0001F8, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::Mesh' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, I) == 0x000200, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::I' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, RandomLength) == 0x000204, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::RandomLength' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, Temp_int_Array_Index_Variable) == 0x000208, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, Temp_int_Loop_Counter_Variable) == 0x00020C, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_Add_IntInt_ReturnValue) == 0x000210, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, Temp_int_Variable) == 0x000214, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_Add_IntInt_ReturnValue_1) == 0x000218, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000220, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000228, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000240, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_Add_VectorVector_ReturnValue) == 0x000258, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_bBlockingHit) == 0x000270, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_bInitialOverlap) == 0x000271, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_Time) == 0x000274, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_Distance) == 0x000278, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_Location) == 0x000280, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_ImpactPoint) == 0x000298, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_Normal) == 0x0002B0, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_ImpactNormal) == 0x0002C8, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_PhysMat) == 0x0002E0, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_HitActor) == 0x0002E8, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_HitComponent) == 0x0002F0, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_HitBoneName) == 0x0002F8, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_BoneName) == 0x000300, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_HitItem) == 0x000308, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_ElementIndex) == 0x00030C, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_FaceIndex) == 0x000310, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_TraceStart) == 0x000318, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_TraceEnd) == 0x000330, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BooleanOR_ReturnValue) == 0x000348, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000350, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000358, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_RandomFloatInRangeFromStream_ReturnValue) == 0x000360, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_RandomFloatInRangeFromStream_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, Temp_int_Variable_1) == 0x000364, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_Add_IntInt_ReturnValue_2) == 0x000368, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakVector_X) == 0x000370, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakVector_Y) == 0x000378, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakVector_Z) == 0x000380, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_MapRangeClamped_ReturnValue) == 0x000388, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000390, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue) == 0x000398, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x0003B0, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_K2_AddWorldOffset_SweepHitResult) == 0x0003C8, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_K2_AddWorldOffset_SweepHitResult' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x0004B0, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x0004B8, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_Multiply_DoubleDouble_ReturnValue_3) == 0x0004C0, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_Multiply_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x0004C8, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x0004D0, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_FTrunc_ReturnValue) == 0x0004D8, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_FTrunc_ReturnValue_1) == 0x0004DC, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_RandomIntegerInRangeFromStream_ReturnValue) == 0x0004E0, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_RandomIntegerInRangeFromStream_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0004E4, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_Add_IntInt_ReturnValue_3) == 0x0004E8, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x0004F0, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x0005D8, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x0005DC, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_K2_AddLocalRotation_SweepHitResult) == 0x0005E0, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_K2_AddLocalRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1) == 0x0006C8, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x0006E0, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_GetUpVector_ReturnValue) == 0x0006F8, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_GetUpVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakRotator_Roll) == 0x000710, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakRotator_Pitch) == 0x000714, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakRotator_Yaw) == 0x000718, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_NotEqual_VectorVector_ReturnValue) == 0x00071C, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_NotEqual_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_MakeRotator_ReturnValue) == 0x000720, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_K2_SetWorldRotation_SweepHitResult_1) == 0x000738, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_K2_SetWorldRotation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_GetTransform_ReturnValue) == 0x000820, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_TransformLocation_ReturnValue) == 0x000880, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_TransformLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x000898, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_Add_VectorVector_ReturnValue_1) == 0x0008A0, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_GetDirectionAtDistanceAlongSpline_ReturnValue) == 0x0008B8, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_GetDirectionAtDistanceAlongSpline_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x0008D0, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, Temp_object_Variable) == 0x0008E8, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakRotator_Roll_1) == 0x0008F8, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakRotator_Roll_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakRotator_Pitch_1) == 0x0008FC, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakRotator_Pitch_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakRotator_Yaw_1) == 0x000900, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakRotator_Yaw_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_MakeRotator_ReturnValue_1) == 0x000908, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_GetSplineLength_ReturnValue) == 0x000920, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_GetSplineLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_K2_SetWorldRotation_SweepHitResult_2) == 0x000928, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_K2_SetWorldRotation_SweepHitResult_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, Temp_object_Variable_1) == 0x000A10, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_LineTraceSingle_OutHit) == 0x000A20, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_LineTraceSingle_ReturnValue) == 0x000B08, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_bBlockingHit_1) == 0x000B09, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_bBlockingHit_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_bInitialOverlap_1) == 0x000B0A, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_bInitialOverlap_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_Time_1) == 0x000B0C, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_Time_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_Distance_1) == 0x000B10, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_Distance_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_Location_1) == 0x000B18, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_Location_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_ImpactPoint_1) == 0x000B30, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_ImpactPoint_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_Normal_1) == 0x000B48, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_Normal_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_ImpactNormal_1) == 0x000B60, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_ImpactNormal_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_PhysMat_1) == 0x000B78, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_PhysMat_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_HitActor_1) == 0x000B80, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_HitActor_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_HitComponent_1) == 0x000B88, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_HitComponent_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_HitBoneName_1) == 0x000B90, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_HitBoneName_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_BoneName_1) == 0x000B98, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_BoneName_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_HitItem_1) == 0x000BA0, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_HitItem_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_ElementIndex_1) == 0x000BA4, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_ElementIndex_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_FaceIndex_1) == 0x000BA8, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_FaceIndex_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_TraceStart_1) == 0x000BB0, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_TraceStart_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_TraceEnd_1) == 0x000BC8, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_TraceEnd_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BooleanOR_ReturnValue_1) == 0x000BE0, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_Multiply_VectorFloat_ReturnValue_2) == 0x000BE8, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_Multiply_VectorFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_GetTransform_ReturnValue_1) == 0x000C00, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_GetTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_SetStaticMesh_ReturnValue) == 0x000C60, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_TransformLocation_ReturnValue_1) == 0x000C68, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_TransformLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, Temp_object_Variable_2) == 0x000C80, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_Add_VectorVector_ReturnValue_2) == 0x000C90, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_SphereTraceSingle_OutHit) == 0x000CA8, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_SphereTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_SphereTraceSingle_ReturnValue) == 0x000D90, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_SphereTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_SphereTraceSingle_OutHit_1) == 0x000D98, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_SphereTraceSingle_OutHit_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_SphereTraceSingle_ReturnValue_1) == 0x000E80, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_SphereTraceSingle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_bBlockingHit_2) == 0x000E81, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_bBlockingHit_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_bInitialOverlap_2) == 0x000E82, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_bInitialOverlap_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_Time_2) == 0x000E84, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_Time_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_Distance_2) == 0x000E88, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_Distance_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_Location_2) == 0x000E90, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_Location_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_ImpactPoint_2) == 0x000EA8, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_ImpactPoint_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_Normal_2) == 0x000EC0, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_Normal_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_ImpactNormal_2) == 0x000ED8, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_ImpactNormal_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_PhysMat_2) == 0x000EF0, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_PhysMat_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_HitActor_2) == 0x000EF8, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_HitActor_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_HitComponent_2) == 0x000F00, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_HitComponent_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_HitBoneName_2) == 0x000F08, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_HitBoneName_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_BoneName_2) == 0x000F10, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_BoneName_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_HitItem_2) == 0x000F18, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_HitItem_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_ElementIndex_2) == 0x000F1C, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_ElementIndex_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_FaceIndex_2) == 0x000F20, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_FaceIndex_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_TraceStart_2) == 0x000F28, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_TraceStart_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakHitResult_TraceEnd_2) == 0x000F40, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakHitResult_TraceEnd_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, Temp_int_Variable_2) == 0x000F58, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_Less_IntInt_ReturnValue) == 0x000F5C, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_Add_IntInt_ReturnValue_4) == 0x000F60, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_Array_Get_Item) == 0x000F68, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_Array_Length_ReturnValue) == 0x001000, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_Less_IntInt_ReturnValue_1) == 0x001004, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakVector_X_1) == 0x001008, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakVector_Y_1) == 0x001010, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakVector_Z_1) == 0x001018, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakVector_X_2) == 0x001020, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakVector_Y_2) == 0x001028, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_BreakVector_Z_2) == 0x001030, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_RandomFloatInRangeFromStream_ReturnValue_1) == 0x001038, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_RandomFloatInRangeFromStream_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_RandomFloatInRangeFromStream_ReturnValue_2) == 0x00103C, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_RandomFloatInRangeFromStream_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_RandomFloatInRangeFromStream_ReturnValue_3) == 0x001040, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_RandomFloatInRangeFromStream_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_MakeRotator_ReturnValue_2) == 0x001048, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_MakeRotator_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_ComposeRotators_ReturnValue) == 0x001060, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_Array_Add_ReturnValue) == 0x001078, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_Array_Contains_ReturnValue) == 0x00107C, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_Conv_IntToFloat_ReturnValue_3) == 0x001080, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_Conv_IntToFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_2) == 0x001088, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_MakeTransform_ReturnValue) == 0x0010A0, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_Subtract_IntInt_ReturnValue) == 0x001100, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_AddComponent_ReturnValue) == 0x001108, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast) == 0x001110, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast) == 0x001114, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_Multiply_VectorFloat_B_ImplicitCast) == 0x001118, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_Multiply_VectorFloat_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_MakeRotator_Roll_ImplicitCast) == 0x001120, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_MakeRotator_Roll_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, K2Node_VariableSet_SplineLength_ImplicitCast) == 0x001128, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::K2Node_VariableSet_SplineLength_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, K2Node_VariableSet_scaleRandom_ImplicitCast) == 0x001130, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::K2Node_VariableSet_scaleRandom_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, K2Node_VariableSet_lengthSection_ImplicitCast) == 0x001138, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::K2Node_VariableSet_lengthSection_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, K2Node_VariableSet_lengthSecTolerance_ImplicitCast) == 0x001140, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::K2Node_VariableSet_lengthSecTolerance_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, K2Node_VariableSet_heightAboveSurface_ImplicitCast) == 0x001148, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::K2Node_VariableSet_heightAboveSurface_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast_1) == 0x001150, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast_2) == 0x001154, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast_3) == 0x001158, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast_1) == 0x00115C, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast_2) == 0x001160, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddMeshesAlongSpline, CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast_3) == 0x001164, "Member 'StemSpline_BP_C_AddMeshesAlongSpline::CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast_3' has a wrong offset!");

// Function StemSpline_BP.StemSpline_BP_C.AddSkelMeshesAlongSpline
// 0x10E0 (0x10E0 - 0x0000)
struct StemSpline_BP_C_AddSkelMeshesAlongSpline final
{
public:
	class USplineComponent*                       SplineComp;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TraceHitNormal;                                    // 0x0008(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HeightAboveSurface;                                // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ScaleRandom;                                       // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LengthSecTolerance;                                // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LengthSection;                                     // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MeshAmount;                                        // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               base___RandomRotation;                             // 0x0048(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         MinDistBetweenMeshes;                              // 0x0060(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               BaseRotation;                                      // 0x0068(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UseWorldRot;                                       // 0x0080(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPoseableMeshComponent*                 AddingMesh;                                        // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       Spline;                                            // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          RotateWithSpline;                                  // 0x0098(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OnlyMidAir;                                        // 0x0099(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OnlyNearSurfaces;                                  // 0x009A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B[0x5];                                       // 0x009B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Scale;                                             // 0x00A0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                          MeshSkel;                                          // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         I;                                                 // 0x00C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RandomLength;                                      // 0x00C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             Temp_struct_Variable;                              // 0x00D0(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_134[0x4];                                      // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBillboardComponent*                    CallFunc_AddComponent_ReturnValue;                 // 0x0138(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetBoneLocationByName_ReturnValue;        // 0x0148(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_WorldLocToSplineTimeApprox_bestTime;      // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAtTime_ReturnValue;            // 0x0168(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0180(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_BreakVector_X;                            // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28C[0x4];                                      // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue; // 0x0290(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x02A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_AddWorldOffset_SweepHitResult;         // 0x02C0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x03A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x03B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x03B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B9[0x3];                                      // 0x03B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomFloatInRangeFromStream_ReturnValue; // 0x03BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x03C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x03C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C5[0x3];                                      // 0x03C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x03C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CC[0x4];                                      // 0x03CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x03D0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x04B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B9[0x3];                                      // 0x04B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x04BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x04C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1; // 0x04C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_AddLocalRotation_SweepHitResult;       // 0x04E0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x05C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetUpVector_ReturnValue;                  // 0x05E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x05F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x05FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0600(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_VectorVector_ReturnValue;        // 0x0604(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_605[0x3];                                      // 0x0605(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0608(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult_1;     // 0x0620(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0708(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x070C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0710(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_TransformLocation_ReturnValue;            // 0x0770(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x0788(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78C[0x4];                                      // 0x078C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0790(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetDirectionAtDistanceAlongSpline_ReturnValue; // 0x07A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x07C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll_1;                      // 0x07D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x07DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x07E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSplineLength_ReturnValue;              // 0x07E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x07E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0800(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult_2;     // 0x0808(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x08F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_3;      // 0x08F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0900(0x0010)(ConstParm, ReferenceParm)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x0910(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x0918(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0920(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x0924(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable_1;                            // 0x0928(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_RandomIntegerInRangeFromStream_ReturnValue; // 0x0938(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_93C[0x4];                                      // 0x093C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable_2;                            // 0x0940(0x0010)(ConstParm, ReferenceParm)
	struct FHitResult                             CallFunc_SphereTraceSingle_OutHit;                 // 0x0950(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_SphereTraceSingle_ReturnValue;            // 0x0A38(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0A39(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0A3A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A3B[0x1];                                      // 0x0A3B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0A3C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0A40(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A44[0x4];                                      // 0x0A44(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0A48(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0A60(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0A78(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0A90(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0AA8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0AB0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0AB8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0AC0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0AC8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0AD0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0AD4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0AD8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_ADC[0x4];                                      // 0x0ADC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0AE0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0AF8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x0B10(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0B28(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0B40(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x0B58(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x0C40(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit_1;            // 0x0C41(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap_1;         // 0x0C42(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C43[0x1];                                      // 0x0C43(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time_1;                    // 0x0C44(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance_1;                // 0x0C48(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C4C[0x4];                                      // 0x0C4C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location_1;                // 0x0C50(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint_1;             // 0x0C68(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal_1;                  // 0x0C80(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal_1;            // 0x0C98(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat_1;                 // 0x0CB0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor_1;                // 0x0CB8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent_1;            // 0x0CC0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName_1;             // 0x0CC8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName_1;                // 0x0CD0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem_1;                 // 0x0CD8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex_1;            // 0x0CDC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex_1;               // 0x0CE0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CE4[0x4];                                      // 0x0CE4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart_1;              // 0x0CE8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd_1;                // 0x0D00(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0D18(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D19[0x7];                                      // 0x0D19(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_2;       // 0x0D20(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D38[0x8];                                      // 0x0D38(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue_1;               // 0x0D40(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_TransformLocation_ReturnValue_1;          // 0x0DA0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;           // 0x0DB8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x0DD0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DD4[0x4];                                      // 0x0DD4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_SphereTraceSingle_OutHit_1;               // 0x0DD8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_SphereTraceSingle_ReturnValue_1;          // 0x0EC0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EC1[0x7];                                      // 0x0EC1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSkelMeshToSpawnAlong                  CallFunc_Array_Get_Item;                           // 0x0EC8(0x0098)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0F60(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0F64(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F65[0x3];                                      // 0x0F65(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector_X_1;                          // 0x0F68(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x0F70(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x0F78(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_2;                          // 0x0F80(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_2;                          // 0x0F88(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_2;                          // 0x0F90(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_ReturnValue_1; // 0x0F98(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_ReturnValue_2; // 0x0F9C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_ReturnValue_3; // 0x0FA0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FA4[0x4];                                      // 0x0FA4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_2;                // 0x0FA8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x0FC0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0FD8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0FDC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FDD[0x3];                                      // 0x0FDD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_3;            // 0x0FE0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FE4[0x4];                                      // 0x0FE4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_2; // 0x0FE8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x1000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1004[0xC];                                     // 0x1004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x1010(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPoseableMeshComponent*                 CallFunc_AddComponent_ReturnValue_1;               // 0x1070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetLocationAtTime_Time_ImplicitCast;      // 0x1078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Roll_ImplicitCast;            // 0x107C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast; // 0x1080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast; // 0x1084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_VectorFloat_B_ImplicitCast;      // 0x1088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x1090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x1098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x10A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_scaleRandom_ImplicitCast;       // 0x10A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_lengthSection_ImplicitCast;     // 0x10B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_lengthSecTolerance_ImplicitCast; // 0x10B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_heightAboveSurface_ImplicitCast; // 0x10C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast_1; // 0x10C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast_2; // 0x10CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast_3; // 0x10D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast_1; // 0x10D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast_2; // 0x10D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast_3; // 0x10DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StemSpline_BP_C_AddSkelMeshesAlongSpline) == 0x000010, "Wrong alignment on StemSpline_BP_C_AddSkelMeshesAlongSpline");
static_assert(sizeof(StemSpline_BP_C_AddSkelMeshesAlongSpline) == 0x0010E0, "Wrong size on StemSpline_BP_C_AddSkelMeshesAlongSpline");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, SplineComp) == 0x000000, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::SplineComp' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, TraceHitNormal) == 0x000008, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::TraceHitNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, HeightAboveSurface) == 0x000020, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::HeightAboveSurface' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, ScaleRandom) == 0x000028, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::ScaleRandom' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, LengthSecTolerance) == 0x000030, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::LengthSecTolerance' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, LengthSection) == 0x000038, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::LengthSection' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, MeshAmount) == 0x000040, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::MeshAmount' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, base___RandomRotation) == 0x000048, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::base___RandomRotation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, MinDistBetweenMeshes) == 0x000060, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::MinDistBetweenMeshes' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, BaseRotation) == 0x000068, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::BaseRotation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, UseWorldRot) == 0x000080, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::UseWorldRot' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, AddingMesh) == 0x000088, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::AddingMesh' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, Spline) == 0x000090, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::Spline' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, RotateWithSpline) == 0x000098, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::RotateWithSpline' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, OnlyMidAir) == 0x000099, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::OnlyMidAir' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, OnlyNearSurfaces) == 0x00009A, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::OnlyNearSurfaces' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, Scale) == 0x0000A0, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::Scale' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, MeshSkel) == 0x0000B8, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::MeshSkel' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, I) == 0x0000C0, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::I' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, RandomLength) == 0x0000C4, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::RandomLength' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, Temp_int_Variable) == 0x0000C8, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Add_IntInt_ReturnValue) == 0x0000CC, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, Temp_struct_Variable) == 0x0000D0, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, Temp_int_Variable_1) == 0x000130, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_AddComponent_ReturnValue) == 0x000138, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Add_IntInt_ReturnValue_1) == 0x000140, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, Temp_int_Array_Index_Variable) == 0x000144, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_GetBoneLocationByName_ReturnValue) == 0x000148, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_GetBoneLocationByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_WorldLocToSplineTimeApprox_bestTime) == 0x000160, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_WorldLocToSplineTimeApprox_bestTime' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_GetLocationAtTime_ReturnValue) == 0x000168, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_GetLocationAtTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000180, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakVector_X) == 0x000268, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakVector_Y) == 0x000270, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakVector_Z) == 0x000278, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_MapRangeClamped_ReturnValue) == 0x000280, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000288, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue) == 0x000290, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0002A8, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_K2_AddWorldOffset_SweepHitResult) == 0x0002C0, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_K2_AddWorldOffset_SweepHitResult' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0003A8, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0003B0, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0003B8, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_RandomFloatInRangeFromStream_ReturnValue) == 0x0003BC, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_RandomFloatInRangeFromStream_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, Temp_int_Variable_2) == 0x0003C0, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Less_IntInt_ReturnValue) == 0x0003C4, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Add_IntInt_ReturnValue_2) == 0x0003C8, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x0003D0, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x0004B8, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x0004BC, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0004C0, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1) == 0x0004C8, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_K2_AddLocalRotation_SweepHitResult) == 0x0004E0, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_K2_AddLocalRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x0005C8, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_GetUpVector_ReturnValue) == 0x0005E0, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_GetUpVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakRotator_Roll) == 0x0005F8, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakRotator_Pitch) == 0x0005FC, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakRotator_Yaw) == 0x000600, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_NotEqual_VectorVector_ReturnValue) == 0x000604, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_NotEqual_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_MakeRotator_ReturnValue) == 0x000608, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_K2_SetWorldRotation_SweepHitResult_1) == 0x000620, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_K2_SetWorldRotation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, Temp_int_Loop_Counter_Variable) == 0x000708, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Add_IntInt_ReturnValue_3) == 0x00070C, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_GetTransform_ReturnValue) == 0x000710, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_TransformLocation_ReturnValue) == 0x000770, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_TransformLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x000788, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Add_VectorVector_ReturnValue) == 0x000790, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_GetDirectionAtDistanceAlongSpline_ReturnValue) == 0x0007A8, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_GetDirectionAtDistanceAlongSpline_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x0007C0, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakRotator_Roll_1) == 0x0007D8, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakRotator_Roll_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakRotator_Pitch_1) == 0x0007DC, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakRotator_Pitch_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakRotator_Yaw_1) == 0x0007E0, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakRotator_Yaw_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_GetSplineLength_ReturnValue) == 0x0007E4, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_GetSplineLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_MakeRotator_ReturnValue_1) == 0x0007E8, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000800, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_K2_SetWorldRotation_SweepHitResult_2) == 0x000808, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_K2_SetWorldRotation_SweepHitResult_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x0008F0, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Multiply_DoubleDouble_ReturnValue_3) == 0x0008F8, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Multiply_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, Temp_object_Variable) == 0x000900, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x000910, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000918, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_FTrunc_ReturnValue) == 0x000920, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_FTrunc_ReturnValue_1) == 0x000924, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, Temp_object_Variable_1) == 0x000928, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_RandomIntegerInRangeFromStream_ReturnValue) == 0x000938, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_RandomIntegerInRangeFromStream_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, Temp_object_Variable_2) == 0x000940, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_SphereTraceSingle_OutHit) == 0x000950, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_SphereTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_SphereTraceSingle_ReturnValue) == 0x000A38, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_SphereTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_bBlockingHit) == 0x000A39, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_bInitialOverlap) == 0x000A3A, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_Time) == 0x000A3C, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_Distance) == 0x000A40, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_Location) == 0x000A48, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_ImpactPoint) == 0x000A60, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_Normal) == 0x000A78, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_ImpactNormal) == 0x000A90, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_PhysMat) == 0x000AA8, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_HitActor) == 0x000AB0, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_HitComponent) == 0x000AB8, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_HitBoneName) == 0x000AC0, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_BoneName) == 0x000AC8, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_HitItem) == 0x000AD0, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_ElementIndex) == 0x000AD4, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_FaceIndex) == 0x000AD8, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_TraceStart) == 0x000AE0, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_TraceEnd) == 0x000AF8, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x000B10, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000B28, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000B40, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_LineTraceSingle_OutHit) == 0x000B58, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_LineTraceSingle_ReturnValue) == 0x000C40, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_bBlockingHit_1) == 0x000C41, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_bBlockingHit_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_bInitialOverlap_1) == 0x000C42, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_bInitialOverlap_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_Time_1) == 0x000C44, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_Time_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_Distance_1) == 0x000C48, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_Distance_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_Location_1) == 0x000C50, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_Location_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_ImpactPoint_1) == 0x000C68, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_ImpactPoint_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_Normal_1) == 0x000C80, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_Normal_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_ImpactNormal_1) == 0x000C98, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_ImpactNormal_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_PhysMat_1) == 0x000CB0, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_PhysMat_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_HitActor_1) == 0x000CB8, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_HitActor_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_HitComponent_1) == 0x000CC0, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_HitComponent_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_HitBoneName_1) == 0x000CC8, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_HitBoneName_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_BoneName_1) == 0x000CD0, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_BoneName_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_HitItem_1) == 0x000CD8, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_HitItem_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_ElementIndex_1) == 0x000CDC, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_ElementIndex_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_FaceIndex_1) == 0x000CE0, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_FaceIndex_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_TraceStart_1) == 0x000CE8, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_TraceStart_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakHitResult_TraceEnd_1) == 0x000D00, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakHitResult_TraceEnd_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BooleanOR_ReturnValue) == 0x000D18, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Multiply_VectorFloat_ReturnValue_2) == 0x000D20, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Multiply_VectorFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_GetTransform_ReturnValue_1) == 0x000D40, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_GetTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_TransformLocation_ReturnValue_1) == 0x000DA0, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_TransformLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Add_VectorVector_ReturnValue_2) == 0x000DB8, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Add_IntInt_ReturnValue_4) == 0x000DD0, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_SphereTraceSingle_OutHit_1) == 0x000DD8, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_SphereTraceSingle_OutHit_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_SphereTraceSingle_ReturnValue_1) == 0x000EC0, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_SphereTraceSingle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Array_Get_Item) == 0x000EC8, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Array_Length_ReturnValue) == 0x000F60, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Less_IntInt_ReturnValue_1) == 0x000F64, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakVector_X_1) == 0x000F68, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakVector_Y_1) == 0x000F70, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakVector_Z_1) == 0x000F78, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakVector_X_2) == 0x000F80, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakVector_Y_2) == 0x000F88, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_BreakVector_Z_2) == 0x000F90, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_RandomFloatInRangeFromStream_ReturnValue_1) == 0x000F98, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_RandomFloatInRangeFromStream_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_RandomFloatInRangeFromStream_ReturnValue_2) == 0x000F9C, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_RandomFloatInRangeFromStream_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_RandomFloatInRangeFromStream_ReturnValue_3) == 0x000FA0, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_RandomFloatInRangeFromStream_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_MakeRotator_ReturnValue_2) == 0x000FA8, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_MakeRotator_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_ComposeRotators_ReturnValue) == 0x000FC0, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Array_Add_ReturnValue) == 0x000FD8, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Array_Contains_ReturnValue) == 0x000FDC, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Conv_IntToFloat_ReturnValue_3) == 0x000FE0, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Conv_IntToFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_2) == 0x000FE8, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Subtract_IntInt_ReturnValue) == 0x001000, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_MakeTransform_ReturnValue) == 0x001010, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_AddComponent_ReturnValue_1) == 0x001070, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_AddComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_GetLocationAtTime_Time_ImplicitCast) == 0x001078, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_GetLocationAtTime_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_MakeRotator_Roll_ImplicitCast) == 0x00107C, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_MakeRotator_Roll_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast) == 0x001080, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast) == 0x001084, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Multiply_VectorFloat_B_ImplicitCast) == 0x001088, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Multiply_VectorFloat_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x001090, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x001098, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1) == 0x0010A0, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, K2Node_VariableSet_scaleRandom_ImplicitCast) == 0x0010A8, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::K2Node_VariableSet_scaleRandom_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, K2Node_VariableSet_lengthSection_ImplicitCast) == 0x0010B0, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::K2Node_VariableSet_lengthSection_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, K2Node_VariableSet_lengthSecTolerance_ImplicitCast) == 0x0010B8, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::K2Node_VariableSet_lengthSecTolerance_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, K2Node_VariableSet_heightAboveSurface_ImplicitCast) == 0x0010C0, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::K2Node_VariableSet_heightAboveSurface_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast_1) == 0x0010C8, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast_2) == 0x0010CC, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast_3) == 0x0010D0, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast_1) == 0x0010D4, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast_2) == 0x0010D8, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSkelMeshesAlongSpline, CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast_3) == 0x0010DC, "Member 'StemSpline_BP_C_AddSkelMeshesAlongSpline::CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast_3' has a wrong offset!");

// Function StemSpline_BP.StemSpline_BP_C.AddSplineMeshes
// 0x05C0 (0x05C0 - 0x0000)
struct StemSpline_BP_C_AddSplineMeshes final
{
public:
	class USplineComponent*                       SplineComponent;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             ActorTransform;                                    // 0x0010(0x0060)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TangentMultiplier;                                 // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseLowPoly;                                        // 0x0078(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            MeshToSet;                                         // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USplineMeshComponent*                   AddingMesh;                                        // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        MeshStartTime;                                     // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EdgeTime;                                          // 0x0098(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                EndTan;                                            // 0x00A0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                EndLoc;                                            // 0x00B8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartTan;                                          // 0x00D0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartLoc;                                          // 0x00E8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         J;                                                 // 0x0100(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MeshaddStem2;                                      // 0x0104(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MeshAddStep;                                       // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LastIndex;                                         // 0x0110(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         I;                                                 // 0x0114(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       SplineComp;                                        // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0120(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x0138(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue;      // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_151[0x3];                                      // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_159[0x7];                                      // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetDirectionAtTime_ReturnValue;           // 0x0160(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue_1;    // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x017A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_17B[0x1];                                      // 0x017B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue_1;            // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_181[0xF];                                      // 0x0181(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0190(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplineMeshComponent*                   CallFunc_AddComponent_ReturnValue;                 // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FC[0x4];                                      // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;              // 0x0208(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Array_Get_Item;                           // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_221[0x7];                                      // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_MapRangeClamped_ReturnValue_1;            // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue_1;            // 0x0230(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0244(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_245[0x3];                                      // 0x0245(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24C[0x4];                                      // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            K2Node_Select_Default;                             // 0x0250(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_259[0x7];                                      // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0260(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0278(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0290(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x02A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue_2;            // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x02C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C5[0x3];                                      // 0x02C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x02C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue_1;                     // 0x02E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x02F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0310(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetTangentAtTime_ReturnValue;             // 0x0328(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Array_Get_Item_1;                         // 0x0340(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0348(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_349[0x7];                                      // 0x0349(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetLocationAtTime_ReturnValue;            // 0x0350(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0368(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x036C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36D[0x3];                                      // 0x036D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0370(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_374[0x4];                                      // 0x0374(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_VSize_ReturnValue;                        // 0x0378(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0380(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_381[0x7];                                      // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_VSize_ReturnValue_1;                      // 0x0388(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x0390(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_391[0x7];                                      // 0x0391(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_SelectVector_ReturnValue;                 // 0x0398(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x03B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B1[0x7];                                      // 0x03B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            K2Node_Select_Default_1;                           // 0x03B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_2;       // 0x03C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SelectVector_ReturnValue_1;               // 0x03D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_3;       // 0x03F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_4;       // 0x0408(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SelectVector_ReturnValue_2;               // 0x0420(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_5;       // 0x0438(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0450(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0451(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0452(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_453[0x5];                                      // 0x0453(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0458(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0460(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FindClosestValue_closestValueIndex_;      // 0x0468(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x046C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46D[0x3];                                      // 0x046D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0470(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0474(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Array_Get_Item_2;                         // 0x0478(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetTangentAtTime_ReturnValue_1;           // 0x0480(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAtTime_ReturnValue_1;          // 0x0498(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x04B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x04B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B5[0x3];                                      // 0x04B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Array_Get_Item_3;                         // 0x04B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x04C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x04C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SelectVector_ReturnValue_3;               // 0x04C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x04E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E1[0x3];                                      // 0x04E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x04E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x04E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E9[0x3];                                      // 0x04E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x04EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Array_Get_Item_4;                         // 0x04F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            K2Node_Select_Default_2;                           // 0x04F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumberOfSplinePoints_ReturnValue;      // 0x0500(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_504[0x4];                                      // 0x0504(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0508(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0510(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0514(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0518(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51C[0x4];                                      // 0x051C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0520(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0528(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52C[0x4];                                      // 0x052C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x0530(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_IntFloat_ReturnValue_2;          // 0x0538(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0540(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_544[0x4];                                      // 0x0544(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0548(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x0550(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_551[0x7];                                      // 0x0551(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0558(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_2;        // 0x0560(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_5;          // 0x0568(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_569[0x7];                                      // 0x0569(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x0570(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_Select_Default_3;                           // 0x0580(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_EqualEqual_VectorVector_ErrorTolerance_ImplicitCast; // 0x0590(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_EqualEqual_VectorVector_ErrorTolerance_ImplicitCast_1; // 0x0594(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDirectionAtTime_Time_ImplicitCast;     // 0x0598(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_LinearColorLerp_Alpha_ImplicitCast;       // 0x059C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_LinearColorLerp_Alpha_ImplicitCast_1;     // 0x05A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetEndRoll_EndRoll_ImplicitCast;          // 0x05A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTangentAtTime_Time_ImplicitCast;       // 0x05A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetLocationAtTime_Time_ImplicitCast;      // 0x05AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetStartRoll_StartRoll_ImplicitCast;      // 0x05B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetLocationAtTime_Time_ImplicitCast_1;    // 0x05B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTangentAtTime_Time_ImplicitCast_1;     // 0x05B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StemSpline_BP_C_AddSplineMeshes) == 0x000010, "Wrong alignment on StemSpline_BP_C_AddSplineMeshes");
static_assert(sizeof(StemSpline_BP_C_AddSplineMeshes) == 0x0005C0, "Wrong size on StemSpline_BP_C_AddSplineMeshes");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, SplineComponent) == 0x000000, "Member 'StemSpline_BP_C_AddSplineMeshes::SplineComponent' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, ActorTransform) == 0x000010, "Member 'StemSpline_BP_C_AddSplineMeshes::ActorTransform' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, TangentMultiplier) == 0x000070, "Member 'StemSpline_BP_C_AddSplineMeshes::TangentMultiplier' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, UseLowPoly) == 0x000078, "Member 'StemSpline_BP_C_AddSplineMeshes::UseLowPoly' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, MeshToSet) == 0x000080, "Member 'StemSpline_BP_C_AddSplineMeshes::MeshToSet' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, AddingMesh) == 0x000088, "Member 'StemSpline_BP_C_AddSplineMeshes::AddingMesh' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, MeshStartTime) == 0x000090, "Member 'StemSpline_BP_C_AddSplineMeshes::MeshStartTime' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, EdgeTime) == 0x000098, "Member 'StemSpline_BP_C_AddSplineMeshes::EdgeTime' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, EndTan) == 0x0000A0, "Member 'StemSpline_BP_C_AddSplineMeshes::EndTan' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, EndLoc) == 0x0000B8, "Member 'StemSpline_BP_C_AddSplineMeshes::EndLoc' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, StartTan) == 0x0000D0, "Member 'StemSpline_BP_C_AddSplineMeshes::StartTan' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, StartLoc) == 0x0000E8, "Member 'StemSpline_BP_C_AddSplineMeshes::StartLoc' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, J) == 0x000100, "Member 'StemSpline_BP_C_AddSplineMeshes::J' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, MeshaddStem2) == 0x000104, "Member 'StemSpline_BP_C_AddSplineMeshes::MeshaddStem2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, MeshAddStep) == 0x000108, "Member 'StemSpline_BP_C_AddSplineMeshes::MeshAddStep' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, LastIndex) == 0x000110, "Member 'StemSpline_BP_C_AddSplineMeshes::LastIndex' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, I) == 0x000114, "Member 'StemSpline_BP_C_AddSplineMeshes::I' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, SplineComp) == 0x000118, "Member 'StemSpline_BP_C_AddSplineMeshes::SplineComp' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_FindLookAtRotation_ReturnValue) == 0x000120, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Conv_RotatorToVector_ReturnValue) == 0x000138, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Conv_RotatorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_EqualEqual_VectorVector_ReturnValue) == 0x000150, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_EqualEqual_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Array_LastIndex_ReturnValue) == 0x000154, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000158, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_GetDirectionAtTime_ReturnValue) == 0x000160, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_GetDirectionAtTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000178, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_EqualEqual_VectorVector_ReturnValue_1) == 0x000179, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_EqualEqual_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_BooleanOR_ReturnValue) == 0x00017A, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Array_LastIndex_ReturnValue_1) == 0x00017C, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Array_LastIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000180, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_GetTransform_ReturnValue) == 0x000190, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_AddComponent_ReturnValue) == 0x0001F0, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_SelectInt_ReturnValue) == 0x0001F8, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_MapRangeClamped_ReturnValue) == 0x000200, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_LinearColorLerp_ReturnValue) == 0x000208, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_LinearColorLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Array_Get_Item) == 0x000218, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, Temp_bool_Variable) == 0x000220, "Member 'StemSpline_BP_C_AddSplineMeshes::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_MapRangeClamped_ReturnValue_1) == 0x000228, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_MapRangeClamped_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_LinearColorLerp_ReturnValue_1) == 0x000230, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_LinearColorLerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, Temp_int_Loop_Counter_Variable) == 0x000240, "Member 'StemSpline_BP_C_AddSplineMeshes::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, Temp_bool_Variable_1) == 0x000244, "Member 'StemSpline_BP_C_AddSplineMeshes::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Add_IntInt_ReturnValue) == 0x000248, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, K2Node_Select_Default) == 0x000250, "Member 'StemSpline_BP_C_AddSplineMeshes::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x000258, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000260, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Normal_ReturnValue) == 0x000278, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000290, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Add_VectorVector_ReturnValue) == 0x0002A8, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Array_LastIndex_ReturnValue_2) == 0x0002C0, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Array_LastIndex_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_EqualEqual_IntInt_ReturnValue_4) == 0x0002C4, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_EqualEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x0002C8, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Normal_ReturnValue_1) == 0x0002E0, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Normal_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x0002F8, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000310, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_GetTangentAtTime_ReturnValue) == 0x000328, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_GetTangentAtTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Array_Get_Item_1) == 0x000340, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_SetStaticMesh_ReturnValue) == 0x000348, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_GetLocationAtTime_ReturnValue) == 0x000350, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_GetLocationAtTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, Temp_int_Variable) == 0x000368, "Member 'StemSpline_BP_C_AddSplineMeshes::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00036C, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Add_IntInt_ReturnValue_1) == 0x000370, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_VSize_ReturnValue) == 0x000378, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000380, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_VSize_ReturnValue_1) == 0x000388, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_VSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Less_DoubleDouble_ReturnValue_1) == 0x000390, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Less_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_SelectVector_ReturnValue) == 0x000398, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_SelectVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, Temp_bool_Variable_2) == 0x0003B0, "Member 'StemSpline_BP_C_AddSplineMeshes::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, K2Node_Select_Default_1) == 0x0003B8, "Member 'StemSpline_BP_C_AddSplineMeshes::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Multiply_VectorFloat_ReturnValue_2) == 0x0003C0, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Multiply_VectorFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_SelectVector_ReturnValue_1) == 0x0003D8, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_SelectVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Multiply_VectorFloat_ReturnValue_3) == 0x0003F0, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Multiply_VectorFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Multiply_VectorFloat_ReturnValue_4) == 0x000408, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Multiply_VectorFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_SelectVector_ReturnValue_2) == 0x000420, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_SelectVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Multiply_VectorFloat_ReturnValue_5) == 0x000438, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Multiply_VectorFloat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Array_Contains_ReturnValue) == 0x000450, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Not_PreBool_ReturnValue) == 0x000451, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_BooleanAND_ReturnValue) == 0x000452, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_SelectFloat_ReturnValue) == 0x000458, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000460, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_FindClosestValue_closestValueIndex_) == 0x000468, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_FindClosestValue_closestValueIndex_' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Greater_IntInt_ReturnValue) == 0x00046C, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Subtract_IntInt_ReturnValue) == 0x000470, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, Temp_int_Array_Index_Variable) == 0x000474, "Member 'StemSpline_BP_C_AddSplineMeshes::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Array_Get_Item_2) == 0x000478, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_GetTangentAtTime_ReturnValue_1) == 0x000480, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_GetTangentAtTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_GetLocationAtTime_ReturnValue_1) == 0x000498, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_GetLocationAtTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Array_Length_ReturnValue) == 0x0004B0, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Less_IntInt_ReturnValue) == 0x0004B4, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Array_Get_Item_3) == 0x0004B8, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Array_Length_ReturnValue_1) == 0x0004C0, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, Temp_int_Loop_Counter_Variable_1) == 0x0004C4, "Member 'StemSpline_BP_C_AddSplineMeshes::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_SelectVector_ReturnValue_3) == 0x0004C8, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_SelectVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Less_IntInt_ReturnValue_1) == 0x0004E0, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Add_IntInt_ReturnValue_2) == 0x0004E4, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, Temp_bool_Variable_3) == 0x0004E8, "Member 'StemSpline_BP_C_AddSplineMeshes::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, Temp_int_Array_Index_Variable_1) == 0x0004EC, "Member 'StemSpline_BP_C_AddSplineMeshes::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Array_Get_Item_4) == 0x0004F0, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, K2Node_Select_Default_2) == 0x0004F8, "Member 'StemSpline_BP_C_AddSplineMeshes::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_GetNumberOfSplinePoints_ReturnValue) == 0x000500, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_GetNumberOfSplinePoints_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000508, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_FTrunc_ReturnValue) == 0x000510, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Add_IntInt_ReturnValue_3) == 0x000514, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000518, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000520, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Array_Add_ReturnValue) == 0x000528, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x000530, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Multiply_IntFloat_ReturnValue_2) == 0x000538, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Multiply_IntFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Array_Add_ReturnValue_1) == 0x000540, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000548, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x000550, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_SelectFloat_ReturnValue_1) == 0x000558, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Divide_DoubleDouble_ReturnValue_2) == 0x000560, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Divide_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_EqualEqual_IntInt_ReturnValue_5) == 0x000568, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_EqualEqual_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_Multiply_Vector2DFloat_ReturnValue) == 0x000570, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_Multiply_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, K2Node_Select_Default_3) == 0x000580, "Member 'StemSpline_BP_C_AddSplineMeshes::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_EqualEqual_VectorVector_ErrorTolerance_ImplicitCast) == 0x000590, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_EqualEqual_VectorVector_ErrorTolerance_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_EqualEqual_VectorVector_ErrorTolerance_ImplicitCast_1) == 0x000594, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_EqualEqual_VectorVector_ErrorTolerance_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_GetDirectionAtTime_Time_ImplicitCast) == 0x000598, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_GetDirectionAtTime_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_LinearColorLerp_Alpha_ImplicitCast) == 0x00059C, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_LinearColorLerp_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_LinearColorLerp_Alpha_ImplicitCast_1) == 0x0005A0, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_LinearColorLerp_Alpha_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_SetEndRoll_EndRoll_ImplicitCast) == 0x0005A4, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_SetEndRoll_EndRoll_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_GetTangentAtTime_Time_ImplicitCast) == 0x0005A8, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_GetTangentAtTime_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_GetLocationAtTime_Time_ImplicitCast) == 0x0005AC, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_GetLocationAtTime_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_SetStartRoll_StartRoll_ImplicitCast) == 0x0005B0, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_SetStartRoll_StartRoll_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_GetLocationAtTime_Time_ImplicitCast_1) == 0x0005B4, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_GetLocationAtTime_Time_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplineMeshes, CallFunc_GetTangentAtTime_Time_ImplicitCast_1) == 0x0005B8, "Member 'StemSpline_BP_C_AddSplineMeshes::CallFunc_GetTangentAtTime_Time_ImplicitCast_1' has a wrong offset!");

// Function StemSpline_BP.StemSpline_BP_C.AddSplinePoints
// 0x0080 (0x0080 - 0x0000)
struct StemSpline_BP_C_AddSplinePoints final
{
public:
	ESplinePointType                              Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESplinePointType                              Temp_byte_Variable_1;                              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x1];                                        // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumberOfSplinePoints_ReturnValue;      // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESplinePointType                              K2Node_Select_Default;                             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Array_Get_Item;                           // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_WorldLocToSplineTimeApprox_bestTime;      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Array_Get_Item_1;                         // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StemSpline_BP_C_AddSplinePoints) == 0x000008, "Wrong alignment on StemSpline_BP_C_AddSplinePoints");
static_assert(sizeof(StemSpline_BP_C_AddSplinePoints) == 0x000080, "Wrong size on StemSpline_BP_C_AddSplinePoints");
static_assert(offsetof(StemSpline_BP_C_AddSplinePoints, Temp_byte_Variable) == 0x000000, "Member 'StemSpline_BP_C_AddSplinePoints::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplinePoints, Temp_byte_Variable_1) == 0x000001, "Member 'StemSpline_BP_C_AddSplinePoints::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplinePoints, Temp_bool_Variable) == 0x000002, "Member 'StemSpline_BP_C_AddSplinePoints::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplinePoints, Temp_int_Array_Index_Variable) == 0x000004, "Member 'StemSpline_BP_C_AddSplinePoints::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplinePoints, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'StemSpline_BP_C_AddSplinePoints::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplinePoints, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'StemSpline_BP_C_AddSplinePoints::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplinePoints, Temp_int_Array_Index_Variable_1) == 0x000010, "Member 'StemSpline_BP_C_AddSplinePoints::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplinePoints, CallFunc_GetNumberOfSplinePoints_ReturnValue) == 0x000014, "Member 'StemSpline_BP_C_AddSplinePoints::CallFunc_GetNumberOfSplinePoints_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplinePoints, CallFunc_Multiply_IntInt_ReturnValue) == 0x000018, "Member 'StemSpline_BP_C_AddSplinePoints::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplinePoints, CallFunc_Clamp_ReturnValue) == 0x00001C, "Member 'StemSpline_BP_C_AddSplinePoints::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplinePoints, K2Node_Select_Default) == 0x000020, "Member 'StemSpline_BP_C_AddSplinePoints::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplinePoints, Temp_int_Loop_Counter_Variable_1) == 0x000024, "Member 'StemSpline_BP_C_AddSplinePoints::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplinePoints, CallFunc_Array_Get_Item) == 0x000028, "Member 'StemSpline_BP_C_AddSplinePoints::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplinePoints, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'StemSpline_BP_C_AddSplinePoints::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplinePoints, CallFunc_WorldLocToSplineTimeApprox_bestTime) == 0x000048, "Member 'StemSpline_BP_C_AddSplinePoints::CallFunc_WorldLocToSplineTimeApprox_bestTime' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplinePoints, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'StemSpline_BP_C_AddSplinePoints::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplinePoints, CallFunc_Array_Add_ReturnValue) == 0x000054, "Member 'StemSpline_BP_C_AddSplinePoints::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplinePoints, CallFunc_Add_IntInt_ReturnValue_1) == 0x000058, "Member 'StemSpline_BP_C_AddSplinePoints::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplinePoints, CallFunc_Array_Get_Item_1) == 0x000060, "Member 'StemSpline_BP_C_AddSplinePoints::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplinePoints, CallFunc_Array_Length_ReturnValue_1) == 0x000078, "Member 'StemSpline_BP_C_AddSplinePoints::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplinePoints, CallFunc_Array_Contains_ReturnValue) == 0x00007C, "Member 'StemSpline_BP_C_AddSplinePoints::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSplinePoints, CallFunc_Less_IntInt_ReturnValue_1) == 0x00007D, "Member 'StemSpline_BP_C_AddSplinePoints::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function StemSpline_BP.StemSpline_BP_C.AddSubStem
// 0x0038 (0x0038 - 0x0000)
struct StemSpline_BP_C_AddSubStem final
{
public:
	struct FVector                                StartLoc;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartNormal;                                       // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentSubLevel;                                   // 0x0030(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StemSpline_BP_C_AddSubStem) == 0x000008, "Wrong alignment on StemSpline_BP_C_AddSubStem");
static_assert(sizeof(StemSpline_BP_C_AddSubStem) == 0x000038, "Wrong size on StemSpline_BP_C_AddSubStem");
static_assert(offsetof(StemSpline_BP_C_AddSubStem, StartLoc) == 0x000000, "Member 'StemSpline_BP_C_AddSubStem::StartLoc' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSubStem, StartNormal) == 0x000018, "Member 'StemSpline_BP_C_AddSubStem::StartNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_AddSubStem, CurrentSubLevel) == 0x000030, "Member 'StemSpline_BP_C_AddSubStem::CurrentSubLevel' has a wrong offset!");

// Function StemSpline_BP.StemSpline_BP_C.CheckIfContainsValueInRange
// 0x0070 (0x0070 - 0x0000)
struct StemSpline_BP_C_CheckIfContainsValueInRange final
{
public:
	TArray<double>                                Array;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	double                                        Range__Min;                                        // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Range__Max;                                        // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Contains_;                                         // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Max;                                               // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Min;                                               // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ContainsIndex;                                     // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Contains;                                          // 0x003C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InRange_FloatFloat_ReturnValue;           // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StemSpline_BP_C_CheckIfContainsValueInRange) == 0x000008, "Wrong alignment on StemSpline_BP_C_CheckIfContainsValueInRange");
static_assert(sizeof(StemSpline_BP_C_CheckIfContainsValueInRange) == 0x000070, "Wrong size on StemSpline_BP_C_CheckIfContainsValueInRange");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsValueInRange, Array) == 0x000000, "Member 'StemSpline_BP_C_CheckIfContainsValueInRange::Array' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsValueInRange, Range__Min) == 0x000010, "Member 'StemSpline_BP_C_CheckIfContainsValueInRange::Range__Min' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsValueInRange, Range__Max) == 0x000018, "Member 'StemSpline_BP_C_CheckIfContainsValueInRange::Range__Max' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsValueInRange, Contains_) == 0x000020, "Member 'StemSpline_BP_C_CheckIfContainsValueInRange::Contains_' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsValueInRange, Max) == 0x000028, "Member 'StemSpline_BP_C_CheckIfContainsValueInRange::Max' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsValueInRange, Min) == 0x000030, "Member 'StemSpline_BP_C_CheckIfContainsValueInRange::Min' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsValueInRange, ContainsIndex) == 0x000038, "Member 'StemSpline_BP_C_CheckIfContainsValueInRange::ContainsIndex' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsValueInRange, Contains) == 0x00003C, "Member 'StemSpline_BP_C_CheckIfContainsValueInRange::Contains' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsValueInRange, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'StemSpline_BP_C_CheckIfContainsValueInRange::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsValueInRange, Temp_bool_True_if_break_was_hit_Variable) == 0x000044, "Member 'StemSpline_BP_C_CheckIfContainsValueInRange::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsValueInRange, Temp_int_Array_Index_Variable) == 0x000048, "Member 'StemSpline_BP_C_CheckIfContainsValueInRange::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsValueInRange, CallFunc_Array_Get_Item) == 0x000050, "Member 'StemSpline_BP_C_CheckIfContainsValueInRange::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsValueInRange, CallFunc_Not_PreBool_ReturnValue) == 0x000058, "Member 'StemSpline_BP_C_CheckIfContainsValueInRange::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsValueInRange, Temp_int_Loop_Counter_Variable) == 0x00005C, "Member 'StemSpline_BP_C_CheckIfContainsValueInRange::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsValueInRange, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'StemSpline_BP_C_CheckIfContainsValueInRange::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsValueInRange, CallFunc_Add_IntInt_ReturnValue) == 0x000064, "Member 'StemSpline_BP_C_CheckIfContainsValueInRange::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsValueInRange, CallFunc_BooleanAND_ReturnValue) == 0x000068, "Member 'StemSpline_BP_C_CheckIfContainsValueInRange::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsValueInRange, CallFunc_InRange_FloatFloat_ReturnValue) == 0x000069, "Member 'StemSpline_BP_C_CheckIfContainsValueInRange::CallFunc_InRange_FloatFloat_ReturnValue' has a wrong offset!");

// Function StemSpline_BP.StemSpline_BP_C.CheckIfContainsVectorInDistance
// 0x00C8 (0x00C8 - 0x0000)
struct StemSpline_BP_C_CheckIfContainsVectorInDistance final
{
public:
	TArray<struct FVector>                        Array;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	double                                        InDistance;                                        // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Vector;                                            // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Contains_;                                         // 0x0030(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Vector_;                                           // 0x0038(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        InDistance_;                                       // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ContainsIndex;                                     // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Contains;                                          // 0x005C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Array_Get_Item;                           // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue;                        // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StemSpline_BP_C_CheckIfContainsVectorInDistance) == 0x000008, "Wrong alignment on StemSpline_BP_C_CheckIfContainsVectorInDistance");
static_assert(sizeof(StemSpline_BP_C_CheckIfContainsVectorInDistance) == 0x0000C8, "Wrong size on StemSpline_BP_C_CheckIfContainsVectorInDistance");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsVectorInDistance, Array) == 0x000000, "Member 'StemSpline_BP_C_CheckIfContainsVectorInDistance::Array' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsVectorInDistance, InDistance) == 0x000010, "Member 'StemSpline_BP_C_CheckIfContainsVectorInDistance::InDistance' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsVectorInDistance, Vector) == 0x000018, "Member 'StemSpline_BP_C_CheckIfContainsVectorInDistance::Vector' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsVectorInDistance, Contains_) == 0x000030, "Member 'StemSpline_BP_C_CheckIfContainsVectorInDistance::Contains_' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsVectorInDistance, Vector_) == 0x000038, "Member 'StemSpline_BP_C_CheckIfContainsVectorInDistance::Vector_' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsVectorInDistance, InDistance_) == 0x000050, "Member 'StemSpline_BP_C_CheckIfContainsVectorInDistance::InDistance_' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsVectorInDistance, ContainsIndex) == 0x000058, "Member 'StemSpline_BP_C_CheckIfContainsVectorInDistance::ContainsIndex' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsVectorInDistance, Contains) == 0x00005C, "Member 'StemSpline_BP_C_CheckIfContainsVectorInDistance::Contains' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsVectorInDistance, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'StemSpline_BP_C_CheckIfContainsVectorInDistance::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsVectorInDistance, Temp_bool_True_if_break_was_hit_Variable) == 0x000064, "Member 'StemSpline_BP_C_CheckIfContainsVectorInDistance::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsVectorInDistance, Temp_int_Array_Index_Variable) == 0x000068, "Member 'StemSpline_BP_C_CheckIfContainsVectorInDistance::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsVectorInDistance, CallFunc_Array_Get_Item) == 0x000070, "Member 'StemSpline_BP_C_CheckIfContainsVectorInDistance::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsVectorInDistance, CallFunc_Not_PreBool_ReturnValue) == 0x000088, "Member 'StemSpline_BP_C_CheckIfContainsVectorInDistance::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsVectorInDistance, Temp_int_Loop_Counter_Variable) == 0x00008C, "Member 'StemSpline_BP_C_CheckIfContainsVectorInDistance::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsVectorInDistance, CallFunc_Less_IntInt_ReturnValue) == 0x000090, "Member 'StemSpline_BP_C_CheckIfContainsVectorInDistance::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsVectorInDistance, CallFunc_Add_IntInt_ReturnValue) == 0x000094, "Member 'StemSpline_BP_C_CheckIfContainsVectorInDistance::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsVectorInDistance, CallFunc_BooleanAND_ReturnValue) == 0x000098, "Member 'StemSpline_BP_C_CheckIfContainsVectorInDistance::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsVectorInDistance, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000A0, "Member 'StemSpline_BP_C_CheckIfContainsVectorInDistance::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsVectorInDistance, CallFunc_VSize_ReturnValue) == 0x0000B8, "Member 'StemSpline_BP_C_CheckIfContainsVectorInDistance::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_CheckIfContainsVectorInDistance, CallFunc_Less_DoubleDouble_ReturnValue) == 0x0000C0, "Member 'StemSpline_BP_C_CheckIfContainsVectorInDistance::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");

// Function StemSpline_BP.StemSpline_BP_C.ConstructionLogic
// 0x03E0 (0x03E0 - 0x0000)
struct StemSpline_BP_C_ConstructionLogic final
{
public:
	int32                                         SubStarterLevel;                                   // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                SubStarterStartDirection;                          // 0x0008(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SubStarterStartLocation;                           // 0x0020(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SubStarterSurfaceNormal;                           // 0x0038(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       AddingSpline;                                      // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58[0x8];                                       // 0x0058(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Temp_struct_Variable;                              // 0x0060(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       CallFunc_AddComponent_ReturnValue;                 // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_ED[0x3];                                       // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0108(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_118[0x8];                                      // 0x0118(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Temp_struct_Variable_1;                            // 0x0120(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;                   // 0x0180(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       CallFunc_AddComponent_ReturnValue_1;               // 0x0190(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x019C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19D[0x3];                                      // 0x019D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x01A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x01B8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A1[0x3];                                      // 0x02A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x02A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x02A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumberOfSplinePoints_ReturnValue;      // 0x02AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x02B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Array_Get_Item;                           // 0x02B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x02D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D5[0x3];                                      // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Array_Get_Item_1;                         // 0x02D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_WorldLocToSplineTimeApprox_bestTime;      // 0x02F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x02F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x02FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FD[0x3];                                      // 0x02FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0300(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0304(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x030C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_3;                   // 0x0314(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       CallFunc_Array_Get_Item_2;                         // 0x0318(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0320(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0324(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0325(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_326[0x2];                                      // 0x0326(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USplineComponent*                       CallFunc_Array_Get_Item_3;                         // 0x0328(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x0330(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x0334(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_335[0x3];                                      // 0x0335(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0338(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x033C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x033D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33E[0x2];                                      // 0x033E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0340(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x0344(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSubStemStarter                        CallFunc_Array_Get_Item_4;                         // 0x0348(0x0050)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_5;               // 0x0398(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x039C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39D[0x3];                                      // 0x039D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_FindStartPoint_StartLoc;                  // 0x03A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_FindStartPoint_StartNormal;               // 0x03B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_R_ImplicitCast;                  // 0x03D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_R_ImplicitCast_1;                // 0x03D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StemSpline_BP_C_ConstructionLogic) == 0x000010, "Wrong alignment on StemSpline_BP_C_ConstructionLogic");
static_assert(sizeof(StemSpline_BP_C_ConstructionLogic) == 0x0003E0, "Wrong size on StemSpline_BP_C_ConstructionLogic");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, SubStarterLevel) == 0x000000, "Member 'StemSpline_BP_C_ConstructionLogic::SubStarterLevel' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, SubStarterStartDirection) == 0x000008, "Member 'StemSpline_BP_C_ConstructionLogic::SubStarterStartDirection' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, SubStarterStartLocation) == 0x000020, "Member 'StemSpline_BP_C_ConstructionLogic::SubStarterStartLocation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, SubStarterSurfaceNormal) == 0x000038, "Member 'StemSpline_BP_C_ConstructionLogic::SubStarterSurfaceNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, AddingSpline) == 0x000050, "Member 'StemSpline_BP_C_ConstructionLogic::AddingSpline' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, Temp_struct_Variable) == 0x000060, "Member 'StemSpline_BP_C_ConstructionLogic::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, Temp_int_Loop_Counter_Variable) == 0x0000C0, "Member 'StemSpline_BP_C_ConstructionLogic::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_Add_IntInt_ReturnValue) == 0x0000C4, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_AddComponent_ReturnValue) == 0x0000C8, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, Temp_int_Loop_Counter_Variable_1) == 0x0000D0, "Member 'StemSpline_BP_C_ConstructionLogic::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, Temp_int_Loop_Counter_Variable_2) == 0x0000D4, "Member 'StemSpline_BP_C_ConstructionLogic::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000D8, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000DC, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, Temp_int_Array_Index_Variable) == 0x0000E0, "Member 'StemSpline_BP_C_ConstructionLogic::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, Temp_int_Array_Index_Variable_1) == 0x0000E4, "Member 'StemSpline_BP_C_ConstructionLogic::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, Temp_int_Array_Index_Variable_2) == 0x0000E8, "Member 'StemSpline_BP_C_ConstructionLogic::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0000EC, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0000F0, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x0000F8, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000100, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, K2Node_MakeStruct_LinearColor) == 0x000108, "Member 'StemSpline_BP_C_ConstructionLogic::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, Temp_struct_Variable_1) == 0x000120, "Member 'StemSpline_BP_C_ConstructionLogic::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, K2Node_MakeStruct_LinearColor_1) == 0x000180, "Member 'StemSpline_BP_C_ConstructionLogic::K2Node_MakeStruct_LinearColor_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_AddComponent_ReturnValue_1) == 0x000190, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_AddComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_Array_Length_ReturnValue) == 0x000198, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_Less_IntInt_ReturnValue) == 0x00019C, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x0001A0, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x0001B8, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_IsValid_ReturnValue) == 0x0002A0, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, Temp_int_Loop_Counter_Variable_3) == 0x0002A4, "Member 'StemSpline_BP_C_ConstructionLogic::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_Add_IntInt_ReturnValue_3) == 0x0002A8, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_GetNumberOfSplinePoints_ReturnValue) == 0x0002AC, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_GetNumberOfSplinePoints_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_Multiply_IntInt_ReturnValue) == 0x0002B0, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_Clamp_ReturnValue) == 0x0002B4, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_Array_Get_Item) == 0x0002B8, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_Array_Length_ReturnValue_1) == 0x0002D0, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_Less_IntInt_ReturnValue_1) == 0x0002D4, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_Array_Get_Item_1) == 0x0002D8, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_WorldLocToSplineTimeApprox_bestTime) == 0x0002F0, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_WorldLocToSplineTimeApprox_bestTime' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_Array_Length_ReturnValue_2) == 0x0002F8, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_Less_IntInt_ReturnValue_2) == 0x0002FC, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_Array_Add_ReturnValue) == 0x000300, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_Array_Add_ReturnValue_1) == 0x000304, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, Temp_int_Variable) == 0x000308, "Member 'StemSpline_BP_C_ConstructionLogic::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_Add_IntInt_ReturnValue_4) == 0x00030C, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, Temp_int_Variable_1) == 0x000310, "Member 'StemSpline_BP_C_ConstructionLogic::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, Temp_int_Array_Index_Variable_3) == 0x000314, "Member 'StemSpline_BP_C_ConstructionLogic::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_Array_Get_Item_2) == 0x000318, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_Array_Length_ReturnValue_3) == 0x000320, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_IsValid_ReturnValue_1) == 0x000324, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_Greater_IntInt_ReturnValue) == 0x000325, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_Array_Get_Item_3) == 0x000328, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_Array_Length_ReturnValue_4) == 0x000330, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_Less_IntInt_ReturnValue_3) == 0x000334, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_Subtract_IntInt_ReturnValue) == 0x000338, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00033C, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00033D, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_Array_Add_ReturnValue_2) == 0x000340, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_Add_IntInt_ReturnValue_5) == 0x000344, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_Array_Get_Item_4) == 0x000348, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_Array_Length_ReturnValue_5) == 0x000398, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_Array_Length_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_Less_IntInt_ReturnValue_4) == 0x00039C, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_Less_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_FindStartPoint_StartLoc) == 0x0003A0, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_FindStartPoint_StartLoc' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, CallFunc_FindStartPoint_StartNormal) == 0x0003B8, "Member 'StemSpline_BP_C_ConstructionLogic::CallFunc_FindStartPoint_StartNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, K2Node_MakeStruct_R_ImplicitCast) == 0x0003D0, "Member 'StemSpline_BP_C_ConstructionLogic::K2Node_MakeStruct_R_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_ConstructionLogic, K2Node_MakeStruct_R_ImplicitCast_1) == 0x0003D4, "Member 'StemSpline_BP_C_ConstructionLogic::K2Node_MakeStruct_R_ImplicitCast_1' has a wrong offset!");

// Function StemSpline_BP.StemSpline_BP_C.DoCheckSegment
// 0x0AD8 (0x0AD8 - 0x0000)
struct StemSpline_BP_C_DoCheckSegment final
{
public:
	struct FVector                                StartLocation;                                     // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RelativeNormal;                                    // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SegmentProgress;                                   // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                bridgeSeek_surfaceNormal;                          // 0x0038(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        bridgeSeek_Points;                                 // 0x0050(0x0010)(Edit, BlueprintVisible)
	struct FVector                                FoundEdgeNormal;                                   // 0x0060(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FoundEdgeLocation;                                 // 0x0078(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        bridgeSeekPoints;                                  // 0x0090(0x0010)(Edit, BlueprintVisible)
	struct FVector                                LocFromTraceDownWithHeight;                        // 0x00A0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitNormalFromTraceDown;                            // 0x00B8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitLocFromTraceDown;                               // 0x00D0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TraceDirectionFromTraceTowards;                    // 0x00E8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitNormalFromTraceTowards;                         // 0x0100(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitLocFromTraceTowards;                            // 0x0118(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SubStarterStartDirection;                          // 0x0130(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                AddingEdgePoint;                                   // 0x0148(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LocAfterDirTrace;                                  // 0x0160(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SubSegmentStartLocation;                           // 0x0178(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SubSegmentStartSurfaceNormal;                      // 0x0190(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RandomBoolFromStream_ReturnValue;         // 0x01AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1AE[0x2];                                      // 0x01AE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomFloatInRangeFromStream_ReturnValue; // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B4[0x4];                                      // 0x01B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x01C0(0x0010)(ConstParm, ReferenceParm)
	float                                         CallFunc_RandomFloatInRangeFromStream_ReturnValue_1; // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Array_Get_Item;                           // 0x01D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue_1;            // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FC[0x4];                                      // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0200(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Divide_VectorInt_ReturnValue;             // 0x0218(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue;      // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_231[0x7];                                      // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Dot_VectorVector_ReturnValue;             // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_241[0x7];                                      // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_DegAcos_ReturnValue;                      // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue_2;            // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0254(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0258(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Divide_VectorInt_ReturnValue_1;           // 0x0270(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0288(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue_1;    // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A1[0x7];                                      // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;           // 0x02A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C1[0x3];                                      // 0x02C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x02C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x02CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Array_Get_Item_1;                         // 0x02D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E9[0x3];                                      // 0x02E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue_3;            // 0x02EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Array_Get_Item_2;                         // 0x02F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue_4;            // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x030C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue_2;    // 0x0311(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_312[0x2];                                      // 0x0312(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_3;                               // 0x0314(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0318(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_319[0x3];                                      // 0x0319(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x031C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_321[0x3];                                      // 0x0321(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0324(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue_5;            // 0x0328(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32C[0x4];                                      // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Array_Get_Item_3;                         // 0x0330(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_3;           // 0x0348(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Divide_VectorInt_ReturnValue_2;           // 0x0360(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x0378(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0390(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue;                        // 0x03A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x03B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B1[0x7];                                      // 0x03B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_2;       // 0x03B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x03D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_3;       // 0x03E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue_3;    // 0x0400(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue_4;    // 0x0401(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0402(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x0403(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0404(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_405[0x3];                                      // 0x0405(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0408(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x040C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40D[0x3];                                      // 0x040D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetForwardVector_ReturnValue_1;           // 0x0410(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_4;       // 0x0428(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_4;           // 0x0440(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x0458(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x0540(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0541(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_5;                // 0x0542(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SeekForBridge_bridgeBuilt;                // 0x0543(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_544[0x4];                                      // 0x0544(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        CallFunc_SeekForBridge_bridgePoints;               // 0x0548(0x0010)(ReferenceParm)
	struct FVector                                CallFunc_SeekForBridge_newSurfaceNormal;           // 0x0558(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0570(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_571[0x3];                                      // 0x0571(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0574(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0578(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SeekForBridge_bridgeBuilt_1;              // 0x057C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57D[0x3];                                      // 0x057D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        CallFunc_SeekForBridge_bridgePoints_1;             // 0x0580(0x0010)(ReferenceParm)
	struct FVector                                CallFunc_SeekForBridge_newSurfaceNormal_1;         // 0x0590(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x05A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x05AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AD[0x3];                                      // 0x05AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x05B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue_5;    // 0x05B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B5[0x3];                                      // 0x05B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector_X;                            // 0x05B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x05C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x05C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_5;           // 0x05D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x05E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0600(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_601[0x7];                                      // 0x0601(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector_X_1;                          // 0x0608(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x0610(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x0618(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0620(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_624[0x4];                                      // 0x0624(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x0628(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0640(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0658(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65C[0x4];                                      // 0x065C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x0660(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0678(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_5;       // 0x0680(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_6;           // 0x0698(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x06B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B1[0x3];                                      // 0x06B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x06B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Array_Get_Item_4;                         // 0x06B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x06D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D1[0x3];                                      // 0x06D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x06D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_4;                  // 0x06D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_5;                  // 0x06DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x06E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_5;                // 0x06E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;  // 0x06E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue_6;    // 0x06E6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_6;                // 0x06E7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x06E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x06EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x06F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_6;                  // 0x06F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_7;                // 0x06F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x06F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6FA[0x2];                                      // 0x06FA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue_6;            // 0x06FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Array_Get_Item_5;                         // 0x0700(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0718(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71C[0x4];                                      // 0x071C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Array_Get_Item_6;                         // 0x0720(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x0738(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue_1;                      // 0x0750(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x0758(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_759[0x3];                                      // 0x0759(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue_7;            // 0x075C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Array_Get_Item_7;                         // 0x0760(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_2;      // 0x0778(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue_2;                      // 0x0790(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x0798(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x079C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x079D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2;  // 0x079E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x079F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x07A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_3;            // 0x07A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue_1;     // 0x07A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A9[0x7];                                      // 0x07A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x07B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x07B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_ReturnValue_2; // 0x07C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C4[0x4];                                      // 0x07C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSubStemStarter                        K2Node_MakeStruct_SubStemStarter;                  // 0x07C8(0x0050)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0818(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x0820(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_7;                  // 0x0828(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_82C[0x4];                                      // 0x082C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_RotateAngleAxis_ReturnValue;              // 0x0830(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Cross_VectorVector_ReturnValue;           // 0x0848(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_8;                  // 0x0860(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_864[0x4];                                      // 0x0864(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0868(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_9;                  // 0x0880(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_884[0x4];                                      // 0x0884(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_6;       // 0x0888(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_8;                // 0x08A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A1[0x7];                                      // 0x08A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_7;           // 0x08A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_8;           // 0x08C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_10;                 // 0x08D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_6;                 // 0x08DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_7;       // 0x08E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_9;           // 0x08F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_10;          // 0x0910(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Divide_VectorInt_ReturnValue_3;           // 0x0928(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_8;       // 0x0940(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_11;          // 0x0958(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SearchForEdge_FoundAnEdge_;               // 0x0970(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_971[0x7];                                      // 0x0971(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_SearchForEdge_foundEdgeLocation;          // 0x0978(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SearchForEdge_foundEdgeNormal;            // 0x0990(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_6;                // 0x09A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A9[0x7];                                      // 0x09A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_9;       // 0x09B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_12;          // 0x09C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_TraceDown_hitLocation;                    // 0x09E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_TraceDown_hitNormal;                      // 0x09F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TraceDown_hitSomething;                   // 0x0A10(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A11[0x7];                                      // 0x0A11(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_TraceTowardsDirection_hitLocation;        // 0x0A18(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_TraceTowardsDirection_hitNormal;          // 0x0A30(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_TraceTowardsDirection_lastLocation;       // 0x0A48(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_TraceTowardsDirection_traceDirection;     // 0x0A60(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TraceTowardsDirection_hitSomething;       // 0x0A78(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TraceTowardsDirection_targetReached;      // 0x0A79(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_9;                // 0x0A7A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A7B[0x1];                                      // 0x0A7B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_7;                 // 0x0A7C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x0A80(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x0A88(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_EqualEqual_VectorVector_ErrorTolerance_ImplicitCast; // 0x0A90(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A94[0x4];                                      // 0x0A94(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x0A98(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0AA0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_EqualEqual_VectorVector_ErrorTolerance_ImplicitCast_1; // 0x0AA8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AAC[0x4];                                      // 0x0AAC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast_1;     // 0x0AB0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast_1;     // 0x0AB8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast; // 0x0AC0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast; // 0x0AC4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0AC8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast;    // 0x0AD0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StemSpline_BP_C_DoCheckSegment) == 0x000008, "Wrong alignment on StemSpline_BP_C_DoCheckSegment");
static_assert(sizeof(StemSpline_BP_C_DoCheckSegment) == 0x000AD8, "Wrong size on StemSpline_BP_C_DoCheckSegment");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, StartLocation) == 0x000000, "Member 'StemSpline_BP_C_DoCheckSegment::StartLocation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, RelativeNormal) == 0x000018, "Member 'StemSpline_BP_C_DoCheckSegment::RelativeNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, SegmentProgress) == 0x000030, "Member 'StemSpline_BP_C_DoCheckSegment::SegmentProgress' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, bridgeSeek_surfaceNormal) == 0x000038, "Member 'StemSpline_BP_C_DoCheckSegment::bridgeSeek_surfaceNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, bridgeSeek_Points) == 0x000050, "Member 'StemSpline_BP_C_DoCheckSegment::bridgeSeek_Points' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, FoundEdgeNormal) == 0x000060, "Member 'StemSpline_BP_C_DoCheckSegment::FoundEdgeNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, FoundEdgeLocation) == 0x000078, "Member 'StemSpline_BP_C_DoCheckSegment::FoundEdgeLocation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, bridgeSeekPoints) == 0x000090, "Member 'StemSpline_BP_C_DoCheckSegment::bridgeSeekPoints' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, LocFromTraceDownWithHeight) == 0x0000A0, "Member 'StemSpline_BP_C_DoCheckSegment::LocFromTraceDownWithHeight' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, HitNormalFromTraceDown) == 0x0000B8, "Member 'StemSpline_BP_C_DoCheckSegment::HitNormalFromTraceDown' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, HitLocFromTraceDown) == 0x0000D0, "Member 'StemSpline_BP_C_DoCheckSegment::HitLocFromTraceDown' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, TraceDirectionFromTraceTowards) == 0x0000E8, "Member 'StemSpline_BP_C_DoCheckSegment::TraceDirectionFromTraceTowards' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, HitNormalFromTraceTowards) == 0x000100, "Member 'StemSpline_BP_C_DoCheckSegment::HitNormalFromTraceTowards' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, HitLocFromTraceTowards) == 0x000118, "Member 'StemSpline_BP_C_DoCheckSegment::HitLocFromTraceTowards' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, SubStarterStartDirection) == 0x000130, "Member 'StemSpline_BP_C_DoCheckSegment::SubStarterStartDirection' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, AddingEdgePoint) == 0x000148, "Member 'StemSpline_BP_C_DoCheckSegment::AddingEdgePoint' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, LocAfterDirTrace) == 0x000160, "Member 'StemSpline_BP_C_DoCheckSegment::LocAfterDirTrace' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, SubSegmentStartLocation) == 0x000178, "Member 'StemSpline_BP_C_DoCheckSegment::SubSegmentStartLocation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, SubSegmentStartSurfaceNormal) == 0x000190, "Member 'StemSpline_BP_C_DoCheckSegment::SubSegmentStartSurfaceNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, Temp_int_Variable) == 0x0001A8, "Member 'StemSpline_BP_C_DoCheckSegment::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Less_IntInt_ReturnValue) == 0x0001AC, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_RandomBoolFromStream_ReturnValue) == 0x0001AD, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_RandomBoolFromStream_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_RandomFloatInRangeFromStream_ReturnValue) == 0x0001B0, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_RandomFloatInRangeFromStream_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_SelectFloat_ReturnValue) == 0x0001B8, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, Temp_object_Variable) == 0x0001C0, "Member 'StemSpline_BP_C_DoCheckSegment::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_RandomFloatInRangeFromStream_ReturnValue_1) == 0x0001D0, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_RandomFloatInRangeFromStream_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Array_LastIndex_ReturnValue) == 0x0001D4, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Array_Get_Item) == 0x0001D8, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Array_LastIndex_ReturnValue_1) == 0x0001F0, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Array_LastIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Array_Length_ReturnValue) == 0x0001F4, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, Temp_int_Variable_1) == 0x0001F8, "Member 'StemSpline_BP_C_DoCheckSegment::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Add_VectorVector_ReturnValue) == 0x000200, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Divide_VectorInt_ReturnValue) == 0x000218, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Divide_VectorInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_EqualEqual_VectorVector_ReturnValue) == 0x000230, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_EqualEqual_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Dot_VectorVector_ReturnValue) == 0x000238, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Not_PreBool_ReturnValue) == 0x000240, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_DegAcos_ReturnValue) == 0x000248, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_DegAcos_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Array_LastIndex_ReturnValue_2) == 0x000250, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Array_LastIndex_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, Temp_int_Variable_2) == 0x000254, "Member 'StemSpline_BP_C_DoCheckSegment::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000258, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Divide_VectorInt_ReturnValue_1) == 0x000270, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Divide_VectorInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000288, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_EqualEqual_VectorVector_ReturnValue_1) == 0x0002A0, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_EqualEqual_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Add_VectorVector_ReturnValue_2) == 0x0002A8, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Not_PreBool_ReturnValue_1) == 0x0002C0, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, Temp_int_Loop_Counter_Variable) == 0x0002C4, "Member 'StemSpline_BP_C_DoCheckSegment::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, Temp_int_Array_Index_Variable) == 0x0002C8, "Member 'StemSpline_BP_C_DoCheckSegment::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Add_IntInt_ReturnValue) == 0x0002CC, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Array_Get_Item_1) == 0x0002D0, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0002E8, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Array_LastIndex_ReturnValue_3) == 0x0002EC, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Array_LastIndex_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Array_Get_Item_2) == 0x0002F0, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Array_LastIndex_ReturnValue_4) == 0x000308, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Array_LastIndex_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Array_Length_ReturnValue_1) == 0x00030C, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Less_IntInt_ReturnValue_1) == 0x000310, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_EqualEqual_VectorVector_ReturnValue_2) == 0x000311, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_EqualEqual_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, Temp_int_Variable_3) == 0x000314, "Member 'StemSpline_BP_C_DoCheckSegment::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Not_PreBool_ReturnValue_2) == 0x000318, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, Temp_int_Loop_Counter_Variable_1) == 0x00031C, "Member 'StemSpline_BP_C_DoCheckSegment::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Less_IntInt_ReturnValue_2) == 0x000320, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Add_IntInt_ReturnValue_1) == 0x000324, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Array_LastIndex_ReturnValue_5) == 0x000328, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Array_LastIndex_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Array_Get_Item_3) == 0x000330, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Add_VectorVector_ReturnValue_3) == 0x000348, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Add_VectorVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Divide_VectorInt_ReturnValue_2) == 0x000360, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Divide_VectorInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x000378, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000390, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_VSize_ReturnValue) == 0x0003A8, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0003B0, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Multiply_VectorFloat_ReturnValue_2) == 0x0003B8, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Multiply_VectorFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_GetForwardVector_ReturnValue) == 0x0003D0, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Multiply_VectorFloat_ReturnValue_3) == 0x0003E8, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Multiply_VectorFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_EqualEqual_VectorVector_ReturnValue_3) == 0x000400, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_EqualEqual_VectorVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_EqualEqual_VectorVector_ReturnValue_4) == 0x000401, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_EqualEqual_VectorVector_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Not_PreBool_ReturnValue_3) == 0x000402, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Not_PreBool_ReturnValue_4) == 0x000403, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_BooleanAND_ReturnValue) == 0x000404, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Add_IntInt_ReturnValue_2) == 0x000408, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Less_IntInt_ReturnValue_3) == 0x00040C, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_GetForwardVector_ReturnValue_1) == 0x000410, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_GetForwardVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Multiply_VectorFloat_ReturnValue_4) == 0x000428, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Multiply_VectorFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Add_VectorVector_ReturnValue_4) == 0x000440, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Add_VectorVector_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_LineTraceSingle_OutHit) == 0x000458, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_LineTraceSingle_ReturnValue) == 0x000540, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000541, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Not_PreBool_ReturnValue_5) == 0x000542, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Not_PreBool_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_SeekForBridge_bridgeBuilt) == 0x000543, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_SeekForBridge_bridgeBuilt' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_SeekForBridge_bridgePoints) == 0x000548, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_SeekForBridge_bridgePoints' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_SeekForBridge_newSurfaceNormal) == 0x000558, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_SeekForBridge_newSurfaceNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000570, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Array_Add_ReturnValue) == 0x000574, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Array_Add_ReturnValue_1) == 0x000578, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_SeekForBridge_bridgeBuilt_1) == 0x00057C, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_SeekForBridge_bridgeBuilt_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_SeekForBridge_bridgePoints_1) == 0x000580, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_SeekForBridge_bridgePoints_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_SeekForBridge_newSurfaceNormal_1) == 0x000590, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_SeekForBridge_newSurfaceNormal_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Array_Length_ReturnValue_2) == 0x0005A8, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Greater_IntInt_ReturnValue) == 0x0005AC, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Array_Add_ReturnValue_2) == 0x0005B0, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_EqualEqual_VectorVector_ReturnValue_5) == 0x0005B4, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_EqualEqual_VectorVector_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_BreakVector_X) == 0x0005B8, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_BreakVector_Y) == 0x0005C0, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_BreakVector_Z) == 0x0005C8, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Add_VectorVector_ReturnValue_5) == 0x0005D0, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Add_VectorVector_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_MakeVector_ReturnValue) == 0x0005E8, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000600, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_BreakVector_X_1) == 0x000608, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_BreakVector_Y_1) == 0x000610, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_BreakVector_Z_1) == 0x000618, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000620, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_MakeVector_ReturnValue_1) == 0x000628, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_FindLookAtRotation_ReturnValue) == 0x000640, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000658, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Conv_RotatorToVector_ReturnValue) == 0x000660, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Conv_RotatorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000678, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Multiply_VectorFloat_ReturnValue_5) == 0x000680, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Multiply_VectorFloat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Add_VectorVector_ReturnValue_6) == 0x000698, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Add_VectorVector_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Less_IntInt_ReturnValue_4) == 0x0006B0, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Less_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, Temp_int_Array_Index_Variable_1) == 0x0006B4, "Member 'StemSpline_BP_C_DoCheckSegment::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Array_Get_Item_4) == 0x0006B8, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x0006D0, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Array_Add_ReturnValue_3) == 0x0006D4, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Array_Add_ReturnValue_4) == 0x0006D8, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Array_Add_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Array_Add_ReturnValue_5) == 0x0006DC, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Array_Add_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Add_IntInt_ReturnValue_3) == 0x0006E0, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Less_IntInt_ReturnValue_5) == 0x0006E4, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Less_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1) == 0x0006E5, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_EqualEqual_VectorVector_ReturnValue_6) == 0x0006E6, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_EqualEqual_VectorVector_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Less_IntInt_ReturnValue_6) == 0x0006E7, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Less_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, Temp_int_Variable_4) == 0x0006E8, "Member 'StemSpline_BP_C_DoCheckSegment::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, Temp_int_Variable_5) == 0x0006EC, "Member 'StemSpline_BP_C_DoCheckSegment::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Add_IntInt_ReturnValue_4) == 0x0006F0, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Array_Add_ReturnValue_6) == 0x0006F4, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Array_Add_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Less_IntInt_ReturnValue_7) == 0x0006F8, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Less_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_BooleanAND_ReturnValue_1) == 0x0006F9, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Array_LastIndex_ReturnValue_6) == 0x0006FC, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Array_LastIndex_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Array_Get_Item_5) == 0x000700, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Subtract_IntInt_ReturnValue) == 0x000718, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Array_Get_Item_6) == 0x000720, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Array_Get_Item_6' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x000738, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_VSize_ReturnValue_1) == 0x000750, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_VSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000758, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Array_LastIndex_ReturnValue_7) == 0x00075C, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Array_LastIndex_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Array_Get_Item_7) == 0x000760, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Array_Get_Item_7' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Subtract_VectorVector_ReturnValue_2) == 0x000778, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Subtract_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_VSize_ReturnValue_2) == 0x000790, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_VSize_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Add_IntInt_ReturnValue_5) == 0x000798, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Less_DoubleDouble_ReturnValue_1) == 0x00079C, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Less_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x00079D, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2) == 0x00079E, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_BooleanAND_ReturnValue_2) == 0x00079F, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x0007A0, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Conv_IntToFloat_ReturnValue_3) == 0x0007A4, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Conv_IntToFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_LessEqual_DoubleDouble_ReturnValue_1) == 0x0007A8, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_LessEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x0007B0, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0007B8, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_RandomFloatInRangeFromStream_ReturnValue_2) == 0x0007C0, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_RandomFloatInRangeFromStream_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, K2Node_MakeStruct_SubStemStarter) == 0x0007C8, "Member 'StemSpline_BP_C_DoCheckSegment::K2Node_MakeStruct_SubStemStarter' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000818, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x000820, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Array_Add_ReturnValue_7) == 0x000828, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Array_Add_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_RotateAngleAxis_ReturnValue) == 0x000830, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_RotateAngleAxis_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Cross_VectorVector_ReturnValue) == 0x000848, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Cross_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Array_Add_ReturnValue_8) == 0x000860, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Array_Add_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Normal_ReturnValue) == 0x000868, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Array_Add_ReturnValue_9) == 0x000880, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Array_Add_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Multiply_VectorFloat_ReturnValue_6) == 0x000888, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Multiply_VectorFloat_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Less_IntInt_ReturnValue_8) == 0x0008A0, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Less_IntInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Add_VectorVector_ReturnValue_7) == 0x0008A8, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Add_VectorVector_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Add_VectorVector_ReturnValue_8) == 0x0008C0, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Add_VectorVector_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Array_Add_ReturnValue_10) == 0x0008D8, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Array_Add_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Add_IntInt_ReturnValue_6) == 0x0008DC, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Add_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Multiply_VectorFloat_ReturnValue_7) == 0x0008E0, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Multiply_VectorFloat_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Add_VectorVector_ReturnValue_9) == 0x0008F8, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Add_VectorVector_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Add_VectorVector_ReturnValue_10) == 0x000910, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Add_VectorVector_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Divide_VectorInt_ReturnValue_3) == 0x000928, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Divide_VectorInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Multiply_VectorFloat_ReturnValue_8) == 0x000940, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Multiply_VectorFloat_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Add_VectorVector_ReturnValue_11) == 0x000958, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Add_VectorVector_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_SearchForEdge_FoundAnEdge_) == 0x000970, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_SearchForEdge_FoundAnEdge_' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_SearchForEdge_foundEdgeLocation) == 0x000978, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_SearchForEdge_foundEdgeLocation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_SearchForEdge_foundEdgeNormal) == 0x000990, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_SearchForEdge_foundEdgeNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Not_PreBool_ReturnValue_6) == 0x0009A8, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Not_PreBool_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Multiply_VectorFloat_ReturnValue_9) == 0x0009B0, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Multiply_VectorFloat_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Add_VectorVector_ReturnValue_12) == 0x0009C8, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Add_VectorVector_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_TraceDown_hitLocation) == 0x0009E0, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_TraceDown_hitLocation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_TraceDown_hitNormal) == 0x0009F8, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_TraceDown_hitNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_TraceDown_hitSomething) == 0x000A10, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_TraceDown_hitSomething' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_TraceTowardsDirection_hitLocation) == 0x000A18, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_TraceTowardsDirection_hitLocation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_TraceTowardsDirection_hitNormal) == 0x000A30, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_TraceTowardsDirection_hitNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_TraceTowardsDirection_lastLocation) == 0x000A48, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_TraceTowardsDirection_lastLocation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_TraceTowardsDirection_traceDirection) == 0x000A60, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_TraceTowardsDirection_traceDirection' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_TraceTowardsDirection_hitSomething) == 0x000A78, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_TraceTowardsDirection_hitSomething' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_TraceTowardsDirection_targetReached) == 0x000A79, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_TraceTowardsDirection_targetReached' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Less_IntInt_ReturnValue_9) == 0x000A7A, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Less_IntInt_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Add_IntInt_ReturnValue_7) == 0x000A7C, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Add_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Less_DoubleDouble_A_ImplicitCast) == 0x000A80, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Less_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x000A88, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_EqualEqual_VectorVector_ErrorTolerance_ImplicitCast) == 0x000A90, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_EqualEqual_VectorVector_ErrorTolerance_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000A98, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000AA0, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_EqualEqual_VectorVector_ErrorTolerance_ImplicitCast_1) == 0x000AA8, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_EqualEqual_VectorVector_ErrorTolerance_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Divide_DoubleDouble_B_ImplicitCast_1) == 0x000AB0, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Divide_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Divide_DoubleDouble_A_ImplicitCast_1) == 0x000AB8, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Divide_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast) == 0x000AC0, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast) == 0x000AC4, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000AC8, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_DoCheckSegment, CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast) == 0x000AD0, "Member 'StemSpline_BP_C_DoCheckSegment::CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast' has a wrong offset!");

// Function StemSpline_BP.StemSpline_BP_C.FindBridgeEdge
// 0x0308 (0x0308 - 0x0000)
struct StemSpline_BP_C_FindBridgeEdge final
{
public:
	int32                                         MaxSegmentChecks;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                FromWhere;                                         // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartNormal;                                       // 0x0020(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Direction_0;                                       // 0x0038(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Found;                                             // 0x0050(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                EdgeLocation;                                      // 0x0058(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                EdgeNormal;                                        // 0x0070(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitNormal;                                         // 0x0088(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitLoc;                                            // 0x00A0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LastLoc;                                           // 0x00B8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxSegmentChecks_;                                 // 0x00D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SegmentsChecked;                                   // 0x00D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Direction_;                                        // 0x00D8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CurrentNormal;                                     // 0x00F0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartLoc;                                          // 0x0108(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0128(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0140(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_TraceDown_hitLocation;                    // 0x0158(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_TraceDown_hitNormal;                      // 0x0170(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TraceDown_hitSomething;                   // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SearchForEdge_FoundAnEdge_;               // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18A[0x6];                                      // 0x018A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_SearchForEdge_foundEdgeLocation;          // 0x0190(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SearchForEdge_foundEdgeNormal;            // 0x01A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C1[0x7];                                      // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x01C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Divide_VectorInt_ReturnValue;             // 0x01E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x01F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;           // 0x0210(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22C[0x4];                                      // 0x022C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_2;       // 0x0230(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_3;           // 0x0248(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_261[0x7];                                      // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_3;       // 0x0268(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_284[0x4];                                      // 0x0284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_4;           // 0x0288(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc__Bridge__TraceTowardsDirection_hitSomething; // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A1[0x7];                                      // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc__Bridge__TraceTowardsDirection_lastLocation; // 0x02A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc__Bridge__TraceTowardsDirection_hitLocation; // 0x02C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc__Bridge__TraceTowardsDirection_hitNormal; // 0x02D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc__Bridge__TraceTowardsDirection_traceDirection; // 0x02F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StemSpline_BP_C_FindBridgeEdge) == 0x000008, "Wrong alignment on StemSpline_BP_C_FindBridgeEdge");
static_assert(sizeof(StemSpline_BP_C_FindBridgeEdge) == 0x000308, "Wrong size on StemSpline_BP_C_FindBridgeEdge");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, MaxSegmentChecks) == 0x000000, "Member 'StemSpline_BP_C_FindBridgeEdge::MaxSegmentChecks' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, FromWhere) == 0x000008, "Member 'StemSpline_BP_C_FindBridgeEdge::FromWhere' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, StartNormal) == 0x000020, "Member 'StemSpline_BP_C_FindBridgeEdge::StartNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, Direction_0) == 0x000038, "Member 'StemSpline_BP_C_FindBridgeEdge::Direction_0' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, Found) == 0x000050, "Member 'StemSpline_BP_C_FindBridgeEdge::Found' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, EdgeLocation) == 0x000058, "Member 'StemSpline_BP_C_FindBridgeEdge::EdgeLocation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, EdgeNormal) == 0x000070, "Member 'StemSpline_BP_C_FindBridgeEdge::EdgeNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, HitNormal) == 0x000088, "Member 'StemSpline_BP_C_FindBridgeEdge::HitNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, HitLoc) == 0x0000A0, "Member 'StemSpline_BP_C_FindBridgeEdge::HitLoc' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, LastLoc) == 0x0000B8, "Member 'StemSpline_BP_C_FindBridgeEdge::LastLoc' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, MaxSegmentChecks_) == 0x0000D0, "Member 'StemSpline_BP_C_FindBridgeEdge::MaxSegmentChecks_' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, SegmentsChecked) == 0x0000D4, "Member 'StemSpline_BP_C_FindBridgeEdge::SegmentsChecked' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, Direction_) == 0x0000D8, "Member 'StemSpline_BP_C_FindBridgeEdge::Direction_' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, CurrentNormal) == 0x0000F0, "Member 'StemSpline_BP_C_FindBridgeEdge::CurrentNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, StartLoc) == 0x000108, "Member 'StemSpline_BP_C_FindBridgeEdge::StartLoc' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, Temp_int_Variable) == 0x000120, "Member 'StemSpline_BP_C_FindBridgeEdge::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, Temp_int_Variable_1) == 0x000124, "Member 'StemSpline_BP_C_FindBridgeEdge::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000128, "Member 'StemSpline_BP_C_FindBridgeEdge::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, CallFunc_Add_VectorVector_ReturnValue) == 0x000140, "Member 'StemSpline_BP_C_FindBridgeEdge::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, CallFunc_TraceDown_hitLocation) == 0x000158, "Member 'StemSpline_BP_C_FindBridgeEdge::CallFunc_TraceDown_hitLocation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, CallFunc_TraceDown_hitNormal) == 0x000170, "Member 'StemSpline_BP_C_FindBridgeEdge::CallFunc_TraceDown_hitNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, CallFunc_TraceDown_hitSomething) == 0x000188, "Member 'StemSpline_BP_C_FindBridgeEdge::CallFunc_TraceDown_hitSomething' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, CallFunc_SearchForEdge_FoundAnEdge_) == 0x000189, "Member 'StemSpline_BP_C_FindBridgeEdge::CallFunc_SearchForEdge_FoundAnEdge_' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, CallFunc_SearchForEdge_foundEdgeLocation) == 0x000190, "Member 'StemSpline_BP_C_FindBridgeEdge::CallFunc_SearchForEdge_foundEdgeLocation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, CallFunc_SearchForEdge_foundEdgeNormal) == 0x0001A8, "Member 'StemSpline_BP_C_FindBridgeEdge::CallFunc_SearchForEdge_foundEdgeNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0001C0, "Member 'StemSpline_BP_C_FindBridgeEdge::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, CallFunc_Add_VectorVector_ReturnValue_1) == 0x0001C8, "Member 'StemSpline_BP_C_FindBridgeEdge::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, CallFunc_Divide_VectorInt_ReturnValue) == 0x0001E0, "Member 'StemSpline_BP_C_FindBridgeEdge::CallFunc_Divide_VectorInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x0001F8, "Member 'StemSpline_BP_C_FindBridgeEdge::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, CallFunc_Add_VectorVector_ReturnValue_2) == 0x000210, "Member 'StemSpline_BP_C_FindBridgeEdge::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, CallFunc_Add_IntInt_ReturnValue) == 0x000228, "Member 'StemSpline_BP_C_FindBridgeEdge::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, CallFunc_Multiply_VectorFloat_ReturnValue_2) == 0x000230, "Member 'StemSpline_BP_C_FindBridgeEdge::CallFunc_Multiply_VectorFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, CallFunc_Add_VectorVector_ReturnValue_3) == 0x000248, "Member 'StemSpline_BP_C_FindBridgeEdge::CallFunc_Add_VectorVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000260, "Member 'StemSpline_BP_C_FindBridgeEdge::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, CallFunc_Multiply_VectorFloat_ReturnValue_3) == 0x000268, "Member 'StemSpline_BP_C_FindBridgeEdge::CallFunc_Multiply_VectorFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, CallFunc_Add_IntInt_ReturnValue_1) == 0x000280, "Member 'StemSpline_BP_C_FindBridgeEdge::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, CallFunc_Add_VectorVector_ReturnValue_4) == 0x000288, "Member 'StemSpline_BP_C_FindBridgeEdge::CallFunc_Add_VectorVector_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, CallFunc__Bridge__TraceTowardsDirection_hitSomething) == 0x0002A0, "Member 'StemSpline_BP_C_FindBridgeEdge::CallFunc__Bridge__TraceTowardsDirection_hitSomething' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, CallFunc__Bridge__TraceTowardsDirection_lastLocation) == 0x0002A8, "Member 'StemSpline_BP_C_FindBridgeEdge::CallFunc__Bridge__TraceTowardsDirection_lastLocation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, CallFunc__Bridge__TraceTowardsDirection_hitLocation) == 0x0002C0, "Member 'StemSpline_BP_C_FindBridgeEdge::CallFunc__Bridge__TraceTowardsDirection_hitLocation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, CallFunc__Bridge__TraceTowardsDirection_hitNormal) == 0x0002D8, "Member 'StemSpline_BP_C_FindBridgeEdge::CallFunc__Bridge__TraceTowardsDirection_hitNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindBridgeEdge, CallFunc__Bridge__TraceTowardsDirection_traceDirection) == 0x0002F0, "Member 'StemSpline_BP_C_FindBridgeEdge::CallFunc__Bridge__TraceTowardsDirection_traceDirection' has a wrong offset!");

// Function StemSpline_BP.StemSpline_BP_C.FindClosestValue
// 0x0090 (0x0090 - 0x0000)
struct StemSpline_BP_C_FindClosestValue final
{
public:
	TArray<double>                                InArray;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	double                                        ToValue;                                           // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ClosestValueIndex_;                                // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Value;                                             // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ClosestValueIndex;                                 // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ClosestDistance;                                   // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Array_Get_Item_1;                         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Abs_ReturnValue;                          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Abs_ReturnValue_1;                        // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StemSpline_BP_C_FindClosestValue) == 0x000008, "Wrong alignment on StemSpline_BP_C_FindClosestValue");
static_assert(sizeof(StemSpline_BP_C_FindClosestValue) == 0x000090, "Wrong size on StemSpline_BP_C_FindClosestValue");
static_assert(offsetof(StemSpline_BP_C_FindClosestValue, InArray) == 0x000000, "Member 'StemSpline_BP_C_FindClosestValue::InArray' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindClosestValue, ToValue) == 0x000010, "Member 'StemSpline_BP_C_FindClosestValue::ToValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindClosestValue, ClosestValueIndex_) == 0x000018, "Member 'StemSpline_BP_C_FindClosestValue::ClosestValueIndex_' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindClosestValue, Value) == 0x000020, "Member 'StemSpline_BP_C_FindClosestValue::Value' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindClosestValue, ClosestValueIndex) == 0x000028, "Member 'StemSpline_BP_C_FindClosestValue::ClosestValueIndex' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindClosestValue, ClosestDistance) == 0x000030, "Member 'StemSpline_BP_C_FindClosestValue::ClosestDistance' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindClosestValue, Temp_int_Array_Index_Variable) == 0x000038, "Member 'StemSpline_BP_C_FindClosestValue::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindClosestValue, CallFunc_Array_Get_Item) == 0x000040, "Member 'StemSpline_BP_C_FindClosestValue::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindClosestValue, CallFunc_Array_Get_Item_1) == 0x000048, "Member 'StemSpline_BP_C_FindClosestValue::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindClosestValue, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'StemSpline_BP_C_FindClosestValue::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindClosestValue, Temp_int_Loop_Counter_Variable) == 0x000054, "Member 'StemSpline_BP_C_FindClosestValue::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindClosestValue, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000058, "Member 'StemSpline_BP_C_FindClosestValue::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindClosestValue, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'StemSpline_BP_C_FindClosestValue::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindClosestValue, CallFunc_Abs_ReturnValue) == 0x000068, "Member 'StemSpline_BP_C_FindClosestValue::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindClosestValue, CallFunc_Add_IntInt_ReturnValue) == 0x000070, "Member 'StemSpline_BP_C_FindClosestValue::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindClosestValue, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000078, "Member 'StemSpline_BP_C_FindClosestValue::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindClosestValue, CallFunc_Abs_ReturnValue_1) == 0x000080, "Member 'StemSpline_BP_C_FindClosestValue::CallFunc_Abs_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindClosestValue, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000088, "Member 'StemSpline_BP_C_FindClosestValue::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");

// Function StemSpline_BP.StemSpline_BP_C.FindClosestVector
// 0x00E8 (0x00E8 - 0x0000)
struct StemSpline_BP_C_FindClosestVector final
{
public:
	TArray<struct FVector>                        InArray;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                ToVector;                                          // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ClosestValueIndex_;                                // 0x0028(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ToVector_;                                         // 0x0030(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ClosestValueIndex;                                 // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ClosestDistance;                                   // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Array_Get_Item;                           // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Array_Get_Item_1;                         // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue;                        // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue_1;                      // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StemSpline_BP_C_FindClosestVector) == 0x000008, "Wrong alignment on StemSpline_BP_C_FindClosestVector");
static_assert(sizeof(StemSpline_BP_C_FindClosestVector) == 0x0000E8, "Wrong size on StemSpline_BP_C_FindClosestVector");
static_assert(offsetof(StemSpline_BP_C_FindClosestVector, InArray) == 0x000000, "Member 'StemSpline_BP_C_FindClosestVector::InArray' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindClosestVector, ToVector) == 0x000010, "Member 'StemSpline_BP_C_FindClosestVector::ToVector' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindClosestVector, ClosestValueIndex_) == 0x000028, "Member 'StemSpline_BP_C_FindClosestVector::ClosestValueIndex_' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindClosestVector, ToVector_) == 0x000030, "Member 'StemSpline_BP_C_FindClosestVector::ToVector_' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindClosestVector, ClosestValueIndex) == 0x000048, "Member 'StemSpline_BP_C_FindClosestVector::ClosestValueIndex' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindClosestVector, ClosestDistance) == 0x000050, "Member 'StemSpline_BP_C_FindClosestVector::ClosestDistance' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindClosestVector, CallFunc_Array_Get_Item) == 0x000058, "Member 'StemSpline_BP_C_FindClosestVector::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindClosestVector, CallFunc_Array_Length_ReturnValue) == 0x000070, "Member 'StemSpline_BP_C_FindClosestVector::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindClosestVector, Temp_int_Array_Index_Variable) == 0x000074, "Member 'StemSpline_BP_C_FindClosestVector::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindClosestVector, Temp_int_Loop_Counter_Variable) == 0x000078, "Member 'StemSpline_BP_C_FindClosestVector::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindClosestVector, CallFunc_Array_Get_Item_1) == 0x000080, "Member 'StemSpline_BP_C_FindClosestVector::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindClosestVector, CallFunc_Less_IntInt_ReturnValue) == 0x000098, "Member 'StemSpline_BP_C_FindClosestVector::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindClosestVector, CallFunc_Add_IntInt_ReturnValue) == 0x00009C, "Member 'StemSpline_BP_C_FindClosestVector::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindClosestVector, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000A0, "Member 'StemSpline_BP_C_FindClosestVector::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindClosestVector, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x0000B8, "Member 'StemSpline_BP_C_FindClosestVector::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindClosestVector, CallFunc_VSize_ReturnValue) == 0x0000D0, "Member 'StemSpline_BP_C_FindClosestVector::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindClosestVector, CallFunc_VSize_ReturnValue_1) == 0x0000D8, "Member 'StemSpline_BP_C_FindClosestVector::CallFunc_VSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindClosestVector, CallFunc_Less_DoubleDouble_ReturnValue) == 0x0000E0, "Member 'StemSpline_BP_C_FindClosestVector::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");

// Function StemSpline_BP.StemSpline_BP_C.FindStartPoint
// 0x02C8 (0x02C8 - 0x0000)
struct StemSpline_BP_C_FindStartPoint final
{
public:
	struct FVector                                StartLoc;                                          // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartNormal;                                       // 0x0018(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0030(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x00D0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x01B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x01BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1BB[0x1];                                      // 0x01BB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C4[0x4];                                      // 0x01C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x01C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x01E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x01F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0210(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0228(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0230(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0238(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0254(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25C[0x4];                                      // 0x025C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0260(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0278(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x02A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x02B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StemSpline_BP_C_FindStartPoint) == 0x000008, "Wrong alignment on StemSpline_BP_C_FindStartPoint");
static_assert(sizeof(StemSpline_BP_C_FindStartPoint) == 0x0002C8, "Wrong size on StemSpline_BP_C_FindStartPoint");
static_assert(offsetof(StemSpline_BP_C_FindStartPoint, StartLoc) == 0x000000, "Member 'StemSpline_BP_C_FindStartPoint::StartLoc' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindStartPoint, StartNormal) == 0x000018, "Member 'StemSpline_BP_C_FindStartPoint::StartNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindStartPoint, Temp_object_Variable) == 0x000030, "Member 'StemSpline_BP_C_FindStartPoint::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindStartPoint, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000040, "Member 'StemSpline_BP_C_FindStartPoint::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindStartPoint, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000058, "Member 'StemSpline_BP_C_FindStartPoint::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindStartPoint, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x000070, "Member 'StemSpline_BP_C_FindStartPoint::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindStartPoint, CallFunc_Add_VectorVector_ReturnValue) == 0x000088, "Member 'StemSpline_BP_C_FindStartPoint::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindStartPoint, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000A0, "Member 'StemSpline_BP_C_FindStartPoint::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindStartPoint, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000B8, "Member 'StemSpline_BP_C_FindStartPoint::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindStartPoint, CallFunc_LineTraceSingle_OutHit) == 0x0000D0, "Member 'StemSpline_BP_C_FindStartPoint::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindStartPoint, CallFunc_LineTraceSingle_ReturnValue) == 0x0001B8, "Member 'StemSpline_BP_C_FindStartPoint::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindStartPoint, CallFunc_BreakHitResult_bBlockingHit) == 0x0001B9, "Member 'StemSpline_BP_C_FindStartPoint::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindStartPoint, CallFunc_BreakHitResult_bInitialOverlap) == 0x0001BA, "Member 'StemSpline_BP_C_FindStartPoint::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindStartPoint, CallFunc_BreakHitResult_Time) == 0x0001BC, "Member 'StemSpline_BP_C_FindStartPoint::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindStartPoint, CallFunc_BreakHitResult_Distance) == 0x0001C0, "Member 'StemSpline_BP_C_FindStartPoint::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindStartPoint, CallFunc_BreakHitResult_Location) == 0x0001C8, "Member 'StemSpline_BP_C_FindStartPoint::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindStartPoint, CallFunc_BreakHitResult_ImpactPoint) == 0x0001E0, "Member 'StemSpline_BP_C_FindStartPoint::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindStartPoint, CallFunc_BreakHitResult_Normal) == 0x0001F8, "Member 'StemSpline_BP_C_FindStartPoint::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindStartPoint, CallFunc_BreakHitResult_ImpactNormal) == 0x000210, "Member 'StemSpline_BP_C_FindStartPoint::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindStartPoint, CallFunc_BreakHitResult_PhysMat) == 0x000228, "Member 'StemSpline_BP_C_FindStartPoint::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindStartPoint, CallFunc_BreakHitResult_HitActor) == 0x000230, "Member 'StemSpline_BP_C_FindStartPoint::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindStartPoint, CallFunc_BreakHitResult_HitComponent) == 0x000238, "Member 'StemSpline_BP_C_FindStartPoint::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindStartPoint, CallFunc_BreakHitResult_HitBoneName) == 0x000240, "Member 'StemSpline_BP_C_FindStartPoint::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindStartPoint, CallFunc_BreakHitResult_BoneName) == 0x000248, "Member 'StemSpline_BP_C_FindStartPoint::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindStartPoint, CallFunc_BreakHitResult_HitItem) == 0x000250, "Member 'StemSpline_BP_C_FindStartPoint::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindStartPoint, CallFunc_BreakHitResult_ElementIndex) == 0x000254, "Member 'StemSpline_BP_C_FindStartPoint::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindStartPoint, CallFunc_BreakHitResult_FaceIndex) == 0x000258, "Member 'StemSpline_BP_C_FindStartPoint::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindStartPoint, CallFunc_BreakHitResult_TraceStart) == 0x000260, "Member 'StemSpline_BP_C_FindStartPoint::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindStartPoint, CallFunc_BreakHitResult_TraceEnd) == 0x000278, "Member 'StemSpline_BP_C_FindStartPoint::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindStartPoint, CallFunc_BreakVector_X) == 0x000290, "Member 'StemSpline_BP_C_FindStartPoint::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindStartPoint, CallFunc_BreakVector_Y) == 0x000298, "Member 'StemSpline_BP_C_FindStartPoint::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindStartPoint, CallFunc_BreakVector_Z) == 0x0002A0, "Member 'StemSpline_BP_C_FindStartPoint::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindStartPoint, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0002A8, "Member 'StemSpline_BP_C_FindStartPoint::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_FindStartPoint, CallFunc_MakeVector_ReturnValue) == 0x0002B0, "Member 'StemSpline_BP_C_FindStartPoint::CallFunc_MakeVector_ReturnValue' has a wrong offset!");

// Function StemSpline_BP.StemSpline_BP_C.SearchForEdge
// 0x0430 (0x0430 - 0x0000)
struct StemSpline_BP_C_SearchForEdge final
{
public:
	struct FVector                                SearchStartLocation;                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SearchDirectionNormal;                             // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ForSubstem;                                        // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FoundAnEdge_;                                      // 0x0031(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                FoundEdgeLocation;                                 // 0x0038(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FoundEdgeNormal;                                   // 0x0050(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TraceStart;                                        // 0x0068(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         I;                                                 // 0x0080(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ForSubstem_;                                       // 0x0084(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85[0x3];                                       // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                SearchStartLoc;                                    // 0x0088(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SearchDirNormal;                                   // 0x00A0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                EdgeNormal;                                        // 0x00B8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                EdgeLocation;                                      // 0x00D0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FoundAnEdge;                                       // 0x00E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FC[0x4];                                       // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue_1;                  // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_115[0x3];                                      // 0x0115(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_SelectVector_ReturnValue;                 // 0x0118(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SelectVector_ReturnValue_1;               // 0x0130(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SelectVector_ReturnValue_2;               // 0x0148(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RotateAngleAxis_ReturnValue;              // 0x0160(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Dot_VectorVector_ReturnValue;             // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_184[0x4];                                      // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Abs_ReturnValue;                          // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x01B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Cross_VectorVector_ReturnValue;           // 0x01C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E1[0x7];                                      // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x01F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0208(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_221[0x7];                                      // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0228(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0240(0x0010)(ConstParm, ReferenceParm)
	int32                                         Temp_int_Variable;                                 // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_254[0x4];                                      // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x0258(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0341(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0342(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_343[0x1];                                      // 0x0343(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0344(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0348(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34C[0x4];                                      // 0x034C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0350(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0368(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0380(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0398(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x03B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x03B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x03C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x03C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x03D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x03D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x03DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x03E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E4[0x4];                                      // 0x03E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x03E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0400(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0418(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x041C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x041D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41E[0x2];                                      // 0x041E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast;    // 0x0420(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_424[0x4];                                      // 0x0424(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x0428(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StemSpline_BP_C_SearchForEdge) == 0x000008, "Wrong alignment on StemSpline_BP_C_SearchForEdge");
static_assert(sizeof(StemSpline_BP_C_SearchForEdge) == 0x000430, "Wrong size on StemSpline_BP_C_SearchForEdge");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, SearchStartLocation) == 0x000000, "Member 'StemSpline_BP_C_SearchForEdge::SearchStartLocation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, SearchDirectionNormal) == 0x000018, "Member 'StemSpline_BP_C_SearchForEdge::SearchDirectionNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, ForSubstem) == 0x000030, "Member 'StemSpline_BP_C_SearchForEdge::ForSubstem' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, FoundAnEdge_) == 0x000031, "Member 'StemSpline_BP_C_SearchForEdge::FoundAnEdge_' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, FoundEdgeLocation) == 0x000038, "Member 'StemSpline_BP_C_SearchForEdge::FoundEdgeLocation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, FoundEdgeNormal) == 0x000050, "Member 'StemSpline_BP_C_SearchForEdge::FoundEdgeNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, TraceStart) == 0x000068, "Member 'StemSpline_BP_C_SearchForEdge::TraceStart' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, I) == 0x000080, "Member 'StemSpline_BP_C_SearchForEdge::I' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, ForSubstem_) == 0x000084, "Member 'StemSpline_BP_C_SearchForEdge::ForSubstem_' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, SearchStartLoc) == 0x000088, "Member 'StemSpline_BP_C_SearchForEdge::SearchStartLoc' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, SearchDirNormal) == 0x0000A0, "Member 'StemSpline_BP_C_SearchForEdge::SearchDirNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, EdgeNormal) == 0x0000B8, "Member 'StemSpline_BP_C_SearchForEdge::EdgeNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, EdgeLocation) == 0x0000D0, "Member 'StemSpline_BP_C_SearchForEdge::EdgeLocation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, FoundAnEdge) == 0x0000E8, "Member 'StemSpline_BP_C_SearchForEdge::FoundAnEdge' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_SelectFloat_ReturnValue) == 0x0000F0, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_SelectInt_ReturnValue) == 0x0000F8, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000100, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_SelectFloat_ReturnValue_1) == 0x000108, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_SelectInt_ReturnValue_1) == 0x000110, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_SelectInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_Greater_IntInt_ReturnValue) == 0x000114, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_SelectVector_ReturnValue) == 0x000118, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_SelectVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_SelectVector_ReturnValue_1) == 0x000130, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_SelectVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_SelectVector_ReturnValue_2) == 0x000148, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_SelectVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_RotateAngleAxis_ReturnValue) == 0x000160, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_RotateAngleAxis_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_Dot_VectorVector_ReturnValue) == 0x000178, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000180, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_Abs_ReturnValue) == 0x000188, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000190, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000198, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0001A0, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x0001A8, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0001B0, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_Cross_VectorVector_ReturnValue) == 0x0001C8, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_Cross_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, Temp_bool_Variable) == 0x0001E0, "Member 'StemSpline_BP_C_SearchForEdge::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x0001E8, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x0001F0, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_Add_VectorVector_ReturnValue) == 0x000208, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_Not_PreBool_ReturnValue) == 0x000220, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000228, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, Temp_object_Variable) == 0x000240, "Member 'StemSpline_BP_C_SearchForEdge::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, Temp_int_Variable) == 0x000250, "Member 'StemSpline_BP_C_SearchForEdge::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_LineTraceSingle_OutHit) == 0x000258, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_LineTraceSingle_ReturnValue) == 0x000340, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_BreakHitResult_bBlockingHit) == 0x000341, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_BreakHitResult_bInitialOverlap) == 0x000342, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_BreakHitResult_Time) == 0x000344, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_BreakHitResult_Distance) == 0x000348, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_BreakHitResult_Location) == 0x000350, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_BreakHitResult_ImpactPoint) == 0x000368, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_BreakHitResult_Normal) == 0x000380, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_BreakHitResult_ImpactNormal) == 0x000398, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_BreakHitResult_PhysMat) == 0x0003B0, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_BreakHitResult_HitActor) == 0x0003B8, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_BreakHitResult_HitComponent) == 0x0003C0, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_BreakHitResult_HitBoneName) == 0x0003C8, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_BreakHitResult_BoneName) == 0x0003D0, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_BreakHitResult_HitItem) == 0x0003D8, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_BreakHitResult_ElementIndex) == 0x0003DC, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_BreakHitResult_FaceIndex) == 0x0003E0, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_BreakHitResult_TraceStart) == 0x0003E8, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_BreakHitResult_TraceEnd) == 0x000400, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_Add_IntInt_ReturnValue) == 0x000418, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00041C, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_BooleanAND_ReturnValue) == 0x00041D, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast) == 0x000420, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SearchForEdge, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000428, "Member 'StemSpline_BP_C_SearchForEdge::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");

// Function StemSpline_BP.StemSpline_BP_C.SeekForBridge
// 0x0800 (0x0800 - 0x0000)
struct StemSpline_BP_C_SeekForBridge final
{
public:
	struct FVector                                StartLoc;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartNormal;                                       // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bridgeBuilt;                                       // 0x0030(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        bridgePoints;                                      // 0x0038(0x0010)(Parm, OutParm)
	struct FVector                                NewSurfaceNormal;                                  // 0x0048(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Length;                                            // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SeekDir;                                           // 0x0068(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NewEdgeNormal;                                     // 0x0080(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                DetectedNormal;                                    // 0x0098(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                DetectedLoc;                                       // 0x00B0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TraceEnd;                                          // 0x00C8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TraceStart;                                        // 0x00E0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TwondCheckDone;                                    // 0x00F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        RandomizedGravity;                                 // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentTraceCount;                                 // 0x0108(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10C[0x4];                                      // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CurrentTraceAngle;                                 // 0x0110(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NewEdgePoint;                                      // 0x0118(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartEdgePoint;                                    // 0x0130(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        bridgePoints_;                                     // 0x0148(0x0010)(Edit, BlueprintVisible)
	double                                        bridgeSegmentLength;                               // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NrOfBridgeSegments;                                // 0x0160(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x0164(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_165[0x3];                                      // 0x0165(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0178(0x0010)(ConstParm, ReferenceParm)
	EDrawDebugTrace                               Temp_byte_Variable;                                // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDrawDebugTrace                               Temp_byte_Variable_1;                              // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18A[0x2];                                      // 0x018A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_191[0x7];                                      // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0198(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x01B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SelectVector_ReturnValue;                 // 0x01C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x01E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x01F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x0210(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0228(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable_1;                            // 0x0240(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_FindBridgeEdge_found;                     // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_251[0x7];                                      // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_FindBridgeEdge_edgeLocation;              // 0x0258(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_FindBridgeEdge_edgeNormal;                // 0x0270(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDrawDebugTrace                               Temp_byte_Variable_2;                              // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_291[0x3];                                      // 0x0291(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0294(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_299[0x3];                                      // 0x0299(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomFloatInRangeFromStream_ReturnValue; // 0x029C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x02A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDrawDebugTrace                               Temp_byte_Variable_3;                              // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A9[0x3];                                      // 0x02A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x02AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDrawDebugTrace                               K2Node_Select_Default;                             // 0x02B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B2[0x6];                                      // 0x02B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x02B8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x03A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x03A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A3[0x1];                                      // 0x03A3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x03A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x03A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AC[0x4];                                      // 0x03AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x03B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x03C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x03E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x03F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0410(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0418(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0420(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0428(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0430(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0438(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x043C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0440(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_444[0x4];                                      // 0x0444(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0448(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0460(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_VectorVector_ReturnValue;        // 0x0478(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_479[0x7];                                      // 0x0479(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_2;           // 0x0480(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0488(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_VectorVector_ReturnValue_1;      // 0x0489(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x048A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48B[0x5];                                      // 0x048B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0490(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x04A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x04C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;           // 0x04D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x04F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F4[0x4];                                      // 0x04F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x04F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0500(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0504(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_505[0x3];                                      // 0x0505(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0508(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0510(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDrawDebugTrace                               K2Node_Select_Default_1;                           // 0x0518(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_519[0x7];                                      // 0x0519(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue_2;                 // 0x0520(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit_1;                 // 0x0538(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue_1;            // 0x0620(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit_1;            // 0x0621(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap_1;         // 0x0622(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_623[0x1];                                      // 0x0623(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time_1;                    // 0x0624(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance_1;                // 0x0628(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62C[0x4];                                      // 0x062C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location_1;                // 0x0630(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint_1;             // 0x0648(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal_1;                  // 0x0660(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal_1;            // 0x0678(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat_1;                 // 0x0690(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor_1;                // 0x0698(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent_1;            // 0x06A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName_1;             // 0x06A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName_1;                // 0x06B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem_1;                 // 0x06B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex_1;            // 0x06BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex_1;               // 0x06C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C4[0x4];                                      // 0x06C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart_1;              // 0x06C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd_1;                // 0x06E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x06F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_VectorVector_ReturnValue_2;      // 0x0700(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_VectorVector_ReturnValue_3;      // 0x0701(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0702(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0703(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_704[0x4];                                      // 0x0704(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0708(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x0720(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_2;       // 0x0738(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x0750(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_3;           // 0x0768(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue;                        // 0x0780(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_2;      // 0x0788(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x07A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x07A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A5[0x3];                                      // 0x07A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x07A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7AC[0x4];                                      // 0x07AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x07B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_2;        // 0x07B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x07C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast; // 0x07C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x07C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast; // 0x07D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D4[0x4];                                      // 0x07D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x07D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x07E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast;        // 0x07E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7EC[0x4];                                      // 0x07EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x07F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast_1;     // 0x07F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StemSpline_BP_C_SeekForBridge) == 0x000008, "Wrong alignment on StemSpline_BP_C_SeekForBridge");
static_assert(sizeof(StemSpline_BP_C_SeekForBridge) == 0x000800, "Wrong size on StemSpline_BP_C_SeekForBridge");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, StartLoc) == 0x000000, "Member 'StemSpline_BP_C_SeekForBridge::StartLoc' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, StartNormal) == 0x000018, "Member 'StemSpline_BP_C_SeekForBridge::StartNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, bridgeBuilt) == 0x000030, "Member 'StemSpline_BP_C_SeekForBridge::bridgeBuilt' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, bridgePoints) == 0x000038, "Member 'StemSpline_BP_C_SeekForBridge::bridgePoints' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, NewSurfaceNormal) == 0x000048, "Member 'StemSpline_BP_C_SeekForBridge::NewSurfaceNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, Length) == 0x000060, "Member 'StemSpline_BP_C_SeekForBridge::Length' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, SeekDir) == 0x000068, "Member 'StemSpline_BP_C_SeekForBridge::SeekDir' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, NewEdgeNormal) == 0x000080, "Member 'StemSpline_BP_C_SeekForBridge::NewEdgeNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, DetectedNormal) == 0x000098, "Member 'StemSpline_BP_C_SeekForBridge::DetectedNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, DetectedLoc) == 0x0000B0, "Member 'StemSpline_BP_C_SeekForBridge::DetectedLoc' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, TraceEnd) == 0x0000C8, "Member 'StemSpline_BP_C_SeekForBridge::TraceEnd' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, TraceStart) == 0x0000E0, "Member 'StemSpline_BP_C_SeekForBridge::TraceStart' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, TwondCheckDone) == 0x0000F8, "Member 'StemSpline_BP_C_SeekForBridge::TwondCheckDone' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, RandomizedGravity) == 0x000100, "Member 'StemSpline_BP_C_SeekForBridge::RandomizedGravity' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CurrentTraceCount) == 0x000108, "Member 'StemSpline_BP_C_SeekForBridge::CurrentTraceCount' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CurrentTraceAngle) == 0x000110, "Member 'StemSpline_BP_C_SeekForBridge::CurrentTraceAngle' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, NewEdgePoint) == 0x000118, "Member 'StemSpline_BP_C_SeekForBridge::NewEdgePoint' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, StartEdgePoint) == 0x000130, "Member 'StemSpline_BP_C_SeekForBridge::StartEdgePoint' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, bridgePoints_) == 0x000148, "Member 'StemSpline_BP_C_SeekForBridge::bridgePoints_' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, bridgeSegmentLength) == 0x000158, "Member 'StemSpline_BP_C_SeekForBridge::bridgeSegmentLength' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, NrOfBridgeSegments) == 0x000160, "Member 'StemSpline_BP_C_SeekForBridge::NrOfBridgeSegments' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x000164, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, Temp_int_Variable) == 0x000168, "Member 'StemSpline_BP_C_SeekForBridge::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, Temp_int_Variable_1) == 0x00016C, "Member 'StemSpline_BP_C_SeekForBridge::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000170, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_Add_IntInt_ReturnValue) == 0x000174, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, Temp_object_Variable) == 0x000178, "Member 'StemSpline_BP_C_SeekForBridge::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, Temp_byte_Variable) == 0x000188, "Member 'StemSpline_BP_C_SeekForBridge::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, Temp_byte_Variable_1) == 0x000189, "Member 'StemSpline_BP_C_SeekForBridge::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, Temp_int_Variable_2) == 0x00018C, "Member 'StemSpline_BP_C_SeekForBridge::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, Temp_bool_Variable) == 0x000190, "Member 'StemSpline_BP_C_SeekForBridge::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_GetForwardVector_ReturnValue) == 0x000198, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_MakeVector_ReturnValue) == 0x0001B0, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_SelectVector_ReturnValue) == 0x0001C8, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_SelectVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_Add_VectorVector_ReturnValue) == 0x0001E0, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_Normal_ReturnValue) == 0x0001F8, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_MakeVector_ReturnValue_1) == 0x000210, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000228, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, Temp_object_Variable_1) == 0x000240, "Member 'StemSpline_BP_C_SeekForBridge::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_FindBridgeEdge_found) == 0x000250, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_FindBridgeEdge_found' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_FindBridgeEdge_edgeLocation) == 0x000258, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_FindBridgeEdge_edgeLocation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_FindBridgeEdge_edgeNormal) == 0x000270, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_FindBridgeEdge_edgeNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000288, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, Temp_byte_Variable_2) == 0x000290, "Member 'StemSpline_BP_C_SeekForBridge::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_Add_IntInt_ReturnValue_1) == 0x000294, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000298, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_RandomFloatInRangeFromStream_ReturnValue) == 0x00029C, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_RandomFloatInRangeFromStream_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x0002A0, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, Temp_byte_Variable_3) == 0x0002A8, "Member 'StemSpline_BP_C_SeekForBridge::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_Add_IntInt_ReturnValue_2) == 0x0002AC, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x0002B0, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, K2Node_Select_Default) == 0x0002B1, "Member 'StemSpline_BP_C_SeekForBridge::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_LineTraceSingle_OutHit) == 0x0002B8, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_LineTraceSingle_ReturnValue) == 0x0003A0, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_bBlockingHit) == 0x0003A1, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_bInitialOverlap) == 0x0003A2, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_Time) == 0x0003A4, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_Distance) == 0x0003A8, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_Location) == 0x0003B0, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_ImpactPoint) == 0x0003C8, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_Normal) == 0x0003E0, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_ImpactNormal) == 0x0003F8, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_PhysMat) == 0x000410, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_HitActor) == 0x000418, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_HitComponent) == 0x000420, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_HitBoneName) == 0x000428, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_BoneName) == 0x000430, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_HitItem) == 0x000438, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_ElementIndex) == 0x00043C, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_FaceIndex) == 0x000440, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_TraceStart) == 0x000448, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_TraceEnd) == 0x000460, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_NotEqual_VectorVector_ReturnValue) == 0x000478, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_NotEqual_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_Add_DoubleDouble_ReturnValue_2) == 0x000480, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_Add_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BooleanAND_ReturnValue) == 0x000488, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_NotEqual_VectorVector_ReturnValue_1) == 0x000489, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_NotEqual_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BooleanAND_ReturnValue_1) == 0x00048A, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000490, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_Add_VectorVector_ReturnValue_1) == 0x0004A8, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x0004C0, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_Add_VectorVector_ReturnValue_2) == 0x0004D8, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x0004F0, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x0004F8, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_GetFloatValue_ReturnValue) == 0x000500, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, Temp_bool_Variable_1) == 0x000504, "Member 'StemSpline_BP_C_SeekForBridge::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000508, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000510, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, K2Node_Select_Default_1) == 0x000518, "Member 'StemSpline_BP_C_SeekForBridge::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_MakeVector_ReturnValue_2) == 0x000520, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_MakeVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_LineTraceSingle_OutHit_1) == 0x000538, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_LineTraceSingle_OutHit_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_LineTraceSingle_ReturnValue_1) == 0x000620, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_LineTraceSingle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_bBlockingHit_1) == 0x000621, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_bBlockingHit_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_bInitialOverlap_1) == 0x000622, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_bInitialOverlap_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_Time_1) == 0x000624, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_Time_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_Distance_1) == 0x000628, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_Distance_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_Location_1) == 0x000630, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_Location_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_ImpactPoint_1) == 0x000648, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_ImpactPoint_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_Normal_1) == 0x000660, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_Normal_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_ImpactNormal_1) == 0x000678, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_ImpactNormal_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_PhysMat_1) == 0x000690, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_PhysMat_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_HitActor_1) == 0x000698, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_HitActor_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_HitComponent_1) == 0x0006A0, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_HitComponent_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_HitBoneName_1) == 0x0006A8, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_HitBoneName_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_BoneName_1) == 0x0006B0, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_BoneName_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_HitItem_1) == 0x0006B8, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_HitItem_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_ElementIndex_1) == 0x0006BC, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_ElementIndex_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_FaceIndex_1) == 0x0006C0, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_FaceIndex_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_TraceStart_1) == 0x0006C8, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_TraceStart_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BreakHitResult_TraceEnd_1) == 0x0006E0, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BreakHitResult_TraceEnd_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_Multiply_IntFloat_ReturnValue) == 0x0006F8, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_NotEqual_VectorVector_ReturnValue_2) == 0x000700, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_NotEqual_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_NotEqual_VectorVector_ReturnValue_3) == 0x000701, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_NotEqual_VectorVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BooleanAND_ReturnValue_2) == 0x000702, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_BooleanAND_ReturnValue_3) == 0x000703, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_FindLookAtRotation_ReturnValue) == 0x000708, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_Conv_RotatorToVector_ReturnValue) == 0x000720, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_Conv_RotatorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_Multiply_VectorFloat_ReturnValue_2) == 0x000738, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_Multiply_VectorFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x000750, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_Add_VectorVector_ReturnValue_3) == 0x000768, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_Add_VectorVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_VSize_ReturnValue) == 0x000780, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_Subtract_VectorVector_ReturnValue_2) == 0x000788, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_Subtract_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_Array_Add_ReturnValue) == 0x0007A0, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x0007A4, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x0007A8, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x0007B0, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_Divide_DoubleDouble_ReturnValue_2) == 0x0007B8, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_Divide_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_FFloor_ReturnValue) == 0x0007C0, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_FFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast) == 0x0007C4, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x0007C8, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast) == 0x0007D0, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x0007D8, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x0007E0, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_GetFloatValue_InTime_ImplicitCast) == 0x0007E8, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_GetFloatValue_InTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x0007F0, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SeekForBridge, CallFunc_Divide_DoubleDouble_B_ImplicitCast_1) == 0x0007F8, "Member 'StemSpline_BP_C_SeekForBridge::CallFunc_Divide_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");

// Function StemSpline_BP.StemSpline_BP_C.SetMainDirectionVector
// 0x0080 (0x0080 - 0x0000)
struct StemSpline_BP_C_SetMainDirectionVector final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetRightVector_ReturnValue;               // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StemSpline_BP_C_SetMainDirectionVector) == 0x000008, "Wrong alignment on StemSpline_BP_C_SetMainDirectionVector");
static_assert(sizeof(StemSpline_BP_C_SetMainDirectionVector) == 0x000080, "Wrong size on StemSpline_BP_C_SetMainDirectionVector");
static_assert(offsetof(StemSpline_BP_C_SetMainDirectionVector, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'StemSpline_BP_C_SetMainDirectionVector::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SetMainDirectionVector, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'StemSpline_BP_C_SetMainDirectionVector::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SetMainDirectionVector, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000020, "Member 'StemSpline_BP_C_SetMainDirectionVector::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SetMainDirectionVector, CallFunc_GetActorForwardVector_ReturnValue) == 0x000038, "Member 'StemSpline_BP_C_SetMainDirectionVector::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SetMainDirectionVector, CallFunc_FindLookAtRotation_ReturnValue) == 0x000050, "Member 'StemSpline_BP_C_SetMainDirectionVector::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_SetMainDirectionVector, CallFunc_GetRightVector_ReturnValue) == 0x000068, "Member 'StemSpline_BP_C_SetMainDirectionVector::CallFunc_GetRightVector_ReturnValue' has a wrong offset!");

// Function StemSpline_BP.StemSpline_BP_C.TraceDown
// 0x0278 (0x0278 - 0x0000)
struct StemSpline_BP_C_TraceDown final
{
public:
	struct FVector                                StartLocation;                                     // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RelativeNormal;                                    // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ForBridgeSeek;                                     // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                HitLocation;                                       // 0x0038(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitNormal;                                         // 0x0050(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HitSomething;                                      // 0x0068(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0070(0x0010)(ConstParm, ReferenceParm)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x00B8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x01A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A3[0x1];                                      // 0x01A3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1AC[0x4];                                      // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x01B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x01C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x01E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x01F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0210(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0218(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0220(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x023C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_244[0x4];                                      // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0248(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0260(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StemSpline_BP_C_TraceDown) == 0x000008, "Wrong alignment on StemSpline_BP_C_TraceDown");
static_assert(sizeof(StemSpline_BP_C_TraceDown) == 0x000278, "Wrong size on StemSpline_BP_C_TraceDown");
static_assert(offsetof(StemSpline_BP_C_TraceDown, StartLocation) == 0x000000, "Member 'StemSpline_BP_C_TraceDown::StartLocation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceDown, RelativeNormal) == 0x000018, "Member 'StemSpline_BP_C_TraceDown::RelativeNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceDown, ForBridgeSeek) == 0x000030, "Member 'StemSpline_BP_C_TraceDown::ForBridgeSeek' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceDown, HitLocation) == 0x000038, "Member 'StemSpline_BP_C_TraceDown::HitLocation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceDown, HitNormal) == 0x000050, "Member 'StemSpline_BP_C_TraceDown::HitNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceDown, HitSomething) == 0x000068, "Member 'StemSpline_BP_C_TraceDown::HitSomething' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceDown, Temp_object_Variable) == 0x000070, "Member 'StemSpline_BP_C_TraceDown::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceDown, CallFunc_SelectFloat_ReturnValue) == 0x000080, "Member 'StemSpline_BP_C_TraceDown::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceDown, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000088, "Member 'StemSpline_BP_C_TraceDown::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceDown, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000A0, "Member 'StemSpline_BP_C_TraceDown::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceDown, CallFunc_LineTraceSingle_OutHit) == 0x0000B8, "Member 'StemSpline_BP_C_TraceDown::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceDown, CallFunc_LineTraceSingle_ReturnValue) == 0x0001A0, "Member 'StemSpline_BP_C_TraceDown::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceDown, CallFunc_BreakHitResult_bBlockingHit) == 0x0001A1, "Member 'StemSpline_BP_C_TraceDown::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceDown, CallFunc_BreakHitResult_bInitialOverlap) == 0x0001A2, "Member 'StemSpline_BP_C_TraceDown::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceDown, CallFunc_BreakHitResult_Time) == 0x0001A4, "Member 'StemSpline_BP_C_TraceDown::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceDown, CallFunc_BreakHitResult_Distance) == 0x0001A8, "Member 'StemSpline_BP_C_TraceDown::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceDown, CallFunc_BreakHitResult_Location) == 0x0001B0, "Member 'StemSpline_BP_C_TraceDown::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceDown, CallFunc_BreakHitResult_ImpactPoint) == 0x0001C8, "Member 'StemSpline_BP_C_TraceDown::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceDown, CallFunc_BreakHitResult_Normal) == 0x0001E0, "Member 'StemSpline_BP_C_TraceDown::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceDown, CallFunc_BreakHitResult_ImpactNormal) == 0x0001F8, "Member 'StemSpline_BP_C_TraceDown::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceDown, CallFunc_BreakHitResult_PhysMat) == 0x000210, "Member 'StemSpline_BP_C_TraceDown::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceDown, CallFunc_BreakHitResult_HitActor) == 0x000218, "Member 'StemSpline_BP_C_TraceDown::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceDown, CallFunc_BreakHitResult_HitComponent) == 0x000220, "Member 'StemSpline_BP_C_TraceDown::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceDown, CallFunc_BreakHitResult_HitBoneName) == 0x000228, "Member 'StemSpline_BP_C_TraceDown::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceDown, CallFunc_BreakHitResult_BoneName) == 0x000230, "Member 'StemSpline_BP_C_TraceDown::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceDown, CallFunc_BreakHitResult_HitItem) == 0x000238, "Member 'StemSpline_BP_C_TraceDown::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceDown, CallFunc_BreakHitResult_ElementIndex) == 0x00023C, "Member 'StemSpline_BP_C_TraceDown::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceDown, CallFunc_BreakHitResult_FaceIndex) == 0x000240, "Member 'StemSpline_BP_C_TraceDown::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceDown, CallFunc_BreakHitResult_TraceStart) == 0x000248, "Member 'StemSpline_BP_C_TraceDown::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceDown, CallFunc_BreakHitResult_TraceEnd) == 0x000260, "Member 'StemSpline_BP_C_TraceDown::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");

// Function StemSpline_BP.StemSpline_BP_C.TraceTowardsDirection
// 0x0540 (0x0540 - 0x0000)
struct StemSpline_BP_C_TraceTowardsDirection final
{
public:
	struct FVector                                StartLocation;                                     // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RelativeNormal;                                    // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ForSubstem;                                        // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                HitLocation;                                       // 0x0038(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitNormal;                                         // 0x0050(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LastLocation;                                      // 0x0068(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TraceDirection;                                    // 0x0080(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HitSomething;                                      // 0x0098(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TargetReached;                                     // 0x0099(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A[0x6];                                       // 0x009A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                TraceDir;                                          // 0x00A0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                EndLoc;                                            // 0x00B8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Angle;                                             // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Dir;                                               // 0x00D8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ForSubstem_;                                       // 0x00F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                RelativeNormal_;                                   // 0x00F8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartLoc;                                          // 0x0110(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RandomIrregularity;                                // 0x0128(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0130(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0150(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0168(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0180(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue;                        // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B1[0x7];                                      // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_SelectVector_ReturnValue;                 // 0x01B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SelectVector_ReturnValue_1;               // 0x01D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_ReturnValue; // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1EC[0x4];                                      // 0x01EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x01F0(0x0010)(ConstParm, ReferenceParm)
	float                                         CallFunc_RandomFloatInRangeFromStream_ReturnValue_1; // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_204[0x4];                                      // 0x0204(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Cross_VectorVector_ReturnValue;           // 0x0208(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0220(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RotateAngleAxis_ReturnValue;              // 0x0238(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SelectVector_ReturnValue_2;               // 0x0250(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x0268(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x0350(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0351(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0352(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_353[0x1];                                      // 0x0353(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0354(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0358(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35C[0x4];                                      // 0x035C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0360(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0378(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0390(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x03A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x03C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x03C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x03D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x03D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x03E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x03E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x03EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x03F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F4[0x4];                                      // 0x03F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x03F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0410(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0428(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x0440(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_2;      // 0x0458(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue_1;                      // 0x0470(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0478(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_479[0x7];                                      // 0x0479(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_RotateAngleAxis_ReturnValue_1;            // 0x0480(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0498(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_499[0x7];                                      // 0x0499(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_SelectVector_ReturnValue_3;               // 0x04A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SelectVector_ReturnValue_4;               // 0x04B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x04D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x04D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x04E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x04F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast;    // 0x0510(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast; // 0x0514(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast_1; // 0x0518(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast; // 0x051C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_randomIrregularity_ImplicitCast; // 0x0520(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast_1; // 0x0528(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52C[0x4];                                      // 0x052C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_VariableSet_randomIrregularity_ImplicitCast_1; // 0x0530(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast_1;  // 0x0538(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StemSpline_BP_C_TraceTowardsDirection) == 0x000008, "Wrong alignment on StemSpline_BP_C_TraceTowardsDirection");
static_assert(sizeof(StemSpline_BP_C_TraceTowardsDirection) == 0x000540, "Wrong size on StemSpline_BP_C_TraceTowardsDirection");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, StartLocation) == 0x000000, "Member 'StemSpline_BP_C_TraceTowardsDirection::StartLocation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, RelativeNormal) == 0x000018, "Member 'StemSpline_BP_C_TraceTowardsDirection::RelativeNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, ForSubstem) == 0x000030, "Member 'StemSpline_BP_C_TraceTowardsDirection::ForSubstem' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, HitLocation) == 0x000038, "Member 'StemSpline_BP_C_TraceTowardsDirection::HitLocation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, HitNormal) == 0x000050, "Member 'StemSpline_BP_C_TraceTowardsDirection::HitNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, LastLocation) == 0x000068, "Member 'StemSpline_BP_C_TraceTowardsDirection::LastLocation' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, TraceDirection) == 0x000080, "Member 'StemSpline_BP_C_TraceTowardsDirection::TraceDirection' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, HitSomething) == 0x000098, "Member 'StemSpline_BP_C_TraceTowardsDirection::HitSomething' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, TargetReached) == 0x000099, "Member 'StemSpline_BP_C_TraceTowardsDirection::TargetReached' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, TraceDir) == 0x0000A0, "Member 'StemSpline_BP_C_TraceTowardsDirection::TraceDir' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, EndLoc) == 0x0000B8, "Member 'StemSpline_BP_C_TraceTowardsDirection::EndLoc' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, Angle) == 0x0000D0, "Member 'StemSpline_BP_C_TraceTowardsDirection::Angle' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, Dir) == 0x0000D8, "Member 'StemSpline_BP_C_TraceTowardsDirection::Dir' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, ForSubstem_) == 0x0000F0, "Member 'StemSpline_BP_C_TraceTowardsDirection::ForSubstem_' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, RelativeNormal_) == 0x0000F8, "Member 'StemSpline_BP_C_TraceTowardsDirection::RelativeNormal_' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, StartLoc) == 0x000110, "Member 'StemSpline_BP_C_TraceTowardsDirection::StartLoc' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, RandomIrregularity) == 0x000128, "Member 'StemSpline_BP_C_TraceTowardsDirection::RandomIrregularity' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000130, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_IsValid_ReturnValue) == 0x000148, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000150, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000168, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000180, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_VSize_ReturnValue) == 0x000198, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_Multiply_IntFloat_ReturnValue) == 0x0001A0, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_SelectFloat_ReturnValue) == 0x0001A8, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_Greater_IntInt_ReturnValue) == 0x0001B0, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_SelectVector_ReturnValue) == 0x0001B8, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_SelectVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_SelectVector_ReturnValue_1) == 0x0001D0, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_SelectVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_RandomFloatInRangeFromStream_ReturnValue) == 0x0001E8, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_RandomFloatInRangeFromStream_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, Temp_object_Variable) == 0x0001F0, "Member 'StemSpline_BP_C_TraceTowardsDirection::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_RandomFloatInRangeFromStream_ReturnValue_1) == 0x000200, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_RandomFloatInRangeFromStream_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_Cross_VectorVector_ReturnValue) == 0x000208, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_Cross_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_Normal_ReturnValue) == 0x000220, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_RotateAngleAxis_ReturnValue) == 0x000238, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_RotateAngleAxis_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_SelectVector_ReturnValue_2) == 0x000250, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_SelectVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_LineTraceSingle_OutHit) == 0x000268, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_LineTraceSingle_ReturnValue) == 0x000350, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_BreakHitResult_bBlockingHit) == 0x000351, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_BreakHitResult_bInitialOverlap) == 0x000352, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_BreakHitResult_Time) == 0x000354, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_BreakHitResult_Distance) == 0x000358, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_BreakHitResult_Location) == 0x000360, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_BreakHitResult_ImpactPoint) == 0x000378, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_BreakHitResult_Normal) == 0x000390, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_BreakHitResult_ImpactNormal) == 0x0003A8, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_BreakHitResult_PhysMat) == 0x0003C0, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_BreakHitResult_HitActor) == 0x0003C8, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_BreakHitResult_HitComponent) == 0x0003D0, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_BreakHitResult_HitBoneName) == 0x0003D8, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_BreakHitResult_BoneName) == 0x0003E0, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_BreakHitResult_HitItem) == 0x0003E8, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_BreakHitResult_ElementIndex) == 0x0003EC, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_BreakHitResult_FaceIndex) == 0x0003F0, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_BreakHitResult_TraceStart) == 0x0003F8, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_BreakHitResult_TraceEnd) == 0x000410, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000428, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x000440, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_Subtract_VectorVector_ReturnValue_2) == 0x000458, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_Subtract_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_VSize_ReturnValue_1) == 0x000470, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_VSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000478, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_RotateAngleAxis_ReturnValue_1) == 0x000480, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_RotateAngleAxis_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000498, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_SelectVector_ReturnValue_3) == 0x0004A0, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_SelectVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_SelectVector_ReturnValue_4) == 0x0004B8, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_SelectVector_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x0004D0, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_SelectFloat_ReturnValue_1) == 0x0004D8, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x0004E0, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_Add_VectorVector_ReturnValue) == 0x0004F8, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast) == 0x000510, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast) == 0x000514, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast_1) == 0x000518, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast) == 0x00051C, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, K2Node_VariableSet_randomIrregularity_ImplicitCast) == 0x000520, "Member 'StemSpline_BP_C_TraceTowardsDirection::K2Node_VariableSet_randomIrregularity_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast_1) == 0x000528, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, K2Node_VariableSet_randomIrregularity_ImplicitCast_1) == 0x000530, "Member 'StemSpline_BP_C_TraceTowardsDirection::K2Node_VariableSet_randomIrregularity_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_TraceTowardsDirection, CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast_1) == 0x000538, "Member 'StemSpline_BP_C_TraceTowardsDirection::CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast_1' has a wrong offset!");

// Function StemSpline_BP.StemSpline_BP_C.WorldLocToSplineTimeApprox
// 0x0160 (0x0160 - 0x0000)
struct StemSpline_BP_C_WorldLocToSplineTimeApprox final
{
public:
	struct FVector                                WorldLoc;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Iterations;                                        // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DistanceTolerance_;                                // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       SplineComponent;                                   // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        StartTime;                                         // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EndTime;                                           // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        bestTime;                                          // 0x0040(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       SplineComp;                                        // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        best;                                              // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EndMinusDistance;                                  // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        StartMinusDistance;                                // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        End;                                               // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Start;                                             // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DistanceTolerance;                                 // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Num;                                               // 0x0080(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                LocationToCheck;                                   // 0x0088(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Lerp_ReturnValue;                         // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_ReturnValue_1;                       // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAtTime_ReturnValue;            // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAtTime_ReturnValue_1;          // 0x00D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue;                        // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_WorldLocToSplineTimeApprox_bestTime;      // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111[0x3];                                      // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11D[0x3];                                      // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_WorldLocToSplineTimeApprox_bestTime_1;    // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue_1;     // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_129[0x3];                                      // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_132[0x6];                                      // 0x0132(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x0138(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue_1;                      // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetLocationAtTime_Time_ImplicitCast;      // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetLocationAtTime_Time_ImplicitCast_1;    // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StemSpline_BP_C_WorldLocToSplineTimeApprox) == 0x000008, "Wrong alignment on StemSpline_BP_C_WorldLocToSplineTimeApprox");
static_assert(sizeof(StemSpline_BP_C_WorldLocToSplineTimeApprox) == 0x000160, "Wrong size on StemSpline_BP_C_WorldLocToSplineTimeApprox");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, WorldLoc) == 0x000000, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::WorldLoc' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, Iterations) == 0x000018, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::Iterations' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, DistanceTolerance_) == 0x000020, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::DistanceTolerance_' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, SplineComponent) == 0x000028, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::SplineComponent' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, StartTime) == 0x000030, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::StartTime' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, EndTime) == 0x000038, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::EndTime' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, bestTime) == 0x000040, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::bestTime' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, SplineComp) == 0x000048, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::SplineComp' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, best) == 0x000050, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::best' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, EndMinusDistance) == 0x000058, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::EndMinusDistance' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, StartMinusDistance) == 0x000060, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::StartMinusDistance' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, End) == 0x000068, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::End' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, Start) == 0x000070, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::Start' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, DistanceTolerance) == 0x000078, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::DistanceTolerance' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, Num) == 0x000080, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::Num' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, LocationToCheck) == 0x000088, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::LocationToCheck' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, Temp_int_Variable) == 0x0000A0, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, CallFunc_Lerp_ReturnValue) == 0x0000A8, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, CallFunc_Lerp_ReturnValue_1) == 0x0000B0, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, CallFunc_GetLocationAtTime_ReturnValue) == 0x0000B8, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::CallFunc_GetLocationAtTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, CallFunc_GetLocationAtTime_ReturnValue_1) == 0x0000D0, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::CallFunc_GetLocationAtTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000E8, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, CallFunc_VSize_ReturnValue) == 0x000100, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, CallFunc_WorldLocToSplineTimeApprox_bestTime) == 0x000108, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::CallFunc_WorldLocToSplineTimeApprox_bestTime' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000110, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, CallFunc_Subtract_IntInt_ReturnValue) == 0x000114, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, Temp_int_Variable_1) == 0x000118, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00011C, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, CallFunc_WorldLocToSplineTimeApprox_bestTime_1) == 0x000120, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::CallFunc_WorldLocToSplineTimeApprox_bestTime_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, CallFunc_LessEqual_DoubleDouble_ReturnValue_1) == 0x000128, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::CallFunc_LessEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x00012C, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000130, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000131, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x000138, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, CallFunc_VSize_ReturnValue_1) == 0x000150, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::CallFunc_VSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, CallFunc_GetLocationAtTime_Time_ImplicitCast) == 0x000158, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::CallFunc_GetLocationAtTime_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StemSpline_BP_C_WorldLocToSplineTimeApprox, CallFunc_GetLocationAtTime_Time_ImplicitCast_1) == 0x00015C, "Member 'StemSpline_BP_C_WorldLocToSplineTimeApprox::CallFunc_GetLocationAtTime_Time_ImplicitCast_1' has a wrong offset!");

}

