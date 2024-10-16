#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function BP_GrapplingGun.BP_GrapplingGun_C.CalcCoolTimeRate
// 0x0058 (0x0058 - 0x0000)
struct BP_GrapplingGun_C_CalcCoolTimeRate final
{
public:
	struct FVector                                HitLocation;                                       // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CoolTime;                                          // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNearTwoPoint_ReturnValue;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_IsNearTwoPoint_distance_ImplicitCast;     // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrapplingGun_C_CalcCoolTimeRate) == 0x000008, "Wrong alignment on BP_GrapplingGun_C_CalcCoolTimeRate");
static_assert(sizeof(BP_GrapplingGun_C_CalcCoolTimeRate) == 0x000058, "Wrong size on BP_GrapplingGun_C_CalcCoolTimeRate");
static_assert(offsetof(BP_GrapplingGun_C_CalcCoolTimeRate, HitLocation) == 0x000000, "Member 'BP_GrapplingGun_C_CalcCoolTimeRate::HitLocation' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_CalcCoolTimeRate, CoolTime) == 0x000018, "Member 'BP_GrapplingGun_C_CalcCoolTimeRate::CoolTime' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_CalcCoolTimeRate, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000020, "Member 'BP_GrapplingGun_C_CalcCoolTimeRate::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_CalcCoolTimeRate, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'BP_GrapplingGun_C_CalcCoolTimeRate::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_CalcCoolTimeRate, CallFunc_IsNearTwoPoint_ReturnValue) == 0x000040, "Member 'BP_GrapplingGun_C_CalcCoolTimeRate::CallFunc_IsNearTwoPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_CalcCoolTimeRate, CallFunc_SelectFloat_ReturnValue) == 0x000048, "Member 'BP_GrapplingGun_C_CalcCoolTimeRate::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_CalcCoolTimeRate, CallFunc_IsNearTwoPoint_distance_ImplicitCast) == 0x000050, "Member 'BP_GrapplingGun_C_CalcCoolTimeRate::CallFunc_IsNearTwoPoint_distance_ImplicitCast' has a wrong offset!");

// Function BP_GrapplingGun.BP_GrapplingGun_C.CalcShootStartParam
// 0x00A0 (0x00A0 - 0x0000)
struct BP_GrapplingGun_C_CalcShootStartParam final
{
public:
	struct FVector                                ShootDirection_0;                                  // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartLocation_0;                                   // 0x0018(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetOverrideTargetLocation_ConsiderRide_ReturnValue; // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrapplingGun_C_CalcShootStartParam) == 0x000008, "Wrong alignment on BP_GrapplingGun_C_CalcShootStartParam");
static_assert(sizeof(BP_GrapplingGun_C_CalcShootStartParam) == 0x0000A0, "Wrong size on BP_GrapplingGun_C_CalcShootStartParam");
static_assert(offsetof(BP_GrapplingGun_C_CalcShootStartParam, ShootDirection_0) == 0x000000, "Member 'BP_GrapplingGun_C_CalcShootStartParam::ShootDirection_0' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_CalcShootStartParam, StartLocation_0) == 0x000018, "Member 'BP_GrapplingGun_C_CalcShootStartParam::StartLocation_0' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_CalcShootStartParam, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000030, "Member 'BP_GrapplingGun_C_CalcShootStartParam::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_CalcShootStartParam, CallFunc_GetComponentByClass_ReturnValue) == 0x000038, "Member 'BP_GrapplingGun_C_CalcShootStartParam::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_CalcShootStartParam, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000040, "Member 'BP_GrapplingGun_C_CalcShootStartParam::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_CalcShootStartParam, CallFunc_GetOverrideTargetLocation_ConsiderRide_ReturnValue) == 0x000058, "Member 'BP_GrapplingGun_C_CalcShootStartParam::CallFunc_GetOverrideTargetLocation_ConsiderRide_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_CalcShootStartParam, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000070, "Member 'BP_GrapplingGun_C_CalcShootStartParam::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_CalcShootStartParam, CallFunc_Normal_ReturnValue) == 0x000088, "Member 'BP_GrapplingGun_C_CalcShootStartParam::CallFunc_Normal_ReturnValue' has a wrong offset!");

// Function BP_GrapplingGun.BP_GrapplingGun_C.EndCable
// 0x0018 (0x0018 - 0x0000)
struct BP_GrapplingGun_C_EndCable final
{
public:
	bool                                          IsAnimationCancel;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                    CallFunc_GetActionComponent_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrapplingGun_C_EndCable) == 0x000008, "Wrong alignment on BP_GrapplingGun_C_EndCable");
