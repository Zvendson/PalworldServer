#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function BP_Status_RaidBossModeChange.BP_Status_RaidBossModeChange_C.CompEvent
// 0x0008 (0x0008 - 0x0000)
struct BP_Status_RaidBossModeChange_C_CompEvent final
{
public:
	class APalCharacter*                          InCharacter;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_RaidBossModeChange_C_CompEvent) == 0x000008, "Wrong alignment on BP_Status_RaidBossModeChange_C_CompEvent");
static_assert(sizeof(BP_Status_RaidBossModeChange_C_CompEvent) == 0x000008, "Wrong size on BP_Status_RaidBossModeChange_C_CompEvent");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_CompEvent, InCharacter) == 0x000000, "Member 'BP_Status_RaidBossModeChange_C_CompEvent::InCharacter' has a wrong offset!");

// Function BP_Status_RaidBossModeChange.BP_Status_RaidBossModeChange_C.ExecuteUbergraph_BP_Status_RaidBossModeChange
// 0x0230 (0x0230 - 0x0000)
struct BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalPassiveSkillComponent*              CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;                   // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_FloatToDouble_ReturnValue;           // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_GetIndividualParameter_ReturnValue;       // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue_1;                   // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_3;                   // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue_3;        // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class APalCharacter* InCharacter)> K2Node_CreateDelegate_OutputDelegate;              // 0x0088(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFixedPoint64                          CallFunc_GetHP_ReturnValue;                        // 0x0098(0x0008)(NoDestructor)
	struct FFixedPoint64                          CallFunc_GetMaxHP_ReturnValue;                     // 0x00A0(0x0008)(NoDestructor)
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;  // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1; // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFixedPoint64                          CallFunc_Convert_FloatToFixedPoint64_ReturnValue;  // 0x00D0(0x0008)(NoDestructor)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_4;                   // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStatusComponent*                    CallFunc_GetComponentByClass_ReturnValue_4;        // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalVisualEffectID                            CallFunc_FindModeChangeVisualEffectType_VisualEffect; // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalWazaID                                    CallFunc_Array_Get_Item;                           // 0x00EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalWazaID                                    CallFunc_Array_Get_Item_1;                         // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_ED[0x3];                                       // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FA[0x6];                                       // 0x00FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalRaidBossManager*                    CallFunc_GetRaidBossManager_ReturnValue;           // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_5;                   // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_6;                   // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue_5;        // 0x0118(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue_6;        // 0x0120(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_GetIndividualParameter_ReturnValue_1;     // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetCharacterID_ReturnValue;               // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalRaidBossSpawnInfo                  CallFunc_FindRaidBossInfoByCharacterID_ReturnValue; // 0x0138(0x0058)()
	class AActor*                                 CallFunc_GetOwner_ReturnValue_7;                   // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalVisualEffectDynamicParameter       K2Node_MakeStruct_PalVisualEffectDynamicParameter; // 0x0198(0x0010)()
	class UPalVisualEffectComponent*              CallFunc_GetComponentByClass_ReturnValue_7;        // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalVisualEffectBase*                   CallFunc_AddVisualEffect_Local_ReturnValue;        // 0x01B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_8;                   // 0x01B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalVisualEffectComponent*              CallFunc_GetComponentByClass_ReturnValue_8;        // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalVisualEffectID                            CallFunc_FindModeChangeVisualEffectType_VisualEffect_1; // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x01C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CA[0x6];                                      // 0x01CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_9;                   // 0x01D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x01D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E1[0x7];                                      // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue_9;        // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterOnCompleteInitializeParameterWrapper* CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue; // 0x01F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_GetIndividualParameter_ReturnValue_2;     // 0x01F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_201[0x7];                                      // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          K2Node_CustomEvent_InCharacter;                    // 0x0208(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Convert_FloatToFixedPoint64_value_ImplicitCast; // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange) == 0x000008, "Wrong alignment on BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange");
