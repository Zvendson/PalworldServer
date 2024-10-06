#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function BP_SkillEffect_PoisonShot.BP_SkillEffect_PoisonShot_C.BndEvt__BP_SkillEffect_PoisonShot_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature
// 0x00E8 (0x00E8 - 0x0000)
struct BP_SkillEffect_PoisonShot_C_BndEvt__BP_SkillEffect_PoisonShot_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature final
{
public:
	class AActor*                                 Defencer;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDamageInfo                         DamageInfo;                                        // 0x0008(0x00D0)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         HitCount;                                          // 0x00D8(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    AttackerComponent;                                 // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_PoisonShot_C_BndEvt__BP_SkillEffect_PoisonShot_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature) == 0x000008, "Wrong alignment on BP_SkillEffect_PoisonShot_C_BndEvt__BP_SkillEffect_PoisonShot_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature");
static_assert(sizeof(BP_SkillEffect_PoisonShot_C_BndEvt__BP_SkillEffect_PoisonShot_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature) == 0x0000E8, "Wrong size on BP_SkillEffect_PoisonShot_C_BndEvt__BP_SkillEffect_PoisonShot_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature");
static_assert(offsetof(BP_SkillEffect_PoisonShot_C_BndEvt__BP_SkillEffect_PoisonShot_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature, Defencer) == 0x000000, "Member 'BP_SkillEffect_PoisonShot_C_BndEvt__BP_SkillEffect_PoisonShot_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature::Defencer' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PoisonShot_C_BndEvt__BP_SkillEffect_PoisonShot_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature, DamageInfo) == 0x000008, "Member 'BP_SkillEffect_PoisonShot_C_BndEvt__BP_SkillEffect_PoisonShot_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature::DamageInfo' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PoisonShot_C_BndEvt__BP_SkillEffect_PoisonShot_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature, HitCount) == 0x0000D8, "Member 'BP_SkillEffect_PoisonShot_C_BndEvt__BP_SkillEffect_PoisonShot_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature::HitCount' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PoisonShot_C_BndEvt__BP_SkillEffect_PoisonShot_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature, AttackerComponent) == 0x0000E0, "Member 'BP_SkillEffect_PoisonShot_C_BndEvt__BP_SkillEffect_PoisonShot_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature::AttackerComponent' has a wrong offset!");

// Function BP_SkillEffect_PoisonShot.BP_SkillEffect_PoisonShot_C.BndEvt__BP_SkillEffect_PoisonShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct BP_SkillEffect_PoisonShot_C_BndEvt__BP_SkillEffect_PoisonShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0030(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_SkillEffect_PoisonShot_C_BndEvt__BP_SkillEffect_PoisonShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_SkillEffect_PoisonShot_C_BndEvt__BP_SkillEffect_PoisonShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(BP_SkillEffect_PoisonShot_C_BndEvt__BP_SkillEffect_PoisonShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000118, "Wrong size on BP_SkillEffect_PoisonShot_C_BndEvt__BP_SkillEffect_PoisonShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(BP_SkillEffect_PoisonShot_C_BndEvt__BP_SkillEffect_PoisonShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'BP_SkillEffect_PoisonShot_C_BndEvt__BP_SkillEffect_PoisonShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PoisonShot_C_BndEvt__BP_SkillEffect_PoisonShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_SkillEffect_PoisonShot_C_BndEvt__BP_SkillEffect_PoisonShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PoisonShot_C_BndEvt__BP_SkillEffect_PoisonShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_SkillEffect_PoisonShot_C_BndEvt__BP_SkillEffect_PoisonShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PoisonShot_C_BndEvt__BP_SkillEffect_PoisonShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'BP_SkillEffect_PoisonShot_C_BndEvt__BP_SkillEffect_PoisonShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PoisonShot_C_BndEvt__BP_SkillEffect_PoisonShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, Hit) == 0x000030, "Member 'BP_SkillEffect_PoisonShot_C_BndEvt__BP_SkillEffect_PoisonShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::Hit' has a wrong offset!");

// Function BP_SkillEffect_PoisonShot.BP_SkillEffect_PoisonShot_C.ExecuteUbergraph_BP_SkillEffect_PoisonShot
// 0x0250 (0x0250 - 0x0000)
struct BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_Event_DeltaSecond;                          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;          // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;                    // 0x0048(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_Defencer;               // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDamageInfo                         K2Node_ComponentBoundEvent_damageInfo;             // 0x0140(0x00D0)()
	int32                                         K2Node_ComponentBoundEvent_hitCount;               // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_214[0x4];                                      // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_AttackerComponent;      // 0x0218(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_221[0x3];                                      // 0x0221(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0224(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0228(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0240(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast;        // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot) == 0x000008, "Wrong alignment on BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot");
static_assert(sizeof(BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot) == 0x000250, "Wrong size on BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot");
static_assert(offsetof(BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot, K2Node_Event_DeltaSecond) == 0x000008, "Member 'BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot::K2Node_Event_DeltaSecond' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000010, "Member 'BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot, K2Node_ComponentBoundEvent_HitComponent) == 0x000018, "Member 'BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot, K2Node_ComponentBoundEvent_OtherActor) == 0x000020, "Member 'BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot, K2Node_ComponentBoundEvent_OtherComp) == 0x000028, "Member 'BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot, K2Node_ComponentBoundEvent_NormalImpulse) == 0x000030, "Member 'BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot, K2Node_ComponentBoundEvent_Hit) == 0x000048, "Member 'BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot, CallFunc_FClamp_ReturnValue) == 0x000130, "Member 'BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot, K2Node_ComponentBoundEvent_Defencer) == 0x000138, "Member 'BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot::K2Node_ComponentBoundEvent_Defencer' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot, K2Node_ComponentBoundEvent_damageInfo) == 0x000140, "Member 'BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot::K2Node_ComponentBoundEvent_damageInfo' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot, K2Node_ComponentBoundEvent_hitCount) == 0x000210, "Member 'BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot::K2Node_ComponentBoundEvent_hitCount' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot, K2Node_ComponentBoundEvent_AttackerComponent) == 0x000218, "Member 'BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot::K2Node_ComponentBoundEvent_AttackerComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000220, "Member 'BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot, CallFunc_GetFloatValue_ReturnValue) == 0x000224, "Member 'BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000228, "Member 'BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000240, "Member 'BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot, CallFunc_GetFloatValue_InTime_ImplicitCast) == 0x000248, "Member 'BP_SkillEffect_PoisonShot_C_ExecuteUbergraph_BP_SkillEffect_PoisonShot::CallFunc_GetFloatValue_InTime_ImplicitCast' has a wrong offset!");

// Function BP_SkillEffect_PoisonShot.BP_SkillEffect_PoisonShot_C.FadeOutEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_SkillEffect_PoisonShot_C_FadeOutEffect final
{
public:
	double                                        DeltaSecond;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_PoisonShot_C_FadeOutEffect) == 0x000008, "Wrong alignment on BP_SkillEffect_PoisonShot_C_FadeOutEffect");
static_assert(sizeof(BP_SkillEffect_PoisonShot_C_FadeOutEffect) == 0x000008, "Wrong size on BP_SkillEffect_PoisonShot_C_FadeOutEffect");
static_assert(offsetof(BP_SkillEffect_PoisonShot_C_FadeOutEffect, DeltaSecond) == 0x000000, "Member 'BP_SkillEffect_PoisonShot_C_FadeOutEffect::DeltaSecond' has a wrong offset!");

}

