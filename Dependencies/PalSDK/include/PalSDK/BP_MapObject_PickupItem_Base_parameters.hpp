#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_MapObject_PickupItem_Base.BP_MapObject_PickupItem_Base_C.ExecuteUbergraph_BP_MapObject_PickupItem_Base
// 0x0300 (0x0300 - 0x0000)
struct BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0040(0x0010)(ConstParm, ReferenceParm)
	struct FHitResult                             CallFunc_SphereTraceSingle_OutHit;                 // 0x0050(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_SphereTraceSingle_ReturnValue;            // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x013A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13B[0x1];                                      // 0x013B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_144[0x4];                                      // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0148(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0160(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0178(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0190(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x01A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x01B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DC[0x4];                                      // 0x01DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x01E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x01F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0210(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F9[0x3];                                      // 0x02F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x02FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base) == 0x000008, "Wrong alignment on BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base");
static_assert(sizeof(BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base) == 0x000300, "Wrong size on BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base");
static_assert(offsetof(BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base, EntryPoint) == 0x000000, "Member 'BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base, CallFunc_RandomFloatInRange_ReturnValue) == 0x000008, "Member 'BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000028, "Member 'BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base, Temp_object_Variable) == 0x000040, "Member 'BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base, CallFunc_SphereTraceSingle_OutHit) == 0x000050, "Member 'BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base::CallFunc_SphereTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base, CallFunc_SphereTraceSingle_ReturnValue) == 0x000138, "Member 'BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base::CallFunc_SphereTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base, CallFunc_BreakHitResult_bBlockingHit) == 0x000139, "Member 'BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base, CallFunc_BreakHitResult_bInitialOverlap) == 0x00013A, "Member 'BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base, CallFunc_BreakHitResult_Time) == 0x00013C, "Member 'BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base, CallFunc_BreakHitResult_Distance) == 0x000140, "Member 'BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base, CallFunc_BreakHitResult_Location) == 0x000148, "Member 'BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base, CallFunc_BreakHitResult_ImpactPoint) == 0x000160, "Member 'BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base, CallFunc_BreakHitResult_Normal) == 0x000178, "Member 'BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base, CallFunc_BreakHitResult_ImpactNormal) == 0x000190, "Member 'BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base, CallFunc_BreakHitResult_PhysMat) == 0x0001A8, "Member 'BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base, CallFunc_BreakHitResult_HitActor) == 0x0001B0, "Member 'BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base, CallFunc_BreakHitResult_HitComponent) == 0x0001B8, "Member 'BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base, CallFunc_BreakHitResult_HitBoneName) == 0x0001C0, "Member 'BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base, CallFunc_BreakHitResult_BoneName) == 0x0001C8, "Member 'BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base, CallFunc_BreakHitResult_HitItem) == 0x0001D0, "Member 'BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base, CallFunc_BreakHitResult_ElementIndex) == 0x0001D4, "Member 'BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base, CallFunc_BreakHitResult_FaceIndex) == 0x0001D8, "Member 'BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base, CallFunc_BreakHitResult_TraceStart) == 0x0001E0, "Member 'BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base, CallFunc_BreakHitResult_TraceEnd) == 0x0001F8, "Member 'BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000210, "Member 'BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base, CallFunc_K2_SetActorLocation_ReturnValue) == 0x0002F8, "Member 'BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base, CallFunc_Delay_Duration_ImplicitCast) == 0x0002FC, "Member 'BP_MapObject_PickupItem_Base_C_ExecuteUbergraph_BP_MapObject_PickupItem_Base::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

}

