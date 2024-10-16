#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_ActionFlareArrow.BP_ActionFlareArrow_C.BulletHasShooted
// 0x0050 (0x0050 - 0x0000)
struct BP_ActionFlareArrow_C_BulletHasShooted final
{
public:
	class APalSkillEffectBase*                    Effect_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSkillEffectSpawnParameter             CallFunc_Array_Get_Item;                           // 0x0008(0x0038)(NoDestructor)
	class APalSkillEffectBase*                    CallFunc_FindEffectByClass_Effect;                 // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionFlareArrow_C_BulletHasShooted) == 0x000008, "Wrong alignment on BP_ActionFlareArrow_C_BulletHasShooted");
static_assert(sizeof(BP_ActionFlareArrow_C_BulletHasShooted) == 0x000050, "Wrong size on BP_ActionFlareArrow_C_BulletHasShooted");
static_assert(offsetof(BP_ActionFlareArrow_C_BulletHasShooted, Effect_0) == 0x000000, "Member 'BP_ActionFlareArrow_C_BulletHasShooted::Effect_0' has a wrong offset!");
static_assert(offsetof(BP_ActionFlareArrow_C_BulletHasShooted, CallFunc_Array_Get_Item) == 0x000008, "Member 'BP_ActionFlareArrow_C_BulletHasShooted::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ActionFlareArrow_C_BulletHasShooted, CallFunc_FindEffectByClass_Effect) == 0x000040, "Member 'BP_ActionFlareArrow_C_BulletHasShooted::CallFunc_FindEffectByClass_Effect' has a wrong offset!");
static_assert(offsetof(BP_ActionFlareArrow_C_BulletHasShooted, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'BP_ActionFlareArrow_C_BulletHasShooted::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFlareArrow_C_BulletHasShooted, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000049, "Member 'BP_ActionFlareArrow_C_BulletHasShooted::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function BP_ActionFlareArrow.BP_ActionFlareArrow_C.ExecuteUbergraph_BP_ActionFlareArrow
// 0x00C0 (0x00C0 - 0x0000)
struct BP_ActionFlareArrow_C_ExecuteUbergraph_BP_ActionFlareArrow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalSkillEffectBase*                    K2Node_Event_Effect;                               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSkillEffectSpawnParameter             CallFunc_Array_Get_Item;                           // 0x0018(0x0038)(NoDestructor)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x005C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSkillEffectSpawnParameter             CallFunc_Array_Get_Item_1;                         // 0x0070(0x0038)(NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x00A8(0x0008)(NoDestructor, HasGetValueTypeHash)
	class APalSkillEffectBase*                    CallFunc_FindEffectByClass_Effect;                 // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionFlareArrow_C_ExecuteUbergraph_BP_ActionFlareArrow) == 0x000008, "Wrong alignment on BP_ActionFlareArrow_C_ExecuteUbergraph_BP_ActionFlareArrow");
static_assert(sizeof(BP_ActionFlareArrow_C_ExecuteUbergraph_BP_ActionFlareArrow) == 0x0000C0, "Wrong size on BP_ActionFlareArrow_C_ExecuteUbergraph_BP_ActionFlareArrow");
static_assert(offsetof(BP_ActionFlareArrow_C_ExecuteUbergraph_BP_ActionFlareArrow, EntryPoint) == 0x000000, "Member 'BP_ActionFlareArrow_C_ExecuteUbergraph_BP_ActionFlareArrow::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionFlareArrow_C_ExecuteUbergraph_BP_ActionFlareArrow, K2Node_Event_Effect) == 0x000008, "Member 'BP_ActionFlareArrow_C_ExecuteUbergraph_BP_ActionFlareArrow::K2Node_Event_Effect' has a wrong offset!");
static_assert(offsetof(BP_ActionFlareArrow_C_ExecuteUbergraph_BP_ActionFlareArrow, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_ActionFlareArrow_C_ExecuteUbergraph_BP_ActionFlareArrow::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFlareArrow_C_ExecuteUbergraph_BP_ActionFlareArrow, CallFunc_Array_Get_Item) == 0x000018, "Member 'BP_ActionFlareArrow_C_ExecuteUbergraph_BP_ActionFlareArrow::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ActionFlareArrow_C_ExecuteUbergraph_BP_ActionFlareArrow, CallFunc_Subtract_IntInt_ReturnValue) == 0x000050, "Member 'BP_ActionFlareArrow_C_ExecuteUbergraph_BP_ActionFlareArrow::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFlareArrow_C_ExecuteUbergraph_BP_ActionFlareArrow, CallFunc_Less_IntInt_ReturnValue) == 0x000054, "Member 'BP_ActionFlareArrow_C_ExecuteUbergraph_BP_ActionFlareArrow::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFlareArrow_C_ExecuteUbergraph_BP_ActionFlareArrow, Temp_int_Variable) == 0x000058, "Member 'BP_ActionFlareArrow_C_ExecuteUbergraph_BP_ActionFlareArrow::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionFlareArrow_C_ExecuteUbergraph_BP_ActionFlareArrow, K2Node_CreateDelegate_OutputDelegate) == 0x00005C, "Member 'BP_ActionFlareArrow_C_ExecuteUbergraph_BP_ActionFlareArrow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ActionFlareArrow_C_ExecuteUbergraph_BP_ActionFlareArrow, CallFunc_Array_Get_Item_1) == 0x000070, "Member 'BP_ActionFlareArrow_C_ExecuteUbergraph_BP_ActionFlareArrow::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_ActionFlareArrow_C_ExecuteUbergraph_BP_ActionFlareArrow, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0000A8, "Member 'BP_ActionFlareArrow_C_ExecuteUbergraph_BP_ActionFlareArrow::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFlareArrow_C_ExecuteUbergraph_BP_ActionFlareArrow, CallFunc_FindEffectByClass_Effect) == 0x0000B0, "Member 'BP_ActionFlareArrow_C_ExecuteUbergraph_BP_ActionFlareArrow::CallFunc_FindEffectByClass_Effect' has a wrong offset!");
static_assert(offsetof(BP_ActionFlareArrow_C_ExecuteUbergraph_BP_ActionFlareArrow, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000B8, "Member 'BP_ActionFlareArrow_C_ExecuteUbergraph_BP_ActionFlareArrow::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function BP_ActionFlareArrow.BP_ActionFlareArrow_C.OnSpawnEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionFlareArrow_C_OnSpawnEffect final
{
public:
	class APalSkillEffectBase*                    Effect_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionFlareArrow_C_OnSpawnEffect) == 0x000008, "Wrong alignment on BP_ActionFlareArrow_C_OnSpawnEffect");
static_assert(sizeof(BP_ActionFlareArrow_C_OnSpawnEffect) == 0x000008, "Wrong size on BP_ActionFlareArrow_C_OnSpawnEffect");
static_assert(offsetof(BP_ActionFlareArrow_C_OnSpawnEffect, Effect_0) == 0x000000, "Member 'BP_ActionFlareArrow_C_OnSpawnEffect::Effect_0' has a wrong offset!");

// Function BP_ActionFlareArrow.BP_ActionFlareArrow_C.SetBulletSpeed
// 0x0040 (0x0040 - 0x0000)
struct BP_ActionFlareArrow_C_SetBulletSpeed final
{
public:
	class APalSkillEffectBase*                    Effect_0;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UProjectileMovementComponent*           CallFunc_GetComponentByClass_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_VariableSet_MaxSpeed_ImplicitCast;          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionFlareArrow_C_SetBulletSpeed) == 0x000008, "Wrong alignment on BP_ActionFlareArrow_C_SetBulletSpeed");
static_assert(sizeof(BP_ActionFlareArrow_C_SetBulletSpeed) == 0x000040, "Wrong size on BP_ActionFlareArrow_C_SetBulletSpeed");
static_assert(offsetof(BP_ActionFlareArrow_C_SetBulletSpeed, Effect_0) == 0x000000, "Member 'BP_ActionFlareArrow_C_SetBulletSpeed::Effect_0' has a wrong offset!");
static_assert(offsetof(BP_ActionFlareArrow_C_SetBulletSpeed, CallFunc_MakeVector_ReturnValue) == 0x000008, "Member 'BP_ActionFlareArrow_C_SetBulletSpeed::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFlareArrow_C_SetBulletSpeed, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000020, "Member 'BP_ActionFlareArrow_C_SetBulletSpeed::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFlareArrow_C_SetBulletSpeed, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_ActionFlareArrow_C_SetBulletSpeed::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFlareArrow_C_SetBulletSpeed, CallFunc_GetComponentByClass_ReturnValue) == 0x000030, "Member 'BP_ActionFlareArrow_C_SetBulletSpeed::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFlareArrow_C_SetBulletSpeed, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'BP_ActionFlareArrow_C_SetBulletSpeed::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionFlareArrow_C_SetBulletSpeed, K2Node_VariableSet_MaxSpeed_ImplicitCast) == 0x00003C, "Member 'BP_ActionFlareArrow_C_SetBulletSpeed::K2Node_VariableSet_MaxSpeed_ImplicitCast' has a wrong offset!");

}

