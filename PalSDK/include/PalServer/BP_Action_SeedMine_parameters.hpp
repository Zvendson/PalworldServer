#pragma once

#include "Basic.hpp"


namespace PalServer::Params
{

// Function BP_Action_SeedMine.BP_Action_SeedMine_C.OnSpawnEffect
// 0x0038 (0x0038 - 0x0000)
struct BP_Action_SeedMine_C_OnSpawnEffect final
{
public:
	class APalSkillEffectBase*                    Effect_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class USphereComponent*>               CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USphereComponent*                       CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_SeedMine_C_OnSpawnEffect) == 0x000008, "Wrong alignment on BP_Action_SeedMine_C_OnSpawnEffect");
static_assert(sizeof(BP_Action_SeedMine_C_OnSpawnEffect) == 0x000038, "Wrong size on BP_Action_SeedMine_C_OnSpawnEffect");
static_assert(offsetof(BP_Action_SeedMine_C_OnSpawnEffect, Effect_0) == 0x000000, "Member 'BP_Action_SeedMine_C_OnSpawnEffect::Effect_0' has a wrong offset!");
static_assert(offsetof(BP_Action_SeedMine_C_OnSpawnEffect, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000008, "Member 'BP_Action_SeedMine_C_OnSpawnEffect::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SeedMine_C_OnSpawnEffect, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'BP_Action_SeedMine_C_OnSpawnEffect::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SeedMine_C_OnSpawnEffect, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'BP_Action_SeedMine_C_OnSpawnEffect::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_SeedMine_C_OnSpawnEffect, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'BP_Action_SeedMine_C_OnSpawnEffect::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_SeedMine_C_OnSpawnEffect, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_Action_SeedMine_C_OnSpawnEffect::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Action_SeedMine_C_OnSpawnEffect, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'BP_Action_SeedMine_C_OnSpawnEffect::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SeedMine_C_OnSpawnEffect, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'BP_Action_SeedMine_C_OnSpawnEffect::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}

