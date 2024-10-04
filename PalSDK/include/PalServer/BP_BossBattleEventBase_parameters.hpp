#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function BP_BossBattleEventBase.BP_BossBattleEventBase_C.ActivateCharacter
// 0x00F0 (0x00F0 - 0x0000)
struct BP_BossBattleEventBase_C_ActivateCharacter final
{
public:
	class UPalIndividualCharacterHandle*          IndividualHandle;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Offset;                                            // 0x0008(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    TargetPlayer;                                      // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          TargetCharacter;                                   // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class UPalBossBattleSequencer*                CallFunc_GetBossBattleSequencer_ReturnValue;       // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class APalPlayerCharacter*>            CallFunc_GetInRoomPlayers_ReturnValue;             // 0x0040(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_Array_Get_Item;                           // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_NPCAIController_BossBattle_C*       K2Node_DynamicCast_AsBP_NPCAIController_Boss_Battle; // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MonsterAIController_Boss_C*         K2Node_DynamicCast_AsBP_Monster_AIController_Boss; // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue_1;              // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalAIController*                       K2Node_DynamicCast_AsPal_AIController;             // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetActiveActorFlag_ReturnValue;           // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDebugNo_Result;                        // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDebugNo_Result_1;                      // 0x00A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_SelectVector_ReturnValue;                 // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalVisualEffectDynamicParameter       K2Node_MakeStruct_PalVisualEffectDynamicParameter; // 0x00C0(0x0010)()
	class UPalVisualEffectBase*                   CallFunc_AddVisualEffect_ReturnValue;              // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBossBattleSequencer*                CallFunc_GetBossBattleSequencer_ReturnValue_1;     // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class APalPlayerCharacter*>            CallFunc_GetInRoomPlayers_ReturnValue_1;           // 0x00E0(0x0010)(ReferenceParm)
};
static_assert(alignof(BP_BossBattleEventBase_C_ActivateCharacter) == 0x000008, "Wrong alignment on BP_BossBattleEventBase_C_ActivateCharacter");
static_assert(sizeof(BP_BossBattleEventBase_C_ActivateCharacter) == 0x0000F0, "Wrong size on BP_BossBattleEventBase_C_ActivateCharacter");
static_assert(offsetof(BP_BossBattleEventBase_C_ActivateCharacter, IndividualHandle) == 0x000000, "Member 'BP_BossBattleEventBase_C_ActivateCharacter::IndividualHandle' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_ActivateCharacter, Offset) == 0x000008, "Member 'BP_BossBattleEventBase_C_ActivateCharacter::Offset' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_ActivateCharacter, TargetPlayer) == 0x000020, "Member 'BP_BossBattleEventBase_C_ActivateCharacter::TargetPlayer' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_ActivateCharacter, TargetCharacter) == 0x000028, "Member 'BP_BossBattleEventBase_C_ActivateCharacter::TargetCharacter' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_ActivateCharacter, CallFunc_GetBossBattleSequencer_ReturnValue) == 0x000030, "Member 'BP_BossBattleEventBase_C_ActivateCharacter::CallFunc_GetBossBattleSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_ActivateCharacter, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000038, "Member 'BP_BossBattleEventBase_C_ActivateCharacter::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_ActivateCharacter, CallFunc_GetInRoomPlayers_ReturnValue) == 0x000040, "Member 'BP_BossBattleEventBase_C_ActivateCharacter::CallFunc_GetInRoomPlayers_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_ActivateCharacter, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'BP_BossBattleEventBase_C_ActivateCharacter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_ActivateCharacter, CallFunc_Array_Length_ReturnValue) == 0x000054, "Member 'BP_BossBattleEventBase_C_ActivateCharacter::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_ActivateCharacter, CallFunc_Subtract_IntInt_ReturnValue) == 0x000058, "Member 'BP_BossBattleEventBase_C_ActivateCharacter::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_ActivateCharacter, CallFunc_RandomIntegerInRange_ReturnValue) == 0x00005C, "Member 'BP_BossBattleEventBase_C_ActivateCharacter::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_ActivateCharacter, CallFunc_Array_Get_Item) == 0x000060, "Member 'BP_BossBattleEventBase_C_ActivateCharacter::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_ActivateCharacter, CallFunc_GetController_ReturnValue) == 0x000068, "Member 'BP_BossBattleEventBase_C_ActivateCharacter::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_ActivateCharacter, K2Node_DynamicCast_AsBP_NPCAIController_Boss_Battle) == 0x000070, "Member 'BP_BossBattleEventBase_C_ActivateCharacter::K2Node_DynamicCast_AsBP_NPCAIController_Boss_Battle' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_ActivateCharacter, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'BP_BossBattleEventBase_C_ActivateCharacter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_ActivateCharacter, K2Node_DynamicCast_AsBP_Monster_AIController_Boss) == 0x000080, "Member 'BP_BossBattleEventBase_C_ActivateCharacter::K2Node_DynamicCast_AsBP_Monster_AIController_Boss' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_ActivateCharacter, K2Node_DynamicCast_bSuccess_1) == 0x000088, "Member 'BP_BossBattleEventBase_C_ActivateCharacter::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_ActivateCharacter, CallFunc_GetController_ReturnValue_1) == 0x000090, "Member 'BP_BossBattleEventBase_C_ActivateCharacter::CallFunc_GetController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_ActivateCharacter, K2Node_DynamicCast_AsPal_AIController) == 0x000098, "Member 'BP_BossBattleEventBase_C_ActivateCharacter::K2Node_DynamicCast_AsPal_AIController' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_ActivateCharacter, K2Node_DynamicCast_bSuccess_2) == 0x0000A0, "Member 'BP_BossBattleEventBase_C_ActivateCharacter::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_ActivateCharacter, CallFunc_GetActiveActorFlag_ReturnValue) == 0x0000A1, "Member 'BP_BossBattleEventBase_C_ActivateCharacter::CallFunc_GetActiveActorFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_ActivateCharacter, CallFunc_GetDebugNo_Result) == 0x0000A2, "Member 'BP_BossBattleEventBase_C_ActivateCharacter::CallFunc_GetDebugNo_Result' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_ActivateCharacter, CallFunc_GetDebugNo_Result_1) == 0x0000A3, "Member 'BP_BossBattleEventBase_C_ActivateCharacter::CallFunc_GetDebugNo_Result_1' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_ActivateCharacter, CallFunc_SelectVector_ReturnValue) == 0x0000A8, "Member 'BP_BossBattleEventBase_C_ActivateCharacter::CallFunc_SelectVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_ActivateCharacter, K2Node_MakeStruct_PalVisualEffectDynamicParameter) == 0x0000C0, "Member 'BP_BossBattleEventBase_C_ActivateCharacter::K2Node_MakeStruct_PalVisualEffectDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_ActivateCharacter, CallFunc_AddVisualEffect_ReturnValue) == 0x0000D0, "Member 'BP_BossBattleEventBase_C_ActivateCharacter::CallFunc_AddVisualEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_ActivateCharacter, CallFunc_GetBossBattleSequencer_ReturnValue_1) == 0x0000D8, "Member 'BP_BossBattleEventBase_C_ActivateCharacter::CallFunc_GetBossBattleSequencer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_ActivateCharacter, CallFunc_GetInRoomPlayers_ReturnValue_1) == 0x0000E0, "Member 'BP_BossBattleEventBase_C_ActivateCharacter::CallFunc_GetInRoomPlayers_ReturnValue_1' has a wrong offset!");

