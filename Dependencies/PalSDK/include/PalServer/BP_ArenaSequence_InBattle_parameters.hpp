#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function BP_ArenaSequence_InBattle.BP_ArenaSequence_InBattle_C.ChangeArenaInBattleCharacterts
// 0x00F0 (0x00F0 - 0x0000)
struct BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts final
{
public:
	bool                                          InBattle;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalArenaSequencer*                     CallFunc_GetOuterSequencer_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<EPalArenaPlayerIndex, struct FPalArenaPlayerInfo> CallFunc_GetArenaPlayerInfoMap_ReturnValue;        // 0x0020(0x0050)(ConstParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EPalArenaPlayerIndex>                  CallFunc_Map_Keys_Keys;                            // 0x0078(0x0010)(ReferenceParm)
	EPalArenaPlayerIndex                          CallFunc_Array_Get_Item;                           // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalArenaPlayerInfo                    CallFunc_Map_Find_Value;                           // 0x0090(0x0048)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DA[0x6];                                       // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_Array_Get_Item_1;                         // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts) == 0x000008, "Wrong alignment on BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts");
static_assert(sizeof(BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts) == 0x0000F0, "Wrong size on BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts, InBattle) == 0x000000, "Member 'BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts::InBattle' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts, Temp_int_Array_Index_Variable_1) == 0x000010, "Member 'BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts, Temp_int_Loop_Counter_Variable_1) == 0x000014, "Member 'BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts, CallFunc_GetOuterSequencer_ReturnValue) == 0x000018, "Member 'BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts, CallFunc_GetArenaPlayerInfoMap_ReturnValue) == 0x000020, "Member 'BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts::CallFunc_GetArenaPlayerInfoMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts, CallFunc_Add_IntInt_ReturnValue_1) == 0x000070, "Member 'BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts, CallFunc_Map_Keys_Keys) == 0x000078, "Member 'BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts, CallFunc_Array_Get_Item) == 0x000088, "Member 'BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts, CallFunc_Array_Length_ReturnValue) == 0x00008C, "Member 'BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts, CallFunc_Map_Find_Value) == 0x000090, "Member 'BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts, CallFunc_Map_Find_ReturnValue) == 0x0000D8, "Member 'BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts, CallFunc_Less_IntInt_ReturnValue) == 0x0000D9, "Member 'BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts, CallFunc_Array_Get_Item_1) == 0x0000E0, "Member 'BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts, CallFunc_Array_Length_ReturnValue_1) == 0x0000E8, "Member 'BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000EC, "Member 'BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function BP_ArenaSequence_InBattle.BP_ArenaSequence_InBattle_C.CheckBattleEnd
// 0x0003 (0x0003 - 0x0000)
struct BP_ArenaSequence_InBattle_C_CheckBattleEnd final
{
public:
	EPalArenaBattleResult                         BattleResult;                                      // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckBattleResult_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_InBattle_C_CheckBattleEnd) == 0x000001, "Wrong alignment on BP_ArenaSequence_InBattle_C_CheckBattleEnd");
static_assert(sizeof(BP_ArenaSequence_InBattle_C_CheckBattleEnd) == 0x000003, "Wrong size on BP_ArenaSequence_InBattle_C_CheckBattleEnd");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_CheckBattleEnd, BattleResult) == 0x000000, "Member 'BP_ArenaSequence_InBattle_C_CheckBattleEnd::BattleResult' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_CheckBattleEnd, CallFunc_CheckBattleResult_ReturnValue) == 0x000001, "Member 'BP_ArenaSequence_InBattle_C_CheckBattleEnd::CallFunc_CheckBattleResult_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_CheckBattleEnd, CallFunc_IsServer_ReturnValue) == 0x000002, "Member 'BP_ArenaSequence_InBattle_C_CheckBattleEnd::CallFunc_IsServer_ReturnValue' has a wrong offset!");

