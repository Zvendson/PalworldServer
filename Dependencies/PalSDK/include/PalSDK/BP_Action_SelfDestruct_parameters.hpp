#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_Action_SelfDestruct.BP_Action_SelfDestruct_C.BlowAndKillSelf
// 0x00A0 (0x00A0 - 0x0000)
struct BP_Action_SelfDestruct_C_BlowAndKillSelf final
{
public:
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalWazaID                                    CallFunc_GetWazaID_ReturnValue;                    // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18[0x8];                                       // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0020(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_TransformDirection_ReturnValue;           // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_SelfDestruct_C_BlowAndKillSelf) == 0x000010, "Wrong alignment on BP_Action_SelfDestruct_C_BlowAndKillSelf");
static_assert(sizeof(BP_Action_SelfDestruct_C_BlowAndKillSelf) == 0x0000A0, "Wrong size on BP_Action_SelfDestruct_C_BlowAndKillSelf");
static_assert(offsetof(BP_Action_SelfDestruct_C_BlowAndKillSelf, CallFunc_GetActionCharacter_ReturnValue) == 0x000000, "Member 'BP_Action_SelfDestruct_C_BlowAndKillSelf::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_BlowAndKillSelf, CallFunc_GetWazaID_ReturnValue) == 0x000008, "Member 'BP_Action_SelfDestruct_C_BlowAndKillSelf::CallFunc_GetWazaID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_BlowAndKillSelf, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000010, "Member 'BP_Action_SelfDestruct_C_BlowAndKillSelf::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_BlowAndKillSelf, CallFunc_GetTransform_ReturnValue) == 0x000020, "Member 'BP_Action_SelfDestruct_C_BlowAndKillSelf::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_BlowAndKillSelf, CallFunc_TransformDirection_ReturnValue) == 0x000080, "Member 'BP_Action_SelfDestruct_C_BlowAndKillSelf::CallFunc_TransformDirection_ReturnValue' has a wrong offset!");

// Function BP_Action_SelfDestruct.BP_Action_SelfDestruct_C.ExecuteUbergraph_BP_Action_SelfDestruct
// 0x00D0 (0x00D0 - 0x0000)
struct BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetNearestEnemyByLocation_OutMinRange;    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetNearestEnemyByLocation_ReturnValue;    // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTime;                            // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_3;         // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_82[0x6];                                       // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_4;         // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalVisualEffectDynamicParameter       CallFunc_MakeVisualEffectParameter_PalVisualEffectDynamicParameter; // 0x0090(0x0010)()
	class UPalVisualEffectBase*                   CallFunc_AddVisualEffect_Local_ReturnValue;        // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue;              // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetMaxAccelerationMultiplier_speed_ImplicitCast; // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast; // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetYawRotatorMultiplier_rate_ImplicitCast; // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct) == 0x000008, "Wrong alignment on BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct");
static_assert(sizeof(BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct) == 0x0000D0, "Wrong size on BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct");
static_assert(offsetof(BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct, EntryPoint) == 0x000000, "Member 'BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000028, "Member 'BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct, CallFunc_GetNearestEnemyByLocation_OutMinRange) == 0x000030, "Member 'BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct::CallFunc_GetNearestEnemyByLocation_OutMinRange' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct, CallFunc_GetNearestEnemyByLocation_ReturnValue) == 0x000038, "Member 'BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct::CallFunc_GetNearestEnemyByLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct, CallFunc_GetActorForwardVector_ReturnValue) == 0x000040, "Member 'BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000058, "Member 'BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct, K2Node_Event_DeltaTime) == 0x00005C, "Member 'BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000060, "Member 'BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct, CallFunc_GetActionCharacter_ReturnValue_3) == 0x000068, "Member 'BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct::CallFunc_GetActionCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct, CallFunc_GetComponentByClass_ReturnValue) == 0x000070, "Member 'BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000078, "Member 'BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct, CallFunc_IsValid_ReturnValue_1) == 0x000081, "Member 'BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct, CallFunc_GetActionCharacter_ReturnValue_4) == 0x000088, "Member 'BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct::CallFunc_GetActionCharacter_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct, CallFunc_MakeVisualEffectParameter_PalVisualEffectDynamicParameter) == 0x000090, "Member 'BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct::CallFunc_MakeVisualEffectParameter_PalVisualEffectDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct, CallFunc_AddVisualEffect_Local_ReturnValue) == 0x0000A0, "Member 'BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct::CallFunc_AddVisualEffect_Local_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct, CallFunc_GetActionTarget_ReturnValue) == 0x0000A8, "Member 'BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct::CallFunc_GetActionTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct, CallFunc_IsValid_ReturnValue_2) == 0x0000B0, "Member 'BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct, CallFunc_Less_DoubleDouble_A_ImplicitCast) == 0x0000B8, "Member 'BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct::CallFunc_Less_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct, CallFunc_SetMaxAccelerationMultiplier_speed_ImplicitCast) == 0x0000C0, "Member 'BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct::CallFunc_SetMaxAccelerationMultiplier_speed_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct, CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast) == 0x0000C4, "Member 'BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct::CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct, CallFunc_SetYawRotatorMultiplier_rate_ImplicitCast) == 0x0000C8, "Member 'BP_Action_SelfDestruct_C_ExecuteUbergraph_BP_Action_SelfDestruct::CallFunc_SetYawRotatorMultiplier_rate_ImplicitCast' has a wrong offset!");

