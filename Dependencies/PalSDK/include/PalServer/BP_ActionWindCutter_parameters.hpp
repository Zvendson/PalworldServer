#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function BP_ActionWindCutter.BP_ActionWindCutter_C.ExecuteUbergraph_BP_ActionWindCutter
// 0x00E8 (0x00E8 - 0x0000)
struct BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerControlled_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AActor* Bullet)>         K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetPredictedTargetLocation_Location;      // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalSkillEffectBase*                    K2Node_Event_Effect;                               // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_Bullet;                         // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SkillEffect_WindCutterShot_C*       K2Node_DynamicCast_AsBP_Skill_Effect_Wind_Cutter_Shot; // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           CallFunc_GetComponentByClass_ReturnValue;          // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_MaxSpeed_ImplicitCast;          // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter) == 0x000008, "Wrong alignment on BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter");
static_assert(sizeof(BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter) == 0x0000E8, "Wrong size on BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter");
static_assert(offsetof(BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter, EntryPoint) == 0x000000, "Member 'BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter, CallFunc_IsPlayerControlled_ReturnValue) == 0x000010, "Member 'BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter::CallFunc_IsPlayerControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter, K2Node_Event_DeltaTime) == 0x000024, "Member 'BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter, CallFunc_GetPredictedTargetLocation_Location) == 0x000028, "Member 'BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter::CallFunc_GetPredictedTargetLocation_Location' has a wrong offset!");
static_assert(offsetof(BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000040, "Member 'BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter, K2Node_Event_Effect) == 0x000058, "Member 'BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter::K2Node_Event_Effect' has a wrong offset!");
static_assert(offsetof(BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter, K2Node_CustomEvent_Bullet) == 0x000060, "Member 'BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter::K2Node_CustomEvent_Bullet' has a wrong offset!");
static_assert(offsetof(BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter, K2Node_DynamicCast_AsBP_Skill_Effect_Wind_Cutter_Shot) == 0x000068, "Member 'BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter::K2Node_DynamicCast_AsBP_Skill_Effect_Wind_Cutter_Shot' has a wrong offset!");
static_assert(offsetof(BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000078, "Member 'BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000090, "Member 'BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter, CallFunc_Normal_ReturnValue) == 0x0000A8, "Member 'BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter, CallFunc_GetComponentByClass_ReturnValue) == 0x0000C0, "Member 'BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0000C8, "Member 'BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter, K2Node_VariableSet_MaxSpeed_ImplicitCast) == 0x0000E0, "Member 'BP_ActionWindCutter_C_ExecuteUbergraph_BP_ActionWindCutter::K2Node_VariableSet_MaxSpeed_ImplicitCast' has a wrong offset!");

// Function BP_ActionWindCutter.BP_ActionWindCutter_C.OnSpawnBullet
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionWindCutter_C_OnSpawnBullet final
{
public:
	class AActor*                                 Bullet;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionWindCutter_C_OnSpawnBullet) == 0x000008, "Wrong alignment on BP_ActionWindCutter_C_OnSpawnBullet");
static_assert(sizeof(BP_ActionWindCutter_C_OnSpawnBullet) == 0x000008, "Wrong size on BP_ActionWindCutter_C_OnSpawnBullet");
static_assert(offsetof(BP_ActionWindCutter_C_OnSpawnBullet, Bullet) == 0x000000, "Member 'BP_ActionWindCutter_C_OnSpawnBullet::Bullet' has a wrong offset!");

// Function BP_ActionWindCutter.BP_ActionWindCutter_C.OnSpawnEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionWindCutter_C_OnSpawnEffect final
{
public:
	class APalSkillEffectBase*                    Effect_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionWindCutter_C_OnSpawnEffect) == 0x000008, "Wrong alignment on BP_ActionWindCutter_C_OnSpawnEffect");
static_assert(sizeof(BP_ActionWindCutter_C_OnSpawnEffect) == 0x000008, "Wrong size on BP_ActionWindCutter_C_OnSpawnEffect");
static_assert(offsetof(BP_ActionWindCutter_C_OnSpawnEffect, Effect_0) == 0x000000, "Member 'BP_ActionWindCutter_C_OnSpawnEffect::Effect_0' has a wrong offset!");

// Function BP_ActionWindCutter.BP_ActionWindCutter_C.Test
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionWindCutter_C_Test final
{
public:
	class AActor*                                 Bullet;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionWindCutter_C_Test) == 0x000008, "Wrong alignment on BP_ActionWindCutter_C_Test");
static_assert(sizeof(BP_ActionWindCutter_C_Test) == 0x000008, "Wrong size on BP_ActionWindCutter_C_Test");
static_assert(offsetof(BP_ActionWindCutter_C_Test, Bullet) == 0x000000, "Member 'BP_ActionWindCutter_C_Test::Bullet' has a wrong offset!");

// Function BP_ActionWindCutter.BP_ActionWindCutter_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_ActionWindCutter_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionWindCutter_C_TickAction) == 0x000004, "Wrong alignment on BP_ActionWindCutter_C_TickAction");
static_assert(sizeof(BP_ActionWindCutter_C_TickAction) == 0x000004, "Wrong size on BP_ActionWindCutter_C_TickAction");
static_assert(offsetof(BP_ActionWindCutter_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_ActionWindCutter_C_TickAction::DeltaTime' has a wrong offset!");

}

