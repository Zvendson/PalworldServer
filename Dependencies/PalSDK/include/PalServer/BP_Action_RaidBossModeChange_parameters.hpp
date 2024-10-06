#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function BP_Action_RaidBossModeChange.BP_Action_RaidBossModeChange_C.EmitWarpEffect
// 0x0028 (0x0028 - 0x0000)
struct BP_Action_RaidBossModeChange_C_EmitWarpEffect final
{
public:
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_RaidBossModeChange_C_EmitWarpEffect) == 0x000008, "Wrong alignment on BP_Action_RaidBossModeChange_C_EmitWarpEffect");
static_assert(sizeof(BP_Action_RaidBossModeChange_C_EmitWarpEffect) == 0x000028, "Wrong size on BP_Action_RaidBossModeChange_C_EmitWarpEffect");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_EmitWarpEffect, CallFunc_GetActionCharacter_ReturnValue) == 0x000000, "Member 'BP_Action_RaidBossModeChange_C_EmitWarpEffect::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_EmitWarpEffect, CallFunc_GetSocketLocation_ReturnValue) == 0x000008, "Member 'BP_Action_RaidBossModeChange_C_EmitWarpEffect::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_EmitWarpEffect, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000020, "Member 'BP_Action_RaidBossModeChange_C_EmitWarpEffect::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");

