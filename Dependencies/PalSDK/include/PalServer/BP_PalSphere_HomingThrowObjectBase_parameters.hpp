#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function BP_PalSphere_HomingThrowObjectBase.BP_PalSphere_HomingThrowObjectBase_C.BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
// 0x0100 (0x0100 - 0x0000)
struct BP_PalSphere_HomingThrowObjectBase_C_BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature final
{
public:
	struct FHitResult                             ImpactResult;                                      // 0x0000(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                ImpactVelocity;                                    // 0x00E8(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_HomingThrowObjectBase_C_BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature) == 0x000008, "Wrong alignment on BP_PalSphere_HomingThrowObjectBase_C_BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature");
static_assert(sizeof(BP_PalSphere_HomingThrowObjectBase_C_BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature) == 0x000100, "Wrong size on BP_PalSphere_HomingThrowObjectBase_C_BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature, ImpactResult) == 0x000000, "Member 'BP_PalSphere_HomingThrowObjectBase_C_BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature::ImpactResult' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature, ImpactVelocity) == 0x0000E8, "Member 'BP_PalSphere_HomingThrowObjectBase_C_BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature::ImpactVelocity' has a wrong offset!");

// Function BP_PalSphere_HomingThrowObjectBase.BP_PalSphere_HomingThrowObjectBase_C.ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase
// 0x0310 (0x0310 - 0x0000)
struct BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x00D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_AddActorWorldOffset_SweepHitResult;    // 0x00E8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             K2Node_ComponentBoundEvent_ImpactResult;           // 0x01D0(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                K2Node_ComponentBoundEvent_ImpactVelocity;         // 0x02B8(0x0018)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue_1;         // 0x02D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_2;      // 0x02E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Rotate_Self_DeltaTime_ImplicitCast;       // 0x0300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0308(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase) == 0x000008, "Wrong alignment on BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase");
static_assert(sizeof(BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase) == 0x000310, "Wrong size on BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase, EntryPoint) == 0x000000, "Member 'BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase, K2Node_Event_DeltaSeconds) == 0x000020, "Member 'BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000028, "Member 'BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000040, "Member 'BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000048, "Member 'BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000050, "Member 'BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase, CallFunc_RandomFloatInRange_ReturnValue) == 0x000068, "Member 'BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000070, "Member 'BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000088, "Member 'BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase, CallFunc_MakeVector_ReturnValue) == 0x0000A0, "Member 'BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase, CallFunc_Add_VectorVector_ReturnValue) == 0x0000B8, "Member 'BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase, CallFunc_Multiply_VectorVector_ReturnValue_1) == 0x0000D0, "Member 'BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase::CallFunc_Multiply_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase, CallFunc_K2_AddActorWorldOffset_SweepHitResult) == 0x0000E8, "Member 'BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase::CallFunc_K2_AddActorWorldOffset_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase, K2Node_ComponentBoundEvent_ImpactResult) == 0x0001D0, "Member 'BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase::K2Node_ComponentBoundEvent_ImpactResult' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase, K2Node_ComponentBoundEvent_ImpactVelocity) == 0x0002B8, "Member 'BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase::K2Node_ComponentBoundEvent_ImpactVelocity' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase, CallFunc_Conv_FloatToVector_ReturnValue_1) == 0x0002D0, "Member 'BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase::CallFunc_Conv_FloatToVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase, CallFunc_Multiply_VectorVector_ReturnValue_2) == 0x0002E8, "Member 'BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase::CallFunc_Multiply_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase, CallFunc_Rotate_Self_DeltaTime_ImplicitCast) == 0x000300, "Member 'BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase::CallFunc_Rotate_Self_DeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000308, "Member 'BP_PalSphere_HomingThrowObjectBase_C_ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_PalSphere_HomingThrowObjectBase.BP_PalSphere_HomingThrowObjectBase_C.GetBodyClass
// 0x0018 (0x0018 - 0x0000)
struct BP_PalSphere_HomingThrowObjectBase_C_GetBodyClass final
{
public:
	class UClass*                                 bodyClass;                                         // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_Map_Find_Value;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_HomingThrowObjectBase_C_GetBodyClass) == 0x000008, "Wrong alignment on BP_PalSphere_HomingThrowObjectBase_C_GetBodyClass");
static_assert(sizeof(BP_PalSphere_HomingThrowObjectBase_C_GetBodyClass) == 0x000018, "Wrong size on BP_PalSphere_HomingThrowObjectBase_C_GetBodyClass");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_GetBodyClass, bodyClass) == 0x000000, "Member 'BP_PalSphere_HomingThrowObjectBase_C_GetBodyClass::bodyClass' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_GetBodyClass, CallFunc_Map_Find_Value) == 0x000008, "Member 'BP_PalSphere_HomingThrowObjectBase_C_GetBodyClass::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_GetBodyClass, CallFunc_Map_Find_ReturnValue) == 0x000010, "Member 'BP_PalSphere_HomingThrowObjectBase_C_GetBodyClass::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function BP_PalSphere_HomingThrowObjectBase.BP_PalSphere_HomingThrowObjectBase_C.Rotate Self
// 0x0128 (0x0128 - 0x0000)
struct BP_PalSphere_HomingThrowObjectBase_C_Rotate_Self final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Multiply_RotatorFloat_ReturnValue;        // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0038(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_Multiply_RotatorFloat_B_ImplicitCast;     // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_HomingThrowObjectBase_C_Rotate_Self) == 0x000008, "Wrong alignment on BP_PalSphere_HomingThrowObjectBase_C_Rotate_Self");
static_assert(sizeof(BP_PalSphere_HomingThrowObjectBase_C_Rotate_Self) == 0x000128, "Wrong size on BP_PalSphere_HomingThrowObjectBase_C_Rotate_Self");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_Rotate_Self, DeltaTime) == 0x000000, "Member 'BP_PalSphere_HomingThrowObjectBase_C_Rotate_Self::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_Rotate_Self, CallFunc_Multiply_RotatorFloat_ReturnValue) == 0x000008, "Member 'BP_PalSphere_HomingThrowObjectBase_C_Rotate_Self::CallFunc_Multiply_RotatorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_Rotate_Self, CallFunc_ComposeRotators_ReturnValue) == 0x000020, "Member 'BP_PalSphere_HomingThrowObjectBase_C_Rotate_Self::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_Rotate_Self, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000038, "Member 'BP_PalSphere_HomingThrowObjectBase_C_Rotate_Self::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_Rotate_Self, CallFunc_Multiply_RotatorFloat_B_ImplicitCast) == 0x000120, "Member 'BP_PalSphere_HomingThrowObjectBase_C_Rotate_Self::CallFunc_Multiply_RotatorFloat_B_ImplicitCast' has a wrong offset!");

