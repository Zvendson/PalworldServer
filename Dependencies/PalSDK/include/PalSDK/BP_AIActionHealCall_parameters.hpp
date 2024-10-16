#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_AIActionHealCall.BP_AIActionHealCall_C.ExecuteUbergraph_BP_AIActionHealCall
// 0x00B0 (0x00B0 - 0x0000)
struct BP_AIActionHealCall_C_ExecuteUbergraph_BP_AIActionHealCall final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue_1;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_AIActionHealWater_C*                CallFunc_SpawnObject_ReturnValue;                  // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PushChildAction_ReturnValue;              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_DetermineDestination_ResultPosition;      // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNearTwoPoint_ReturnValue;               // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_IsNearTwoPoint_distance_ImplicitCast;     // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionHealCall_C_ExecuteUbergraph_BP_AIActionHealCall) == 0x000008, "Wrong alignment on BP_AIActionHealCall_C_ExecuteUbergraph_BP_AIActionHealCall");
static_assert(sizeof(BP_AIActionHealCall_C_ExecuteUbergraph_BP_AIActionHealCall) == 0x0000B0, "Wrong size on BP_AIActionHealCall_C_ExecuteUbergraph_BP_AIActionHealCall");
static_assert(offsetof(BP_AIActionHealCall_C_ExecuteUbergraph_BP_AIActionHealCall, EntryPoint) == 0x000000, "Member 'BP_AIActionHealCall_C_ExecuteUbergraph_BP_AIActionHealCall::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealCall_C_ExecuteUbergraph_BP_AIActionHealCall, CallFunc_GetController_ReturnValue) == 0x000008, "Member 'BP_AIActionHealCall_C_ExecuteUbergraph_BP_AIActionHealCall::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealCall_C_ExecuteUbergraph_BP_AIActionHealCall, K2Node_Event_ControlledPawn_1) == 0x000010, "Member 'BP_AIActionHealCall_C_ExecuteUbergraph_BP_AIActionHealCall::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealCall_C_ExecuteUbergraph_BP_AIActionHealCall, K2Node_Event_DeltaSeconds) == 0x000018, "Member 'BP_AIActionHealCall_C_ExecuteUbergraph_BP_AIActionHealCall::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealCall_C_ExecuteUbergraph_BP_AIActionHealCall, CallFunc_GetController_ReturnValue_1) == 0x000020, "Member 'BP_AIActionHealCall_C_ExecuteUbergraph_BP_AIActionHealCall::CallFunc_GetController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealCall_C_ExecuteUbergraph_BP_AIActionHealCall, CallFunc_SpawnObject_ReturnValue) == 0x000028, "Member 'BP_AIActionHealCall_C_ExecuteUbergraph_BP_AIActionHealCall::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealCall_C_ExecuteUbergraph_BP_AIActionHealCall, CallFunc_PushChildAction_ReturnValue) == 0x000030, "Member 'BP_AIActionHealCall_C_ExecuteUbergraph_BP_AIActionHealCall::CallFunc_PushChildAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealCall_C_ExecuteUbergraph_BP_AIActionHealCall, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000038, "Member 'BP_AIActionHealCall_C_ExecuteUbergraph_BP_AIActionHealCall::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealCall_C_ExecuteUbergraph_BP_AIActionHealCall, K2Node_Event_ControlledPawn) == 0x000050, "Member 'BP_AIActionHealCall_C_ExecuteUbergraph_BP_AIActionHealCall::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealCall_C_ExecuteUbergraph_BP_AIActionHealCall, CallFunc_DetermineDestination_ResultPosition) == 0x000058, "Member 'BP_AIActionHealCall_C_ExecuteUbergraph_BP_AIActionHealCall::CallFunc_DetermineDestination_ResultPosition' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealCall_C_ExecuteUbergraph_BP_AIActionHealCall, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000070, "Member 'BP_AIActionHealCall_C_ExecuteUbergraph_BP_AIActionHealCall::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealCall_C_ExecuteUbergraph_BP_AIActionHealCall, CallFunc_IsNearTwoPoint_ReturnValue) == 0x000088, "Member 'BP_AIActionHealCall_C_ExecuteUbergraph_BP_AIActionHealCall::CallFunc_IsNearTwoPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealCall_C_ExecuteUbergraph_BP_AIActionHealCall, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000090, "Member 'BP_AIActionHealCall_C_ExecuteUbergraph_BP_AIActionHealCall::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealCall_C_ExecuteUbergraph_BP_AIActionHealCall, CallFunc_IsNearTwoPoint_distance_ImplicitCast) == 0x0000A8, "Member 'BP_AIActionHealCall_C_ExecuteUbergraph_BP_AIActionHealCall::CallFunc_IsNearTwoPoint_distance_ImplicitCast' has a wrong offset!");

