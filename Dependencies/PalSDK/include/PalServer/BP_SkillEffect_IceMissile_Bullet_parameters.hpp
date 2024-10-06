#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function BP_SkillEffect_IceMissile_Bullet.BP_SkillEffect_IceMissile_Bullet_C.BndEvt__BP_EnergyShotBullet_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature
// 0x00E8 (0x00E8 - 0x0000)
struct BP_SkillEffect_IceMissile_Bullet_C_BndEvt__BP_EnergyShotBullet_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature final
{
public:
	class AActor*                                 Defencer;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDamageInfo                         DamageInfo;                                        // 0x0008(0x00D0)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         HitCount;                                          // 0x00D8(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    AttackerComponent;                                 // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_IceMissile_Bullet_C_BndEvt__BP_EnergyShotBullet_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature) == 0x000008, "Wrong alignment on BP_SkillEffect_IceMissile_Bullet_C_BndEvt__BP_EnergyShotBullet_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature");
static_assert(sizeof(BP_SkillEffect_IceMissile_Bullet_C_BndEvt__BP_EnergyShotBullet_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature) == 0x0000E8, "Wrong size on BP_SkillEffect_IceMissile_Bullet_C_BndEvt__BP_EnergyShotBullet_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_BndEvt__BP_EnergyShotBullet_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature, Defencer) == 0x000000, "Member 'BP_SkillEffect_IceMissile_Bullet_C_BndEvt__BP_EnergyShotBullet_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature::Defencer' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_BndEvt__BP_EnergyShotBullet_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature, DamageInfo) == 0x000008, "Member 'BP_SkillEffect_IceMissile_Bullet_C_BndEvt__BP_EnergyShotBullet_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature::DamageInfo' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_BndEvt__BP_EnergyShotBullet_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature, HitCount) == 0x0000D8, "Member 'BP_SkillEffect_IceMissile_Bullet_C_BndEvt__BP_EnergyShotBullet_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature::HitCount' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_BndEvt__BP_EnergyShotBullet_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature, AttackerComponent) == 0x0000E0, "Member 'BP_SkillEffect_IceMissile_Bullet_C_BndEvt__BP_EnergyShotBullet_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature::AttackerComponent' has a wrong offset!");

// Function BP_SkillEffect_IceMissile_Bullet.BP_SkillEffect_IceMissile_Bullet_C.BndEvt__BP_EnergyShotBullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct BP_SkillEffect_IceMissile_Bullet_C_BndEvt__BP_EnergyShotBullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0030(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_SkillEffect_IceMissile_Bullet_C_BndEvt__BP_EnergyShotBullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_SkillEffect_IceMissile_Bullet_C_BndEvt__BP_EnergyShotBullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(BP_SkillEffect_IceMissile_Bullet_C_BndEvt__BP_EnergyShotBullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000118, "Wrong size on BP_SkillEffect_IceMissile_Bullet_C_BndEvt__BP_EnergyShotBullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_BndEvt__BP_EnergyShotBullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'BP_SkillEffect_IceMissile_Bullet_C_BndEvt__BP_EnergyShotBullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_BndEvt__BP_EnergyShotBullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_SkillEffect_IceMissile_Bullet_C_BndEvt__BP_EnergyShotBullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_BndEvt__BP_EnergyShotBullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_SkillEffect_IceMissile_Bullet_C_BndEvt__BP_EnergyShotBullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_BndEvt__BP_EnergyShotBullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'BP_SkillEffect_IceMissile_Bullet_C_BndEvt__BP_EnergyShotBullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_BndEvt__BP_EnergyShotBullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, Hit) == 0x000030, "Member 'BP_SkillEffect_IceMissile_Bullet_C_BndEvt__BP_EnergyShotBullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::Hit' has a wrong offset!");

