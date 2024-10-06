#pragma once

#include "Basic.hpp"

#include "EGroundHitResult_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function BP_Action_WaitLoadingWorldPartition.BP_Action_WaitLoadingWorldPartition_C.CanTimeOut
// 0x0018 (0x0018 - 0x0000)
struct BP_Action_WaitLoadingWorldPartition_C_CanTimeOut final
{
public:
	bool                                          CanTimeOut_0;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_WaitLoadingWorldPartition_C_CanTimeOut) == 0x000008, "Wrong alignment on BP_Action_WaitLoadingWorldPartition_C_CanTimeOut");
static_assert(sizeof(BP_Action_WaitLoadingWorldPartition_C_CanTimeOut) == 0x000018, "Wrong size on BP_Action_WaitLoadingWorldPartition_C_CanTimeOut");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CanTimeOut, CanTimeOut_0) == 0x000000, "Member 'BP_Action_WaitLoadingWorldPartition_C_CanTimeOut::CanTimeOut_0' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CanTimeOut, CallFunc_GetPalDebugSetting_ReturnValue) == 0x000008, "Member 'BP_Action_WaitLoadingWorldPartition_C_CanTimeOut::CallFunc_GetPalDebugSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CanTimeOut, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_Action_WaitLoadingWorldPartition_C_CanTimeOut::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CanTimeOut, CallFunc_Not_PreBool_ReturnValue) == 0x000011, "Member 'BP_Action_WaitLoadingWorldPartition_C_CanTimeOut::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BP_Action_WaitLoadingWorldPartition.BP_Action_WaitLoadingWorldPartition_C.CheckEndAction
// 0x0030 (0x0030 - 0x0000)
struct BP_Action_WaitLoadingWorldPartition_C_CheckEndAction final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEnd;                                             // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGroundHitResult                              CallFunc_CheckGround_Result;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_WaitLoadingWorldPartition_C_CheckEndAction) == 0x000008, "Wrong alignment on BP_Action_WaitLoadingWorldPartition_C_CheckEndAction");
static_assert(sizeof(BP_Action_WaitLoadingWorldPartition_C_CheckEndAction) == 0x000030, "Wrong size on BP_Action_WaitLoadingWorldPartition_C_CheckEndAction");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckEndAction, DeltaTime) == 0x000000, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckEndAction::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckEndAction, IsEnd) == 0x000008, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckEndAction::IsEnd' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckEndAction, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000009, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckEndAction::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckEndAction, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000010, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckEndAction::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckEndAction, CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1) == 0x000018, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckEndAction::CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckEndAction, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x000020, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckEndAction::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckEndAction, CallFunc_CheckGround_Result) == 0x000028, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckEndAction::CallFunc_CheckGround_Result' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckEndAction, K2Node_SwitchEnum_CmpSuccess) == 0x000029, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckEndAction::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_Action_WaitLoadingWorldPartition.BP_Action_WaitLoadingWorldPartition_C.CheckGround
// 0x0218 (0x0218 - 0x0000)
struct BP_Action_WaitLoadingWorldPartition_C_CheckGround final
{
public:
	EGroundHitResult                              Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetFloorLocationByActor_ReturnValue;      // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0028(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x0050(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x013A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13B[0x1];                                      // 0x013B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_144[0x4];                                      // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0148(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0160(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0178(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0190(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x01A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x01B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DC[0x4];                                      // 0x01DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x01E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x01F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsWaterActor_IsWater;                     // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_WaitLoadingWorldPartition_C_CheckGround) == 0x000008, "Wrong alignment on BP_Action_WaitLoadingWorldPartition_C_CheckGround");
static_assert(sizeof(BP_Action_WaitLoadingWorldPartition_C_CheckGround) == 0x000218, "Wrong size on BP_Action_WaitLoadingWorldPartition_C_CheckGround");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckGround, Result) == 0x000000, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckGround::Result' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckGround, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckGround::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckGround, CallFunc_GetFloorLocationByActor_ReturnValue) == 0x000010, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckGround::CallFunc_GetFloorLocationByActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckGround, K2Node_MakeArray_Array) == 0x000028, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckGround::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckGround, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000038, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckGround::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckGround, CallFunc_LineTraceSingle_OutHit) == 0x000050, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckGround::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckGround, CallFunc_LineTraceSingle_ReturnValue) == 0x000138, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckGround::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckGround, CallFunc_BreakHitResult_bBlockingHit) == 0x000139, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckGround::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckGround, CallFunc_BreakHitResult_bInitialOverlap) == 0x00013A, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckGround::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckGround, CallFunc_BreakHitResult_Time) == 0x00013C, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckGround::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckGround, CallFunc_BreakHitResult_Distance) == 0x000140, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckGround::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckGround, CallFunc_BreakHitResult_Location) == 0x000148, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckGround::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckGround, CallFunc_BreakHitResult_ImpactPoint) == 0x000160, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckGround::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckGround, CallFunc_BreakHitResult_Normal) == 0x000178, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckGround::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckGround, CallFunc_BreakHitResult_ImpactNormal) == 0x000190, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckGround::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckGround, CallFunc_BreakHitResult_PhysMat) == 0x0001A8, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckGround::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckGround, CallFunc_BreakHitResult_HitActor) == 0x0001B0, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckGround::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckGround, CallFunc_BreakHitResult_HitComponent) == 0x0001B8, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckGround::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckGround, CallFunc_BreakHitResult_HitBoneName) == 0x0001C0, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckGround::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckGround, CallFunc_BreakHitResult_BoneName) == 0x0001C8, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckGround::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckGround, CallFunc_BreakHitResult_HitItem) == 0x0001D0, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckGround::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckGround, CallFunc_BreakHitResult_ElementIndex) == 0x0001D4, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckGround::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckGround, CallFunc_BreakHitResult_FaceIndex) == 0x0001D8, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckGround::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckGround, CallFunc_BreakHitResult_TraceStart) == 0x0001E0, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckGround::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckGround, CallFunc_BreakHitResult_TraceEnd) == 0x0001F8, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckGround::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckGround, CallFunc_IsWaterActor_IsWater) == 0x000210, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckGround::CallFunc_IsWaterActor_IsWater' has a wrong offset!");

