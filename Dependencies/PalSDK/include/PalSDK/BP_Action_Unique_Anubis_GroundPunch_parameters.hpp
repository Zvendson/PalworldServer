#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_Action_Unique_Anubis_GroundPunch.BP_Action_Unique_Anubis_GroundPunch_C.ActivateOmenEffect
// 0x0468 (0x0468 - 0x0000)
struct BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect final
{
public:
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0000(0x0010)(ConstParm, ReferenceParm)
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue_1;            // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_Vector2DToVector_ReturnValue;        // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x0098(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0182(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_183[0x1];                                      // 0x0183(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18C[0x4];                                      // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0190(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x01A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x01C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x01D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x01F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x01F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0200(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x021C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_224[0x4];                                      // 0x0224(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0228(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0240(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0278(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_Conv_Vector2DToVector_ReturnValue_1;      // 0x0360(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult_1;     // 0x0378(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_Conv_Vector2DToVector_Z_ImplicitCast;     // 0x0460(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_Vector2DToVector_Z_ImplicitCast_1;   // 0x0464(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect) == 0x000008, "Wrong alignment on BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect");
static_assert(sizeof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect) == 0x000468, "Wrong size on BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, Temp_object_Variable) == 0x000000, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_GetActionTarget_ReturnValue) == 0x000010, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_GetActionTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_GetActionTarget_ReturnValue_1) == 0x000030, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_GetActionTarget_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_BreakVector_X) == 0x000038, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_BreakVector_Y) == 0x000040, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_BreakVector_Z) == 0x000048, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000050, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_Conv_Vector2DToVector_ReturnValue) == 0x000068, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_Conv_Vector2DToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000080, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_LineTraceSingle_OutHit) == 0x000098, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_LineTraceSingle_ReturnValue) == 0x000180, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_BreakHitResult_bBlockingHit) == 0x000181, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_BreakHitResult_bInitialOverlap) == 0x000182, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_BreakHitResult_Time) == 0x000184, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_BreakHitResult_Distance) == 0x000188, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_BreakHitResult_Location) == 0x000190, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_BreakHitResult_ImpactPoint) == 0x0001A8, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_BreakHitResult_Normal) == 0x0001C0, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_BreakHitResult_ImpactNormal) == 0x0001D8, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_BreakHitResult_PhysMat) == 0x0001F0, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_BreakHitResult_HitActor) == 0x0001F8, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_BreakHitResult_HitComponent) == 0x000200, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_BreakHitResult_HitBoneName) == 0x000208, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_BreakHitResult_BoneName) == 0x000210, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_BreakHitResult_HitItem) == 0x000218, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_BreakHitResult_ElementIndex) == 0x00021C, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_BreakHitResult_FaceIndex) == 0x000220, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_BreakHitResult_TraceStart) == 0x000228, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_BreakHitResult_TraceEnd) == 0x000240, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_BreakVector_X_1) == 0x000258, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_BreakVector_Y_1) == 0x000260, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_BreakVector_Z_1) == 0x000268, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000270, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000278, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_Conv_Vector2DToVector_ReturnValue_1) == 0x000360, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_Conv_Vector2DToVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_K2_SetWorldLocation_SweepHitResult_1) == 0x000378, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_K2_SetWorldLocation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_Conv_Vector2DToVector_Z_ImplicitCast) == 0x000460, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_Conv_Vector2DToVector_Z_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect, CallFunc_Conv_Vector2DToVector_Z_ImplicitCast_1) == 0x000464, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ActivateOmenEffect::CallFunc_Conv_Vector2DToVector_Z_ImplicitCast_1' has a wrong offset!");

