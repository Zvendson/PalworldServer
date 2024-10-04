#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function BP_ArenaSequence_PreBattle.BP_ArenaSequence_PreBattle_C.ActivatePals
// 0x03E0 (0x03E0 - 0x0000)
struct BP_ArenaSequence_PreBattle_C_ActivatePals final
{
public:
	int32                                         NewLocalVar;                                       // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EPalArenaPlayerIndex, struct FPalArenaPlayerInfo> PlayerInfoMap;                                     // 0x0008(0x0050)(Edit, BlueprintVisible)
	class UPalIndividualCharacterParameter*       IndividualParameter;                               // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          IndividualActor;                                   // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	EPalArenaPlayerIndex                          PlayerIndex;                                       // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EPalArenaPlayerIndex, struct FPalArenaPlayerInfo> K2Node_MakeVariable_MakeVariableOutput;            // 0x0070(0x0050)()
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetIndividualActor_ReturnValue;           // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetIndividualCharacterHandleByActor_ReturnValue; // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetIndividualActor_ReturnValue_1;         // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetIndividualCharacterHandleByActor_ReturnValue_1; // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalArenaPlayerInfo                    CallFunc_Map_Find_Value;                           // 0x00F8(0x0048)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_142[0x6];                                      // 0x0142(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EPalArenaPlayerIndex>                  CallFunc_Map_Keys_Keys;                            // 0x0148(0x0010)(ReferenceParm)
	class APalCharacter*                          CallFunc_GetIndividualActor_ReturnValue_2;         // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalArenaPlayerIndex                          CallFunc_Array_Get_Item;                           // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterMovementComponent*         CallFunc_GetPalCharacterMovementComponent_ReturnValue; // 0x0168(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0174(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0175(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_176[0x2];                                      // 0x0176(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterMovementComponent*         CallFunc_GetPalCharacterMovementComponent_ReturnValue_1; // 0x0178(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0180(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_OtomoPalHolderComponent_C*          CallFunc_GetComponentByClass_ReturnValue;          // 0x0188(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_191[0x7];                                      // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalArenaPlayerInfo                    CallFunc_Map_Find_Value_1;                         // 0x0198(0x0048)()
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E1[0x7];                                      // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetIndividualActor_ReturnValue_3;         // 0x01E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalArenaPlayerInfo                    CallFunc_Map_Find_Value_2;                         // 0x01F0(0x0048)()
	bool                                          CallFunc_Map_Find_ReturnValue_2;                   // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_239[0x7];                                      // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalArenaInstanceModel*                 CallFunc_GetInstanceModel_ReturnValue;             // 0x0240(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalArenaLevelInstance*                 CallFunc_GetArenaLevelInstance_ReturnValue;        // 0x0248(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_Array_Get_Item_1;                         // 0x0250(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_258[0x8];                                      // 0x0258(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalArenaBattleFormation               CallFunc_GetBattleFormation_ReturnValue;           // 0x0260(0x0070)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x02D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D5[0x3];                                      // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x02D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x02F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0308(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0320(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0380(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_381[0x7];                                      // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalArenaSequencer*                     CallFunc_GetOuterSequencer_ReturnValue;            // 0x0388(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<EPalArenaPlayerIndex, struct FPalArenaPlayerInfo> CallFunc_GetArenaPlayerInfoMap_ReturnValue;        // 0x0390(0x0050)(ConstParm)
};
static_assert(alignof(BP_ArenaSequence_PreBattle_C_ActivatePals) == 0x000010, "Wrong alignment on BP_ArenaSequence_PreBattle_C_ActivatePals");
static_assert(sizeof(BP_ArenaSequence_PreBattle_C_ActivatePals) == 0x0003E0, "Wrong size on BP_ArenaSequence_PreBattle_C_ActivatePals");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, NewLocalVar) == 0x000000, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::NewLocalVar' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, PlayerInfoMap) == 0x000008, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::PlayerInfoMap' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, IndividualParameter) == 0x000058, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::IndividualParameter' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, IndividualActor) == 0x000060, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::IndividualActor' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, PlayerIndex) == 0x000068, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::PlayerIndex' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, K2Node_MakeVariable_MakeVariableOutput) == 0x000070, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::K2Node_MakeVariable_MakeVariableOutput' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, Temp_int_Array_Index_Variable) == 0x0000C0, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, Temp_int_Loop_Counter_Variable) == 0x0000C4, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_Add_IntInt_ReturnValue) == 0x0000C8, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, Temp_int_Loop_Counter_Variable_1) == 0x0000CC, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000D0, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, Temp_int_Array_Index_Variable_1) == 0x0000D4, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_GetIndividualActor_ReturnValue) == 0x0000D8, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_GetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_GetIndividualCharacterHandleByActor_ReturnValue) == 0x0000E0, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_GetIndividualCharacterHandleByActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_GetIndividualActor_ReturnValue_1) == 0x0000E8, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_GetIndividualActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_GetIndividualCharacterHandleByActor_ReturnValue_1) == 0x0000F0, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_GetIndividualCharacterHandleByActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_Map_Find_Value) == 0x0000F8, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_Map_Find_ReturnValue) == 0x000140, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_IsValid_ReturnValue) == 0x000141, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_Map_Keys_Keys) == 0x000148, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_GetIndividualActor_ReturnValue_2) == 0x000158, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_GetIndividualActor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_Array_Get_Item) == 0x000160, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_GetPalCharacterMovementComponent_ReturnValue) == 0x000168, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_GetPalCharacterMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_Array_Length_ReturnValue) == 0x000170, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_Less_IntInt_ReturnValue) == 0x000174, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000175, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_GetPalCharacterMovementComponent_ReturnValue_1) == 0x000178, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_GetPalCharacterMovementComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_GetPlayerController_ReturnValue) == 0x000180, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_GetComponentByClass_ReturnValue) == 0x000188, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_IsValid_ReturnValue_1) == 0x000190, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_Map_Find_Value_1) == 0x000198, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_Map_Find_ReturnValue_1) == 0x0001E0, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_GetIndividualActor_ReturnValue_3) == 0x0001E8, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_GetIndividualActor_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_Map_Find_Value_2) == 0x0001F0, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_Map_Find_Value_2' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_Map_Find_ReturnValue_2) == 0x000238, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_Map_Find_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_GetInstanceModel_ReturnValue) == 0x000240, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_GetInstanceModel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_GetArenaLevelInstance_ReturnValue) == 0x000248, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_GetArenaLevelInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_Array_Get_Item_1) == 0x000250, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_GetBattleFormation_ReturnValue) == 0x000260, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_GetBattleFormation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_Array_Length_ReturnValue_1) == 0x0002D0, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_Less_IntInt_ReturnValue_1) == 0x0002D4, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_BreakTransform_Location) == 0x0002D8, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_BreakTransform_Rotation) == 0x0002F0, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_BreakTransform_Scale) == 0x000308, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_MakeTransform_ReturnValue) == 0x000320, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_IsServer_ReturnValue) == 0x000380, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_GetOuterSequencer_ReturnValue) == 0x000388, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ActivatePals, CallFunc_GetArenaPlayerInfoMap_ReturnValue) == 0x000390, "Member 'BP_ArenaSequence_PreBattle_C_ActivatePals::CallFunc_GetArenaPlayerInfoMap_ReturnValue' has a wrong offset!");