// Function BP_ArenaSequence_InBattle.BP_ArenaSequence_InBattle_C.EnableMovement
// 0x0068 (0x0068 - 0x0000)
struct BP_ArenaSequence_InBattle_C_EnableMovement final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalArenaSequencer*                     CallFunc_GetOuterSequencer_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class APalCharacter*>                  CallFunc_GetInBattleCharacterAll_ReturnValue;      // 0x0018(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterMovementComponent*         CallFunc_GetPalCharacterMovementComponent_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character;         // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalRiderComponent*                     CallFunc_GetComponentByClass_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRiding_ReturnValue;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_InBattle_C_EnableMovement) == 0x000008, "Wrong alignment on BP_ArenaSequence_InBattle_C_EnableMovement");
static_assert(sizeof(BP_ArenaSequence_InBattle_C_EnableMovement) == 0x000068, "Wrong size on BP_ArenaSequence_InBattle_C_EnableMovement");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_EnableMovement, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_ArenaSequence_InBattle_C_EnableMovement::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_EnableMovement, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_ArenaSequence_InBattle_C_EnableMovement::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_EnableMovement, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_ArenaSequence_InBattle_C_EnableMovement::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_EnableMovement, CallFunc_GetOuterSequencer_ReturnValue) == 0x000010, "Member 'BP_ArenaSequence_InBattle_C_EnableMovement::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_EnableMovement, CallFunc_GetInBattleCharacterAll_ReturnValue) == 0x000018, "Member 'BP_ArenaSequence_InBattle_C_EnableMovement::CallFunc_GetInBattleCharacterAll_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_EnableMovement, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_ArenaSequence_InBattle_C_EnableMovement::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_EnableMovement, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_ArenaSequence_InBattle_C_EnableMovement::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_EnableMovement, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'BP_ArenaSequence_InBattle_C_EnableMovement::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_EnableMovement, CallFunc_GetPalCharacterMovementComponent_ReturnValue) == 0x000040, "Member 'BP_ArenaSequence_InBattle_C_EnableMovement::CallFunc_GetPalCharacterMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_EnableMovement, K2Node_DynamicCast_AsPal_Player_Character) == 0x000048, "Member 'BP_ArenaSequence_InBattle_C_EnableMovement::K2Node_DynamicCast_AsPal_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_EnableMovement, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'BP_ArenaSequence_InBattle_C_EnableMovement::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_EnableMovement, CallFunc_GetComponentByClass_ReturnValue) == 0x000058, "Member 'BP_ArenaSequence_InBattle_C_EnableMovement::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_EnableMovement, CallFunc_IsRiding_ReturnValue) == 0x000060, "Member 'BP_ArenaSequence_InBattle_C_EnableMovement::CallFunc_IsRiding_ReturnValue' has a wrong offset!");