// Function BP_SkillEffect_IceMissile_Bullet.BP_SkillEffect_IceMissile_Bullet_C.ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet
// 0x0528 (0x0528 - 0x0000)
struct BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;               // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_1;                     // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_2;               // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_3;               // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B[0x5];                                        // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue_1;                     // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_1;              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_2;                     // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_CustomEvent_DeltaTime;                      // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue_1;      // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_CustomEvent_MyHitComponent;                 // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_OtherHitActor;                  // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_CustomEvent_OtherHitComponent;              // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 K2Node_CustomEvent_FoliageIndex;                   // 0x00F0(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                K2Node_CustomEvent_HitLocation;                    // 0x0100(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_HitCount;                       // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerControlActor_ReturnValue;         // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11D[0x3];                                      // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0120(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_131[0x7];                                      // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0138(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x0140(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue_2;      // 0x0158(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FindOwnerActor_ReturnValue;               // 0x0160(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_4;        // 0x0168(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_3;                     // 0x0182(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0183(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_184[0x4];                                      // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_5;        // 0x0188(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x01A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue;                        // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_4;               // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1; // 0x01C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_4;                     // 0x01C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C4[0x4];                                      // 0x01C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D1[0x7];                                      // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue_1;       // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;           // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x01F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x01F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;          // 0x0200(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;                    // 0x0218(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AActor*                                 K2Node_ComponentBoundEvent_Defencer;               // 0x0300(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDamageInfo                         K2Node_ComponentBoundEvent_damageInfo;             // 0x0308(0x00D0)()
	int32                                         K2Node_ComponentBoundEvent_hitCount;               // 0x03D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DC[0x4];                                      // 0x03DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_AttackerComponent;      // 0x03E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_6;        // 0x03E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue_3;      // 0x0400(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue;      // 0x0408(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_5;               // 0x0409(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40A[0x6];                                      // 0x040A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_Event_DeltaSecond;                          // 0x0410(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_5;                     // 0x0418(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_419[0x7];                                      // 0x0419(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetActionTargetActor_ReturnValue;         // 0x0420(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0428(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x0438(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0448(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_449[0x7];                                      // 0x0449(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0450(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0458(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMaxSpeed_ReturnValue;                  // 0x0460(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_464[0x4];                                      // 0x0464(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x0468(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetCurrentTargetLocation_ReturnValue;     // 0x0480(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x0498(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x04B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x04C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x04E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x04F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F9[0x3];                                      // 0x04F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast;        // 0x04FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0500(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast_1;      // 0x0508(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50C[0x4];                                      // 0x050C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x0510(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x0518(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x051C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast_1;  // 0x0520(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet) == 0x000008, "Wrong alignment on BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet");