// Function BP_ArenaSequence_PreBattle.BP_ArenaSequence_PreBattle_C.ExecuteUbergraph_BP_ArenaSequence_PreBattle
// 0x0040 (0x0040 - 0x0000)
struct BP_ArenaSequence_PreBattle_C_ExecuteUbergraph_BP_ArenaSequence_PreBattle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bIsSkipped)>              K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerController*                   K2Node_DynamicCast_AsPal_Player_Controller;        // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOutsiderSequencer_ReturnValue;          // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalArenaSequencer*                     CallFunc_GetOuterSequencer_ReturnValue;            // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bIsSkipped;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOutsiderSequencer_ReturnValue_1;        // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_PreBattle_C_ExecuteUbergraph_BP_ArenaSequence_PreBattle) == 0x000008, "Wrong alignment on BP_ArenaSequence_PreBattle_C_ExecuteUbergraph_BP_ArenaSequence_PreBattle");
static_assert(sizeof(BP_ArenaSequence_PreBattle_C_ExecuteUbergraph_BP_ArenaSequence_PreBattle) == 0x000040, "Wrong size on BP_ArenaSequence_PreBattle_C_ExecuteUbergraph_BP_ArenaSequence_PreBattle");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ExecuteUbergraph_BP_ArenaSequence_PreBattle, EntryPoint) == 0x000000, "Member 'BP_ArenaSequence_PreBattle_C_ExecuteUbergraph_BP_ArenaSequence_PreBattle::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ExecuteUbergraph_BP_ArenaSequence_PreBattle, CallFunc_IsServer_ReturnValue) == 0x000004, "Member 'BP_ArenaSequence_PreBattle_C_ExecuteUbergraph_BP_ArenaSequence_PreBattle::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ExecuteUbergraph_BP_ArenaSequence_PreBattle, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000008, "Member 'BP_ArenaSequence_PreBattle_C_ExecuteUbergraph_BP_ArenaSequence_PreBattle::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ExecuteUbergraph_BP_ArenaSequence_PreBattle, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_ArenaSequence_PreBattle_C_ExecuteUbergraph_BP_ArenaSequence_PreBattle::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ExecuteUbergraph_BP_ArenaSequence_PreBattle, K2Node_DynamicCast_AsPal_Player_Controller) == 0x000020, "Member 'BP_ArenaSequence_PreBattle_C_ExecuteUbergraph_BP_ArenaSequence_PreBattle::K2Node_DynamicCast_AsPal_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ExecuteUbergraph_BP_ArenaSequence_PreBattle, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_ArenaSequence_PreBattle_C_ExecuteUbergraph_BP_ArenaSequence_PreBattle::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ExecuteUbergraph_BP_ArenaSequence_PreBattle, CallFunc_IsOutsiderSequencer_ReturnValue) == 0x000029, "Member 'BP_ArenaSequence_PreBattle_C_ExecuteUbergraph_BP_ArenaSequence_PreBattle::CallFunc_IsOutsiderSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ExecuteUbergraph_BP_ArenaSequence_PreBattle, CallFunc_GetOuterSequencer_ReturnValue) == 0x000030, "Member 'BP_ArenaSequence_PreBattle_C_ExecuteUbergraph_BP_ArenaSequence_PreBattle::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ExecuteUbergraph_BP_ArenaSequence_PreBattle, K2Node_CustomEvent_bIsSkipped) == 0x000038, "Member 'BP_ArenaSequence_PreBattle_C_ExecuteUbergraph_BP_ArenaSequence_PreBattle::K2Node_CustomEvent_bIsSkipped' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ExecuteUbergraph_BP_ArenaSequence_PreBattle, CallFunc_IsOutsiderSequencer_ReturnValue_1) == 0x000039, "Member 'BP_ArenaSequence_PreBattle_C_ExecuteUbergraph_BP_ArenaSequence_PreBattle::CallFunc_IsOutsiderSequencer_ReturnValue_1' has a wrong offset!");

// Function BP_ArenaSequence_PreBattle.BP_ArenaSequence_PreBattle_C.FadeOut
// 0x0010 (0x0010 - 0x0000)
struct BP_ArenaSequence_PreBattle_C_FadeOut final
{
public:
	bool                                          CallFunc_IsOutsiderSequencer_ReturnValue;          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_PreBattle_C_FadeOut) == 0x000008, "Wrong alignment on BP_ArenaSequence_PreBattle_C_FadeOut");
static_assert(sizeof(BP_ArenaSequence_PreBattle_C_FadeOut) == 0x000010, "Wrong size on BP_ArenaSequence_PreBattle_C_FadeOut");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_FadeOut, CallFunc_IsOutsiderSequencer_ReturnValue) == 0x000000, "Member 'BP_ArenaSequence_PreBattle_C_FadeOut::CallFunc_IsOutsiderSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_FadeOut, CallFunc_GetHUDService_ReturnValue) == 0x000008, "Member 'BP_ArenaSequence_PreBattle_C_FadeOut::CallFunc_GetHUDService_ReturnValue' has a wrong offset!");

