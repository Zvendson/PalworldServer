#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function BP_SkillEffect_DarkBall.BP_SkillEffect_DarkBall_C.BndEvt__BP_SkillEffect_ThunderBall_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature
// 0x00E8 (0x00E8 - 0x0000)
struct BP_SkillEffect_DarkBall_C_BndEvt__BP_SkillEffect_ThunderBall_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature final
{
public:
	class AActor*                                 Defencer;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDamageInfo                         DamageInfo;                                        // 0x0008(0x00D0)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         HitCount;                                          // 0x00D8(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    AttackerComponent;                                 // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_DarkBall_C_BndEvt__BP_SkillEffect_ThunderBall_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature) == 0x000008, "Wrong alignment on BP_SkillEffect_DarkBall_C_BndEvt__BP_SkillEffect_ThunderBall_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature");
static_assert(sizeof(BP_SkillEffect_DarkBall_C_BndEvt__BP_SkillEffect_ThunderBall_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature) == 0x0000E8, "Wrong size on BP_SkillEffect_DarkBall_C_BndEvt__BP_SkillEffect_ThunderBall_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature");
static_assert(offsetof(BP_SkillEffect_DarkBall_C_BndEvt__BP_SkillEffect_ThunderBall_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature, Defencer) == 0x000000, "Member 'BP_SkillEffect_DarkBall_C_BndEvt__BP_SkillEffect_ThunderBall_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature::Defencer' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_DarkBall_C_BndEvt__BP_SkillEffect_ThunderBall_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature, DamageInfo) == 0x000008, "Member 'BP_SkillEffect_DarkBall_C_BndEvt__BP_SkillEffect_ThunderBall_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature::DamageInfo' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_DarkBall_C_BndEvt__BP_SkillEffect_ThunderBall_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature, HitCount) == 0x0000D8, "Member 'BP_SkillEffect_DarkBall_C_BndEvt__BP_SkillEffect_ThunderBall_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature::HitCount' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_DarkBall_C_BndEvt__BP_SkillEffect_ThunderBall_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature, AttackerComponent) == 0x0000E0, "Member 'BP_SkillEffect_DarkBall_C_BndEvt__BP_SkillEffect_ThunderBall_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature::AttackerComponent' has a wrong offset!");

// Function BP_SkillEffect_DarkBall.BP_SkillEffect_DarkBall_C.BndEvt__BP_SkillEffect_ThunderBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct BP_SkillEffect_DarkBall_C_BndEvt__BP_SkillEffect_ThunderBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0030(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_SkillEffect_DarkBall_C_BndEvt__BP_SkillEffect_ThunderBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_SkillEffect_DarkBall_C_BndEvt__BP_SkillEffect_ThunderBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(BP_SkillEffect_DarkBall_C_BndEvt__BP_SkillEffect_ThunderBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000118, "Wrong size on BP_SkillEffect_DarkBall_C_BndEvt__BP_SkillEffect_ThunderBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(BP_SkillEffect_DarkBall_C_BndEvt__BP_SkillEffect_ThunderBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'BP_SkillEffect_DarkBall_C_BndEvt__BP_SkillEffect_ThunderBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_DarkBall_C_BndEvt__BP_SkillEffect_ThunderBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_SkillEffect_DarkBall_C_BndEvt__BP_SkillEffect_ThunderBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_DarkBall_C_BndEvt__BP_SkillEffect_ThunderBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_SkillEffect_DarkBall_C_BndEvt__BP_SkillEffect_ThunderBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_DarkBall_C_BndEvt__BP_SkillEffect_ThunderBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'BP_SkillEffect_DarkBall_C_BndEvt__BP_SkillEffect_ThunderBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_DarkBall_C_BndEvt__BP_SkillEffect_ThunderBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, Hit) == 0x000030, "Member 'BP_SkillEffect_DarkBall_C_BndEvt__BP_SkillEffect_ThunderBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::Hit' has a wrong offset!");

// Function BP_SkillEffect_DarkBall.BP_SkillEffect_DarkBall_C.ExecuteUbergraph_BP_SkillEffect_DarkBall
// 0x0240 (0x0240 - 0x0000)
struct BP_SkillEffect_DarkBall_C_ExecuteUbergraph_BP_SkillEffect_DarkBall final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;          // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;                    // 0x0048(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AActor*                                 K2Node_ComponentBoundEvent_Defencer;               // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDamageInfo                         K2Node_ComponentBoundEvent_damageInfo;             // 0x0138(0x00D0)()
	int32                                         K2Node_ComponentBoundEvent_hitCount;               // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20C[0x4];                                      // 0x020C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_AttackerComponent;      // 0x0210(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0218(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0230(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0238(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_DarkBall_C_ExecuteUbergraph_BP_SkillEffect_DarkBall) == 0x000008, "Wrong alignment on BP_SkillEffect_DarkBall_C_ExecuteUbergraph_BP_SkillEffect_DarkBall");
static_assert(sizeof(BP_SkillEffect_DarkBall_C_ExecuteUbergraph_BP_SkillEffect_DarkBall) == 0x000240, "Wrong size on BP_SkillEffect_DarkBall_C_ExecuteUbergraph_BP_SkillEffect_DarkBall");
static_assert(offsetof(BP_SkillEffect_DarkBall_C_ExecuteUbergraph_BP_SkillEffect_DarkBall, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_DarkBall_C_ExecuteUbergraph_BP_SkillEffect_DarkBall::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_DarkBall_C_ExecuteUbergraph_BP_SkillEffect_DarkBall, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_SkillEffect_DarkBall_C_ExecuteUbergraph_BP_SkillEffect_DarkBall::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_DarkBall_C_ExecuteUbergraph_BP_SkillEffect_DarkBall, K2Node_ComponentBoundEvent_HitComponent) == 0x000018, "Member 'BP_SkillEffect_DarkBall_C_ExecuteUbergraph_BP_SkillEffect_DarkBall::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_DarkBall_C_ExecuteUbergraph_BP_SkillEffect_DarkBall, K2Node_ComponentBoundEvent_OtherActor) == 0x000020, "Member 'BP_SkillEffect_DarkBall_C_ExecuteUbergraph_BP_SkillEffect_DarkBall::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_DarkBall_C_ExecuteUbergraph_BP_SkillEffect_DarkBall, K2Node_ComponentBoundEvent_OtherComp) == 0x000028, "Member 'BP_SkillEffect_DarkBall_C_ExecuteUbergraph_BP_SkillEffect_DarkBall::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_DarkBall_C_ExecuteUbergraph_BP_SkillEffect_DarkBall, K2Node_ComponentBoundEvent_NormalImpulse) == 0x000030, "Member 'BP_SkillEffect_DarkBall_C_ExecuteUbergraph_BP_SkillEffect_DarkBall::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_DarkBall_C_ExecuteUbergraph_BP_SkillEffect_DarkBall, K2Node_ComponentBoundEvent_Hit) == 0x000048, "Member 'BP_SkillEffect_DarkBall_C_ExecuteUbergraph_BP_SkillEffect_DarkBall::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_DarkBall_C_ExecuteUbergraph_BP_SkillEffect_DarkBall, K2Node_ComponentBoundEvent_Defencer) == 0x000130, "Member 'BP_SkillEffect_DarkBall_C_ExecuteUbergraph_BP_SkillEffect_DarkBall::K2Node_ComponentBoundEvent_Defencer' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_DarkBall_C_ExecuteUbergraph_BP_SkillEffect_DarkBall, K2Node_ComponentBoundEvent_damageInfo) == 0x000138, "Member 'BP_SkillEffect_DarkBall_C_ExecuteUbergraph_BP_SkillEffect_DarkBall::K2Node_ComponentBoundEvent_damageInfo' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_DarkBall_C_ExecuteUbergraph_BP_SkillEffect_DarkBall, K2Node_ComponentBoundEvent_hitCount) == 0x000208, "Member 'BP_SkillEffect_DarkBall_C_ExecuteUbergraph_BP_SkillEffect_DarkBall::K2Node_ComponentBoundEvent_hitCount' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_DarkBall_C_ExecuteUbergraph_BP_SkillEffect_DarkBall, K2Node_ComponentBoundEvent_AttackerComponent) == 0x000210, "Member 'BP_SkillEffect_DarkBall_C_ExecuteUbergraph_BP_SkillEffect_DarkBall::K2Node_ComponentBoundEvent_AttackerComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_DarkBall_C_ExecuteUbergraph_BP_SkillEffect_DarkBall, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000218, "Member 'BP_SkillEffect_DarkBall_C_ExecuteUbergraph_BP_SkillEffect_DarkBall::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_DarkBall_C_ExecuteUbergraph_BP_SkillEffect_DarkBall, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000230, "Member 'BP_SkillEffect_DarkBall_C_ExecuteUbergraph_BP_SkillEffect_DarkBall::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_DarkBall_C_ExecuteUbergraph_BP_SkillEffect_DarkBall, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000238, "Member 'BP_SkillEffect_DarkBall_C_ExecuteUbergraph_BP_SkillEffect_DarkBall::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

}