// Function BP_Action_Unique_Anubis_GroundPunch.BP_Action_Unique_Anubis_GroundPunch_C.ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch
// 0x01F8 (0x01F8 - 0x0000)
struct BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_2;                   // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_1;                   // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName;                     // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_1;            // 0x002C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0044(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetPalCharacterMovementComponent_ReturnValue; // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetPalCharacterMovementComponent_ReturnValue_1; // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFalling_ReturnValue;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x3];                                       // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_PlayAnimMontage_ReturnValue;              // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_3;         // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlayMontageCallbackProxy*              CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0100(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0118(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_4;         // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_2;            // 0x0130(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRangeToGround_ReturnValue;             // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_144[0x4];                                      // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_5;         // 0x0148(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0150(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue;        // 0x0168(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_17A[0x2];                                      // 0x017A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_NotifyName_3;                   // 0x017C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_184[0x4];                                      // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_6;         // 0x0188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_7;         // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetPalCharacterMovementComponent_ReturnValue_2; // 0x0198(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue_1;      // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_3;            // 0x01A8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B9[0x3];                                      // 0x01B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_NotifyName_4;                   // 0x01BC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_4;            // 0x01C4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D4[0x4];                                      // 0x01D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_MovementActor_DeltaTime_ImplicitCast;     // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetGravityZMultiplier_rate_ImplicitCast;  // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_JumpZVelocity_ImplicitCast;     // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_DefaultJumpZ_ImplicitCast;      // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch) == 0x000008, "Wrong alignment on BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch");
static_assert(sizeof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch) == 0x0001F8, "Wrong size on BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, EntryPoint) == 0x000000, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, K2Node_CustomEvent_NotifyName_2) == 0x000004, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::K2Node_CustomEvent_NotifyName_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, K2Node_CustomEvent_NotifyName_1) == 0x00000C, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::K2Node_CustomEvent_NotifyName_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, K2Node_CustomEvent_NotifyName) == 0x000024, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::K2Node_CustomEvent_NotifyName' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, K2Node_CreateDelegate_OutputDelegate_1) == 0x00002C, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, Temp_name_Variable) == 0x00003C, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, K2Node_MakeStruct_LinearColor) == 0x000044, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, K2Node_Event_DeltaTime) == 0x000054, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, CallFunc_GetActionCharacter_ReturnValue) == 0x000058, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000060, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, CallFunc_GetPalCharacterMovementComponent_ReturnValue) == 0x000068, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::CallFunc_GetPalCharacterMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, CallFunc_GetPalCharacterMovementComponent_ReturnValue_1) == 0x000070, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::CallFunc_GetPalCharacterMovementComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, CallFunc_IsFalling_ReturnValue) == 0x000078, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::CallFunc_IsFalling_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, CallFunc_GetVelocity_ReturnValue) == 0x000080, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, CallFunc_BreakVector_X) == 0x000098, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, CallFunc_BreakVector_Y) == 0x0000A0, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, CallFunc_BreakVector_Z) == 0x0000A8, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, CallFunc_GetActionCharacter_ReturnValue_2) == 0x0000B0, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000B8, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, CallFunc_PlayAnimMontage_ReturnValue) == 0x0000BC, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::CallFunc_PlayAnimMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, K2Node_SwitchEnum_CmpSuccess) == 0x0000C0, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, CallFunc_GetActionCharacter_ReturnValue_3) == 0x0000C8, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::CallFunc_GetActionCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, K2Node_SwitchEnum_CmpSuccess_1) == 0x0000D0, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000D8, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, CallFunc_GetMainMesh_ReturnValue) == 0x0000F0, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, CallFunc_CreateProxyObjectForPlayMontage_ReturnValue) == 0x0000F8, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::CallFunc_CreateProxyObjectForPlayMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, CallFunc_Add_VectorVector_ReturnValue) == 0x000100, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000118, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, CallFunc_IsValid_ReturnValue) == 0x000120, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, CallFunc_GetActionCharacter_ReturnValue_4) == 0x000128, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::CallFunc_GetActionCharacter_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, K2Node_CreateDelegate_OutputDelegate_2) == 0x000130, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, CallFunc_GetRangeToGround_ReturnValue) == 0x000140, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::CallFunc_GetRangeToGround_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, CallFunc_GetActionCharacter_ReturnValue_5) == 0x000148, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::CallFunc_GetActionCharacter_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000150, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, CallFunc_Conv_VectorToVector2D_ReturnValue) == 0x000168, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::CallFunc_Conv_VectorToVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000178, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, CallFunc_Less_DoubleDouble_ReturnValue_1) == 0x000179, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::CallFunc_Less_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, K2Node_CustomEvent_NotifyName_3) == 0x00017C, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::K2Node_CustomEvent_NotifyName_3' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, CallFunc_GetActionCharacter_ReturnValue_6) == 0x000188, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::CallFunc_GetActionCharacter_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, CallFunc_GetActionCharacter_ReturnValue_7) == 0x000190, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::CallFunc_GetActionCharacter_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, CallFunc_GetPalCharacterMovementComponent_ReturnValue_2) == 0x000198, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::CallFunc_GetPalCharacterMovementComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, CallFunc_SpawnSystemAtLocation_ReturnValue_1) == 0x0001A0, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::CallFunc_SpawnSystemAtLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, K2Node_CreateDelegate_OutputDelegate_3) == 0x0001A8, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, CallFunc_IsValid_ReturnValue_1) == 0x0001B8, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, K2Node_CustomEvent_NotifyName_4) == 0x0001BC, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::K2Node_CustomEvent_NotifyName_4' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, K2Node_CreateDelegate_OutputDelegate_4) == 0x0001C4, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, CallFunc_MovementActor_DeltaTime_ImplicitCast) == 0x0001D8, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::CallFunc_MovementActor_DeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, CallFunc_Less_DoubleDouble_A_ImplicitCast) == 0x0001E0, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::CallFunc_Less_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, CallFunc_SetGravityZMultiplier_rate_ImplicitCast) == 0x0001E8, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::CallFunc_SetGravityZMultiplier_rate_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, K2Node_VariableSet_JumpZVelocity_ImplicitCast) == 0x0001EC, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::K2Node_VariableSet_JumpZVelocity_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch, K2Node_VariableSet_DefaultJumpZ_ImplicitCast) == 0x0001F0, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch::K2Node_VariableSet_DefaultJumpZ_ImplicitCast' has a wrong offset!");

