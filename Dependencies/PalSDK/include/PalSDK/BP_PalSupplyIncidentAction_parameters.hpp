#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function BP_PalSupplyIncidentAction.BP_PalSupplyIncidentAction_C.CollectChangeHateTargets
// 0x00D0 (0x00D0 - 0x0000)
struct BP_PalSupplyIncidentAction_C_CollectChangeHateTargets final
{
public:
	TArray<class APalCharacter*>                  SourceCharacters;                                  // 0x0000(0x0010)(Parm, OutParm)
	TArray<class APalCharacter*>                  TargetCharacters;                                  // 0x0010(0x0010)(Parm, OutParm)
	TArray<class APalCharacter*>                  ResultSource;                                      // 0x0020(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class APalCharacter*>                  ResultTarget;                                      // 0x0030(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalRandomIncidentNPCSpawner*           CallFunc_GetNPCSpawner_Result;                     // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalRandomIncidentNPCSpawner*           CallFunc_GetNPCSpawner_Result_1;                   // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A[0x6];                                       // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetSpawnedCharacters_SpawnedCharacters;   // 0x0070(0x0010)(ReferenceParm)
	TArray<class AActor*>                         CallFunc_GetSpawnedCharacters_SpawnedCharacters_1; // 0x0080(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character_1;              // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x3];                                       // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C6[0x2];                                       // 0x00C6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSupplyIncidentAction_C_CollectChangeHateTargets) == 0x000008, "Wrong alignment on BP_PalSupplyIncidentAction_C_CollectChangeHateTargets");
static_assert(sizeof(BP_PalSupplyIncidentAction_C_CollectChangeHateTargets) == 0x0000D0, "Wrong size on BP_PalSupplyIncidentAction_C_CollectChangeHateTargets");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_CollectChangeHateTargets, SourceCharacters) == 0x000000, "Member 'BP_PalSupplyIncidentAction_C_CollectChangeHateTargets::SourceCharacters' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_CollectChangeHateTargets, TargetCharacters) == 0x000010, "Member 'BP_PalSupplyIncidentAction_C_CollectChangeHateTargets::TargetCharacters' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_CollectChangeHateTargets, ResultSource) == 0x000020, "Member 'BP_PalSupplyIncidentAction_C_CollectChangeHateTargets::ResultSource' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_CollectChangeHateTargets, ResultTarget) == 0x000030, "Member 'BP_PalSupplyIncidentAction_C_CollectChangeHateTargets::ResultTarget' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_CollectChangeHateTargets, Temp_int_Array_Index_Variable) == 0x000040, "Member 'BP_PalSupplyIncidentAction_C_CollectChangeHateTargets::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_CollectChangeHateTargets, Temp_int_Loop_Counter_Variable) == 0x000044, "Member 'BP_PalSupplyIncidentAction_C_CollectChangeHateTargets::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_CollectChangeHateTargets, CallFunc_Add_IntInt_ReturnValue) == 0x000048, "Member 'BP_PalSupplyIncidentAction_C_CollectChangeHateTargets::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_CollectChangeHateTargets, Temp_int_Loop_Counter_Variable_1) == 0x00004C, "Member 'BP_PalSupplyIncidentAction_C_CollectChangeHateTargets::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_CollectChangeHateTargets, CallFunc_Add_IntInt_ReturnValue_1) == 0x000050, "Member 'BP_PalSupplyIncidentAction_C_CollectChangeHateTargets::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_CollectChangeHateTargets, Temp_int_Array_Index_Variable_1) == 0x000054, "Member 'BP_PalSupplyIncidentAction_C_CollectChangeHateTargets::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_CollectChangeHateTargets, CallFunc_GetNPCSpawner_Result) == 0x000058, "Member 'BP_PalSupplyIncidentAction_C_CollectChangeHateTargets::CallFunc_GetNPCSpawner_Result' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_CollectChangeHateTargets, CallFunc_GetNPCSpawner_Result_1) == 0x000060, "Member 'BP_PalSupplyIncidentAction_C_CollectChangeHateTargets::CallFunc_GetNPCSpawner_Result_1' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_CollectChangeHateTargets, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'BP_PalSupplyIncidentAction_C_CollectChangeHateTargets::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_CollectChangeHateTargets, CallFunc_IsValid_ReturnValue_1) == 0x000069, "Member 'BP_PalSupplyIncidentAction_C_CollectChangeHateTargets::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_CollectChangeHateTargets, CallFunc_GetSpawnedCharacters_SpawnedCharacters) == 0x000070, "Member 'BP_PalSupplyIncidentAction_C_CollectChangeHateTargets::CallFunc_GetSpawnedCharacters_SpawnedCharacters' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_CollectChangeHateTargets, CallFunc_GetSpawnedCharacters_SpawnedCharacters_1) == 0x000080, "Member 'BP_PalSupplyIncidentAction_C_CollectChangeHateTargets::CallFunc_GetSpawnedCharacters_SpawnedCharacters_1' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_CollectChangeHateTargets, CallFunc_Array_Get_Item) == 0x000090, "Member 'BP_PalSupplyIncidentAction_C_CollectChangeHateTargets::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_CollectChangeHateTargets, CallFunc_Array_Get_Item_1) == 0x000098, "Member 'BP_PalSupplyIncidentAction_C_CollectChangeHateTargets::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_CollectChangeHateTargets, K2Node_DynamicCast_AsPal_Character) == 0x0000A0, "Member 'BP_PalSupplyIncidentAction_C_CollectChangeHateTargets::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_CollectChangeHateTargets, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'BP_PalSupplyIncidentAction_C_CollectChangeHateTargets::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_CollectChangeHateTargets, K2Node_DynamicCast_AsPal_Character_1) == 0x0000B0, "Member 'BP_PalSupplyIncidentAction_C_CollectChangeHateTargets::K2Node_DynamicCast_AsPal_Character_1' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_CollectChangeHateTargets, K2Node_DynamicCast_bSuccess_1) == 0x0000B8, "Member 'BP_PalSupplyIncidentAction_C_CollectChangeHateTargets::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_CollectChangeHateTargets, CallFunc_Array_Length_ReturnValue) == 0x0000BC, "Member 'BP_PalSupplyIncidentAction_C_CollectChangeHateTargets::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_CollectChangeHateTargets, CallFunc_Array_Length_ReturnValue_1) == 0x0000C0, "Member 'BP_PalSupplyIncidentAction_C_CollectChangeHateTargets::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_CollectChangeHateTargets, CallFunc_Less_IntInt_ReturnValue) == 0x0000C4, "Member 'BP_PalSupplyIncidentAction_C_CollectChangeHateTargets::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_CollectChangeHateTargets, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000C5, "Member 'BP_PalSupplyIncidentAction_C_CollectChangeHateTargets::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_CollectChangeHateTargets, CallFunc_Array_Add_ReturnValue) == 0x0000C8, "Member 'BP_PalSupplyIncidentAction_C_CollectChangeHateTargets::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_CollectChangeHateTargets, CallFunc_Array_Add_ReturnValue_1) == 0x0000CC, "Member 'BP_PalSupplyIncidentAction_C_CollectChangeHateTargets::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");