// Function BP_Action_RaidBossModeChange.BP_Action_RaidBossModeChange_C.ExecuteUbergraph_BP_Action_RaidBossModeChange
// 0x0220 (0x0220 - 0x0000)
struct BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDamageReactionComponent*            CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0020(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_3;         // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_RaidBossModeChangeEffect_C*         CallFunc_FinishSpawningActor_ReturnValue;          // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_FindMontage_Montage;                      // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_FindMontage_Montage_1;                    // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_4;         // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_5;         // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_6;         // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_FindMontage_Montage_2;                    // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_FindMontage_Montage_3;                    // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalRaidBossManager*                    CallFunc_GetRaidBossManager_ReturnValue;           // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_7;         // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_8;         // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0120(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0128(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_GetIndividualParameter_ReturnValue;       // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_GetIndividualParameter_ReturnValue_1;     // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetCharacterID_ReturnValue;               // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalRaidBossSpawnInfo                  CallFunc_FindRaidBossInfoByCharacterID_ReturnValue; // 0x0150(0x0058)()
	EPalVisualEffectID                            CallFunc_FindModeChangeVisualEffectType_VisualEffect; // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A9[0x7];                                      // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   CallFunc_FindModeChangeVisualEffectType_Value;     // 0x01B0(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UObject>                    CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x01E0(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsPal_Visual_Effect_Base;  // 0x01E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F1[0x7];                                      // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetDefaultObject_ReturnValue;             // 0x01F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_VisualEffect_ChangeElementBase_C*   K2Node_DynamicCast_AsBP_Visual_Effect_Change_Element_Base; // 0x0200(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_209[0x7];                                      // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0210(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange) == 0x000010, "Wrong alignment on BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange");
static_assert(sizeof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange) == 0x000220, "Wrong size on BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, EntryPoint) == 0x000000, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000018, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_GetTransform_ReturnValue) == 0x000020, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000080, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000088, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_GetActionCharacter_ReturnValue_3) == 0x000090, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_GetActionCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_FinishSpawningActor_ReturnValue) == 0x000098, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_FindMontage_Montage) == 0x0000A0, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_FindMontage_Montage' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_FindMontage_Montage_1) == 0x0000A8, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_FindMontage_Montage_1' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_GetActionCharacter_ReturnValue_4) == 0x0000B0, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_GetActionCharacter_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_GetSocketLocation_ReturnValue) == 0x0000B8, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_GetActionCharacter_ReturnValue_5) == 0x0000D0, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_GetActionCharacter_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000D8, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_GetActionCharacter_ReturnValue_6) == 0x0000F0, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_GetActionCharacter_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_FindMontage_Montage_2) == 0x0000F8, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_FindMontage_Montage_2' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_FindMontage_Montage_3) == 0x000100, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_FindMontage_Montage_3' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_GetRaidBossManager_ReturnValue) == 0x000108, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_GetRaidBossManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_GetActionCharacter_ReturnValue_7) == 0x000110, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_GetActionCharacter_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_GetActionCharacter_ReturnValue_8) == 0x000118, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_GetActionCharacter_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000120, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000128, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_GetIndividualParameter_ReturnValue) == 0x000130, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_GetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_GetIndividualParameter_ReturnValue_1) == 0x000138, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_GetIndividualParameter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_GetCharacterID_ReturnValue) == 0x000140, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_GetCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_IsValid_ReturnValue) == 0x000148, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_FindRaidBossInfoByCharacterID_ReturnValue) == 0x000150, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_FindRaidBossInfoByCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_FindModeChangeVisualEffectType_VisualEffect) == 0x0001A8, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_FindModeChangeVisualEffectType_VisualEffect' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_FindModeChangeVisualEffectType_Value) == 0x0001B0, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_FindModeChangeVisualEffectType_Value' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_Conv_SoftClassReferenceToClass_ReturnValue) == 0x0001E0, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_Conv_SoftClassReferenceToClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, K2Node_ClassDynamicCast_AsPal_Visual_Effect_Base) == 0x0001E8, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::K2Node_ClassDynamicCast_AsPal_Visual_Effect_Base' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, K2Node_ClassDynamicCast_bSuccess) == 0x0001F0, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_GetDefaultObject_ReturnValue) == 0x0001F8, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_GetDefaultObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, K2Node_DynamicCast_AsBP_Visual_Effect_Change_Element_Base) == 0x000200, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::K2Node_DynamicCast_AsBP_Visual_Effect_Change_Element_Base' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, K2Node_DynamicCast_bSuccess) == 0x000208, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000210, "Member 'BP_Action_RaidBossModeChange_C_ExecuteUbergraph_BP_Action_RaidBossModeChange::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");

// Function BP_Action_RaidBossModeChange.BP_Action_RaidBossModeChange_C.FindModeChangeVisualEffectType
// 0x0090 (0x0090 - 0x0000)
struct BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType final
{
public:
	EPalElementType                               Element;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalVisualEffectID                            VisualEffect;                                      // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   Value;                                             // 0x0008(0x0030)(Parm, OutParm, UObjectWrapper, HasGetValueTypeHash)
	EPalElementType                               Temp_byte_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalVisualEffectID                            Temp_byte_Variable_1;                              // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalVisualEffectID                            Temp_byte_Variable_2;                              // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalVisualEffectID                            Temp_byte_Variable_3;                              // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalVisualEffectID                            Temp_byte_Variable_4;                              // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalVisualEffectID                            Temp_byte_Variable_5;                              // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalVisualEffectID                            Temp_byte_Variable_6;                              // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalVisualEffectID                            Temp_byte_Variable_7;                              // 0x003F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalVisualEffectID                            Temp_byte_Variable_8;                              // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalVisualEffectID                            Temp_byte_Variable_9;                              // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalVisualEffectID                            Temp_byte_Variable_10;                             // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43[0x5];                                       // 0x0043(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameInstance*                       CallFunc_GetPalGameInstance_ReturnValue;           // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalVisualEffectID                            K2Node_Select_Default;                             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   CallFunc_Map_Find_Value;                           // 0x0058(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType) == 0x000008, "Wrong alignment on BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType");
static_assert(sizeof(BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType) == 0x000090, "Wrong size on BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType, Element) == 0x000000, "Member 'BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType::Element' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType, VisualEffect) == 0x000001, "Member 'BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType::VisualEffect' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType, Value) == 0x000008, "Member 'BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType::Value' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType, Temp_byte_Variable) == 0x000038, "Member 'BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType, Temp_byte_Variable_1) == 0x000039, "Member 'BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType, Temp_byte_Variable_2) == 0x00003A, "Member 'BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType, Temp_byte_Variable_3) == 0x00003B, "Member 'BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType, Temp_byte_Variable_4) == 0x00003C, "Member 'BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType, Temp_byte_Variable_5) == 0x00003D, "Member 'BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType, Temp_byte_Variable_6) == 0x00003E, "Member 'BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType, Temp_byte_Variable_7) == 0x00003F, "Member 'BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType, Temp_byte_Variable_8) == 0x000040, "Member 'BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType, Temp_byte_Variable_9) == 0x000041, "Member 'BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType, Temp_byte_Variable_10) == 0x000042, "Member 'BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType, CallFunc_GetPalGameInstance_ReturnValue) == 0x000048, "Member 'BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType::CallFunc_GetPalGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType, K2Node_Select_Default) == 0x000050, "Member 'BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType, CallFunc_Map_Find_Value) == 0x000058, "Member 'BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType, CallFunc_Map_Find_ReturnValue) == 0x000088, "Member 'BP_Action_RaidBossModeChange_C_FindModeChangeVisualEffectType::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function BP_Action_RaidBossModeChange.BP_Action_RaidBossModeChange_C.FindMontage
// 0x0030 (0x0030 - 0x0000)
struct BP_Action_RaidBossModeChange_C_FindMontage final
{
public:
	EPalGeneralMontageType                        MontageType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           Montage;                                           // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_Map_Find_Value;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_RaidBossModeChange_C_FindMontage) == 0x000008, "Wrong alignment on BP_Action_RaidBossModeChange_C_FindMontage");
static_assert(sizeof(BP_Action_RaidBossModeChange_C_FindMontage) == 0x000030, "Wrong size on BP_Action_RaidBossModeChange_C_FindMontage");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_FindMontage, MontageType) == 0x000000, "Member 'BP_Action_RaidBossModeChange_C_FindMontage::MontageType' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_FindMontage, Montage) == 0x000008, "Member 'BP_Action_RaidBossModeChange_C_FindMontage::Montage' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_FindMontage, CallFunc_GetActionCharacter_ReturnValue) == 0x000010, "Member 'BP_Action_RaidBossModeChange_C_FindMontage::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_FindMontage, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'BP_Action_RaidBossModeChange_C_FindMontage::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_FindMontage, CallFunc_Map_Find_Value) == 0x000020, "Member 'BP_Action_RaidBossModeChange_C_FindMontage::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_FindMontage, CallFunc_Map_Find_ReturnValue) == 0x000028, "Member 'BP_Action_RaidBossModeChange_C_FindMontage::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function BP_Action_RaidBossModeChange.BP_Action_RaidBossModeChange_C.Play Montage
// 0x0028 (0x0028 - 0x0000)
struct BP_Action_RaidBossModeChange_C_Play_Montage final
{
public:
	EPalGeneralMontageType                        MontageType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Rate;                                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_FindMontage_Montage;                      // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PlayAnimMontage_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PlayAnimMontage_InPlayRate_ImplicitCast;  // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_RaidBossModeChange_C_Play_Montage) == 0x000008, "Wrong alignment on BP_Action_RaidBossModeChange_C_Play_Montage");
static_assert(sizeof(BP_Action_RaidBossModeChange_C_Play_Montage) == 0x000028, "Wrong size on BP_Action_RaidBossModeChange_C_Play_Montage");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_Play_Montage, MontageType) == 0x000000, "Member 'BP_Action_RaidBossModeChange_C_Play_Montage::MontageType' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_Play_Montage, Rate) == 0x000008, "Member 'BP_Action_RaidBossModeChange_C_Play_Montage::Rate' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_Play_Montage, CallFunc_GetActionCharacter_ReturnValue) == 0x000010, "Member 'BP_Action_RaidBossModeChange_C_Play_Montage::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_Play_Montage, CallFunc_FindMontage_Montage) == 0x000018, "Member 'BP_Action_RaidBossModeChange_C_Play_Montage::CallFunc_FindMontage_Montage' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_Play_Montage, CallFunc_PlayAnimMontage_ReturnValue) == 0x000020, "Member 'BP_Action_RaidBossModeChange_C_Play_Montage::CallFunc_PlayAnimMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_Play_Montage, CallFunc_PlayAnimMontage_InPlayRate_ImplicitCast) == 0x000024, "Member 'BP_Action_RaidBossModeChange_C_Play_Montage::CallFunc_PlayAnimMontage_InPlayRate_ImplicitCast' has a wrong offset!");

