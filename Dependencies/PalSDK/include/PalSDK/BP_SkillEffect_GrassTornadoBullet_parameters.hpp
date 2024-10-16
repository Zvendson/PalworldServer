#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function BP_SkillEffect_GrassTornadoBullet.BP_SkillEffect_GrassTornadoBullet_C.BndEvt__BP_SkillEffect_GrassTornadoBullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature
// 0x00E8 (0x00E8 - 0x0000)
struct BP_SkillEffect_GrassTornadoBullet_C_BndEvt__BP_SkillEffect_GrassTornadoBullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature final
{
public:
	class AActor*                                 Defencer;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDamageInfo                         DamageInfo;                                        // 0x0008(0x00D0)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         HitCount;                                          // 0x00D8(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    AttackerComponent;                                 // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_GrassTornadoBullet_C_BndEvt__BP_SkillEffect_GrassTornadoBullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature) == 0x000008, "Wrong alignment on BP_SkillEffect_GrassTornadoBullet_C_BndEvt__BP_SkillEffect_GrassTornadoBullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature");
static_assert(sizeof(BP_SkillEffect_GrassTornadoBullet_C_BndEvt__BP_SkillEffect_GrassTornadoBullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature) == 0x0000E8, "Wrong size on BP_SkillEffect_GrassTornadoBullet_C_BndEvt__BP_SkillEffect_GrassTornadoBullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_BndEvt__BP_SkillEffect_GrassTornadoBullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature, Defencer) == 0x000000, "Member 'BP_SkillEffect_GrassTornadoBullet_C_BndEvt__BP_SkillEffect_GrassTornadoBullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature::Defencer' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_BndEvt__BP_SkillEffect_GrassTornadoBullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature, DamageInfo) == 0x000008, "Member 'BP_SkillEffect_GrassTornadoBullet_C_BndEvt__BP_SkillEffect_GrassTornadoBullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature::DamageInfo' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_BndEvt__BP_SkillEffect_GrassTornadoBullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature, HitCount) == 0x0000D8, "Member 'BP_SkillEffect_GrassTornadoBullet_C_BndEvt__BP_SkillEffect_GrassTornadoBullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature::HitCount' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_BndEvt__BP_SkillEffect_GrassTornadoBullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature, AttackerComponent) == 0x0000E0, "Member 'BP_SkillEffect_GrassTornadoBullet_C_BndEvt__BP_SkillEffect_GrassTornadoBullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature::AttackerComponent' has a wrong offset!");

// Function BP_SkillEffect_GrassTornadoBullet.BP_SkillEffect_GrassTornadoBullet_C.ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet
// 0x02C8 (0x02C8 - 0x0000)
struct BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1; // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_1;                     // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;               // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_2;               // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2; // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_2;                     // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_3;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_3;               // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue_1;                     // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_1;              // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3; // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_2;      // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_2;                // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_2;        // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue_2;                     // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_2;              // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_4;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_4;               // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B2[0x6];                                       // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_3;      // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_3;                // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_3;        // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue_3;                     // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_3;              // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_3;      // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_4; // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_4;      // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_4;        // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue_4;                     // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0108(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_4;              // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11C[0x4];                                      // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue_4;                // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_4;      // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_TargetLocation;                       // 0x0130(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14C[0x4];                                      // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_ComponentBoundEvent_Defencer;               // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDamageInfo                         K2Node_ComponentBoundEvent_damageInfo;             // 0x0158(0x00D0)()
	int32                                         K2Node_ComponentBoundEvent_hitCount;               // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22C[0x4];                                      // 0x022C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_AttackerComponent;      // 0x0230(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0238(0x0008)(NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_Event_DeltaSecond;                          // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0248(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_5;               // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_261[0x7];                                      // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0268(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_5;                     // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_271[0x3];                                      // 0x0271(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast;        // 0x0274(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast_1;      // 0x0284(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast_1;  // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast_2;      // 0x0294(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2;   // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast_2;  // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast_3;      // 0x02A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3;   // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast_3;  // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast_4;      // 0x02B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_4;   // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast_4;  // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet) == 0x000008, "Wrong alignment on BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet");