// Function BP_Action_Unique_Anubis_GroundPunch.BP_Action_Unique_Anubis_GroundPunch_C.MovementActor
// 0x01D0 (0x01D0 - 0x0000)
struct BP_Action_Unique_Anubis_GroundPunch_C_MovementActor final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_Vector2DToVector_ReturnValue;        // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_Vector2DToVector_ReturnValue_1;      // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x00E0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C9[0x3];                                      // 0x01C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_VLerp_Alpha_ImplicitCast;                 // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Anubis_GroundPunch_C_MovementActor) == 0x000008, "Wrong alignment on BP_Action_Unique_Anubis_GroundPunch_C_MovementActor");
static_assert(sizeof(BP_Action_Unique_Anubis_GroundPunch_C_MovementActor) == 0x0001D0, "Wrong size on BP_Action_Unique_Anubis_GroundPunch_C_MovementActor");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_MovementActor, DeltaTime) == 0x000000, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_MovementActor::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_MovementActor, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_MovementActor::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_MovementActor, K2Node_SwitchEnum_CmpSuccess) == 0x000010, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_MovementActor::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_MovementActor, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000018, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_MovementActor::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_MovementActor, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000020, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_MovementActor::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_MovementActor, CallFunc_Conv_Vector2DToVector_ReturnValue) == 0x000038, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_MovementActor::CallFunc_Conv_Vector2DToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_MovementActor, CallFunc_BreakVector_X) == 0x000050, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_MovementActor::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_MovementActor, CallFunc_BreakVector_Y) == 0x000058, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_MovementActor::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_MovementActor, CallFunc_BreakVector_Z) == 0x000060, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_MovementActor::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_MovementActor, CallFunc_Conv_Vector2DToVector_ReturnValue_1) == 0x000068, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_MovementActor::CallFunc_Conv_Vector2DToVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_MovementActor, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000080, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_MovementActor::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_MovementActor, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000088, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_MovementActor::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_MovementActor, CallFunc_FClamp_ReturnValue) == 0x000090, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_MovementActor::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_MovementActor, CallFunc_VLerp_ReturnValue) == 0x000098, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_MovementActor::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_MovementActor, CallFunc_BreakVector_X_1) == 0x0000B0, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_MovementActor::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_MovementActor, CallFunc_BreakVector_Y_1) == 0x0000B8, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_MovementActor::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_MovementActor, CallFunc_BreakVector_Z_1) == 0x0000C0, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_MovementActor::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_MovementActor, CallFunc_MakeVector_ReturnValue) == 0x0000C8, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_MovementActor::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_MovementActor, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x0000E0, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_MovementActor::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_MovementActor, CallFunc_K2_SetActorLocation_ReturnValue) == 0x0001C8, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_MovementActor::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_MovementActor, CallFunc_VLerp_Alpha_ImplicitCast) == 0x0001CC, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_MovementActor::CallFunc_VLerp_Alpha_ImplicitCast' has a wrong offset!");

