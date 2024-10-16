#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_SkillEffect_Unique_ThunderSword.BP_SkillEffect_Unique_ThunderSword_C.BndEvt__BP_SkillEffectShadowBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct BP_SkillEffect_Unique_ThunderSword_C_BndEvt__BP_SkillEffectShadowBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0030(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_SkillEffect_Unique_ThunderSword_C_BndEvt__BP_SkillEffectShadowBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_SkillEffect_Unique_ThunderSword_C_BndEvt__BP_SkillEffectShadowBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(BP_SkillEffect_Unique_ThunderSword_C_BndEvt__BP_SkillEffectShadowBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000118, "Wrong size on BP_SkillEffect_Unique_ThunderSword_C_BndEvt__BP_SkillEffectShadowBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_BndEvt__BP_SkillEffectShadowBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'BP_SkillEffect_Unique_ThunderSword_C_BndEvt__BP_SkillEffectShadowBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_BndEvt__BP_SkillEffectShadowBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_SkillEffect_Unique_ThunderSword_C_BndEvt__BP_SkillEffectShadowBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_BndEvt__BP_SkillEffectShadowBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_SkillEffect_Unique_ThunderSword_C_BndEvt__BP_SkillEffectShadowBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_BndEvt__BP_SkillEffectShadowBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'BP_SkillEffect_Unique_ThunderSword_C_BndEvt__BP_SkillEffectShadowBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_BndEvt__BP_SkillEffectShadowBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, Hit) == 0x000030, "Member 'BP_SkillEffect_Unique_ThunderSword_C_BndEvt__BP_SkillEffectShadowBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::Hit' has a wrong offset!");

// Function BP_SkillEffect_Unique_ThunderSword.BP_SkillEffect_Unique_ThunderSword_C.ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword
// 0x03E0 (0x03E0 - 0x0000)
struct BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1; // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue_1;                     // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_1;              // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;           // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;          // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;                    // 0x00B0(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        K2Node_Event_DeltaSecond;                          // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_TargetLocation;                 // 0x01A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x01B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x01D0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMaxSpeed_ReturnValue;                  // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_234[0x4];                                      // 0x0234(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x0238(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x0250(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0268(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x0280(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_299[0x7];                                      // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x02A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x02B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetOwnerCharacter_ReturnValue;            // 0x02D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x02D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SkillEffect_ThunderSword_Blast_C*   CallFunc_FinishSpawningActor_ReturnValue;          // 0x02E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_2;    // 0x02E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x0300(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetOwnerCharacter_ReturnValue_1;          // 0x0360(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x0368(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SkillEffect_Unique_ThunderSword_Wave_C* CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x0370(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0378(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x037C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x037D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_1;                     // 0x037E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37F[0x1];                                      // 0x037F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_CustomEvent_Velocity;                       // 0x0380(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue_1;       // 0x0398(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue_1;        // 0x03B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B1[0x3];                                      // 0x03B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast;        // 0x03B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x03B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x03C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast_1;      // 0x03C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x03C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast_1;  // 0x03D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword) == 0x000010, "Wrong alignment on BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword");
static_assert(sizeof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword) == 0x0003E0, "Wrong size on BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, Temp_bool_IsClosed_Variable) == 0x000005, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, Temp_int_Variable) == 0x000008, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable) == 0x000010, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000018, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000020, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_SelectFloat_ReturnValue) == 0x000028, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_FClamp_ReturnValue) == 0x000030, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, Temp_bool_Has_Been_Initd_Variable_1) == 0x000038, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_GetFloatValue_ReturnValue) == 0x00003C, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000040, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1) == 0x000048, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000050, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_SelectFloat_ReturnValue_1) == 0x000058, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000060, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_FClamp_ReturnValue_1) == 0x000068, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_GetFloatValue_ReturnValue_1) == 0x000070, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_GetFloatValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000078, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, K2Node_ComponentBoundEvent_HitComponent) == 0x000080, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, K2Node_ComponentBoundEvent_OtherActor) == 0x000088, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, K2Node_ComponentBoundEvent_OtherComp) == 0x000090, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, K2Node_ComponentBoundEvent_NormalImpulse) == 0x000098, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, K2Node_ComponentBoundEvent_Hit) == 0x0000B0, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, K2Node_Event_DeltaSecond) == 0x000198, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::K2Node_Event_DeltaSecond' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, K2Node_CustomEvent_TargetLocation) == 0x0001A0, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::K2Node_CustomEvent_TargetLocation' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x0001B8, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_MakeTransform_ReturnValue) == 0x0001D0, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_GetMaxSpeed_ReturnValue) == 0x000230, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_GetMaxSpeed_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000238, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000250, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000268, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x000280, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_K2_SetActorRotation_ReturnValue) == 0x000298, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_Normal_ReturnValue) == 0x0002A0, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0002B8, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_GetOwnerCharacter_ReturnValue) == 0x0002D0, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_GetOwnerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0002D8, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_FinishSpawningActor_ReturnValue) == 0x0002E0, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_K2_GetComponentLocation_ReturnValue_2) == 0x0002E8, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_K2_GetComponentLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_MakeTransform_ReturnValue_1) == 0x000300, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_GetOwnerCharacter_ReturnValue_1) == 0x000360, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_GetOwnerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1) == 0x000368, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_FinishSpawningActor_ReturnValue_1) == 0x000370, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_FinishSpawningActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_Subtract_IntInt_ReturnValue) == 0x000378, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00037C, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_IsValid_ReturnValue) == 0x00037D, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, Temp_bool_IsClosed_Variable_1) == 0x00037E, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, K2Node_CustomEvent_Velocity) == 0x000380, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::K2Node_CustomEvent_Velocity' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_Conv_VectorToRotator_ReturnValue_1) == 0x000398, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_Conv_VectorToRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_K2_SetActorRotation_ReturnValue_1) == 0x0003B0, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_K2_SetActorRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_GetFloatValue_InTime_ImplicitCast) == 0x0003B4, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_GetFloatValue_InTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0003B8, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_SetVariableFloat_InValue_ImplicitCast) == 0x0003C0, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_SetVariableFloat_InValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_GetFloatValue_InTime_ImplicitCast_1) == 0x0003C4, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_GetFloatValue_InTime_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1) == 0x0003C8, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword, CallFunc_SetVariableFloat_InValue_ImplicitCast_1) == 0x0003D0, "Member 'BP_SkillEffect_Unique_ThunderSword_C_ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword::CallFunc_SetVariableFloat_InValue_ImplicitCast_1' has a wrong offset!");

