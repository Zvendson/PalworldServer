#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function BP_SkillEffect_PowerShot.BP_SkillEffect_PowerShot_C.BndEvt__BP_SkillEffect_PowerShot_AttackFilter_K2Node_ComponentBoundEvent_2_OnAttackDelegate__DelegateSignature
// 0x00E8 (0x00E8 - 0x0000)
struct BP_SkillEffect_PowerShot_C_BndEvt__BP_SkillEffect_PowerShot_AttackFilter_K2Node_ComponentBoundEvent_2_OnAttackDelegate__DelegateSignature final
{
public:
	class AActor*                                 Defencer;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDamageInfo                         DamageInfo;                                        // 0x0008(0x00D0)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         HitCount;                                          // 0x00D8(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    AttackerComponent;                                 // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_PowerShot_C_BndEvt__BP_SkillEffect_PowerShot_AttackFilter_K2Node_ComponentBoundEvent_2_OnAttackDelegate__DelegateSignature) == 0x000008, "Wrong alignment on BP_SkillEffect_PowerShot_C_BndEvt__BP_SkillEffect_PowerShot_AttackFilter_K2Node_ComponentBoundEvent_2_OnAttackDelegate__DelegateSignature");
static_assert(sizeof(BP_SkillEffect_PowerShot_C_BndEvt__BP_SkillEffect_PowerShot_AttackFilter_K2Node_ComponentBoundEvent_2_OnAttackDelegate__DelegateSignature) == 0x0000E8, "Wrong size on BP_SkillEffect_PowerShot_C_BndEvt__BP_SkillEffect_PowerShot_AttackFilter_K2Node_ComponentBoundEvent_2_OnAttackDelegate__DelegateSignature");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_BndEvt__BP_SkillEffect_PowerShot_AttackFilter_K2Node_ComponentBoundEvent_2_OnAttackDelegate__DelegateSignature, Defencer) == 0x000000, "Member 'BP_SkillEffect_PowerShot_C_BndEvt__BP_SkillEffect_PowerShot_AttackFilter_K2Node_ComponentBoundEvent_2_OnAttackDelegate__DelegateSignature::Defencer' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_BndEvt__BP_SkillEffect_PowerShot_AttackFilter_K2Node_ComponentBoundEvent_2_OnAttackDelegate__DelegateSignature, DamageInfo) == 0x000008, "Member 'BP_SkillEffect_PowerShot_C_BndEvt__BP_SkillEffect_PowerShot_AttackFilter_K2Node_ComponentBoundEvent_2_OnAttackDelegate__DelegateSignature::DamageInfo' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_BndEvt__BP_SkillEffect_PowerShot_AttackFilter_K2Node_ComponentBoundEvent_2_OnAttackDelegate__DelegateSignature, HitCount) == 0x0000D8, "Member 'BP_SkillEffect_PowerShot_C_BndEvt__BP_SkillEffect_PowerShot_AttackFilter_K2Node_ComponentBoundEvent_2_OnAttackDelegate__DelegateSignature::HitCount' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_BndEvt__BP_SkillEffect_PowerShot_AttackFilter_K2Node_ComponentBoundEvent_2_OnAttackDelegate__DelegateSignature, AttackerComponent) == 0x0000E0, "Member 'BP_SkillEffect_PowerShot_C_BndEvt__BP_SkillEffect_PowerShot_AttackFilter_K2Node_ComponentBoundEvent_2_OnAttackDelegate__DelegateSignature::AttackerComponent' has a wrong offset!");

// Function BP_SkillEffect_PowerShot.BP_SkillEffect_PowerShot_C.BndEvt__BP_SkillEffect_PowerShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct BP_SkillEffect_PowerShot_C_BndEvt__BP_SkillEffect_PowerShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0030(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_SkillEffect_PowerShot_C_BndEvt__BP_SkillEffect_PowerShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_SkillEffect_PowerShot_C_BndEvt__BP_SkillEffect_PowerShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(BP_SkillEffect_PowerShot_C_BndEvt__BP_SkillEffect_PowerShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000118, "Wrong size on BP_SkillEffect_PowerShot_C_BndEvt__BP_SkillEffect_PowerShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_BndEvt__BP_SkillEffect_PowerShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'BP_SkillEffect_PowerShot_C_BndEvt__BP_SkillEffect_PowerShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_BndEvt__BP_SkillEffect_PowerShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_SkillEffect_PowerShot_C_BndEvt__BP_SkillEffect_PowerShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_BndEvt__BP_SkillEffect_PowerShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_SkillEffect_PowerShot_C_BndEvt__BP_SkillEffect_PowerShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_BndEvt__BP_SkillEffect_PowerShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'BP_SkillEffect_PowerShot_C_BndEvt__BP_SkillEffect_PowerShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_BndEvt__BP_SkillEffect_PowerShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, Hit) == 0x000030, "Member 'BP_SkillEffect_PowerShot_C_BndEvt__BP_SkillEffect_PowerShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::Hit' has a wrong offset!");

