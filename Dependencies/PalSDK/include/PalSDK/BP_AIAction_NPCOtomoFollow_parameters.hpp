#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "AIModule_structs.hpp"


namespace PalSDK::Params
{

// Function BP_AIAction_NPCOtomoFollow.BP_AIAction_NPCOtomoFollow_C.ActionTick
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_NPCOtomoFollow_C_ActionTick final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPCOtomoFollow_C_ActionTick) == 0x000008, "Wrong alignment on BP_AIAction_NPCOtomoFollow_C_ActionTick");
static_assert(sizeof(BP_AIAction_NPCOtomoFollow_C_ActionTick) == 0x000010, "Wrong size on BP_AIAction_NPCOtomoFollow_C_ActionTick");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ActionTick, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPCOtomoFollow_C_ActionTick::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ActionTick, DeltaSeconds) == 0x000008, "Member 'BP_AIAction_NPCOtomoFollow_C_ActionTick::DeltaSeconds' has a wrong offset!");

// Function BP_AIAction_NPCOtomoFollow.BP_AIAction_NPCOtomoFollow_C.ExecuteUbergraph_BP_AIAction_NPCOtomoFollow
// 0x0120 (0x0120 - 0x0000)
struct BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_FindTrainerKillEnemy_Enemy;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EPathFollowingResult MovementResult)> K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPathFollowingResult                          K2Node_CustomEvent_MovementResult;                 // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPathFollowingResult                          Temp_byte_Variable;                                // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPathFollowingResult                          K2Node_CustomEvent_MovementResult_1;               // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27[0x1];                                       // 0x0027(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_4;                     // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_3;                     // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNearTwoActorWithRadius_ReturnValue;     // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x2];                                       // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EPathFollowingResult MovementResult)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_2;                     // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAIAsyncTaskBlueprintProxy*             CallFunc_CreateMoveToProxyObject_ReturnValue;      // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             K2Node_Event_WithResult;                           // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue_1;              // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_2;              // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_MonsterAIController_NPCOtomo_C*     K2Node_DynamicCast_AsBP_Monster_AIController_NPCOtomo; // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue_3;              // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_MonsterAIController_NPCOtomo_C*     K2Node_DynamicCast_AsBP_Monster_AIController_NPCOtomo_1; // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_GetPalAIBlackboard_C> K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard;     // 0x00C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDead_ReturnValue;                       // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DA[0x6];                                       // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_PalAIBlackboard_Common_C*           CallFunc_GetLeaderBB_LeaderPalBrackboard;          // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetSquadLeader_ReturnValue;               // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_4;              // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalAIController*                       K2Node_DynamicCast_AsPal_AIController;             // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHate*                               CallFunc_GetHateSystem_ReturnValue;                // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FindMostHateTarget_ReturnValue;           // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow) == 0x000008, "Wrong alignment on BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow");
static_assert(sizeof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow) == 0x000120, "Wrong size on BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, EntryPoint) == 0x000000, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, CallFunc_FindTrainerKillEnemy_Enemy) == 0x000008, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::CallFunc_FindTrainerKillEnemy_Enemy' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_CustomEvent_MovementResult) == 0x000024, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_CustomEvent_MovementResult' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, Temp_byte_Variable) == 0x000025, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_CustomEvent_MovementResult_1) == 0x000026, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_CustomEvent_MovementResult_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_Event_ControlledPawn_4) == 0x000028, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_Event_ControlledPawn_4' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_Event_DeltaSeconds) == 0x000030, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_Event_ControlledPawn_3) == 0x000038, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_Event_ControlledPawn_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, CallFunc_IsValid_ReturnValue_1) == 0x000040, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, CallFunc_IsNearTwoActorWithRadius_ReturnValue) == 0x000041, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::CallFunc_IsNearTwoActorWithRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_CreateDelegate_OutputDelegate_1) == 0x000044, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_Event_ControlledPawn_2) == 0x000058, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_Event_ControlledPawn_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, CallFunc_CreateMoveToProxyObject_ReturnValue) == 0x000060, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::CallFunc_CreateMoveToProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, CallFunc_IsValid_ReturnValue_2) == 0x000068, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_Event_ControlledPawn_1) == 0x000070, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, CallFunc_GetController_ReturnValue) == 0x000078, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_Event_ControlledPawn) == 0x000080, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_Event_WithResult) == 0x000088, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_Event_WithResult' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, CallFunc_GetController_ReturnValue_1) == 0x000090, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::CallFunc_GetController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, CallFunc_GetController_ReturnValue_2) == 0x000098, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::CallFunc_GetController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_DynamicCast_AsBP_Monster_AIController_NPCOtomo) == 0x0000A0, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_DynamicCast_AsBP_Monster_AIController_NPCOtomo' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, CallFunc_GetController_ReturnValue_3) == 0x0000B0, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::CallFunc_GetController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_DynamicCast_AsBP_Monster_AIController_NPCOtomo_1) == 0x0000B8, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_DynamicCast_AsBP_Monster_AIController_NPCOtomo_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_DynamicCast_bSuccess_1) == 0x0000C0, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard) == 0x0000C8, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_DynamicCast_bSuccess_2) == 0x0000D8, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, CallFunc_IsDead_ReturnValue) == 0x0000D9, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::CallFunc_IsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, CallFunc_GetLeaderBB_LeaderPalBrackboard) == 0x0000E0, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::CallFunc_GetLeaderBB_LeaderPalBrackboard' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, CallFunc_IsValid_ReturnValue_3) == 0x0000E8, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, CallFunc_GetSquadLeader_ReturnValue) == 0x0000F0, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::CallFunc_GetSquadLeader_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, CallFunc_GetController_ReturnValue_4) == 0x0000F8, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::CallFunc_GetController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_DynamicCast_AsPal_AIController) == 0x000100, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_DynamicCast_AsPal_AIController' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_DynamicCast_bSuccess_3) == 0x000108, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, CallFunc_GetHateSystem_ReturnValue) == 0x000110, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::CallFunc_GetHateSystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, CallFunc_FindMostHateTarget_ReturnValue) == 0x000118, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::CallFunc_FindMostHateTarget_ReturnValue' has a wrong offset!");

