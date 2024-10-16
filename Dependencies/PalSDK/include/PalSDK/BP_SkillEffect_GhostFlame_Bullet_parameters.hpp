#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_SkillEffect_GhostFlame_Bullet.BP_SkillEffect_GhostFlame_Bullet_C.BndEvt__BP_SkillEffect_GhostFlame_Bullet_SlowDownCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BP_SkillEffect_GhostFlame_Bullet_C_BndEvt__BP_SkillEffect_GhostFlame_Bullet_SlowDownCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
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
static_assert(alignof(BP_SkillEffect_GhostFlame_Bullet_C_BndEvt__BP_SkillEffect_GhostFlame_Bullet_SlowDownCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_SkillEffect_GhostFlame_Bullet_C_BndEvt__BP_SkillEffect_GhostFlame_Bullet_SlowDownCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_SkillEffect_GhostFlame_Bullet_C_BndEvt__BP_SkillEffect_GhostFlame_Bullet_SlowDownCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BP_SkillEffect_GhostFlame_Bullet_C_BndEvt__BP_SkillEffect_GhostFlame_Bullet_SlowDownCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_BndEvt__BP_SkillEffect_GhostFlame_Bullet_SlowDownCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_BndEvt__BP_SkillEffect_GhostFlame_Bullet_SlowDownCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_BndEvt__BP_SkillEffect_GhostFlame_Bullet_SlowDownCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_BndEvt__BP_SkillEffect_GhostFlame_Bullet_SlowDownCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_BndEvt__BP_SkillEffect_GhostFlame_Bullet_SlowDownCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_BndEvt__BP_SkillEffect_GhostFlame_Bullet_SlowDownCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_BndEvt__BP_SkillEffect_GhostFlame_Bullet_SlowDownCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_BndEvt__BP_SkillEffect_GhostFlame_Bullet_SlowDownCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_BndEvt__BP_SkillEffect_GhostFlame_Bullet_SlowDownCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_BndEvt__BP_SkillEffect_GhostFlame_Bullet_SlowDownCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_BndEvt__BP_SkillEffect_GhostFlame_Bullet_SlowDownCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_BndEvt__BP_SkillEffect_GhostFlame_Bullet_SlowDownCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_SkillEffect_GhostFlame_Bullet.BP_SkillEffect_GhostFlame_Bullet_C.ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet
// 0x0288 (0x0288 - 0x0000)
struct BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_Event_MyHitComponent;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherHitActor;                        // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_Event_OtherHitComponent;                    // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 K2Node_Event_FoliageIndex;                         // 0x0028(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                K2Node_Event_HitLocation;                          // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_HitCount;                             // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SkillEffect_GhostFlame_Bullet_C*    K2Node_DynamicCast_AsBP_Skill_Effect_Ghost_Flame_Bullet; // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FindOwnerActor_ReturnValue;               // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A[0x6];                                       // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue_1;      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B[0x5];                                       // 0x008B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AD[0x3];                                       // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x00B0(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0198(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsApplicableDamage_ReturnValue;           // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFriend_ReturnValue;                     // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x01A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A4[0x4];                                      // 0x01A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C1[0x7];                                      // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D1[0x7];                                      // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Ease_ReturnValue;                         // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x01E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_1;                     // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F9[0x7];                                      // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0200(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_Event_DeltaSecond;                          // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;  // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_221[0x3];                                      // 0x0221(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0224(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0228(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_231[0x7];                                      // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0238(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDead_ReturnValue;                       // 0x0241(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_242[0x6];                                      // 0x0242(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_HomingAccelerationMagnitude_ImplicitCast; // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_254[0x4];                                      // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_AccumulatedTime_ImplicitCast;   // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_274[0x4];                                      // 0x0274(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_MaxSpeed_ImplicitCast;          // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast;        // 0x0284(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet) == 0x000008, "Wrong alignment on BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet");
static_assert(sizeof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet) == 0x000288, "Wrong size on BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, Temp_bool_Has_Been_Initd_Variable_1) == 0x000005, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, K2Node_Event_MyHitComponent) == 0x000010, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::K2Node_Event_MyHitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, K2Node_Event_OtherHitActor) == 0x000018, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::K2Node_Event_OtherHitActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, K2Node_Event_OtherHitComponent) == 0x000020, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::K2Node_Event_OtherHitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, K2Node_Event_FoliageIndex) == 0x000028, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::K2Node_Event_FoliageIndex' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, K2Node_Event_HitLocation) == 0x000038, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::K2Node_Event_HitLocation' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, K2Node_Event_HitCount) == 0x000050, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::K2Node_Event_HitCount' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, K2Node_DynamicCast_AsBP_Skill_Effect_Ghost_Flame_Bullet) == 0x000058, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::K2Node_DynamicCast_AsBP_Skill_Effect_Ghost_Flame_Bullet' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000068, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, CallFunc_FindOwnerActor_ReturnValue) == 0x000070, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::CallFunc_FindOwnerActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, Temp_bool_IsClosed_Variable) == 0x000078, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000079, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000080, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, CallFunc_NotEqual_ObjectObject_ReturnValue_1) == 0x000088, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::CallFunc_NotEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, CallFunc_BooleanAND_ReturnValue) == 0x000089, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, CallFunc_Less_DoubleDouble_ReturnValue) == 0x00008A, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000090, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, K2Node_ComponentBoundEvent_OtherActor) == 0x000098, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, K2Node_ComponentBoundEvent_OtherComp) == 0x0000A0, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x0000A8, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, K2Node_ComponentBoundEvent_bFromSweep) == 0x0000AC, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, K2Node_ComponentBoundEvent_SweepResult) == 0x0000B0, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, CallFunc_GetOwner_ReturnValue) == 0x000198, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, CallFunc_IsApplicableDamage_ReturnValue) == 0x0001A0, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::CallFunc_IsApplicableDamage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, CallFunc_IsFriend_ReturnValue) == 0x0001A1, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::CallFunc_IsFriend_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, CallFunc_Not_PreBool_ReturnValue) == 0x0001A2, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, CallFunc_BooleanAND_ReturnValue_1) == 0x0001A3, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x0001A8, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x0001B0, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0001B8, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x0001C0, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x0001C8, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0001D0, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, CallFunc_Ease_ReturnValue) == 0x0001D8, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::CallFunc_Ease_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0001E0, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, Temp_bool_IsClosed_Variable_1) == 0x0001F8, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000200, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, K2Node_Event_DeltaSecond) == 0x000208, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::K2Node_Event_DeltaSecond' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000210, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, CallFunc_FClamp_ReturnValue) == 0x000218, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1) == 0x000220, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, CallFunc_GetFloatValue_ReturnValue) == 0x000224, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, CallFunc_GetOwner_ReturnValue_1) == 0x000228, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, CallFunc_IsValid_ReturnValue) == 0x000230, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, K2Node_DynamicCast_AsPal_Character) == 0x000238, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, K2Node_DynamicCast_bSuccess_1) == 0x000240, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, CallFunc_IsDead_ReturnValue) == 0x000241, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::CallFunc_IsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000248, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, K2Node_VariableSet_HomingAccelerationMagnitude_ImplicitCast) == 0x000250, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::K2Node_VariableSet_HomingAccelerationMagnitude_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, CallFunc_Less_DoubleDouble_A_ImplicitCast) == 0x000258, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::CallFunc_Less_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000260, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000268, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, K2Node_VariableSet_AccumulatedTime_ImplicitCast) == 0x000270, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::K2Node_VariableSet_AccumulatedTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1) == 0x000278, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, K2Node_VariableSet_MaxSpeed_ImplicitCast) == 0x000280, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::K2Node_VariableSet_MaxSpeed_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet, CallFunc_GetFloatValue_InTime_ImplicitCast) == 0x000284, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet::CallFunc_GetFloatValue_InTime_ImplicitCast' has a wrong offset!");

// Function BP_SkillEffect_GhostFlame_Bullet.BP_SkillEffect_GhostFlame_Bullet_C.FadeOutEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_SkillEffect_GhostFlame_Bullet_C_FadeOutEffect final
{
public:
	double                                        DeltaSecond;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_GhostFlame_Bullet_C_FadeOutEffect) == 0x000008, "Wrong alignment on BP_SkillEffect_GhostFlame_Bullet_C_FadeOutEffect");
