#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function BP_AIActionRideCall.BP_AIActionRideCall_C.ActionTick
// 0x0010 (0x0010 - 0x0000)
struct BP_AIActionRideCall_C_ActionTick final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionRideCall_C_ActionTick) == 0x000008, "Wrong alignment on BP_AIActionRideCall_C_ActionTick");
static_assert(sizeof(BP_AIActionRideCall_C_ActionTick) == 0x000010, "Wrong size on BP_AIActionRideCall_C_ActionTick");
static_assert(offsetof(BP_AIActionRideCall_C_ActionTick, ControlledPawn) == 0x000000, "Member 'BP_AIActionRideCall_C_ActionTick::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_ActionTick, DeltaSeconds) == 0x000008, "Member 'BP_AIActionRideCall_C_ActionTick::DeltaSeconds' has a wrong offset!");

// Function BP_AIActionRideCall.BP_AIActionRideCall_C.CanRide
// 0x0018 (0x0018 - 0x0000)
struct BP_AIActionRideCall_C_CanRide final
{
public:
	bool                                          CanRide_0;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalRiderComponent*                     CallFunc_GetComponentByClass_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDisableRide_ReturnValue;                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionRideCall_C_CanRide) == 0x000008, "Wrong alignment on BP_AIActionRideCall_C_CanRide");