static_assert(sizeof(BP_GrapplingGun_C_EndCable) == 0x000018, "Wrong size on BP_GrapplingGun_C_EndCable");
static_assert(offsetof(BP_GrapplingGun_C_EndCable, IsAnimationCancel) == 0x000000, "Member 'BP_GrapplingGun_C_EndCable::IsAnimationCancel' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_EndCable, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000008, "Member 'BP_GrapplingGun_C_EndCable::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_EndCable, CallFunc_GetActionComponent_ReturnValue) == 0x000010, "Member 'BP_GrapplingGun_C_EndCable::CallFunc_GetActionComponent_ReturnValue' has a wrong offset!");

// Function BP_GrapplingGun.BP_GrapplingGun_C.ExecuteUbergraph_BP_GrapplingGun
// 0x00F0 (0x00F0 - 0x0000)
struct BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0xC];                                        // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0010(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_GrapplingGun_Bullet_C*              CallFunc_FinishSpawningActor_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_attachActor;                          // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_detachActor;                          // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                    CallFunc_GetActionComponent_ReturnValue;           // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	const class UPalActionBase*                   K2Node_CustomEvent_action;                         // 0x00B0(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_Action_Grappling_C*                 K2Node_DynamicCast_AsBP_Action_Grappling;          // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x3];                                       // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UPalActionBase* Action)> K2Node_CreateDelegate_OutputDelegate;              // 0x00C4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D5[0x3];                                       // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue_1;      // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_UpdateCable_DeltaTime_ImplicitCast;       // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun) == 0x000010, "Wrong alignment on BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun");
static_assert(sizeof(BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun) == 0x0000F0, "Wrong size on BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun");
static_assert(offsetof(BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun, EntryPoint) == 0x000000, "Member 'BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun, CallFunc_MakeTransform_ReturnValue) == 0x000010, "Member 'BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000070, "Member 'BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun, CallFunc_FinishSpawningActor_ReturnValue) == 0x000078, "Member 'BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun, K2Node_Event_DeltaSeconds) == 0x000080, "Member 'BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun, K2Node_Event_attachActor) == 0x000088, "Member 'BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun::K2Node_Event_attachActor' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun, K2Node_Event_detachActor) == 0x000090, "Member 'BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun::K2Node_Event_detachActor' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun, CallFunc_BooleanOR_ReturnValue) == 0x000098, "Member 'BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x0000A0, "Member 'BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun, CallFunc_GetActionComponent_ReturnValue) == 0x0000A8, "Member 'BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun::CallFunc_GetActionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun, K2Node_CustomEvent_action) == 0x0000B0, "Member 'BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun::K2Node_CustomEvent_action' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun, K2Node_DynamicCast_AsBP_Action_Grappling) == 0x0000B8, "Member 'BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun::K2Node_DynamicCast_AsBP_Action_Grappling' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun, K2Node_DynamicCast_bSuccess) == 0x0000C0, "Member 'BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun, K2Node_CreateDelegate_OutputDelegate) == 0x0000C4, "Member 'BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun, K2Node_Event_EndPlayReason) == 0x0000D4, "Member 'BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun, CallFunc_FindOwnerPalCharacter_ReturnValue_1) == 0x0000D8, "Member 'BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun::CallFunc_FindOwnerPalCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun, CallFunc_IsValid_ReturnValue) == 0x0000E0, "Member 'BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun, CallFunc_UpdateCable_DeltaTime_ImplicitCast) == 0x0000E8, "Member 'BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun::CallFunc_UpdateCable_DeltaTime_ImplicitCast' has a wrong offset!");

// Function BP_GrapplingGun.BP_GrapplingGun_C.GetCurrentCableLength
// 0x0028 (0x0028 - 0x0000)
struct BP_GrapplingGun_C_GetCurrentCableLength final
{
public:
	double                                        CableLength;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue;                        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrapplingGun_C_GetCurrentCableLength) == 0x000008, "Wrong alignment on BP_GrapplingGun_C_GetCurrentCableLength");