static_assert(sizeof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet) == 0x000528, "Wrong size on BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, Temp_bool_IsClosed_Variable) == 0x000004, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable) == 0x000005, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, Temp_bool_Has_Been_Initd_Variable) == 0x000006, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, Temp_bool_Has_Been_Initd_Variable_1) == 0x000007, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, Temp_bool_IsClosed_Variable_1) == 0x000008, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, Temp_bool_Has_Been_Initd_Variable_2) == 0x000009, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::Temp_bool_Has_Been_Initd_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, Temp_bool_Has_Been_Initd_Variable_3) == 0x00000A, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::Temp_bool_Has_Been_Initd_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000010, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000018, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_FClamp_ReturnValue) == 0x000020, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_GetFloatValue_ReturnValue) == 0x000028, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000030, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000038, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_SelectFloat_ReturnValue) == 0x000040, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_FClamp_ReturnValue_1) == 0x000048, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_GetFloatValue_ReturnValue_1) == 0x000050, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_GetFloatValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, Temp_bool_IsClosed_Variable_2) == 0x000054, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::Temp_bool_IsClosed_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000058, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, K2Node_Event_OtherActor) == 0x000060, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, K2Node_Event_DeltaSeconds) == 0x000068, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, K2Node_CustomEvent_DeltaTime) == 0x000070, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::K2Node_CustomEvent_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000078, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000090, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000098, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x0000B0, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x0000C8, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_SpawnSystemAtLocation_ReturnValue_1) == 0x0000D0, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_SpawnSystemAtLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, K2Node_CustomEvent_MyHitComponent) == 0x0000D8, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::K2Node_CustomEvent_MyHitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, K2Node_CustomEvent_OtherHitActor) == 0x0000E0, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::K2Node_CustomEvent_OtherHitActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, K2Node_CustomEvent_OtherHitComponent) == 0x0000E8, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::K2Node_CustomEvent_OtherHitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, K2Node_CustomEvent_FoliageIndex) == 0x0000F0, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::K2Node_CustomEvent_FoliageIndex' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, K2Node_CustomEvent_HitLocation) == 0x000100, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::K2Node_CustomEvent_HitLocation' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, K2Node_CustomEvent_HitCount) == 0x000118, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::K2Node_CustomEvent_HitCount' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_IsPlayerControlActor_ReturnValue) == 0x00011C, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_IsPlayerControlActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, K2Node_CreateDelegate_OutputDelegate) == 0x000120, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_Not_PreBool_ReturnValue) == 0x000130, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000138, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x000140, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_SpawnSystemAtLocation_ReturnValue_2) == 0x000158, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_SpawnSystemAtLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_FindOwnerActor_ReturnValue) == 0x000160, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_FindOwnerActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_K2_GetActorLocation_ReturnValue_4) == 0x000168, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_K2_GetActorLocation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000180, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_BooleanAND_ReturnValue) == 0x000181, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, Temp_bool_IsClosed_Variable_3) == 0x000182, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::Temp_bool_IsClosed_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_IsValid_ReturnValue) == 0x000183, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_K2_GetActorLocation_ReturnValue_5) == 0x000188, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_K2_GetActorLocation_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0001A0, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_VSize_ReturnValue) == 0x0001B8, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x0001C0, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, Temp_bool_Has_Been_Initd_Variable_4) == 0x0001C1, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::Temp_bool_Has_Been_Initd_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1) == 0x0001C2, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, Temp_bool_IsClosed_Variable_4) == 0x0001C3, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::Temp_bool_IsClosed_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x0001C8, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_IsValid_ReturnValue_1) == 0x0001D0, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_GetWorldDeltaSeconds_ReturnValue_1) == 0x0001D8, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_GetWorldDeltaSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0001E0, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, K2Node_ComponentBoundEvent_HitComponent) == 0x0001E8, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, K2Node_ComponentBoundEvent_OtherActor) == 0x0001F0, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, K2Node_ComponentBoundEvent_OtherComp) == 0x0001F8, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, K2Node_ComponentBoundEvent_NormalImpulse) == 0x000200, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, K2Node_ComponentBoundEvent_Hit) == 0x000218, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, K2Node_ComponentBoundEvent_Defencer) == 0x000300, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::K2Node_ComponentBoundEvent_Defencer' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, K2Node_ComponentBoundEvent_damageInfo) == 0x000308, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::K2Node_ComponentBoundEvent_damageInfo' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, K2Node_ComponentBoundEvent_hitCount) == 0x0003D8, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::K2Node_ComponentBoundEvent_hitCount' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, K2Node_ComponentBoundEvent_AttackerComponent) == 0x0003E0, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::K2Node_ComponentBoundEvent_AttackerComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_K2_GetActorLocation_ReturnValue_6) == 0x0003E8, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_K2_GetActorLocation_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_SpawnSystemAtLocation_ReturnValue_3) == 0x000400, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_SpawnSystemAtLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_EqualEqual_VectorVector_ReturnValue) == 0x000408, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_EqualEqual_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, Temp_bool_Has_Been_Initd_Variable_5) == 0x000409, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::Temp_bool_Has_Been_Initd_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, K2Node_Event_DeltaSecond) == 0x000410, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::K2Node_Event_DeltaSecond' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, Temp_bool_IsClosed_Variable_5) == 0x000418, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::Temp_bool_IsClosed_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_GetActionTargetActor_ReturnValue) == 0x000420, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_GetActionTargetActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_GetDisplayName_ReturnValue) == 0x000428, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_GetDisplayName_ReturnValue_1) == 0x000438, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_IsValid_ReturnValue_2) == 0x000448, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_SelectFloat_ReturnValue_1) == 0x000450, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000458, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_GetMaxSpeed_ReturnValue) == 0x000460, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_GetMaxSpeed_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000468, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_GetCurrentTargetLocation_ReturnValue) == 0x000480, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_GetCurrentTargetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x000498, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_Normal_ReturnValue) == 0x0004B0, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x0004C8, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0004E0, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_K2_SetActorRotation_ReturnValue) == 0x0004F8, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_GetFloatValue_InTime_ImplicitCast) == 0x0004FC, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_GetFloatValue_InTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000500, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_GetFloatValue_InTime_ImplicitCast_1) == 0x000508, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_GetFloatValue_InTime_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1) == 0x000510, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_SetVariableFloat_InValue_ImplicitCast) == 0x000518, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_SetVariableFloat_InValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x00051C, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet, CallFunc_SetVariableFloat_InValue_ImplicitCast_1) == 0x000520, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet::CallFunc_SetVariableFloat_InValue_ImplicitCast_1' has a wrong offset!");