// Function BP_ArenaSequence_PreBattle.BP_ArenaSequence_PreBattle_C.OnCameraTarget
// 0x0138 (0x0138 - 0x0000)
struct BP_ArenaSequence_PreBattle_C_OnCameraTarget final
{
public:
	EPalArenaPlayerIndex                          PlayerIndex;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          Actor;                                             // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_PalCryComponent_C*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_PalCryComponent_C*                  CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMontange_bExist;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc_FindMontange_ReturnValue;                 // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMontange_bExist_1;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc_FindMontange_ReturnValue_1;               // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalArenaSequencer*                     CallFunc_GetOuterSequencer_ReturnValue;            // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           K2Node_Select_Default;                             // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<EPalArenaPlayerIndex, struct FPalArenaPlayerInfo> CallFunc_GetArenaPlayerInfoMap_ReturnValue;        // 0x0078(0x0050)(ConstParm)
	float                                         CallFunc_Montage_Play_ReturnValue;                 // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalArenaPlayerInfo                    CallFunc_Map_Find_Value;                           // 0x00D0(0x0048)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_119[0x3];                                      // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_Array_Get_Item;                           // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetIndividualActor_ReturnValue;           // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_PreBattle_C_OnCameraTarget) == 0x000008, "Wrong alignment on BP_ArenaSequence_PreBattle_C_OnCameraTarget");
static_assert(sizeof(BP_ArenaSequence_PreBattle_C_OnCameraTarget) == 0x000138, "Wrong size on BP_ArenaSequence_PreBattle_C_OnCameraTarget");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_OnCameraTarget, PlayerIndex) == 0x000000, "Member 'BP_ArenaSequence_PreBattle_C_OnCameraTarget::PlayerIndex' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_OnCameraTarget, Actor) == 0x000008, "Member 'BP_ArenaSequence_PreBattle_C_OnCameraTarget::Actor' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_OnCameraTarget, Temp_bool_Variable) == 0x000010, "Member 'BP_ArenaSequence_PreBattle_C_OnCameraTarget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_OnCameraTarget, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'BP_ArenaSequence_PreBattle_C_OnCameraTarget::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_OnCameraTarget, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'BP_ArenaSequence_PreBattle_C_OnCameraTarget::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_OnCameraTarget, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'BP_ArenaSequence_PreBattle_C_OnCameraTarget::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_OnCameraTarget, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_ArenaSequence_PreBattle_C_OnCameraTarget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_OnCameraTarget, CallFunc_GetComponentByClass_ReturnValue) == 0x000028, "Member 'BP_ArenaSequence_PreBattle_C_OnCameraTarget::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_OnCameraTarget, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000030, "Member 'BP_ArenaSequence_PreBattle_C_OnCameraTarget::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_OnCameraTarget, CallFunc_GetMainMesh_ReturnValue) == 0x000038, "Member 'BP_ArenaSequence_PreBattle_C_OnCameraTarget::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_OnCameraTarget, CallFunc_FindMontange_bExist) == 0x000040, "Member 'BP_ArenaSequence_PreBattle_C_OnCameraTarget::CallFunc_FindMontange_bExist' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_OnCameraTarget, CallFunc_FindMontange_ReturnValue) == 0x000048, "Member 'BP_ArenaSequence_PreBattle_C_OnCameraTarget::CallFunc_FindMontange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_OnCameraTarget, CallFunc_GetAnimInstance_ReturnValue) == 0x000050, "Member 'BP_ArenaSequence_PreBattle_C_OnCameraTarget::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_OnCameraTarget, CallFunc_FindMontange_bExist_1) == 0x000058, "Member 'BP_ArenaSequence_PreBattle_C_OnCameraTarget::CallFunc_FindMontange_bExist_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_OnCameraTarget, CallFunc_FindMontange_ReturnValue_1) == 0x000060, "Member 'BP_ArenaSequence_PreBattle_C_OnCameraTarget::CallFunc_FindMontange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_OnCameraTarget, CallFunc_GetOuterSequencer_ReturnValue) == 0x000068, "Member 'BP_ArenaSequence_PreBattle_C_OnCameraTarget::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_OnCameraTarget, K2Node_Select_Default) == 0x000070, "Member 'BP_ArenaSequence_PreBattle_C_OnCameraTarget::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_OnCameraTarget, CallFunc_GetArenaPlayerInfoMap_ReturnValue) == 0x000078, "Member 'BP_ArenaSequence_PreBattle_C_OnCameraTarget::CallFunc_GetArenaPlayerInfoMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_OnCameraTarget, CallFunc_Montage_Play_ReturnValue) == 0x0000C8, "Member 'BP_ArenaSequence_PreBattle_C_OnCameraTarget::CallFunc_Montage_Play_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_OnCameraTarget, CallFunc_Map_Find_Value) == 0x0000D0, "Member 'BP_ArenaSequence_PreBattle_C_OnCameraTarget::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_OnCameraTarget, CallFunc_Map_Find_ReturnValue) == 0x000118, "Member 'BP_ArenaSequence_PreBattle_C_OnCameraTarget::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_OnCameraTarget, CallFunc_Array_Length_ReturnValue) == 0x00011C, "Member 'BP_ArenaSequence_PreBattle_C_OnCameraTarget::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_OnCameraTarget, CallFunc_Array_Get_Item) == 0x000120, "Member 'BP_ArenaSequence_PreBattle_C_OnCameraTarget::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_OnCameraTarget, CallFunc_Less_IntInt_ReturnValue) == 0x000128, "Member 'BP_ArenaSequence_PreBattle_C_OnCameraTarget::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_OnCameraTarget, CallFunc_GetIndividualActor_ReturnValue) == 0x000130, "Member 'BP_ArenaSequence_PreBattle_C_OnCameraTarget::CallFunc_GetIndividualActor_ReturnValue' has a wrong offset!");

// Function BP_ArenaSequence_PreBattle.BP_ArenaSequence_PreBattle_C.OnFinishCutscene
// 0x0001 (0x0001 - 0x0000)
struct BP_ArenaSequence_PreBattle_C_OnFinishCutscene final
{
public:
	bool                                          bIsSkipped;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_PreBattle_C_OnFinishCutscene) == 0x000001, "Wrong alignment on BP_ArenaSequence_PreBattle_C_OnFinishCutscene");