// Function BP_Action_SelfDestruct.BP_Action_SelfDestruct_C.MakeVisualEffectParameter
// 0x0060 (0x0060 - 0x0000)
struct BP_Action_SelfDestruct_C_MakeVisualEffectParameter final
{
public:
	struct FPalVisualEffectDynamicParameter       PalVisualEffectDynamicParameter;                   // 0x0000(0x0010)(Parm, OutParm)
	struct FPalVisualEffectDynamicParameterFloat  K2Node_MakeStruct_PalVisualEffectDynamicParameterFloat; // 0x0010(0x000C)(NoDestructor)
	struct FPalVisualEffectDynamicParameterFloat  K2Node_MakeStruct_PalVisualEffectDynamicParameterFloat_1; // 0x001C(0x000C)(NoDestructor)
	struct FPalVisualEffectDynamicParameterFloat  K2Node_MakeStruct_PalVisualEffectDynamicParameterFloat_2; // 0x0028(0x000C)(NoDestructor)
	struct FPalVisualEffectDynamicParameterFloat  K2Node_MakeStruct_PalVisualEffectDynamicParameterFloat_3; // 0x0034(0x000C)(NoDestructor)
	TArray<struct FPalVisualEffectDynamicParameterFloat> K2Node_MakeArray_Array;                            // 0x0040(0x0010)(ReferenceParm)
	struct FPalVisualEffectDynamicParameter       K2Node_MakeStruct_PalVisualEffectDynamicParameter; // 0x0050(0x0010)()
};
static_assert(alignof(BP_Action_SelfDestruct_C_MakeVisualEffectParameter) == 0x000008, "Wrong alignment on BP_Action_SelfDestruct_C_MakeVisualEffectParameter");
static_assert(sizeof(BP_Action_SelfDestruct_C_MakeVisualEffectParameter) == 0x000060, "Wrong size on BP_Action_SelfDestruct_C_MakeVisualEffectParameter");
static_assert(offsetof(BP_Action_SelfDestruct_C_MakeVisualEffectParameter, PalVisualEffectDynamicParameter) == 0x000000, "Member 'BP_Action_SelfDestruct_C_MakeVisualEffectParameter::PalVisualEffectDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_MakeVisualEffectParameter, K2Node_MakeStruct_PalVisualEffectDynamicParameterFloat) == 0x000010, "Member 'BP_Action_SelfDestruct_C_MakeVisualEffectParameter::K2Node_MakeStruct_PalVisualEffectDynamicParameterFloat' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_MakeVisualEffectParameter, K2Node_MakeStruct_PalVisualEffectDynamicParameterFloat_1) == 0x00001C, "Member 'BP_Action_SelfDestruct_C_MakeVisualEffectParameter::K2Node_MakeStruct_PalVisualEffectDynamicParameterFloat_1' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_MakeVisualEffectParameter, K2Node_MakeStruct_PalVisualEffectDynamicParameterFloat_2) == 0x000028, "Member 'BP_Action_SelfDestruct_C_MakeVisualEffectParameter::K2Node_MakeStruct_PalVisualEffectDynamicParameterFloat_2' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_MakeVisualEffectParameter, K2Node_MakeStruct_PalVisualEffectDynamicParameterFloat_3) == 0x000034, "Member 'BP_Action_SelfDestruct_C_MakeVisualEffectParameter::K2Node_MakeStruct_PalVisualEffectDynamicParameterFloat_3' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_MakeVisualEffectParameter, K2Node_MakeArray_Array) == 0x000040, "Member 'BP_Action_SelfDestruct_C_MakeVisualEffectParameter::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_MakeVisualEffectParameter, K2Node_MakeStruct_PalVisualEffectDynamicParameter) == 0x000050, "Member 'BP_Action_SelfDestruct_C_MakeVisualEffectParameter::K2Node_MakeStruct_PalVisualEffectDynamicParameter' has a wrong offset!");