static_assert(sizeof(BP_GrapplingGun_C_GetCurrentCableLength) == 0x000028, "Wrong size on BP_GrapplingGun_C_GetCurrentCableLength");
static_assert(offsetof(BP_GrapplingGun_C_GetCurrentCableLength, CableLength) == 0x000000, "Member 'BP_GrapplingGun_C_GetCurrentCableLength::CableLength' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_GetCurrentCableLength, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000008, "Member 'BP_GrapplingGun_C_GetCurrentCableLength::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_GetCurrentCableLength, CallFunc_VSize_ReturnValue) == 0x000020, "Member 'BP_GrapplingGun_C_GetCurrentCableLength::CallFunc_VSize_ReturnValue' has a wrong offset!");

// Function BP_GrapplingGun.BP_GrapplingGun_C.IsGraplingAction
// 0x0030 (0x0030 - 0x0000)
struct BP_GrapplingGun_C_IsGraplingAction final
{
public:
	bool                                          bSuccess;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                    CallFunc_GetActionComponent_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         CallFunc_GetCurrentAction_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_Action_Grappling_C*                 K2Node_DynamicCast_AsBP_Action_Grappling;          // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrapplingGun_C_IsGraplingAction) == 0x000008, "Wrong alignment on BP_GrapplingGun_C_IsGraplingAction");
static_assert(sizeof(BP_GrapplingGun_C_IsGraplingAction) == 0x000030, "Wrong size on BP_GrapplingGun_C_IsGraplingAction");
static_assert(offsetof(BP_GrapplingGun_C_IsGraplingAction, bSuccess) == 0x000000, "Member 'BP_GrapplingGun_C_IsGraplingAction::bSuccess' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_IsGraplingAction, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000008, "Member 'BP_GrapplingGun_C_IsGraplingAction::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_IsGraplingAction, CallFunc_GetActionComponent_ReturnValue) == 0x000010, "Member 'BP_GrapplingGun_C_IsGraplingAction::CallFunc_GetActionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_IsGraplingAction, CallFunc_GetCurrentAction_ReturnValue) == 0x000018, "Member 'BP_GrapplingGun_C_IsGraplingAction::CallFunc_GetCurrentAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_IsGraplingAction, K2Node_DynamicCast_AsBP_Action_Grappling) == 0x000020, "Member 'BP_GrapplingGun_C_IsGraplingAction::K2Node_DynamicCast_AsBP_Action_Grappling' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_IsGraplingAction, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_GrapplingGun_C_IsGraplingAction::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_GrapplingGun.BP_GrapplingGun_C.On Grapling Action Start
// 0x0030 (0x0030 - 0x0000)
struct BP_GrapplingGun_C_On_Grapling_Action_Start final
{
public:
	struct FVector                                HitLocation;                                       // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CoolTimeRate;                                      // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_StartCoolDown_Rate_ImplicitCast;          // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrapplingGun_C_On_Grapling_Action_Start) == 0x000008, "Wrong alignment on BP_GrapplingGun_C_On_Grapling_Action_Start");
static_assert(sizeof(BP_GrapplingGun_C_On_Grapling_Action_Start) == 0x000030, "Wrong size on BP_GrapplingGun_C_On_Grapling_Action_Start");
static_assert(offsetof(BP_GrapplingGun_C_On_Grapling_Action_Start, HitLocation) == 0x000000, "Member 'BP_GrapplingGun_C_On_Grapling_Action_Start::HitLocation' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_On_Grapling_Action_Start, CoolTimeRate) == 0x000018, "Member 'BP_GrapplingGun_C_On_Grapling_Action_Start::CoolTimeRate' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_On_Grapling_Action_Start, CallFunc_GetPalDebugSetting_ReturnValue) == 0x000020, "Member 'BP_GrapplingGun_C_On_Grapling_Action_Start::CallFunc_GetPalDebugSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_On_Grapling_Action_Start, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_GrapplingGun_C_On_Grapling_Action_Start::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_On_Grapling_Action_Start, CallFunc_StartCoolDown_Rate_ImplicitCast) == 0x00002C, "Member 'BP_GrapplingGun_C_On_Grapling_Action_Start::CallFunc_StartCoolDown_Rate_ImplicitCast' has a wrong offset!");

// Function BP_GrapplingGun.BP_GrapplingGun_C.OnActionEnd
// 0x0008 (0x0008 - 0x0000)
struct BP_GrapplingGun_C_OnActionEnd final
{
public:
	const class UPalActionBase*                   Action;                                            // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrapplingGun_C_OnActionEnd) == 0x000008, "Wrong alignment on BP_GrapplingGun_C_OnActionEnd");
static_assert(sizeof(BP_GrapplingGun_C_OnActionEnd) == 0x000008, "Wrong size on BP_GrapplingGun_C_OnActionEnd");
static_assert(offsetof(BP_GrapplingGun_C_OnActionEnd, Action) == 0x000000, "Member 'BP_GrapplingGun_C_OnActionEnd::Action' has a wrong offset!");

// Function BP_GrapplingGun.BP_GrapplingGun_C.OnAttachWeapon
// 0x0008 (0x0008 - 0x0000)
struct BP_GrapplingGun_C_OnAttachWeapon final
{
public:
	class AActor*                                 AttachActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrapplingGun_C_OnAttachWeapon) == 0x000008, "Wrong alignment on BP_GrapplingGun_C_OnAttachWeapon");
static_assert(sizeof(BP_GrapplingGun_C_OnAttachWeapon) == 0x000008, "Wrong size on BP_GrapplingGun_C_OnAttachWeapon");
static_assert(offsetof(BP_GrapplingGun_C_OnAttachWeapon, AttachActor) == 0x000000, "Member 'BP_GrapplingGun_C_OnAttachWeapon::AttachActor' has a wrong offset!");

// Function BP_GrapplingGun.BP_GrapplingGun_C.OnDetachWeapon
// 0x0008 (0x0008 - 0x0000)
struct BP_GrapplingGun_C_OnDetachWeapon final
{
public:
	class AActor*                                 DetachActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrapplingGun_C_OnDetachWeapon) == 0x000008, "Wrong alignment on BP_GrapplingGun_C_OnDetachWeapon");
static_assert(sizeof(BP_GrapplingGun_C_OnDetachWeapon) == 0x000008, "Wrong size on BP_GrapplingGun_C_OnDetachWeapon");
static_assert(offsetof(BP_GrapplingGun_C_OnDetachWeapon, DetachActor) == 0x000000, "Member 'BP_GrapplingGun_C_OnDetachWeapon::DetachActor' has a wrong offset!");

// Function BP_GrapplingGun.BP_GrapplingGun_C.OnGraplingActionEnd
// 0x0018 (0x0018 - 0x0000)
struct BP_GrapplingGun_C_OnGraplingActionEnd final
{
public:
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character;         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrapplingGun_C_OnGraplingActionEnd) == 0x000008, "Wrong alignment on BP_GrapplingGun_C_OnGraplingActionEnd");
static_assert(sizeof(BP_GrapplingGun_C_OnGraplingActionEnd) == 0x000018, "Wrong size on BP_GrapplingGun_C_OnGraplingActionEnd");
static_assert(offsetof(BP_GrapplingGun_C_OnGraplingActionEnd, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000000, "Member 'BP_GrapplingGun_C_OnGraplingActionEnd::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_OnGraplingActionEnd, K2Node_DynamicCast_AsPal_Player_Character) == 0x000008, "Member 'BP_GrapplingGun_C_OnGraplingActionEnd::K2Node_DynamicCast_AsPal_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_OnGraplingActionEnd, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_GrapplingGun_C_OnGraplingActionEnd::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_GrapplingGun.BP_GrapplingGun_C.PullCable
// 0x0150 (0x0150 - 0x0000)
struct BP_GrapplingGun_C_PullCable final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEnd;                                             // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                PullVec;                                           // 0x0010(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue_1;      // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Dot_VectorVector_ReturnValue;             // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNearTwoPoint_ReturnValue;               // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BB[0x5];                                       // 0x00BB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue_1;        // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x0108(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0120(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue_1;                     // 0x0138(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrapplingGun_C_PullCable) == 0x000008, "Wrong alignment on BP_GrapplingGun_C_PullCable");
static_assert(sizeof(BP_GrapplingGun_C_PullCable) == 0x000150, "Wrong size on BP_GrapplingGun_C_PullCable");
static_assert(offsetof(BP_GrapplingGun_C_PullCable, DeltaTime) == 0x000000, "Member 'BP_GrapplingGun_C_PullCable::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_PullCable, IsEnd) == 0x000008, "Member 'BP_GrapplingGun_C_PullCable::IsEnd' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_PullCable, PullVec) == 0x000010, "Member 'BP_GrapplingGun_C_PullCable::PullVec' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_PullCable, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000028, "Member 'BP_GrapplingGun_C_PullCable::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_PullCable, CallFunc_FindOwnerPalCharacter_ReturnValue_1) == 0x000030, "Member 'BP_GrapplingGun_C_PullCable::CallFunc_FindOwnerPalCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_PullCable, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000038, "Member 'BP_GrapplingGun_C_PullCable::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_PullCable, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000050, "Member 'BP_GrapplingGun_C_PullCable::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_PullCable, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000068, "Member 'BP_GrapplingGun_C_PullCable::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_PullCable, CallFunc_Normal_ReturnValue) == 0x000080, "Member 'BP_GrapplingGun_C_PullCable::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_PullCable, CallFunc_Dot_VectorVector_ReturnValue) == 0x000098, "Member 'BP_GrapplingGun_C_PullCable::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_PullCable, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x0000A0, "Member 'BP_GrapplingGun_C_PullCable::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_PullCable, CallFunc_Less_DoubleDouble_ReturnValue) == 0x0000B8, "Member 'BP_GrapplingGun_C_PullCable::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_PullCable, CallFunc_IsNearTwoPoint_ReturnValue) == 0x0000B9, "Member 'BP_GrapplingGun_C_PullCable::CallFunc_IsNearTwoPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_PullCable, CallFunc_BooleanOR_ReturnValue) == 0x0000BA, "Member 'BP_GrapplingGun_C_PullCable::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_PullCable, CallFunc_Conv_DoubleToVector_ReturnValue_1) == 0x0000C0, "Member 'BP_GrapplingGun_C_PullCable::CallFunc_Conv_DoubleToVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_PullCable, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0000D8, "Member 'BP_GrapplingGun_C_PullCable::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_PullCable, CallFunc_Multiply_VectorVector_ReturnValue_1) == 0x0000F0, "Member 'BP_GrapplingGun_C_PullCable::CallFunc_Multiply_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_PullCable, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x000108, "Member 'BP_GrapplingGun_C_PullCable::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_PullCable, CallFunc_Add_VectorVector_ReturnValue) == 0x000120, "Member 'BP_GrapplingGun_C_PullCable::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_PullCable, CallFunc_Normal_ReturnValue_1) == 0x000138, "Member 'BP_GrapplingGun_C_PullCable::CallFunc_Normal_ReturnValue_1' has a wrong offset!");

