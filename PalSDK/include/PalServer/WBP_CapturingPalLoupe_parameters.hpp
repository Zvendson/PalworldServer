#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "EPalSphereCaptureFailedReason_structs.hpp"
#include "SlateCore_structs.hpp"


namespace PalServer::Params
{

// Function WBP_CapturingPalLoupe.WBP_CapturingPalLoupe_C.CalcScreenPosition
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_CapturingPalLoupe_C_CalcScreenPosition final
{
public:
	struct FVector                                CallFunc_GetTargetWorldLocation_outVector;         // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetCameraRotation_ReturnValue;            // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Dot_VectorVector_ReturnValue;             // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CapturingPalLoupe_C_CalcScreenPosition) == 0x000008, "Wrong alignment on WBP_CapturingPalLoupe_C_CalcScreenPosition");
static_assert(sizeof(WBP_CapturingPalLoupe_C_CalcScreenPosition) == 0x0000A0, "Wrong size on WBP_CapturingPalLoupe_C_CalcScreenPosition");
static_assert(offsetof(WBP_CapturingPalLoupe_C_CalcScreenPosition, CallFunc_GetTargetWorldLocation_outVector) == 0x000000, "Member 'WBP_CapturingPalLoupe_C_CalcScreenPosition::CallFunc_GetTargetWorldLocation_outVector' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_CalcScreenPosition, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000018, "Member 'WBP_CapturingPalLoupe_C_CalcScreenPosition::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_CalcScreenPosition, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000020, "Member 'WBP_CapturingPalLoupe_C_CalcScreenPosition::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_CalcScreenPosition, CallFunc_GetCameraRotation_ReturnValue) == 0x000038, "Member 'WBP_CapturingPalLoupe_C_CalcScreenPosition::CallFunc_GetCameraRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_CalcScreenPosition, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000050, "Member 'WBP_CapturingPalLoupe_C_CalcScreenPosition::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_CalcScreenPosition, CallFunc_GetForwardVector_ReturnValue) == 0x000068, "Member 'WBP_CapturingPalLoupe_C_CalcScreenPosition::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_CalcScreenPosition, CallFunc_Normal_ReturnValue) == 0x000080, "Member 'WBP_CapturingPalLoupe_C_CalcScreenPosition::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_CalcScreenPosition, CallFunc_Dot_VectorVector_ReturnValue) == 0x000098, "Member 'WBP_CapturingPalLoupe_C_CalcScreenPosition::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");

// Function WBP_CapturingPalLoupe.WBP_CapturingPalLoupe_C.ExecuteUbergraph_WBP_CapturingPalLoupe
// 0x00A8 (0x00A8 - 0x0000)
struct WBP_CapturingPalLoupe_C_ExecuteUbergraph_WBP_CapturingPalLoupe final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          K2Node_CustomEvent_targetHandle_1;                 // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          K2Node_CustomEvent_targetHandle;                   // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalSphereCaptureFailedReason                 K2Node_CustomEvent_failedReson;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetTargetWorldLocation_outVector;         // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0060(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CapturingPalLoupe_C_ExecuteUbergraph_WBP_CapturingPalLoupe) == 0x000008, "Wrong alignment on WBP_CapturingPalLoupe_C_ExecuteUbergraph_WBP_CapturingPalLoupe");
static_assert(sizeof(WBP_CapturingPalLoupe_C_ExecuteUbergraph_WBP_CapturingPalLoupe) == 0x0000A8, "Wrong size on WBP_CapturingPalLoupe_C_ExecuteUbergraph_WBP_CapturingPalLoupe");
static_assert(offsetof(WBP_CapturingPalLoupe_C_ExecuteUbergraph_WBP_CapturingPalLoupe, EntryPoint) == 0x000000, "Member 'WBP_CapturingPalLoupe_C_ExecuteUbergraph_WBP_CapturingPalLoupe::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_ExecuteUbergraph_WBP_CapturingPalLoupe, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_CapturingPalLoupe_C_ExecuteUbergraph_WBP_CapturingPalLoupe::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_ExecuteUbergraph_WBP_CapturingPalLoupe, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'WBP_CapturingPalLoupe_C_ExecuteUbergraph_WBP_CapturingPalLoupe::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_ExecuteUbergraph_WBP_CapturingPalLoupe, K2Node_CustomEvent_targetHandle_1) == 0x000020, "Member 'WBP_CapturingPalLoupe_C_ExecuteUbergraph_WBP_CapturingPalLoupe::K2Node_CustomEvent_targetHandle_1' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_ExecuteUbergraph_WBP_CapturingPalLoupe, CallFunc_PlayAnimation_ReturnValue_1) == 0x000028, "Member 'WBP_CapturingPalLoupe_C_ExecuteUbergraph_WBP_CapturingPalLoupe::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_ExecuteUbergraph_WBP_CapturingPalLoupe, K2Node_CustomEvent_targetHandle) == 0x000030, "Member 'WBP_CapturingPalLoupe_C_ExecuteUbergraph_WBP_CapturingPalLoupe::K2Node_CustomEvent_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_ExecuteUbergraph_WBP_CapturingPalLoupe, K2Node_CustomEvent_failedReson) == 0x000038, "Member 'WBP_CapturingPalLoupe_C_ExecuteUbergraph_WBP_CapturingPalLoupe::K2Node_CustomEvent_failedReson' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_ExecuteUbergraph_WBP_CapturingPalLoupe, K2Node_SwitchEnum_CmpSuccess) == 0x000039, "Member 'WBP_CapturingPalLoupe_C_ExecuteUbergraph_WBP_CapturingPalLoupe::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_ExecuteUbergraph_WBP_CapturingPalLoupe, CallFunc_PlayAnimation_ReturnValue_2) == 0x000040, "Member 'WBP_CapturingPalLoupe_C_ExecuteUbergraph_WBP_CapturingPalLoupe::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_ExecuteUbergraph_WBP_CapturingPalLoupe, CallFunc_GetTargetWorldLocation_outVector) == 0x000048, "Member 'WBP_CapturingPalLoupe_C_ExecuteUbergraph_WBP_CapturingPalLoupe::CallFunc_GetTargetWorldLocation_outVector' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_ExecuteUbergraph_WBP_CapturingPalLoupe, K2Node_Event_MyGeometry) == 0x000060, "Member 'WBP_CapturingPalLoupe_C_ExecuteUbergraph_WBP_CapturingPalLoupe::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_ExecuteUbergraph_WBP_CapturingPalLoupe, K2Node_Event_InDeltaTime) == 0x0000A0, "Member 'WBP_CapturingPalLoupe_C_ExecuteUbergraph_WBP_CapturingPalLoupe::K2Node_Event_InDeltaTime' has a wrong offset!");