// Function BP_AIAction_NPCOtomoFollow.BP_AIAction_NPCOtomoFollow_C.FindTrainerKillEnemy
// 0x0098 (0x0098 - 0x0000)
struct BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy final
{
public:
	class AActor*                                 Enemy;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterManager*                   CallFunc_GetCharacterManager_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Map_Length_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPalInstanceID>                 CallFunc_Map_Keys_Keys;                            // 0x0030(0x0010)(ReferenceParm)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalInstanceID                         CallFunc_Array_Get_Item;                           // 0x0048(0x0030)(HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetIndividualHandle_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_86[0x2];                                       // 0x0086(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDead_ReturnValue;                       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNearTwoActor_ReturnValue;               // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy) == 0x000008, "Wrong alignment on BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy");
static_assert(sizeof(BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy) == 0x000098, "Wrong size on BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy, Enemy) == 0x000000, "Member 'BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy::Enemy' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy, Temp_int_Array_Index_Variable) == 0x000010, "Member 'BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy, CallFunc_GetCharacterManager_ReturnValue) == 0x000018, "Member 'BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy::CallFunc_GetCharacterManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy, CallFunc_Map_Length_ReturnValue) == 0x000028, "Member 'BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy::CallFunc_Map_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy, CallFunc_Map_Keys_Keys) == 0x000030, "Member 'BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000040, "Member 'BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy, CallFunc_Array_Get_Item) == 0x000048, "Member 'BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy, CallFunc_GetIndividualHandle_ReturnValue) == 0x000078, "Member 'BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy::CallFunc_GetIndividualHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy, CallFunc_Array_Length_ReturnValue) == 0x000080, "Member 'BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy, CallFunc_IsValid_ReturnValue) == 0x000084, "Member 'BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy, CallFunc_Less_IntInt_ReturnValue) == 0x000085, "Member 'BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000088, "Member 'BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy, CallFunc_IsDead_ReturnValue) == 0x000090, "Member 'BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy::CallFunc_IsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy, CallFunc_IsValid_ReturnValue_1) == 0x000091, "Member 'BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy, CallFunc_IsNearTwoActor_ReturnValue) == 0x000092, "Member 'BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy::CallFunc_IsNearTwoActor_ReturnValue' has a wrong offset!");

// Function BP_AIAction_NPCOtomoFollow.BP_AIAction_NPCOtomoFollow_C.OnFail_9D776B464FB7F1A972DAFDBCCA1BDFFF
// 0x0001 (0x0001 - 0x0000)
struct BP_AIAction_NPCOtomoFollow_C_OnFail_9D776B464FB7F1A972DAFDBCCA1BDFFF final
{
public:
	EPathFollowingResult                          MovementResult;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPCOtomoFollow_C_OnFail_9D776B464FB7F1A972DAFDBCCA1BDFFF) == 0x000001, "Wrong alignment on BP_AIAction_NPCOtomoFollow_C_OnFail_9D776B464FB7F1A972DAFDBCCA1BDFFF");