// Function BP_Action_Unique_Anubis_GroundPunch.BP_Action_Unique_Anubis_GroundPunch_C.OnBlendOut_3EAF69114CDC3D3144F4EBB8A4E9DFF5
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Unique_Anubis_GroundPunch_C_OnBlendOut_3EAF69114CDC3D3144F4EBB8A4E9DFF5 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Anubis_GroundPunch_C_OnBlendOut_3EAF69114CDC3D3144F4EBB8A4E9DFF5) == 0x000004, "Wrong alignment on BP_Action_Unique_Anubis_GroundPunch_C_OnBlendOut_3EAF69114CDC3D3144F4EBB8A4E9DFF5");
static_assert(sizeof(BP_Action_Unique_Anubis_GroundPunch_C_OnBlendOut_3EAF69114CDC3D3144F4EBB8A4E9DFF5) == 0x000008, "Wrong size on BP_Action_Unique_Anubis_GroundPunch_C_OnBlendOut_3EAF69114CDC3D3144F4EBB8A4E9DFF5");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_OnBlendOut_3EAF69114CDC3D3144F4EBB8A4E9DFF5, NotifyName) == 0x000000, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_OnBlendOut_3EAF69114CDC3D3144F4EBB8A4E9DFF5::NotifyName' has a wrong offset!");

// Function BP_Action_Unique_Anubis_GroundPunch.BP_Action_Unique_Anubis_GroundPunch_C.OnCompleted_3EAF69114CDC3D3144F4EBB8A4E9DFF5
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Unique_Anubis_GroundPunch_C_OnCompleted_3EAF69114CDC3D3144F4EBB8A4E9DFF5 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Anubis_GroundPunch_C_OnCompleted_3EAF69114CDC3D3144F4EBB8A4E9DFF5) == 0x000004, "Wrong alignment on BP_Action_Unique_Anubis_GroundPunch_C_OnCompleted_3EAF69114CDC3D3144F4EBB8A4E9DFF5");
static_assert(sizeof(BP_Action_Unique_Anubis_GroundPunch_C_OnCompleted_3EAF69114CDC3D3144F4EBB8A4E9DFF5) == 0x000008, "Wrong size on BP_Action_Unique_Anubis_GroundPunch_C_OnCompleted_3EAF69114CDC3D3144F4EBB8A4E9DFF5");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_OnCompleted_3EAF69114CDC3D3144F4EBB8A4E9DFF5, NotifyName) == 0x000000, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_OnCompleted_3EAF69114CDC3D3144F4EBB8A4E9DFF5::NotifyName' has a wrong offset!");