// Function BP_Action_WaitLoadingWorldPartition.BP_Action_WaitLoadingWorldPartition_C.CheckLoadLocationDistance
// 0x0030 (0x0030 - 0x0000)
struct BP_Action_WaitLoadingWorldPartition_C_CheckLoadLocationDistance final
{
public:
	bool                                          IsReWait;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Vector_Distance_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_WaitLoadingWorldPartition_C_CheckLoadLocationDistance) == 0x000008, "Wrong alignment on BP_Action_WaitLoadingWorldPartition_C_CheckLoadLocationDistance");
static_assert(sizeof(BP_Action_WaitLoadingWorldPartition_C_CheckLoadLocationDistance) == 0x000030, "Wrong size on BP_Action_WaitLoadingWorldPartition_C_CheckLoadLocationDistance");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckLoadLocationDistance, IsReWait) == 0x000000, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckLoadLocationDistance::IsReWait' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckLoadLocationDistance, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckLoadLocationDistance::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckLoadLocationDistance, CallFunc_Vector_Distance_ReturnValue) == 0x000020, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckLoadLocationDistance::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_CheckLoadLocationDistance, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000028, "Member 'BP_Action_WaitLoadingWorldPartition_C_CheckLoadLocationDistance::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");

// Function BP_Action_WaitLoadingWorldPartition.BP_Action_WaitLoadingWorldPartition_C.ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition
// 0x01A8 (0x01A8 - 0x0000)
struct BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckEndAction_IsEnd;                     // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWorldPartitionSubsystem*               CallFunc_GetWorldSubsystem_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_AdjustActorToFloor_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character;         // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue;                // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue_1;              // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameter_FadeWidget*    CallFunc_GetFadeInParameter_NewParam;              // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_3;         // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_4;         // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character_1;       // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAdjustedLocation_ReturnValue;           // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckLoadLocationDistance_IsReWait;       // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AD[0x3];                                       // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_VectorToString_ReturnValue;          // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInClientConnection_ReturnValue;         // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerController*                   K2Node_DynamicCast_AsPal_Player_Controller;        // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanTimeout_CanTimeOut;                    // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F2[0x6];                                       // 0x00F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOpenListenServer_ReturnValue;           // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_5;         // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_1;        // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0112(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_113[0x5];                                      // 0x0113(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_VectorToString_ReturnValue_1;        // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_159[0x7];                                      // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_CanAdjustActorToFloor_OutLocation;        // 0x0160(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanAdjustActorToFloor_ReturnValue;        // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_179[0x3];                                      // 0x0179(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetGeneralPurposeIndex_ReturnValue;       // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_181[0x7];                                      // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_CheckEndAction_DeltaTime_ImplicitCast;    // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast; // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition) == 0x000008, "Wrong alignment on BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition");
static_assert(sizeof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition) == 0x0001A8, "Wrong size on BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, EntryPoint) == 0x000000, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, K2Node_Event_DeltaTime) == 0x000004, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_CheckEndAction_IsEnd) == 0x000008, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_CheckEndAction_IsEnd' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_GetActionCharacter_ReturnValue) == 0x000010, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000018, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_AdjustActorToFloor_ReturnValue) == 0x000020, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_AdjustActorToFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000030, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000038, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000040, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, K2Node_DynamicCast_AsPal_Player_Character) == 0x000048, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::K2Node_DynamicCast_AsPal_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_Concat_StrStr_ReturnValue) == 0x000058, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x000068, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_GetHUDService_ReturnValue) == 0x000070, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_GetHUDService_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_GetHUDService_ReturnValue_1) == 0x000078, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_GetHUDService_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_GetFadeInParameter_NewParam) == 0x000080, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_GetFadeInParameter_NewParam' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_GetActionCharacter_ReturnValue_3) == 0x000088, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_GetActionCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_GetActionCharacter_ReturnValue_4) == 0x000090, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_GetActionCharacter_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_IsLocallyControlled_ReturnValue) == 0x000098, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, K2Node_DynamicCast_AsPal_Player_Character_1) == 0x0000A0, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::K2Node_DynamicCast_AsPal_Player_Character_1' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, K2Node_DynamicCast_bSuccess_1) == 0x0000A8, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_IsDedicatedServer_ReturnValue) == 0x0000A9, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_IsAdjustedLocation_ReturnValue) == 0x0000AA, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_IsAdjustedLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_BooleanOR_ReturnValue) == 0x0000AB, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_CheckLoadLocationDistance_IsReWait) == 0x0000AC, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_CheckLoadLocationDistance_IsReWait' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000B0, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_Conv_VectorToString_ReturnValue) == 0x0000C8, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_Conv_VectorToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_GetController_ReturnValue) == 0x0000D8, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_IsInClientConnection_ReturnValue) == 0x0000E0, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_IsInClientConnection_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, K2Node_DynamicCast_AsPal_Player_Controller) == 0x0000E8, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::K2Node_DynamicCast_AsPal_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, K2Node_DynamicCast_bSuccess_2) == 0x0000F0, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_CanTimeout_CanTimeOut) == 0x0000F1, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_CanTimeout_CanTimeOut' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_GetGameSetting_ReturnValue) == 0x0000F8, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_IsOpenListenServer_ReturnValue) == 0x000100, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_IsOpenListenServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_GetActionCharacter_ReturnValue_5) == 0x000108, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_GetActionCharacter_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_BooleanOR_ReturnValue_1) == 0x000110, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_IsLocallyControlled_ReturnValue_1) == 0x000111, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_IsLocallyControlled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000112, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_Conv_VectorToString_ReturnValue_1) == 0x000118, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_Conv_VectorToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000128, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000138, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000148, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000158, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_CanAdjustActorToFloor_OutLocation) == 0x000160, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_CanAdjustActorToFloor_OutLocation' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_CanAdjustActorToFloor_ReturnValue) == 0x000178, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_CanAdjustActorToFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_GetGeneralPurposeIndex_ReturnValue) == 0x00017C, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_GetGeneralPurposeIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000180, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_CheckEndAction_DeltaTime_ImplicitCast) == 0x000188, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_CheckEndAction_DeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000190, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000198, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition, CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast) == 0x0001A0, "Member 'BP_Action_WaitLoadingWorldPartition_C_ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition::CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast' has a wrong offset!");

