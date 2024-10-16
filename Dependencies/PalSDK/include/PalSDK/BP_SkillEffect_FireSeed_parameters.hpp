#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_SkillEffect_FireSeed.BP_SkillEffect_FireSeed_C.BndEvt__BP_SkillEffect_FireSeed_DisableHomingTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_DisableHomingTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_DisableHomingTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_DisableHomingTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_DisableHomingTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_DisableHomingTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_DisableHomingTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_DisableHomingTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_DisableHomingTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_DisableHomingTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_DisableHomingTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_DisableHomingTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_DisableHomingTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_DisableHomingTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_DisableHomingTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_DisableHomingTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_DisableHomingTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_DisableHomingTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_SkillEffect_FireSeed.BP_SkillEffect_FireSeed_C.BndEvt__BP_SkillEffect_FireSeed_ExplosionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_ExplosionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_ExplosionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_ExplosionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_ExplosionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_ExplosionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_ExplosionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_ExplosionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_ExplosionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_ExplosionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_ExplosionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_ExplosionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_ExplosionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_ExplosionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_ExplosionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_ExplosionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_ExplosionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_ExplosionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_SkillEffect_FireSeed.BP_SkillEffect_FireSeed_C.BndEvt__BP_SkillEffect_FireSeed_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0030(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature) == 0x000118, "Wrong size on BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature, Hit) == 0x000030, "Member 'BP_SkillEffect_FireSeed_C_BndEvt__BP_SkillEffect_FireSeed_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature::Hit' has a wrong offset!");

// Function BP_SkillEffect_FireSeed.BP_SkillEffect_FireSeed_C.ExecuteUbergraph_BP_SkillEffect_FireSeed
// 0x0428 (0x0428 - 0x0000)
struct BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_2;           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_2;            // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep_1;           // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult_1;          // 0x0050(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0138(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0150(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0168(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0178(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0184(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_185[0x3];                                      // 0x0185(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0188(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0270(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTargetActor_ReturnValue;         // 0x0288(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0290(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x02A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AA[0x6];                                      // 0x02AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_Event_DeltaSecond;                          // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B9[0x7];                                      // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D1[0x3];                                      // 0x02D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x02D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;           // 0x02D8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x02E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x02E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;          // 0x02F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;                    // 0x0308(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x03F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x03F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsApplicableDamage_ReturnValue;           // 0x0410(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_411[0x7];                                      // 0x0411(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Dot_VectorVector_ReturnValue;             // 0x0418(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0420(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_421[0x3];                                      // 0x0421(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast;        // 0x0424(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed) == 0x000008, "Wrong alignment on BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed");
static_assert(sizeof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed) == 0x000428, "Wrong size on BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, Temp_bool_IsClosed_Variable) == 0x000020, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000028, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000030, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, K2Node_ComponentBoundEvent_OtherActor_2) == 0x000038, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::K2Node_ComponentBoundEvent_OtherActor_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, K2Node_ComponentBoundEvent_OtherComp_2) == 0x000040, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::K2Node_ComponentBoundEvent_OtherComp_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000048, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, K2Node_ComponentBoundEvent_bFromSweep_1) == 0x00004C, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::K2Node_ComponentBoundEvent_bFromSweep_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, K2Node_ComponentBoundEvent_SweepResult_1) == 0x000050, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::K2Node_ComponentBoundEvent_SweepResult_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000138, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000150, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000168, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000170, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000178, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000180, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, K2Node_ComponentBoundEvent_bFromSweep) == 0x000184, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, K2Node_ComponentBoundEvent_SweepResult) == 0x000188, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000270, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, CallFunc_GetActionTargetActor_ReturnValue) == 0x000288, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::CallFunc_GetActionTargetActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, CallFunc_Normal_ReturnValue) == 0x000290, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0002A8, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, CallFunc_IsValid_ReturnValue) == 0x0002A9, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, K2Node_Event_DeltaSecond) == 0x0002B0, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::K2Node_Event_DeltaSecond' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, Temp_bool_Has_Been_Initd_Variable) == 0x0002B8, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x0002C0, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, CallFunc_FClamp_ReturnValue) == 0x0002C8, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x0002D0, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, CallFunc_GetFloatValue_ReturnValue) == 0x0002D4, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, K2Node_ComponentBoundEvent_HitComponent) == 0x0002D8, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, K2Node_ComponentBoundEvent_OtherActor) == 0x0002E0, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, K2Node_ComponentBoundEvent_OtherComp) == 0x0002E8, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, K2Node_ComponentBoundEvent_NormalImpulse) == 0x0002F0, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, K2Node_ComponentBoundEvent_Hit) == 0x000308, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, CallFunc_GetOwner_ReturnValue) == 0x0003F0, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, CallFunc_GetActorForwardVector_ReturnValue) == 0x0003F8, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, CallFunc_IsApplicableDamage_ReturnValue) == 0x000410, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::CallFunc_IsApplicableDamage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, CallFunc_Dot_VectorVector_ReturnValue) == 0x000418, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000420, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed, CallFunc_GetFloatValue_InTime_ImplicitCast) == 0x000424, "Member 'BP_SkillEffect_FireSeed_C_ExecuteUbergraph_BP_SkillEffect_FireSeed::CallFunc_GetFloatValue_InTime_ImplicitCast' has a wrong offset!");

