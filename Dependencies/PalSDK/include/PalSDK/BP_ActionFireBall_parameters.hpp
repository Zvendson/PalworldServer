#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_ActionFireBall.BP_ActionFireBall_C.CallEffect
// 0x0038 (0x0038 - 0x0000)
struct BP_ActionFireBall_C_CallEffect final
{
public:
	struct FSkillEffectSpawnParameter             Parameter;                                         // 0x0000(0x0038)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(BP_ActionFireBall_C_CallEffect) == 0x000008, "Wrong alignment on BP_ActionFireBall_C_CallEffect");
static_assert(sizeof(BP_ActionFireBall_C_CallEffect) == 0x000038, "Wrong size on BP_ActionFireBall_C_CallEffect");
static_assert(offsetof(BP_ActionFireBall_C_CallEffect, Parameter) == 0x000000, "Member 'BP_ActionFireBall_C_CallEffect::Parameter' has a wrong offset!");

// Function BP_ActionFireBall.BP_ActionFireBall_C.ExecuteUbergraph_BP_ActionFireBall
// 0x04F0 (0x04F0 - 0x0000)
struct BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetPredictedTargetLocation_Location;      // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UNiagaraComponent*>              CallFunc_GetComponentsByTag_ReturnValue;           // 0x0040(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSkillEffectSpawnParameter             CallFunc_Array_Get_Item;                           // 0x0058(0x0038)(NoDestructor)
	TArray<class UNiagaraComponent*>              CallFunc_GetComponentsByTag_ReturnValue_1;         // 0x0090(0x0010)(ReferenceParm, ContainsInstancedReference)
	class APalSkillEffectBase*                    CallFunc_FindEffectByClass_Effect;                 // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AE[0x2];                                       // 0x00AE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_NormalizeToRange_ReturnValue;             // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x3];                                       // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Ease_ReturnValue;                         // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           CallFunc_GetComponentByClass_ReturnValue;          // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSkillEffectSpawnParameter             CallFunc_Array_Get_Item_1;                         // 0x00E0(0x0038)(NoDestructor)
	class APalSkillEffectBase*                    CallFunc_FindEffectByClass_Effect_1;               // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0120(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0130(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0138(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_151[0x7];                                      // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0158(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0170(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_189[0x7];                                      // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x0190(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A9[0x3];                                      // 0x01A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_Array_Get_Item_2;                         // 0x01B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x01B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x01D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x01D8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FSkillEffectSpawnParameter             K2Node_Event_Parameter;                            // 0x01E0(0x0038)(ConstParm, NoDestructor)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0218(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_234[0x4];                                      // 0x0234(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_Array_Get_Item_3;                         // 0x0238(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FSkillEffectSpawnParameter             CallFunc_Array_Get_Item_4;                         // 0x0240(0x0038)(NoDestructor)
	struct FSkillEffectSpawnParameter             CallFunc_Array_Get_Item_5;                         // 0x0278(0x0038)(NoDestructor)
	class APalSkillEffectBase*                    CallFunc_FindEffectByClass_Effect_2;               // 0x02B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalSkillEffectBase*                    CallFunc_FindEffectByClass_Effect_3;               // 0x02B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UNiagaraComponent*>              CallFunc_GetComponentsByTag_ReturnValue_2;         // 0x02C0(0x0010)(ReferenceParm, ContainsInstancedReference)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x02D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_Array_Get_Item_6;                         // 0x02D8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x02E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E5[0x3];                                      // 0x02E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APalSkillEffectBase*                    K2Node_Event_Effect;                               // 0x02E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_GetComponentByClass_ReturnValue_1;        // 0x02F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_3;    // 0x02F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FA[0x6];                                      // 0x02FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_AddActorLocalOffset_SweepHitResult;    // 0x0300(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x03E8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x04D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D1[0x7];                                      // 0x04D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x04D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x04E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_MaxSpeed_ImplicitCast;          // 0x04E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast_1;  // 0x04E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast_2;  // 0x04EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall) == 0x000008, "Wrong alignment on BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall");
static_assert(sizeof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall) == 0x0004F0, "Wrong size on BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, EntryPoint) == 0x000000, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_GetPredictedTargetLocation_Location) == 0x000008, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_GetPredictedTargetLocation_Location' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, Temp_int_Loop_Counter_Variable_1) == 0x000024, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_Add_IntInt_ReturnValue_1) == 0x00002C, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, Temp_int_Array_Index_Variable) == 0x000030, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, K2Node_Event_DeltaTime) == 0x000034, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000038, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_GetComponentsByTag_ReturnValue) == 0x000040, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_GetComponentsByTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_Array_Get_Item) == 0x000058, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_GetComponentsByTag_ReturnValue_1) == 0x000090, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_GetComponentsByTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_FindEffectByClass_Effect) == 0x0000A0, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_FindEffectByClass_Effect' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_Array_Length_ReturnValue_1) == 0x0000A8, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000AC, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_Less_IntInt_ReturnValue) == 0x0000AD, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, Temp_int_Loop_Counter_Variable_2) == 0x0000B0, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_NormalizeToRange_ReturnValue) == 0x0000B8, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_NormalizeToRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000C0, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000C4, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_Ease_ReturnValue) == 0x0000C8, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_Ease_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_GetComponentByClass_ReturnValue) == 0x0000D0, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_IsValid_ReturnValue) == 0x0000D8, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_Array_Get_Item_1) == 0x0000E0, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_FindEffectByClass_Effect_1) == 0x000118, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_FindEffectByClass_Effect_1' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, K2Node_CreateDelegate_OutputDelegate) == 0x000120, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000130, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000138, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_IsValid_ReturnValue_1) == 0x000150, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000158, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_Normal_ReturnValue) == 0x000170, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000188, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x000190, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_K2_SetActorRotation_ReturnValue) == 0x0001A8, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, Temp_int_Array_Index_Variable_1) == 0x0001AC, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_Array_Get_Item_2) == 0x0001B0, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0001B8, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_GetActionCharacter_ReturnValue) == 0x0001D0, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_GetMainMesh_ReturnValue) == 0x0001D8, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, K2Node_Event_Parameter) == 0x0001E0, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::K2Node_Event_Parameter' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_GetSocketLocation_ReturnValue) == 0x000218, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, Temp_int_Array_Index_Variable_2) == 0x000230, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_Array_Get_Item_3) == 0x000238, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_Array_Get_Item_4) == 0x000240, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_Array_Get_Item_5) == 0x000278, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_FindEffectByClass_Effect_2) == 0x0002B0, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_FindEffectByClass_Effect_2' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_FindEffectByClass_Effect_3) == 0x0002B8, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_FindEffectByClass_Effect_3' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_GetComponentsByTag_ReturnValue_2) == 0x0002C0, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_GetComponentsByTag_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x0002D0, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_Array_Get_Item_6) == 0x0002D8, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_Array_Get_Item_6' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_Array_Length_ReturnValue_2) == 0x0002E0, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_Less_IntInt_ReturnValue_2) == 0x0002E4, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, K2Node_Event_Effect) == 0x0002E8, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::K2Node_Event_Effect' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_GetComponentByClass_ReturnValue_1) == 0x0002F0, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_EqualEqual_ObjectObject_ReturnValue_2) == 0x0002F8, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_EqualEqual_ObjectObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_EqualEqual_ObjectObject_ReturnValue_3) == 0x0002F9, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_EqualEqual_ObjectObject_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_K2_AddActorLocalOffset_SweepHitResult) == 0x000300, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_K2_AddActorLocalOffset_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x0003E8, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_K2_SetActorLocation_ReturnValue) == 0x0004D0, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x0004D8, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_SetVariableFloat_InValue_ImplicitCast) == 0x0004E0, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_SetVariableFloat_InValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, K2Node_VariableSet_MaxSpeed_ImplicitCast) == 0x0004E4, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::K2Node_VariableSet_MaxSpeed_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_SetVariableFloat_InValue_ImplicitCast_1) == 0x0004E8, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_SetVariableFloat_InValue_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall, CallFunc_SetVariableFloat_InValue_ImplicitCast_2) == 0x0004EC, "Member 'BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall::CallFunc_SetVariableFloat_InValue_ImplicitCast_2' has a wrong offset!");

// Function BP_ActionFireBall.BP_ActionFireBall_C.OnSpawnEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionFireBall_C_OnSpawnEffect final
{
public:
	class APalSkillEffectBase*                    Effect_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionFireBall_C_OnSpawnEffect) == 0x000008, "Wrong alignment on BP_ActionFireBall_C_OnSpawnEffect");
static_assert(sizeof(BP_ActionFireBall_C_OnSpawnEffect) == 0x000008, "Wrong size on BP_ActionFireBall_C_OnSpawnEffect");
static_assert(offsetof(BP_ActionFireBall_C_OnSpawnEffect, Effect_0) == 0x000000, "Member 'BP_ActionFireBall_C_OnSpawnEffect::Effect_0' has a wrong offset!");

// Function BP_ActionFireBall.BP_ActionFireBall_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_ActionFireBall_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionFireBall_C_TickAction) == 0x000004, "Wrong alignment on BP_ActionFireBall_C_TickAction");
static_assert(sizeof(BP_ActionFireBall_C_TickAction) == 0x000004, "Wrong size on BP_ActionFireBall_C_TickAction");
static_assert(offsetof(BP_ActionFireBall_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_ActionFireBall_C_TickAction::DeltaTime' has a wrong offset!");

}

