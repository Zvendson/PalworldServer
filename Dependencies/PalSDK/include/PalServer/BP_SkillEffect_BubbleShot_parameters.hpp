#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function BP_SkillEffect_BubbleShot.BP_SkillEffect_BubbleShot_C.ExecuteUbergraph_BP_SkillEffect_BubbleShot
// 0x0028 (0x0028 - 0x0000)
struct BP_SkillEffect_BubbleShot_C_ExecuteUbergraph_BP_SkillEffect_BubbleShot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetGameTimeSinceCreation_ReturnValue;     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_BubbleShot_C_ExecuteUbergraph_BP_SkillEffect_BubbleShot) == 0x000008, "Wrong alignment on BP_SkillEffect_BubbleShot_C_ExecuteUbergraph_BP_SkillEffect_BubbleShot");
static_assert(sizeof(BP_SkillEffect_BubbleShot_C_ExecuteUbergraph_BP_SkillEffect_BubbleShot) == 0x000028, "Wrong size on BP_SkillEffect_BubbleShot_C_ExecuteUbergraph_BP_SkillEffect_BubbleShot");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_ExecuteUbergraph_BP_SkillEffect_BubbleShot, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_BubbleShot_C_ExecuteUbergraph_BP_SkillEffect_BubbleShot::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_ExecuteUbergraph_BP_SkillEffect_BubbleShot, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_SkillEffect_BubbleShot_C_ExecuteUbergraph_BP_SkillEffect_BubbleShot::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_ExecuteUbergraph_BP_SkillEffect_BubbleShot, CallFunc_GetGameTimeSinceCreation_ReturnValue) == 0x000008, "Member 'BP_SkillEffect_BubbleShot_C_ExecuteUbergraph_BP_SkillEffect_BubbleShot::CallFunc_GetGameTimeSinceCreation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_ExecuteUbergraph_BP_SkillEffect_BubbleShot, CallFunc_Less_IntInt_ReturnValue) == 0x00000C, "Member 'BP_SkillEffect_BubbleShot_C_ExecuteUbergraph_BP_SkillEffect_BubbleShot::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_ExecuteUbergraph_BP_SkillEffect_BubbleShot, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000010, "Member 'BP_SkillEffect_BubbleShot_C_ExecuteUbergraph_BP_SkillEffect_BubbleShot::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_ExecuteUbergraph_BP_SkillEffect_BubbleShot, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000018, "Member 'BP_SkillEffect_BubbleShot_C_ExecuteUbergraph_BP_SkillEffect_BubbleShot::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_ExecuteUbergraph_BP_SkillEffect_BubbleShot, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x000020, "Member 'BP_SkillEffect_BubbleShot_C_ExecuteUbergraph_BP_SkillEffect_BubbleShot::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_SkillEffect_BubbleShot.BP_SkillEffect_BubbleShot_C.Explosion
// 0x0160 (0x0160 - 0x0000)
struct BP_SkillEffect_BubbleShot_C_Explosion final
{
public:
	class AActor*                                 CallFunc_FindTargetConsiderRide_TargetActor;       // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FindTargetConsiderRide_TargetActor_1;     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetGameTimeSinceCreation_ReturnValue;     // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RandomUnitVectorInConeInDegreesFromStream_ReturnValue; // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00D0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SkillEffect_BubbleShot_Bullet_C*    CallFunc_FinishSpawningActor_ReturnValue;          // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_141[0x7];                                      // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_VariableSet_Temp_time_ImplicitCast;         // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomUnitVectorInConeInDegreesFromStream_ConeHalfAngleInDegrees_ImplicitCast; // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_BubbleShot_C_Explosion) == 0x000010, "Wrong alignment on BP_SkillEffect_BubbleShot_C_Explosion");
static_assert(sizeof(BP_SkillEffect_BubbleShot_C_Explosion) == 0x000160, "Wrong size on BP_SkillEffect_BubbleShot_C_Explosion");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_Explosion, CallFunc_FindTargetConsiderRide_TargetActor) == 0x000000, "Member 'BP_SkillEffect_BubbleShot_C_Explosion::CallFunc_FindTargetConsiderRide_TargetActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_Explosion, CallFunc_FindTargetConsiderRide_TargetActor_1) == 0x000008, "Member 'BP_SkillEffect_BubbleShot_C_Explosion::CallFunc_FindTargetConsiderRide_TargetActor_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_Explosion, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000010, "Member 'BP_SkillEffect_BubbleShot_C_Explosion::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_Explosion, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_SkillEffect_BubbleShot_C_Explosion::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_Explosion, Temp_int_Variable) == 0x00001C, "Member 'BP_SkillEffect_BubbleShot_C_Explosion::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_Explosion, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000020, "Member 'BP_SkillEffect_BubbleShot_C_Explosion::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_Explosion, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'BP_SkillEffect_BubbleShot_C_Explosion::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_Explosion, CallFunc_GetGameTimeSinceCreation_ReturnValue) == 0x00003C, "Member 'BP_SkillEffect_BubbleShot_C_Explosion::CallFunc_GetGameTimeSinceCreation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_Explosion, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000040, "Member 'BP_SkillEffect_BubbleShot_C_Explosion::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_Explosion, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000058, "Member 'BP_SkillEffect_BubbleShot_C_Explosion::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_Explosion, CallFunc_GetForwardVector_ReturnValue) == 0x000070, "Member 'BP_SkillEffect_BubbleShot_C_Explosion::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_Explosion, CallFunc_RandomUnitVectorInConeInDegreesFromStream_ReturnValue) == 0x000088, "Member 'BP_SkillEffect_BubbleShot_C_Explosion::CallFunc_RandomUnitVectorInConeInDegreesFromStream_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_Explosion, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0000A0, "Member 'BP_SkillEffect_BubbleShot_C_Explosion::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_Explosion, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x0000B8, "Member 'BP_SkillEffect_BubbleShot_C_Explosion::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_Explosion, CallFunc_MakeTransform_ReturnValue) == 0x0000D0, "Member 'BP_SkillEffect_BubbleShot_C_Explosion::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_Explosion, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000130, "Member 'BP_SkillEffect_BubbleShot_C_Explosion::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_Explosion, CallFunc_FinishSpawningActor_ReturnValue) == 0x000138, "Member 'BP_SkillEffect_BubbleShot_C_Explosion::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_Explosion, CallFunc_IsValid_ReturnValue_1) == 0x000140, "Member 'BP_SkillEffect_BubbleShot_C_Explosion::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_Explosion, K2Node_VariableSet_Temp_time_ImplicitCast) == 0x000148, "Member 'BP_SkillEffect_BubbleShot_C_Explosion::K2Node_VariableSet_Temp_time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_Explosion, CallFunc_RandomUnitVectorInConeInDegreesFromStream_ConeHalfAngleInDegrees_ImplicitCast) == 0x000150, "Member 'BP_SkillEffect_BubbleShot_C_Explosion::CallFunc_RandomUnitVectorInConeInDegreesFromStream_ConeHalfAngleInDegrees_ImplicitCast' has a wrong offset!");

