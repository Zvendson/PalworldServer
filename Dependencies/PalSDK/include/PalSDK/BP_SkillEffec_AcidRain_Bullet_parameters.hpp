#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function BP_SkillEffec_AcidRain_Bullet.BP_SkillEffec_AcidRain_Bullet_C.BndEvt__BP_SkillEffec_AcidRain_Bullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature
// 0x00E8 (0x00E8 - 0x0000)
struct BP_SkillEffec_AcidRain_Bullet_C_BndEvt__BP_SkillEffec_AcidRain_Bullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature final
{
public:
	class AActor*                                 Defencer;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDamageInfo                         DamageInfo;                                        // 0x0008(0x00D0)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         HitCount;                                          // 0x00D8(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    AttackerComponent;                                 // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffec_AcidRain_Bullet_C_BndEvt__BP_SkillEffec_AcidRain_Bullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature) == 0x000008, "Wrong alignment on BP_SkillEffec_AcidRain_Bullet_C_BndEvt__BP_SkillEffec_AcidRain_Bullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature");
static_assert(sizeof(BP_SkillEffec_AcidRain_Bullet_C_BndEvt__BP_SkillEffec_AcidRain_Bullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature) == 0x0000E8, "Wrong size on BP_SkillEffec_AcidRain_Bullet_C_BndEvt__BP_SkillEffec_AcidRain_Bullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_BndEvt__BP_SkillEffec_AcidRain_Bullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature, Defencer) == 0x000000, "Member 'BP_SkillEffec_AcidRain_Bullet_C_BndEvt__BP_SkillEffec_AcidRain_Bullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature::Defencer' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_BndEvt__BP_SkillEffec_AcidRain_Bullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature, DamageInfo) == 0x000008, "Member 'BP_SkillEffec_AcidRain_Bullet_C_BndEvt__BP_SkillEffec_AcidRain_Bullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature::DamageInfo' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_BndEvt__BP_SkillEffec_AcidRain_Bullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature, HitCount) == 0x0000D8, "Member 'BP_SkillEffec_AcidRain_Bullet_C_BndEvt__BP_SkillEffec_AcidRain_Bullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature::HitCount' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_BndEvt__BP_SkillEffec_AcidRain_Bullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature, AttackerComponent) == 0x0000E0, "Member 'BP_SkillEffec_AcidRain_Bullet_C_BndEvt__BP_SkillEffec_AcidRain_Bullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature::AttackerComponent' has a wrong offset!");

// Function BP_SkillEffec_AcidRain_Bullet.BP_SkillEffec_AcidRain_Bullet_C.ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet
// 0x01A0 (0x01A0 - 0x0000)
struct BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_1;                     // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;               // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue_1;                     // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_1;              // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1; // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_2;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_2;               // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_3;               // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_73[0x5];                                       // 0x0073(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_Event_DeltaSecond;                          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_3;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_ComponentBoundEvent_Defencer;               // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDamageInfo                         K2Node_ComponentBoundEvent_damageInfo;             // 0x0090(0x00D0)()
	int32                                         K2Node_ComponentBoundEvent_hitCount;               // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_164[0x4];                                      // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_AttackerComponent;      // 0x0168(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_179[0x3];                                      // 0x0179(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast;        // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast_1;      // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast_1;  // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet) == 0x000008, "Wrong alignment on BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet");