// Function BP_Action_Unique_Anubis_GroundPunch.BP_Action_Unique_Anubis_GroundPunch_C.OnInterrupted_3EAF69114CDC3D3144F4EBB8A4E9DFF5
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Unique_Anubis_GroundPunch_C_OnInterrupted_3EAF69114CDC3D3144F4EBB8A4E9DFF5 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Anubis_GroundPunch_C_OnInterrupted_3EAF69114CDC3D3144F4EBB8A4E9DFF5) == 0x000004, "Wrong alignment on BP_Action_Unique_Anubis_GroundPunch_C_OnInterrupted_3EAF69114CDC3D3144F4EBB8A4E9DFF5");
static_assert(sizeof(BP_Action_Unique_Anubis_GroundPunch_C_OnInterrupted_3EAF69114CDC3D3144F4EBB8A4E9DFF5) == 0x000008, "Wrong size on BP_Action_Unique_Anubis_GroundPunch_C_OnInterrupted_3EAF69114CDC3D3144F4EBB8A4E9DFF5");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_OnInterrupted_3EAF69114CDC3D3144F4EBB8A4E9DFF5, NotifyName) == 0x000000, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_OnInterrupted_3EAF69114CDC3D3144F4EBB8A4E9DFF5::NotifyName' has a wrong offset!");

// Function BP_Action_Unique_Anubis_GroundPunch.BP_Action_Unique_Anubis_GroundPunch_C.OnNotifyBegin_3EAF69114CDC3D3144F4EBB8A4E9DFF5
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Unique_Anubis_GroundPunch_C_OnNotifyBegin_3EAF69114CDC3D3144F4EBB8A4E9DFF5 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Anubis_GroundPunch_C_OnNotifyBegin_3EAF69114CDC3D3144F4EBB8A4E9DFF5) == 0x000004, "Wrong alignment on BP_Action_Unique_Anubis_GroundPunch_C_OnNotifyBegin_3EAF69114CDC3D3144F4EBB8A4E9DFF5");
static_assert(sizeof(BP_Action_Unique_Anubis_GroundPunch_C_OnNotifyBegin_3EAF69114CDC3D3144F4EBB8A4E9DFF5) == 0x000008, "Wrong size on BP_Action_Unique_Anubis_GroundPunch_C_OnNotifyBegin_3EAF69114CDC3D3144F4EBB8A4E9DFF5");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_OnNotifyBegin_3EAF69114CDC3D3144F4EBB8A4E9DFF5, NotifyName) == 0x000000, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_OnNotifyBegin_3EAF69114CDC3D3144F4EBB8A4E9DFF5::NotifyName' has a wrong offset!");

// Function BP_Action_Unique_Anubis_GroundPunch.BP_Action_Unique_Anubis_GroundPunch_C.OnNotifyEnd_3EAF69114CDC3D3144F4EBB8A4E9DFF5
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Unique_Anubis_GroundPunch_C_OnNotifyEnd_3EAF69114CDC3D3144F4EBB8A4E9DFF5 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Anubis_GroundPunch_C_OnNotifyEnd_3EAF69114CDC3D3144F4EBB8A4E9DFF5) == 0x000004, "Wrong alignment on BP_Action_Unique_Anubis_GroundPunch_C_OnNotifyEnd_3EAF69114CDC3D3144F4EBB8A4E9DFF5");
static_assert(sizeof(BP_Action_Unique_Anubis_GroundPunch_C_OnNotifyEnd_3EAF69114CDC3D3144F4EBB8A4E9DFF5) == 0x000008, "Wrong size on BP_Action_Unique_Anubis_GroundPunch_C_OnNotifyEnd_3EAF69114CDC3D3144F4EBB8A4E9DFF5");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_OnNotifyEnd_3EAF69114CDC3D3144F4EBB8A4E9DFF5, NotifyName) == 0x000000, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_OnNotifyEnd_3EAF69114CDC3D3144F4EBB8A4E9DFF5::NotifyName' has a wrong offset!");