static_assert(sizeof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet) == 0x0002C8, "Wrong size on BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable) == 0x000004, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, Temp_bool_Has_Been_Initd_Variable) == 0x000005, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1) == 0x000006, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, Temp_bool_IsClosed_Variable) == 0x000007, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, Temp_bool_IsClosed_Variable_1) == 0x000008, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, Temp_bool_Has_Been_Initd_Variable_1) == 0x000009, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, Temp_bool_Has_Been_Initd_Variable_2) == 0x00000A, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::Temp_bool_Has_Been_Initd_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2) == 0x00000B, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000010, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000018, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_FClamp_ReturnValue) == 0x000020, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_GetFloatValue_ReturnValue) == 0x000028, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, Temp_bool_IsClosed_Variable_2) == 0x00002C, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::Temp_bool_IsClosed_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_SelectFloat_ReturnValue) == 0x000030, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000038, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, Temp_bool_IsClosed_Variable_3) == 0x000040, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::Temp_bool_IsClosed_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, Temp_bool_Has_Been_Initd_Variable_3) == 0x000041, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::Temp_bool_Has_Been_Initd_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000048, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000050, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_FClamp_ReturnValue_1) == 0x000058, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_GetFloatValue_ReturnValue_1) == 0x000060, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_GetFloatValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_SelectFloat_ReturnValue_1) == 0x000068, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000070, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3) == 0x000078, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_Subtract_DoubleDouble_ReturnValue_2) == 0x000080, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_Subtract_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_SelectFloat_ReturnValue_2) == 0x000088, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_SelectFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_Divide_DoubleDouble_ReturnValue_2) == 0x000090, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_Divide_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_FClamp_ReturnValue_2) == 0x000098, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_FClamp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_GetFloatValue_ReturnValue_2) == 0x0000A0, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_GetFloatValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x0000A8, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, Temp_bool_IsClosed_Variable_4) == 0x0000B0, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::Temp_bool_IsClosed_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, Temp_bool_Has_Been_Initd_Variable_4) == 0x0000B1, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::Temp_bool_Has_Been_Initd_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_Subtract_DoubleDouble_ReturnValue_3) == 0x0000B8, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_Subtract_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_SelectFloat_ReturnValue_3) == 0x0000C0, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_SelectFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_Divide_DoubleDouble_ReturnValue_3) == 0x0000C8, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_Divide_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_FClamp_ReturnValue_3) == 0x0000D0, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_FClamp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_GetFloatValue_ReturnValue_3) == 0x0000D8, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_GetFloatValue_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_Multiply_DoubleDouble_ReturnValue_3) == 0x0000E0, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_Multiply_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_4) == 0x0000E8, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_Subtract_DoubleDouble_ReturnValue_4) == 0x0000F0, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_Subtract_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_Divide_DoubleDouble_ReturnValue_4) == 0x0000F8, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_Divide_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_FClamp_ReturnValue_4) == 0x000100, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_FClamp_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, K2Node_CreateDelegate_OutputDelegate) == 0x000108, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_GetFloatValue_ReturnValue_4) == 0x000118, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_GetFloatValue_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_SelectFloat_ReturnValue_4) == 0x000120, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_SelectFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_Multiply_DoubleDouble_ReturnValue_4) == 0x000128, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_Multiply_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, K2Node_Event_TargetLocation) == 0x000130, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::K2Node_Event_TargetLocation' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, K2Node_Event_DeltaSeconds) == 0x000148, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, K2Node_ComponentBoundEvent_Defencer) == 0x000150, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::K2Node_ComponentBoundEvent_Defencer' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, K2Node_ComponentBoundEvent_damageInfo) == 0x000158, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::K2Node_ComponentBoundEvent_damageInfo' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, K2Node_ComponentBoundEvent_hitCount) == 0x000228, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::K2Node_ComponentBoundEvent_hitCount' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, K2Node_ComponentBoundEvent_AttackerComponent) == 0x000230, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::K2Node_ComponentBoundEvent_AttackerComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000238, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, K2Node_Event_DeltaSecond) == 0x000240, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::K2Node_Event_DeltaSecond' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000248, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, Temp_bool_Has_Been_Initd_Variable_5) == 0x000260, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::Temp_bool_Has_Been_Initd_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000268, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, Temp_bool_IsClosed_Variable_5) == 0x000270, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::Temp_bool_IsClosed_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_GetFloatValue_InTime_ImplicitCast) == 0x000274, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_GetFloatValue_InTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000278, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_SetVariableFloat_InValue_ImplicitCast) == 0x000280, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_SetVariableFloat_InValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_GetFloatValue_InTime_ImplicitCast_1) == 0x000284, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_GetFloatValue_InTime_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1) == 0x000288, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_SetVariableFloat_InValue_ImplicitCast_1) == 0x000290, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_SetVariableFloat_InValue_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_GetFloatValue_InTime_ImplicitCast_2) == 0x000294, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_GetFloatValue_InTime_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2) == 0x000298, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_SetVariableFloat_InValue_ImplicitCast_2) == 0x0002A0, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_SetVariableFloat_InValue_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_GetFloatValue_InTime_ImplicitCast_3) == 0x0002A4, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_GetFloatValue_InTime_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3) == 0x0002A8, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_SetVariableFloat_InValue_ImplicitCast_3) == 0x0002B0, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_SetVariableFloat_InValue_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_GetFloatValue_InTime_ImplicitCast_4) == 0x0002B4, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_GetFloatValue_InTime_ImplicitCast_4' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_4) == 0x0002B8, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_4' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet, CallFunc_SetVariableFloat_InValue_ImplicitCast_4) == 0x0002C0, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_GrassTornadoBullet::CallFunc_SetVariableFloat_InValue_ImplicitCast_4' has a wrong offset!");

