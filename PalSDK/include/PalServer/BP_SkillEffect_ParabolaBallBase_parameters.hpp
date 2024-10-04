#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function BP_SkillEffect_ParabolaBallBase.BP_SkillEffect_ParabolaBallBase_C.BndEvt__BP_SkillEffect_FlareArrow_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature
// 0x00E8 (0x00E8 - 0x0000)
struct BP_SkillEffect_ParabolaBallBase_C_BndEvt__BP_SkillEffect_FlareArrow_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature final
{
public:
	class AActor*                                 Defencer;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDamageInfo                         DamageInfo;                                        // 0x0008(0x00D0)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         HitCount;                                          // 0x00D8(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    AttackerComponent;                                 // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_ParabolaBallBase_C_BndEvt__BP_SkillEffect_FlareArrow_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature) == 0x000008, "Wrong alignment on BP_SkillEffect_ParabolaBallBase_C_BndEvt__BP_SkillEffect_FlareArrow_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature");
static_assert(sizeof(BP_SkillEffect_ParabolaBallBase_C_BndEvt__BP_SkillEffect_FlareArrow_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature) == 0x0000E8, "Wrong size on BP_SkillEffect_ParabolaBallBase_C_BndEvt__BP_SkillEffect_FlareArrow_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature");
static_assert(offsetof(BP_SkillEffect_ParabolaBallBase_C_BndEvt__BP_SkillEffect_FlareArrow_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature, Defencer) == 0x000000, "Member 'BP_SkillEffect_ParabolaBallBase_C_BndEvt__BP_SkillEffect_FlareArrow_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature::Defencer' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ParabolaBallBase_C_BndEvt__BP_SkillEffect_FlareArrow_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature, DamageInfo) == 0x000008, "Member 'BP_SkillEffect_ParabolaBallBase_C_BndEvt__BP_SkillEffect_FlareArrow_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature::DamageInfo' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ParabolaBallBase_C_BndEvt__BP_SkillEffect_FlareArrow_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature, HitCount) == 0x0000D8, "Member 'BP_SkillEffect_ParabolaBallBase_C_BndEvt__BP_SkillEffect_FlareArrow_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature::HitCount' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ParabolaBallBase_C_BndEvt__BP_SkillEffect_FlareArrow_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature, AttackerComponent) == 0x0000E0, "Member 'BP_SkillEffect_ParabolaBallBase_C_BndEvt__BP_SkillEffect_FlareArrow_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature::AttackerComponent' has a wrong offset!");

// Function BP_SkillEffect_ParabolaBallBase.BP_SkillEffect_ParabolaBallBase_C.BndEvt__BP_SkillEffect_PowerBall_1_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct BP_SkillEffect_ParabolaBallBase_C_BndEvt__BP_SkillEffect_PowerBall_1_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0030(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_SkillEffect_ParabolaBallBase_C_BndEvt__BP_SkillEffect_PowerBall_1_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_SkillEffect_ParabolaBallBase_C_BndEvt__BP_SkillEffect_PowerBall_1_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(BP_SkillEffect_ParabolaBallBase_C_BndEvt__BP_SkillEffect_PowerBall_1_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature) == 0x000118, "Wrong size on BP_SkillEffect_ParabolaBallBase_C_BndEvt__BP_SkillEffect_PowerBall_1_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(BP_SkillEffect_ParabolaBallBase_C_BndEvt__BP_SkillEffect_PowerBall_1_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'BP_SkillEffect_ParabolaBallBase_C_BndEvt__BP_SkillEffect_PowerBall_1_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ParabolaBallBase_C_BndEvt__BP_SkillEffect_PowerBall_1_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_SkillEffect_ParabolaBallBase_C_BndEvt__BP_SkillEffect_PowerBall_1_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ParabolaBallBase_C_BndEvt__BP_SkillEffect_PowerBall_1_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_SkillEffect_ParabolaBallBase_C_BndEvt__BP_SkillEffect_PowerBall_1_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ParabolaBallBase_C_BndEvt__BP_SkillEffect_PowerBall_1_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'BP_SkillEffect_ParabolaBallBase_C_BndEvt__BP_SkillEffect_PowerBall_1_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ParabolaBallBase_C_BndEvt__BP_SkillEffect_PowerBall_1_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature, Hit) == 0x000030, "Member 'BP_SkillEffect_ParabolaBallBase_C_BndEvt__BP_SkillEffect_PowerBall_1_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature::Hit' has a wrong offset!");

// Function BP_SkillEffect_ParabolaBallBase.BP_SkillEffect_ParabolaBallBase_C.ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase
// 0x0268 (0x0268 - 0x0000)
struct BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_Event_TargetLocation;                       // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;          // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;                    // 0x0058(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0140(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0150(0x0008)(NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_159[0x7];                                      // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0160(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_Defencer;               // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDamageInfo                         K2Node_ComponentBoundEvent_damageInfo;             // 0x0180(0x00D0)()
	int32                                         K2Node_ComponentBoundEvent_hitCount;               // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_254[0x4];                                      // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_AttackerComponent;      // 0x0258(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0260(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase) == 0x000008, "Wrong alignment on BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase");
static_assert(sizeof(BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase) == 0x000268, "Wrong size on BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase");
static_assert(offsetof(BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase, Temp_bool_IsClosed_Variable) == 0x000005, "Member 'BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase, K2Node_Event_TargetLocation) == 0x000008, "Member 'BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase::K2Node_Event_TargetLocation' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase, K2Node_ComponentBoundEvent_HitComponent) == 0x000028, "Member 'BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase, K2Node_ComponentBoundEvent_OtherActor) == 0x000030, "Member 'BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase, K2Node_ComponentBoundEvent_OtherComp) == 0x000038, "Member 'BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase, K2Node_ComponentBoundEvent_NormalImpulse) == 0x000040, "Member 'BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase, K2Node_ComponentBoundEvent_Hit) == 0x000058, "Member 'BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase, K2Node_CreateDelegate_OutputDelegate) == 0x000140, "Member 'BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000150, "Member 'BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase, K2Node_Event_EndPlayReason) == 0x000158, "Member 'BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000160, "Member 'BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase, K2Node_ComponentBoundEvent_Defencer) == 0x000178, "Member 'BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase::K2Node_ComponentBoundEvent_Defencer' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase, K2Node_ComponentBoundEvent_damageInfo) == 0x000180, "Member 'BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase::K2Node_ComponentBoundEvent_damageInfo' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase, K2Node_ComponentBoundEvent_hitCount) == 0x000250, "Member 'BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase::K2Node_ComponentBoundEvent_hitCount' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase, K2Node_ComponentBoundEvent_AttackerComponent) == 0x000258, "Member 'BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase::K2Node_ComponentBoundEvent_AttackerComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000260, "Member 'BP_SkillEffect_ParabolaBallBase_C_ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");