// Function BP_SkillEffect_FireSeed.BP_SkillEffect_FireSeed_C.Explosion
// 0x0390 (0x0390 - 0x0000)
struct BP_SkillEffect_FireSeed_C_Explosion final
{
public:
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomFloatInRangeFromStream_ReturnValue; // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RandomUnitVectorInConeInDegreesFromStream_ReturnValue; // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x00C8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x01B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CC[0x4];                                      // 0x01CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x01D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x01F0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0258(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x0260(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class ABP_SkillEffect_FireSeed_Bullet_C*      CallFunc_FinishSpawningActor_ReturnValue;          // 0x0278(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult_1;  // 0x0280(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0368(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_369[0x3];                                      // 0x0369(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomUnitVectorInConeInDegreesFromStream_ConeHalfAngleInDegrees_ImplicitCast; // 0x036C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x0370(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_374[0x4];                                      // 0x0374(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x0378(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Roll_ImplicitCast;            // 0x0380(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_FireSeed_C_Explosion) == 0x000010, "Wrong alignment on BP_SkillEffect_FireSeed_C_Explosion");
static_assert(sizeof(BP_SkillEffect_FireSeed_C_Explosion) == 0x000390, "Wrong size on BP_SkillEffect_FireSeed_C_Explosion");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Explosion, Temp_bool_Has_Been_Initd_Variable) == 0x000000, "Member 'BP_SkillEffect_FireSeed_C_Explosion::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Explosion, Temp_int_Variable) == 0x000004, "Member 'BP_SkillEffect_FireSeed_C_Explosion::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Explosion, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000008, "Member 'BP_SkillEffect_FireSeed_C_Explosion::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Explosion, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_SkillEffect_FireSeed_C_Explosion::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Explosion, Temp_bool_IsClosed_Variable) == 0x000014, "Member 'BP_SkillEffect_FireSeed_C_Explosion::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Explosion, CallFunc_RandomFloatInRangeFromStream_ReturnValue) == 0x000018, "Member 'BP_SkillEffect_FireSeed_C_Explosion::CallFunc_RandomFloatInRangeFromStream_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Explosion, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000020, "Member 'BP_SkillEffect_FireSeed_C_Explosion::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Explosion, CallFunc_GetForwardVector_ReturnValue) == 0x000038, "Member 'BP_SkillEffect_FireSeed_C_Explosion::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Explosion, CallFunc_RandomUnitVectorInConeInDegreesFromStream_ReturnValue) == 0x000050, "Member 'BP_SkillEffect_FireSeed_C_Explosion::CallFunc_RandomUnitVectorInConeInDegreesFromStream_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Explosion, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000068, "Member 'BP_SkillEffect_FireSeed_C_Explosion::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Explosion, CallFunc_GetOwner_ReturnValue) == 0x000070, "Member 'BP_SkillEffect_FireSeed_C_Explosion::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Explosion, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000078, "Member 'BP_SkillEffect_FireSeed_C_Explosion::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Explosion, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000080, "Member 'BP_SkillEffect_FireSeed_C_Explosion::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Explosion, CallFunc_MakeRotator_ReturnValue) == 0x000098, "Member 'BP_SkillEffect_FireSeed_C_Explosion::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Explosion, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0000B0, "Member 'BP_SkillEffect_FireSeed_C_Explosion::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Explosion, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x0000C8, "Member 'BP_SkillEffect_FireSeed_C_Explosion::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Explosion, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x0001B0, "Member 'BP_SkillEffect_FireSeed_C_Explosion::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Explosion, CallFunc_Conv_IntToFloat_ReturnValue) == 0x0001C8, "Member 'BP_SkillEffect_FireSeed_C_Explosion::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Explosion, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x0001D0, "Member 'BP_SkillEffect_FireSeed_C_Explosion::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Explosion, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x0001E8, "Member 'BP_SkillEffect_FireSeed_C_Explosion::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Explosion, CallFunc_MakeTransform_ReturnValue) == 0x0001F0, "Member 'BP_SkillEffect_FireSeed_C_Explosion::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Explosion, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000250, "Member 'BP_SkillEffect_FireSeed_C_Explosion::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Explosion, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000258, "Member 'BP_SkillEffect_FireSeed_C_Explosion::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Explosion, CallFunc_MakeRotator_ReturnValue_1) == 0x000260, "Member 'BP_SkillEffect_FireSeed_C_Explosion::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Explosion, CallFunc_FinishSpawningActor_ReturnValue) == 0x000278, "Member 'BP_SkillEffect_FireSeed_C_Explosion::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Explosion, CallFunc_K2_SetRelativeRotation_SweepHitResult_1) == 0x000280, "Member 'BP_SkillEffect_FireSeed_C_Explosion::CallFunc_K2_SetRelativeRotation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Explosion, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000368, "Member 'BP_SkillEffect_FireSeed_C_Explosion::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Explosion, CallFunc_RandomUnitVectorInConeInDegreesFromStream_ConeHalfAngleInDegrees_ImplicitCast) == 0x00036C, "Member 'BP_SkillEffect_FireSeed_C_Explosion::CallFunc_RandomUnitVectorInConeInDegreesFromStream_ConeHalfAngleInDegrees_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Explosion, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x000370, "Member 'BP_SkillEffect_FireSeed_C_Explosion::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Explosion, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000378, "Member 'BP_SkillEffect_FireSeed_C_Explosion::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Explosion, CallFunc_MakeRotator_Roll_ImplicitCast) == 0x000380, "Member 'BP_SkillEffect_FireSeed_C_Explosion::CallFunc_MakeRotator_Roll_ImplicitCast' has a wrong offset!");