// Function BP_PalSupplyIncidentAction.BP_PalSupplyIncidentAction_C.ExecuteUbergraph_BP_PalSupplyIncidentAction
// 0x0010 (0x0010 - 0x0000)
struct BP_PalSupplyIncidentAction_C_ExecuteUbergraph_BP_PalSupplyIncidentAction final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTime;                            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ExistsAliveCharacter_IsAlive;             // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ExistsAliveCharacter_IsAlive_1;           // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSupplyIncidentAction_C_ExecuteUbergraph_BP_PalSupplyIncidentAction) == 0x000004, "Wrong alignment on BP_PalSupplyIncidentAction_C_ExecuteUbergraph_BP_PalSupplyIncidentAction");
static_assert(sizeof(BP_PalSupplyIncidentAction_C_ExecuteUbergraph_BP_PalSupplyIncidentAction) == 0x000010, "Wrong size on BP_PalSupplyIncidentAction_C_ExecuteUbergraph_BP_PalSupplyIncidentAction");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ExecuteUbergraph_BP_PalSupplyIncidentAction, EntryPoint) == 0x000000, "Member 'BP_PalSupplyIncidentAction_C_ExecuteUbergraph_BP_PalSupplyIncidentAction::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ExecuteUbergraph_BP_PalSupplyIncidentAction, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'BP_PalSupplyIncidentAction_C_ExecuteUbergraph_BP_PalSupplyIncidentAction::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ExecuteUbergraph_BP_PalSupplyIncidentAction, Temp_bool_IsClosed_Variable) == 0x000005, "Member 'BP_PalSupplyIncidentAction_C_ExecuteUbergraph_BP_PalSupplyIncidentAction::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ExecuteUbergraph_BP_PalSupplyIncidentAction, K2Node_Event_DeltaTime) == 0x000008, "Member 'BP_PalSupplyIncidentAction_C_ExecuteUbergraph_BP_PalSupplyIncidentAction::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ExecuteUbergraph_BP_PalSupplyIncidentAction, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable) == 0x00000C, "Member 'BP_PalSupplyIncidentAction_C_ExecuteUbergraph_BP_PalSupplyIncidentAction::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ExecuteUbergraph_BP_PalSupplyIncidentAction, CallFunc_ExistsAliveCharacter_IsAlive) == 0x00000D, "Member 'BP_PalSupplyIncidentAction_C_ExecuteUbergraph_BP_PalSupplyIncidentAction::CallFunc_ExistsAliveCharacter_IsAlive' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ExecuteUbergraph_BP_PalSupplyIncidentAction, CallFunc_ExistsAliveCharacter_IsAlive_1) == 0x00000E, "Member 'BP_PalSupplyIncidentAction_C_ExecuteUbergraph_BP_PalSupplyIncidentAction::CallFunc_ExistsAliveCharacter_IsAlive_1' has a wrong offset!");