// Function BP_Action_SelfDestruct.BP_Action_SelfDestruct_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_Action_SelfDestruct_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_SelfDestruct_C_TickAction) == 0x000004, "Wrong alignment on BP_Action_SelfDestruct_C_TickAction");
static_assert(sizeof(BP_Action_SelfDestruct_C_TickAction) == 0x000004, "Wrong size on BP_Action_SelfDestruct_C_TickAction");
static_assert(offsetof(BP_Action_SelfDestruct_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_Action_SelfDestruct_C_TickAction::DeltaTime' has a wrong offset!");

// Function BP_Action_SelfDestruct.BP_Action_SelfDestruct_C.UpdateVelocity
// 0x0150 (0x0150 - 0x0000)
struct BP_Action_SelfDestruct_C_UpdateVelocity final
{
public:
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue_1;        // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue_2;        // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue;                        // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue_3;        // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue_4;        // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_2;      // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0108(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0120(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_3;      // 0x0138(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_SelfDestruct_C_UpdateVelocity) == 0x000008, "Wrong alignment on BP_Action_SelfDestruct_C_UpdateVelocity");
static_assert(sizeof(BP_Action_SelfDestruct_C_UpdateVelocity) == 0x000150, "Wrong size on BP_Action_SelfDestruct_C_UpdateVelocity");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateVelocity, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000000, "Member 'BP_Action_SelfDestruct_C_UpdateVelocity::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateVelocity, CallFunc_Conv_DoubleToVector_ReturnValue_1) == 0x000018, "Member 'BP_Action_SelfDestruct_C_UpdateVelocity::CallFunc_Conv_DoubleToVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateVelocity, CallFunc_Conv_DoubleToVector_ReturnValue_2) == 0x000030, "Member 'BP_Action_SelfDestruct_C_UpdateVelocity::CallFunc_Conv_DoubleToVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateVelocity, CallFunc_GetActionCharacter_ReturnValue) == 0x000048, "Member 'BP_Action_SelfDestruct_C_UpdateVelocity::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateVelocity, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000050, "Member 'BP_Action_SelfDestruct_C_UpdateVelocity::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateVelocity, CallFunc_GetComponentByClass_ReturnValue) == 0x000068, "Member 'BP_Action_SelfDestruct_C_UpdateVelocity::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateVelocity, CallFunc_GetActorForwardVector_ReturnValue) == 0x000070, "Member 'BP_Action_SelfDestruct_C_UpdateVelocity::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateVelocity, CallFunc_VSize_ReturnValue) == 0x000088, "Member 'BP_Action_SelfDestruct_C_UpdateVelocity::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateVelocity, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000090, "Member 'BP_Action_SelfDestruct_C_UpdateVelocity::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateVelocity, CallFunc_Conv_DoubleToVector_ReturnValue_3) == 0x0000A8, "Member 'BP_Action_SelfDestruct_C_UpdateVelocity::CallFunc_Conv_DoubleToVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateVelocity, CallFunc_Conv_DoubleToVector_ReturnValue_4) == 0x0000C0, "Member 'BP_Action_SelfDestruct_C_UpdateVelocity::CallFunc_Conv_DoubleToVector_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateVelocity, CallFunc_Multiply_VectorVector_ReturnValue_1) == 0x0000D8, "Member 'BP_Action_SelfDestruct_C_UpdateVelocity::CallFunc_Multiply_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateVelocity, CallFunc_Multiply_VectorVector_ReturnValue_2) == 0x0000F0, "Member 'BP_Action_SelfDestruct_C_UpdateVelocity::CallFunc_Multiply_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateVelocity, CallFunc_Add_VectorVector_ReturnValue) == 0x000108, "Member 'BP_Action_SelfDestruct_C_UpdateVelocity::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateVelocity, CallFunc_Normal_ReturnValue) == 0x000120, "Member 'BP_Action_SelfDestruct_C_UpdateVelocity::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateVelocity, CallFunc_Multiply_VectorVector_ReturnValue_3) == 0x000138, "Member 'BP_Action_SelfDestruct_C_UpdateVelocity::CallFunc_Multiply_VectorVector_ReturnValue_3' has a wrong offset!");

