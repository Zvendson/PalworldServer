#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_ActionShadowBall.BP_ActionShadowBall_C.ExecuteUbergraph_BP_ActionShadowBall
// 0x01F8 (0x01F8 - 0x0000)
struct BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SkillEffectBase_C*                  K2Node_DynamicCast_AsBP_Skill_Effect_Base;         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UNiagaraComponent*>              CallFunc_GetComponentsByTag_ReturnValue;           // 0x0040(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSkillEffectSpawnParameter             CallFunc_Array_Get_Item;                           // 0x0060(0x0038)(NoDestructor)
	TArray<class UNiagaraComponent*>              CallFunc_GetComponentsByTag_ReturnValue_1;         // 0x0098(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalSkillEffectBase*                    CallFunc_FindEffectByClass_Effect;                 // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BA[0x2];                                       // 0x00BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x3];                                       // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_NormalizeToRange_ReturnValue;             // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Ease_ReturnValue;                         // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_Array_Get_Item_1;                         // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FSkillEffectSpawnParameter             CallFunc_Array_Get_Item_2;                         // 0x00E8(0x0038)(NoDestructor)
	class APalSkillEffectBase*                    CallFunc_FindEffectByClass_Effect_1;               // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12C[0x4];                                      // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0130(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_Array_Get_Item_3;                         // 0x0148(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_151[0x7];                                      // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UProjectileMovementComponent*           CallFunc_GetComponentByClass_ReturnValue;          // 0x0158(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_162[0x6];                                      // 0x0162(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetPredictedTargetLocation_Location;      // 0x0168(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0180(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0198(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x01B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x01C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E1[0x7];                                      // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_MaxSpeed_ImplicitCast;          // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall) == 0x000008, "Wrong alignment on BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall");
static_assert(sizeof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall) == 0x0001F8, "Wrong size on BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, EntryPoint) == 0x000000, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, K2Node_DynamicCast_AsBP_Skill_Effect_Base) == 0x000008, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::K2Node_DynamicCast_AsBP_Skill_Effect_Base' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000028, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, K2Node_Event_DeltaTime) == 0x000030, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000038, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, CallFunc_GetComponentsByTag_ReturnValue) == 0x000040, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::CallFunc_GetComponentsByTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, Temp_int_Loop_Counter_Variable) == 0x000050, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, CallFunc_Array_Length_ReturnValue) == 0x000054, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, CallFunc_Add_IntInt_ReturnValue) == 0x000058, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, CallFunc_Array_Get_Item) == 0x000060, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, CallFunc_GetComponentsByTag_ReturnValue_1) == 0x000098, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::CallFunc_GetComponentsByTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, CallFunc_Array_Length_ReturnValue_1) == 0x0000A8, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, CallFunc_FindEffectByClass_Effect) == 0x0000B0, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::CallFunc_FindEffectByClass_Effect' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, CallFunc_Less_IntInt_ReturnValue) == 0x0000B8, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000B9, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, Temp_int_Loop_Counter_Variable_1) == 0x0000BC, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000C0, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000C4, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, CallFunc_NormalizeToRange_ReturnValue) == 0x0000C8, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::CallFunc_NormalizeToRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, Temp_int_Array_Index_Variable) == 0x0000D0, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, CallFunc_Ease_ReturnValue) == 0x0000D8, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::CallFunc_Ease_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, CallFunc_Array_Get_Item_1) == 0x0000E0, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, CallFunc_Array_Get_Item_2) == 0x0000E8, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, CallFunc_FindEffectByClass_Effect_1) == 0x000120, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::CallFunc_FindEffectByClass_Effect_1' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, Temp_int_Array_Index_Variable_1) == 0x000128, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000130, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, CallFunc_Array_Get_Item_3) == 0x000148, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, CallFunc_IsValid_ReturnValue) == 0x000150, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, CallFunc_GetComponentByClass_ReturnValue) == 0x000158, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, CallFunc_IsValid_ReturnValue_1) == 0x000160, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000161, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, CallFunc_GetPredictedTargetLocation_Location) == 0x000168, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::CallFunc_GetPredictedTargetLocation_Location' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000180, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, CallFunc_Normal_ReturnValue) == 0x000198, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x0001B0, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0001C8, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, CallFunc_K2_SetActorRotation_ReturnValue) == 0x0001E0, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x0001E8, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, CallFunc_SetVariableFloat_InValue_ImplicitCast) == 0x0001F0, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::CallFunc_SetVariableFloat_InValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall, K2Node_VariableSet_MaxSpeed_ImplicitCast) == 0x0001F4, "Member 'BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall::K2Node_VariableSet_MaxSpeed_ImplicitCast' has a wrong offset!");

