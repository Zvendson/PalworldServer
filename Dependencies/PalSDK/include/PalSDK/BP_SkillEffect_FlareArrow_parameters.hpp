#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function BP_SkillEffect_FlareArrow.BP_SkillEffect_FlareArrow_C.BndEvt__BP_SkillEffect_FlareArrow_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature
// 0x00E8 (0x00E8 - 0x0000)
struct BP_SkillEffect_FlareArrow_C_BndEvt__BP_SkillEffect_FlareArrow_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature final
{
public:
	class AActor*                                 Defencer;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDamageInfo                         DamageInfo;                                        // 0x0008(0x00D0)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         HitCount;                                          // 0x00D8(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    AttackerComponent;                                 // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_FlareArrow_C_BndEvt__BP_SkillEffect_FlareArrow_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature) == 0x000008, "Wrong alignment on BP_SkillEffect_FlareArrow_C_BndEvt__BP_SkillEffect_FlareArrow_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature");
static_assert(sizeof(BP_SkillEffect_FlareArrow_C_BndEvt__BP_SkillEffect_FlareArrow_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature) == 0x0000E8, "Wrong size on BP_SkillEffect_FlareArrow_C_BndEvt__BP_SkillEffect_FlareArrow_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_BndEvt__BP_SkillEffect_FlareArrow_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature, Defencer) == 0x000000, "Member 'BP_SkillEffect_FlareArrow_C_BndEvt__BP_SkillEffect_FlareArrow_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature::Defencer' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_BndEvt__BP_SkillEffect_FlareArrow_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature, DamageInfo) == 0x000008, "Member 'BP_SkillEffect_FlareArrow_C_BndEvt__BP_SkillEffect_FlareArrow_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature::DamageInfo' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_BndEvt__BP_SkillEffect_FlareArrow_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature, HitCount) == 0x0000D8, "Member 'BP_SkillEffect_FlareArrow_C_BndEvt__BP_SkillEffect_FlareArrow_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature::HitCount' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_BndEvt__BP_SkillEffect_FlareArrow_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature, AttackerComponent) == 0x0000E0, "Member 'BP_SkillEffect_FlareArrow_C_BndEvt__BP_SkillEffect_FlareArrow_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature::AttackerComponent' has a wrong offset!");

// Function BP_SkillEffect_FlareArrow.BP_SkillEffect_FlareArrow_C.BndEvt__BP_SkillEffect_FlareArrow_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct BP_SkillEffect_FlareArrow_C_BndEvt__BP_SkillEffect_FlareArrow_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0030(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_SkillEffect_FlareArrow_C_BndEvt__BP_SkillEffect_FlareArrow_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_SkillEffect_FlareArrow_C_BndEvt__BP_SkillEffect_FlareArrow_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(BP_SkillEffect_FlareArrow_C_BndEvt__BP_SkillEffect_FlareArrow_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000118, "Wrong size on BP_SkillEffect_FlareArrow_C_BndEvt__BP_SkillEffect_FlareArrow_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_BndEvt__BP_SkillEffect_FlareArrow_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'BP_SkillEffect_FlareArrow_C_BndEvt__BP_SkillEffect_FlareArrow_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_BndEvt__BP_SkillEffect_FlareArrow_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_SkillEffect_FlareArrow_C_BndEvt__BP_SkillEffect_FlareArrow_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_BndEvt__BP_SkillEffect_FlareArrow_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_SkillEffect_FlareArrow_C_BndEvt__BP_SkillEffect_FlareArrow_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_BndEvt__BP_SkillEffect_FlareArrow_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'BP_SkillEffect_FlareArrow_C_BndEvt__BP_SkillEffect_FlareArrow_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_BndEvt__BP_SkillEffect_FlareArrow_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, Hit) == 0x000030, "Member 'BP_SkillEffect_FlareArrow_C_BndEvt__BP_SkillEffect_FlareArrow_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::Hit' has a wrong offset!");

// Function BP_SkillEffect_FlareArrow.BP_SkillEffect_FlareArrow_C.ExecuteUbergraph_BP_SkillEffect_FlareArrow
// 0x0318 (0x0318 - 0x0000)
struct BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_1;                     // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;               // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1; // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_2;                     // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_2;               // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43[0x5];                                       // 0x0043(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue_1;                     // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_1;              // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_3;               // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2; // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_2;      // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_2;        // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_2;                // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue_2;                     // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_2;              // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;           // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;          // 0x00E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;                    // 0x0100(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_Defencer;               // 0x01F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDamageInfo                         K2Node_ComponentBoundEvent_damageInfo;             // 0x01F8(0x00D0)()
	int32                                         K2Node_ComponentBoundEvent_hitCount;               // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2CC[0x4];                                      // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_AttackerComponent;      // 0x02D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_Event_DeltaSecond;                          // 0x02D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_3;                     // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E1[0x3];                                      // 0x02E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast;        // 0x02E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x02E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x02F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast_1;      // 0x02F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x02F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast_1;  // 0x0300(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast_2;      // 0x0304(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2;   // 0x0308(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast_2;  // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow) == 0x000008, "Wrong alignment on BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow");
