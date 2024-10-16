#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_Action_AcidRain.BP_Action_AcidRain_C.ExecuteUbergraph_BP_Action_AcidRain
// 0x0158 (0x0158 - 0x0000)
struct BP_Action_AcidRain_C_ExecuteUbergraph_BP_Action_AcidRain final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalSkillEffectBase*                    K2Node_Event_Effect;                               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SkillEffect_AcidRain_Cloud_C*       K2Node_DynamicCast_AsBP_Skill_Effect_Acid_Rain_Cloud; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalSkillEffectBase*                    CallFunc_FindEffectByClass_Effect;                 // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SkillEffect_AcidRain_C*             K2Node_DynamicCast_AsBP_Skill_Effect_Acid_Rain;    // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetTargetLocation_Location;               // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0068(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_AcidRain_C_ExecuteUbergraph_BP_Action_AcidRain) == 0x000008, "Wrong alignment on BP_Action_AcidRain_C_ExecuteUbergraph_BP_Action_AcidRain");
static_assert(sizeof(BP_Action_AcidRain_C_ExecuteUbergraph_BP_Action_AcidRain) == 0x000158, "Wrong size on BP_Action_AcidRain_C_ExecuteUbergraph_BP_Action_AcidRain");
static_assert(offsetof(BP_Action_AcidRain_C_ExecuteUbergraph_BP_Action_AcidRain, EntryPoint) == 0x000000, "Member 'BP_Action_AcidRain_C_ExecuteUbergraph_BP_Action_AcidRain::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_AcidRain_C_ExecuteUbergraph_BP_Action_AcidRain, K2Node_Event_Effect) == 0x000008, "Member 'BP_Action_AcidRain_C_ExecuteUbergraph_BP_Action_AcidRain::K2Node_Event_Effect' has a wrong offset!");
static_assert(offsetof(BP_Action_AcidRain_C_ExecuteUbergraph_BP_Action_AcidRain, K2Node_DynamicCast_AsBP_Skill_Effect_Acid_Rain_Cloud) == 0x000010, "Member 'BP_Action_AcidRain_C_ExecuteUbergraph_BP_Action_AcidRain::K2Node_DynamicCast_AsBP_Skill_Effect_Acid_Rain_Cloud' has a wrong offset!");
static_assert(offsetof(BP_Action_AcidRain_C_ExecuteUbergraph_BP_Action_AcidRain, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_Action_AcidRain_C_ExecuteUbergraph_BP_Action_AcidRain::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Action_AcidRain_C_ExecuteUbergraph_BP_Action_AcidRain, CallFunc_FindEffectByClass_Effect) == 0x000020, "Member 'BP_Action_AcidRain_C_ExecuteUbergraph_BP_Action_AcidRain::CallFunc_FindEffectByClass_Effect' has a wrong offset!");
static_assert(offsetof(BP_Action_AcidRain_C_ExecuteUbergraph_BP_Action_AcidRain, K2Node_DynamicCast_AsBP_Skill_Effect_Acid_Rain) == 0x000028, "Member 'BP_Action_AcidRain_C_ExecuteUbergraph_BP_Action_AcidRain::K2Node_DynamicCast_AsBP_Skill_Effect_Acid_Rain' has a wrong offset!");
static_assert(offsetof(BP_Action_AcidRain_C_ExecuteUbergraph_BP_Action_AcidRain, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'BP_Action_AcidRain_C_ExecuteUbergraph_BP_Action_AcidRain::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Action_AcidRain_C_ExecuteUbergraph_BP_Action_AcidRain, CallFunc_GetTargetLocation_Location) == 0x000038, "Member 'BP_Action_AcidRain_C_ExecuteUbergraph_BP_Action_AcidRain::CallFunc_GetTargetLocation_Location' has a wrong offset!");
static_assert(offsetof(BP_Action_AcidRain_C_ExecuteUbergraph_BP_Action_AcidRain, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000050, "Member 'BP_Action_AcidRain_C_ExecuteUbergraph_BP_Action_AcidRain::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_AcidRain_C_ExecuteUbergraph_BP_Action_AcidRain, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000068, "Member 'BP_Action_AcidRain_C_ExecuteUbergraph_BP_Action_AcidRain::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Action_AcidRain_C_ExecuteUbergraph_BP_Action_AcidRain, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000150, "Member 'BP_Action_AcidRain_C_ExecuteUbergraph_BP_Action_AcidRain::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");

// Function BP_Action_AcidRain.BP_Action_AcidRain_C.OnSpawnEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_AcidRain_C_OnSpawnEffect final
{
public:
	class APalSkillEffectBase*                    Effect_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_AcidRain_C_OnSpawnEffect) == 0x000008, "Wrong alignment on BP_Action_AcidRain_C_OnSpawnEffect");
static_assert(sizeof(BP_Action_AcidRain_C_OnSpawnEffect) == 0x000008, "Wrong size on BP_Action_AcidRain_C_OnSpawnEffect");
static_assert(offsetof(BP_Action_AcidRain_C_OnSpawnEffect, Effect_0) == 0x000000, "Member 'BP_Action_AcidRain_C_OnSpawnEffect::Effect_0' has a wrong offset!");

}