// Function BP_ArenaSequence_InBattle.BP_ArenaSequence_InBattle_C.ExecuteUbergraph_BP_ArenaSequence_InBattle
// 0x0178 (0x0178 - 0x0000)
struct BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalArenaSequencer*                     CallFunc_GetOuterSequencer_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalArenaInstanceModel*                 CallFunc_GetInstanceModel_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalArenaInstanceModel*                 CallFunc_GetInstanceModel_ReturnValue_1;           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalArenaSequencer*                     CallFunc_GetOuterSequencer_ReturnValue_1;          // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CalcRemainBattleTime_ReturnValue;         // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APalCharacter*>                  CallFunc_GetInBattleCharacterAll_ReturnValue;      // 0x0050(0x0010)(ReferenceParm)
	class APalCharacter*                          CallFunc_Array_Get_Item;                           // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDamageReactionComponent*            CallFunc_GetComponentByClass_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalDeadInfo                           K2Node_CustomEvent_DeadInfo;                       // 0x0080(0x0050)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x3];                                       // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPalDeadInfo& DeadInfo)> K2Node_CreateDelegate_OutputDelegate;              // 0x00D8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue_1;                   // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalArenaSequencer*                     CallFunc_GetOuterSequencer_ReturnValue_2;          // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class APalCharacter*>                  CallFunc_GetInBattleCharacterAll_ReturnValue_1;    // 0x00F8(0x0010)(ReferenceParm)
	TDelegate<void(const struct FPalDeadInfo& DeadInfo)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0108(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_Array_Get_Item_1;                         // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_124[0x4];                                      // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDamageReactionComponent*            CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0128(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_131[0x7];                                      // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalArenaInstanceModel*                 CallFunc_GetInstanceModel_ReturnValue_2;           // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0140(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CalcRemainBattleTime_ReturnValue_1;       // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0158(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_InvalidateTimerHandle_ReturnValue;     // 0x0160(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UPalArenaSequencer*                     CallFunc_GetOuterSequencer_ReturnValue_3;          // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalArenaSequencer*                     CallFunc_GetOuterSequencer_ReturnValue_4;          // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle) == 0x000008, "Wrong alignment on BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle");
static_assert(sizeof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle) == 0x000178, "Wrong size on BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, EntryPoint) == 0x000000, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, CallFunc_GetOuterSequencer_ReturnValue) == 0x000008, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, Temp_int_Array_Index_Variable_1) == 0x00001C, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, CallFunc_IsServer_ReturnValue) == 0x000020, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, CallFunc_GetInstanceModel_ReturnValue) == 0x000028, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::CallFunc_GetInstanceModel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, K2Node_Event_DeltaTime) == 0x000030, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, CallFunc_GetInstanceModel_ReturnValue_1) == 0x000038, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::CallFunc_GetInstanceModel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, CallFunc_GetOuterSequencer_ReturnValue_1) == 0x000040, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::CallFunc_GetOuterSequencer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, CallFunc_CalcRemainBattleTime_ReturnValue) == 0x000048, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::CallFunc_CalcRemainBattleTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, CallFunc_GetInBattleCharacterAll_ReturnValue) == 0x000050, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::CallFunc_GetInBattleCharacterAll_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, CallFunc_Array_Get_Item) == 0x000060, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, CallFunc_GetComponentByClass_ReturnValue) == 0x000070, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, Temp_int_Loop_Counter_Variable_1) == 0x000078, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, K2Node_CustomEvent_DeadInfo) == 0x000080, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::K2Node_CustomEvent_DeadInfo' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, CallFunc_Less_IntInt_ReturnValue) == 0x0000D0, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000D4, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, K2Node_CreateDelegate_OutputDelegate) == 0x0000D8, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, CallFunc_IsServer_ReturnValue_1) == 0x0000E8, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::CallFunc_IsServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, CallFunc_GetOuterSequencer_ReturnValue_2) == 0x0000F0, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::CallFunc_GetOuterSequencer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, CallFunc_GetInBattleCharacterAll_ReturnValue_1) == 0x0000F8, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::CallFunc_GetInBattleCharacterAll_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, K2Node_CreateDelegate_OutputDelegate_1) == 0x000108, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, CallFunc_Array_Get_Item_1) == 0x000118, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, CallFunc_Array_Length_ReturnValue_1) == 0x000120, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000128, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, CallFunc_Less_IntInt_ReturnValue_1) == 0x000130, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, CallFunc_GetInstanceModel_ReturnValue_2) == 0x000138, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::CallFunc_GetInstanceModel_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, K2Node_CreateDelegate_OutputDelegate_2) == 0x000140, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, CallFunc_CalcRemainBattleTime_ReturnValue_1) == 0x000150, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::CallFunc_CalcRemainBattleTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000154, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000158, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, CallFunc_K2_InvalidateTimerHandle_ReturnValue) == 0x000160, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::CallFunc_K2_InvalidateTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, CallFunc_GetOuterSequencer_ReturnValue_3) == 0x000168, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::CallFunc_GetOuterSequencer_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle, CallFunc_GetOuterSequencer_ReturnValue_4) == 0x000170, "Member 'BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle::CallFunc_GetOuterSequencer_ReturnValue_4' has a wrong offset!");

// Function BP_ArenaSequence_InBattle.BP_ArenaSequence_InBattle_C.OnDeadCharacter
// 0x0050 (0x0050 - 0x0000)
struct BP_ArenaSequence_InBattle_C_OnDeadCharacter final
{
public:
	struct FPalDeadInfo                           DeadInfo;                                          // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(BP_ArenaSequence_InBattle_C_OnDeadCharacter) == 0x000008, "Wrong alignment on BP_ArenaSequence_InBattle_C_OnDeadCharacter");
static_assert(sizeof(BP_ArenaSequence_InBattle_C_OnDeadCharacter) == 0x000050, "Wrong size on BP_ArenaSequence_InBattle_C_OnDeadCharacter");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_OnDeadCharacter, DeadInfo) == 0x000000, "Member 'BP_ArenaSequence_InBattle_C_OnDeadCharacter::DeadInfo' has a wrong offset!");