static_assert(sizeof(BP_ArenaSequence_PreBattle_C_OnFinishCutscene) == 0x000001, "Wrong size on BP_ArenaSequence_PreBattle_C_OnFinishCutscene");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_OnFinishCutscene, bIsSkipped) == 0x000000, "Member 'BP_ArenaSequence_PreBattle_C_OnFinishCutscene::bIsSkipped' has a wrong offset!");

// Function BP_ArenaSequence_PreBattle.BP_ArenaSequence_PreBattle_C.PlayCutscene
// 0x0140 (0x0140 - 0x0000)
struct BP_ArenaSequence_PreBattle_C_PlayCutscene final
{
public:
	class UPalCutsceneComponent*                  CutsceneComponent;                                 // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCutsceneActor*                      CutsceneActor;                                     // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class APalCutsceneActor*                      CallFunc_SpawnCutsceneActor_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCutsceneArenaPreBattleBindParameter* CallFunc_SpawnObject_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0020(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalArenaPreBattleCutsceneEvent*        CallFunc_FinishSpawningActor_ReturnValue;          // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EPalArenaPlayerIndex PlayerIndex)> K2Node_CreateDelegate_OutputDelegate;              // 0x0090(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bIsSkipped)>              K2Node_CreateDelegate_OutputDelegate_1;            // 0x00A0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalArenaInstanceModel*                 CallFunc_GetInstanceModel_ReturnValue;             // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalArenaLevelInstance*                 CallFunc_GetArenaLevelInstance_ReturnValue;        // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerController*                   K2Node_DynamicCast_AsPal_Player_Controller;        // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0xF];                                       // 0x00D1(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x00E0(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_PreBattle_C_PlayCutscene) == 0x000010, "Wrong alignment on BP_ArenaSequence_PreBattle_C_PlayCutscene");
static_assert(sizeof(BP_ArenaSequence_PreBattle_C_PlayCutscene) == 0x000140, "Wrong size on BP_ArenaSequence_PreBattle_C_PlayCutscene");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_PlayCutscene, CutsceneComponent) == 0x000000, "Member 'BP_ArenaSequence_PreBattle_C_PlayCutscene::CutsceneComponent' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_PlayCutscene, CutsceneActor) == 0x000008, "Member 'BP_ArenaSequence_PreBattle_C_PlayCutscene::CutsceneActor' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_PlayCutscene, CallFunc_SpawnCutsceneActor_ReturnValue) == 0x000010, "Member 'BP_ArenaSequence_PreBattle_C_PlayCutscene::CallFunc_SpawnCutsceneActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_PlayCutscene, CallFunc_SpawnObject_ReturnValue) == 0x000018, "Member 'BP_ArenaSequence_PreBattle_C_PlayCutscene::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_PlayCutscene, CallFunc_MakeTransform_ReturnValue) == 0x000020, "Member 'BP_ArenaSequence_PreBattle_C_PlayCutscene::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_PlayCutscene, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000080, "Member 'BP_ArenaSequence_PreBattle_C_PlayCutscene::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_PlayCutscene, CallFunc_FinishSpawningActor_ReturnValue) == 0x000088, "Member 'BP_ArenaSequence_PreBattle_C_PlayCutscene::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_PlayCutscene, K2Node_CreateDelegate_OutputDelegate) == 0x000090, "Member 'BP_ArenaSequence_PreBattle_C_PlayCutscene::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_PlayCutscene, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000A0, "Member 'BP_ArenaSequence_PreBattle_C_PlayCutscene::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_PlayCutscene, CallFunc_GetInstanceModel_ReturnValue) == 0x0000B0, "Member 'BP_ArenaSequence_PreBattle_C_PlayCutscene::CallFunc_GetInstanceModel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_PlayCutscene, CallFunc_GetLocalPlayerController_ReturnValue) == 0x0000B8, "Member 'BP_ArenaSequence_PreBattle_C_PlayCutscene::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_PlayCutscene, CallFunc_GetArenaLevelInstance_ReturnValue) == 0x0000C0, "Member 'BP_ArenaSequence_PreBattle_C_PlayCutscene::CallFunc_GetArenaLevelInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_PlayCutscene, K2Node_DynamicCast_AsPal_Player_Controller) == 0x0000C8, "Member 'BP_ArenaSequence_PreBattle_C_PlayCutscene::K2Node_DynamicCast_AsPal_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_PlayCutscene, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'BP_ArenaSequence_PreBattle_C_PlayCutscene::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_PlayCutscene, CallFunc_GetTransform_ReturnValue) == 0x0000E0, "Member 'BP_ArenaSequence_PreBattle_C_PlayCutscene::CallFunc_GetTransform_ReturnValue' has a wrong offset!");

// Function BP_ArenaSequence_PreBattle.BP_ArenaSequence_PreBattle_C.RideLeaderPal
// 0x0110 (0x0110 - 0x0000)
struct BP_ArenaSequence_PreBattle_C_RideLeaderPal final
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalArenaSequencer*                     CallFunc_GetOuterSequencer_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<EPalArenaPlayerIndex, struct FPalArenaPlayerInfo> CallFunc_GetArenaPlayerInfoMap_ReturnValue;        // 0x0018(0x0050)(ConstParm)
	TArray<EPalArenaPlayerIndex>                  CallFunc_Map_Keys_Keys;                            // 0x0068(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalArenaPlayerIndex                          CallFunc_Array_Get_Item;                           // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E[0x2];                                       // 0x007E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalArenaPlayerInfo                    CallFunc_Map_Find_Value;                           // 0x0080(0x0048)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetIndividualActor_ReturnValue;           // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DA[0x6];                                       // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetIndividualActor_ReturnValue_1;         // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalRiderComponent*                     CallFunc_GetComponentByClass_ReturnValue;          // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F2[0x6];                                       // 0x00F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalRideMarkerComponent*                CallFunc_GetComponentByClass_ReturnValue_1;        // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalPartnerSkillParameterComponent*     CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0100(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Ride_ReturnValue;                         // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRestrictedByItems_ReturnValue;          // 0x010A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x010B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_PreBattle_C_RideLeaderPal) == 0x000008, "Wrong alignment on BP_ArenaSequence_PreBattle_C_RideLeaderPal");