// Function BP_SkillEffect_GrassTornadoBullet.BP_SkillEffect_GrassTornadoBullet_C.FadeOutEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_SkillEffect_GrassTornadoBullet_C_FadeOutEffect final
{
public:
	double                                        DeltaSecond;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_GrassTornadoBullet_C_FadeOutEffect) == 0x000008, "Wrong alignment on BP_SkillEffect_GrassTornadoBullet_C_FadeOutEffect");
static_assert(sizeof(BP_SkillEffect_GrassTornadoBullet_C_FadeOutEffect) == 0x000008, "Wrong size on BP_SkillEffect_GrassTornadoBullet_C_FadeOutEffect");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_FadeOutEffect, DeltaSecond) == 0x000000, "Member 'BP_SkillEffect_GrassTornadoBullet_C_FadeOutEffect::DeltaSecond' has a wrong offset!");

// Function BP_SkillEffect_GrassTornadoBullet.BP_SkillEffect_GrassTornadoBullet_C.MoveToTargetLocation
// 0x0240 (0x0240 - 0x0000)
struct BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp;                                              // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              LocalNormalizedDirectionForTarget;                 // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              LocalActorLocation2D;                              // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNearlyZero2D_ReturnValue;               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_AdjustActorToFloor_ReturnValue;           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue;        // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue;         // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_Vector2DToVector_ReturnValue;        // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x00A8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_191[0x7];                                      // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_CrossProduct2D_ReturnValue;               // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetRotated2D_ReturnValue;                 // 0x01B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C1[0x7];                                      // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Normal2D_ReturnValue;                     // 0x01C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_DotProduct2D_ReturnValue;                 // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x01E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;  // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F1[0x7];                                      // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x01F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0228(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRotated2D_AngleDeg_ImplicitCast;       // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation) == 0x000008, "Wrong alignment on BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation");
static_assert(sizeof(BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation) == 0x000240, "Wrong size on BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation, DeltaTime) == 0x000000, "Member 'BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation, Temp) == 0x000008, "Member 'BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation::Temp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation, LocalNormalizedDirectionForTarget) == 0x000010, "Member 'BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation::LocalNormalizedDirectionForTarget' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation, LocalActorLocation2D) == 0x000020, "Member 'BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation::LocalActorLocation2D' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation, CallFunc_IsNearlyZero2D_ReturnValue) == 0x000030, "Member 'BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation::CallFunc_IsNearlyZero2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation, CallFunc_AdjustActorToFloor_ReturnValue) == 0x000038, "Member 'BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation::CallFunc_AdjustActorToFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000040, "Member 'BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000048, "Member 'BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation, CallFunc_Multiply_Vector2DFloat_ReturnValue) == 0x000060, "Member 'BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation::CallFunc_Multiply_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation, CallFunc_Conv_VectorToVector2D_ReturnValue) == 0x000070, "Member 'BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation::CallFunc_Conv_VectorToVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation, CallFunc_Add_Vector2DVector2D_ReturnValue) == 0x000080, "Member 'BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation::CallFunc_Add_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation, CallFunc_Conv_Vector2DToVector_ReturnValue) == 0x000090, "Member 'BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation::CallFunc_Conv_Vector2DToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x0000A8, "Member 'BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000190, "Member 'BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000198, "Member 'BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x0001A0, "Member 'BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation, CallFunc_CrossProduct2D_ReturnValue) == 0x0001A8, "Member 'BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation::CallFunc_CrossProduct2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation, CallFunc_GetRotated2D_ReturnValue) == 0x0001B0, "Member 'BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation::CallFunc_GetRotated2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x0001C0, "Member 'BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation, CallFunc_Normal2D_ReturnValue) == 0x0001C8, "Member 'BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation::CallFunc_Normal2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation, CallFunc_DotProduct2D_ReturnValue) == 0x0001D8, "Member 'BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation::CallFunc_DotProduct2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x0001E0, "Member 'BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation, CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1) == 0x0001F0, "Member 'BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation::CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0001F8, "Member 'BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation, CallFunc_BreakVector_X) == 0x000210, "Member 'BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation, CallFunc_BreakVector_Y) == 0x000218, "Member 'BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation, CallFunc_BreakVector_Z) == 0x000220, "Member 'BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation, CallFunc_MakeVector2D_ReturnValue) == 0x000228, "Member 'BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation, CallFunc_GetRotated2D_AngleDeg_ImplicitCast) == 0x000238, "Member 'BP_SkillEffect_GrassTornadoBullet_C_MoveToTargetLocation::CallFunc_GetRotated2D_AngleDeg_ImplicitCast' has a wrong offset!");

