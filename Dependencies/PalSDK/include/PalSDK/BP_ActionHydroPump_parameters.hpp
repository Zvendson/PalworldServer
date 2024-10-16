#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_ActionHydroPump.BP_ActionHydroPump_C.ExecuteUbergraph_BP_ActionHydroPump
// 0x00C8 (0x00C8 - 0x0000)
struct BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSkillEffectSpawnParameter             CallFunc_Array_Get_Item;                           // 0x0018(0x0038)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalSkillEffectBase*                    CallFunc_FindEffectByClass_Effect;                 // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0060(0x0008)(NoDestructor, HasGetValueTypeHash)
	class APalSkillEffectBase*                    K2Node_Event_Effect;                               // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCapsuleComponent*                      CallFunc_GetComponentByClass_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;   // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;          // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x3];                                       // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump) == 0x000008, "Wrong alignment on BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump");
static_assert(sizeof(BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump) == 0x0000C8, "Wrong size on BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump");
static_assert(offsetof(BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump, EntryPoint) == 0x000000, "Member 'BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump, CallFunc_Array_Get_Item) == 0x000018, "Member 'BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump, CallFunc_FindEffectByClass_Effect) == 0x000058, "Member 'BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump::CallFunc_FindEffectByClass_Effect' has a wrong offset!");
static_assert(offsetof(BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000060, "Member 'BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump, K2Node_Event_Effect) == 0x000068, "Member 'BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump::K2Node_Event_Effect' has a wrong offset!");
static_assert(offsetof(BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000070, "Member 'BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump, CallFunc_GetComponentByClass_ReturnValue) == 0x000078, "Member 'BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump, CallFunc_GetScaledCapsuleHalfHeight_ReturnValue) == 0x000084, "Member 'BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump::CallFunc_GetScaledCapsuleHalfHeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000088, "Member 'BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump, CallFunc_MakeVector_ReturnValue) == 0x000090, "Member 'BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump, Temp_int_Loop_Counter_Variable) == 0x0000A8, "Member 'BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump, CallFunc_SpawnSystemAttached_ReturnValue) == 0x0000B0, "Member 'BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump, CallFunc_Less_IntInt_ReturnValue) == 0x0000B8, "Member 'BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump, CallFunc_Add_IntInt_ReturnValue) == 0x0000BC, "Member 'BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x0000C0, "Member 'BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_ActionHydroPump.BP_ActionHydroPump_C.OnSpawnEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionHydroPump_C_OnSpawnEffect final
{
public:
	class APalSkillEffectBase*                    Effect_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionHydroPump_C_OnSpawnEffect) == 0x000008, "Wrong alignment on BP_ActionHydroPump_C_OnSpawnEffect");
static_assert(sizeof(BP_ActionHydroPump_C_OnSpawnEffect) == 0x000008, "Wrong size on BP_ActionHydroPump_C_OnSpawnEffect");
static_assert(offsetof(BP_ActionHydroPump_C_OnSpawnEffect, Effect_0) == 0x000000, "Member 'BP_ActionHydroPump_C_OnSpawnEffect::Effect_0' has a wrong offset!");

}