static_assert(sizeof(BP_AIAction_NPCOtomoFollow_C_OnFail_9D776B464FB7F1A972DAFDBCCA1BDFFF) == 0x000001, "Wrong size on BP_AIAction_NPCOtomoFollow_C_OnFail_9D776B464FB7F1A972DAFDBCCA1BDFFF");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_OnFail_9D776B464FB7F1A972DAFDBCCA1BDFFF, MovementResult) == 0x000000, "Member 'BP_AIAction_NPCOtomoFollow_C_OnFail_9D776B464FB7F1A972DAFDBCCA1BDFFF::MovementResult' has a wrong offset!");

// Function BP_AIAction_NPCOtomoFollow.BP_AIAction_NPCOtomoFollow_C.OnSuccess_9D776B464FB7F1A972DAFDBCCA1BDFFF
// 0x0001 (0x0001 - 0x0000)
struct BP_AIAction_NPCOtomoFollow_C_OnSuccess_9D776B464FB7F1A972DAFDBCCA1BDFFF final
{
public:
	EPathFollowingResult                          MovementResult;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPCOtomoFollow_C_OnSuccess_9D776B464FB7F1A972DAFDBCCA1BDFFF) == 0x000001, "Wrong alignment on BP_AIAction_NPCOtomoFollow_C_OnSuccess_9D776B464FB7F1A972DAFDBCCA1BDFFF");
static_assert(sizeof(BP_AIAction_NPCOtomoFollow_C_OnSuccess_9D776B464FB7F1A972DAFDBCCA1BDFFF) == 0x000001, "Wrong size on BP_AIAction_NPCOtomoFollow_C_OnSuccess_9D776B464FB7F1A972DAFDBCCA1BDFFF");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_OnSuccess_9D776B464FB7F1A972DAFDBCCA1BDFFF, MovementResult) == 0x000000, "Member 'BP_AIAction_NPCOtomoFollow_C_OnSuccess_9D776B464FB7F1A972DAFDBCCA1BDFFF::MovementResult' has a wrong offset!");

// Function BP_AIAction_NPCOtomoFollow.BP_AIAction_NPCOtomoFollow_C.ActionAbort
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_NPCOtomoFollow_C_ActionAbort final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPCOtomoFollow_C_ActionAbort) == 0x000008, "Wrong alignment on BP_AIAction_NPCOtomoFollow_C_ActionAbort");
static_assert(sizeof(BP_AIAction_NPCOtomoFollow_C_ActionAbort) == 0x000008, "Wrong size on BP_AIAction_NPCOtomoFollow_C_ActionAbort");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ActionAbort, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPCOtomoFollow_C_ActionAbort::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_NPCOtomoFollow.BP_AIAction_NPCOtomoFollow_C.ActionFinished
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_NPCOtomoFollow_C_ActionFinished final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             WithResult;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPCOtomoFollow_C_ActionFinished) == 0x000008, "Wrong alignment on BP_AIAction_NPCOtomoFollow_C_ActionFinished");
static_assert(sizeof(BP_AIAction_NPCOtomoFollow_C_ActionFinished) == 0x000010, "Wrong size on BP_AIAction_NPCOtomoFollow_C_ActionFinished");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ActionFinished, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPCOtomoFollow_C_ActionFinished::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ActionFinished, WithResult) == 0x000008, "Member 'BP_AIAction_NPCOtomoFollow_C_ActionFinished::WithResult' has a wrong offset!");

// Function BP_AIAction_NPCOtomoFollow.BP_AIAction_NPCOtomoFollow_C.ActionPause
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_NPCOtomoFollow_C_ActionPause final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPCOtomoFollow_C_ActionPause) == 0x000008, "Wrong alignment on BP_AIAction_NPCOtomoFollow_C_ActionPause");
static_assert(sizeof(BP_AIAction_NPCOtomoFollow_C_ActionPause) == 0x000008, "Wrong size on BP_AIAction_NPCOtomoFollow_C_ActionPause");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ActionPause, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPCOtomoFollow_C_ActionPause::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_NPCOtomoFollow.BP_AIAction_NPCOtomoFollow_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_NPCOtomoFollow_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPCOtomoFollow_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIAction_NPCOtomoFollow_C_ActionStart");
static_assert(sizeof(BP_AIAction_NPCOtomoFollow_C_ActionStart) == 0x000008, "Wrong size on BP_AIAction_NPCOtomoFollow_C_ActionStart");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPCOtomoFollow_C_ActionStart::ControlledPawn' has a wrong offset!");

}

