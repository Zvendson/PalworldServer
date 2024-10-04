#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIActionCombatHeli_BattleMode_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionCombatHeli_BattleMode_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIActionCombatHeli_BattleMode_C_ActionStart");
static_assert(sizeof(BP_AIActionCombatHeli_BattleMode_C_ActionStart) == 0x000008, "Wrong size on BP_AIActionCombatHeli_BattleMode_C_ActionStart");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIActionCombatHeli_BattleMode_C_ActionStart::ControlledPawn' has a wrong offset!");

// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.ActionTick
// 0x0010 (0x0010 - 0x0000)
struct BP_AIActionCombatHeli_BattleMode_C_ActionTick final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionCombatHeli_BattleMode_C_ActionTick) == 0x000008, "Wrong alignment on BP_AIActionCombatHeli_BattleMode_C_ActionTick");
static_assert(sizeof(BP_AIActionCombatHeli_BattleMode_C_ActionTick) == 0x000010, "Wrong size on BP_AIActionCombatHeli_BattleMode_C_ActionTick");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_ActionTick, ControlledPawn) == 0x000000, "Member 'BP_AIActionCombatHeli_BattleMode_C_ActionTick::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_ActionTick, DeltaSeconds) == 0x000008, "Member 'BP_AIActionCombatHeli_BattleMode_C_ActionTick::DeltaSeconds' has a wrong offset!");

// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode
// 0x00A0 (0x00A0 - 0x0000)
struct BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetCharacter_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_FindTarget_TargetActor;                   // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetCharacter_ReturnValue_1;               // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_CombatHeli_C*                       K2Node_DynamicCast_AsBP_Combat_Heli;               // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetCharacter_ReturnValue_2;               // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_CombatHeliRpidWeaponComponent_Bomber_C* CallFunc_GetComponentByClass_ReturnValue;          // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_CombatHeliRpidWeaponComponent_WingMiso_C* CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_CombatHeliRpidWeaponComponent_FrontMG_C* CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetCharacter_ReturnValue_3;               // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNearTarget2D_Near;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_VariableSet_tempDeltaTime_ImplicitCast;     // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ActionTick_DeltaSeconds_ImplicitCast;     // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode) == 0x000008, "Wrong alignment on BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode");
static_assert(sizeof(BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode) == 0x0000A0, "Wrong size on BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode, EntryPoint) == 0x000000, "Member 'BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode, CallFunc_GetCharacter_ReturnValue) == 0x000008, "Member 'BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode, K2Node_Event_ControlledPawn_1) == 0x000010, "Member 'BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode, K2Node_Event_DeltaSeconds) == 0x000018, "Member 'BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode, CallFunc_FindTarget_TargetActor) == 0x000020, "Member 'BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode::CallFunc_FindTarget_TargetActor' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode, CallFunc_GetCharacter_ReturnValue_1) == 0x000028, "Member 'BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode::CallFunc_GetCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode, K2Node_DynamicCast_AsBP_Combat_Heli) == 0x000030, "Member 'BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode::K2Node_DynamicCast_AsBP_Combat_Heli' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode, CallFunc_IsValid_ReturnValue) == 0x000039, "Member 'BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode, K2Node_Event_ControlledPawn) == 0x000040, "Member 'BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode, CallFunc_GetCharacter_ReturnValue_2) == 0x000048, "Member 'BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode::CallFunc_GetCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode, CallFunc_GetComponentByClass_ReturnValue) == 0x000050, "Member 'BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000058, "Member 'BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000060, "Member 'BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode, CallFunc_GetCharacter_ReturnValue_3) == 0x000068, "Member 'BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode::CallFunc_GetCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode, CallFunc_GetActorForwardVector_ReturnValue) == 0x000070, "Member 'BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode, CallFunc_IsNearTarget2D_Near) == 0x000088, "Member 'BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode::CallFunc_IsNearTarget2D_Near' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode, K2Node_VariableSet_tempDeltaTime_ImplicitCast) == 0x000090, "Member 'BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode::K2Node_VariableSet_tempDeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode, CallFunc_ActionTick_DeltaSeconds_ImplicitCast) == 0x000098, "Member 'BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode::CallFunc_ActionTick_DeltaSeconds_ImplicitCast' has a wrong offset!");

// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.FindTarget
// 0x0010 (0x0010 - 0x0000)
struct BP_AIActionCombatHeli_BattleMode_C_FindTarget final
{
public:
	class AActor*                                 TargetActor;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionCombatHeli_BattleMode_C_FindTarget) == 0x000008, "Wrong alignment on BP_AIActionCombatHeli_BattleMode_C_FindTarget");
static_assert(sizeof(BP_AIActionCombatHeli_BattleMode_C_FindTarget) == 0x000010, "Wrong size on BP_AIActionCombatHeli_BattleMode_C_FindTarget");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_FindTarget, TargetActor) == 0x000000, "Member 'BP_AIActionCombatHeli_BattleMode_C_FindTarget::TargetActor' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_FindTarget, CallFunc_GetPalmi_ReturnValue) == 0x000008, "Member 'BP_AIActionCombatHeli_BattleMode_C_FindTarget::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");

// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.IsNearTarget2D
// 0x0020 (0x0020 - 0x0000)
struct BP_AIActionCombatHeli_BattleMode_C_IsNearTarget2D final
{
public:
	double                                        Distance;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Near;                                              // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetCharacter_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNearTwoActor_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x2];                                       // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_IsNearTwoActor_distance_ImplicitCast;     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionCombatHeli_BattleMode_C_IsNearTarget2D) == 0x000008, "Wrong alignment on BP_AIActionCombatHeli_BattleMode_C_IsNearTarget2D");
static_assert(sizeof(BP_AIActionCombatHeli_BattleMode_C_IsNearTarget2D) == 0x000020, "Wrong size on BP_AIActionCombatHeli_BattleMode_C_IsNearTarget2D");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_IsNearTarget2D, Distance) == 0x000000, "Member 'BP_AIActionCombatHeli_BattleMode_C_IsNearTarget2D::Distance' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_IsNearTarget2D, Near) == 0x000008, "Member 'BP_AIActionCombatHeli_BattleMode_C_IsNearTarget2D::Near' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_IsNearTarget2D, CallFunc_GetCharacter_ReturnValue) == 0x000010, "Member 'BP_AIActionCombatHeli_BattleMode_C_IsNearTarget2D::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_IsNearTarget2D, CallFunc_IsNearTwoActor_ReturnValue) == 0x000018, "Member 'BP_AIActionCombatHeli_BattleMode_C_IsNearTarget2D::CallFunc_IsNearTwoActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_IsNearTarget2D, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'BP_AIActionCombatHeli_BattleMode_C_IsNearTarget2D::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_IsNearTarget2D, CallFunc_IsNearTwoActor_distance_ImplicitCast) == 0x00001C, "Member 'BP_AIActionCombatHeli_BattleMode_C_IsNearTarget2D::CallFunc_IsNearTwoActor_distance_ImplicitCast' has a wrong offset!");

// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.RotateToTarget
// 0x0018 (0x0018 - 0x0000)
struct BP_AIActionCombatHeli_BattleMode_C_RotateToTarget final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetCharacter_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GeneralTurnLinearToActor_DeltaTime_ImplicitCast; // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionCombatHeli_BattleMode_C_RotateToTarget) == 0x000008, "Wrong alignment on BP_AIActionCombatHeli_BattleMode_C_RotateToTarget");
static_assert(sizeof(BP_AIActionCombatHeli_BattleMode_C_RotateToTarget) == 0x000018, "Wrong size on BP_AIActionCombatHeli_BattleMode_C_RotateToTarget");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_RotateToTarget, DeltaTime) == 0x000000, "Member 'BP_AIActionCombatHeli_BattleMode_C_RotateToTarget::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_RotateToTarget, CallFunc_GetCharacter_ReturnValue) == 0x000008, "Member 'BP_AIActionCombatHeli_BattleMode_C_RotateToTarget::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_RotateToTarget, CallFunc_GeneralTurnLinearToActor_DeltaTime_ImplicitCast) == 0x000010, "Member 'BP_AIActionCombatHeli_BattleMode_C_RotateToTarget::CallFunc_GeneralTurnLinearToActor_DeltaTime_ImplicitCast' has a wrong offset!");

// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.SetMoveVelocity
// 0x01B8 (0x01B8 - 0x0000)
struct BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity final
{
public:
	double                                        SlefToTargetDistanceZ0;                            // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ApproachPower;                                     // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SelfToTarget;                                      // 0x0010(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetPos;                                         // 0x0028(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SelfPos;                                           // 0x0040(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue_1;        // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue_2;        // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Vector_Normal2D_ReturnValue;              // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetCharacter_ReturnValue;                 // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Cross_VectorVector_ReturnValue;           // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_2;      // 0x0108(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0120(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSizeXY_ReturnValue;                      // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Abs_ReturnValue;                          // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_159[0x7];                                      // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0160(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetCharacter_ReturnValue_1;               // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0180(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0198(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity) == 0x000008, "Wrong alignment on BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity");
static_assert(sizeof(BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity) == 0x0001B8, "Wrong size on BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity, SlefToTargetDistanceZ0) == 0x000000, "Member 'BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity::SlefToTargetDistanceZ0' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity, ApproachPower) == 0x000008, "Member 'BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity::ApproachPower' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity, SelfToTarget) == 0x000010, "Member 'BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity::SelfToTarget' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity, TargetPos) == 0x000028, "Member 'BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity::TargetPos' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity, SelfPos) == 0x000040, "Member 'BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity::SelfPos' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000058, "Member 'BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity, CallFunc_Conv_DoubleToVector_ReturnValue_1) == 0x000070, "Member 'BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity::CallFunc_Conv_DoubleToVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity, CallFunc_Conv_DoubleToVector_ReturnValue_2) == 0x000088, "Member 'BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity::CallFunc_Conv_DoubleToVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity, CallFunc_Vector_Normal2D_ReturnValue) == 0x0000A0, "Member 'BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity::CallFunc_Vector_Normal2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity, CallFunc_GetCharacter_ReturnValue) == 0x0000B8, "Member 'BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0000C0, "Member 'BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity, CallFunc_Cross_VectorVector_ReturnValue) == 0x0000D8, "Member 'BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity::CallFunc_Cross_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity, CallFunc_Multiply_VectorVector_ReturnValue_1) == 0x0000F0, "Member 'BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity::CallFunc_Multiply_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity, CallFunc_Multiply_VectorVector_ReturnValue_2) == 0x000108, "Member 'BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity::CallFunc_Multiply_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity, CallFunc_Add_VectorVector_ReturnValue) == 0x000120, "Member 'BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000138, "Member 'BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity, CallFunc_VSizeXY_ReturnValue) == 0x000140, "Member 'BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity::CallFunc_VSizeXY_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000148, "Member 'BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity, CallFunc_Abs_ReturnValue) == 0x000150, "Member 'BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000158, "Member 'BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000160, "Member 'BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity, CallFunc_GetCharacter_ReturnValue_1) == 0x000178, "Member 'BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity::CallFunc_GetCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000180, "Member 'BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000198, "Member 'BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity, CallFunc_IsValid_ReturnValue) == 0x0001B0, "Member 'BP_AIActionCombatHeli_BattleMode_C_SetMoveVelocity::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