// Function BP_BossBattleEventBase.BP_BossBattleEventBase_C.ExecuteUbergraph_BP_BossBattleEventBase
// 0x0018 (0x0018 - 0x0000)
struct BP_BossBattleEventBase_C_ExecuteUbergraph_BP_BossBattleEventBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalIndividualCharacterHandle* SpawnCharacterHandle)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BossBattleEventBase_C_ExecuteUbergraph_BP_BossBattleEventBase) == 0x000004, "Wrong alignment on BP_BossBattleEventBase_C_ExecuteUbergraph_BP_BossBattleEventBase");
static_assert(sizeof(BP_BossBattleEventBase_C_ExecuteUbergraph_BP_BossBattleEventBase) == 0x000018, "Wrong size on BP_BossBattleEventBase_C_ExecuteUbergraph_BP_BossBattleEventBase");
static_assert(offsetof(BP_BossBattleEventBase_C_ExecuteUbergraph_BP_BossBattleEventBase, EntryPoint) == 0x000000, "Member 'BP_BossBattleEventBase_C_ExecuteUbergraph_BP_BossBattleEventBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_ExecuteUbergraph_BP_BossBattleEventBase, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_BossBattleEventBase_C_ExecuteUbergraph_BP_BossBattleEventBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_ExecuteUbergraph_BP_BossBattleEventBase, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'BP_BossBattleEventBase_C_ExecuteUbergraph_BP_BossBattleEventBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_BossBattleEventBase.BP_BossBattleEventBase_C.GetDebugNo
// 0x0020 (0x0020 - 0x0000)
struct BP_BossBattleEventBase_C_GetDebugNo final
{
public:
	int32                                         BitFlag;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_And_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BossBattleEventBase_C_GetDebugNo) == 0x000008, "Wrong alignment on BP_BossBattleEventBase_C_GetDebugNo");
static_assert(sizeof(BP_BossBattleEventBase_C_GetDebugNo) == 0x000020, "Wrong size on BP_BossBattleEventBase_C_GetDebugNo");
static_assert(offsetof(BP_BossBattleEventBase_C_GetDebugNo, BitFlag) == 0x000000, "Member 'BP_BossBattleEventBase_C_GetDebugNo::BitFlag' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_GetDebugNo, Result) == 0x000004, "Member 'BP_BossBattleEventBase_C_GetDebugNo::Result' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_GetDebugNo, CallFunc_GetPalDebugSetting_ReturnValue) == 0x000008, "Member 'BP_BossBattleEventBase_C_GetDebugNo::CallFunc_GetPalDebugSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_GetDebugNo, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_BossBattleEventBase_C_GetDebugNo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_GetDebugNo, CallFunc_And_IntInt_ReturnValue) == 0x000014, "Member 'BP_BossBattleEventBase_C_GetDebugNo::CallFunc_And_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_GetDebugNo, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000018, "Member 'BP_BossBattleEventBase_C_GetDebugNo::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_BossBattleEventBase.BP_BossBattleEventBase_C.SetSpawner
// 0x0018 (0x0018 - 0x0000)
struct BP_BossBattleEventBase_C_SetSpawner final
{
public:
	class ABP_BossBattle_BossCharacterSpawner_C*  Spawner;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalIndividualCharacterHandle* SpawnCharacterHandle)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BossBattleEventBase_C_SetSpawner) == 0x000008, "Wrong alignment on BP_BossBattleEventBase_C_SetSpawner");
static_assert(sizeof(BP_BossBattleEventBase_C_SetSpawner) == 0x000018, "Wrong size on BP_BossBattleEventBase_C_SetSpawner");
static_assert(offsetof(BP_BossBattleEventBase_C_SetSpawner, Spawner) == 0x000000, "Member 'BP_BossBattleEventBase_C_SetSpawner::Spawner' has a wrong offset!");
static_assert(offsetof(BP_BossBattleEventBase_C_SetSpawner, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_BossBattleEventBase_C_SetSpawner::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

}