// Function BP_PalSupplyIncidentAction.BP_PalSupplyIncidentAction_C.ExistsAliveCharacter
// 0x0050 (0x0050 - 0x0000)
struct BP_PalSupplyIncidentAction_C_ExistsAliveCharacter final
{
public:
	bool                                          NPCSpawner;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAlive;                                           // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalRandomIncidentNPCSpawner*           CallFunc_GetNPCSpawner_Result;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetSpawnedCharacters_SpawnedCharacters;   // 0x0018(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDead_ReturnValue;                       // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x2];                                       // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSupplyIncidentAction_C_ExistsAliveCharacter) == 0x000008, "Wrong alignment on BP_PalSupplyIncidentAction_C_ExistsAliveCharacter");
static_assert(sizeof(BP_PalSupplyIncidentAction_C_ExistsAliveCharacter) == 0x000050, "Wrong size on BP_PalSupplyIncidentAction_C_ExistsAliveCharacter");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ExistsAliveCharacter, NPCSpawner) == 0x000000, "Member 'BP_PalSupplyIncidentAction_C_ExistsAliveCharacter::NPCSpawner' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ExistsAliveCharacter, IsAlive) == 0x000001, "Member 'BP_PalSupplyIncidentAction_C_ExistsAliveCharacter::IsAlive' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ExistsAliveCharacter, CallFunc_GetNPCSpawner_Result) == 0x000008, "Member 'BP_PalSupplyIncidentAction_C_ExistsAliveCharacter::CallFunc_GetNPCSpawner_Result' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ExistsAliveCharacter, Temp_int_Array_Index_Variable) == 0x000010, "Member 'BP_PalSupplyIncidentAction_C_ExistsAliveCharacter::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ExistsAliveCharacter, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'BP_PalSupplyIncidentAction_C_ExistsAliveCharacter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ExistsAliveCharacter, CallFunc_GetSpawnedCharacters_SpawnedCharacters) == 0x000018, "Member 'BP_PalSupplyIncidentAction_C_ExistsAliveCharacter::CallFunc_GetSpawnedCharacters_SpawnedCharacters' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ExistsAliveCharacter, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_PalSupplyIncidentAction_C_ExistsAliveCharacter::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ExistsAliveCharacter, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'BP_PalSupplyIncidentAction_C_ExistsAliveCharacter::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ExistsAliveCharacter, K2Node_DynamicCast_AsPal_Character) == 0x000038, "Member 'BP_PalSupplyIncidentAction_C_ExistsAliveCharacter::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ExistsAliveCharacter, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_PalSupplyIncidentAction_C_ExistsAliveCharacter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ExistsAliveCharacter, CallFunc_IsDead_ReturnValue) == 0x000041, "Member 'BP_PalSupplyIncidentAction_C_ExistsAliveCharacter::CallFunc_IsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ExistsAliveCharacter, Temp_int_Loop_Counter_Variable) == 0x000044, "Member 'BP_PalSupplyIncidentAction_C_ExistsAliveCharacter::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ExistsAliveCharacter, CallFunc_Less_IntInt_ReturnValue) == 0x000048, "Member 'BP_PalSupplyIncidentAction_C_ExistsAliveCharacter::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ExistsAliveCharacter, CallFunc_Add_IntInt_ReturnValue) == 0x00004C, "Member 'BP_PalSupplyIncidentAction_C_ExistsAliveCharacter::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BP_PalSupplyIncidentAction.BP_PalSupplyIncidentAction_C.GetNPCSpawner
// 0x00F8 (0x00F8 - 0x0000)
struct BP_PalSupplyIncidentAction_C_GetNPCSpawner final
{
public:
	bool                                          bIsPalSpawner;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalRandomIncidentNPCSpawner*           Result;                                            // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0018(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0068(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0078(0x0018)()
	class UPalSupplyManager*                      CallFunc_GetSupplyManager_ReturnValue;             // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetOuterObject_ReturnValue;               // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalSupplyIncident_C*                K2Node_DynamicCast_AsBP_Pal_Supply_Incident;       // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetOwner_ReturnValue;                     // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PalSupplyIncidentSpawnerBase_C*     K2Node_DynamicCast_AsBP_Pal_Supply_Incident_Spawner_Base; // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalSupplySpawnerData*                  CallFunc_GetSupplySpawnerByIncidentSpawner_ReturnValue; // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalNPCSpawnerBase*                     K2Node_Select_Default;                             // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalRandomIncidentNPCSpawner*           K2Node_DynamicCast_AsPal_Random_Incident_NPCSpawner; // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSupplyIncidentAction_C_GetNPCSpawner) == 0x000008, "Wrong alignment on BP_PalSupplyIncidentAction_C_GetNPCSpawner");
static_assert(sizeof(BP_PalSupplyIncidentAction_C_GetNPCSpawner) == 0x0000F8, "Wrong size on BP_PalSupplyIncidentAction_C_GetNPCSpawner");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetNPCSpawner, bIsPalSpawner) == 0x000000, "Member 'BP_PalSupplyIncidentAction_C_GetNPCSpawner::bIsPalSpawner' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetNPCSpawner, Result) == 0x000008, "Member 'BP_PalSupplyIncidentAction_C_GetNPCSpawner::Result' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetNPCSpawner, Temp_bool_Variable) == 0x000010, "Member 'BP_PalSupplyIncidentAction_C_GetNPCSpawner::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetNPCSpawner, K2Node_MakeStruct_FormatArgumentData) == 0x000018, "Member 'BP_PalSupplyIncidentAction_C_GetNPCSpawner::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetNPCSpawner, K2Node_MakeArray_Array) == 0x000068, "Member 'BP_PalSupplyIncidentAction_C_GetNPCSpawner::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetNPCSpawner, CallFunc_Format_ReturnValue) == 0x000078, "Member 'BP_PalSupplyIncidentAction_C_GetNPCSpawner::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetNPCSpawner, CallFunc_GetSupplyManager_ReturnValue) == 0x000090, "Member 'BP_PalSupplyIncidentAction_C_GetNPCSpawner::CallFunc_GetSupplyManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetNPCSpawner, CallFunc_Conv_TextToString_ReturnValue) == 0x000098, "Member 'BP_PalSupplyIncidentAction_C_GetNPCSpawner::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetNPCSpawner, CallFunc_GetOuterObject_ReturnValue) == 0x0000A8, "Member 'BP_PalSupplyIncidentAction_C_GetNPCSpawner::CallFunc_GetOuterObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetNPCSpawner, K2Node_DynamicCast_AsBP_Pal_Supply_Incident) == 0x0000B0, "Member 'BP_PalSupplyIncidentAction_C_GetNPCSpawner::K2Node_DynamicCast_AsBP_Pal_Supply_Incident' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetNPCSpawner, K2Node_DynamicCast_bSuccess) == 0x0000B8, "Member 'BP_PalSupplyIncidentAction_C_GetNPCSpawner::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetNPCSpawner, CallFunc_GetOwner_ReturnValue) == 0x0000C0, "Member 'BP_PalSupplyIncidentAction_C_GetNPCSpawner::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetNPCSpawner, K2Node_DynamicCast_AsBP_Pal_Supply_Incident_Spawner_Base) == 0x0000C8, "Member 'BP_PalSupplyIncidentAction_C_GetNPCSpawner::K2Node_DynamicCast_AsBP_Pal_Supply_Incident_Spawner_Base' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetNPCSpawner, K2Node_DynamicCast_bSuccess_1) == 0x0000D0, "Member 'BP_PalSupplyIncidentAction_C_GetNPCSpawner::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetNPCSpawner, CallFunc_GetSupplySpawnerByIncidentSpawner_ReturnValue) == 0x0000D8, "Member 'BP_PalSupplyIncidentAction_C_GetNPCSpawner::CallFunc_GetSupplySpawnerByIncidentSpawner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetNPCSpawner, K2Node_Select_Default) == 0x0000E0, "Member 'BP_PalSupplyIncidentAction_C_GetNPCSpawner::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetNPCSpawner, K2Node_DynamicCast_AsPal_Random_Incident_NPCSpawner) == 0x0000E8, "Member 'BP_PalSupplyIncidentAction_C_GetNPCSpawner::K2Node_DynamicCast_AsPal_Random_Incident_NPCSpawner' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetNPCSpawner, K2Node_DynamicCast_bSuccess_2) == 0x0000F0, "Member 'BP_PalSupplyIncidentAction_C_GetNPCSpawner::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