// Function BP_Action_SelfDestruct.BP_Action_SelfDestruct_C.UpdateYaw
// 0x0110 (0x0110 - 0x0000)
struct BP_Action_SelfDestruct_C_UpdateYaw final
{
public:
	struct FRotator                               TargetRotation;                                    // 0x0000(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CurrentRotation;                                   // 0x0018(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          StopUpdateYaw;                                     // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_RInterpTo_ReturnValue;                    // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll_1;                      // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_RInterpTo_DeltaTime_ImplicitCast;         // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_SelfDestruct_C_UpdateYaw) == 0x000008, "Wrong alignment on BP_Action_SelfDestruct_C_UpdateYaw");
static_assert(sizeof(BP_Action_SelfDestruct_C_UpdateYaw) == 0x000110, "Wrong size on BP_Action_SelfDestruct_C_UpdateYaw");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateYaw, TargetRotation) == 0x000000, "Member 'BP_Action_SelfDestruct_C_UpdateYaw::TargetRotation' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateYaw, CurrentRotation) == 0x000018, "Member 'BP_Action_SelfDestruct_C_UpdateYaw::CurrentRotation' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateYaw, StopUpdateYaw) == 0x000030, "Member 'BP_Action_SelfDestruct_C_UpdateYaw::StopUpdateYaw' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateYaw, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000038, "Member 'BP_Action_SelfDestruct_C_UpdateYaw::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateYaw, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'BP_Action_SelfDestruct_C_UpdateYaw::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateYaw, CallFunc_GetActionCharacter_ReturnValue) == 0x000058, "Member 'BP_Action_SelfDestruct_C_UpdateYaw::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateYaw, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000060, "Member 'BP_Action_SelfDestruct_C_UpdateYaw::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateYaw, CallFunc_RInterpTo_ReturnValue) == 0x000068, "Member 'BP_Action_SelfDestruct_C_UpdateYaw::CallFunc_RInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateYaw, CallFunc_K2_SetActorRotation_ReturnValue) == 0x000080, "Member 'BP_Action_SelfDestruct_C_UpdateYaw::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateYaw, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000088, "Member 'BP_Action_SelfDestruct_C_UpdateYaw::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateYaw, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000090, "Member 'BP_Action_SelfDestruct_C_UpdateYaw::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateYaw, CallFunc_K2_GetActorRotation_ReturnValue) == 0x0000A8, "Member 'BP_Action_SelfDestruct_C_UpdateYaw::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateYaw, CallFunc_FindLookAtRotation_ReturnValue) == 0x0000C0, "Member 'BP_Action_SelfDestruct_C_UpdateYaw::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateYaw, CallFunc_BreakRotator_Roll) == 0x0000D8, "Member 'BP_Action_SelfDestruct_C_UpdateYaw::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateYaw, CallFunc_BreakRotator_Pitch) == 0x0000DC, "Member 'BP_Action_SelfDestruct_C_UpdateYaw::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateYaw, CallFunc_BreakRotator_Yaw) == 0x0000E0, "Member 'BP_Action_SelfDestruct_C_UpdateYaw::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateYaw, CallFunc_BreakRotator_Roll_1) == 0x0000E4, "Member 'BP_Action_SelfDestruct_C_UpdateYaw::CallFunc_BreakRotator_Roll_1' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateYaw, CallFunc_BreakRotator_Pitch_1) == 0x0000E8, "Member 'BP_Action_SelfDestruct_C_UpdateYaw::CallFunc_BreakRotator_Pitch_1' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateYaw, CallFunc_BreakRotator_Yaw_1) == 0x0000EC, "Member 'BP_Action_SelfDestruct_C_UpdateYaw::CallFunc_BreakRotator_Yaw_1' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateYaw, CallFunc_MakeRotator_ReturnValue) == 0x0000F0, "Member 'BP_Action_SelfDestruct_C_UpdateYaw::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SelfDestruct_C_UpdateYaw, CallFunc_RInterpTo_DeltaTime_ImplicitCast) == 0x000108, "Member 'BP_Action_SelfDestruct_C_UpdateYaw::CallFunc_RInterpTo_DeltaTime_ImplicitCast' has a wrong offset!");

}