static_assert(sizeof(BP_ArenaSequence_PreBattle_C_RideLeaderPal) == 0x000110, "Wrong size on BP_ArenaSequence_PreBattle_C_RideLeaderPal");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_RideLeaderPal, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'BP_ArenaSequence_PreBattle_C_RideLeaderPal::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_RideLeaderPal, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'BP_ArenaSequence_PreBattle_C_RideLeaderPal::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_RideLeaderPal, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_ArenaSequence_PreBattle_C_RideLeaderPal::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_RideLeaderPal, CallFunc_GetOuterSequencer_ReturnValue) == 0x000010, "Member 'BP_ArenaSequence_PreBattle_C_RideLeaderPal::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_RideLeaderPal, CallFunc_GetArenaPlayerInfoMap_ReturnValue) == 0x000018, "Member 'BP_ArenaSequence_PreBattle_C_RideLeaderPal::CallFunc_GetArenaPlayerInfoMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_RideLeaderPal, CallFunc_Map_Keys_Keys) == 0x000068, "Member 'BP_ArenaSequence_PreBattle_C_RideLeaderPal::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_RideLeaderPal, CallFunc_Array_Length_ReturnValue) == 0x000078, "Member 'BP_ArenaSequence_PreBattle_C_RideLeaderPal::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_RideLeaderPal, CallFunc_Array_Get_Item) == 0x00007C, "Member 'BP_ArenaSequence_PreBattle_C_RideLeaderPal::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_RideLeaderPal, CallFunc_Less_IntInt_ReturnValue) == 0x00007D, "Member 'BP_ArenaSequence_PreBattle_C_RideLeaderPal::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_RideLeaderPal, CallFunc_Map_Find_Value) == 0x000080, "Member 'BP_ArenaSequence_PreBattle_C_RideLeaderPal::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_RideLeaderPal, CallFunc_Map_Find_ReturnValue) == 0x0000C8, "Member 'BP_ArenaSequence_PreBattle_C_RideLeaderPal::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_RideLeaderPal, CallFunc_GetIndividualActor_ReturnValue) == 0x0000D0, "Member 'BP_ArenaSequence_PreBattle_C_RideLeaderPal::CallFunc_GetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_RideLeaderPal, CallFunc_IsValid_ReturnValue) == 0x0000D8, "Member 'BP_ArenaSequence_PreBattle_C_RideLeaderPal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_RideLeaderPal, CallFunc_IsValid_ReturnValue_1) == 0x0000D9, "Member 'BP_ArenaSequence_PreBattle_C_RideLeaderPal::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_RideLeaderPal, CallFunc_GetIndividualActor_ReturnValue_1) == 0x0000E0, "Member 'BP_ArenaSequence_PreBattle_C_RideLeaderPal::CallFunc_GetIndividualActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_RideLeaderPal, CallFunc_GetComponentByClass_ReturnValue) == 0x0000E8, "Member 'BP_ArenaSequence_PreBattle_C_RideLeaderPal::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_RideLeaderPal, CallFunc_IsValid_ReturnValue_2) == 0x0000F0, "Member 'BP_ArenaSequence_PreBattle_C_RideLeaderPal::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_RideLeaderPal, CallFunc_IsValid_ReturnValue_3) == 0x0000F1, "Member 'BP_ArenaSequence_PreBattle_C_RideLeaderPal::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_RideLeaderPal, CallFunc_GetComponentByClass_ReturnValue_1) == 0x0000F8, "Member 'BP_ArenaSequence_PreBattle_C_RideLeaderPal::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_RideLeaderPal, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000100, "Member 'BP_ArenaSequence_PreBattle_C_RideLeaderPal::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_RideLeaderPal, CallFunc_Ride_ReturnValue) == 0x000108, "Member 'BP_ArenaSequence_PreBattle_C_RideLeaderPal::CallFunc_Ride_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_RideLeaderPal, CallFunc_IsValid_ReturnValue_4) == 0x000109, "Member 'BP_ArenaSequence_PreBattle_C_RideLeaderPal::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_RideLeaderPal, CallFunc_IsRestrictedByItems_ReturnValue) == 0x00010A, "Member 'BP_ArenaSequence_PreBattle_C_RideLeaderPal::CallFunc_IsRestrictedByItems_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_RideLeaderPal, CallFunc_IsValid_ReturnValue_5) == 0x00010B, "Member 'BP_ArenaSequence_PreBattle_C_RideLeaderPal::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");

// Function BP_ArenaSequence_PreBattle.BP_ArenaSequence_PreBattle_C.SetDisableLookAtAllPal
// 0x0048 (0x0048 - 0x0000)
struct BP_ArenaSequence_PreBattle_C_SetDisableLookAtAllPal final
{
public:
	bool                                          IsDisable;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalArenaSequencer*                     CallFunc_GetOuterSequencer_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class APalCharacter*>                  CallFunc_GetInBattleCharacterAll_ReturnValue;      // 0x0018(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLookAtComponent*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_PreBattle_C_SetDisableLookAtAllPal) == 0x000008, "Wrong alignment on BP_ArenaSequence_PreBattle_C_SetDisableLookAtAllPal");
static_assert(sizeof(BP_ArenaSequence_PreBattle_C_SetDisableLookAtAllPal) == 0x000048, "Wrong size on BP_ArenaSequence_PreBattle_C_SetDisableLookAtAllPal");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetDisableLookAtAllPal, IsDisable) == 0x000000, "Member 'BP_ArenaSequence_PreBattle_C_SetDisableLookAtAllPal::IsDisable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetDisableLookAtAllPal, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_ArenaSequence_PreBattle_C_SetDisableLookAtAllPal::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetDisableLookAtAllPal, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_ArenaSequence_PreBattle_C_SetDisableLookAtAllPal::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetDisableLookAtAllPal, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_ArenaSequence_PreBattle_C_SetDisableLookAtAllPal::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetDisableLookAtAllPal, CallFunc_GetOuterSequencer_ReturnValue) == 0x000010, "Member 'BP_ArenaSequence_PreBattle_C_SetDisableLookAtAllPal::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetDisableLookAtAllPal, CallFunc_GetInBattleCharacterAll_ReturnValue) == 0x000018, "Member 'BP_ArenaSequence_PreBattle_C_SetDisableLookAtAllPal::CallFunc_GetInBattleCharacterAll_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetDisableLookAtAllPal, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_ArenaSequence_PreBattle_C_SetDisableLookAtAllPal::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetDisableLookAtAllPal, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_ArenaSequence_PreBattle_C_SetDisableLookAtAllPal::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetDisableLookAtAllPal, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'BP_ArenaSequence_PreBattle_C_SetDisableLookAtAllPal::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetDisableLookAtAllPal, CallFunc_GetComponentByClass_ReturnValue) == 0x000040, "Member 'BP_ArenaSequence_PreBattle_C_SetDisableLookAtAllPal::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

