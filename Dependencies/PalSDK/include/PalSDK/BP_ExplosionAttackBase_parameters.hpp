#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.Can Damage by Ray Check
// 0x02B0 (0x02B0 - 0x0000)
struct BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check final
{
public:
	class UPrimitiveComponent*                    OtherHitCollision;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CanDamage;                                         // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetComponentBounds_Origin;                // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetComponentBounds_BoxExtent;             // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetComponentBounds_SphereRadius;          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalFoliageISMComponentBase*            K2Node_DynamicCast_AsPal_Foliage_ISMComponent_Base; // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0078(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x00E8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x01D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D3[0x1];                                      // 0x01D3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DC[0x4];                                      // 0x01DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x01E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x01F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0210(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0228(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0240(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0248(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0250(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x026C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_274[0x4];                                      // 0x0274(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0278(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0290(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check) == 0x000008, "Wrong alignment on BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check");
static_assert(sizeof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check) == 0x0002B0, "Wrong size on BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, OtherHitCollision) == 0x000000, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::OtherHitCollision' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, CanDamage) == 0x000008, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::CanDamage' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, CallFunc_GetComponentBounds_Origin) == 0x000010, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::CallFunc_GetComponentBounds_Origin' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, CallFunc_GetComponentBounds_BoxExtent) == 0x000028, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::CallFunc_GetComponentBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, CallFunc_GetComponentBounds_SphereRadius) == 0x000040, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::CallFunc_GetComponentBounds_SphereRadius' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, K2Node_DynamicCast_AsPal_Foliage_ISMComponent_Base) == 0x000048, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::K2Node_DynamicCast_AsPal_Foliage_ISMComponent_Base' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000058, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, CallFunc_GetOwner_ReturnValue) == 0x000070, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, Temp_object_Variable) == 0x000078, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, CallFunc_GetActorForwardVector_ReturnValue) == 0x000088, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0000A0, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000B8, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, CallFunc_Add_VectorVector_ReturnValue) == 0x0000D0, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, CallFunc_LineTraceSingle_OutHit) == 0x0000E8, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, CallFunc_LineTraceSingle_ReturnValue) == 0x0001D0, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, CallFunc_BreakHitResult_bBlockingHit) == 0x0001D1, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, CallFunc_BreakHitResult_bInitialOverlap) == 0x0001D2, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, CallFunc_BreakHitResult_Time) == 0x0001D4, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, CallFunc_BreakHitResult_Distance) == 0x0001D8, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, CallFunc_BreakHitResult_Location) == 0x0001E0, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, CallFunc_BreakHitResult_ImpactPoint) == 0x0001F8, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, CallFunc_BreakHitResult_Normal) == 0x000210, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, CallFunc_BreakHitResult_ImpactNormal) == 0x000228, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, CallFunc_BreakHitResult_PhysMat) == 0x000240, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, CallFunc_BreakHitResult_HitActor) == 0x000248, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, CallFunc_BreakHitResult_HitComponent) == 0x000250, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, CallFunc_BreakHitResult_HitBoneName) == 0x000258, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, CallFunc_BreakHitResult_BoneName) == 0x000260, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, CallFunc_BreakHitResult_HitItem) == 0x000268, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, CallFunc_BreakHitResult_ElementIndex) == 0x00026C, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, CallFunc_BreakHitResult_FaceIndex) == 0x000270, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, CallFunc_BreakHitResult_TraceStart) == 0x000278, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, CallFunc_BreakHitResult_TraceEnd) == 0x000290, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0002A8, "Member 'BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.ExecuteUbergraph_BP_ExplosionAttackBase
// 0x0098 (0x0098 - 0x0000)
struct BP_ExplosionAttackBase_C_ExecuteUbergraph_BP_ExplosionAttackBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHitFilter*                          CallFunc_SpawnObject_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, TArray<int32>& FoliageIndex, const struct FVector& HitLocation, int32 HitCount)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExplosionAttackBase_C_ExecuteUbergraph_BP_ExplosionAttackBase) == 0x000008, "Wrong alignment on BP_ExplosionAttackBase_C_ExecuteUbergraph_BP_ExplosionAttackBase");
static_assert(sizeof(BP_ExplosionAttackBase_C_ExecuteUbergraph_BP_ExplosionAttackBase) == 0x000098, "Wrong size on BP_ExplosionAttackBase_C_ExecuteUbergraph_BP_ExplosionAttackBase");
static_assert(offsetof(BP_ExplosionAttackBase_C_ExecuteUbergraph_BP_ExplosionAttackBase, EntryPoint) == 0x000000, "Member 'BP_ExplosionAttackBase_C_ExecuteUbergraph_BP_ExplosionAttackBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_ExecuteUbergraph_BP_ExplosionAttackBase, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_ExplosionAttackBase_C_ExecuteUbergraph_BP_ExplosionAttackBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_ExecuteUbergraph_BP_ExplosionAttackBase, CallFunc_SpawnObject_ReturnValue) == 0x000018, "Member 'BP_ExplosionAttackBase_C_ExecuteUbergraph_BP_ExplosionAttackBase::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_ExecuteUbergraph_BP_ExplosionAttackBase, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000020, "Member 'BP_ExplosionAttackBase_C_ExecuteUbergraph_BP_ExplosionAttackBase::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_ExecuteUbergraph_BP_ExplosionAttackBase, K2Node_CreateDelegate_OutputDelegate_1) == 0x000028, "Member 'BP_ExplosionAttackBase_C_ExecuteUbergraph_BP_ExplosionAttackBase::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_ExecuteUbergraph_BP_ExplosionAttackBase, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000038, "Member 'BP_ExplosionAttackBase_C_ExecuteUbergraph_BP_ExplosionAttackBase::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_ExecuteUbergraph_BP_ExplosionAttackBase, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000050, "Member 'BP_ExplosionAttackBase_C_ExecuteUbergraph_BP_ExplosionAttackBase::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_ExecuteUbergraph_BP_ExplosionAttackBase, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000058, "Member 'BP_ExplosionAttackBase_C_ExecuteUbergraph_BP_ExplosionAttackBase::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_ExecuteUbergraph_BP_ExplosionAttackBase, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'BP_ExplosionAttackBase_C_ExecuteUbergraph_BP_ExplosionAttackBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_ExecuteUbergraph_BP_ExplosionAttackBase, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000078, "Member 'BP_ExplosionAttackBase_C_ExecuteUbergraph_BP_ExplosionAttackBase::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_ExecuteUbergraph_BP_ExplosionAttackBase, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000090, "Member 'BP_ExplosionAttackBase_C_ExecuteUbergraph_BP_ExplosionAttackBase::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.FindAttacker
// 0x0030 (0x0030 - 0x0000)
struct BP_ExplosionAttackBase_C_FindAttacker final
{
public:
	class AActor*                                 Attacker;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalWeaponBase*                         K2Node_DynamicCast_AsPal_Weapon_Base;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetWeaponAttacker_ReturnValue;            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExplosionAttackBase_C_FindAttacker) == 0x000008, "Wrong alignment on BP_ExplosionAttackBase_C_FindAttacker");