// Function BP_SkillEffect_PowerShot.BP_SkillEffect_PowerShot_C.ExecuteUbergraph_BP_SkillEffect_PowerShot
// 0x0400 (0x0400 - 0x0000)
struct BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1; // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_1;                     // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;               // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B[0x5];                                       // 0x003B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue_1;                     // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_1;              // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2; // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_2;      // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_2;        // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_2;                // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue_2;                     // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_2;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x3];                                       // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatValue_ReturnValue_2;              // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_2;               // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_3;               // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C2[0x2];                                       // 0x00C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_TargetLocation;                       // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;           // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;          // 0x00F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;                    // 0x0110(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AActor*                                 K2Node_ComponentBoundEvent_Defencer;               // 0x01F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDamageInfo                         K2Node_ComponentBoundEvent_damageInfo;             // 0x0200(0x00D0)()
	int32                                         K2Node_ComponentBoundEvent_hitCount;               // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D4[0x4];                                      // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_AttackerComponent;      // 0x02D8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x02E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E2[0x2];                                      // 0x02E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x02E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x02E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2EC[0x4];                                      // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x02F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0308(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0320(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0338(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0350(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0358(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0360(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0368(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0370(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0378(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x037C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0380(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_384[0x4];                                      // 0x0384(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0388(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x03A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_Event_DeltaSecond;                          // 0x03B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x03C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_3;                     // 0x03C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C9[0x3];                                      // 0x03C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast;        // 0x03CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x03D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x03D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast_1;      // 0x03DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x03E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast_1;  // 0x03E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast_2;      // 0x03EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2;   // 0x03F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast_2;  // 0x03F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot) == 0x000008, "Wrong alignment on BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot");