// Function BP_Action_WaitLoadingWorldPartition.BP_Action_WaitLoadingWorldPartition_C.GetFadeInParameter
// 0x0010 (0x0010 - 0x0000)
struct BP_Action_WaitLoadingWorldPartition_C_GetFadeInParameter final
{
public:
	class UPalHUDDispatchParameter_FadeWidget*    NewParam;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameter_FadeWidget*    CallFunc_SpawnObject_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_WaitLoadingWorldPartition_C_GetFadeInParameter) == 0x000008, "Wrong alignment on BP_Action_WaitLoadingWorldPartition_C_GetFadeInParameter");
static_assert(sizeof(BP_Action_WaitLoadingWorldPartition_C_GetFadeInParameter) == 0x000010, "Wrong size on BP_Action_WaitLoadingWorldPartition_C_GetFadeInParameter");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_GetFadeInParameter, NewParam) == 0x000000, "Member 'BP_Action_WaitLoadingWorldPartition_C_GetFadeInParameter::NewParam' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_GetFadeInParameter, CallFunc_SpawnObject_ReturnValue) == 0x000008, "Member 'BP_Action_WaitLoadingWorldPartition_C_GetFadeInParameter::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");

// Function BP_Action_WaitLoadingWorldPartition.BP_Action_WaitLoadingWorldPartition_C.IsWaterActor
// 0x0030 (0x0030 - 0x0000)
struct BP_Action_WaitLoadingWorldPartition_C_IsWaterActor final
{
public:
	class AActor*                                 TargetActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsWater;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_UltimateRiverTool_C*                K2Node_DynamicCast_AsBP_Ultimate_River_Tool;       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SimpleWater_C*                      K2Node_DynamicCast_AsBP_Simple_Water;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_WaitLoadingWorldPartition_C_IsWaterActor) == 0x000008, "Wrong alignment on BP_Action_WaitLoadingWorldPartition_C_IsWaterActor");