static_assert(sizeof(BP_AIActionRideCall_C_CanRide) == 0x000018, "Wrong size on BP_AIActionRideCall_C_CanRide");
static_assert(offsetof(BP_AIActionRideCall_C_CanRide, CanRide_0) == 0x000000, "Member 'BP_AIActionRideCall_C_CanRide::CanRide_0' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CanRide, CallFunc_GetComponentByClass_ReturnValue) == 0x000008, "Member 'BP_AIActionRideCall_C_CanRide::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CanRide, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_AIActionRideCall_C_CanRide::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CanRide, CallFunc_IsDisableRide_ReturnValue) == 0x000011, "Member 'BP_AIActionRideCall_C_CanRide::CallFunc_IsDisableRide_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CanRide, CallFunc_Not_PreBool_ReturnValue) == 0x000012, "Member 'BP_AIActionRideCall_C_CanRide::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BP_AIActionRideCall.BP_AIActionRideCall_C.CheckWallRaycast
// 0x0258 (0x0258 - 0x0000)
struct BP_AIActionRideCall_C_CheckWallRaycast final
{
public:
	bool                                          HitWall;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         IgnoreActor;                                       // 0x0008(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<EObjectTypeQuery>                      HitType;                                           // 0x0018(0x0010)(Edit, BlueprintVisible)
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x0028(0x0010)(ReferenceParm)
	TArray<class APalCharacter*>                  CallFunc_GetAllPlayerCharacters_OutPlayers;        // 0x0038(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetCharacter_ReturnValue;                 // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_SphereTraceSingleForObjects_OutHit;       // 0x0088(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_SphereTraceSingleForObjects_ReturnValue;  // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0172(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_173[0x1];                                      // 0x0173(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_17C[0x4];                                      // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0180(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0198(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x01B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x01C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x01E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x01E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x020C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_214[0x4];                                      // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0218(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0230(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalBuildObjectBaseCampPoint*           K2Node_DynamicCast_AsPal_Build_Object_Base_Camp_Point; // 0x0248(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionRideCall_C_CheckWallRaycast) == 0x000008, "Wrong alignment on BP_AIActionRideCall_C_CheckWallRaycast");
static_assert(sizeof(BP_AIActionRideCall_C_CheckWallRaycast) == 0x000258, "Wrong size on BP_AIActionRideCall_C_CheckWallRaycast");
static_assert(offsetof(BP_AIActionRideCall_C_CheckWallRaycast, HitWall) == 0x000000, "Member 'BP_AIActionRideCall_C_CheckWallRaycast::HitWall' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CheckWallRaycast, IgnoreActor) == 0x000008, "Member 'BP_AIActionRideCall_C_CheckWallRaycast::IgnoreActor' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CheckWallRaycast, HitType) == 0x000018, "Member 'BP_AIActionRideCall_C_CheckWallRaycast::HitType' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CheckWallRaycast, K2Node_MakeArray_Array) == 0x000028, "Member 'BP_AIActionRideCall_C_CheckWallRaycast::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CheckWallRaycast, CallFunc_GetAllPlayerCharacters_OutPlayers) == 0x000038, "Member 'BP_AIActionRideCall_C_CheckWallRaycast::CallFunc_GetAllPlayerCharacters_OutPlayers' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CheckWallRaycast, CallFunc_Array_Add_ReturnValue) == 0x000048, "Member 'BP_AIActionRideCall_C_CheckWallRaycast::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CheckWallRaycast, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000050, "Member 'BP_AIActionRideCall_C_CheckWallRaycast::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CheckWallRaycast, CallFunc_GetCharacter_ReturnValue) == 0x000068, "Member 'BP_AIActionRideCall_C_CheckWallRaycast::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CheckWallRaycast, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000070, "Member 'BP_AIActionRideCall_C_CheckWallRaycast::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CheckWallRaycast, CallFunc_SphereTraceSingleForObjects_OutHit) == 0x000088, "Member 'BP_AIActionRideCall_C_CheckWallRaycast::CallFunc_SphereTraceSingleForObjects_OutHit' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CheckWallRaycast, CallFunc_SphereTraceSingleForObjects_ReturnValue) == 0x000170, "Member 'BP_AIActionRideCall_C_CheckWallRaycast::CallFunc_SphereTraceSingleForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CheckWallRaycast, CallFunc_BreakHitResult_bBlockingHit) == 0x000171, "Member 'BP_AIActionRideCall_C_CheckWallRaycast::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CheckWallRaycast, CallFunc_BreakHitResult_bInitialOverlap) == 0x000172, "Member 'BP_AIActionRideCall_C_CheckWallRaycast::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CheckWallRaycast, CallFunc_BreakHitResult_Time) == 0x000174, "Member 'BP_AIActionRideCall_C_CheckWallRaycast::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CheckWallRaycast, CallFunc_BreakHitResult_Distance) == 0x000178, "Member 'BP_AIActionRideCall_C_CheckWallRaycast::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CheckWallRaycast, CallFunc_BreakHitResult_Location) == 0x000180, "Member 'BP_AIActionRideCall_C_CheckWallRaycast::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CheckWallRaycast, CallFunc_BreakHitResult_ImpactPoint) == 0x000198, "Member 'BP_AIActionRideCall_C_CheckWallRaycast::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CheckWallRaycast, CallFunc_BreakHitResult_Normal) == 0x0001B0, "Member 'BP_AIActionRideCall_C_CheckWallRaycast::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CheckWallRaycast, CallFunc_BreakHitResult_ImpactNormal) == 0x0001C8, "Member 'BP_AIActionRideCall_C_CheckWallRaycast::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CheckWallRaycast, CallFunc_BreakHitResult_PhysMat) == 0x0001E0, "Member 'BP_AIActionRideCall_C_CheckWallRaycast::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CheckWallRaycast, CallFunc_BreakHitResult_HitActor) == 0x0001E8, "Member 'BP_AIActionRideCall_C_CheckWallRaycast::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CheckWallRaycast, CallFunc_BreakHitResult_HitComponent) == 0x0001F0, "Member 'BP_AIActionRideCall_C_CheckWallRaycast::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CheckWallRaycast, CallFunc_BreakHitResult_HitBoneName) == 0x0001F8, "Member 'BP_AIActionRideCall_C_CheckWallRaycast::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CheckWallRaycast, CallFunc_BreakHitResult_BoneName) == 0x000200, "Member 'BP_AIActionRideCall_C_CheckWallRaycast::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CheckWallRaycast, CallFunc_BreakHitResult_HitItem) == 0x000208, "Member 'BP_AIActionRideCall_C_CheckWallRaycast::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CheckWallRaycast, CallFunc_BreakHitResult_ElementIndex) == 0x00020C, "Member 'BP_AIActionRideCall_C_CheckWallRaycast::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CheckWallRaycast, CallFunc_BreakHitResult_FaceIndex) == 0x000210, "Member 'BP_AIActionRideCall_C_CheckWallRaycast::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CheckWallRaycast, CallFunc_BreakHitResult_TraceStart) == 0x000218, "Member 'BP_AIActionRideCall_C_CheckWallRaycast::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CheckWallRaycast, CallFunc_BreakHitResult_TraceEnd) == 0x000230, "Member 'BP_AIActionRideCall_C_CheckWallRaycast::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CheckWallRaycast, K2Node_DynamicCast_AsPal_Build_Object_Base_Camp_Point) == 0x000248, "Member 'BP_AIActionRideCall_C_CheckWallRaycast::K2Node_DynamicCast_AsPal_Build_Object_Base_Camp_Point' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_CheckWallRaycast, K2Node_DynamicCast_bSuccess) == 0x000250, "Member 'BP_AIActionRideCall_C_CheckWallRaycast::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_AIActionRideCall.BP_AIActionRideCall_C.DoRide
// 0x0028 (0x0028 - 0x0000)
struct BP_AIActionRideCall_C_DoRide final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_AIActionRiding_C*                   CallFunc_SpawnObject_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PushChildAction_ReturnValue;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionRideCall_C_DoRide) == 0x000008, "Wrong alignment on BP_AIActionRideCall_C_DoRide");
static_assert(sizeof(BP_AIActionRideCall_C_DoRide) == 0x000028, "Wrong size on BP_AIActionRideCall_C_DoRide");
static_assert(offsetof(BP_AIActionRideCall_C_DoRide, ControlledPawn) == 0x000000, "Member 'BP_AIActionRideCall_C_DoRide::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_DoRide, CallFunc_GetComponentByClass_ReturnValue) == 0x000008, "Member 'BP_AIActionRideCall_C_DoRide::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_DoRide, CallFunc_GetController_ReturnValue) == 0x000010, "Member 'BP_AIActionRideCall_C_DoRide::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_DoRide, CallFunc_SpawnObject_ReturnValue) == 0x000018, "Member 'BP_AIActionRideCall_C_DoRide::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_DoRide, CallFunc_PushChildAction_ReturnValue) == 0x000020, "Member 'BP_AIActionRideCall_C_DoRide::CallFunc_PushChildAction_ReturnValue' has a wrong offset!");