// Function BP_Action_Unique_Anubis_GroundPunch.BP_Action_Unique_Anubis_GroundPunch_C.Set Target Location
// 0x00E8 (0x00E8 - 0x0000)
struct BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location final
{
public:
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue;        // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue_1;            // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Normal2D_ReturnValue;                     // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue_1;      // 0x0098(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize2D_ReturnValue;                      // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x00B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue;         // 0x00C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue_1;       // 0x00D8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location) == 0x000008, "Wrong alignment on BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location");
static_assert(sizeof(BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location) == 0x0000E8, "Wrong size on BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location, CallFunc_GetActionTarget_ReturnValue) == 0x000000, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location::CallFunc_GetActionTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000008, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location, CallFunc_GreaterGreater_VectorRotator_ReturnValue) == 0x000020, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location::CallFunc_GreaterGreater_VectorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000038, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location, CallFunc_Conv_VectorToVector2D_ReturnValue) == 0x000040, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location::CallFunc_Conv_VectorToVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000050, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location, CallFunc_GetActionTarget_ReturnValue_1) == 0x000058, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location::CallFunc_GetActionTarget_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x000060, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000070, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location, CallFunc_Normal2D_ReturnValue) == 0x000088, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location::CallFunc_Normal2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location, CallFunc_Conv_VectorToVector2D_ReturnValue_1) == 0x000098, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location::CallFunc_Conv_VectorToVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location, CallFunc_VSize2D_ReturnValue) == 0x0000A8, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location::CallFunc_VSize2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0000B0, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location, CallFunc_Multiply_Vector2DFloat_ReturnValue) == 0x0000B8, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location::CallFunc_Multiply_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location, CallFunc_Add_Vector2DVector2D_ReturnValue) == 0x0000C8, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location::CallFunc_Add_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location, CallFunc_Add_Vector2DVector2D_ReturnValue_1) == 0x0000D8, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_Set_Target_Location::CallFunc_Add_Vector2DVector2D_ReturnValue_1' has a wrong offset!");

// Function BP_Action_Unique_Anubis_GroundPunch.BP_Action_Unique_Anubis_GroundPunch_C.StopMontage
// 0x0020 (0x0020 - 0x0000)
struct BP_Action_Unique_Anubis_GroundPunch_C_StopMontage final
{
public:
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_3;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Anubis_GroundPunch_C_StopMontage) == 0x000008, "Wrong alignment on BP_Action_Unique_Anubis_GroundPunch_C_StopMontage");
static_assert(sizeof(BP_Action_Unique_Anubis_GroundPunch_C_StopMontage) == 0x000020, "Wrong size on BP_Action_Unique_Anubis_GroundPunch_C_StopMontage");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_StopMontage, CallFunc_GetActionCharacter_ReturnValue) == 0x000000, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_StopMontage::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_StopMontage, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000008, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_StopMontage::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_StopMontage, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000010, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_StopMontage::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_StopMontage, CallFunc_GetActionCharacter_ReturnValue_3) == 0x000018, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_StopMontage::CallFunc_GetActionCharacter_ReturnValue_3' has a wrong offset!");

// Function BP_Action_Unique_Anubis_GroundPunch.BP_Action_Unique_Anubis_GroundPunch_C.TerminateMovementState
// 0x0018 (0x0018 - 0x0000)
struct BP_Action_Unique_Anubis_GroundPunch_C_TerminateMovementState final
{
public:
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetPalCharacterMovementComponent_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_JumpZVelocity_ImplicitCast;     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Anubis_GroundPunch_C_TerminateMovementState) == 0x000008, "Wrong alignment on BP_Action_Unique_Anubis_GroundPunch_C_TerminateMovementState");
static_assert(sizeof(BP_Action_Unique_Anubis_GroundPunch_C_TerminateMovementState) == 0x000018, "Wrong size on BP_Action_Unique_Anubis_GroundPunch_C_TerminateMovementState");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_TerminateMovementState, CallFunc_GetActionCharacter_ReturnValue) == 0x000000, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_TerminateMovementState::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_TerminateMovementState, CallFunc_GetPalCharacterMovementComponent_ReturnValue) == 0x000008, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_TerminateMovementState::CallFunc_GetPalCharacterMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_TerminateMovementState, K2Node_VariableSet_JumpZVelocity_ImplicitCast) == 0x000010, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_TerminateMovementState::K2Node_VariableSet_JumpZVelocity_ImplicitCast' has a wrong offset!");