// Function BP_Action_RaidBossModeChange.BP_Action_RaidBossModeChange_C.RotateToTargetActor
// 0x0018 (0x0018 - 0x0000)
struct BP_Action_RaidBossModeChange_C_RotateToTargetActor final
{
public:
	class AActor*                                 Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_RaidBossModeChange_C_RotateToTargetActor) == 0x000008, "Wrong alignment on BP_Action_RaidBossModeChange_C_RotateToTargetActor");
static_assert(sizeof(BP_Action_RaidBossModeChange_C_RotateToTargetActor) == 0x000018, "Wrong size on BP_Action_RaidBossModeChange_C_RotateToTargetActor");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_RotateToTargetActor, Target) == 0x000000, "Member 'BP_Action_RaidBossModeChange_C_RotateToTargetActor::Target' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_RotateToTargetActor, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_Action_RaidBossModeChange_C_RotateToTargetActor::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_RotateToTargetActor, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_Action_RaidBossModeChange_C_RotateToTargetActor::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_Action_RaidBossModeChange.BP_Action_RaidBossModeChange_C.SetActiveCharacter
// 0x0018 (0x0018 - 0x0000)
struct BP_Action_RaidBossModeChange_C_SetActiveCharacter final
{
public:
	bool                                          Active;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_RaidBossModeChange_C_SetActiveCharacter) == 0x000008, "Wrong alignment on BP_Action_RaidBossModeChange_C_SetActiveCharacter");