static_assert(sizeof(BP_SkillEffect_GhostFlame_Bullet_C_FadeOutEffect) == 0x000008, "Wrong size on BP_SkillEffect_GhostFlame_Bullet_C_FadeOutEffect");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_FadeOutEffect, DeltaSecond) == 0x000000, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_FadeOutEffect::DeltaSecond' has a wrong offset!");

// Function BP_SkillEffect_GhostFlame_Bullet.BP_SkillEffect_GhostFlame_Bullet_C.InitShot
// 0x0008 (0x0008 - 0x0000)
struct BP_SkillEffect_GhostFlame_Bullet_C_InitShot final
{
public:
	float                                         K2Node_VariableSet_MaxSpeed_ImplicitCast;          // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_ProjectileGravityScale_ImplicitCast; // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_GhostFlame_Bullet_C_InitShot) == 0x000004, "Wrong alignment on BP_SkillEffect_GhostFlame_Bullet_C_InitShot");
static_assert(sizeof(BP_SkillEffect_GhostFlame_Bullet_C_InitShot) == 0x000008, "Wrong size on BP_SkillEffect_GhostFlame_Bullet_C_InitShot");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_InitShot, K2Node_VariableSet_MaxSpeed_ImplicitCast) == 0x000000, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_InitShot::K2Node_VariableSet_MaxSpeed_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_InitShot, K2Node_VariableSet_ProjectileGravityScale_ImplicitCast) == 0x000004, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_InitShot::K2Node_VariableSet_ProjectileGravityScale_ImplicitCast' has a wrong offset!");