static_assert(sizeof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange) == 0x000230, "Wrong size on BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, EntryPoint) == 0x000000, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, Temp_int_Loop_Counter_Variable_1) == 0x000010, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, Temp_int_Array_Index_Variable_1) == 0x000018, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_GetOwner_ReturnValue_1) == 0x000028, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_GetComponentByClass_ReturnValue) == 0x000030, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000038, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_IsServer_ReturnValue) == 0x000040, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_GetOwner_ReturnValue_2) == 0x000048, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, K2Node_Event_DeltaTime) == 0x000050, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000058, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_Conv_FloatToDouble_ReturnValue) == 0x000060, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_Conv_FloatToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_GetIndividualParameter_ReturnValue) == 0x000068, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_GetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_IsServer_ReturnValue_1) == 0x000070, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_IsServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_GetOwner_ReturnValue_3) == 0x000078, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_GetOwner_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_GetComponentByClass_ReturnValue_3) == 0x000080, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_GetComponentByClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, K2Node_CreateDelegate_OutputDelegate) == 0x000088, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_GetHP_ReturnValue) == 0x000098, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_GetHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_GetMaxHP_ReturnValue) == 0x0000A0, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_GetMaxHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue) == 0x0000A8, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1) == 0x0000AC, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0000B0, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000B8, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x0000C0, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x0000C8, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_Convert_FloatToFixedPoint64_ReturnValue) == 0x0000D0, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_Convert_FloatToFixedPoint64_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_GetOwner_ReturnValue_4) == 0x0000D8, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_GetOwner_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_GetComponentByClass_ReturnValue_4) == 0x0000E0, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_GetComponentByClass_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_Less_DoubleDouble_ReturnValue) == 0x0000E8, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_FindModeChangeVisualEffectType_VisualEffect) == 0x0000E9, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_FindModeChangeVisualEffectType_VisualEffect' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000EA, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_Array_Get_Item) == 0x0000EB, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_Array_Get_Item_1) == 0x0000EC, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_Array_Length_ReturnValue) == 0x0000F0, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_Array_Length_ReturnValue_1) == 0x0000F4, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_Less_IntInt_ReturnValue) == 0x0000F8, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000F9, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_GetRaidBossManager_ReturnValue) == 0x000100, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_GetRaidBossManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_GetOwner_ReturnValue_5) == 0x000108, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_GetOwner_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_GetOwner_ReturnValue_6) == 0x000110, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_GetOwner_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_GetComponentByClass_ReturnValue_5) == 0x000118, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_GetComponentByClass_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_GetComponentByClass_ReturnValue_6) == 0x000120, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_GetComponentByClass_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_GetIndividualParameter_ReturnValue_1) == 0x000128, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_GetIndividualParameter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_GetCharacterID_ReturnValue) == 0x000130, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_GetCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_FindRaidBossInfoByCharacterID_ReturnValue) == 0x000138, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_FindRaidBossInfoByCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_GetOwner_ReturnValue_7) == 0x000190, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_GetOwner_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, K2Node_MakeStruct_PalVisualEffectDynamicParameter) == 0x000198, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::K2Node_MakeStruct_PalVisualEffectDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_GetComponentByClass_ReturnValue_7) == 0x0001A8, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_GetComponentByClass_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_AddVisualEffect_Local_ReturnValue) == 0x0001B0, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_AddVisualEffect_Local_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_GetOwner_ReturnValue_8) == 0x0001B8, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_GetOwner_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_GetComponentByClass_ReturnValue_8) == 0x0001C0, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_GetComponentByClass_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_FindModeChangeVisualEffectType_VisualEffect_1) == 0x0001C8, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_FindModeChangeVisualEffectType_VisualEffect_1' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0001C9, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_GetOwner_ReturnValue_9) == 0x0001D0, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_GetOwner_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, K2Node_DynamicCast_AsPal_Character) == 0x0001D8, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, K2Node_DynamicCast_bSuccess) == 0x0001E0, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_GetComponentByClass_ReturnValue_9) == 0x0001E8, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_GetComponentByClass_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue) == 0x0001F0, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_GetIndividualParameter_ReturnValue_2) == 0x0001F8, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_GetIndividualParameter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_IsValid_ReturnValue) == 0x000200, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, K2Node_CustomEvent_InCharacter) == 0x000208, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::K2Node_CustomEvent_InCharacter' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000210, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000218, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000220, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange, CallFunc_Convert_FloatToFixedPoint64_value_ImplicitCast) == 0x000228, "Member 'BP_Status_RaidBossModeChange_C_ExecuteUbergraph_BP_Status_RaidBossModeChange::CallFunc_Convert_FloatToFixedPoint64_value_ImplicitCast' has a wrong offset!");