// Function BP_SkillEffect_BubbleShot.BP_SkillEffect_BubbleShot_C.ReceiveHit
// 0x0150 (0x0150 - 0x0000)
struct BP_SkillEffect_BubbleShot_C_ReceiveHit final
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
static_assert(alignof(BP_SkillEffect_BubbleShot_C_ReceiveHit) == 0x000008, "Wrong alignment on BP_SkillEffect_BubbleShot_C_ReceiveHit");
static_assert(sizeof(BP_SkillEffect_BubbleShot_C_ReceiveHit) == 0x000150, "Wrong size on BP_SkillEffect_BubbleShot_C_ReceiveHit");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_ReceiveHit, MyComp) == 0x000000, "Member 'BP_SkillEffect_BubbleShot_C_ReceiveHit::MyComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_ReceiveHit, Other) == 0x000008, "Member 'BP_SkillEffect_BubbleShot_C_ReceiveHit::Other' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_ReceiveHit, OtherComp) == 0x000010, "Member 'BP_SkillEffect_BubbleShot_C_ReceiveHit::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_ReceiveHit, bSelfMoved) == 0x000018, "Member 'BP_SkillEffect_BubbleShot_C_ReceiveHit::bSelfMoved' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_ReceiveHit, HitLocation) == 0x000020, "Member 'BP_SkillEffect_BubbleShot_C_ReceiveHit::HitLocation' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_ReceiveHit, HitNormal) == 0x000038, "Member 'BP_SkillEffect_BubbleShot_C_ReceiveHit::HitNormal' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_ReceiveHit, NormalImpulse) == 0x000050, "Member 'BP_SkillEffect_BubbleShot_C_ReceiveHit::NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_ReceiveHit, Hit) == 0x000068, "Member 'BP_SkillEffect_BubbleShot_C_ReceiveHit::Hit' has a wrong offset!");

// Function BP_SkillEffect_BubbleShot.BP_SkillEffect_BubbleShot_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_SkillEffect_BubbleShot_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_BubbleShot_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_SkillEffect_BubbleShot_C_ReceiveTick");
static_assert(sizeof(BP_SkillEffect_BubbleShot_C_ReceiveTick) == 0x000004, "Wrong size on BP_SkillEffect_BubbleShot_C_ReceiveTick");
static_assert(offsetof(BP_SkillEffect_BubbleShot_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_SkillEffect_BubbleShot_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

