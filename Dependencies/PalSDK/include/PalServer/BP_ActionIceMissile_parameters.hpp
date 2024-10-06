#pragma once

#include "Basic.hpp"


namespace PalServer::Params
{

// Function BP_ActionIceMissile.BP_ActionIceMissile_C.ExecuteUbergraph_BP_ActionIceMissile
// 0x0030 (0x0030 - 0x0000)
struct BP_ActionIceMissile_C_ExecuteUbergraph_BP_ActionIceMissile final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SkillEffect_IceMissile_C*           K2Node_DynamicCast_AsBP_Skill_Effect_Ice_Missile;  // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SkillEffect_IceMissile_Bullet_C*    CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionIceMissile_C_ExecuteUbergraph_BP_ActionIceMissile) == 0x000008, "Wrong alignment on BP_ActionIceMissile_C_ExecuteUbergraph_BP_ActionIceMissile");
static_assert(sizeof(BP_ActionIceMissile_C_ExecuteUbergraph_BP_ActionIceMissile) == 0x000030, "Wrong size on BP_ActionIceMissile_C_ExecuteUbergraph_BP_ActionIceMissile");
static_assert(offsetof(BP_ActionIceMissile_C_ExecuteUbergraph_BP_ActionIceMissile, EntryPoint) == 0x000000, "Member 'BP_ActionIceMissile_C_ExecuteUbergraph_BP_ActionIceMissile::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionIceMissile_C_ExecuteUbergraph_BP_ActionIceMissile, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_ActionIceMissile_C_ExecuteUbergraph_BP_ActionIceMissile::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionIceMissile_C_ExecuteUbergraph_BP_ActionIceMissile, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_ActionIceMissile_C_ExecuteUbergraph_BP_ActionIceMissile::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionIceMissile_C_ExecuteUbergraph_BP_ActionIceMissile, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'BP_ActionIceMissile_C_ExecuteUbergraph_BP_ActionIceMissile::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionIceMissile_C_ExecuteUbergraph_BP_ActionIceMissile, K2Node_DynamicCast_AsBP_Skill_Effect_Ice_Missile) == 0x000010, "Member 'BP_ActionIceMissile_C_ExecuteUbergraph_BP_ActionIceMissile::K2Node_DynamicCast_AsBP_Skill_Effect_Ice_Missile' has a wrong offset!");
static_assert(offsetof(BP_ActionIceMissile_C_ExecuteUbergraph_BP_ActionIceMissile, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_ActionIceMissile_C_ExecuteUbergraph_BP_ActionIceMissile::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionIceMissile_C_ExecuteUbergraph_BP_ActionIceMissile, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'BP_ActionIceMissile_C_ExecuteUbergraph_BP_ActionIceMissile::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionIceMissile_C_ExecuteUbergraph_BP_ActionIceMissile, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_ActionIceMissile_C_ExecuteUbergraph_BP_ActionIceMissile::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ActionIceMissile_C_ExecuteUbergraph_BP_ActionIceMissile, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'BP_ActionIceMissile_C_ExecuteUbergraph_BP_ActionIceMissile::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionIceMissile_C_ExecuteUbergraph_BP_ActionIceMissile, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'BP_ActionIceMissile_C_ExecuteUbergraph_BP_ActionIceMissile::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_ActionIceMissile.BP_ActionIceMissile_C.OnSpawnEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionIceMissile_C_OnSpawnEffect final
{
public:
	class APalSkillEffectBase*                    Effect_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionIceMissile_C_OnSpawnEffect) == 0x000008, "Wrong alignment on BP_ActionIceMissile_C_OnSpawnEffect");
static_assert(sizeof(BP_ActionIceMissile_C_OnSpawnEffect) == 0x000008, "Wrong size on BP_ActionIceMissile_C_OnSpawnEffect");
static_assert(offsetof(BP_ActionIceMissile_C_OnSpawnEffect, Effect_0) == 0x000000, "Member 'BP_ActionIceMissile_C_OnSpawnEffect::Effect_0' has a wrong offset!");

}

