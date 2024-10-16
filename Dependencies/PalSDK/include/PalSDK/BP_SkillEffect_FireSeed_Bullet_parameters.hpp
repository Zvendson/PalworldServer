#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_SkillEffect_FireSeed_Bullet.BP_SkillEffect_FireSeed_Bullet_C.BndEvt__BP_SkillEffect_FireSeed_Bullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct BP_SkillEffect_FireSeed_Bullet_C_BndEvt__BP_SkillEffect_FireSeed_Bullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0030(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_SkillEffect_FireSeed_Bullet_C_BndEvt__BP_SkillEffect_FireSeed_Bullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_SkillEffect_FireSeed_Bullet_C_BndEvt__BP_SkillEffect_FireSeed_Bullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(BP_SkillEffect_FireSeed_Bullet_C_BndEvt__BP_SkillEffect_FireSeed_Bullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000118, "Wrong size on BP_SkillEffect_FireSeed_Bullet_C_BndEvt__BP_SkillEffect_FireSeed_Bullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_BndEvt__BP_SkillEffect_FireSeed_Bullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'BP_SkillEffect_FireSeed_Bullet_C_BndEvt__BP_SkillEffect_FireSeed_Bullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_BndEvt__BP_SkillEffect_FireSeed_Bullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_SkillEffect_FireSeed_Bullet_C_BndEvt__BP_SkillEffect_FireSeed_Bullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_BndEvt__BP_SkillEffect_FireSeed_Bullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_SkillEffect_FireSeed_Bullet_C_BndEvt__BP_SkillEffect_FireSeed_Bullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_BndEvt__BP_SkillEffect_FireSeed_Bullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'BP_SkillEffect_FireSeed_Bullet_C_BndEvt__BP_SkillEffect_FireSeed_Bullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_BndEvt__BP_SkillEffect_FireSeed_Bullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, Hit) == 0x000030, "Member 'BP_SkillEffect_FireSeed_Bullet_C_BndEvt__BP_SkillEffect_FireSeed_Bullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::Hit' has a wrong offset!");

// Function BP_SkillEffect_FireSeed_Bullet.BP_SkillEffect_FireSeed_Bullet_C.ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet
// 0x01F0 (0x01F0 - 0x0000)
struct BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_Event_MyHitComponent;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherHitActor;                        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_Event_OtherHitComponent;                    // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 K2Node_Event_FoliageIndex;                         // 0x0020(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                K2Node_Event_HitLocation;                          // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_HitCount;                             // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatFromStream_ReturnValue;        // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_Event_DeltaSecond;                          // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;           // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;          // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;                    // 0x00D0(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x01CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CD[0x3];                                      // 0x01CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_ProjectileGravityScale_ImplicitCast; // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DC[0x4];                                      // 0x01DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast;        // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet) == 0x000008, "Wrong alignment on BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet");
static_assert(sizeof(BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet) == 0x0001F0, "Wrong size on BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet, Temp_bool_IsClosed_Variable) == 0x000004, "Member 'BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet, Temp_bool_Has_Been_Initd_Variable) == 0x000005, "Member 'BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet, K2Node_Event_MyHitComponent) == 0x000008, "Member 'BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet::K2Node_Event_MyHitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet, K2Node_Event_OtherHitActor) == 0x000010, "Member 'BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet::K2Node_Event_OtherHitActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet, K2Node_Event_OtherHitComponent) == 0x000018, "Member 'BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet::K2Node_Event_OtherHitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet, K2Node_Event_FoliageIndex) == 0x000020, "Member 'BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet::K2Node_Event_FoliageIndex' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet, K2Node_Event_HitLocation) == 0x000030, "Member 'BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet::K2Node_Event_HitLocation' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet, K2Node_Event_HitCount) == 0x000048, "Member 'BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet::K2Node_Event_HitCount' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet, CallFunc_RandomFloatFromStream_ReturnValue) == 0x00004C, "Member 'BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet::CallFunc_RandomFloatFromStream_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000050, "Member 'BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000058, "Member 'BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet, CallFunc_MakeVector_ReturnValue) == 0x000060, "Member 'BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000078, "Member 'BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000090, "Member 'BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet, K2Node_Event_DeltaSecond) == 0x000098, "Member 'BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet::K2Node_Event_DeltaSecond' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet, K2Node_ComponentBoundEvent_HitComponent) == 0x0000A0, "Member 'BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet, K2Node_ComponentBoundEvent_OtherActor) == 0x0000A8, "Member 'BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet, K2Node_ComponentBoundEvent_OtherComp) == 0x0000B0, "Member 'BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet, K2Node_ComponentBoundEvent_NormalImpulse) == 0x0000B8, "Member 'BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet, K2Node_ComponentBoundEvent_Hit) == 0x0000D0, "Member 'BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x0001B8, "Member 'BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet, CallFunc_FClamp_ReturnValue) == 0x0001C0, "Member 'BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet, CallFunc_GetFloatValue_ReturnValue) == 0x0001C8, "Member 'BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x0001CC, "Member 'BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0001D0, "Member 'BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet, K2Node_VariableSet_ProjectileGravityScale_ImplicitCast) == 0x0001D8, "Member 'BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet::K2Node_VariableSet_ProjectileGravityScale_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x0001E0, "Member 'BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet, CallFunc_GetFloatValue_InTime_ImplicitCast) == 0x0001E8, "Member 'BP_SkillEffect_FireSeed_Bullet_C_ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet::CallFunc_GetFloatValue_InTime_ImplicitCast' has a wrong offset!");