// Function BP_AIActionHealCall.BP_AIActionHealCall_C.DetermineDestination
// 0x00E8 (0x00E8 - 0x0000)
struct BP_AIActionHealCall_C_DetermineDestination final
{
public:
	class AActor*                                 MasterTrainer;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        ApproachRadius;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ResultPosition;                                    // 0x0010(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TempVector;                                        // 0x0028(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetMasterCameraRotate_CameraRotate;       // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionHealCall_C_DetermineDestination) == 0x000008, "Wrong alignment on BP_AIActionHealCall_C_DetermineDestination");
static_assert(sizeof(BP_AIActionHealCall_C_DetermineDestination) == 0x0000E8, "Wrong size on BP_AIActionHealCall_C_DetermineDestination");
static_assert(offsetof(BP_AIActionHealCall_C_DetermineDestination, MasterTrainer) == 0x000000, "Member 'BP_AIActionHealCall_C_DetermineDestination::MasterTrainer' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealCall_C_DetermineDestination, ApproachRadius) == 0x000008, "Member 'BP_AIActionHealCall_C_DetermineDestination::ApproachRadius' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealCall_C_DetermineDestination, ResultPosition) == 0x000010, "Member 'BP_AIActionHealCall_C_DetermineDestination::ResultPosition' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealCall_C_DetermineDestination, TempVector) == 0x000028, "Member 'BP_AIActionHealCall_C_DetermineDestination::TempVector' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealCall_C_DetermineDestination, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000040, "Member 'BP_AIActionHealCall_C_DetermineDestination::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealCall_C_DetermineDestination, CallFunc_BreakVector_X) == 0x000058, "Member 'BP_AIActionHealCall_C_DetermineDestination::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealCall_C_DetermineDestination, CallFunc_BreakVector_Y) == 0x000060, "Member 'BP_AIActionHealCall_C_DetermineDestination::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealCall_C_DetermineDestination, CallFunc_BreakVector_Z) == 0x000068, "Member 'BP_AIActionHealCall_C_DetermineDestination::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealCall_C_DetermineDestination, CallFunc_GetMasterCameraRotate_CameraRotate) == 0x000070, "Member 'BP_AIActionHealCall_C_DetermineDestination::CallFunc_GetMasterCameraRotate_CameraRotate' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealCall_C_DetermineDestination, CallFunc_GetForwardVector_ReturnValue) == 0x000088, "Member 'BP_AIActionHealCall_C_DetermineDestination::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealCall_C_DetermineDestination, CallFunc_Normal_ReturnValue) == 0x0000A0, "Member 'BP_AIActionHealCall_C_DetermineDestination::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealCall_C_DetermineDestination, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0000B8, "Member 'BP_AIActionHealCall_C_DetermineDestination::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealCall_C_DetermineDestination, CallFunc_Add_VectorVector_ReturnValue) == 0x0000D0, "Member 'BP_AIActionHealCall_C_DetermineDestination::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");

// Function BP_AIActionHealCall.BP_AIActionHealCall_C.ActionTick
// 0x0010 (0x0010 - 0x0000)
struct BP_AIActionHealCall_C_ActionTick final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionHealCall_C_ActionTick) == 0x000008, "Wrong alignment on BP_AIActionHealCall_C_ActionTick");
static_assert(sizeof(BP_AIActionHealCall_C_ActionTick) == 0x000010, "Wrong size on BP_AIActionHealCall_C_ActionTick");
static_assert(offsetof(BP_AIActionHealCall_C_ActionTick, ControlledPawn) == 0x000000, "Member 'BP_AIActionHealCall_C_ActionTick::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIActionHealCall_C_ActionTick, DeltaSeconds) == 0x000008, "Member 'BP_AIActionHealCall_C_ActionTick::DeltaSeconds' has a wrong offset!");

// Function BP_AIActionHealCall.BP_AIActionHealCall_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIActionHealCall_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionHealCall_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIActionHealCall_C_ActionStart");
static_assert(sizeof(BP_AIActionHealCall_C_ActionStart) == 0x000008, "Wrong size on BP_AIActionHealCall_C_ActionStart");
static_assert(offsetof(BP_AIActionHealCall_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIActionHealCall_C_ActionStart::ControlledPawn' has a wrong offset!");

}