// Function BP_SkillEffect_ParabolaBallBase.BP_SkillEffect_ParabolaBallBase_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_SkillEffect_ParabolaBallBase_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_ParabolaBallBase_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_SkillEffect_ParabolaBallBase_C_ReceiveEndPlay");
static_assert(sizeof(BP_SkillEffect_ParabolaBallBase_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_SkillEffect_ParabolaBallBase_C_ReceiveEndPlay");
static_assert(offsetof(BP_SkillEffect_ParabolaBallBase_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_SkillEffect_ParabolaBallBase_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_SkillEffect_ParabolaBallBase.BP_SkillEffect_ParabolaBallBase_C.ShootBullet
// 0x0018 (0x0018 - 0x0000)
struct BP_SkillEffect_ParabolaBallBase_C_ShootBullet final
{
public:
	struct FVector                                TargetLocation;                                    // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_ParabolaBallBase_C_ShootBullet) == 0x000008, "Wrong alignment on BP_SkillEffect_ParabolaBallBase_C_ShootBullet");
static_assert(sizeof(BP_SkillEffect_ParabolaBallBase_C_ShootBullet) == 0x000018, "Wrong size on BP_SkillEffect_ParabolaBallBase_C_ShootBullet");
static_assert(offsetof(BP_SkillEffect_ParabolaBallBase_C_ShootBullet, TargetLocation) == 0x000000, "Member 'BP_SkillEffect_ParabolaBallBase_C_ShootBullet::TargetLocation' has a wrong offset!");

}