static_assert(sizeof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow) == 0x000318, "Wrong size on BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, Temp_bool_IsClosed_Variable) == 0x000005, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, Temp_bool_IsClosed_Variable_1) == 0x000006, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, Temp_bool_Has_Been_Initd_Variable_1) == 0x000007, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable) == 0x000008, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000010, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000018, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, CallFunc_SelectFloat_ReturnValue) == 0x000020, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, CallFunc_FClamp_ReturnValue) == 0x000028, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, CallFunc_GetFloatValue_ReturnValue) == 0x000030, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000038, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1) == 0x000040, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, Temp_bool_IsClosed_Variable_2) == 0x000041, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::Temp_bool_IsClosed_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, Temp_bool_Has_Been_Initd_Variable_2) == 0x000042, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::Temp_bool_Has_Been_Initd_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000048, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000050, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, CallFunc_FClamp_ReturnValue_1) == 0x000058, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, CallFunc_GetFloatValue_ReturnValue_1) == 0x000060, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::CallFunc_GetFloatValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, CallFunc_SelectFloat_ReturnValue_1) == 0x000068, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, Temp_bool_Has_Been_Initd_Variable_3) == 0x000070, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::Temp_bool_Has_Been_Initd_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000078, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2) == 0x000080, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, CallFunc_Subtract_DoubleDouble_ReturnValue_2) == 0x000088, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::CallFunc_Subtract_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, CallFunc_Divide_DoubleDouble_ReturnValue_2) == 0x000090, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::CallFunc_Divide_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, CallFunc_SelectFloat_ReturnValue_2) == 0x000098, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::CallFunc_SelectFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, CallFunc_FClamp_ReturnValue_2) == 0x0000A0, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::CallFunc_FClamp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, CallFunc_GetFloatValue_ReturnValue_2) == 0x0000A8, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::CallFunc_GetFloatValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x0000B0, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000B8, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, K2Node_ComponentBoundEvent_HitComponent) == 0x0000D0, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, K2Node_ComponentBoundEvent_OtherActor) == 0x0000D8, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, K2Node_ComponentBoundEvent_OtherComp) == 0x0000E0, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, K2Node_ComponentBoundEvent_NormalImpulse) == 0x0000E8, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, K2Node_ComponentBoundEvent_Hit) == 0x000100, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x0001E8, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, K2Node_ComponentBoundEvent_Defencer) == 0x0001F0, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::K2Node_ComponentBoundEvent_Defencer' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, K2Node_ComponentBoundEvent_damageInfo) == 0x0001F8, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::K2Node_ComponentBoundEvent_damageInfo' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, K2Node_ComponentBoundEvent_hitCount) == 0x0002C8, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::K2Node_ComponentBoundEvent_hitCount' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, K2Node_ComponentBoundEvent_AttackerComponent) == 0x0002D0, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::K2Node_ComponentBoundEvent_AttackerComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, K2Node_Event_DeltaSecond) == 0x0002D8, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::K2Node_Event_DeltaSecond' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, Temp_bool_IsClosed_Variable_3) == 0x0002E0, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::Temp_bool_IsClosed_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, CallFunc_GetFloatValue_InTime_ImplicitCast) == 0x0002E4, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::CallFunc_GetFloatValue_InTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0002E8, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, CallFunc_SetVariableFloat_InValue_ImplicitCast) == 0x0002F0, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::CallFunc_SetVariableFloat_InValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, CallFunc_GetFloatValue_InTime_ImplicitCast_1) == 0x0002F4, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::CallFunc_GetFloatValue_InTime_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1) == 0x0002F8, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, CallFunc_SetVariableFloat_InValue_ImplicitCast_1) == 0x000300, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::CallFunc_SetVariableFloat_InValue_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, CallFunc_GetFloatValue_InTime_ImplicitCast_2) == 0x000304, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::CallFunc_GetFloatValue_InTime_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2) == 0x000308, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow, CallFunc_SetVariableFloat_InValue_ImplicitCast_2) == 0x000310, "Member 'BP_SkillEffect_FlareArrow_C_ExecuteUbergraph_BP_SkillEffect_FlareArrow::CallFunc_SetVariableFloat_InValue_ImplicitCast_2' has a wrong offset!");

// Function BP_SkillEffect_FlareArrow.BP_SkillEffect_FlareArrow_C.FadeOutEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_SkillEffect_FlareArrow_C_FadeOutEffect final
{
public:
	double                                        DeltaSecond;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_FlareArrow_C_FadeOutEffect) == 0x000008, "Wrong alignment on BP_SkillEffect_FlareArrow_C_FadeOutEffect");
static_assert(sizeof(BP_SkillEffect_FlareArrow_C_FadeOutEffect) == 0x000008, "Wrong size on BP_SkillEffect_FlareArrow_C_FadeOutEffect");
static_assert(offsetof(BP_SkillEffect_FlareArrow_C_FadeOutEffect, DeltaSecond) == 0x000000, "Member 'BP_SkillEffect_FlareArrow_C_FadeOutEffect::DeltaSecond' has a wrong offset!");

}