// Function BP_SkillEffect_GrassTornadoBullet.BP_SkillEffect_GrassTornadoBullet_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_SkillEffect_GrassTornadoBullet_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_GrassTornadoBullet_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_SkillEffect_GrassTornadoBullet_C_ReceiveTick");
static_assert(sizeof(BP_SkillEffect_GrassTornadoBullet_C_ReceiveTick) == 0x000004, "Wrong size on BP_SkillEffect_GrassTornadoBullet_C_ReceiveTick");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_SkillEffect_GrassTornadoBullet.BP_SkillEffect_GrassTornadoBullet_C.SetRandomValueIntoNiagaraVariable
// 0x0018 (0x0018 - 0x0000)
struct BP_SkillEffect_GrassTornadoBullet_C_SetRandomValueIntoNiagaraVariable final
{
public:
	class UNiagaraComponent*                      NiagaraComp;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_GrassTornadoBullet_C_SetRandomValueIntoNiagaraVariable) == 0x000008, "Wrong alignment on BP_SkillEffect_GrassTornadoBullet_C_SetRandomValueIntoNiagaraVariable");
static_assert(sizeof(BP_SkillEffect_GrassTornadoBullet_C_SetRandomValueIntoNiagaraVariable) == 0x000018, "Wrong size on BP_SkillEffect_GrassTornadoBullet_C_SetRandomValueIntoNiagaraVariable");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_SetRandomValueIntoNiagaraVariable, NiagaraComp) == 0x000000, "Member 'BP_SkillEffect_GrassTornadoBullet_C_SetRandomValueIntoNiagaraVariable::NiagaraComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_SetRandomValueIntoNiagaraVariable, CallFunc_RandomFloatInRange_ReturnValue) == 0x000008, "Member 'BP_SkillEffect_GrassTornadoBullet_C_SetRandomValueIntoNiagaraVariable::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_SetRandomValueIntoNiagaraVariable, CallFunc_SetVariableFloat_InValue_ImplicitCast) == 0x000010, "Member 'BP_SkillEffect_GrassTornadoBullet_C_SetRandomValueIntoNiagaraVariable::CallFunc_SetVariableFloat_InValue_ImplicitCast' has a wrong offset!");

// Function BP_SkillEffect_GrassTornadoBullet.BP_SkillEffect_GrassTornadoBullet_C.ShootBullet
// 0x0018 (0x0018 - 0x0000)
struct BP_SkillEffect_GrassTornadoBullet_C_ShootBullet final
{
public:
	struct FVector                                TargetLocation;                                    // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_GrassTornadoBullet_C_ShootBullet) == 0x000008, "Wrong alignment on BP_SkillEffect_GrassTornadoBullet_C_ShootBullet");
static_assert(sizeof(BP_SkillEffect_GrassTornadoBullet_C_ShootBullet) == 0x000018, "Wrong size on BP_SkillEffect_GrassTornadoBullet_C_ShootBullet");
static_assert(offsetof(BP_SkillEffect_GrassTornadoBullet_C_ShootBullet, TargetLocation) == 0x000000, "Member 'BP_SkillEffect_GrassTornadoBullet_C_ShootBullet::TargetLocation' has a wrong offset!");

}