// Function BP_ArenaSequence_PreBattle.BP_ArenaSequence_PreBattle_C.SetupFormation
// 0x02D0 (0x02D0 - 0x0000)
struct BP_ArenaSequence_PreBattle_C_SetupFormation final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalArenaInstanceModel*                 CallFunc_GetInstanceModel_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalArenaSequencer*                     CallFunc_GetOuterSequencer_ReturnValue;            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalArenaLevelInstance*                 CallFunc_GetArenaLevelInstance_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<EPalArenaPlayerIndex, struct FPalArenaPlayerInfo> CallFunc_GetArenaPlayerInfoMap_ReturnValue;        // 0x0030(0x0050)(ConstParm)
	TArray<EPalArenaPlayerIndex>                  CallFunc_Map_Keys_Keys;                            // 0x0080(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalArenaPlayerIndex                          CallFunc_Array_Get_Item;                           // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96[0xA];                                       // 0x0096(0x000A)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalArenaBattleFormation               CallFunc_GetBattleFormation_ReturnValue;           // 0x00A0(0x0070)()
	struct FPalArenaPlayerInfo                    CallFunc_Map_Find_Value;                           // 0x0110(0x0048)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_159[0x7];                                      // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0160(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0178(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0190(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetIndividualActor_ReturnValue;           // 0x01A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B1[0x7];                                      // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_Array_Get_Item_1;                         // 0x01B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetIndividualActor_ReturnValue_1;         // 0x01C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CE[0x2];                                      // 0x01CE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_AdjustActorToFloor_ReturnValue;           // 0x01D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_AdjustActorToFloor_ReturnValue_1;         // 0x01D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocationAndRotation_SweepHitResult; // 0x01E0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocationAndRotation_ReturnValue; // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x02C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_PreBattle_C_SetupFormation) == 0x000010, "Wrong alignment on BP_ArenaSequence_PreBattle_C_SetupFormation");