// Function BP_ArenaSequence_InBattle.BP_ArenaSequence_InBattle_C.OnTimerTick__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct BP_ArenaSequence_InBattle_C_OnTimerTick__DelegateSignature final
{
public:
	int32                                         Time;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_InBattle_C_OnTimerTick__DelegateSignature) == 0x000004, "Wrong alignment on BP_ArenaSequence_InBattle_C_OnTimerTick__DelegateSignature");
static_assert(sizeof(BP_ArenaSequence_InBattle_C_OnTimerTick__DelegateSignature) == 0x000004, "Wrong size on BP_ArenaSequence_InBattle_C_OnTimerTick__DelegateSignature");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_OnTimerTick__DelegateSignature, Time) == 0x000000, "Member 'BP_ArenaSequence_InBattle_C_OnTimerTick__DelegateSignature::Time' has a wrong offset!");

// Function BP_ArenaSequence_InBattle.BP_ArenaSequence_InBattle_C.SetDisableOtomoDeadReturn
// 0x0108 (0x0108 - 0x0000)
struct BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn final
{
public:
	bool                                          Disable;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalArenaSequencer*                     CallFunc_GetOuterSequencer_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<EPalArenaPlayerIndex, struct FPalArenaPlayerInfo> CallFunc_GetArenaPlayerInfoMap_ReturnValue;        // 0x0020(0x0050)(ConstParm)
	TArray<EPalArenaPlayerIndex>                  CallFunc_Map_Keys_Keys;                            // 0x0070(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalArenaPlayerIndex                          CallFunc_Array_Get_Item;                           // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_86[0x2];                                       // 0x0086(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalArenaPlayerInfo                    CallFunc_Map_Find_Value;                           // 0x0088(0x0048)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetIndividualActor_ReturnValue;           // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character;         // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerController*                   CallFunc_GetPalPlayerController_ReturnValue;       // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalOtomoHolderComponentBase*           CallFunc_GetComponentByClass_ReturnValue;          // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn) == 0x000008, "Wrong alignment on BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn");
static_assert(sizeof(BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn) == 0x000108, "Wrong size on BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn, Disable) == 0x000000, "Member 'BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn::Disable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn, CallFunc_IsServer_ReturnValue) == 0x000010, "Member 'BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn, CallFunc_GetOuterSequencer_ReturnValue) == 0x000018, "Member 'BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn, CallFunc_GetArenaPlayerInfoMap_ReturnValue) == 0x000020, "Member 'BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn::CallFunc_GetArenaPlayerInfoMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn, CallFunc_Map_Keys_Keys) == 0x000070, "Member 'BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn, CallFunc_Array_Length_ReturnValue) == 0x000080, "Member 'BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn, CallFunc_Array_Get_Item) == 0x000084, "Member 'BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn, CallFunc_Less_IntInt_ReturnValue) == 0x000085, "Member 'BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn, CallFunc_Map_Find_Value) == 0x000088, "Member 'BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn, CallFunc_Map_Find_ReturnValue) == 0x0000D0, "Member 'BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn, CallFunc_GetIndividualActor_ReturnValue) == 0x0000D8, "Member 'BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn::CallFunc_GetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn, K2Node_DynamicCast_AsPal_Player_Character) == 0x0000E0, "Member 'BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn::K2Node_DynamicCast_AsPal_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn, K2Node_DynamicCast_bSuccess) == 0x0000E8, "Member 'BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn, CallFunc_GetPalPlayerController_ReturnValue) == 0x0000F0, "Member 'BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn::CallFunc_GetPalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn, CallFunc_GetComponentByClass_ReturnValue) == 0x0000F8, "Member 'BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn, CallFunc_IsValid_ReturnValue) == 0x000100, "Member 'BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn, CallFunc_IsValid_ReturnValue_1) == 0x000101, "Member 'BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_ArenaSequence_InBattle.BP_ArenaSequence_InBattle_C.SetInBattleControllerSetting
// 0x0048 (0x0048 - 0x0000)
struct BP_ArenaSequence_InBattle_C_SetInBattleControllerSetting final
{
public:
	bool                                          InBattle;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_ArenaOutBattleFlag_ReturnValue;           // 0x0004(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_ArenaOutBattleFlag_ReturnValue_1;         // 0x000C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerController*                   K2Node_DynamicCast_AsPal_Player_Controller;        // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOutsiderSequencer_ReturnValue;          // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue_1;   // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerController*                   K2Node_DynamicCast_AsPal_Player_Controller_1;      // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_InBattle_C_SetInBattleControllerSetting) == 0x000008, "Wrong alignment on BP_ArenaSequence_InBattle_C_SetInBattleControllerSetting");
static_assert(sizeof(BP_ArenaSequence_InBattle_C_SetInBattleControllerSetting) == 0x000048, "Wrong size on BP_ArenaSequence_InBattle_C_SetInBattleControllerSetting");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_SetInBattleControllerSetting, InBattle) == 0x000000, "Member 'BP_ArenaSequence_InBattle_C_SetInBattleControllerSetting::InBattle' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_SetInBattleControllerSetting, CallFunc_ArenaOutBattleFlag_ReturnValue) == 0x000004, "Member 'BP_ArenaSequence_InBattle_C_SetInBattleControllerSetting::CallFunc_ArenaOutBattleFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_SetInBattleControllerSetting, CallFunc_ArenaOutBattleFlag_ReturnValue_1) == 0x00000C, "Member 'BP_ArenaSequence_InBattle_C_SetInBattleControllerSetting::CallFunc_ArenaOutBattleFlag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_SetInBattleControllerSetting, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000018, "Member 'BP_ArenaSequence_InBattle_C_SetInBattleControllerSetting::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_SetInBattleControllerSetting, K2Node_DynamicCast_AsPal_Player_Controller) == 0x000020, "Member 'BP_ArenaSequence_InBattle_C_SetInBattleControllerSetting::K2Node_DynamicCast_AsPal_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_SetInBattleControllerSetting, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_ArenaSequence_InBattle_C_SetInBattleControllerSetting::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_SetInBattleControllerSetting, CallFunc_IsOutsiderSequencer_ReturnValue) == 0x000029, "Member 'BP_ArenaSequence_InBattle_C_SetInBattleControllerSetting::CallFunc_IsOutsiderSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_SetInBattleControllerSetting, CallFunc_GetLocalPlayerController_ReturnValue_1) == 0x000030, "Member 'BP_ArenaSequence_InBattle_C_SetInBattleControllerSetting::CallFunc_GetLocalPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_SetInBattleControllerSetting, K2Node_DynamicCast_AsPal_Player_Controller_1) == 0x000038, "Member 'BP_ArenaSequence_InBattle_C_SetInBattleControllerSetting::K2Node_DynamicCast_AsPal_Player_Controller_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_SetInBattleControllerSetting, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'BP_ArenaSequence_InBattle_C_SetInBattleControllerSetting::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function BP_ArenaSequence_InBattle.BP_ArenaSequence_InBattle_C.TickSequence
// 0x0004 (0x0004 - 0x0000)
struct BP_ArenaSequence_InBattle_C_TickSequence final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_InBattle_C_TickSequence) == 0x000004, "Wrong alignment on BP_ArenaSequence_InBattle_C_TickSequence");
static_assert(sizeof(BP_ArenaSequence_InBattle_C_TickSequence) == 0x000004, "Wrong size on BP_ArenaSequence_InBattle_C_TickSequence");
static_assert(offsetof(BP_ArenaSequence_InBattle_C_TickSequence, DeltaTime) == 0x000000, "Member 'BP_ArenaSequence_InBattle_C_TickSequence::DeltaTime' has a wrong offset!");

}