// Function BP_SkillEffect_FireSeed_Bullet.BP_SkillEffect_FireSeed_Bullet_C.FadeOutEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_SkillEffect_FireSeed_Bullet_C_FadeOutEffect final
{
public:
	double                                        DeltaSecond;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_FireSeed_Bullet_C_FadeOutEffect) == 0x000008, "Wrong alignment on BP_SkillEffect_FireSeed_Bullet_C_FadeOutEffect");
static_assert(sizeof(BP_SkillEffect_FireSeed_Bullet_C_FadeOutEffect) == 0x000008, "Wrong size on BP_SkillEffect_FireSeed_Bullet_C_FadeOutEffect");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_FadeOutEffect, DeltaSecond) == 0x000000, "Member 'BP_SkillEffect_FireSeed_Bullet_C_FadeOutEffect::DeltaSecond' has a wrong offset!");

// Function BP_SkillEffect_FireSeed_Bullet.BP_SkillEffect_FireSeed_Bullet_C.OnHitDelegate_イベント
// 0x0048 (0x0048 - 0x0000)
struct BP_SkillEffect_FireSeed_Bullet_C_OnHitDelegate_____________ final
{
public:
	class UPrimitiveComponent*                    MyHitComponent;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherHitActor;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherHitComponent;                                 // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 FoliageIndex;                                      // 0x0018(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                HitLocation;                                       // 0x0028(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HitCount;                                          // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_FireSeed_Bullet_C_OnHitDelegate_____________) == 0x000008, "Wrong alignment on BP_SkillEffect_FireSeed_Bullet_C_OnHitDelegate_____________");
static_assert(sizeof(BP_SkillEffect_FireSeed_Bullet_C_OnHitDelegate_____________) == 0x000048, "Wrong size on BP_SkillEffect_FireSeed_Bullet_C_OnHitDelegate_____________");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_OnHitDelegate_____________, MyHitComponent) == 0x000000, "Member 'BP_SkillEffect_FireSeed_Bullet_C_OnHitDelegate_____________::MyHitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_OnHitDelegate_____________, OtherHitActor) == 0x000008, "Member 'BP_SkillEffect_FireSeed_Bullet_C_OnHitDelegate_____________::OtherHitActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_OnHitDelegate_____________, OtherHitComponent) == 0x000010, "Member 'BP_SkillEffect_FireSeed_Bullet_C_OnHitDelegate_____________::OtherHitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_OnHitDelegate_____________, FoliageIndex) == 0x000018, "Member 'BP_SkillEffect_FireSeed_Bullet_C_OnHitDelegate_____________::FoliageIndex' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_OnHitDelegate_____________, HitLocation) == 0x000028, "Member 'BP_SkillEffect_FireSeed_Bullet_C_OnHitDelegate_____________::HitLocation' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_Bullet_C_OnHitDelegate_____________, HitCount) == 0x000040, "Member 'BP_SkillEffect_FireSeed_Bullet_C_OnHitDelegate_____________::HitCount' has a wrong offset!");

}