// Function BP_PalSupplyIncidentAction.BP_PalSupplyIncidentAction_C.GetSpawnedLocation
// 0x0080 (0x0080 - 0x0000)
struct BP_PalSupplyIncidentAction_C_GetSpawnedLocation final
{
public:
	class APalAIController*                       Controller;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Found;                                             // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Location;                                          // 0x0010(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalRandomIncidentNPCSpawner*           CallFunc_GetSpawner_Spawmer;                       // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PalRandomIncidentNPCSpawner_C*      K2Node_DynamicCast_AsBP_Pal_Random_Incident_NPCSpawner; // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSpawnedLocation_Found;                 // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62[0x6];                                       // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetSpawnedLocation_SpawnedLocation;       // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSupplyIncidentAction_C_GetSpawnedLocation) == 0x000008, "Wrong alignment on BP_PalSupplyIncidentAction_C_GetSpawnedLocation");
static_assert(sizeof(BP_PalSupplyIncidentAction_C_GetSpawnedLocation) == 0x000080, "Wrong size on BP_PalSupplyIncidentAction_C_GetSpawnedLocation");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetSpawnedLocation, Controller) == 0x000000, "Member 'BP_PalSupplyIncidentAction_C_GetSpawnedLocation::Controller' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetSpawnedLocation, Found) == 0x000008, "Member 'BP_PalSupplyIncidentAction_C_GetSpawnedLocation::Found' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetSpawnedLocation, Location) == 0x000010, "Member 'BP_PalSupplyIncidentAction_C_GetSpawnedLocation::Location' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetSpawnedLocation, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_PalSupplyIncidentAction_C_GetSpawnedLocation::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetSpawnedLocation, CallFunc_K2_GetPawn_ReturnValue) == 0x000030, "Member 'BP_PalSupplyIncidentAction_C_GetSpawnedLocation::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetSpawnedLocation, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'BP_PalSupplyIncidentAction_C_GetSpawnedLocation::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetSpawnedLocation, CallFunc_GetComponentByClass_ReturnValue) == 0x000040, "Member 'BP_PalSupplyIncidentAction_C_GetSpawnedLocation::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetSpawnedLocation, CallFunc_IsValid_ReturnValue_2) == 0x000048, "Member 'BP_PalSupplyIncidentAction_C_GetSpawnedLocation::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetSpawnedLocation, CallFunc_GetSpawner_Spawmer) == 0x000050, "Member 'BP_PalSupplyIncidentAction_C_GetSpawnedLocation::CallFunc_GetSpawner_Spawmer' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetSpawnedLocation, K2Node_DynamicCast_AsBP_Pal_Random_Incident_NPCSpawner) == 0x000058, "Member 'BP_PalSupplyIncidentAction_C_GetSpawnedLocation::K2Node_DynamicCast_AsBP_Pal_Random_Incident_NPCSpawner' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetSpawnedLocation, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'BP_PalSupplyIncidentAction_C_GetSpawnedLocation::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetSpawnedLocation, CallFunc_GetSpawnedLocation_Found) == 0x000061, "Member 'BP_PalSupplyIncidentAction_C_GetSpawnedLocation::CallFunc_GetSpawnedLocation_Found' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetSpawnedLocation, CallFunc_GetSpawnedLocation_SpawnedLocation) == 0x000068, "Member 'BP_PalSupplyIncidentAction_C_GetSpawnedLocation::CallFunc_GetSpawnedLocation_SpawnedLocation' has a wrong offset!");