// Function BP_GrapplingGun.BP_GrapplingGun_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_GrapplingGun_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrapplingGun_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_GrapplingGun_C_ReceiveEndPlay");
static_assert(sizeof(BP_GrapplingGun_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_GrapplingGun_C_ReceiveEndPlay");
static_assert(offsetof(BP_GrapplingGun_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_GrapplingGun_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_GrapplingGun.BP_GrapplingGun_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_GrapplingGun_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrapplingGun_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_GrapplingGun_C_ReceiveTick");
static_assert(sizeof(BP_GrapplingGun_C_ReceiveTick) == 0x000004, "Wrong size on BP_GrapplingGun_C_ReceiveTick");
static_assert(offsetof(BP_GrapplingGun_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_GrapplingGun_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_GrapplingGun.BP_GrapplingGun_C.ShotCable
// 0x0068 (0x0068 - 0x0000)
struct BP_GrapplingGun_C_ShotCable final
{
public:
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_CalcShootStartParam_ShootDirection;       // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_CalcShootStartParam_StartLocation;        // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrapplingGun_C_ShotCable) == 0x000008, "Wrong alignment on BP_GrapplingGun_C_ShotCable");
static_assert(sizeof(BP_GrapplingGun_C_ShotCable) == 0x000068, "Wrong size on BP_GrapplingGun_C_ShotCable");
static_assert(offsetof(BP_GrapplingGun_C_ShotCable, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000000, "Member 'BP_GrapplingGun_C_ShotCable::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_ShotCable, CallFunc_GetSocketLocation_ReturnValue) == 0x000018, "Member 'BP_GrapplingGun_C_ShotCable::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_ShotCable, CallFunc_CalcShootStartParam_ShootDirection) == 0x000030, "Member 'BP_GrapplingGun_C_ShotCable::CallFunc_CalcShootStartParam_ShootDirection' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_ShotCable, CallFunc_CalcShootStartParam_StartLocation) == 0x000048, "Member 'BP_GrapplingGun_C_ShotCable::CallFunc_CalcShootStartParam_StartLocation' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_ShotCable, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000060, "Member 'BP_GrapplingGun_C_ShotCable::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");

// Function BP_GrapplingGun.BP_GrapplingGun_C.ShowLine
// 0x0090 (0x0090 - 0x0000)
struct BP_GrapplingGun_C_ShowLine final
{
public:
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_CalcShootStartParam_ShootDirection;       // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_CalcShootStartParam_StartLocation;        // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrapplingGun_C_ShowLine) == 0x000008, "Wrong alignment on BP_GrapplingGun_C_ShowLine");
static_assert(sizeof(BP_GrapplingGun_C_ShowLine) == 0x000090, "Wrong size on BP_GrapplingGun_C_ShowLine");
static_assert(offsetof(BP_GrapplingGun_C_ShowLine, CallFunc_GetPalDebugSetting_ReturnValue) == 0x000000, "Member 'BP_GrapplingGun_C_ShowLine::CallFunc_GetPalDebugSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_ShowLine, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_GrapplingGun_C_ShowLine::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_ShowLine, CallFunc_Not_PreBool_ReturnValue) == 0x000009, "Member 'BP_GrapplingGun_C_ShowLine::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_ShowLine, CallFunc_Not_PreBool_ReturnValue_1) == 0x00000A, "Member 'BP_GrapplingGun_C_ShowLine::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_ShowLine, CallFunc_BooleanAND_ReturnValue) == 0x00000B, "Member 'BP_GrapplingGun_C_ShowLine::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_ShowLine, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000010, "Member 'BP_GrapplingGun_C_ShowLine::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_ShowLine, CallFunc_BooleanAND_ReturnValue_1) == 0x000028, "Member 'BP_GrapplingGun_C_ShowLine::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_ShowLine, CallFunc_CalcShootStartParam_ShootDirection) == 0x000030, "Member 'BP_GrapplingGun_C_ShowLine::CallFunc_CalcShootStartParam_ShootDirection' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_ShowLine, CallFunc_CalcShootStartParam_StartLocation) == 0x000048, "Member 'BP_GrapplingGun_C_ShowLine::CallFunc_CalcShootStartParam_StartLocation' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_ShowLine, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000060, "Member 'BP_GrapplingGun_C_ShowLine::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_ShowLine, CallFunc_Add_VectorVector_ReturnValue) == 0x000078, "Member 'BP_GrapplingGun_C_ShowLine::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");

// Function BP_GrapplingGun.BP_GrapplingGun_C.Start Graplling
// 0x0140 (0x0140 - 0x0000)
struct BP_GrapplingGun_C_Start_Graplling final
{
public:
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character;         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_CalcCoolTimeRate_CoolTime;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalNetArchive                         K2Node_MakeStruct_PalNetArchive;                   // 0x0028(0x0010)()
	uint8                                         Pad_38[0x8];                                       // 0x0038(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActionDynamicParameter                K2Node_MakeStruct_ActionDynamicParameter;          // 0x0040(0x00E0)()
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue_1;      // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                    CallFunc_GetActionComponent_ReturnValue;           // 0x0128(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         CallFunc_PlayActionByTypeParameter_ReturnValue;    // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_WritePlayerGrappling_CoolTimeRate_ImplicitCast; // 0x0138(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_WritePlayerGrappling_Speed_ImplicitCast;  // 0x013C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrapplingGun_C_Start_Graplling) == 0x000010, "Wrong alignment on BP_GrapplingGun_C_Start_Graplling");
static_assert(sizeof(BP_GrapplingGun_C_Start_Graplling) == 0x000140, "Wrong size on BP_GrapplingGun_C_Start_Graplling");
static_assert(offsetof(BP_GrapplingGun_C_Start_Graplling, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000000, "Member 'BP_GrapplingGun_C_Start_Graplling::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_Start_Graplling, K2Node_DynamicCast_AsPal_Player_Character) == 0x000008, "Member 'BP_GrapplingGun_C_Start_Graplling::K2Node_DynamicCast_AsPal_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_Start_Graplling, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_GrapplingGun_C_Start_Graplling::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_Start_Graplling, CallFunc_CalcCoolTimeRate_CoolTime) == 0x000018, "Member 'BP_GrapplingGun_C_Start_Graplling::CallFunc_CalcCoolTimeRate_CoolTime' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_Start_Graplling, CallFunc_HasAuthority_ReturnValue) == 0x000020, "Member 'BP_GrapplingGun_C_Start_Graplling::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_Start_Graplling, K2Node_MakeStruct_PalNetArchive) == 0x000028, "Member 'BP_GrapplingGun_C_Start_Graplling::K2Node_MakeStruct_PalNetArchive' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_Start_Graplling, K2Node_MakeStruct_ActionDynamicParameter) == 0x000040, "Member 'BP_GrapplingGun_C_Start_Graplling::K2Node_MakeStruct_ActionDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_Start_Graplling, CallFunc_FindOwnerPalCharacter_ReturnValue_1) == 0x000120, "Member 'BP_GrapplingGun_C_Start_Graplling::CallFunc_FindOwnerPalCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_Start_Graplling, CallFunc_GetActionComponent_ReturnValue) == 0x000128, "Member 'BP_GrapplingGun_C_Start_Graplling::CallFunc_GetActionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_Start_Graplling, CallFunc_PlayActionByTypeParameter_ReturnValue) == 0x000130, "Member 'BP_GrapplingGun_C_Start_Graplling::CallFunc_PlayActionByTypeParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_Start_Graplling, CallFunc_WritePlayerGrappling_CoolTimeRate_ImplicitCast) == 0x000138, "Member 'BP_GrapplingGun_C_Start_Graplling::CallFunc_WritePlayerGrappling_CoolTimeRate_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_Start_Graplling, CallFunc_WritePlayerGrappling_Speed_ImplicitCast) == 0x00013C, "Member 'BP_GrapplingGun_C_Start_Graplling::CallFunc_WritePlayerGrappling_Speed_ImplicitCast' has a wrong offset!");

// Function BP_GrapplingGun.BP_GrapplingGun_C.UpdateCable
// 0x0440 (0x0440 - 0x0000)
struct BP_GrapplingGun_C_UpdateCable final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMaxLength;                                       // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        NextLength;                                        // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0020(0x0010)(ConstParm, ReferenceParm)
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue_1;      // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PullCable_IsEnd;                          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGraplingAction_bSuccess;                // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53[0x5];                                       // 0x0053(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x00A0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x018A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18B[0x1];                                      // 0x018B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_194[0x4];                                      // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0198(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x01B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x01C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x01E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x01F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0200(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0208(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0224(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22C[0x4];                                      // 0x022C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0230(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0248(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetCurrentCableLength_CableLength;        // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit_1;                 // 0x0278(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue_1;            // 0x0360(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit_1;            // 0x0361(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap_1;         // 0x0362(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_363[0x1];                                      // 0x0363(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time_1;                    // 0x0364(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance_1;                // 0x0368(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36C[0x4];                                      // 0x036C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location_1;                // 0x0370(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint_1;             // 0x0388(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal_1;                  // 0x03A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal_1;            // 0x03B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat_1;                 // 0x03D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor_1;                // 0x03D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent_1;            // 0x03E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName_1;             // 0x03E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName_1;                // 0x03F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem_1;                 // 0x03F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex_1;            // 0x03FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex_1;               // 0x0400(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_404[0x4];                                      // 0x0404(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart_1;              // 0x0408(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd_1;                // 0x0420(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0438(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0439(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrapplingGun_C_UpdateCable) == 0x000008, "Wrong alignment on BP_GrapplingGun_C_UpdateCable");
static_assert(sizeof(BP_GrapplingGun_C_UpdateCable) == 0x000440, "Wrong size on BP_GrapplingGun_C_UpdateCable");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, DeltaTime) == 0x000000, "Member 'BP_GrapplingGun_C_UpdateCable::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, IsMaxLength) == 0x000008, "Member 'BP_GrapplingGun_C_UpdateCable::IsMaxLength' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, NextLength) == 0x000010, "Member 'BP_GrapplingGun_C_UpdateCable::NextLength' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000018, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, K2Node_MakeArray_Array) == 0x000020, "Member 'BP_GrapplingGun_C_UpdateCable::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_FindOwnerPalCharacter_ReturnValue_1) == 0x000030, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_FindOwnerPalCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000038, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_PullCable_IsEnd) == 0x000050, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_PullCable_IsEnd' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_IsGraplingAction_bSuccess) == 0x000051, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_IsGraplingAction_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000052, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000058, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000070, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_Add_VectorVector_ReturnValue) == 0x000088, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_LineTraceSingle_OutHit) == 0x0000A0, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_LineTraceSingle_ReturnValue) == 0x000188, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_bBlockingHit) == 0x000189, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_bInitialOverlap) == 0x00018A, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_Time) == 0x00018C, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_Distance) == 0x000190, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_Location) == 0x000198, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_ImpactPoint) == 0x0001B0, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_Normal) == 0x0001C8, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_ImpactNormal) == 0x0001E0, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_PhysMat) == 0x0001F8, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_HitActor) == 0x000200, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_HitComponent) == 0x000208, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_HitBoneName) == 0x000210, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_BoneName) == 0x000218, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_HitItem) == 0x000220, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_ElementIndex) == 0x000224, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_FaceIndex) == 0x000228, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_TraceStart) == 0x000230, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_TraceEnd) == 0x000248, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000260, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_GetCurrentCableLength_CableLength) == 0x000268, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_GetCurrentCableLength_CableLength' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000270, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_LineTraceSingle_OutHit_1) == 0x000278, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_LineTraceSingle_OutHit_1' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_LineTraceSingle_ReturnValue_1) == 0x000360, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_LineTraceSingle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_bBlockingHit_1) == 0x000361, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_bBlockingHit_1' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_bInitialOverlap_1) == 0x000362, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_bInitialOverlap_1' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_Time_1) == 0x000364, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_Time_1' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_Distance_1) == 0x000368, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_Distance_1' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_Location_1) == 0x000370, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_Location_1' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_ImpactPoint_1) == 0x000388, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_ImpactPoint_1' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_Normal_1) == 0x0003A0, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_Normal_1' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_ImpactNormal_1) == 0x0003B8, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_ImpactNormal_1' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_PhysMat_1) == 0x0003D0, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_PhysMat_1' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_HitActor_1) == 0x0003D8, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_HitActor_1' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_HitComponent_1) == 0x0003E0, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_HitComponent_1' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_HitBoneName_1) == 0x0003E8, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_HitBoneName_1' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_BoneName_1) == 0x0003F0, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_BoneName_1' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_HitItem_1) == 0x0003F8, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_HitItem_1' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_ElementIndex_1) == 0x0003FC, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_ElementIndex_1' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_FaceIndex_1) == 0x000400, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_FaceIndex_1' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_TraceStart_1) == 0x000408, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_TraceStart_1' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BreakHitResult_TraceEnd_1) == 0x000420, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BreakHitResult_TraceEnd_1' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000438, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateCable, CallFunc_BooleanAND_ReturnValue) == 0x000439, "Member 'BP_GrapplingGun_C_UpdateCable::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_GrapplingGun.BP_GrapplingGun_C.UpdateRopeEndLocation
// 0x0028 (0x0028 - 0x0000)
struct BP_GrapplingGun_C_UpdateRopeEndLocation final
{
public:
	bool                                          CallFunc_IsGraplingAction_bSuccess;                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrapplingGun_C_UpdateRopeEndLocation) == 0x000008, "Wrong alignment on BP_GrapplingGun_C_UpdateRopeEndLocation");
