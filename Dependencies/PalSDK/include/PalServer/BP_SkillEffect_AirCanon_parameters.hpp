#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function BP_SkillEffect_AirCanon.BP_SkillEffect_AirCanon_C.BndEvt__BP_SkillEffect_AirCanon_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature
// 0x00E8 (0x00E8 - 0x0000)
struct BP_SkillEffect_AirCanon_C_BndEvt__BP_SkillEffect_AirCanon_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature final
{
public:
	class AActor*                                 Defencer;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDamageInfo                         DamageInfo;                                        // 0x0008(0x00D0)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         HitCount;                                          // 0x00D8(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    AttackerComponent;                                 // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_AirCanon_C_BndEvt__BP_SkillEffect_AirCanon_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature) == 0x000008, "Wrong alignment on BP_SkillEffect_AirCanon_C_BndEvt__BP_SkillEffect_AirCanon_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature");
static_assert(sizeof(BP_SkillEffect_AirCanon_C_BndEvt__BP_SkillEffect_AirCanon_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature) == 0x0000E8, "Wrong size on BP_SkillEffect_AirCanon_C_BndEvt__BP_SkillEffect_AirCanon_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_BndEvt__BP_SkillEffect_AirCanon_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature, Defencer) == 0x000000, "Member 'BP_SkillEffect_AirCanon_C_BndEvt__BP_SkillEffect_AirCanon_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature::Defencer' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_BndEvt__BP_SkillEffect_AirCanon_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature, DamageInfo) == 0x000008, "Member 'BP_SkillEffect_AirCanon_C_BndEvt__BP_SkillEffect_AirCanon_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature::DamageInfo' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_BndEvt__BP_SkillEffect_AirCanon_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature, HitCount) == 0x0000D8, "Member 'BP_SkillEffect_AirCanon_C_BndEvt__BP_SkillEffect_AirCanon_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature::HitCount' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_BndEvt__BP_SkillEffect_AirCanon_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature, AttackerComponent) == 0x0000E0, "Member 'BP_SkillEffect_AirCanon_C_BndEvt__BP_SkillEffect_AirCanon_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature::AttackerComponent' has a wrong offset!");

// Function BP_SkillEffect_AirCanon.BP_SkillEffect_AirCanon_C.BndEvt__BP_SkillEffect_AirCanon_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct BP_SkillEffect_AirCanon_C_BndEvt__BP_SkillEffect_AirCanon_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0030(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_SkillEffect_AirCanon_C_BndEvt__BP_SkillEffect_AirCanon_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_SkillEffect_AirCanon_C_BndEvt__BP_SkillEffect_AirCanon_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(BP_SkillEffect_AirCanon_C_BndEvt__BP_SkillEffect_AirCanon_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000118, "Wrong size on BP_SkillEffect_AirCanon_C_BndEvt__BP_SkillEffect_AirCanon_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_BndEvt__BP_SkillEffect_AirCanon_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'BP_SkillEffect_AirCanon_C_BndEvt__BP_SkillEffect_AirCanon_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_BndEvt__BP_SkillEffect_AirCanon_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_SkillEffect_AirCanon_C_BndEvt__BP_SkillEffect_AirCanon_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_BndEvt__BP_SkillEffect_AirCanon_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_SkillEffect_AirCanon_C_BndEvt__BP_SkillEffect_AirCanon_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_BndEvt__BP_SkillEffect_AirCanon_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'BP_SkillEffect_AirCanon_C_BndEvt__BP_SkillEffect_AirCanon_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_BndEvt__BP_SkillEffect_AirCanon_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, Hit) == 0x000030, "Member 'BP_SkillEffect_AirCanon_C_BndEvt__BP_SkillEffect_AirCanon_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::Hit' has a wrong offset!");

// Function BP_SkillEffect_AirCanon.BP_SkillEffect_AirCanon_C.ExecuteUbergraph_BP_SkillEffect_AirCanon
// 0x0398 (0x0398 - 0x0000)
struct BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_1;                     // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;               // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_2;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1; // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue_1;                     // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_1;              // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;           // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;          // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;                    // 0x00B0(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19A[0x2];                                      // 0x019A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A4[0x4];                                      // 0x01A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x01A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x01C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x01D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x01F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0208(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0210(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0218(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23C[0x4];                                      // 0x023C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0240(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0258(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0270(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_Event_DeltaSecond;                          // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_2;                     // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_281[0x7];                                      // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_ComponentBoundEvent_Defencer;               // 0x0288(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDamageInfo                         K2Node_ComponentBoundEvent_damageInfo;             // 0x0290(0x00D0)()
	int32                                         K2Node_ComponentBoundEvent_hitCount;               // 0x0360(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_364[0x4];                                      // 0x0364(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_AttackerComponent;      // 0x0368(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast;        // 0x0370(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_374[0x4];                                      // 0x0374(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0378(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x0380(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast_1;      // 0x0384(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x0388(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast_1;  // 0x0390(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon) == 0x000008, "Wrong alignment on BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon");