// Function BP_PalSupplyIncidentAction.BP_PalSupplyIncidentAction_C.GetSpawnerLocation
// 0x0040 (0x0040 - 0x0000)
struct BP_PalSupplyIncidentAction_C_GetSpawnerLocation final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalRandomIncidentNPCSpawner*           CallFunc_GetSpawner_Spawmer;                       // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSupplyIncidentAction_C_GetSpawnerLocation) == 0x000008, "Wrong alignment on BP_PalSupplyIncidentAction_C_GetSpawnerLocation");
static_assert(sizeof(BP_PalSupplyIncidentAction_C_GetSpawnerLocation) == 0x000040, "Wrong size on BP_PalSupplyIncidentAction_C_GetSpawnerLocation");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetSpawnerLocation, Location) == 0x000000, "Member 'BP_PalSupplyIncidentAction_C_GetSpawnerLocation::Location' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetSpawnerLocation, CallFunc_GetSpawner_Spawmer) == 0x000018, "Member 'BP_PalSupplyIncidentAction_C_GetSpawnerLocation::CallFunc_GetSpawner_Spawmer' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetSpawnerLocation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000020, "Member 'BP_PalSupplyIncidentAction_C_GetSpawnerLocation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetSpawnerLocation, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'BP_PalSupplyIncidentAction_C_GetSpawnerLocation::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_PalSupplyIncidentAction.BP_PalSupplyIncidentAction_C.GetSpawnRadius
// 0x0038 (0x0038 - 0x0000)
struct BP_PalSupplyIncidentAction_C_GetSpawnRadius final
{
public:
	double                                        Radius;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalRandomIncidentNPCSpawner*           CallFunc_GetSpawner_Spawmer;                       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalRandomIncidentSpawnerBase*          K2Node_DynamicCast_AsPal_Random_Incident_Spawner_Base; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetAreaRadius_ReturnValue;                // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_FunctionResult_Radius_ImplicitCast;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSupplyIncidentAction_C_GetSpawnRadius) == 0x000008, "Wrong alignment on BP_PalSupplyIncidentAction_C_GetSpawnRadius");
static_assert(sizeof(BP_PalSupplyIncidentAction_C_GetSpawnRadius) == 0x000038, "Wrong size on BP_PalSupplyIncidentAction_C_GetSpawnRadius");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetSpawnRadius, Radius) == 0x000000, "Member 'BP_PalSupplyIncidentAction_C_GetSpawnRadius::Radius' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetSpawnRadius, CallFunc_GetSpawner_Spawmer) == 0x000008, "Member 'BP_PalSupplyIncidentAction_C_GetSpawnRadius::CallFunc_GetSpawner_Spawmer' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetSpawnRadius, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'BP_PalSupplyIncidentAction_C_GetSpawnRadius::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetSpawnRadius, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_PalSupplyIncidentAction_C_GetSpawnRadius::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetSpawnRadius, K2Node_DynamicCast_AsPal_Random_Incident_Spawner_Base) == 0x000020, "Member 'BP_PalSupplyIncidentAction_C_GetSpawnRadius::K2Node_DynamicCast_AsPal_Random_Incident_Spawner_Base' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetSpawnRadius, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_PalSupplyIncidentAction_C_GetSpawnRadius::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetSpawnRadius, CallFunc_GetAreaRadius_ReturnValue) == 0x00002C, "Member 'BP_PalSupplyIncidentAction_C_GetSpawnRadius::CallFunc_GetAreaRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetSpawnRadius, K2Node_FunctionResult_Radius_ImplicitCast) == 0x000030, "Member 'BP_PalSupplyIncidentAction_C_GetSpawnRadius::K2Node_FunctionResult_Radius_ImplicitCast' has a wrong offset!");