static_assert(sizeof(BP_GrapplingGun_C_UpdateRopeEndLocation) == 0x000028, "Wrong size on BP_GrapplingGun_C_UpdateRopeEndLocation");
static_assert(offsetof(BP_GrapplingGun_C_UpdateRopeEndLocation, CallFunc_IsGraplingAction_bSuccess) == 0x000000, "Member 'BP_GrapplingGun_C_UpdateRopeEndLocation::CallFunc_IsGraplingAction_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateRopeEndLocation, CallFunc_GetSocketLocation_ReturnValue) == 0x000008, "Member 'BP_GrapplingGun_C_UpdateRopeEndLocation::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateRopeEndLocation, CallFunc_BooleanOR_ReturnValue) == 0x000020, "Member 'BP_GrapplingGun_C_UpdateRopeEndLocation::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateRopeEndLocation, CallFunc_BooleanAND_ReturnValue) == 0x000021, "Member 'BP_GrapplingGun_C_UpdateRopeEndLocation::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_GrapplingGun.BP_GrapplingGun_C.UpdateVisibleReticle
// 0x0078 (0x0078 - 0x0000)
struct BP_GrapplingGun_C_UpdateVisibleReticle final
{
public:
	class APalCharacter*                          PlayerCharacter;                                   // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetReticleTargetActor_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetOverrideTargetLocation_ConsiderRide_ReturnValue; // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasResponseToChannelByPalTraceType_ReturnValue; // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                   CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanShoot_ReturnValue;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A[0x6];                                       // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGraplingAction_bSuccess;                // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNearTwoPoint_ReturnValue;               // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x006B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x006E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x006F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_IsNearTwoPoint_distance_ImplicitCast;     // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrapplingGun_C_UpdateVisibleReticle) == 0x000008, "Wrong alignment on BP_GrapplingGun_C_UpdateVisibleReticle");
static_assert(sizeof(BP_GrapplingGun_C_UpdateVisibleReticle) == 0x000078, "Wrong size on BP_GrapplingGun_C_UpdateVisibleReticle");
static_assert(offsetof(BP_GrapplingGun_C_UpdateVisibleReticle, PlayerCharacter) == 0x000000, "Member 'BP_GrapplingGun_C_UpdateVisibleReticle::PlayerCharacter' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateVisibleReticle, CallFunc_GetComponentByClass_ReturnValue) == 0x000008, "Member 'BP_GrapplingGun_C_UpdateVisibleReticle::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateVisibleReticle, CallFunc_GetReticleTargetActor_ReturnValue) == 0x000010, "Member 'BP_GrapplingGun_C_UpdateVisibleReticle::CallFunc_GetReticleTargetActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateVisibleReticle, CallFunc_GetOverrideTargetLocation_ConsiderRide_ReturnValue) == 0x000018, "Member 'BP_GrapplingGun_C_UpdateVisibleReticle::CallFunc_GetOverrideTargetLocation_ConsiderRide_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateVisibleReticle, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BP_GrapplingGun_C_UpdateVisibleReticle::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateVisibleReticle, CallFunc_HasResponseToChannelByPalTraceType_ReturnValue) == 0x000031, "Member 'BP_GrapplingGun_C_UpdateVisibleReticle::CallFunc_HasResponseToChannelByPalTraceType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateVisibleReticle, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000038, "Member 'BP_GrapplingGun_C_UpdateVisibleReticle::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateVisibleReticle, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000050, "Member 'BP_GrapplingGun_C_UpdateVisibleReticle::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateVisibleReticle, CallFunc_CanShoot_ReturnValue) == 0x000058, "Member 'BP_GrapplingGun_C_UpdateVisibleReticle::CallFunc_CanShoot_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateVisibleReticle, CallFunc_IsValid_ReturnValue_1) == 0x000059, "Member 'BP_GrapplingGun_C_UpdateVisibleReticle::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateVisibleReticle, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000060, "Member 'BP_GrapplingGun_C_UpdateVisibleReticle::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateVisibleReticle, CallFunc_IsValid_ReturnValue_2) == 0x000068, "Member 'BP_GrapplingGun_C_UpdateVisibleReticle::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateVisibleReticle, CallFunc_IsGraplingAction_bSuccess) == 0x000069, "Member 'BP_GrapplingGun_C_UpdateVisibleReticle::CallFunc_IsGraplingAction_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateVisibleReticle, CallFunc_IsNearTwoPoint_ReturnValue) == 0x00006A, "Member 'BP_GrapplingGun_C_UpdateVisibleReticle::CallFunc_IsNearTwoPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateVisibleReticle, CallFunc_BooleanAND_ReturnValue) == 0x00006B, "Member 'BP_GrapplingGun_C_UpdateVisibleReticle::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateVisibleReticle, CallFunc_Not_PreBool_ReturnValue) == 0x00006C, "Member 'BP_GrapplingGun_C_UpdateVisibleReticle::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateVisibleReticle, CallFunc_Not_PreBool_ReturnValue_1) == 0x00006D, "Member 'BP_GrapplingGun_C_UpdateVisibleReticle::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateVisibleReticle, CallFunc_BooleanAND_ReturnValue_1) == 0x00006E, "Member 'BP_GrapplingGun_C_UpdateVisibleReticle::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateVisibleReticle, CallFunc_BooleanAND_ReturnValue_2) == 0x00006F, "Member 'BP_GrapplingGun_C_UpdateVisibleReticle::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateVisibleReticle, CallFunc_BooleanAND_ReturnValue_3) == 0x000070, "Member 'BP_GrapplingGun_C_UpdateVisibleReticle::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_GrapplingGun_C_UpdateVisibleReticle, CallFunc_IsNearTwoPoint_distance_ImplicitCast) == 0x000074, "Member 'BP_GrapplingGun_C_UpdateVisibleReticle::CallFunc_IsNearTwoPoint_distance_ImplicitCast' has a wrong offset!");

// Function BP_GrapplingGun.BP_GrapplingGun_C.IsShowReticle
// 0x0001 (0x0001 - 0x0000)
struct BP_GrapplingGun_C_IsShowReticle final
{
public:
	bool                                          IsShow;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GrapplingGun_C_IsShowReticle) == 0x000001, "Wrong alignment on BP_GrapplingGun_C_IsShowReticle");
static_assert(sizeof(BP_GrapplingGun_C_IsShowReticle) == 0x000001, "Wrong size on BP_GrapplingGun_C_IsShowReticle");
static_assert(offsetof(BP_GrapplingGun_C_IsShowReticle, IsShow) == 0x000000, "Member 'BP_GrapplingGun_C_IsShowReticle::IsShow' has a wrong offset!");

}

