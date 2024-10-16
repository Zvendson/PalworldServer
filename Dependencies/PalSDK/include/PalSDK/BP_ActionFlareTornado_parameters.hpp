#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_ActionFlareTornado.BP_ActionFlareTornado_C.OnStartProcessAnimation
// 0x0070 (0x0070 - 0x0000)
struct BP_ActionFlareTornado_C_OnStartProcessAnimation final
{
public:
	struct FVector                                CallFunc_GetTargetLocation_ReturnValue;            // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSkillEffectSpawnParameter             CallFunc_Array_Get_Item;                           // 0x0018(0x0038)(NoDestructor)
	class APalSkillEffectBase*                    CallFunc_FindEffectByClass_Effect;                 // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SkillEffect_C>    K2Node_DynamicCast_AsBPI_Skill_Effect;             // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionFlareTornado_C_OnStartProcessAnimation) == 0x000008, "Wrong alignment on BP_ActionFlareTornado_C_OnStartProcessAnimation");
static_assert(sizeof(BP_ActionFlareTornado_C_OnStartProcessAnimation) == 0x000070, "Wrong size on BP_ActionFlareTornado_C_OnStartProcessAnimation");
static_assert(offsetof(BP_ActionFlareTornado_C_OnStartProcessAnimation, CallFunc_GetTargetLocation_ReturnValue) == 0x000000, "Member 'BP_ActionFlareTornado_C_OnStartProcessAnimation::CallFunc_GetTargetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionFlareTornado_C_OnStartProcessAnimation, CallFunc_Array_Get_Item) == 0x000018, "Member 'BP_ActionFlareTornado_C_OnStartProcessAnimation::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ActionFlareTornado_C_OnStartProcessAnimation, CallFunc_FindEffectByClass_Effect) == 0x000050, "Member 'BP_ActionFlareTornado_C_OnStartProcessAnimation::CallFunc_FindEffectByClass_Effect' has a wrong offset!");
static_assert(offsetof(BP_ActionFlareTornado_C_OnStartProcessAnimation, K2Node_DynamicCast_AsBPI_Skill_Effect) == 0x000058, "Member 'BP_ActionFlareTornado_C_OnStartProcessAnimation::K2Node_DynamicCast_AsBPI_Skill_Effect' has a wrong offset!");
static_assert(offsetof(BP_ActionFlareTornado_C_OnStartProcessAnimation, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'BP_ActionFlareTornado_C_OnStartProcessAnimation::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