static_assert(sizeof(BP_Action_RaidBossModeChange_C_SetActiveCharacter) == 0x000018, "Wrong size on BP_Action_RaidBossModeChange_C_SetActiveCharacter");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_SetActiveCharacter, Active) == 0x000000, "Member 'BP_Action_RaidBossModeChange_C_SetActiveCharacter::Active' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_SetActiveCharacter, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_Action_RaidBossModeChange_C_SetActiveCharacter::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_SetActiveCharacter, CallFunc_GetMainMesh_ReturnValue) == 0x000010, "Member 'BP_Action_RaidBossModeChange_C_SetActiveCharacter::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");

// Function BP_Action_RaidBossModeChange.BP_Action_RaidBossModeChange_C.StopMontage
// 0x0018 (0x0018 - 0x0000)
struct BP_Action_RaidBossModeChange_C_StopMontage final
{
public:
	EPalGeneralMontageType                        MontageType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_FindMontage_Montage;                      // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_RaidBossModeChange_C_StopMontage) == 0x000008, "Wrong alignment on BP_Action_RaidBossModeChange_C_StopMontage");
static_assert(sizeof(BP_Action_RaidBossModeChange_C_StopMontage) == 0x000018, "Wrong size on BP_Action_RaidBossModeChange_C_StopMontage");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_StopMontage, MontageType) == 0x000000, "Member 'BP_Action_RaidBossModeChange_C_StopMontage::MontageType' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_StopMontage, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_Action_RaidBossModeChange_C_StopMontage::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_StopMontage, CallFunc_FindMontage_Montage) == 0x000010, "Member 'BP_Action_RaidBossModeChange_C_StopMontage::CallFunc_FindMontage_Montage' has a wrong offset!");

// Function BP_Action_RaidBossModeChange.BP_Action_RaidBossModeChange_C.WarpToBaseCamp
// 0x0248 (0x0248 - 0x0000)
struct BP_Action_RaidBossModeChange_C_WarpToBaseCamp final
{
public:
	double                                        Const_OffsetForward;                               // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Const_OffsetUP;                                    // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                WarpLocation;                                      // 0x0010(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APalCharacter*>                  CallFunc_GetAllPlayerCharacters_OutPlayers;        // 0x0028(0x0010)(ReferenceParm)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FindNearestActor_Distance;                // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_FindNearestActor_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0050(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0148(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0160(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue;              // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue_1;        // 0x0180(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_199[0x7];                                      // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x01A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x01B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorUpVector_ReturnValue;             // 0x01D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x01E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x0200(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0218(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0230(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp) == 0x000008, "Wrong alignment on BP_Action_RaidBossModeChange_C_WarpToBaseCamp");
static_assert(sizeof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp) == 0x000248, "Wrong size on BP_Action_RaidBossModeChange_C_WarpToBaseCamp");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, Const_OffsetForward) == 0x000000, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::Const_OffsetForward' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, Const_OffsetUP) == 0x000008, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::Const_OffsetUP' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, WarpLocation) == 0x000010, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::WarpLocation' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_GetAllPlayerCharacters_OutPlayers) == 0x000028, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_GetAllPlayerCharacters_OutPlayers' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_GetActionCharacter_ReturnValue) == 0x000038, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_FindNearestActor_Distance) == 0x000040, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_FindNearestActor_Distance' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_FindNearestActor_ReturnValue) == 0x000048, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_FindNearestActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000050, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000138, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000140, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000148, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000160, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_GetActionTarget_ReturnValue) == 0x000178, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_GetActionTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_Conv_DoubleToVector_ReturnValue_1) == 0x000180, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_Conv_DoubleToVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_IsValid_ReturnValue) == 0x000198, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_GetActorForwardVector_ReturnValue) == 0x0001A0, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0001B8, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_GetActorUpVector_ReturnValue) == 0x0001D0, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_GetActorUpVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0001E8, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_Multiply_VectorVector_ReturnValue_1) == 0x000200, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_Multiply_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_Add_VectorVector_ReturnValue) == 0x000218, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_RaidBossModeChange_C_WarpToBaseCamp, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000230, "Member 'BP_Action_RaidBossModeChange_C_WarpToBaseCamp::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");

}