static_assert(sizeof(BP_Action_WaitLoadingWorldPartition_C_IsWaterActor) == 0x000030, "Wrong size on BP_Action_WaitLoadingWorldPartition_C_IsWaterActor");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_IsWaterActor, TargetActor) == 0x000000, "Member 'BP_Action_WaitLoadingWorldPartition_C_IsWaterActor::TargetActor' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_IsWaterActor, IsWater) == 0x000008, "Member 'BP_Action_WaitLoadingWorldPartition_C_IsWaterActor::IsWater' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_IsWaterActor, K2Node_DynamicCast_AsBP_Ultimate_River_Tool) == 0x000010, "Member 'BP_Action_WaitLoadingWorldPartition_C_IsWaterActor::K2Node_DynamicCast_AsBP_Ultimate_River_Tool' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_IsWaterActor, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_Action_WaitLoadingWorldPartition_C_IsWaterActor::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_IsWaterActor, K2Node_DynamicCast_AsBP_Simple_Water) == 0x000020, "Member 'BP_Action_WaitLoadingWorldPartition_C_IsWaterActor::K2Node_DynamicCast_AsBP_Simple_Water' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_IsWaterActor, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'BP_Action_WaitLoadingWorldPartition_C_IsWaterActor::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function BP_Action_WaitLoadingWorldPartition.BP_Action_WaitLoadingWorldPartition_C.RequestWaitWorldPartition
// 0x0060 (0x0060 - 0x0000)
struct BP_Action_WaitLoadingWorldPartition_C_RequestWaitWorldPartition final
{
public:
	class FString                                 CallFunc_Conv_VectorToString_ReturnValue;          // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class APalPlayerState*                        CallFunc_GetPlayerStateByPlayer_ReturnValue;       // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x2];                                       // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0044(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_WaitWorldPartitionDelegate_OutTimerHandle; // 0x0058(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_WaitLoadingWorldPartition_C_RequestWaitWorldPartition) == 0x000008, "Wrong alignment on BP_Action_WaitLoadingWorldPartition_C_RequestWaitWorldPartition");
static_assert(sizeof(BP_Action_WaitLoadingWorldPartition_C_RequestWaitWorldPartition) == 0x000060, "Wrong size on BP_Action_WaitLoadingWorldPartition_C_RequestWaitWorldPartition");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_RequestWaitWorldPartition, CallFunc_Conv_VectorToString_ReturnValue) == 0x000000, "Member 'BP_Action_WaitLoadingWorldPartition_C_RequestWaitWorldPartition::CallFunc_Conv_VectorToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_RequestWaitWorldPartition, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'BP_Action_WaitLoadingWorldPartition_C_RequestWaitWorldPartition::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_RequestWaitWorldPartition, CallFunc_Concat_StrStr_ReturnValue) == 0x000028, "Member 'BP_Action_WaitLoadingWorldPartition_C_RequestWaitWorldPartition::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_RequestWaitWorldPartition, CallFunc_GetPlayerStateByPlayer_ReturnValue) == 0x000038, "Member 'BP_Action_WaitLoadingWorldPartition_C_RequestWaitWorldPartition::CallFunc_GetPlayerStateByPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_RequestWaitWorldPartition, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x000040, "Member 'BP_Action_WaitLoadingWorldPartition_C_RequestWaitWorldPartition::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_RequestWaitWorldPartition, CallFunc_IsValid_ReturnValue) == 0x000041, "Member 'BP_Action_WaitLoadingWorldPartition_C_RequestWaitWorldPartition::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_RequestWaitWorldPartition, K2Node_CreateDelegate_OutputDelegate) == 0x000044, "Member 'BP_Action_WaitLoadingWorldPartition_C_RequestWaitWorldPartition::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_RequestWaitWorldPartition, CallFunc_WaitWorldPartitionDelegate_OutTimerHandle) == 0x000058, "Member 'BP_Action_WaitLoadingWorldPartition_C_RequestWaitWorldPartition::CallFunc_WaitWorldPartitionDelegate_OutTimerHandle' has a wrong offset!");