// Function BP_SkillEffect_GhostFlame_Bullet.BP_SkillEffect_GhostFlame_Bullet_C.OnHitDelegate_イベント
// 0x0048 (0x0048 - 0x0000)
struct BP_SkillEffect_GhostFlame_Bullet_C_OnHitDelegate_____________ final
{
public:
	class UPrimitiveComponent*                    MyHitComponent;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherHitActor;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherHitComponent;                                 // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 FoliageIndex;                                      // 0x0018(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                HitLocation;                                       // 0x0028(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HitCount;                                          // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_GhostFlame_Bullet_C_OnHitDelegate_____________) == 0x000008, "Wrong alignment on BP_SkillEffect_GhostFlame_Bullet_C_OnHitDelegate_____________");
static_assert(sizeof(BP_SkillEffect_GhostFlame_Bullet_C_OnHitDelegate_____________) == 0x000048, "Wrong size on BP_SkillEffect_GhostFlame_Bullet_C_OnHitDelegate_____________");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_OnHitDelegate_____________, MyHitComponent) == 0x000000, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_OnHitDelegate_____________::MyHitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_OnHitDelegate_____________, OtherHitActor) == 0x000008, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_OnHitDelegate_____________::OtherHitActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_OnHitDelegate_____________, OtherHitComponent) == 0x000010, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_OnHitDelegate_____________::OtherHitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_OnHitDelegate_____________, FoliageIndex) == 0x000018, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_OnHitDelegate_____________::FoliageIndex' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_OnHitDelegate_____________, HitLocation) == 0x000028, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_OnHitDelegate_____________::HitLocation' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_OnHitDelegate_____________, HitCount) == 0x000040, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_OnHitDelegate_____________::HitCount' has a wrong offset!");

// Function BP_SkillEffect_GhostFlame_Bullet.BP_SkillEffect_GhostFlame_Bullet_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_SkillEffect_GhostFlame_Bullet_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_GhostFlame_Bullet_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_SkillEffect_GhostFlame_Bullet_C_ReceiveTick");
static_assert(sizeof(BP_SkillEffect_GhostFlame_Bullet_C_ReceiveTick) == 0x000004, "Wrong size on BP_SkillEffect_GhostFlame_Bullet_C_ReceiveTick");
static_assert(offsetof(BP_SkillEffect_GhostFlame_Bullet_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_SkillEffect_GhostFlame_Bullet_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