// Function BP_SkillEffect_IceMissile_Bullet.BP_SkillEffect_IceMissile_Bullet_C.FadeOutEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_SkillEffect_IceMissile_Bullet_C_FadeOutEffect final
{
public:
	double                                        DeltaSecond;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_IceMissile_Bullet_C_FadeOutEffect) == 0x000008, "Wrong alignment on BP_SkillEffect_IceMissile_Bullet_C_FadeOutEffect");
static_assert(sizeof(BP_SkillEffect_IceMissile_Bullet_C_FadeOutEffect) == 0x000008, "Wrong size on BP_SkillEffect_IceMissile_Bullet_C_FadeOutEffect");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_FadeOutEffect, DeltaSecond) == 0x000000, "Member 'BP_SkillEffect_IceMissile_Bullet_C_FadeOutEffect::DeltaSecond' has a wrong offset!");

// Function BP_SkillEffect_IceMissile_Bullet.BP_SkillEffect_IceMissile_Bullet_C.GetCurrentTargetLocation
// 0x0058 (0x0058 - 0x0000)
struct BP_SkillEffect_IceMissile_Bullet_C_GetCurrentTargetLocation final
{
public:
	struct FVector                                ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetOwnerCharacter_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerControlled_ReturnValue;           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActionTargetLocation_ReturnValue;      // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_IceMissile_Bullet_C_GetCurrentTargetLocation) == 0x000008, "Wrong alignment on BP_SkillEffect_IceMissile_Bullet_C_GetCurrentTargetLocation");
static_assert(sizeof(BP_SkillEffect_IceMissile_Bullet_C_GetCurrentTargetLocation) == 0x000058, "Wrong size on BP_SkillEffect_IceMissile_Bullet_C_GetCurrentTargetLocation");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_GetCurrentTargetLocation, ReturnValue) == 0x000000, "Member 'BP_SkillEffect_IceMissile_Bullet_C_GetCurrentTargetLocation::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_GetCurrentTargetLocation, CallFunc_GetOwnerCharacter_ReturnValue) == 0x000018, "Member 'BP_SkillEffect_IceMissile_Bullet_C_GetCurrentTargetLocation::CallFunc_GetOwnerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_GetCurrentTargetLocation, CallFunc_IsPlayerControlled_ReturnValue) == 0x000020, "Member 'BP_SkillEffect_IceMissile_Bullet_C_GetCurrentTargetLocation::CallFunc_IsPlayerControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_GetCurrentTargetLocation, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000028, "Member 'BP_SkillEffect_IceMissile_Bullet_C_GetCurrentTargetLocation::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_GetCurrentTargetLocation, CallFunc_GetActionTargetLocation_ReturnValue) == 0x000040, "Member 'BP_SkillEffect_IceMissile_Bullet_C_GetCurrentTargetLocation::CallFunc_GetActionTargetLocation_ReturnValue' has a wrong offset!");