static_assert(sizeof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot) == 0x000400, "Wrong size on BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, Temp_bool_IsClosed_Variable) == 0x000005, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable) == 0x000006, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000008, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000010, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_SelectFloat_ReturnValue) == 0x000018, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_FClamp_ReturnValue) == 0x000020, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_GetFloatValue_ReturnValue) == 0x000028, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000030, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1) == 0x000038, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, Temp_bool_IsClosed_Variable_1) == 0x000039, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, Temp_bool_Has_Been_Initd_Variable_1) == 0x00003A, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000040, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000048, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_FClamp_ReturnValue_1) == 0x000050, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_GetFloatValue_ReturnValue_1) == 0x000058, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_GetFloatValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_SelectFloat_ReturnValue_1) == 0x000060, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000068, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2) == 0x000070, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_MakeVector_ReturnValue) == 0x000078, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_Subtract_DoubleDouble_ReturnValue_2) == 0x000090, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_Subtract_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_Divide_DoubleDouble_ReturnValue_2) == 0x000098, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_Divide_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_SelectFloat_ReturnValue_2) == 0x0000A0, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_SelectFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_FClamp_ReturnValue_2) == 0x0000A8, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_FClamp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, Temp_bool_IsClosed_Variable_2) == 0x0000B0, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::Temp_bool_IsClosed_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_GetFloatValue_ReturnValue_2) == 0x0000B4, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_GetFloatValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x0000B8, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, Temp_bool_Has_Been_Initd_Variable_2) == 0x0000C0, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::Temp_bool_Has_Been_Initd_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, Temp_bool_Has_Been_Initd_Variable_3) == 0x0000C1, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::Temp_bool_Has_Been_Initd_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, K2Node_Event_DeltaSeconds) == 0x0000C4, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, K2Node_Event_TargetLocation) == 0x0000C8, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::K2Node_Event_TargetLocation' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, K2Node_ComponentBoundEvent_HitComponent) == 0x0000E0, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, K2Node_ComponentBoundEvent_OtherActor) == 0x0000E8, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, K2Node_ComponentBoundEvent_OtherComp) == 0x0000F0, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, K2Node_ComponentBoundEvent_NormalImpulse) == 0x0000F8, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, K2Node_ComponentBoundEvent_Hit) == 0x000110, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, K2Node_ComponentBoundEvent_Defencer) == 0x0001F8, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::K2Node_ComponentBoundEvent_Defencer' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, K2Node_ComponentBoundEvent_damageInfo) == 0x000200, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::K2Node_ComponentBoundEvent_damageInfo' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, K2Node_ComponentBoundEvent_hitCount) == 0x0002D0, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::K2Node_ComponentBoundEvent_hitCount' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, K2Node_ComponentBoundEvent_AttackerComponent) == 0x0002D8, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::K2Node_ComponentBoundEvent_AttackerComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_BreakHitResult_bBlockingHit) == 0x0002E0, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_BreakHitResult_bInitialOverlap) == 0x0002E1, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_BreakHitResult_Time) == 0x0002E4, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_BreakHitResult_Distance) == 0x0002E8, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_BreakHitResult_Location) == 0x0002F0, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_BreakHitResult_ImpactPoint) == 0x000308, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_BreakHitResult_Normal) == 0x000320, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_BreakHitResult_ImpactNormal) == 0x000338, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_BreakHitResult_PhysMat) == 0x000350, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_BreakHitResult_HitActor) == 0x000358, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_BreakHitResult_HitComponent) == 0x000360, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_BreakHitResult_HitBoneName) == 0x000368, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_BreakHitResult_BoneName) == 0x000370, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_BreakHitResult_HitItem) == 0x000378, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_BreakHitResult_ElementIndex) == 0x00037C, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_BreakHitResult_FaceIndex) == 0x000380, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_BreakHitResult_TraceStart) == 0x000388, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_BreakHitResult_TraceEnd) == 0x0003A0, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, K2Node_Event_DeltaSecond) == 0x0003B8, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::K2Node_Event_DeltaSecond' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x0003C0, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, Temp_bool_IsClosed_Variable_3) == 0x0003C8, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::Temp_bool_IsClosed_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_GetFloatValue_InTime_ImplicitCast) == 0x0003CC, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_GetFloatValue_InTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0003D0, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_SetVariableFloat_InValue_ImplicitCast) == 0x0003D8, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_SetVariableFloat_InValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_GetFloatValue_InTime_ImplicitCast_1) == 0x0003DC, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_GetFloatValue_InTime_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1) == 0x0003E0, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_SetVariableFloat_InValue_ImplicitCast_1) == 0x0003E8, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_SetVariableFloat_InValue_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_GetFloatValue_InTime_ImplicitCast_2) == 0x0003EC, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_GetFloatValue_InTime_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2) == 0x0003F0, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot, CallFunc_SetVariableFloat_InValue_ImplicitCast_2) == 0x0003F8, "Member 'BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot::CallFunc_SetVariableFloat_InValue_ImplicitCast_2' has a wrong offset!");

// Function BP_SkillEffect_PowerShot.BP_SkillEffect_PowerShot_C.FadeOutEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_SkillEffect_PowerShot_C_FadeOutEffect final
{
public:
	double                                        DeltaSecond;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_PowerShot_C_FadeOutEffect) == 0x000008, "Wrong alignment on BP_SkillEffect_PowerShot_C_FadeOutEffect");
static_assert(sizeof(BP_SkillEffect_PowerShot_C_FadeOutEffect) == 0x000008, "Wrong size on BP_SkillEffect_PowerShot_C_FadeOutEffect");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_FadeOutEffect, DeltaSecond) == 0x000000, "Member 'BP_SkillEffect_PowerShot_C_FadeOutEffect::DeltaSecond' has a wrong offset!");

// Function BP_SkillEffect_PowerShot.BP_SkillEffect_PowerShot_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_SkillEffect_PowerShot_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_PowerShot_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_SkillEffect_PowerShot_C_ReceiveTick");
static_assert(sizeof(BP_SkillEffect_PowerShot_C_ReceiveTick) == 0x000004, "Wrong size on BP_SkillEffect_PowerShot_C_ReceiveTick");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_SkillEffect_PowerShot_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_SkillEffect_PowerShot.BP_SkillEffect_PowerShot_C.ShootBullet
// 0x0018 (0x0018 - 0x0000)
struct BP_SkillEffect_PowerShot_C_ShootBullet final
{
public:
	struct FVector                                TargetLocation;                                    // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_PowerShot_C_ShootBullet) == 0x000008, "Wrong alignment on BP_SkillEffect_PowerShot_C_ShootBullet");
static_assert(sizeof(BP_SkillEffect_PowerShot_C_ShootBullet) == 0x000018, "Wrong size on BP_SkillEffect_PowerShot_C_ShootBullet");
static_assert(offsetof(BP_SkillEffect_PowerShot_C_ShootBullet, TargetLocation) == 0x000000, "Member 'BP_SkillEffect_PowerShot_C_ShootBullet::TargetLocation' has a wrong offset!");

}

