#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_SquadNPCSpawner_ForCampBase.BP_SquadNPCSpawner_ForCampBase_C.AdjustFloor
// 0x0128 (0x0128 - 0x0000)
struct BP_SquadNPCSpawner_ForCampBase_C_AdjustFloor final
{
public:
	class AActor*                                 SpaenedChara;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0038(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SquadNPCSpawner_ForCampBase_C_AdjustFloor) == 0x000008, "Wrong alignment on BP_SquadNPCSpawner_ForCampBase_C_AdjustFloor");
static_assert(sizeof(BP_SquadNPCSpawner_ForCampBase_C_AdjustFloor) == 0x000128, "Wrong size on BP_SquadNPCSpawner_ForCampBase_C_AdjustFloor");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_AdjustFloor, SpaenedChara) == 0x000000, "Member 'BP_SquadNPCSpawner_ForCampBase_C_AdjustFloor::SpaenedChara' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_AdjustFloor, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'BP_SquadNPCSpawner_ForCampBase_C_AdjustFloor::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_AdjustFloor, CallFunc_Add_VectorVector_ReturnValue) == 0x000020, "Member 'BP_SquadNPCSpawner_ForCampBase_C_AdjustFloor::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_AdjustFloor, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000038, "Member 'BP_SquadNPCSpawner_ForCampBase_C_AdjustFloor::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_AdjustFloor, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000120, "Member 'BP_SquadNPCSpawner_ForCampBase_C_AdjustFloor::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");

// Function BP_SquadNPCSpawner_ForCampBase.BP_SquadNPCSpawner_ForCampBase_C.DeleteOnePoint
// 0x0010 (0x0010 - 0x0000)
struct BP_SquadNPCSpawner_ForCampBase_C_DeleteOnePoint final
{
public:
	class AActor*                                 Point;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SquadNPCSpawner_ForCampBase_C_DeleteOnePoint) == 0x000008, "Wrong alignment on BP_SquadNPCSpawner_ForCampBase_C_DeleteOnePoint");
static_assert(sizeof(BP_SquadNPCSpawner_ForCampBase_C_DeleteOnePoint) == 0x000010, "Wrong size on BP_SquadNPCSpawner_ForCampBase_C_DeleteOnePoint");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_DeleteOnePoint, Point) == 0x000000, "Member 'BP_SquadNPCSpawner_ForCampBase_C_DeleteOnePoint::Point' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_DeleteOnePoint, CallFunc_GetComponentByClass_ReturnValue) == 0x000008, "Member 'BP_SquadNPCSpawner_ForCampBase_C_DeleteOnePoint::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

// Function BP_SquadNPCSpawner_ForCampBase.BP_SquadNPCSpawner_ForCampBase_C.ExecuteUbergraph_BP_SquadNPCSpawner_ForCampBase
// 0x0004 (0x0004 - 0x0000)
struct BP_SquadNPCSpawner_ForCampBase_C_ExecuteUbergraph_BP_SquadNPCSpawner_ForCampBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SquadNPCSpawner_ForCampBase_C_ExecuteUbergraph_BP_SquadNPCSpawner_ForCampBase) == 0x000004, "Wrong alignment on BP_SquadNPCSpawner_ForCampBase_C_ExecuteUbergraph_BP_SquadNPCSpawner_ForCampBase");
static_assert(sizeof(BP_SquadNPCSpawner_ForCampBase_C_ExecuteUbergraph_BP_SquadNPCSpawner_ForCampBase) == 0x000004, "Wrong size on BP_SquadNPCSpawner_ForCampBase_C_ExecuteUbergraph_BP_SquadNPCSpawner_ForCampBase");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_ExecuteUbergraph_BP_SquadNPCSpawner_ForCampBase, EntryPoint) == 0x000000, "Member 'BP_SquadNPCSpawner_ForCampBase_C_ExecuteUbergraph_BP_SquadNPCSpawner_ForCampBase::EntryPoint' has a wrong offset!");

// Function BP_SquadNPCSpawner_ForCampBase.BP_SquadNPCSpawner_ForCampBase_C.RayAdjustFloor
// 0x0338 (0x0338 - 0x0000)
struct BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0010(0x0010)(ConstParm, ReferenceParm)
	TArray<class USceneComponent*>                CallFunc_GetChildrenComponents_Children;           // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x0090(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x017A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_17B[0x1];                                      // 0x017B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_184[0x4];                                      // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0188(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x01A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x01B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x01D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x01E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x01F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x01F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21C[0x4];                                      // 0x021C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0220(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0238(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0250(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor) == 0x000008, "Wrong alignment on BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor");
static_assert(sizeof(BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor) == 0x000338, "Wrong size on BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor, Temp_object_Variable) == 0x000010, "Member 'BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor, CallFunc_GetChildrenComponents_Children) == 0x000020, "Member 'BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor::CallFunc_GetChildrenComponents_Children' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000048, "Member 'BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000060, "Member 'BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor, CallFunc_Add_VectorVector_ReturnValue) == 0x000078, "Member 'BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor, CallFunc_LineTraceSingle_OutHit) == 0x000090, "Member 'BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor, CallFunc_LineTraceSingle_ReturnValue) == 0x000178, "Member 'BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor, CallFunc_BreakHitResult_bBlockingHit) == 0x000179, "Member 'BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor, CallFunc_BreakHitResult_bInitialOverlap) == 0x00017A, "Member 'BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor, CallFunc_BreakHitResult_Time) == 0x00017C, "Member 'BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor, CallFunc_BreakHitResult_Distance) == 0x000180, "Member 'BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor, CallFunc_BreakHitResult_Location) == 0x000188, "Member 'BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor, CallFunc_BreakHitResult_ImpactPoint) == 0x0001A0, "Member 'BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor, CallFunc_BreakHitResult_Normal) == 0x0001B8, "Member 'BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor, CallFunc_BreakHitResult_ImpactNormal) == 0x0001D0, "Member 'BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor, CallFunc_BreakHitResult_PhysMat) == 0x0001E8, "Member 'BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor, CallFunc_BreakHitResult_HitActor) == 0x0001F0, "Member 'BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor, CallFunc_BreakHitResult_HitComponent) == 0x0001F8, "Member 'BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor, CallFunc_BreakHitResult_HitBoneName) == 0x000200, "Member 'BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor, CallFunc_BreakHitResult_BoneName) == 0x000208, "Member 'BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor, CallFunc_BreakHitResult_HitItem) == 0x000210, "Member 'BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor, CallFunc_BreakHitResult_ElementIndex) == 0x000214, "Member 'BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor, CallFunc_BreakHitResult_FaceIndex) == 0x000218, "Member 'BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor, CallFunc_BreakHitResult_TraceStart) == 0x000220, "Member 'BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor, CallFunc_BreakHitResult_TraceEnd) == 0x000238, "Member 'BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000250, "Member 'BP_SquadNPCSpawner_ForCampBase_C_RayAdjustFloor::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");

}