// Function BP_SkillEffect_IceMissile_Bullet.BP_SkillEffect_IceMissile_Bullet_C.OnHitDelegate_イベント_0
// 0x0048 (0x0048 - 0x0000)
struct BP_SkillEffect_IceMissile_Bullet_C_OnHitDelegate______________0 final
{
public:
	class UPrimitiveComponent*                    MyHitComponent;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherHitActor;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherHitComponent;                                 // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 FoliageIndex;                                      // 0x0018(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                HitLocation;                                       // 0x0028(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HitCount;                                          // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_IceMissile_Bullet_C_OnHitDelegate______________0) == 0x000008, "Wrong alignment on BP_SkillEffect_IceMissile_Bullet_C_OnHitDelegate______________0");
static_assert(sizeof(BP_SkillEffect_IceMissile_Bullet_C_OnHitDelegate______________0) == 0x000048, "Wrong size on BP_SkillEffect_IceMissile_Bullet_C_OnHitDelegate______________0");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_OnHitDelegate______________0, MyHitComponent) == 0x000000, "Member 'BP_SkillEffect_IceMissile_Bullet_C_OnHitDelegate______________0::MyHitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_OnHitDelegate______________0, OtherHitActor) == 0x000008, "Member 'BP_SkillEffect_IceMissile_Bullet_C_OnHitDelegate______________0::OtherHitActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_OnHitDelegate______________0, OtherHitComponent) == 0x000010, "Member 'BP_SkillEffect_IceMissile_Bullet_C_OnHitDelegate______________0::OtherHitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_OnHitDelegate______________0, FoliageIndex) == 0x000018, "Member 'BP_SkillEffect_IceMissile_Bullet_C_OnHitDelegate______________0::FoliageIndex' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_OnHitDelegate______________0, HitLocation) == 0x000028, "Member 'BP_SkillEffect_IceMissile_Bullet_C_OnHitDelegate______________0::HitLocation' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_OnHitDelegate______________0, HitCount) == 0x000040, "Member 'BP_SkillEffect_IceMissile_Bullet_C_OnHitDelegate______________0::HitCount' has a wrong offset!");

// Function BP_SkillEffect_IceMissile_Bullet.BP_SkillEffect_IceMissile_Bullet_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_SkillEffect_IceMissile_Bullet_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_IceMissile_Bullet_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on BP_SkillEffect_IceMissile_Bullet_C_ReceiveActorBeginOverlap");
static_assert(sizeof(BP_SkillEffect_IceMissile_Bullet_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on BP_SkillEffect_IceMissile_Bullet_C_ReceiveActorBeginOverlap");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

// Function BP_SkillEffect_IceMissile_Bullet.BP_SkillEffect_IceMissile_Bullet_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_SkillEffect_IceMissile_Bullet_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_IceMissile_Bullet_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_SkillEffect_IceMissile_Bullet_C_ReceiveTick");
static_assert(sizeof(BP_SkillEffect_IceMissile_Bullet_C_ReceiveTick) == 0x000004, "Wrong size on BP_SkillEffect_IceMissile_Bullet_C_ReceiveTick");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_SkillEffect_IceMissile_Bullet_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_SkillEffect_IceMissile_Bullet.BP_SkillEffect_IceMissile_Bullet_C.TurnAround
// 0x0008 (0x0008 - 0x0000)
struct BP_SkillEffect_IceMissile_Bullet_C_TurnAround final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_IceMissile_Bullet_C_TurnAround) == 0x000008, "Wrong alignment on BP_SkillEffect_IceMissile_Bullet_C_TurnAround");
static_assert(sizeof(BP_SkillEffect_IceMissile_Bullet_C_TurnAround) == 0x000008, "Wrong size on BP_SkillEffect_IceMissile_Bullet_C_TurnAround");
static_assert(offsetof(BP_SkillEffect_IceMissile_Bullet_C_TurnAround, DeltaTime) == 0x000000, "Member 'BP_SkillEffect_IceMissile_Bullet_C_TurnAround::DeltaTime' has a wrong offset!");

}