// Function BP_Status_RaidBossModeChange.BP_Status_RaidBossModeChange_C.FindModeChangeVisualEffectType
// 0x000E (0x000E - 0x0000)
struct BP_Status_RaidBossModeChange_C_FindModeChangeVisualEffectType final
{
public:
	EPalElementType                               Element;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalVisualEffectID                            VisualEffect;                                      // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalElementType                               Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalVisualEffectID                            Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalVisualEffectID                            Temp_byte_Variable_2;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalVisualEffectID                            Temp_byte_Variable_3;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalVisualEffectID                            Temp_byte_Variable_4;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalVisualEffectID                            Temp_byte_Variable_5;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalVisualEffectID                            Temp_byte_Variable_6;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalVisualEffectID                            Temp_byte_Variable_7;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalVisualEffectID                            Temp_byte_Variable_8;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalVisualEffectID                            Temp_byte_Variable_9;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalVisualEffectID                            Temp_byte_Variable_10;                             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalVisualEffectID                            K2Node_Select_Default;                             // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_RaidBossModeChange_C_FindModeChangeVisualEffectType) == 0x000001, "Wrong alignment on BP_Status_RaidBossModeChange_C_FindModeChangeVisualEffectType");
static_assert(sizeof(BP_Status_RaidBossModeChange_C_FindModeChangeVisualEffectType) == 0x00000E, "Wrong size on BP_Status_RaidBossModeChange_C_FindModeChangeVisualEffectType");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_FindModeChangeVisualEffectType, Element) == 0x000000, "Member 'BP_Status_RaidBossModeChange_C_FindModeChangeVisualEffectType::Element' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_FindModeChangeVisualEffectType, VisualEffect) == 0x000001, "Member 'BP_Status_RaidBossModeChange_C_FindModeChangeVisualEffectType::VisualEffect' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_FindModeChangeVisualEffectType, Temp_byte_Variable) == 0x000002, "Member 'BP_Status_RaidBossModeChange_C_FindModeChangeVisualEffectType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_FindModeChangeVisualEffectType, Temp_byte_Variable_1) == 0x000003, "Member 'BP_Status_RaidBossModeChange_C_FindModeChangeVisualEffectType::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_FindModeChangeVisualEffectType, Temp_byte_Variable_2) == 0x000004, "Member 'BP_Status_RaidBossModeChange_C_FindModeChangeVisualEffectType::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_FindModeChangeVisualEffectType, Temp_byte_Variable_3) == 0x000005, "Member 'BP_Status_RaidBossModeChange_C_FindModeChangeVisualEffectType::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_FindModeChangeVisualEffectType, Temp_byte_Variable_4) == 0x000006, "Member 'BP_Status_RaidBossModeChange_C_FindModeChangeVisualEffectType::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_FindModeChangeVisualEffectType, Temp_byte_Variable_5) == 0x000007, "Member 'BP_Status_RaidBossModeChange_C_FindModeChangeVisualEffectType::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_FindModeChangeVisualEffectType, Temp_byte_Variable_6) == 0x000008, "Member 'BP_Status_RaidBossModeChange_C_FindModeChangeVisualEffectType::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_FindModeChangeVisualEffectType, Temp_byte_Variable_7) == 0x000009, "Member 'BP_Status_RaidBossModeChange_C_FindModeChangeVisualEffectType::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_FindModeChangeVisualEffectType, Temp_byte_Variable_8) == 0x00000A, "Member 'BP_Status_RaidBossModeChange_C_FindModeChangeVisualEffectType::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_FindModeChangeVisualEffectType, Temp_byte_Variable_9) == 0x00000B, "Member 'BP_Status_RaidBossModeChange_C_FindModeChangeVisualEffectType::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_FindModeChangeVisualEffectType, Temp_byte_Variable_10) == 0x00000C, "Member 'BP_Status_RaidBossModeChange_C_FindModeChangeVisualEffectType::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_FindModeChangeVisualEffectType, K2Node_Select_Default) == 0x00000D, "Member 'BP_Status_RaidBossModeChange_C_FindModeChangeVisualEffectType::K2Node_Select_Default' has a wrong offset!");