// Function BP_SkillEffect_FireSeed.BP_SkillEffect_FireSeed_C.FadeOutEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_SkillEffect_FireSeed_C_FadeOutEffect final
{
public:
	double                                        DeltaSecond;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_FireSeed_C_FadeOutEffect) == 0x000008, "Wrong alignment on BP_SkillEffect_FireSeed_C_FadeOutEffect");
static_assert(sizeof(BP_SkillEffect_FireSeed_C_FadeOutEffect) == 0x000008, "Wrong size on BP_SkillEffect_FireSeed_C_FadeOutEffect");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_FadeOutEffect, DeltaSecond) == 0x000000, "Member 'BP_SkillEffect_FireSeed_C_FadeOutEffect::DeltaSecond' has a wrong offset!");

// Function BP_SkillEffect_FireSeed.BP_SkillEffect_FireSeed_C.Get Predicted Target
// 0x0058 (0x0058 - 0x0000)
struct BP_SkillEffect_FireSeed_C_Get_Predicted_Target final
{
public:
	class AActor*                                 PredictedTarget_0;                                 // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetActionTargetActor_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetAttachedActors_OutActors;              // 0x0020(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PredictedTarget_C*                  K2Node_DynamicCast_AsBP_Predicted_Target;          // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_FireSeed_C_Get_Predicted_Target) == 0x000008, "Wrong alignment on BP_SkillEffect_FireSeed_C_Get_Predicted_Target");
static_assert(sizeof(BP_SkillEffect_FireSeed_C_Get_Predicted_Target) == 0x000058, "Wrong size on BP_SkillEffect_FireSeed_C_Get_Predicted_Target");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Get_Predicted_Target, PredictedTarget_0) == 0x000000, "Member 'BP_SkillEffect_FireSeed_C_Get_Predicted_Target::PredictedTarget_0' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Get_Predicted_Target, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_SkillEffect_FireSeed_C_Get_Predicted_Target::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Get_Predicted_Target, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'BP_SkillEffect_FireSeed_C_Get_Predicted_Target::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Get_Predicted_Target, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_SkillEffect_FireSeed_C_Get_Predicted_Target::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Get_Predicted_Target, CallFunc_GetActionTargetActor_ReturnValue) == 0x000018, "Member 'BP_SkillEffect_FireSeed_C_Get_Predicted_Target::CallFunc_GetActionTargetActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Get_Predicted_Target, CallFunc_GetAttachedActors_OutActors) == 0x000020, "Member 'BP_SkillEffect_FireSeed_C_Get_Predicted_Target::CallFunc_GetAttachedActors_OutActors' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Get_Predicted_Target, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'BP_SkillEffect_FireSeed_C_Get_Predicted_Target::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Get_Predicted_Target, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_SkillEffect_FireSeed_C_Get_Predicted_Target::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Get_Predicted_Target, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'BP_SkillEffect_FireSeed_C_Get_Predicted_Target::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Get_Predicted_Target, K2Node_DynamicCast_AsBP_Predicted_Target) == 0x000048, "Member 'BP_SkillEffect_FireSeed_C_Get_Predicted_Target::K2Node_DynamicCast_AsBP_Predicted_Target' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_Get_Predicted_Target, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'BP_SkillEffect_FireSeed_C_Get_Predicted_Target::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_SkillEffect_FireSeed.BP_SkillEffect_FireSeed_C.ReceiveHit
// 0x0150 (0x0150 - 0x0000)
struct BP_SkillEffect_FireSeed_C_ReceiveHit final
{
public:
	class UPrimitiveComponent*                    MyComp;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Other;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bSelfMoved;                                        // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                HitLocation;                                       // 0x0020(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitNormal;                                         // 0x0038(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0050(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0068(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_SkillEffect_FireSeed_C_ReceiveHit) == 0x000008, "Wrong alignment on BP_SkillEffect_FireSeed_C_ReceiveHit");
static_assert(sizeof(BP_SkillEffect_FireSeed_C_ReceiveHit) == 0x000150, "Wrong size on BP_SkillEffect_FireSeed_C_ReceiveHit");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ReceiveHit, MyComp) == 0x000000, "Member 'BP_SkillEffect_FireSeed_C_ReceiveHit::MyComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ReceiveHit, Other) == 0x000008, "Member 'BP_SkillEffect_FireSeed_C_ReceiveHit::Other' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ReceiveHit, OtherComp) == 0x000010, "Member 'BP_SkillEffect_FireSeed_C_ReceiveHit::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ReceiveHit, bSelfMoved) == 0x000018, "Member 'BP_SkillEffect_FireSeed_C_ReceiveHit::bSelfMoved' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ReceiveHit, HitLocation) == 0x000020, "Member 'BP_SkillEffect_FireSeed_C_ReceiveHit::HitLocation' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ReceiveHit, HitNormal) == 0x000038, "Member 'BP_SkillEffect_FireSeed_C_ReceiveHit::HitNormal' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ReceiveHit, NormalImpulse) == 0x000050, "Member 'BP_SkillEffect_FireSeed_C_ReceiveHit::NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireSeed_C_ReceiveHit, Hit) == 0x000068, "Member 'BP_SkillEffect_FireSeed_C_ReceiveHit::Hit' has a wrong offset!");

}

