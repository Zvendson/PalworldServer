#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_SkillEffect_Mudshot.BP_SkillEffect_Mudshot_C.BndEvt__BP_SkillEffect_Mudshot_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature
// 0x00E8 (0x00E8 - 0x0000)
struct BP_SkillEffect_Mudshot_C_BndEvt__BP_SkillEffect_Mudshot_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature final
{
public:
	class AActor*                                 Defencer;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDamageInfo                         DamageInfo;                                        // 0x0008(0x00D0)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         HitCount;                                          // 0x00D8(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    AttackerComponent;                                 // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_Mudshot_C_BndEvt__BP_SkillEffect_Mudshot_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature) == 0x000008, "Wrong alignment on BP_SkillEffect_Mudshot_C_BndEvt__BP_SkillEffect_Mudshot_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature");
static_assert(sizeof(BP_SkillEffect_Mudshot_C_BndEvt__BP_SkillEffect_Mudshot_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature) == 0x0000E8, "Wrong size on BP_SkillEffect_Mudshot_C_BndEvt__BP_SkillEffect_Mudshot_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_BndEvt__BP_SkillEffect_Mudshot_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature, Defencer) == 0x000000, "Member 'BP_SkillEffect_Mudshot_C_BndEvt__BP_SkillEffect_Mudshot_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature::Defencer' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_BndEvt__BP_SkillEffect_Mudshot_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature, DamageInfo) == 0x000008, "Member 'BP_SkillEffect_Mudshot_C_BndEvt__BP_SkillEffect_Mudshot_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature::DamageInfo' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_BndEvt__BP_SkillEffect_Mudshot_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature, HitCount) == 0x0000D8, "Member 'BP_SkillEffect_Mudshot_C_BndEvt__BP_SkillEffect_Mudshot_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature::HitCount' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_BndEvt__BP_SkillEffect_Mudshot_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature, AttackerComponent) == 0x0000E0, "Member 'BP_SkillEffect_Mudshot_C_BndEvt__BP_SkillEffect_Mudshot_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature::AttackerComponent' has a wrong offset!");

// Function BP_SkillEffect_Mudshot.BP_SkillEffect_Mudshot_C.BndEvt__BP_SkillEffect_Mudshot_MovementSphereRoot_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct BP_SkillEffect_Mudshot_C_BndEvt__BP_SkillEffect_Mudshot_MovementSphereRoot_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0030(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_SkillEffect_Mudshot_C_BndEvt__BP_SkillEffect_Mudshot_MovementSphereRoot_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_SkillEffect_Mudshot_C_BndEvt__BP_SkillEffect_Mudshot_MovementSphereRoot_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(BP_SkillEffect_Mudshot_C_BndEvt__BP_SkillEffect_Mudshot_MovementSphereRoot_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature) == 0x000118, "Wrong size on BP_SkillEffect_Mudshot_C_BndEvt__BP_SkillEffect_Mudshot_MovementSphereRoot_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_BndEvt__BP_SkillEffect_Mudshot_MovementSphereRoot_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'BP_SkillEffect_Mudshot_C_BndEvt__BP_SkillEffect_Mudshot_MovementSphereRoot_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_BndEvt__BP_SkillEffect_Mudshot_MovementSphereRoot_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_SkillEffect_Mudshot_C_BndEvt__BP_SkillEffect_Mudshot_MovementSphereRoot_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_BndEvt__BP_SkillEffect_Mudshot_MovementSphereRoot_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_SkillEffect_Mudshot_C_BndEvt__BP_SkillEffect_Mudshot_MovementSphereRoot_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_BndEvt__BP_SkillEffect_Mudshot_MovementSphereRoot_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'BP_SkillEffect_Mudshot_C_BndEvt__BP_SkillEffect_Mudshot_MovementSphereRoot_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_BndEvt__BP_SkillEffect_Mudshot_MovementSphereRoot_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature, Hit) == 0x000030, "Member 'BP_SkillEffect_Mudshot_C_BndEvt__BP_SkillEffect_Mudshot_MovementSphereRoot_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature::Hit' has a wrong offset!");