static_assert(sizeof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon) == 0x000398, "Wrong size on BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, Temp_bool_IsClosed_Variable) == 0x000004, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, Temp_bool_Has_Been_Initd_Variable) == 0x000005, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, Temp_bool_IsClosed_Variable_1) == 0x000006, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, Temp_bool_Has_Been_Initd_Variable_1) == 0x000007, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000008, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable) == 0x000010, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000018, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_FClamp_ReturnValue) == 0x000020, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_GetFloatValue_ReturnValue) == 0x000028, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_SelectFloat_ReturnValue) == 0x000030, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, Temp_bool_Has_Been_Initd_Variable_2) == 0x000038, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::Temp_bool_Has_Been_Initd_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000040, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1) == 0x000048, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000050, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000058, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_FClamp_ReturnValue_1) == 0x000060, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_GetFloatValue_ReturnValue_1) == 0x000068, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_GetFloatValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_SelectFloat_ReturnValue_1) == 0x000070, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000078, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, K2Node_ComponentBoundEvent_HitComponent) == 0x000080, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, K2Node_ComponentBoundEvent_OtherActor) == 0x000088, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, K2Node_ComponentBoundEvent_OtherComp) == 0x000090, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, K2Node_ComponentBoundEvent_NormalImpulse) == 0x000098, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, K2Node_ComponentBoundEvent_Hit) == 0x0000B0, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_BreakHitResult_bBlockingHit) == 0x000198, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_BreakHitResult_bInitialOverlap) == 0x000199, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_BreakHitResult_Time) == 0x00019C, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_BreakHitResult_Distance) == 0x0001A0, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_BreakHitResult_Location) == 0x0001A8, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_BreakHitResult_ImpactPoint) == 0x0001C0, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_BreakHitResult_Normal) == 0x0001D8, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_BreakHitResult_ImpactNormal) == 0x0001F0, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_BreakHitResult_PhysMat) == 0x000208, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_BreakHitResult_HitActor) == 0x000210, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_BreakHitResult_HitComponent) == 0x000218, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_BreakHitResult_HitBoneName) == 0x000220, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_BreakHitResult_BoneName) == 0x000228, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_BreakHitResult_HitItem) == 0x000230, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_BreakHitResult_ElementIndex) == 0x000234, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_BreakHitResult_FaceIndex) == 0x000238, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_BreakHitResult_TraceStart) == 0x000240, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_BreakHitResult_TraceEnd) == 0x000258, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000270, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, K2Node_Event_DeltaSecond) == 0x000278, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::K2Node_Event_DeltaSecond' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, Temp_bool_IsClosed_Variable_2) == 0x000280, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::Temp_bool_IsClosed_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, K2Node_ComponentBoundEvent_Defencer) == 0x000288, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::K2Node_ComponentBoundEvent_Defencer' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, K2Node_ComponentBoundEvent_damageInfo) == 0x000290, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::K2Node_ComponentBoundEvent_damageInfo' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, K2Node_ComponentBoundEvent_hitCount) == 0x000360, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::K2Node_ComponentBoundEvent_hitCount' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, K2Node_ComponentBoundEvent_AttackerComponent) == 0x000368, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::K2Node_ComponentBoundEvent_AttackerComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_GetFloatValue_InTime_ImplicitCast) == 0x000370, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_GetFloatValue_InTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000378, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_SetVariableFloat_InValue_ImplicitCast) == 0x000380, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_SetVariableFloat_InValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_GetFloatValue_InTime_ImplicitCast_1) == 0x000384, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_GetFloatValue_InTime_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1) == 0x000388, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon, CallFunc_SetVariableFloat_InValue_ImplicitCast_1) == 0x000390, "Member 'BP_SkillEffect_AirCanon_C_ExecuteUbergraph_BP_SkillEffect_AirCanon::CallFunc_SetVariableFloat_InValue_ImplicitCast_1' has a wrong offset!");

// Function BP_SkillEffect_AirCanon.BP_SkillEffect_AirCanon_C.FadeOutEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_SkillEffect_AirCanon_C_FadeOutEffect final
{
public:
	double                                        DeltaSecond;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_AirCanon_C_FadeOutEffect) == 0x000008, "Wrong alignment on BP_SkillEffect_AirCanon_C_FadeOutEffect");
static_assert(sizeof(BP_SkillEffect_AirCanon_C_FadeOutEffect) == 0x000008, "Wrong size on BP_SkillEffect_AirCanon_C_FadeOutEffect");
static_assert(offsetof(BP_SkillEffect_AirCanon_C_FadeOutEffect, DeltaSecond) == 0x000000, "Member 'BP_SkillEffect_AirCanon_C_FadeOutEffect::DeltaSecond' has a wrong offset!");

}