static_assert(sizeof(BP_ArenaSequence_PreBattle_C_SetupFormation) == 0x0002D0, "Wrong size on BP_ArenaSequence_PreBattle_C_SetupFormation");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupFormation, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_ArenaSequence_PreBattle_C_SetupFormation::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupFormation, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_ArenaSequence_PreBattle_C_SetupFormation::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupFormation, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_ArenaSequence_PreBattle_C_SetupFormation::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupFormation, Temp_int_Array_Index_Variable_1) == 0x00000C, "Member 'BP_ArenaSequence_PreBattle_C_SetupFormation::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupFormation, Temp_int_Loop_Counter_Variable_1) == 0x000010, "Member 'BP_ArenaSequence_PreBattle_C_SetupFormation::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupFormation, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'BP_ArenaSequence_PreBattle_C_SetupFormation::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupFormation, CallFunc_GetInstanceModel_ReturnValue) == 0x000018, "Member 'BP_ArenaSequence_PreBattle_C_SetupFormation::CallFunc_GetInstanceModel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupFormation, CallFunc_GetOuterSequencer_ReturnValue) == 0x000020, "Member 'BP_ArenaSequence_PreBattle_C_SetupFormation::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupFormation, CallFunc_GetArenaLevelInstance_ReturnValue) == 0x000028, "Member 'BP_ArenaSequence_PreBattle_C_SetupFormation::CallFunc_GetArenaLevelInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupFormation, CallFunc_GetArenaPlayerInfoMap_ReturnValue) == 0x000030, "Member 'BP_ArenaSequence_PreBattle_C_SetupFormation::CallFunc_GetArenaPlayerInfoMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupFormation, CallFunc_Map_Keys_Keys) == 0x000080, "Member 'BP_ArenaSequence_PreBattle_C_SetupFormation::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupFormation, CallFunc_Array_Length_ReturnValue) == 0x000090, "Member 'BP_ArenaSequence_PreBattle_C_SetupFormation::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupFormation, CallFunc_Array_Get_Item) == 0x000094, "Member 'BP_ArenaSequence_PreBattle_C_SetupFormation::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupFormation, CallFunc_Less_IntInt_ReturnValue) == 0x000095, "Member 'BP_ArenaSequence_PreBattle_C_SetupFormation::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupFormation, CallFunc_GetBattleFormation_ReturnValue) == 0x0000A0, "Member 'BP_ArenaSequence_PreBattle_C_SetupFormation::CallFunc_GetBattleFormation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupFormation, CallFunc_Map_Find_Value) == 0x000110, "Member 'BP_ArenaSequence_PreBattle_C_SetupFormation::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupFormation, CallFunc_Map_Find_ReturnValue) == 0x000158, "Member 'BP_ArenaSequence_PreBattle_C_SetupFormation::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupFormation, CallFunc_BreakTransform_Location) == 0x000160, "Member 'BP_ArenaSequence_PreBattle_C_SetupFormation::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupFormation, CallFunc_BreakTransform_Rotation) == 0x000178, "Member 'BP_ArenaSequence_PreBattle_C_SetupFormation::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupFormation, CallFunc_BreakTransform_Scale) == 0x000190, "Member 'BP_ArenaSequence_PreBattle_C_SetupFormation::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupFormation, CallFunc_GetIndividualActor_ReturnValue) == 0x0001A8, "Member 'BP_ArenaSequence_PreBattle_C_SetupFormation::CallFunc_GetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupFormation, CallFunc_IsValid_ReturnValue) == 0x0001B0, "Member 'BP_ArenaSequence_PreBattle_C_SetupFormation::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupFormation, CallFunc_Array_Get_Item_1) == 0x0001B8, "Member 'BP_ArenaSequence_PreBattle_C_SetupFormation::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupFormation, CallFunc_GetIndividualActor_ReturnValue_1) == 0x0001C0, "Member 'BP_ArenaSequence_PreBattle_C_SetupFormation::CallFunc_GetIndividualActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupFormation, CallFunc_Array_Length_ReturnValue_1) == 0x0001C8, "Member 'BP_ArenaSequence_PreBattle_C_SetupFormation::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupFormation, CallFunc_IsValid_ReturnValue_1) == 0x0001CC, "Member 'BP_ArenaSequence_PreBattle_C_SetupFormation::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupFormation, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001CD, "Member 'BP_ArenaSequence_PreBattle_C_SetupFormation::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupFormation, CallFunc_AdjustActorToFloor_ReturnValue) == 0x0001D0, "Member 'BP_ArenaSequence_PreBattle_C_SetupFormation::CallFunc_AdjustActorToFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupFormation, CallFunc_AdjustActorToFloor_ReturnValue_1) == 0x0001D8, "Member 'BP_ArenaSequence_PreBattle_C_SetupFormation::CallFunc_AdjustActorToFloor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupFormation, CallFunc_K2_SetActorLocationAndRotation_SweepHitResult) == 0x0001E0, "Member 'BP_ArenaSequence_PreBattle_C_SetupFormation::CallFunc_K2_SetActorLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupFormation, CallFunc_K2_SetActorLocationAndRotation_ReturnValue) == 0x0002C8, "Member 'BP_ArenaSequence_PreBattle_C_SetupFormation::CallFunc_K2_SetActorLocationAndRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupFormation, CallFunc_IsValid_ReturnValue_2) == 0x0002C9, "Member 'BP_ArenaSequence_PreBattle_C_SetupFormation::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function BP_ArenaSequence_PreBattle.BP_ArenaSequence_PreBattle_C.SetupLocalPlayerCamera
// 0x00F0 (0x00F0 - 0x0000)
struct BP_ArenaSequence_PreBattle_C_SetupLocalPlayerCamera final
{
public:
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalArenaInstanceModel*                 CallFunc_GetInstanceModel_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalArenaLevelInstance*                 CallFunc_GetArenaLevelInstance_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalArenaSequencer*                     CallFunc_GetOuterSequencer_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalArenaPlayerIndex                          CallFunc_GetLocalPlayerIndex_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0xF];                                       // 0x0021(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalArenaBattleFormation               CallFunc_GetBattleFormation_ReturnValue;           // 0x0030(0x0070)()
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_PreBattle_C_SetupLocalPlayerCamera) == 0x000010, "Wrong alignment on BP_ArenaSequence_PreBattle_C_SetupLocalPlayerCamera");
static_assert(sizeof(BP_ArenaSequence_PreBattle_C_SetupLocalPlayerCamera) == 0x0000F0, "Wrong size on BP_ArenaSequence_PreBattle_C_SetupLocalPlayerCamera");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupLocalPlayerCamera, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000000, "Member 'BP_ArenaSequence_PreBattle_C_SetupLocalPlayerCamera::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupLocalPlayerCamera, CallFunc_GetInstanceModel_ReturnValue) == 0x000008, "Member 'BP_ArenaSequence_PreBattle_C_SetupLocalPlayerCamera::CallFunc_GetInstanceModel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupLocalPlayerCamera, CallFunc_GetArenaLevelInstance_ReturnValue) == 0x000010, "Member 'BP_ArenaSequence_PreBattle_C_SetupLocalPlayerCamera::CallFunc_GetArenaLevelInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupLocalPlayerCamera, CallFunc_GetOuterSequencer_ReturnValue) == 0x000018, "Member 'BP_ArenaSequence_PreBattle_C_SetupLocalPlayerCamera::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupLocalPlayerCamera, CallFunc_GetLocalPlayerIndex_ReturnValue) == 0x000020, "Member 'BP_ArenaSequence_PreBattle_C_SetupLocalPlayerCamera::CallFunc_GetLocalPlayerIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupLocalPlayerCamera, CallFunc_GetBattleFormation_ReturnValue) == 0x000030, "Member 'BP_ArenaSequence_PreBattle_C_SetupLocalPlayerCamera::CallFunc_GetBattleFormation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupLocalPlayerCamera, CallFunc_BreakTransform_Location) == 0x0000A0, "Member 'BP_ArenaSequence_PreBattle_C_SetupLocalPlayerCamera::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupLocalPlayerCamera, CallFunc_BreakTransform_Rotation) == 0x0000B8, "Member 'BP_ArenaSequence_PreBattle_C_SetupLocalPlayerCamera::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupLocalPlayerCamera, CallFunc_BreakTransform_Scale) == 0x0000D0, "Member 'BP_ArenaSequence_PreBattle_C_SetupLocalPlayerCamera::CallFunc_BreakTransform_Scale' has a wrong offset!");

// Function BP_ArenaSequence_PreBattle.BP_ArenaSequence_PreBattle_C.SetupStatus
// 0x0048 (0x0048 - 0x0000)
struct BP_ArenaSequence_PreBattle_C_SetupStatus final
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
	class UPalIndividualCharacterParameter*       CallFunc_GetIndividualParameter_ReturnValue;       // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_PreBattle_C_SetupStatus) == 0x000008, "Wrong alignment on BP_ArenaSequence_PreBattle_C_SetupStatus");
static_assert(sizeof(BP_ArenaSequence_PreBattle_C_SetupStatus) == 0x000048, "Wrong size on BP_ArenaSequence_PreBattle_C_SetupStatus");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupStatus, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_ArenaSequence_PreBattle_C_SetupStatus::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupStatus, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_ArenaSequence_PreBattle_C_SetupStatus::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupStatus, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_ArenaSequence_PreBattle_C_SetupStatus::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupStatus, CallFunc_GetOuterSequencer_ReturnValue) == 0x000010, "Member 'BP_ArenaSequence_PreBattle_C_SetupStatus::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupStatus, CallFunc_GetInBattleCharacterAll_ReturnValue) == 0x000018, "Member 'BP_ArenaSequence_PreBattle_C_SetupStatus::CallFunc_GetInBattleCharacterAll_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupStatus, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_ArenaSequence_PreBattle_C_SetupStatus::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupStatus, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_ArenaSequence_PreBattle_C_SetupStatus::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupStatus, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'BP_ArenaSequence_PreBattle_C_SetupStatus::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_SetupStatus, CallFunc_GetIndividualParameter_ReturnValue) == 0x000040, "Member 'BP_ArenaSequence_PreBattle_C_SetupStatus::CallFunc_GetIndividualParameter_ReturnValue' has a wrong offset!");

