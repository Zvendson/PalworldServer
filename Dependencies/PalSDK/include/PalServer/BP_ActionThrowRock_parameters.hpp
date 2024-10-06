#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function BP_ActionThrowRock.BP_ActionThrowRock_C.ExecuteUbergraph_BP_ActionThrowRock
// 0x0460 (0x0460 - 0x0000)
struct BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetTargetLocation_ReturnValue;            // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalSkillEffectBase*                    K2Node_Event_Effect;                               // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSkillEffectSpawnParameter             CallFunc_Array_Get_Item;                           // 0x0030(0x0038)(NoDestructor)
	struct FSkillEffectSpawnParameter             CallFunc_Array_Get_Item_1;                         // 0x0068(0x0038)(NoDestructor)
	class APalSkillEffectBase*                    CallFunc_FindEffectByClass_Effect;                 // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalSkillEffectBase*                    CallFunc_FindEffectByClass_Effect_1;               // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_DynamicCast_AsPrimitive_Component;          // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_SkillEffect_C>    K2Node_DynamicCast_AsBPI_Skill_Effect;             // 0x00C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_SkillEffect_C>    K2Node_DynamicCast_AsBPI_Skill_Effect_1;           // 0x00E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SkillEffect_ThrowRockBullet_C*      K2Node_DynamicCast_AsBP_Skill_Effect_Throw_Rock_Bullet; // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0108(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x3];                                      // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0124(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_134[0x4];                                      // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0140(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0148(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue; // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_164[0x4];                                      // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0168(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue;                        // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                          CallFunc_GetRandomStream_ReturnValue;              // 0x0190(0x0008)(ZeroConstructor, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0198(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_RandomRotatorFromStream_ReturnValue;      // 0x01B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x01C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetTargetLocation_ReturnValue_1;          // 0x01E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue_1;                      // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0200(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerControlled_ReturnValue;           // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20A[0x6];                                      // 0x020A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetPredictedTargetLocation_Location;      // 0x0210(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Select_Default;                             // 0x0228(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x0240(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity; // 0x0258(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue; // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_271[0x7];                                      // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x0278(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_AddLocalRotation_SweepHitResult;       // 0x0280(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0368(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x0450(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_454[0x4];                                      // 0x0454(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_MoveRock_ElapsedTime_ImplicitCast;        // 0x0458(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock) == 0x000008, "Wrong alignment on BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock");
static_assert(sizeof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock) == 0x000460, "Wrong size on BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, EntryPoint) == 0x000000, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, CallFunc_GetTargetLocation_ReturnValue) == 0x000008, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::CallFunc_GetTargetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, K2Node_Event_Effect) == 0x000020, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::K2Node_Event_Effect' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, K2Node_Event_DeltaTime) == 0x000028, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, CallFunc_Array_Get_Item_1) == 0x000068, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, CallFunc_FindEffectByClass_Effect) == 0x0000A0, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::CallFunc_FindEffectByClass_Effect' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, CallFunc_K2_GetRootComponent_ReturnValue) == 0x0000A8, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, CallFunc_FindEffectByClass_Effect_1) == 0x0000B0, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::CallFunc_FindEffectByClass_Effect_1' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, K2Node_DynamicCast_AsPrimitive_Component) == 0x0000B8, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::K2Node_DynamicCast_AsPrimitive_Component' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, K2Node_DynamicCast_bSuccess) == 0x0000C0, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, K2Node_DynamicCast_AsBPI_Skill_Effect) == 0x0000C8, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::K2Node_DynamicCast_AsBPI_Skill_Effect' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, K2Node_DynamicCast_bSuccess_1) == 0x0000D8, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, K2Node_DynamicCast_AsBPI_Skill_Effect_1) == 0x0000E0, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::K2Node_DynamicCast_AsBPI_Skill_Effect_1' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, K2Node_DynamicCast_bSuccess_2) == 0x0000F0, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, K2Node_DynamicCast_AsBP_Skill_Effect_Throw_Rock_Bullet) == 0x0000F8, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::K2Node_DynamicCast_AsBP_Skill_Effect_Throw_Rock_Bullet' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, K2Node_DynamicCast_bSuccess_3) == 0x000100, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000108, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, Temp_bool_Variable) == 0x000120, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, K2Node_CreateDelegate_OutputDelegate) == 0x000124, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, CallFunc_GetActionCharacter_ReturnValue) == 0x000138, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000140, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000148, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue) == 0x000160, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000168, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, CallFunc_VSize_ReturnValue) == 0x000180, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000188, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, CallFunc_GetRandomStream_ReturnValue) == 0x000190, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::CallFunc_GetRandomStream_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000198, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, CallFunc_RandomRotatorFromStream_ReturnValue) == 0x0001B0, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::CallFunc_RandomRotatorFromStream_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x0001C8, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, CallFunc_GetTargetLocation_ReturnValue_1) == 0x0001E0, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::CallFunc_GetTargetLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, CallFunc_VSize_ReturnValue_1) == 0x0001F8, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::CallFunc_VSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000200, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000208, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, CallFunc_IsPlayerControlled_ReturnValue) == 0x000209, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::CallFunc_IsPlayerControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, CallFunc_GetPredictedTargetLocation_Location) == 0x000210, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::CallFunc_GetPredictedTargetLocation_Location' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, K2Node_Select_Default) == 0x000228, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x000240, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity) == 0x000258, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue) == 0x000270, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, CallFunc_GetComponentByClass_ReturnValue) == 0x000278, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, CallFunc_K2_AddLocalRotation_SweepHitResult) == 0x000280, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::CallFunc_K2_AddLocalRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000368, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000450, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock, CallFunc_MoveRock_ElapsedTime_ImplicitCast) == 0x000458, "Member 'BP_ActionThrowRock_C_ExecuteUbergraph_BP_ActionThrowRock::CallFunc_MoveRock_ElapsedTime_ImplicitCast' has a wrong offset!");