// Function BP_AIActionRideCall.BP_AIActionRideCall_C.ExecuteUbergraph_BP_AIActionRideCall
// 0x0080 (0x0080 - 0x0000)
struct BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerController*                   K2Node_DynamicCast_AsPal_Player_Controller;        // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetCharacterRadius_ReturnValue;           // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCharacterRadius_ReturnValue_1;         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInteractingPlayer_IsInteracting;        // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanRide_CanRide;                          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNearTwoActor_ReturnValue;               // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckWallRaycast_HitWall;                 // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B[0x5];                                       // 0x004B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_2;           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast_1;        // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_IsNearTwoActor_distance_ImplicitCast;     // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall) == 0x000008, "Wrong alignment on BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall");
static_assert(sizeof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall) == 0x000080, "Wrong size on BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall");
static_assert(offsetof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall, EntryPoint) == 0x000000, "Member 'BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall, CallFunc_GetController_ReturnValue) == 0x000008, "Member 'BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall, K2Node_Event_ControlledPawn) == 0x000010, "Member 'BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall, K2Node_Event_DeltaSeconds) == 0x000018, "Member 'BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall, K2Node_DynamicCast_AsPal_Player_Controller) == 0x000020, "Member 'BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall::K2Node_DynamicCast_AsPal_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall, CallFunc_GetCharacterRadius_ReturnValue) == 0x00002C, "Member 'BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall::CallFunc_GetCharacterRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall, CallFunc_GetCharacterRadius_ReturnValue_1) == 0x000030, "Member 'BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall::CallFunc_GetCharacterRadius_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall, CallFunc_IsInteractingPlayer_IsInteracting) == 0x000034, "Member 'BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall::CallFunc_IsInteractingPlayer_IsInteracting' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000038, "Member 'BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x000040, "Member 'BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall, CallFunc_CanRide_CanRide) == 0x000048, "Member 'BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall::CallFunc_CanRide_CanRide' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall, CallFunc_IsNearTwoActor_ReturnValue) == 0x000049, "Member 'BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall::CallFunc_IsNearTwoActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall, CallFunc_CheckWallRaycast_HitWall) == 0x00004A, "Member 'BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall::CallFunc_CheckWallRaycast_HitWall' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall, CallFunc_Add_DoubleDouble_ReturnValue_2) == 0x000050, "Member 'BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall::CallFunc_Add_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000058, "Member 'BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000060, "Member 'BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000068, "Member 'BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall, CallFunc_Add_DoubleDouble_B_ImplicitCast_1) == 0x000070, "Member 'BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall::CallFunc_Add_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall, CallFunc_IsNearTwoActor_distance_ImplicitCast) == 0x000078, "Member 'BP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall::CallFunc_IsNearTwoActor_distance_ImplicitCast' has a wrong offset!");

}

