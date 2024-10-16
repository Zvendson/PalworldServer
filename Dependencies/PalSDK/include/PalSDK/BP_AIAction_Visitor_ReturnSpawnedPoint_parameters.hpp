#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_AIAction_Visitor_ReturnSpawnedPoint.BP_AIAction_Visitor_ReturnSpawnedPoint_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_Visitor_ReturnSpawnedPoint_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIAction_Visitor_ReturnSpawnedPoint_C_ActionStart");
static_assert(sizeof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ActionStart) == 0x000008, "Wrong size on BP_AIAction_Visitor_ReturnSpawnedPoint_C_ActionStart");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ActionStart::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_Visitor_ReturnSpawnedPoint.BP_AIAction_Visitor_ReturnSpawnedPoint_C.ActionTick
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_Visitor_ReturnSpawnedPoint_C_ActionTick final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ActionTick) == 0x000008, "Wrong alignment on BP_AIAction_Visitor_ReturnSpawnedPoint_C_ActionTick");
static_assert(sizeof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ActionTick) == 0x000010, "Wrong size on BP_AIAction_Visitor_ReturnSpawnedPoint_C_ActionTick");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ActionTick, ControlledPawn) == 0x000000, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ActionTick::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ActionTick, DeltaSeconds) == 0x000008, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ActionTick::DeltaSeconds' has a wrong offset!");

// Function BP_AIAction_Visitor_ReturnSpawnedPoint.BP_AIAction_Visitor_ReturnSpawnedPoint_C.ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint
// 0x02D0 (0x02D0 - 0x0000)
struct BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPalInstanceID& ID)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalVisualEffectBase* VisualEffect)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26[0x2];                                       // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNearTwoPoint_ReturnValue;               // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalVisualEffectBase*                   CallFunc_AddVisualEffectForActor_ReturnValue;      // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterManager*                   CallFunc_GetCharacterManager_ReturnValue;          // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalInstanceID                         K2Node_CustomEvent_id;                             // 0x0088(0x0030)(HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x00D0(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x00E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x00F8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E1[0x7];                                      // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x01E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x01F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F2[0x2];                                      // 0x01F2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FC[0x4];                                      // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0200(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0218(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0230(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0248(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0260(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0268(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0270(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x028C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_294[0x4];                                      // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0298(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x02B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalVisualEffectBase*                   K2Node_CustomEvent_visualEffect;                   // 0x02C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint) == 0x000008, "Wrong alignment on BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint");
static_assert(sizeof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint) == 0x0002D0, "Wrong size on BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, EntryPoint) == 0x000000, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, Temp_bool_IsClosed_Variable) == 0x000024, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, Temp_bool_Has_Been_Initd_Variable) == 0x000025, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, K2Node_Event_ControlledPawn_1) == 0x000028, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, K2Node_Event_ControlledPawn) == 0x000030, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, K2Node_Event_DeltaSeconds) == 0x000038, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, CallFunc_IsValid_ReturnValue) == 0x00003C, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, CallFunc_GetComponentByClass_ReturnValue) == 0x000040, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000048, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000060, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, CallFunc_IsNearTwoPoint_ReturnValue) == 0x000068, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::CallFunc_IsNearTwoPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, CallFunc_AddVisualEffectForActor_ReturnValue) == 0x000070, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::CallFunc_AddVisualEffectForActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, CallFunc_IsValid_ReturnValue_1) == 0x000078, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, CallFunc_GetCharacterManager_ReturnValue) == 0x000080, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::CallFunc_GetCharacterManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, K2Node_CustomEvent_id) == 0x000088, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::K2Node_CustomEvent_id' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, CallFunc_Add_VectorVector_ReturnValue) == 0x0000B8, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, Temp_object_Variable) == 0x0000D0, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, CallFunc_Add_VectorVector_ReturnValue_1) == 0x0000E0, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, CallFunc_LineTraceSingle_OutHit) == 0x0000F8, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, CallFunc_LineTraceSingle_ReturnValue) == 0x0001E0, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, CallFunc_GetController_ReturnValue) == 0x0001E8, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, CallFunc_BreakHitResult_bBlockingHit) == 0x0001F0, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, CallFunc_BreakHitResult_bInitialOverlap) == 0x0001F1, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, CallFunc_BreakHitResult_Time) == 0x0001F4, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, CallFunc_BreakHitResult_Distance) == 0x0001F8, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, CallFunc_BreakHitResult_Location) == 0x000200, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, CallFunc_BreakHitResult_ImpactPoint) == 0x000218, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, CallFunc_BreakHitResult_Normal) == 0x000230, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, CallFunc_BreakHitResult_ImpactNormal) == 0x000248, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, CallFunc_BreakHitResult_PhysMat) == 0x000260, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, CallFunc_BreakHitResult_HitActor) == 0x000268, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, CallFunc_BreakHitResult_HitComponent) == 0x000270, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, CallFunc_BreakHitResult_HitBoneName) == 0x000278, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, CallFunc_BreakHitResult_BoneName) == 0x000280, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, CallFunc_BreakHitResult_HitItem) == 0x000288, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, CallFunc_BreakHitResult_ElementIndex) == 0x00028C, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, CallFunc_BreakHitResult_FaceIndex) == 0x000290, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, CallFunc_BreakHitResult_TraceStart) == 0x000298, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, CallFunc_BreakHitResult_TraceEnd) == 0x0002B0, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint, K2Node_CustomEvent_visualEffect) == 0x0002C8, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint::K2Node_CustomEvent_visualEffect' has a wrong offset!");

// Function BP_AIAction_Visitor_ReturnSpawnedPoint.BP_AIAction_Visitor_ReturnSpawnedPoint_C.カスタムイベント
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_Visitor_ReturnSpawnedPoint_C_________________________ final
{
public:
	class UPalVisualEffectBase*                   VisualEffect;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_________________________) == 0x000008, "Wrong alignment on BP_AIAction_Visitor_ReturnSpawnedPoint_C_________________________");
static_assert(sizeof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_________________________) == 0x000008, "Wrong size on BP_AIAction_Visitor_ReturnSpawnedPoint_C_________________________");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C_________________________, VisualEffect) == 0x000000, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C_________________________::VisualEffect' has a wrong offset!");

// Function BP_AIAction_Visitor_ReturnSpawnedPoint.BP_AIAction_Visitor_ReturnSpawnedPoint_C.カスタムイベント_0
// 0x0030 (0x0030 - 0x0000)
struct BP_AIAction_Visitor_ReturnSpawnedPoint_C__________________________0 final
{
public:
	struct FPalInstanceID                         ID;                                                // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Visitor_ReturnSpawnedPoint_C__________________________0) == 0x000008, "Wrong alignment on BP_AIAction_Visitor_ReturnSpawnedPoint_C__________________________0");
static_assert(sizeof(BP_AIAction_Visitor_ReturnSpawnedPoint_C__________________________0) == 0x000030, "Wrong size on BP_AIAction_Visitor_ReturnSpawnedPoint_C__________________________0");
static_assert(offsetof(BP_AIAction_Visitor_ReturnSpawnedPoint_C__________________________0, ID) == 0x000000, "Member 'BP_AIAction_Visitor_ReturnSpawnedPoint_C__________________________0::ID' has a wrong offset!");

}