// Function BP_PalSupplyIncidentAction.BP_PalSupplyIncidentAction_C.OnTick
// 0x0004 (0x0004 - 0x0000)
struct BP_PalSupplyIncidentAction_C_OnTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSupplyIncidentAction_C_OnTick) == 0x000004, "Wrong alignment on BP_PalSupplyIncidentAction_C_OnTick");
static_assert(sizeof(BP_PalSupplyIncidentAction_C_OnTick) == 0x000004, "Wrong size on BP_PalSupplyIncidentAction_C_OnTick");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_OnTick, DeltaTime) == 0x000000, "Member 'BP_PalSupplyIncidentAction_C_OnTick::DeltaTime' has a wrong offset!");

// Function BP_PalSupplyIncidentAction.BP_PalSupplyIncidentAction_C.ResetAIController
// 0x0078 (0x0078 - 0x0000)
struct BP_PalSupplyIncidentAction_C_ResetAIController final
{
public:
	bool                                          NPCSpawner;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 Actor;                                             // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class AController*                            Controller;                                        // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalRandomIncidentNPCSpawner*           CallFunc_GetNPCSpawner_Result;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetSpawnedCharacters_SpawnedCharacters;   // 0x0028(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MonsterAIController_Wild_C*         K2Node_DynamicCast_AsBP_Monster_AIController_Wild; // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62[0x2];                                       // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_NPCAIController_C*                  K2Node_DynamicCast_AsBP_NPCAIController;           // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSupplyIncidentAction_C_ResetAIController) == 0x000008, "Wrong alignment on BP_PalSupplyIncidentAction_C_ResetAIController");
static_assert(sizeof(BP_PalSupplyIncidentAction_C_ResetAIController) == 0x000078, "Wrong size on BP_PalSupplyIncidentAction_C_ResetAIController");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController, NPCSpawner) == 0x000000, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController::NPCSpawner' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController, Actor) == 0x000008, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController::Actor' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController, Controller) == 0x000010, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController::Controller' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController, CallFunc_GetNPCSpawner_Result) == 0x000020, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController::CallFunc_GetNPCSpawner_Result' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController, CallFunc_GetSpawnedCharacters_SpawnedCharacters) == 0x000028, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController::CallFunc_GetSpawnedCharacters_SpawnedCharacters' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController, CallFunc_Array_Length_ReturnValue) == 0x000044, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController, CallFunc_GetController_ReturnValue) == 0x000048, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController, CallFunc_IsValid_ReturnValue_1) == 0x000050, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController, Temp_int_Loop_Counter_Variable) == 0x000054, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController, K2Node_DynamicCast_AsBP_Monster_AIController_Wild) == 0x000058, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController::K2Node_DynamicCast_AsBP_Monster_AIController_Wild' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController, CallFunc_Less_IntInt_ReturnValue) == 0x000061, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController, CallFunc_Add_IntInt_ReturnValue) == 0x000064, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController, K2Node_DynamicCast_AsBP_NPCAIController) == 0x000068, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController::K2Node_DynamicCast_AsBP_NPCAIController' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController, K2Node_DynamicCast_bSuccess_1) == 0x000070, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function BP_PalSupplyIncidentAction.BP_PalSupplyIncidentAction_C.ResetAIController_Monster
// 0x0098 (0x0098 - 0x0000)
struct BP_PalSupplyIncidentAction_C_ResetAIController_Monster final
{
public:
	class ABP_MonsterAIControllerBase_C*          Controller;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSpawnedLocation_Found;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetSpawnedLocation_Location;              // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSpawnerLocation_Location;              // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_GetPalAIBlackboard_C> K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard;     // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetSpawnRadius_Radius;                    // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_PalAIBlackboard_Common_C*           CallFunc_GetMyBB_PalBrackboard;                    // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSupplyIncidentAction_C_ResetAIController_Monster) == 0x000008, "Wrong alignment on BP_PalSupplyIncidentAction_C_ResetAIController_Monster");
static_assert(sizeof(BP_PalSupplyIncidentAction_C_ResetAIController_Monster) == 0x000098, "Wrong size on BP_PalSupplyIncidentAction_C_ResetAIController_Monster");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController_Monster, Controller) == 0x000000, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController_Monster::Controller' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController_Monster, CallFunc_K2_GetPawn_ReturnValue) == 0x000008, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController_Monster::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController_Monster, CallFunc_GetSpawnedLocation_Found) == 0x000010, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController_Monster::CallFunc_GetSpawnedLocation_Found' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController_Monster, CallFunc_GetSpawnedLocation_Location) == 0x000018, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController_Monster::CallFunc_GetSpawnedLocation_Location' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController_Monster, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000030, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController_Monster::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController_Monster, CallFunc_GetSpawnerLocation_Location) == 0x000048, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController_Monster::CallFunc_GetSpawnerLocation_Location' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController_Monster, K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard) == 0x000060, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController_Monster::K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController_Monster, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController_Monster::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController_Monster, CallFunc_GetSpawnRadius_Radius) == 0x000078, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController_Monster::CallFunc_GetSpawnRadius_Radius' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController_Monster, CallFunc_GetMyBB_PalBrackboard) == 0x000080, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController_Monster::CallFunc_GetMyBB_PalBrackboard' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController_Monster, CallFunc_GetComponentByClass_ReturnValue) == 0x000088, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController_Monster::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController_Monster, CallFunc_GetOwner_ReturnValue) == 0x000090, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController_Monster::CallFunc_GetOwner_ReturnValue' has a wrong offset!");