// Function BP_SkillEffect_Mudshot.BP_SkillEffect_Mudshot_C.ExecuteUbergraph_BP_SkillEffect_Mudshot
// 0x0320 (0x0320 - 0x0000)
struct BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, TArray<int32>& FoliageIndex, const struct FVector& HitLocation, int32 HitCount)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_1;                     // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_17[0x1];                                       // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue_1;                     // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_1;              // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_CustomEvent_MyHitComponent;                 // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_OtherHitActor;                  // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_CustomEvent_OtherHitComponent;              // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 K2Node_CustomEvent_FoliageIndex;                   // 0x0098(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                K2Node_CustomEvent_HitLocation;                    // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_HitCount;                       // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_2;               // 0x00C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1; // 0x00C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C7[0x1];                                       // 0x00C7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_ComponentBoundEvent_Defencer;               // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDamageInfo                         K2Node_ComponentBoundEvent_damageInfo;             // 0x00D0(0x00D0)()
	int32                                         K2Node_ComponentBoundEvent_hitCount;               // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A4[0x4];                                      // 0x01A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_AttackerComponent;      // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x01B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;           // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x01D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x01D8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;          // 0x01E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;                    // 0x01F8(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x02E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E9[0x7];                                      // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_Event_DeltaSecond;                          // 0x02F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_2;                     // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F9[0x3];                                      // 0x02F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast;        // 0x02FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast_1;      // 0x030C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x0310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast_1;  // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot) == 0x000008, "Wrong alignment on BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot");
static_assert(sizeof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot) == 0x000320, "Wrong size on BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, Temp_bool_Has_Been_Initd_Variable) == 0x000014, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, Temp_bool_IsClosed_Variable) == 0x000015, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, Temp_bool_IsClosed_Variable_1) == 0x000016, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000018, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000020, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, CallFunc_FClamp_ReturnValue) == 0x000028, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, CallFunc_GetFloatValue_ReturnValue) == 0x000030, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, CallFunc_SelectFloat_ReturnValue) == 0x000038, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000040, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, Temp_bool_Has_Been_Initd_Variable_1) == 0x000048, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000050, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, CallFunc_SelectFloat_ReturnValue_1) == 0x000058, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000060, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, CallFunc_FClamp_ReturnValue_1) == 0x000068, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, CallFunc_GetFloatValue_ReturnValue_1) == 0x000070, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::CallFunc_GetFloatValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000078, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, K2Node_CustomEvent_MyHitComponent) == 0x000080, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::K2Node_CustomEvent_MyHitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, K2Node_CustomEvent_OtherHitActor) == 0x000088, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::K2Node_CustomEvent_OtherHitActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, K2Node_CustomEvent_OtherHitComponent) == 0x000090, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::K2Node_CustomEvent_OtherHitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, K2Node_CustomEvent_FoliageIndex) == 0x000098, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::K2Node_CustomEvent_FoliageIndex' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, K2Node_CustomEvent_HitLocation) == 0x0000A8, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::K2Node_CustomEvent_HitLocation' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, K2Node_CustomEvent_HitCount) == 0x0000C0, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::K2Node_CustomEvent_HitCount' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable) == 0x0000C4, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, Temp_bool_Has_Been_Initd_Variable_2) == 0x0000C5, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::Temp_bool_Has_Been_Initd_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1) == 0x0000C6, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, K2Node_ComponentBoundEvent_Defencer) == 0x0000C8, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::K2Node_ComponentBoundEvent_Defencer' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, K2Node_ComponentBoundEvent_damageInfo) == 0x0000D0, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::K2Node_ComponentBoundEvent_damageInfo' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, K2Node_ComponentBoundEvent_hitCount) == 0x0001A0, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::K2Node_ComponentBoundEvent_hitCount' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, K2Node_ComponentBoundEvent_AttackerComponent) == 0x0001A8, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::K2Node_ComponentBoundEvent_AttackerComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0001B0, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, K2Node_ComponentBoundEvent_HitComponent) == 0x0001C8, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, K2Node_ComponentBoundEvent_OtherActor) == 0x0001D0, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, K2Node_ComponentBoundEvent_OtherComp) == 0x0001D8, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, K2Node_ComponentBoundEvent_NormalImpulse) == 0x0001E0, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, K2Node_ComponentBoundEvent_Hit) == 0x0001F8, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x0002E0, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, K2Node_Event_EndPlayReason) == 0x0002E8, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, K2Node_Event_DeltaSecond) == 0x0002F0, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::K2Node_Event_DeltaSecond' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, Temp_bool_IsClosed_Variable_2) == 0x0002F8, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::Temp_bool_IsClosed_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, CallFunc_GetFloatValue_InTime_ImplicitCast) == 0x0002FC, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::CallFunc_GetFloatValue_InTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000300, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, CallFunc_SetVariableFloat_InValue_ImplicitCast) == 0x000308, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::CallFunc_SetVariableFloat_InValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, CallFunc_GetFloatValue_InTime_ImplicitCast_1) == 0x00030C, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::CallFunc_GetFloatValue_InTime_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1) == 0x000310, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot, CallFunc_SetVariableFloat_InValue_ImplicitCast_1) == 0x000318, "Member 'BP_SkillEffect_Mudshot_C_ExecuteUbergraph_BP_SkillEffect_Mudshot::CallFunc_SetVariableFloat_InValue_ImplicitCast_1' has a wrong offset!");