static_assert(sizeof(BP_ExplosionAttackBase_C_FindAttacker) == 0x000030, "Wrong size on BP_ExplosionAttackBase_C_FindAttacker");
static_assert(offsetof(BP_ExplosionAttackBase_C_FindAttacker, Attacker) == 0x000000, "Member 'BP_ExplosionAttackBase_C_FindAttacker::Attacker' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_FindAttacker, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_ExplosionAttackBase_C_FindAttacker::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_FindAttacker, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000010, "Member 'BP_ExplosionAttackBase_C_FindAttacker::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_FindAttacker, K2Node_DynamicCast_AsPal_Weapon_Base) == 0x000018, "Member 'BP_ExplosionAttackBase_C_FindAttacker::K2Node_DynamicCast_AsPal_Weapon_Base' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_FindAttacker, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_ExplosionAttackBase_C_FindAttacker::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_FindAttacker, CallFunc_GetWeaponAttacker_ReturnValue) == 0x000028, "Member 'BP_ExplosionAttackBase_C_FindAttacker::CallFunc_GetWeaponAttacker_ReturnValue' has a wrong offset!");

// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.Get Attackable Friend
// 0x0001 (0x0001 - 0x0000)
struct BP_ExplosionAttackBase_C_Get_Attackable_Friend final
{
public:
	bool                                          IsFriendAttack;                                    // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExplosionAttackBase_C_Get_Attackable_Friend) == 0x000001, "Wrong alignment on BP_ExplosionAttackBase_C_Get_Attackable_Friend");
static_assert(sizeof(BP_ExplosionAttackBase_C_Get_Attackable_Friend) == 0x000001, "Wrong size on BP_ExplosionAttackBase_C_Get_Attackable_Friend");
static_assert(offsetof(BP_ExplosionAttackBase_C_Get_Attackable_Friend, IsFriendAttack) == 0x000000, "Member 'BP_ExplosionAttackBase_C_Get_Attackable_Friend::IsFriendAttack' has a wrong offset!");

// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.GetEffectType
// 0x0001 (0x0001 - 0x0000)
struct BP_ExplosionAttackBase_C_GetEffectType final
{
public:
	EPalAdditionalEffectType                      Effect;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExplosionAttackBase_C_GetEffectType) == 0x000001, "Wrong alignment on BP_ExplosionAttackBase_C_GetEffectType");
static_assert(sizeof(BP_ExplosionAttackBase_C_GetEffectType) == 0x000001, "Wrong size on BP_ExplosionAttackBase_C_GetEffectType");
static_assert(offsetof(BP_ExplosionAttackBase_C_GetEffectType, Effect) == 0x000000, "Member 'BP_ExplosionAttackBase_C_GetEffectType::Effect' has a wrong offset!");

// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.GetEffectValue
// 0x0004 (0x0004 - 0x0000)
struct BP_ExplosionAttackBase_C_GetEffectValue final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExplosionAttackBase_C_GetEffectValue) == 0x000004, "Wrong alignment on BP_ExplosionAttackBase_C_GetEffectValue");
static_assert(sizeof(BP_ExplosionAttackBase_C_GetEffectValue) == 0x000004, "Wrong size on BP_ExplosionAttackBase_C_GetEffectValue");
static_assert(offsetof(BP_ExplosionAttackBase_C_GetEffectValue, Value) == 0x000000, "Member 'BP_ExplosionAttackBase_C_GetEffectValue::Value' has a wrong offset!");

// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.GetElement
// 0x0001 (0x0001 - 0x0000)
struct BP_ExplosionAttackBase_C_GetElement final
{
public:
	EPalElementType                               Element;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExplosionAttackBase_C_GetElement) == 0x000001, "Wrong alignment on BP_ExplosionAttackBase_C_GetElement");
static_assert(sizeof(BP_ExplosionAttackBase_C_GetElement) == 0x000001, "Wrong size on BP_ExplosionAttackBase_C_GetElement");
static_assert(offsetof(BP_ExplosionAttackBase_C_GetElement, Element) == 0x000000, "Member 'BP_ExplosionAttackBase_C_GetElement::Element' has a wrong offset!");

// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.GetWeaponAttackType
// 0x0001 (0x0001 - 0x0000)
struct BP_ExplosionAttackBase_C_GetWeaponAttackType final
{
public:
	EPalAttackType                                AttackType;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExplosionAttackBase_C_GetWeaponAttackType) == 0x000001, "Wrong alignment on BP_ExplosionAttackBase_C_GetWeaponAttackType");
static_assert(sizeof(BP_ExplosionAttackBase_C_GetWeaponAttackType) == 0x000001, "Wrong size on BP_ExplosionAttackBase_C_GetWeaponAttackType");
static_assert(offsetof(BP_ExplosionAttackBase_C_GetWeaponAttackType, AttackType) == 0x000000, "Member 'BP_ExplosionAttackBase_C_GetWeaponAttackType::AttackType' has a wrong offset!");

// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.Is Attack Able
// 0x0020 (0x0020 - 0x0000)
struct BP_ExplosionAttackBase_C_Is_Attack_Able final
{
public:
	class AActor*                                 Attacker;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 HitActor;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHit;                                             // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsApplicableDamage_ReturnValue;           // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExplosionAttackBase_C_Is_Attack_Able) == 0x000008, "Wrong alignment on BP_ExplosionAttackBase_C_Is_Attack_Able");
static_assert(sizeof(BP_ExplosionAttackBase_C_Is_Attack_Able) == 0x000020, "Wrong size on BP_ExplosionAttackBase_C_Is_Attack_Able");
static_assert(offsetof(BP_ExplosionAttackBase_C_Is_Attack_Able, Attacker) == 0x000000, "Member 'BP_ExplosionAttackBase_C_Is_Attack_Able::Attacker' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Is_Attack_Able, HitActor) == 0x000008, "Member 'BP_ExplosionAttackBase_C_Is_Attack_Able::HitActor' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Is_Attack_Able, HitComponent) == 0x000010, "Member 'BP_ExplosionAttackBase_C_Is_Attack_Able::HitComponent' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Is_Attack_Able, IsHit) == 0x000018, "Member 'BP_ExplosionAttackBase_C_Is_Attack_Able::IsHit' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_Is_Attack_Able, CallFunc_IsApplicableDamage_ReturnValue) == 0x000019, "Member 'BP_ExplosionAttackBase_C_Is_Attack_Able::CallFunc_IsApplicableDamage_ReturnValue' has a wrong offset!");

// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.OnHit
// 0x0388 (0x0388 - 0x0000)
struct BP_ExplosionAttackBase_C_OnHit final
{
public:
	class UPrimitiveComponent*                    MyHitComponent;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherHitActor;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherHitComponent;                                 // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 FoliageIndex;                                      // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                HitLocation;                                       // 0x0028(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HitCount;                                          // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 OwnerCharacter;                                    // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalFoliageISMComponentBase*            K2Node_DynamicCast_AsPal_Foliage_ISMComponent_Base; // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Can_Damage_by_Ray_Check_CanDamage;        // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Get_Attackable_Friend_IsFriendAttack;     // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Is_Attack_Able_IsHit;                     // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Get_Attackable_Friend_IsFriendAttack_1;   // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalAdditionalEffectType                      CallFunc_GetEffectType_Effect;                     // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66[0x2];                                       // 0x0066(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetEffectValue_Value;                     // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalElementType                               CallFunc_GetElement_Element;                       // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D[0x3];                                       // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_FindAttacker_Attacker;                    // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalAttackType                                CallFunc_GetWeaponAttackType_AttackType;           // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_GetOverlapFoliageIndexByComponent_ReturnValue; // 0x0080(0x0010)(ReferenceParm)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Select_Default;                             // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_CalcBlowVelocity_ReturnValue;             // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0108(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalMakeDamageInfo                     K2Node_MakeStruct_PalMakeDamageInfo;               // 0x0120(0x0190)(ContainsInstancedReference)
	struct FPalDamageInfo                         CallFunc_MakeDamageInfo_ReturnValue;               // 0x02B0(0x00D0)()
	float                                         K2Node_MakeStruct_SneakAttackRate_ImplicitCast;    // 0x0380(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExplosionAttackBase_C_OnHit) == 0x000008, "Wrong alignment on BP_ExplosionAttackBase_C_OnHit");
static_assert(sizeof(BP_ExplosionAttackBase_C_OnHit) == 0x000388, "Wrong size on BP_ExplosionAttackBase_C_OnHit");
static_assert(offsetof(BP_ExplosionAttackBase_C_OnHit, MyHitComponent) == 0x000000, "Member 'BP_ExplosionAttackBase_C_OnHit::MyHitComponent' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_OnHit, OtherHitActor) == 0x000008, "Member 'BP_ExplosionAttackBase_C_OnHit::OtherHitActor' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_OnHit, OtherHitComponent) == 0x000010, "Member 'BP_ExplosionAttackBase_C_OnHit::OtherHitComponent' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_OnHit, FoliageIndex) == 0x000018, "Member 'BP_ExplosionAttackBase_C_OnHit::FoliageIndex' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_OnHit, HitLocation) == 0x000028, "Member 'BP_ExplosionAttackBase_C_OnHit::HitLocation' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_OnHit, HitCount) == 0x000040, "Member 'BP_ExplosionAttackBase_C_OnHit::HitCount' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_OnHit, OwnerCharacter) == 0x000048, "Member 'BP_ExplosionAttackBase_C_OnHit::OwnerCharacter' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_OnHit, Temp_bool_Variable) == 0x000050, "Member 'BP_ExplosionAttackBase_C_OnHit::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_OnHit, K2Node_DynamicCast_AsPal_Foliage_ISMComponent_Base) == 0x000058, "Member 'BP_ExplosionAttackBase_C_OnHit::K2Node_DynamicCast_AsPal_Foliage_ISMComponent_Base' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_OnHit, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'BP_ExplosionAttackBase_C_OnHit::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_OnHit, CallFunc_Can_Damage_by_Ray_Check_CanDamage) == 0x000061, "Member 'BP_ExplosionAttackBase_C_OnHit::CallFunc_Can_Damage_by_Ray_Check_CanDamage' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_OnHit, CallFunc_Get_Attackable_Friend_IsFriendAttack) == 0x000062, "Member 'BP_ExplosionAttackBase_C_OnHit::CallFunc_Get_Attackable_Friend_IsFriendAttack' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_OnHit, CallFunc_Is_Attack_Able_IsHit) == 0x000063, "Member 'BP_ExplosionAttackBase_C_OnHit::CallFunc_Is_Attack_Able_IsHit' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_OnHit, CallFunc_Get_Attackable_Friend_IsFriendAttack_1) == 0x000064, "Member 'BP_ExplosionAttackBase_C_OnHit::CallFunc_Get_Attackable_Friend_IsFriendAttack_1' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_OnHit, CallFunc_GetEffectType_Effect) == 0x000065, "Member 'BP_ExplosionAttackBase_C_OnHit::CallFunc_GetEffectType_Effect' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_OnHit, CallFunc_GetEffectValue_Value) == 0x000068, "Member 'BP_ExplosionAttackBase_C_OnHit::CallFunc_GetEffectValue_Value' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_OnHit, CallFunc_GetElement_Element) == 0x00006C, "Member 'BP_ExplosionAttackBase_C_OnHit::CallFunc_GetElement_Element' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_OnHit, CallFunc_FindAttacker_Attacker) == 0x000070, "Member 'BP_ExplosionAttackBase_C_OnHit::CallFunc_FindAttacker_Attacker' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_OnHit, CallFunc_GetWeaponAttackType_AttackType) == 0x000078, "Member 'BP_ExplosionAttackBase_C_OnHit::CallFunc_GetWeaponAttackType_AttackType' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_OnHit, CallFunc_GetOverlapFoliageIndexByComponent_ReturnValue) == 0x000080, "Member 'BP_ExplosionAttackBase_C_OnHit::CallFunc_GetOverlapFoliageIndexByComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_OnHit, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000090, "Member 'BP_ExplosionAttackBase_C_OnHit::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_OnHit, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000A8, "Member 'BP_ExplosionAttackBase_C_OnHit::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_OnHit, CallFunc_VLerp_ReturnValue) == 0x0000C0, "Member 'BP_ExplosionAttackBase_C_OnHit::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_OnHit, K2Node_Select_Default) == 0x0000D8, "Member 'BP_ExplosionAttackBase_C_OnHit::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_OnHit, CallFunc_CalcBlowVelocity_ReturnValue) == 0x0000F0, "Member 'BP_ExplosionAttackBase_C_OnHit::CallFunc_CalcBlowVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_OnHit, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000108, "Member 'BP_ExplosionAttackBase_C_OnHit::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_OnHit, K2Node_MakeStruct_PalMakeDamageInfo) == 0x000120, "Member 'BP_ExplosionAttackBase_C_OnHit::K2Node_MakeStruct_PalMakeDamageInfo' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_OnHit, CallFunc_MakeDamageInfo_ReturnValue) == 0x0002B0, "Member 'BP_ExplosionAttackBase_C_OnHit::CallFunc_MakeDamageInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_OnHit, K2Node_MakeStruct_SneakAttackRate_ImplicitCast) == 0x000380, "Member 'BP_ExplosionAttackBase_C_OnHit::K2Node_MakeStruct_SneakAttackRate_ImplicitCast' has a wrong offset!");

// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.SetBlowPower
// 0x0008 (0x0008 - 0x0000)
struct BP_ExplosionAttackBase_C_SetBlowPower final
{
public:
	double                                        NewBlowPower;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExplosionAttackBase_C_SetBlowPower) == 0x000008, "Wrong alignment on BP_ExplosionAttackBase_C_SetBlowPower");
static_assert(sizeof(BP_ExplosionAttackBase_C_SetBlowPower) == 0x000008, "Wrong size on BP_ExplosionAttackBase_C_SetBlowPower");
static_assert(offsetof(BP_ExplosionAttackBase_C_SetBlowPower, NewBlowPower) == 0x000000, "Member 'BP_ExplosionAttackBase_C_SetBlowPower::NewBlowPower' has a wrong offset!");

// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.SetPower
// 0x0010 (0x0010 - 0x0000)
struct BP_ExplosionAttackBase_C_SetPower final
{
public:
	int32                                         NewParam;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        SnakeRate;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExplosionAttackBase_C_SetPower) == 0x000008, "Wrong alignment on BP_ExplosionAttackBase_C_SetPower");
static_assert(sizeof(BP_ExplosionAttackBase_C_SetPower) == 0x000010, "Wrong size on BP_ExplosionAttackBase_C_SetPower");
static_assert(offsetof(BP_ExplosionAttackBase_C_SetPower, NewParam) == 0x000000, "Member 'BP_ExplosionAttackBase_C_SetPower::NewParam' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_SetPower, SnakeRate) == 0x000008, "Member 'BP_ExplosionAttackBase_C_SetPower::SnakeRate' has a wrong offset!");

// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.SetRadius
// 0x0008 (0x0008 - 0x0000)
struct BP_ExplosionAttackBase_C_SetRadius final
{
public:
	int32                                         NewParam;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExplosionAttackBase_C_SetRadius) == 0x000004, "Wrong alignment on BP_ExplosionAttackBase_C_SetRadius");
static_assert(sizeof(BP_ExplosionAttackBase_C_SetRadius) == 0x000008, "Wrong size on BP_ExplosionAttackBase_C_SetRadius");
static_assert(offsetof(BP_ExplosionAttackBase_C_SetRadius, NewParam) == 0x000000, "Member 'BP_ExplosionAttackBase_C_SetRadius::NewParam' has a wrong offset!");
static_assert(offsetof(BP_ExplosionAttackBase_C_SetRadius, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000004, "Member 'BP_ExplosionAttackBase_C_SetRadius::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");

}