// Function BP_PalSupplyIncidentAction.BP_PalSupplyIncidentAction_C.ResetAIController_NPC
// 0x0090 (0x0090 - 0x0000)
struct BP_PalSupplyIncidentAction_C_ResetAIController_NPC final
{
public:
	class ABP_NPCAIController_C*                  Controller;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSpawnedLocation_Found;                 // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetSpawnedLocation_Location;              // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSpawnerLocation_Location;              // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetSpawnRadius_Radius;                    // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_GetPalAIBlackboard_C> CallFunc_GetMyBB_self_CastInput;                   // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_PalAIBlackboard_Common_C*           CallFunc_GetMyBB_PalBrackboard;                    // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSupplyIncidentAction_C_ResetAIController_NPC) == 0x000008, "Wrong alignment on BP_PalSupplyIncidentAction_C_ResetAIController_NPC");
static_assert(sizeof(BP_PalSupplyIncidentAction_C_ResetAIController_NPC) == 0x000090, "Wrong size on BP_PalSupplyIncidentAction_C_ResetAIController_NPC");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController_NPC, Controller) == 0x000000, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController_NPC::Controller' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController_NPC, CallFunc_GetSpawnedLocation_Found) == 0x000008, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController_NPC::CallFunc_GetSpawnedLocation_Found' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController_NPC, CallFunc_GetSpawnedLocation_Location) == 0x000010, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController_NPC::CallFunc_GetSpawnedLocation_Location' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController_NPC, CallFunc_K2_GetPawn_ReturnValue) == 0x000028, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController_NPC::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController_NPC, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000030, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController_NPC::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController_NPC, CallFunc_GetSpawnerLocation_Location) == 0x000048, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController_NPC::CallFunc_GetSpawnerLocation_Location' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController_NPC, CallFunc_GetSpawnRadius_Radius) == 0x000060, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController_NPC::CallFunc_GetSpawnRadius_Radius' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController_NPC, CallFunc_GetMyBB_self_CastInput) == 0x000068, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController_NPC::CallFunc_GetMyBB_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController_NPC, CallFunc_GetMyBB_PalBrackboard) == 0x000078, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController_NPC::CallFunc_GetMyBB_PalBrackboard' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController_NPC, CallFunc_GetComponentByClass_ReturnValue) == 0x000080, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController_NPC::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_ResetAIController_NPC, CallFunc_GetOwner_ReturnValue) == 0x000088, "Member 'BP_PalSupplyIncidentAction_C_ResetAIController_NPC::CallFunc_GetOwner_ReturnValue' has a wrong offset!");

// Function BP_PalSupplyIncidentAction.BP_PalSupplyIncidentAction_C.Set Hate To Targets
// 0x00D8 (0x00D8 - 0x0000)
struct BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets final
{
public:
	class APalCharacter*                          Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class APalCharacter*>                  Targets;                                           // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class APalAIController*                       Controller;                                        // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_Array_Get_Item_1;                         // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_Array_Get_Item_2;                         // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFixedPoint64                          CallFunc_GetMaxHP_ReturnValue;                     // 0x0068(0x0008)(NoDestructor)
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;  // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          CallFunc_GetAIController_ReturnValue;              // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_MonsterAIController_Wild_C*         K2Node_DynamicCast_AsBP_Monster_AIController_Wild; // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalAIController*                       K2Node_DynamicCast_AsPal_AIController;             // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_NPCAIController_C*                  K2Node_DynamicCast_AsBP_NPCAIController;           // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHate*                               CallFunc_GetHateSystem_ReturnValue;                // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ChangeHate_PlusHateValue_ImplicitCast;    // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets) == 0x000008, "Wrong alignment on BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets");
static_assert(sizeof(BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets) == 0x0000D8, "Wrong size on BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets, Character) == 0x000000, "Member 'BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets::Character' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets, Targets) == 0x000008, "Member 'BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets::Targets' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets, Controller) == 0x000018, "Member 'BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets::Controller' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets, Temp_int_Array_Index_Variable) == 0x000020, "Member 'BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets, CallFunc_GetGameSetting_ReturnValue) == 0x000030, "Member 'BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets, CallFunc_Array_Get_Item_1) == 0x000040, "Member 'BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets, CallFunc_Array_Get_Item_2) == 0x000048, "Member 'BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets, CallFunc_GetComponentByClass_ReturnValue) == 0x000058, "Member 'BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets, CallFunc_GetMaxHP_ReturnValue) == 0x000068, "Member 'BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets::CallFunc_GetMaxHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue) == 0x000070, "Member 'BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000078, "Member 'BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets, CallFunc_GetAIController_ReturnValue) == 0x000080, "Member 'BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets::CallFunc_GetAIController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets, K2Node_DynamicCast_AsBP_Monster_AIController_Wild) == 0x000088, "Member 'BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets::K2Node_DynamicCast_AsBP_Monster_AIController_Wild' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets, K2Node_DynamicCast_bSuccess) == 0x000090, "Member 'BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets, K2Node_DynamicCast_AsPal_AIController) == 0x000098, "Member 'BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets::K2Node_DynamicCast_AsPal_AIController' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets, K2Node_DynamicCast_bSuccess_1) == 0x0000A0, "Member 'BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets, K2Node_DynamicCast_AsBP_NPCAIController) == 0x0000A8, "Member 'BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets::K2Node_DynamicCast_AsBP_NPCAIController' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets, K2Node_DynamicCast_bSuccess_2) == 0x0000B0, "Member 'BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets, CallFunc_GetHateSystem_ReturnValue) == 0x0000B8, "Member 'BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets::CallFunc_GetHateSystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x0000C0, "Member 'BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0000C8, "Member 'BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets, CallFunc_ChangeHate_PlusHateValue_ImplicitCast) == 0x0000D0, "Member 'BP_PalSupplyIncidentAction_C_Set_Hate_To_Targets::CallFunc_ChangeHate_PlusHateValue_ImplicitCast' has a wrong offset!");

