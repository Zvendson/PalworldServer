#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_SkillEffect_FlareArrowShoot.BP_SkillEffect_FlareArrowShoot_C.ExecuteUbergraph_BP_SkillEffect_FlareArrowShoot
// 0x0060 (0x0060 - 0x0000)
struct BP_SkillEffect_FlareArrowShoot_C_ExecuteUbergraph_BP_SkillEffect_FlareArrowShoot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetActionTargetLocation_ReturnValue;      // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_FlareArrowShoot_C_ExecuteUbergraph_BP_SkillEffect_FlareArrowShoot) == 0x000008, "Wrong alignment on BP_SkillEffect_FlareArrowShoot_C_ExecuteUbergraph_BP_SkillEffect_FlareArrowShoot");
static_assert(sizeof(BP_SkillEffect_FlareArrowShoot_C_ExecuteUbergraph_BP_SkillEffect_FlareArrowShoot) == 0x000060, "Wrong size on BP_SkillEffect_FlareArrowShoot_C_ExecuteUbergraph_BP_SkillEffect_FlareArrowShoot");
static_assert(offsetof(BP_SkillEffect_FlareArrowShoot_C_ExecuteUbergraph_BP_SkillEffect_FlareArrowShoot, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_FlareArrowShoot_C_ExecuteUbergraph_BP_SkillEffect_FlareArrowShoot::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrowShoot_C_ExecuteUbergraph_BP_SkillEffect_FlareArrowShoot, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'BP_SkillEffect_FlareArrowShoot_C_ExecuteUbergraph_BP_SkillEffect_FlareArrowShoot::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrowShoot_C_ExecuteUbergraph_BP_SkillEffect_FlareArrowShoot, K2Node_Event_DeltaSeconds) == 0x000020, "Member 'BP_SkillEffect_FlareArrowShoot_C_ExecuteUbergraph_BP_SkillEffect_FlareArrowShoot::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrowShoot_C_ExecuteUbergraph_BP_SkillEffect_FlareArrowShoot, CallFunc_GetActionTargetLocation_ReturnValue) == 0x000028, "Member 'BP_SkillEffect_FlareArrowShoot_C_ExecuteUbergraph_BP_SkillEffect_FlareArrowShoot::CallFunc_GetActionTargetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrowShoot_C_ExecuteUbergraph_BP_SkillEffect_FlareArrowShoot, CallFunc_FindLookAtRotation_ReturnValue) == 0x000040, "Member 'BP_SkillEffect_FlareArrowShoot_C_ExecuteUbergraph_BP_SkillEffect_FlareArrowShoot::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrowShoot_C_ExecuteUbergraph_BP_SkillEffect_FlareArrowShoot, CallFunc_K2_SetActorRotation_ReturnValue) == 0x000058, "Member 'BP_SkillEffect_FlareArrowShoot_C_ExecuteUbergraph_BP_SkillEffect_FlareArrowShoot::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");

// Function BP_SkillEffect_FlareArrowShoot.BP_SkillEffect_FlareArrowShoot_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_SkillEffect_FlareArrowShoot_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_FlareArrowShoot_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_SkillEffect_FlareArrowShoot_C_ReceiveTick");
static_assert(sizeof(BP_SkillEffect_FlareArrowShoot_C_ReceiveTick) == 0x000004, "Wrong size on BP_SkillEffect_FlareArrowShoot_C_ReceiveTick");
static_assert(offsetof(BP_SkillEffect_FlareArrowShoot_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_SkillEffect_FlareArrowShoot_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

