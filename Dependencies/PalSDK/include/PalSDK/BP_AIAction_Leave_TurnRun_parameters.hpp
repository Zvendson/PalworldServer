#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_AIAction_Leave_TurnRun.BP_AIAction_Leave_TurnRun_C.OnSuccess_30D2F75E48B32C365F20FE998491DC93
// 0x0001 (0x0001 - 0x0000)
struct BP_AIAction_Leave_TurnRun_C_OnSuccess_30D2F75E48B32C365F20FE998491DC93 final
{
public:
	EPathFollowingResult                          MovementResult;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Leave_TurnRun_C_OnSuccess_30D2F75E48B32C365F20FE998491DC93) == 0x000001, "Wrong alignment on BP_AIAction_Leave_TurnRun_C_OnSuccess_30D2F75E48B32C365F20FE998491DC93");
static_assert(sizeof(BP_AIAction_Leave_TurnRun_C_OnSuccess_30D2F75E48B32C365F20FE998491DC93) == 0x000001, "Wrong size on BP_AIAction_Leave_TurnRun_C_OnSuccess_30D2F75E48B32C365F20FE998491DC93");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_OnSuccess_30D2F75E48B32C365F20FE998491DC93, MovementResult) == 0x000000, "Member 'BP_AIAction_Leave_TurnRun_C_OnSuccess_30D2F75E48B32C365F20FE998491DC93::MovementResult' has a wrong offset!");

// Function BP_AIAction_Leave_TurnRun.BP_AIAction_Leave_TurnRun_C.OnFail_30D2F75E48B32C365F20FE998491DC93
// 0x0001 (0x0001 - 0x0000)
struct BP_AIAction_Leave_TurnRun_C_OnFail_30D2F75E48B32C365F20FE998491DC93 final
{
public:
	EPathFollowingResult                          MovementResult;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Leave_TurnRun_C_OnFail_30D2F75E48B32C365F20FE998491DC93) == 0x000001, "Wrong alignment on BP_AIAction_Leave_TurnRun_C_OnFail_30D2F75E48B32C365F20FE998491DC93");
static_assert(sizeof(BP_AIAction_Leave_TurnRun_C_OnFail_30D2F75E48B32C365F20FE998491DC93) == 0x000001, "Wrong size on BP_AIAction_Leave_TurnRun_C_OnFail_30D2F75E48B32C365F20FE998491DC93");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_OnFail_30D2F75E48B32C365F20FE998491DC93, MovementResult) == 0x000000, "Member 'BP_AIAction_Leave_TurnRun_C_OnFail_30D2F75E48B32C365F20FE998491DC93::MovementResult' has a wrong offset!");