// Function BP_PalSupplyIncidentAction.BP_PalSupplyIncidentAction_C.SetHate
// 0x0060 (0x0060 - 0x0000)
struct BP_PalSupplyIncidentAction_C_SetHate final
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APalCharacter*>                  CallFunc_CollectChangeHateTargets_SourceCharacters; // 0x0018(0x0010)(ReferenceParm)
	TArray<class APalCharacter*>                  CallFunc_CollectChangeHateTargets_TargetCharacters; // 0x0028(0x0010)(ReferenceParm)
	class APalCharacter*                          CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_Array_Get_Item_1;                         // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSupplyIncidentAction_C_SetHate) == 0x000008, "Wrong alignment on BP_PalSupplyIncidentAction_C_SetHate");
static_assert(sizeof(BP_PalSupplyIncidentAction_C_SetHate) == 0x000060, "Wrong size on BP_PalSupplyIncidentAction_C_SetHate");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_SetHate, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'BP_PalSupplyIncidentAction_C_SetHate::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_SetHate, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'BP_PalSupplyIncidentAction_C_SetHate::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_SetHate, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_PalSupplyIncidentAction_C_SetHate::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_SetHate, Temp_int_Array_Index_Variable_1) == 0x00000C, "Member 'BP_PalSupplyIncidentAction_C_SetHate::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_SetHate, Temp_int_Loop_Counter_Variable_1) == 0x000010, "Member 'BP_PalSupplyIncidentAction_C_SetHate::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_SetHate, CallFunc_CollectChangeHateTargets_SourceCharacters) == 0x000018, "Member 'BP_PalSupplyIncidentAction_C_SetHate::CallFunc_CollectChangeHateTargets_SourceCharacters' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_SetHate, CallFunc_CollectChangeHateTargets_TargetCharacters) == 0x000028, "Member 'BP_PalSupplyIncidentAction_C_SetHate::CallFunc_CollectChangeHateTargets_TargetCharacters' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_SetHate, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_PalSupplyIncidentAction_C_SetHate::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_SetHate, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'BP_PalSupplyIncidentAction_C_SetHate::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_SetHate, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'BP_PalSupplyIncidentAction_C_SetHate::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_SetHate, CallFunc_Array_Get_Item_1) == 0x000048, "Member 'BP_PalSupplyIncidentAction_C_SetHate::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_SetHate, CallFunc_Array_Length_ReturnValue_1) == 0x000050, "Member 'BP_PalSupplyIncidentAction_C_SetHate::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_SetHate, CallFunc_Add_IntInt_ReturnValue_1) == 0x000054, "Member 'BP_PalSupplyIncidentAction_C_SetHate::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_SetHate, CallFunc_Less_IntInt_ReturnValue_1) == 0x000058, "Member 'BP_PalSupplyIncidentAction_C_SetHate::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function BP_PalSupplyIncidentAction.BP_PalSupplyIncidentAction_C.GetSpawner
// 0x0010 (0x0010 - 0x0000)
struct BP_PalSupplyIncidentAction_C_GetSpawner final
{
public:
	class APalRandomIncidentNPCSpawner*           Spawmer;                                           // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalRandomIncidentNPCSpawner*           CallFunc_GetSpawner_Spawmer;                       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSupplyIncidentAction_C_GetSpawner) == 0x000008, "Wrong alignment on BP_PalSupplyIncidentAction_C_GetSpawner");
static_assert(sizeof(BP_PalSupplyIncidentAction_C_GetSpawner) == 0x000010, "Wrong size on BP_PalSupplyIncidentAction_C_GetSpawner");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetSpawner, Spawmer) == 0x000000, "Member 'BP_PalSupplyIncidentAction_C_GetSpawner::Spawmer' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentAction_C_GetSpawner, CallFunc_GetSpawner_Spawmer) == 0x000008, "Member 'BP_PalSupplyIncidentAction_C_GetSpawner::CallFunc_GetSpawner_Spawmer' has a wrong offset!");

}