// Function WBP_CapturingPalLoupe.WBP_CapturingPalLoupe_C.GetLoupeWidgetSize
// 0x0030 (0x0030 - 0x0000)
struct WBP_CapturingPalLoupe_C_GetLoupeWidgetSize final
{
public:
	struct FVector2D                              WidgetSize_0;                                      // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;               // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DVector2D_ReturnValue;    // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CapturingPalLoupe_C_GetLoupeWidgetSize) == 0x000008, "Wrong alignment on WBP_CapturingPalLoupe_C_GetLoupeWidgetSize");
static_assert(sizeof(WBP_CapturingPalLoupe_C_GetLoupeWidgetSize) == 0x000030, "Wrong size on WBP_CapturingPalLoupe_C_GetLoupeWidgetSize");
static_assert(offsetof(WBP_CapturingPalLoupe_C_GetLoupeWidgetSize, WidgetSize_0) == 0x000000, "Member 'WBP_CapturingPalLoupe_C_GetLoupeWidgetSize::WidgetSize_0' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_GetLoupeWidgetSize, CallFunc_GetDesiredSize_ReturnValue) == 0x000010, "Member 'WBP_CapturingPalLoupe_C_GetLoupeWidgetSize::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_GetLoupeWidgetSize, CallFunc_Multiply_Vector2DVector2D_ReturnValue) == 0x000020, "Member 'WBP_CapturingPalLoupe_C_GetLoupeWidgetSize::CallFunc_Multiply_Vector2DVector2D_ReturnValue' has a wrong offset!");

// Function WBP_CapturingPalLoupe.WBP_CapturingPalLoupe_C.GetTargetWidgetSize
// 0x0020 (0x0020 - 0x0000)
struct WBP_CapturingPalLoupe_C_GetTargetWidgetSize final
{
public:
	struct FVector2D                              OutVector;                                         // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;               // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CapturingPalLoupe_C_GetTargetWidgetSize) == 0x000008, "Wrong alignment on WBP_CapturingPalLoupe_C_GetTargetWidgetSize");
static_assert(sizeof(WBP_CapturingPalLoupe_C_GetTargetWidgetSize) == 0x000020, "Wrong size on WBP_CapturingPalLoupe_C_GetTargetWidgetSize");
static_assert(offsetof(WBP_CapturingPalLoupe_C_GetTargetWidgetSize, OutVector) == 0x000000, "Member 'WBP_CapturingPalLoupe_C_GetTargetWidgetSize::OutVector' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_GetTargetWidgetSize, CallFunc_GetDesiredSize_ReturnValue) == 0x000010, "Member 'WBP_CapturingPalLoupe_C_GetTargetWidgetSize::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");

// Function WBP_CapturingPalLoupe.WBP_CapturingPalLoupe_C.GetTargetWorldLocation
// 0x0048 (0x0048 - 0x0000)
struct WBP_CapturingPalLoupe_C_GetTargetWorldLocation final
{
public:
	struct FVector                                OutVector;                                         // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PalCaptureBodyBase_C*               K2Node_DynamicCast_AsBP_Pal_Capture_Body_Base;     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CapturingPalLoupe_C_GetTargetWorldLocation) == 0x000008, "Wrong alignment on WBP_CapturingPalLoupe_C_GetTargetWorldLocation");
static_assert(sizeof(WBP_CapturingPalLoupe_C_GetTargetWorldLocation) == 0x000048, "Wrong size on WBP_CapturingPalLoupe_C_GetTargetWorldLocation");
static_assert(offsetof(WBP_CapturingPalLoupe_C_GetTargetWorldLocation, OutVector) == 0x000000, "Member 'WBP_CapturingPalLoupe_C_GetTargetWorldLocation::OutVector' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_GetTargetWorldLocation, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000018, "Member 'WBP_CapturingPalLoupe_C_GetTargetWorldLocation::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_GetTargetWorldLocation, K2Node_DynamicCast_AsBP_Pal_Capture_Body_Base) == 0x000020, "Member 'WBP_CapturingPalLoupe_C_GetTargetWorldLocation::K2Node_DynamicCast_AsBP_Pal_Capture_Body_Base' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_GetTargetWorldLocation, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_CapturingPalLoupe_C_GetTargetWorldLocation::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_GetTargetWorldLocation, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000029, "Member 'WBP_CapturingPalLoupe_C_GetTargetWorldLocation::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_GetTargetWorldLocation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000030, "Member 'WBP_CapturingPalLoupe_C_GetTargetWorldLocation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");

// Function WBP_CapturingPalLoupe.WBP_CapturingPalLoupe_C.IsEnableLoupe
// 0x0002 (0x0002 - 0x0000)
struct WBP_CapturingPalLoupe_C_IsEnableLoupe final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CapturingPalLoupe_C_IsEnableLoupe) == 0x000001, "Wrong alignment on WBP_CapturingPalLoupe_C_IsEnableLoupe");
static_assert(sizeof(WBP_CapturingPalLoupe_C_IsEnableLoupe) == 0x000002, "Wrong size on WBP_CapturingPalLoupe_C_IsEnableLoupe");
static_assert(offsetof(WBP_CapturingPalLoupe_C_IsEnableLoupe, ReturnValue) == 0x000000, "Member 'WBP_CapturingPalLoupe_C_IsEnableLoupe::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_IsEnableLoupe, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000001, "Member 'WBP_CapturingPalLoupe_C_IsEnableLoupe::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");

// Function WBP_CapturingPalLoupe.WBP_CapturingPalLoupe_C.OnFailed
// 0x0010 (0x0010 - 0x0000)
struct WBP_CapturingPalLoupe_C_OnFailed final
{
public:
	class UPalIndividualCharacterHandle*          TargetHandle;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalSphereCaptureFailedReason                 FailedReson;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CapturingPalLoupe_C_OnFailed) == 0x000008, "Wrong alignment on WBP_CapturingPalLoupe_C_OnFailed");
static_assert(sizeof(WBP_CapturingPalLoupe_C_OnFailed) == 0x000010, "Wrong size on WBP_CapturingPalLoupe_C_OnFailed");
static_assert(offsetof(WBP_CapturingPalLoupe_C_OnFailed, TargetHandle) == 0x000000, "Member 'WBP_CapturingPalLoupe_C_OnFailed::TargetHandle' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_OnFailed, FailedReson) == 0x000008, "Member 'WBP_CapturingPalLoupe_C_OnFailed::FailedReson' has a wrong offset!");

// Function WBP_CapturingPalLoupe.WBP_CapturingPalLoupe_C.OnSuccess
// 0x0008 (0x0008 - 0x0000)
struct WBP_CapturingPalLoupe_C_OnSuccess final
{
public:
	class UPalIndividualCharacterHandle*          TargetHandle;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CapturingPalLoupe_C_OnSuccess) == 0x000008, "Wrong alignment on WBP_CapturingPalLoupe_C_OnSuccess");
static_assert(sizeof(WBP_CapturingPalLoupe_C_OnSuccess) == 0x000008, "Wrong size on WBP_CapturingPalLoupe_C_OnSuccess");
static_assert(offsetof(WBP_CapturingPalLoupe_C_OnSuccess, TargetHandle) == 0x000000, "Member 'WBP_CapturingPalLoupe_C_OnSuccess::TargetHandle' has a wrong offset!");

// Function WBP_CapturingPalLoupe.WBP_CapturingPalLoupe_C.Setup
// 0x0080 (0x0080 - 0x0000)
struct WBP_CapturingPalLoupe_C_Setup final
{
public:
	class ABP_PalCaptureBodyBase_C*               TargetCaptureBody_0;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          TargetHandle;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23[0x1];                                       // 0x0023(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCharacterID_ReturnValue;               // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalIndividualCharacterHandle* TargetHandle, EPalSphereCaptureFailedReason FailedReason)> K2Node_CreateDelegate_OutputDelegate;              // 0x002C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class ABP_PalCaptureBodyBase_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x0040(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TDelegate<void(class UPalIndividualCharacterHandle* TargetHandle)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CapturingPalLoupe_C_Setup) == 0x000008, "Wrong alignment on WBP_CapturingPalLoupe_C_Setup");
static_assert(sizeof(WBP_CapturingPalLoupe_C_Setup) == 0x000080, "Wrong size on WBP_CapturingPalLoupe_C_Setup");
static_assert(offsetof(WBP_CapturingPalLoupe_C_Setup, TargetCaptureBody_0) == 0x000000, "Member 'WBP_CapturingPalLoupe_C_Setup::TargetCaptureBody_0' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_Setup, TargetHandle) == 0x000008, "Member 'WBP_CapturingPalLoupe_C_Setup::TargetHandle' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_Setup, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_CapturingPalLoupe_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_Setup, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000018, "Member 'WBP_CapturingPalLoupe_C_Setup::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_Setup, CallFunc_IsValid_ReturnValue_1) == 0x000020, "Member 'WBP_CapturingPalLoupe_C_Setup::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_Setup, CallFunc_IsValid_ReturnValue_2) == 0x000021, "Member 'WBP_CapturingPalLoupe_C_Setup::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_Setup, CallFunc_IsValid_ReturnValue_3) == 0x000022, "Member 'WBP_CapturingPalLoupe_C_Setup::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_Setup, CallFunc_GetCharacterID_ReturnValue) == 0x000024, "Member 'WBP_CapturingPalLoupe_C_Setup::CallFunc_GetCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_Setup, K2Node_CreateDelegate_OutputDelegate) == 0x00002C, "Member 'WBP_CapturingPalLoupe_C_Setup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_Setup, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue) == 0x000040, "Member 'WBP_CapturingPalLoupe_C_Setup::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_Setup, K2Node_CreateDelegate_OutputDelegate_1) == 0x000070, "Member 'WBP_CapturingPalLoupe_C_Setup::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function WBP_CapturingPalLoupe.WBP_CapturingPalLoupe_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_CapturingPalLoupe_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CapturingPalLoupe_C_Tick) == 0x000008, "Wrong alignment on WBP_CapturingPalLoupe_C_Tick");
static_assert(sizeof(WBP_CapturingPalLoupe_C_Tick) == 0x000048, "Wrong size on WBP_CapturingPalLoupe_C_Tick");
static_assert(offsetof(WBP_CapturingPalLoupe_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_CapturingPalLoupe_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_CapturingPalLoupe_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_CapturingPalLoupe.WBP_CapturingPalLoupe_C.UpdateArrowImageAngle
// 0x0010 (0x0010 - 0x0000)
struct WBP_CapturingPalLoupe_C_UpdateArrowImageAngle final
{
public:
	double                                        NewAngle;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetRenderTransformAngle_Angle_ImplicitCast; // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CapturingPalLoupe_C_UpdateArrowImageAngle) == 0x000008, "Wrong alignment on WBP_CapturingPalLoupe_C_UpdateArrowImageAngle");
static_assert(sizeof(WBP_CapturingPalLoupe_C_UpdateArrowImageAngle) == 0x000010, "Wrong size on WBP_CapturingPalLoupe_C_UpdateArrowImageAngle");
static_assert(offsetof(WBP_CapturingPalLoupe_C_UpdateArrowImageAngle, NewAngle) == 0x000000, "Member 'WBP_CapturingPalLoupe_C_UpdateArrowImageAngle::NewAngle' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_UpdateArrowImageAngle, CallFunc_SetRenderTransformAngle_Angle_ImplicitCast) == 0x000008, "Member 'WBP_CapturingPalLoupe_C_UpdateArrowImageAngle::CallFunc_SetRenderTransformAngle_Angle_ImplicitCast' has a wrong offset!");

// Function WBP_CapturingPalLoupe.WBP_CapturingPalLoupe_C.UpdateLength
// 0x00F0 (0x00F0 - 0x0000)
struct WBP_CapturingPalLoupe_C_UpdateLength final
{
public:
	struct FVector                                CallFunc_GetTargetWorldLocation_outVector;         // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue;                        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0078(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00C8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00D8(0x0018)()
};
static_assert(alignof(WBP_CapturingPalLoupe_C_UpdateLength) == 0x000008, "Wrong alignment on WBP_CapturingPalLoupe_C_UpdateLength");
static_assert(sizeof(WBP_CapturingPalLoupe_C_UpdateLength) == 0x0000F0, "Wrong size on WBP_CapturingPalLoupe_C_UpdateLength");
static_assert(offsetof(WBP_CapturingPalLoupe_C_UpdateLength, CallFunc_GetTargetWorldLocation_outVector) == 0x000000, "Member 'WBP_CapturingPalLoupe_C_UpdateLength::CallFunc_GetTargetWorldLocation_outVector' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_UpdateLength, CallFunc_GetPalmi_ReturnValue) == 0x000018, "Member 'WBP_CapturingPalLoupe_C_UpdateLength::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_UpdateLength, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_CapturingPalLoupe_C_UpdateLength::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_UpdateLength, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'WBP_CapturingPalLoupe_C_UpdateLength::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_UpdateLength, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000040, "Member 'WBP_CapturingPalLoupe_C_UpdateLength::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_UpdateLength, CallFunc_VSize_ReturnValue) == 0x000058, "Member 'WBP_CapturingPalLoupe_C_UpdateLength::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_UpdateLength, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000060, "Member 'WBP_CapturingPalLoupe_C_UpdateLength::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_UpdateLength, CallFunc_FTrunc_ReturnValue) == 0x000068, "Member 'WBP_CapturingPalLoupe_C_UpdateLength::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_UpdateLength, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000070, "Member 'WBP_CapturingPalLoupe_C_UpdateLength::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_UpdateLength, K2Node_MakeStruct_FormatArgumentData) == 0x000078, "Member 'WBP_CapturingPalLoupe_C_UpdateLength::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_UpdateLength, K2Node_MakeArray_Array) == 0x0000C8, "Member 'WBP_CapturingPalLoupe_C_UpdateLength::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_CapturingPalLoupe_C_UpdateLength, CallFunc_Format_ReturnValue) == 0x0000D8, "Member 'WBP_CapturingPalLoupe_C_UpdateLength::CallFunc_Format_ReturnValue' has a wrong offset!");

}