// Function BP_PalSphere_HomingThrowObjectBase.BP_PalSphere_HomingThrowObjectBase_C.SetAttackTarget
// 0x0018 (0x0018 - 0x0000)
struct BP_PalSphere_HomingThrowObjectBase_C_SetAttackTarget final
{
public:
	class APalCharacter*                          Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_HomingThrowObjectBase_C_SetAttackTarget) == 0x000008, "Wrong alignment on BP_PalSphere_HomingThrowObjectBase_C_SetAttackTarget");
static_assert(sizeof(BP_PalSphere_HomingThrowObjectBase_C_SetAttackTarget) == 0x000018, "Wrong size on BP_PalSphere_HomingThrowObjectBase_C_SetAttackTarget");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_SetAttackTarget, Target) == 0x000000, "Member 'BP_PalSphere_HomingThrowObjectBase_C_SetAttackTarget::Target' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_SetAttackTarget, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000008, "Member 'BP_PalSphere_HomingThrowObjectBase_C_SetAttackTarget::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_SetAttackTarget, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_PalSphere_HomingThrowObjectBase_C_SetAttackTarget::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_PalSphere_HomingThrowObjectBase.BP_PalSphere_HomingThrowObjectBase_C.SetCaptureLevelType
// 0x0018 (0x0018 - 0x0000)
struct BP_PalSphere_HomingThrowObjectBase_C_SetCaptureLevelType final
{
public:
	EPalCaptureSphereLevelType                    LevelType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstance*                      CallFunc_Map_Find_Value;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_HomingThrowObjectBase_C_SetCaptureLevelType) == 0x000008, "Wrong alignment on BP_PalSphere_HomingThrowObjectBase_C_SetCaptureLevelType");
static_assert(sizeof(BP_PalSphere_HomingThrowObjectBase_C_SetCaptureLevelType) == 0x000018, "Wrong size on BP_PalSphere_HomingThrowObjectBase_C_SetCaptureLevelType");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_SetCaptureLevelType, LevelType) == 0x000000, "Member 'BP_PalSphere_HomingThrowObjectBase_C_SetCaptureLevelType::LevelType' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_SetCaptureLevelType, CallFunc_Map_Find_Value) == 0x000008, "Member 'BP_PalSphere_HomingThrowObjectBase_C_SetCaptureLevelType::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_SetCaptureLevelType, CallFunc_Map_Find_ReturnValue) == 0x000010, "Member 'BP_PalSphere_HomingThrowObjectBase_C_SetCaptureLevelType::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function BP_PalSphere_HomingThrowObjectBase.BP_PalSphere_HomingThrowObjectBase_C.SetMaterialByType
// 0x0018 (0x0018 - 0x0000)
struct BP_PalSphere_HomingThrowObjectBase_C_SetMaterialByType final
{
public:
	EPalCaptureSphereLevelType                    CaptureLevelType_0;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstance*                      CallFunc_Map_Find_Value;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_HomingThrowObjectBase_C_SetMaterialByType) == 0x000008, "Wrong alignment on BP_PalSphere_HomingThrowObjectBase_C_SetMaterialByType");
static_assert(sizeof(BP_PalSphere_HomingThrowObjectBase_C_SetMaterialByType) == 0x000018, "Wrong size on BP_PalSphere_HomingThrowObjectBase_C_SetMaterialByType");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_SetMaterialByType, CaptureLevelType_0) == 0x000000, "Member 'BP_PalSphere_HomingThrowObjectBase_C_SetMaterialByType::CaptureLevelType_0' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_SetMaterialByType, CallFunc_Map_Find_Value) == 0x000008, "Member 'BP_PalSphere_HomingThrowObjectBase_C_SetMaterialByType::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_SetMaterialByType, CallFunc_Map_Find_ReturnValue) == 0x000010, "Member 'BP_PalSphere_HomingThrowObjectBase_C_SetMaterialByType::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function BP_PalSphere_HomingThrowObjectBase.BP_PalSphere_HomingThrowObjectBase_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_PalSphere_HomingThrowObjectBase_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_HomingThrowObjectBase_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_PalSphere_HomingThrowObjectBase_C_ReceiveTick");
static_assert(sizeof(BP_PalSphere_HomingThrowObjectBase_C_ReceiveTick) == 0x000004, "Wrong size on BP_PalSphere_HomingThrowObjectBase_C_ReceiveTick");
static_assert(offsetof(BP_PalSphere_HomingThrowObjectBase_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_PalSphere_HomingThrowObjectBase_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