// Function BP_Action_Unique_Anubis_GroundPunch.BP_Action_Unique_Anubis_GroundPunch_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_Action_Unique_Anubis_GroundPunch_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Anubis_GroundPunch_C_TickAction) == 0x000004, "Wrong alignment on BP_Action_Unique_Anubis_GroundPunch_C_TickAction");
static_assert(sizeof(BP_Action_Unique_Anubis_GroundPunch_C_TickAction) == 0x000004, "Wrong size on BP_Action_Unique_Anubis_GroundPunch_C_TickAction");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_TickAction::DeltaTime' has a wrong offset!");

// Function BP_Action_Unique_Anubis_GroundPunch.BP_Action_Unique_Anubis_GroundPunch_C.Update Effect Location
// 0x0180 (0x0180 - 0x0000)
struct BP_Action_Unique_Anubis_GroundPunch_C_Update_Effect_Location final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_Vector2DToVector_ReturnValue;        // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VInterpTo_ReturnValue;                    // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0090(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_VInterpTo_DeltaTime_ImplicitCast;         // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_Vector2DToVector_Z_ImplicitCast;     // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Anubis_GroundPunch_C_Update_Effect_Location) == 0x000008, "Wrong alignment on BP_Action_Unique_Anubis_GroundPunch_C_Update_Effect_Location");
static_assert(sizeof(BP_Action_Unique_Anubis_GroundPunch_C_Update_Effect_Location) == 0x000180, "Wrong size on BP_Action_Unique_Anubis_GroundPunch_C_Update_Effect_Location");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_Update_Effect_Location, DeltaTime) == 0x000000, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_Update_Effect_Location::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_Update_Effect_Location, CallFunc_GetActionTarget_ReturnValue) == 0x000008, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_Update_Effect_Location::CallFunc_GetActionTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_Update_Effect_Location, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_Update_Effect_Location::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_Update_Effect_Location, CallFunc_BreakVector_X) == 0x000028, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_Update_Effect_Location::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_Update_Effect_Location, CallFunc_BreakVector_Y) == 0x000030, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_Update_Effect_Location::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_Update_Effect_Location, CallFunc_BreakVector_Z) == 0x000038, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_Update_Effect_Location::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_Update_Effect_Location, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_Update_Effect_Location::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_Update_Effect_Location, CallFunc_Conv_Vector2DToVector_ReturnValue) == 0x000048, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_Update_Effect_Location::CallFunc_Conv_Vector2DToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_Update_Effect_Location, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000060, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_Update_Effect_Location::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_Update_Effect_Location, CallFunc_VInterpTo_ReturnValue) == 0x000078, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_Update_Effect_Location::CallFunc_VInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_Update_Effect_Location, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000090, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_Update_Effect_Location::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_Update_Effect_Location, CallFunc_VInterpTo_DeltaTime_ImplicitCast) == 0x000178, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_Update_Effect_Location::CallFunc_VInterpTo_DeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_GroundPunch_C_Update_Effect_Location, CallFunc_Conv_Vector2DToVector_Z_ImplicitCast) == 0x00017C, "Member 'BP_Action_Unique_Anubis_GroundPunch_C_Update_Effect_Location::CallFunc_Conv_Vector2DToVector_Z_ImplicitCast' has a wrong offset!");

}