// Function BP_SkillEffect_Mudshot.BP_SkillEffect_Mudshot_C.FadeOutEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_SkillEffect_Mudshot_C_FadeOutEffect final
{
public:
	double                                        DeltaSecond;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_Mudshot_C_FadeOutEffect) == 0x000008, "Wrong alignment on BP_SkillEffect_Mudshot_C_FadeOutEffect");
static_assert(sizeof(BP_SkillEffect_Mudshot_C_FadeOutEffect) == 0x000008, "Wrong size on BP_SkillEffect_Mudshot_C_FadeOutEffect");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_FadeOutEffect, DeltaSecond) == 0x000000, "Member 'BP_SkillEffect_Mudshot_C_FadeOutEffect::DeltaSecond' has a wrong offset!");

// Function BP_SkillEffect_Mudshot.BP_SkillEffect_Mudshot_C.OnHitDelegate_イベント_0
// 0x0048 (0x0048 - 0x0000)
struct BP_SkillEffect_Mudshot_C_OnHitDelegate______________0 final
{
public:
	class UPrimitiveComponent*                    MyHitComponent;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherHitActor;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherHitComponent;                                 // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 FoliageIndex;                                      // 0x0018(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                HitLocation;                                       // 0x0028(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HitCount;                                          // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_Mudshot_C_OnHitDelegate______________0) == 0x000008, "Wrong alignment on BP_SkillEffect_Mudshot_C_OnHitDelegate______________0");
static_assert(sizeof(BP_SkillEffect_Mudshot_C_OnHitDelegate______________0) == 0x000048, "Wrong size on BP_SkillEffect_Mudshot_C_OnHitDelegate______________0");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_OnHitDelegate______________0, MyHitComponent) == 0x000000, "Member 'BP_SkillEffect_Mudshot_C_OnHitDelegate______________0::MyHitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_OnHitDelegate______________0, OtherHitActor) == 0x000008, "Member 'BP_SkillEffect_Mudshot_C_OnHitDelegate______________0::OtherHitActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_OnHitDelegate______________0, OtherHitComponent) == 0x000010, "Member 'BP_SkillEffect_Mudshot_C_OnHitDelegate______________0::OtherHitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_OnHitDelegate______________0, FoliageIndex) == 0x000018, "Member 'BP_SkillEffect_Mudshot_C_OnHitDelegate______________0::FoliageIndex' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_OnHitDelegate______________0, HitLocation) == 0x000028, "Member 'BP_SkillEffect_Mudshot_C_OnHitDelegate______________0::HitLocation' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_OnHitDelegate______________0, HitCount) == 0x000040, "Member 'BP_SkillEffect_Mudshot_C_OnHitDelegate______________0::HitCount' has a wrong offset!");

// Function BP_SkillEffect_Mudshot.BP_SkillEffect_Mudshot_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_SkillEffect_Mudshot_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_Mudshot_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_SkillEffect_Mudshot_C_ReceiveEndPlay");
static_assert(sizeof(BP_SkillEffect_Mudshot_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_SkillEffect_Mudshot_C_ReceiveEndPlay");
static_assert(offsetof(BP_SkillEffect_Mudshot_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_SkillEffect_Mudshot_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

}