// Function BP_SkillEffect_Unique_ThunderSword.BP_SkillEffect_Unique_ThunderSword_C.FadeOutEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_SkillEffect_Unique_ThunderSword_C_FadeOutEffect final
{
public:
	double                                        DeltaSecond;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_Unique_ThunderSword_C_FadeOutEffect) == 0x000008, "Wrong alignment on BP_SkillEffect_Unique_ThunderSword_C_FadeOutEffect");
static_assert(sizeof(BP_SkillEffect_Unique_ThunderSword_C_FadeOutEffect) == 0x000008, "Wrong size on BP_SkillEffect_Unique_ThunderSword_C_FadeOutEffect");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_FadeOutEffect, DeltaSecond) == 0x000000, "Member 'BP_SkillEffect_Unique_ThunderSword_C_FadeOutEffect::DeltaSecond' has a wrong offset!");

// Function BP_SkillEffect_Unique_ThunderSword.BP_SkillEffect_Unique_ThunderSword_C.Launch
// 0x0018 (0x0018 - 0x0000)
struct BP_SkillEffect_Unique_ThunderSword_C_Launch final
{
public:
	struct FVector                                TargetLocation;                                    // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_Unique_ThunderSword_C_Launch) == 0x000008, "Wrong alignment on BP_SkillEffect_Unique_ThunderSword_C_Launch");
static_assert(sizeof(BP_SkillEffect_Unique_ThunderSword_C_Launch) == 0x000018, "Wrong size on BP_SkillEffect_Unique_ThunderSword_C_Launch");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_Launch, TargetLocation) == 0x000000, "Member 'BP_SkillEffect_Unique_ThunderSword_C_Launch::TargetLocation' has a wrong offset!");

// Function BP_SkillEffect_Unique_ThunderSword.BP_SkillEffect_Unique_ThunderSword_C.LaunchByVector
// 0x0018 (0x0018 - 0x0000)
struct BP_SkillEffect_Unique_ThunderSword_C_LaunchByVector final
{
public:
	struct FVector                                Velocity;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_Unique_ThunderSword_C_LaunchByVector) == 0x000008, "Wrong alignment on BP_SkillEffect_Unique_ThunderSword_C_LaunchByVector");
static_assert(sizeof(BP_SkillEffect_Unique_ThunderSword_C_LaunchByVector) == 0x000018, "Wrong size on BP_SkillEffect_Unique_ThunderSword_C_LaunchByVector");
static_assert(offsetof(BP_SkillEffect_Unique_ThunderSword_C_LaunchByVector, Velocity) == 0x000000, "Member 'BP_SkillEffect_Unique_ThunderSword_C_LaunchByVector::Velocity' has a wrong offset!");

}