static_assert(sizeof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet) == 0x0001A0, "Wrong size on BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, EntryPoint) == 0x000000, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, Temp_bool_IsClosed_Variable) == 0x000004, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, Temp_bool_IsClosed_Variable_1) == 0x000005, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, Temp_bool_Has_Been_Initd_Variable) == 0x000006, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, Temp_bool_Has_Been_Initd_Variable_1) == 0x000007, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000008, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000010, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, CallFunc_FClamp_ReturnValue) == 0x000018, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, CallFunc_SelectFloat_ReturnValue) == 0x000020, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, CallFunc_GetFloatValue_ReturnValue) == 0x000028, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000030, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable) == 0x000038, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000040, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000048, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, CallFunc_FClamp_ReturnValue_1) == 0x000050, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, CallFunc_GetFloatValue_ReturnValue_1) == 0x000058, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::CallFunc_GetFloatValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1) == 0x00005C, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, CallFunc_SelectFloat_ReturnValue_1) == 0x000060, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000068, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, Temp_bool_IsClosed_Variable_2) == 0x000070, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::Temp_bool_IsClosed_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, Temp_bool_Has_Been_Initd_Variable_2) == 0x000071, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::Temp_bool_Has_Been_Initd_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, Temp_bool_Has_Been_Initd_Variable_3) == 0x000072, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::Temp_bool_Has_Been_Initd_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, K2Node_Event_DeltaSecond) == 0x000078, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::K2Node_Event_DeltaSecond' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, Temp_bool_IsClosed_Variable_3) == 0x000080, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::Temp_bool_IsClosed_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, K2Node_ComponentBoundEvent_Defencer) == 0x000088, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::K2Node_ComponentBoundEvent_Defencer' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, K2Node_ComponentBoundEvent_damageInfo) == 0x000090, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::K2Node_ComponentBoundEvent_damageInfo' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, K2Node_ComponentBoundEvent_hitCount) == 0x000160, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::K2Node_ComponentBoundEvent_hitCount' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, K2Node_ComponentBoundEvent_AttackerComponent) == 0x000168, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::K2Node_ComponentBoundEvent_AttackerComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, CallFunc_GetOwner_ReturnValue) == 0x000170, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000178, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, CallFunc_GetFloatValue_InTime_ImplicitCast) == 0x00017C, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::CallFunc_GetFloatValue_InTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000180, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, CallFunc_SetVariableFloat_InValue_ImplicitCast) == 0x000188, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::CallFunc_SetVariableFloat_InValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, CallFunc_GetFloatValue_InTime_ImplicitCast_1) == 0x00018C, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::CallFunc_GetFloatValue_InTime_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1) == 0x000190, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet, CallFunc_SetVariableFloat_InValue_ImplicitCast_1) == 0x000198, "Member 'BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet::CallFunc_SetVariableFloat_InValue_ImplicitCast_1' has a wrong offset!");

// Function BP_SkillEffec_AcidRain_Bullet.BP_SkillEffec_AcidRain_Bullet_C.FadeOutEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_SkillEffec_AcidRain_Bullet_C_FadeOutEffect final
{
public:
	double                                        DeltaSecond;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffec_AcidRain_Bullet_C_FadeOutEffect) == 0x000008, "Wrong alignment on BP_SkillEffec_AcidRain_Bullet_C_FadeOutEffect");
static_assert(sizeof(BP_SkillEffec_AcidRain_Bullet_C_FadeOutEffect) == 0x000008, "Wrong size on BP_SkillEffec_AcidRain_Bullet_C_FadeOutEffect");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_FadeOutEffect, DeltaSecond) == 0x000000, "Member 'BP_SkillEffec_AcidRain_Bullet_C_FadeOutEffect::DeltaSecond' has a wrong offset!");

// Function BP_SkillEffec_AcidRain_Bullet.BP_SkillEffec_AcidRain_Bullet_C.SetRandomValueIntoNiagaraVariable
// 0x0008 (0x0008 - 0x0000)
struct BP_SkillEffec_AcidRain_Bullet_C_SetRandomValueIntoNiagaraVariable final
{
public:
	class UNiagaraComponent*                      NiagaraComp;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffec_AcidRain_Bullet_C_SetRandomValueIntoNiagaraVariable) == 0x000008, "Wrong alignment on BP_SkillEffec_AcidRain_Bullet_C_SetRandomValueIntoNiagaraVariable");
static_assert(sizeof(BP_SkillEffec_AcidRain_Bullet_C_SetRandomValueIntoNiagaraVariable) == 0x000008, "Wrong size on BP_SkillEffec_AcidRain_Bullet_C_SetRandomValueIntoNiagaraVariable");
static_assert(offsetof(BP_SkillEffec_AcidRain_Bullet_C_SetRandomValueIntoNiagaraVariable, NiagaraComp) == 0x000000, "Member 'BP_SkillEffec_AcidRain_Bullet_C_SetRandomValueIntoNiagaraVariable::NiagaraComp' has a wrong offset!");

}