// Function BP_ActionThrowRock.BP_ActionThrowRock_C.MoveRock
// 0x0150 (0x0150 - 0x0000)
struct BP_ActionThrowRock_C_MoveRock final
{
public:
	double                                        ElapsedTime;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_NormalizeToRange_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VEase_ReturnValue;                        // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0060(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_149[0x3];                                      // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_VEase_Alpha_ImplicitCast;                 // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionThrowRock_C_MoveRock) == 0x000008, "Wrong alignment on BP_ActionThrowRock_C_MoveRock");
static_assert(sizeof(BP_ActionThrowRock_C_MoveRock) == 0x000150, "Wrong size on BP_ActionThrowRock_C_MoveRock");
static_assert(offsetof(BP_ActionThrowRock_C_MoveRock, ElapsedTime) == 0x000000, "Member 'BP_ActionThrowRock_C_MoveRock::ElapsedTime' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_MoveRock, CallFunc_MakeVector_ReturnValue) == 0x000008, "Member 'BP_ActionThrowRock_C_MoveRock::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_MoveRock, CallFunc_Add_VectorVector_ReturnValue) == 0x000020, "Member 'BP_ActionThrowRock_C_MoveRock::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_MoveRock, CallFunc_NormalizeToRange_ReturnValue) == 0x000038, "Member 'BP_ActionThrowRock_C_MoveRock::CallFunc_NormalizeToRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_MoveRock, CallFunc_VEase_ReturnValue) == 0x000040, "Member 'BP_ActionThrowRock_C_MoveRock::CallFunc_VEase_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_MoveRock, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'BP_ActionThrowRock_C_MoveRock::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_MoveRock, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000060, "Member 'BP_ActionThrowRock_C_MoveRock::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_MoveRock, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000148, "Member 'BP_ActionThrowRock_C_MoveRock::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionThrowRock_C_MoveRock, CallFunc_VEase_Alpha_ImplicitCast) == 0x00014C, "Member 'BP_ActionThrowRock_C_MoveRock::CallFunc_VEase_Alpha_ImplicitCast' has a wrong offset!");

// Function BP_ActionThrowRock.BP_ActionThrowRock_C.OnSpawnEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionThrowRock_C_OnSpawnEffect final
{
public:
	class APalSkillEffectBase*                    Effect_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionThrowRock_C_OnSpawnEffect) == 0x000008, "Wrong alignment on BP_ActionThrowRock_C_OnSpawnEffect");
static_assert(sizeof(BP_ActionThrowRock_C_OnSpawnEffect) == 0x000008, "Wrong size on BP_ActionThrowRock_C_OnSpawnEffect");
static_assert(offsetof(BP_ActionThrowRock_C_OnSpawnEffect, Effect_0) == 0x000000, "Member 'BP_ActionThrowRock_C_OnSpawnEffect::Effect_0' has a wrong offset!");

// Function BP_ActionThrowRock.BP_ActionThrowRock_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_ActionThrowRock_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionThrowRock_C_TickAction) == 0x000004, "Wrong alignment on BP_ActionThrowRock_C_TickAction");
static_assert(sizeof(BP_ActionThrowRock_C_TickAction) == 0x000004, "Wrong size on BP_ActionThrowRock_C_TickAction");
static_assert(offsetof(BP_ActionThrowRock_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_ActionThrowRock_C_TickAction::DeltaTime' has a wrong offset!");

}