// Function BP_ActionShadowBall.BP_ActionShadowBall_C.OnSpawnEffect
// 0x00E0 (0x00E0 - 0x0000)
struct BP_ActionShadowBall_C_OnSpawnEffect final
{
public:
	class APalSkillEffectBase*                    Effect_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSkillEffectSpawnParameter             CallFunc_Array_Get_Item;                           // 0x0020(0x0038)(NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalSkillEffectBase*                    CallFunc_FindEffectByClass_Effect;                 // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UNiagaraComponent*>              CallFunc_GetComponentsByTag_ReturnValue;           // 0x0070(0x0010)(ReferenceParm, ContainsInstancedReference)
	struct FSkillEffectSpawnParameter             CallFunc_Array_Get_Item_1;                         // 0x0080(0x0038)(NoDestructor)
	class UNiagaraComponent*                      CallFunc_Array_Get_Item_2;                         // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalSkillEffectBase*                    CallFunc_FindEffectByClass_Effect_1;               // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x3];                                       // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x3];                                       // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast_1;  // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionShadowBall_C_OnSpawnEffect) == 0x000008, "Wrong alignment on BP_ActionShadowBall_C_OnSpawnEffect");
static_assert(sizeof(BP_ActionShadowBall_C_OnSpawnEffect) == 0x0000E0, "Wrong size on BP_ActionShadowBall_C_OnSpawnEffect");
static_assert(offsetof(BP_ActionShadowBall_C_OnSpawnEffect, Effect_0) == 0x000000, "Member 'BP_ActionShadowBall_C_OnSpawnEffect::Effect_0' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_OnSpawnEffect, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_ActionShadowBall_C_OnSpawnEffect::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_OnSpawnEffect, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_ActionShadowBall_C_OnSpawnEffect::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_OnSpawnEffect, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000018, "Member 'BP_ActionShadowBall_C_OnSpawnEffect::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_OnSpawnEffect, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_ActionShadowBall_C_OnSpawnEffect::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_OnSpawnEffect, Temp_int_Loop_Counter_Variable) == 0x000058, "Member 'BP_ActionShadowBall_C_OnSpawnEffect::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_OnSpawnEffect, CallFunc_FindEffectByClass_Effect) == 0x000060, "Member 'BP_ActionShadowBall_C_OnSpawnEffect::CallFunc_FindEffectByClass_Effect' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_OnSpawnEffect, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000068, "Member 'BP_ActionShadowBall_C_OnSpawnEffect::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_OnSpawnEffect, CallFunc_Add_IntInt_ReturnValue) == 0x00006C, "Member 'BP_ActionShadowBall_C_OnSpawnEffect::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_OnSpawnEffect, CallFunc_GetComponentsByTag_ReturnValue) == 0x000070, "Member 'BP_ActionShadowBall_C_OnSpawnEffect::CallFunc_GetComponentsByTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_OnSpawnEffect, CallFunc_Array_Get_Item_1) == 0x000080, "Member 'BP_ActionShadowBall_C_OnSpawnEffect::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_OnSpawnEffect, CallFunc_Array_Get_Item_2) == 0x0000B8, "Member 'BP_ActionShadowBall_C_OnSpawnEffect::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_OnSpawnEffect, CallFunc_FindEffectByClass_Effect_1) == 0x0000C0, "Member 'BP_ActionShadowBall_C_OnSpawnEffect::CallFunc_FindEffectByClass_Effect_1' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_OnSpawnEffect, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x0000C8, "Member 'BP_ActionShadowBall_C_OnSpawnEffect::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_OnSpawnEffect, CallFunc_Array_Length_ReturnValue) == 0x0000CC, "Member 'BP_ActionShadowBall_C_OnSpawnEffect::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_OnSpawnEffect, CallFunc_Less_IntInt_ReturnValue) == 0x0000D0, "Member 'BP_ActionShadowBall_C_OnSpawnEffect::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_OnSpawnEffect, CallFunc_SetVariableFloat_InValue_ImplicitCast) == 0x0000D4, "Member 'BP_ActionShadowBall_C_OnSpawnEffect::CallFunc_SetVariableFloat_InValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ActionShadowBall_C_OnSpawnEffect, CallFunc_SetVariableFloat_InValue_ImplicitCast_1) == 0x0000D8, "Member 'BP_ActionShadowBall_C_OnSpawnEffect::CallFunc_SetVariableFloat_InValue_ImplicitCast_1' has a wrong offset!");

// Function BP_ActionShadowBall.BP_ActionShadowBall_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_ActionShadowBall_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionShadowBall_C_TickAction) == 0x000004, "Wrong alignment on BP_ActionShadowBall_C_TickAction");
static_assert(sizeof(BP_ActionShadowBall_C_TickAction) == 0x000004, "Wrong size on BP_ActionShadowBall_C_TickAction");
static_assert(offsetof(BP_ActionShadowBall_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_ActionShadowBall_C_TickAction::DeltaTime' has a wrong offset!");

}