// Function BP_AIAction_Leave_TurnRun.BP_AIAction_Leave_TurnRun_C.LineTraceMovePosition
// 0x03D0 (0x03D0 - 0x0000)
struct BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition final
{
public:
	bool                                          Hit;                                               // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x1];                                        // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0008(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_Array_Get_Item;                           // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Vector_Down_ReturnValue;                  // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Vector_Up_ReturnValue;                    // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Vector_Up_ReturnValue_1;                  // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0108(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0138(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0150(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Cross_VectorVector_ReturnValue;           // 0x0168(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_2;       // 0x0180(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_3;       // 0x0198(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x01B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x01C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;           // 0x01E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_3;           // 0x01F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x0210(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x02F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x02FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FB[0x1];                                      // 0x02FB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x02FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0300(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_304[0x4];                                      // 0x0304(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0308(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0320(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0338(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0350(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0368(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0370(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0378(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0380(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0388(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0390(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0394(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0398(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39C[0x4];                                      // 0x039C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x03A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x03B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition) == 0x000008, "Wrong alignment on BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition");
static_assert(sizeof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition) == 0x0003D0, "Wrong size on BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, Hit) == 0x000000, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::Hit' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000002, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, Temp_object_Variable) == 0x000008, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_Array_Get_Item) == 0x000018, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_BreakVector_X) == 0x000030, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_BreakVector_Y) == 0x000038, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_BreakVector_Z) == 0x000040, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_Vector_Down_ReturnValue) == 0x000048, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_Vector_Down_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_Vector_Up_ReturnValue) == 0x000060, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_Vector_Up_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000078, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x000090, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_Vector_Up_ReturnValue_1) == 0x0000A8, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_Vector_Up_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000C0, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000D8, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x0000F0, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000108, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_BreakVector_X_1) == 0x000120, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_BreakVector_Y_1) == 0x000128, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_BreakVector_Z_1) == 0x000130, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_MakeVector_ReturnValue) == 0x000138, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_Normal_ReturnValue) == 0x000150, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_Cross_VectorVector_ReturnValue) == 0x000168, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_Cross_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_Multiply_VectorFloat_ReturnValue_2) == 0x000180, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_Multiply_VectorFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_Multiply_VectorFloat_ReturnValue_3) == 0x000198, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_Multiply_VectorFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_Add_VectorVector_ReturnValue) == 0x0001B0, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_Add_VectorVector_ReturnValue_1) == 0x0001C8, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_Add_VectorVector_ReturnValue_2) == 0x0001E0, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_Add_VectorVector_ReturnValue_3) == 0x0001F8, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_Add_VectorVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_LineTraceSingle_OutHit) == 0x000210, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_LineTraceSingle_ReturnValue) == 0x0002F8, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_BreakHitResult_bBlockingHit) == 0x0002F9, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_BreakHitResult_bInitialOverlap) == 0x0002FA, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_BreakHitResult_Time) == 0x0002FC, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_BreakHitResult_Distance) == 0x000300, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_BreakHitResult_Location) == 0x000308, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_BreakHitResult_ImpactPoint) == 0x000320, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_BreakHitResult_Normal) == 0x000338, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_BreakHitResult_ImpactNormal) == 0x000350, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_BreakHitResult_PhysMat) == 0x000368, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_BreakHitResult_HitActor) == 0x000370, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_BreakHitResult_HitComponent) == 0x000378, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_BreakHitResult_HitBoneName) == 0x000380, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_BreakHitResult_BoneName) == 0x000388, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_BreakHitResult_HitItem) == 0x000390, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_BreakHitResult_ElementIndex) == 0x000394, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_BreakHitResult_FaceIndex) == 0x000398, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_BreakHitResult_TraceStart) == 0x0003A0, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition, CallFunc_BreakHitResult_TraceEnd) == 0x0003B8, "Member 'BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");

// Function BP_AIAction_Leave_TurnRun.BP_AIAction_Leave_TurnRun_C.LineTrace_forFailure
// 0x0430 (0x0430 - 0x0000)
struct BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure final
{
public:
	struct FVector                                MoveTarget;                                        // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Midpoint;                                          // 0x0018(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Interval;                                          // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Sign;                                              // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Weight;                                            // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SelfPos;                                           // 0x0048(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ForwardVector;                                     // 0x0060(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RightVector;                                       // 0x0078(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x00A0(0x0010)(ConstParm, ReferenceParm)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x00E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Vector_Down_ReturnValue;                  // 0x00F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Vector_Up_ReturnValue;                    // 0x0110(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x0128(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_2;       // 0x0140(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0158(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0170(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Vector_Up_ReturnValue_1;                  // 0x0188(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x01A0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_289[0x7];                                      // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Cross_VectorVector_ReturnValue;           // 0x0290(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x02A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AA[0x2];                                      // 0x02AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x02AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B4[0x4];                                      // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x02B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x02D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x02E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0300(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0318(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0320(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0328(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0330(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0338(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0340(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0344(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0348(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34C[0x4];                                      // 0x034C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0350(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0368(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0380(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0398(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x03B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x03C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x03D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x03D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x03E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x03F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_3;       // 0x0410(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VLerp_Alpha_ImplicitCast;                 // 0x0428(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure) == 0x000008, "Wrong alignment on BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure");
static_assert(sizeof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure) == 0x000430, "Wrong size on BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, MoveTarget) == 0x000000, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::MoveTarget' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, Midpoint) == 0x000018, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::Midpoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, Interval) == 0x000030, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::Interval' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, Sign) == 0x000038, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::Sign' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, Weight) == 0x000040, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::Weight' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, SelfPos) == 0x000048, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::SelfPos' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, ForwardVector) == 0x000060, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::ForwardVector' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, RightVector) == 0x000078, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::RightVector' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_IsValid_ReturnValue) == 0x000090, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, Temp_int_Variable) == 0x000094, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000098, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_Add_IntInt_ReturnValue) == 0x00009C, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, Temp_object_Variable) == 0x0000A0, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0000B0, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000B8, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_Less_DoubleDouble_ReturnValue) == 0x0000C0, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0000C8, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_VLerp_ReturnValue) == 0x0000E0, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_Vector_Down_ReturnValue) == 0x0000F8, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_Vector_Down_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_Vector_Up_ReturnValue) == 0x000110, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_Vector_Up_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x000128, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_Multiply_VectorFloat_ReturnValue_2) == 0x000140, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_Multiply_VectorFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_Add_VectorVector_ReturnValue) == 0x000158, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000170, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_Vector_Up_ReturnValue_1) == 0x000188, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_Vector_Up_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_LineTraceSingle_OutHit) == 0x0001A0, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_LineTraceSingle_ReturnValue) == 0x000288, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_Cross_VectorVector_ReturnValue) == 0x000290, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_Cross_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_BreakHitResult_bBlockingHit) == 0x0002A8, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_BreakHitResult_bInitialOverlap) == 0x0002A9, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_BreakHitResult_Time) == 0x0002AC, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_BreakHitResult_Distance) == 0x0002B0, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_BreakHitResult_Location) == 0x0002B8, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_BreakHitResult_ImpactPoint) == 0x0002D0, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_BreakHitResult_Normal) == 0x0002E8, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_BreakHitResult_ImpactNormal) == 0x000300, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_BreakHitResult_PhysMat) == 0x000318, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_BreakHitResult_HitActor) == 0x000320, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_BreakHitResult_HitComponent) == 0x000328, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_BreakHitResult_HitBoneName) == 0x000330, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_BreakHitResult_BoneName) == 0x000338, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_BreakHitResult_HitItem) == 0x000340, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_BreakHitResult_ElementIndex) == 0x000344, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_BreakHitResult_FaceIndex) == 0x000348, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_BreakHitResult_TraceStart) == 0x000350, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_BreakHitResult_TraceEnd) == 0x000368, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000380, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000398, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0003B0, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_BreakVector_X) == 0x0003C8, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_BreakVector_Y) == 0x0003D0, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_BreakVector_Z) == 0x0003D8, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_MakeVector_ReturnValue) == 0x0003E0, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_Normal_ReturnValue) == 0x0003F8, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_Multiply_VectorFloat_ReturnValue_3) == 0x000410, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_Multiply_VectorFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure, CallFunc_VLerp_Alpha_ImplicitCast) == 0x000428, "Member 'BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure::CallFunc_VLerp_Alpha_ImplicitCast' has a wrong offset!");

// Function BP_AIAction_Leave_TurnRun.BP_AIAction_Leave_TurnRun_C.ExecuteUbergraph_BP_AIAction_Leave_TurnRun
// 0x0078 (0x0078 - 0x0000)
struct BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomInteger_ReturnValue;                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPathFollowingResult                          K2Node_CustomEvent_MovementResult_1;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPathFollowingResult                          K2Node_CustomEvent_MovementResult;                 // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EPathFollowingResult MovementResult)> K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPathFollowingResult                          Temp_byte_Variable;                                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Vector_IsZero_ReturnValue;                // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Vector_IsZero_ReturnValue_1;              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAIAsyncTaskBlueprintProxy*             CallFunc_CreateMoveToProxyObject_ReturnValue;      // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LineTraceMovePosition_Hit;                // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A[0x2];                                       // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EPathFollowingResult MovementResult)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x003C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_LineTrace_forFailure_MoveTarget;          // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun) == 0x000008, "Wrong alignment on BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun");
static_assert(sizeof(BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun) == 0x000078, "Wrong size on BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun, EntryPoint) == 0x000000, "Member 'BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun, CallFunc_RandomInteger_ReturnValue) == 0x000004, "Member 'BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun::CallFunc_RandomInteger_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun, K2Node_CustomEvent_MovementResult_1) == 0x000008, "Member 'BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun::K2Node_CustomEvent_MovementResult_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun, K2Node_CustomEvent_MovementResult) == 0x000009, "Member 'BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun::K2Node_CustomEvent_MovementResult' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun, Temp_byte_Variable) == 0x00001C, "Member 'BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun, CallFunc_Vector_IsZero_ReturnValue) == 0x00001D, "Member 'BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun::CallFunc_Vector_IsZero_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun, Temp_bool_Variable) == 0x00001E, "Member 'BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun, CallFunc_Not_PreBool_ReturnValue) == 0x00001F, "Member 'BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun, K2Node_Event_ControlledPawn) == 0x000020, "Member 'BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun, CallFunc_Vector_IsZero_ReturnValue_1) == 0x000028, "Member 'BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun::CallFunc_Vector_IsZero_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun, CallFunc_CreateMoveToProxyObject_ReturnValue) == 0x000030, "Member 'BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun::CallFunc_CreateMoveToProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun, CallFunc_LineTraceMovePosition_Hit) == 0x000039, "Member 'BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun::CallFunc_LineTraceMovePosition_Hit' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun, K2Node_CreateDelegate_OutputDelegate_1) == 0x00003C, "Member 'BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun, CallFunc_LineTrace_forFailure_MoveTarget) == 0x000050, "Member 'BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun::CallFunc_LineTrace_forFailure_MoveTarget' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun, Temp_int_Variable) == 0x000068, "Member 'BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun, CallFunc_Add_IntInt_ReturnValue) == 0x00006C, "Member 'BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000070, "Member 'BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun, CallFunc_BooleanAND_ReturnValue) == 0x000071, "Member 'BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_AIAction_Leave_TurnRun.BP_AIAction_Leave_TurnRun_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_Leave_TurnRun_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Leave_TurnRun_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIAction_Leave_TurnRun_C_ActionStart");
static_assert(sizeof(BP_AIAction_Leave_TurnRun_C_ActionStart) == 0x000008, "Wrong size on BP_AIAction_Leave_TurnRun_C_ActionStart");
static_assert(offsetof(BP_AIAction_Leave_TurnRun_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIAction_Leave_TurnRun_C_ActionStart::ControlledPawn' has a wrong offset!");

}