// Function BP_Status_RaidBossModeChange.BP_Status_RaidBossModeChange_C.FindRaidBossData
// 0x0190 (0x0190 - 0x0000)
struct BP_Status_RaidBossModeChange_C_FindRaidBossData final
{
public:
	struct FPalRaidBossSpawnInfo                  BossInfo;                                          // 0x0000(0x0058)(Parm, OutParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_GetIndividualParameter_ReturnValue;       // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalRaidBossManager*                    CallFunc_GetRaidBossManager_ReturnValue;           // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetCharacterID_ReturnValue;               // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalRaidBossDataRow                    CallFunc_FindRaidBossData_ReturnValue;             // 0x0090(0x0098)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12C[0x4];                                      // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalRaidBossSpawnInfo                  CallFunc_Array_Get_Item;                           // 0x0130(0x0058)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_RaidBossModeChange_C_FindRaidBossData) == 0x000008, "Wrong alignment on BP_Status_RaidBossModeChange_C_FindRaidBossData");
static_assert(sizeof(BP_Status_RaidBossModeChange_C_FindRaidBossData) == 0x000190, "Wrong size on BP_Status_RaidBossModeChange_C_FindRaidBossData");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_FindRaidBossData, BossInfo) == 0x000000, "Member 'BP_Status_RaidBossModeChange_C_FindRaidBossData::BossInfo' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_FindRaidBossData, Temp_int_Array_Index_Variable) == 0x000058, "Member 'BP_Status_RaidBossModeChange_C_FindRaidBossData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_FindRaidBossData, Temp_int_Loop_Counter_Variable) == 0x00005C, "Member 'BP_Status_RaidBossModeChange_C_FindRaidBossData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_FindRaidBossData, CallFunc_Add_IntInt_ReturnValue) == 0x000060, "Member 'BP_Status_RaidBossModeChange_C_FindRaidBossData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_FindRaidBossData, CallFunc_GetOwner_ReturnValue) == 0x000068, "Member 'BP_Status_RaidBossModeChange_C_FindRaidBossData::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_FindRaidBossData, CallFunc_GetComponentByClass_ReturnValue) == 0x000070, "Member 'BP_Status_RaidBossModeChange_C_FindRaidBossData::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_FindRaidBossData, CallFunc_GetIndividualParameter_ReturnValue) == 0x000078, "Member 'BP_Status_RaidBossModeChange_C_FindRaidBossData::CallFunc_GetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_FindRaidBossData, CallFunc_GetRaidBossManager_ReturnValue) == 0x000080, "Member 'BP_Status_RaidBossModeChange_C_FindRaidBossData::CallFunc_GetRaidBossManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_FindRaidBossData, CallFunc_GetCharacterID_ReturnValue) == 0x000088, "Member 'BP_Status_RaidBossModeChange_C_FindRaidBossData::CallFunc_GetCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_FindRaidBossData, CallFunc_FindRaidBossData_ReturnValue) == 0x000090, "Member 'BP_Status_RaidBossModeChange_C_FindRaidBossData::CallFunc_FindRaidBossData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_FindRaidBossData, CallFunc_Array_Length_ReturnValue) == 0x000128, "Member 'BP_Status_RaidBossModeChange_C_FindRaidBossData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_FindRaidBossData, CallFunc_Array_Get_Item) == 0x000130, "Member 'BP_Status_RaidBossModeChange_C_FindRaidBossData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_FindRaidBossData, CallFunc_Less_IntInt_ReturnValue) == 0x000188, "Member 'BP_Status_RaidBossModeChange_C_FindRaidBossData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_FindRaidBossData, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000189, "Member 'BP_Status_RaidBossModeChange_C_FindRaidBossData::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");

// Function BP_Status_RaidBossModeChange.BP_Status_RaidBossModeChange_C.TickStatus
// 0x0004 (0x0004 - 0x0000)
struct BP_Status_RaidBossModeChange_C_TickStatus final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_RaidBossModeChange_C_TickStatus) == 0x000004, "Wrong alignment on BP_Status_RaidBossModeChange_C_TickStatus");
static_assert(sizeof(BP_Status_RaidBossModeChange_C_TickStatus) == 0x000004, "Wrong size on BP_Status_RaidBossModeChange_C_TickStatus");
static_assert(offsetof(BP_Status_RaidBossModeChange_C_TickStatus, DeltaTime) == 0x000000, "Member 'BP_Status_RaidBossModeChange_C_TickStatus::DeltaTime' has a wrong offset!");

}