// Function BP_ArenaSequence_PreBattle.BP_ArenaSequence_PreBattle_C.ToggleMutePals
// 0x0168 (0x0168 - 0x0000)
struct BP_ArenaSequence_PreBattle_C_ToggleMutePals final
{
public:
	bool                                          DisableCrying;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalArenaPlayerIndex                          PlayerIndex;                                       // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       IndividualParameter;                               // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalArenaSequencer*                     CallFunc_GetOuterSequencer_ReturnValue;            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<EPalArenaPlayerIndex, struct FPalArenaPlayerInfo> CallFunc_GetArenaPlayerInfoMap_ReturnValue;        // 0x0028(0x0050)(ConstParm)
	TArray<EPalArenaPlayerIndex>                  CallFunc_Map_Keys_Keys;                            // 0x0078(0x0010)(ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalArenaPlayerIndex                          CallFunc_Array_Get_Item;                           // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalArenaSequencer*                     CallFunc_GetOuterSequencer_ReturnValue_1;          // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EPalArenaPlayerIndex, struct FPalArenaPlayerInfo> CallFunc_GetArenaPlayerInfoMap_ReturnValue_1;      // 0x00A8(0x0050)(ConstParm)
	struct FPalArenaPlayerInfo                    CallFunc_Map_Find_Value;                           // 0x00F8(0x0048)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_141[0x7];                                      // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetIndividualActor_ReturnValue;           // 0x0148(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalCryComponent_C*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x0150(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_Array_Get_Item_1;                         // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0164(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_PreBattle_C_ToggleMutePals) == 0x000008, "Wrong alignment on BP_ArenaSequence_PreBattle_C_ToggleMutePals");
static_assert(sizeof(BP_ArenaSequence_PreBattle_C_ToggleMutePals) == 0x000168, "Wrong size on BP_ArenaSequence_PreBattle_C_ToggleMutePals");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ToggleMutePals, DisableCrying) == 0x000000, "Member 'BP_ArenaSequence_PreBattle_C_ToggleMutePals::DisableCrying' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ToggleMutePals, PlayerIndex) == 0x000001, "Member 'BP_ArenaSequence_PreBattle_C_ToggleMutePals::PlayerIndex' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ToggleMutePals, IndividualParameter) == 0x000008, "Member 'BP_ArenaSequence_PreBattle_C_ToggleMutePals::IndividualParameter' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ToggleMutePals, Temp_int_Array_Index_Variable) == 0x000010, "Member 'BP_ArenaSequence_PreBattle_C_ToggleMutePals::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ToggleMutePals, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'BP_ArenaSequence_PreBattle_C_ToggleMutePals::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ToggleMutePals, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'BP_ArenaSequence_PreBattle_C_ToggleMutePals::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ToggleMutePals, Temp_int_Array_Index_Variable_1) == 0x00001C, "Member 'BP_ArenaSequence_PreBattle_C_ToggleMutePals::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ToggleMutePals, CallFunc_GetOuterSequencer_ReturnValue) == 0x000020, "Member 'BP_ArenaSequence_PreBattle_C_ToggleMutePals::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ToggleMutePals, CallFunc_GetArenaPlayerInfoMap_ReturnValue) == 0x000028, "Member 'BP_ArenaSequence_PreBattle_C_ToggleMutePals::CallFunc_GetArenaPlayerInfoMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ToggleMutePals, CallFunc_Map_Keys_Keys) == 0x000078, "Member 'BP_ArenaSequence_PreBattle_C_ToggleMutePals::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ToggleMutePals, Temp_int_Loop_Counter_Variable_1) == 0x000088, "Member 'BP_ArenaSequence_PreBattle_C_ToggleMutePals::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ToggleMutePals, CallFunc_Array_Get_Item) == 0x00008C, "Member 'BP_ArenaSequence_PreBattle_C_ToggleMutePals::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ToggleMutePals, CallFunc_Add_IntInt_ReturnValue_1) == 0x000090, "Member 'BP_ArenaSequence_PreBattle_C_ToggleMutePals::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ToggleMutePals, CallFunc_Array_Length_ReturnValue) == 0x000094, "Member 'BP_ArenaSequence_PreBattle_C_ToggleMutePals::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ToggleMutePals, CallFunc_GetOuterSequencer_ReturnValue_1) == 0x000098, "Member 'BP_ArenaSequence_PreBattle_C_ToggleMutePals::CallFunc_GetOuterSequencer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ToggleMutePals, CallFunc_Less_IntInt_ReturnValue) == 0x0000A0, "Member 'BP_ArenaSequence_PreBattle_C_ToggleMutePals::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ToggleMutePals, CallFunc_GetArenaPlayerInfoMap_ReturnValue_1) == 0x0000A8, "Member 'BP_ArenaSequence_PreBattle_C_ToggleMutePals::CallFunc_GetArenaPlayerInfoMap_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ToggleMutePals, CallFunc_Map_Find_Value) == 0x0000F8, "Member 'BP_ArenaSequence_PreBattle_C_ToggleMutePals::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ToggleMutePals, CallFunc_Map_Find_ReturnValue) == 0x000140, "Member 'BP_ArenaSequence_PreBattle_C_ToggleMutePals::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ToggleMutePals, CallFunc_GetIndividualActor_ReturnValue) == 0x000148, "Member 'BP_ArenaSequence_PreBattle_C_ToggleMutePals::CallFunc_GetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ToggleMutePals, CallFunc_GetComponentByClass_ReturnValue) == 0x000150, "Member 'BP_ArenaSequence_PreBattle_C_ToggleMutePals::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ToggleMutePals, CallFunc_Array_Get_Item_1) == 0x000158, "Member 'BP_ArenaSequence_PreBattle_C_ToggleMutePals::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ToggleMutePals, CallFunc_Array_Length_ReturnValue_1) == 0x000160, "Member 'BP_ArenaSequence_PreBattle_C_ToggleMutePals::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PreBattle_C_ToggleMutePals, CallFunc_Less_IntInt_ReturnValue_1) == 0x000164, "Member 'BP_ArenaSequence_PreBattle_C_ToggleMutePals::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

}