// Function BP_Action_WaitLoadingWorldPartition.BP_Action_WaitLoadingWorldPartition_C.ResetCamera
// 0x0018 (0x0018 - 0x0000)
struct BP_Action_WaitLoadingWorldPartition_C_ResetCamera final
{
public:
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalShooterSpringArmComponent*          CallFunc_GetComponentByClass_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_WaitLoadingWorldPartition_C_ResetCamera) == 0x000008, "Wrong alignment on BP_Action_WaitLoadingWorldPartition_C_ResetCamera");
static_assert(sizeof(BP_Action_WaitLoadingWorldPartition_C_ResetCamera) == 0x000018, "Wrong size on BP_Action_WaitLoadingWorldPartition_C_ResetCamera");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ResetCamera, CallFunc_GetActionCharacter_ReturnValue) == 0x000000, "Member 'BP_Action_WaitLoadingWorldPartition_C_ResetCamera::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ResetCamera, CallFunc_GetComponentByClass_ReturnValue) == 0x000008, "Member 'BP_Action_WaitLoadingWorldPartition_C_ResetCamera::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_ResetCamera, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_Action_WaitLoadingWorldPartition_C_ResetCamera::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_Action_WaitLoadingWorldPartition.BP_Action_WaitLoadingWorldPartition_C.SetMoveDisable
// 0x0030 (0x0030 - 0x0000)
struct BP_Action_WaitLoadingWorldPartition_C_SetMoveDisable final
{
public:
	bool                                          Disable;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterMovementComponent*         TempMoveComp;                                      // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_BoolToFloat_ReturnValue;             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_BoolToFloat_ReturnValue_1;           // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetPalCharacterMovementComponent_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_WaitLoadingWorldPartition_C_SetMoveDisable) == 0x000008, "Wrong alignment on BP_Action_WaitLoadingWorldPartition_C_SetMoveDisable");
static_assert(sizeof(BP_Action_WaitLoadingWorldPartition_C_SetMoveDisable) == 0x000030, "Wrong size on BP_Action_WaitLoadingWorldPartition_C_SetMoveDisable");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_SetMoveDisable, Disable) == 0x000000, "Member 'BP_Action_WaitLoadingWorldPartition_C_SetMoveDisable::Disable' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_SetMoveDisable, TempMoveComp) == 0x000008, "Member 'BP_Action_WaitLoadingWorldPartition_C_SetMoveDisable::TempMoveComp' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_SetMoveDisable, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'BP_Action_WaitLoadingWorldPartition_C_SetMoveDisable::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_SetMoveDisable, CallFunc_Conv_BoolToFloat_ReturnValue) == 0x000014, "Member 'BP_Action_WaitLoadingWorldPartition_C_SetMoveDisable::CallFunc_Conv_BoolToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_SetMoveDisable, CallFunc_Not_PreBool_ReturnValue_1) == 0x000018, "Member 'BP_Action_WaitLoadingWorldPartition_C_SetMoveDisable::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_SetMoveDisable, CallFunc_Conv_BoolToFloat_ReturnValue_1) == 0x00001C, "Member 'BP_Action_WaitLoadingWorldPartition_C_SetMoveDisable::CallFunc_Conv_BoolToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_SetMoveDisable, CallFunc_GetActionCharacter_ReturnValue) == 0x000020, "Member 'BP_Action_WaitLoadingWorldPartition_C_SetMoveDisable::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_SetMoveDisable, CallFunc_GetPalCharacterMovementComponent_ReturnValue) == 0x000028, "Member 'BP_Action_WaitLoadingWorldPartition_C_SetMoveDisable::CallFunc_GetPalCharacterMovementComponent_ReturnValue' has a wrong offset!");

// Function BP_Action_WaitLoadingWorldPartition.BP_Action_WaitLoadingWorldPartition_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_Action_WaitLoadingWorldPartition_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_WaitLoadingWorldPartition_C_TickAction) == 0x000004, "Wrong alignment on BP_Action_WaitLoadingWorldPartition_C_TickAction");
static_assert(sizeof(BP_Action_WaitLoadingWorldPartition_C_TickAction) == 0x000004, "Wrong size on BP_Action_WaitLoadingWorldPartition_C_TickAction");
static_assert(offsetof(BP_Action_WaitLoadingWorldPartition_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_Action_WaitLoadingWorldPartition_C_TickAction::DeltaTime' has a wrong offset!");

}

