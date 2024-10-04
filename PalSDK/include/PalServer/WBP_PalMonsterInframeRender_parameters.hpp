#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "AkAudio_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace PalServer::Params
{

// Function WBP_PalMonsterInframeRender.WBP_PalMonsterInframeRender_C.AddRotation
// 0x0020 (0x0020 - 0x0000)
struct WBP_PalMonsterInframeRender_C_AddRotation final
{
public:
	struct FRotator                               Rotator;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalMonsterInframeRender_C_AddRotation) == 0x000008, "Wrong alignment on WBP_PalMonsterInframeRender_C_AddRotation");
static_assert(sizeof(WBP_PalMonsterInframeRender_C_AddRotation) == 0x000020, "Wrong size on WBP_PalMonsterInframeRender_C_AddRotation");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_AddRotation, Rotator) == 0x000000, "Member 'WBP_PalMonsterInframeRender_C_AddRotation::Rotator' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_AddRotation, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_PalMonsterInframeRender_C_AddRotation::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_PalMonsterInframeRender.WBP_PalMonsterInframeRender_C.ExecuteUbergraph_WBP_PalMonsterInframeRender
// 0x0200 (0x0200 - 0x0000)
struct WBP_PalMonsterInframeRender_C_ExecuteUbergraph_WBP_PalMonsterInframeRender final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0008(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A[0x6];                                       // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_1;                   // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0080(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_169[0x7];                                      // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0170(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_188[0x8];                                      // 0x0188(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_Conv_VectorToTransform_ReturnValue;       // 0x0190(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x01F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PalMonsterInframeRendererSoundPlayer_C* CallFunc_FinishSpawningActor_ReturnValue;          // 0x01F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalMonsterInframeRender_C_ExecuteUbergraph_WBP_PalMonsterInframeRender) == 0x000010, "Wrong alignment on WBP_PalMonsterInframeRender_C_ExecuteUbergraph_WBP_PalMonsterInframeRender");
static_assert(sizeof(WBP_PalMonsterInframeRender_C_ExecuteUbergraph_WBP_PalMonsterInframeRender) == 0x000200, "Wrong size on WBP_PalMonsterInframeRender_C_ExecuteUbergraph_WBP_PalMonsterInframeRender");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_ExecuteUbergraph_WBP_PalMonsterInframeRender, EntryPoint) == 0x000000, "Member 'WBP_PalMonsterInframeRender_C_ExecuteUbergraph_WBP_PalMonsterInframeRender::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_ExecuteUbergraph_WBP_PalMonsterInframeRender, K2Node_Event_MyGeometry) == 0x000008, "Member 'WBP_PalMonsterInframeRender_C_ExecuteUbergraph_WBP_PalMonsterInframeRender::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_ExecuteUbergraph_WBP_PalMonsterInframeRender, K2Node_Event_InDeltaTime) == 0x000048, "Member 'WBP_PalMonsterInframeRender_C_ExecuteUbergraph_WBP_PalMonsterInframeRender::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_ExecuteUbergraph_WBP_PalMonsterInframeRender, CallFunc_GetPalmi_ReturnValue) == 0x000050, "Member 'WBP_PalMonsterInframeRender_C_ExecuteUbergraph_WBP_PalMonsterInframeRender::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_ExecuteUbergraph_WBP_PalMonsterInframeRender, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'WBP_PalMonsterInframeRender_C_ExecuteUbergraph_WBP_PalMonsterInframeRender::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_ExecuteUbergraph_WBP_PalMonsterInframeRender, CallFunc_IsValid_ReturnValue_1) == 0x000059, "Member 'WBP_PalMonsterInframeRender_C_ExecuteUbergraph_WBP_PalMonsterInframeRender::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_ExecuteUbergraph_WBP_PalMonsterInframeRender, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000060, "Member 'WBP_PalMonsterInframeRender_C_ExecuteUbergraph_WBP_PalMonsterInframeRender::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_ExecuteUbergraph_WBP_PalMonsterInframeRender, CallFunc_GetPalmi_ReturnValue_1) == 0x000078, "Member 'WBP_PalMonsterInframeRender_C_ExecuteUbergraph_WBP_PalMonsterInframeRender::CallFunc_GetPalmi_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_ExecuteUbergraph_WBP_PalMonsterInframeRender, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000080, "Member 'WBP_PalMonsterInframeRender_C_ExecuteUbergraph_WBP_PalMonsterInframeRender::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_ExecuteUbergraph_WBP_PalMonsterInframeRender, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000168, "Member 'WBP_PalMonsterInframeRender_C_ExecuteUbergraph_WBP_PalMonsterInframeRender::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_ExecuteUbergraph_WBP_PalMonsterInframeRender, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000170, "Member 'WBP_PalMonsterInframeRender_C_ExecuteUbergraph_WBP_PalMonsterInframeRender::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_ExecuteUbergraph_WBP_PalMonsterInframeRender, CallFunc_Conv_VectorToTransform_ReturnValue) == 0x000190, "Member 'WBP_PalMonsterInframeRender_C_ExecuteUbergraph_WBP_PalMonsterInframeRender::CallFunc_Conv_VectorToTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_ExecuteUbergraph_WBP_PalMonsterInframeRender, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0001F0, "Member 'WBP_PalMonsterInframeRender_C_ExecuteUbergraph_WBP_PalMonsterInframeRender::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_ExecuteUbergraph_WBP_PalMonsterInframeRender, CallFunc_FinishSpawningActor_ReturnValue) == 0x0001F8, "Member 'WBP_PalMonsterInframeRender_C_ExecuteUbergraph_WBP_PalMonsterInframeRender::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function WBP_PalMonsterInframeRender.WBP_PalMonsterInframeRender_C.Finalize
// 0x0014 (0x0014 - 0x0000)
struct WBP_PalMonsterInframeRender_C_Finalize final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalMonsterInframeRender_C_Finalize) == 0x000004, "Wrong alignment on WBP_PalMonsterInframeRender_C_Finalize");
static_assert(sizeof(WBP_PalMonsterInframeRender_C_Finalize) == 0x000014, "Wrong size on WBP_PalMonsterInframeRender_C_Finalize");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_Finalize, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_PalMonsterInframeRender_C_Finalize::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_Finalize, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PalMonsterInframeRender_C_Finalize::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_PalMonsterInframeRender.WBP_PalMonsterInframeRender_C.GetCaptureCameraActor
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalMonsterInframeRender_C_GetCaptureCameraActor final
{
public:
	class ABP_PalMonsterCaptureSet_C*             CameraActor;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalMonsterInframeRender_C_GetCaptureCameraActor) == 0x000008, "Wrong alignment on WBP_PalMonsterInframeRender_C_GetCaptureCameraActor");
static_assert(sizeof(WBP_PalMonsterInframeRender_C_GetCaptureCameraActor) == 0x000008, "Wrong size on WBP_PalMonsterInframeRender_C_GetCaptureCameraActor");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_GetCaptureCameraActor, CameraActor) == 0x000000, "Member 'WBP_PalMonsterInframeRender_C_GetCaptureCameraActor::CameraActor' has a wrong offset!");

// Function WBP_PalMonsterInframeRender.WBP_PalMonsterInframeRender_C.Initialize
// 0x0004 (0x0004 - 0x0000)
struct WBP_PalMonsterInframeRender_C_Initialize final
{
public:
	int32                                         TextureSize;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalMonsterInframeRender_C_Initialize) == 0x000004, "Wrong alignment on WBP_PalMonsterInframeRender_C_Initialize");
static_assert(sizeof(WBP_PalMonsterInframeRender_C_Initialize) == 0x000004, "Wrong size on WBP_PalMonsterInframeRender_C_Initialize");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_Initialize, TextureSize) == 0x000000, "Member 'WBP_PalMonsterInframeRender_C_Initialize::TextureSize' has a wrong offset!");

// Function WBP_PalMonsterInframeRender.WBP_PalMonsterInframeRender_C.Initialize_FreeSize
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalMonsterInframeRender_C_Initialize_FreeSize final
{
public:
	int32                                         TextureSizeX;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TextureSizeY;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalMonsterInframeRender_C_Initialize_FreeSize) == 0x000004, "Wrong alignment on WBP_PalMonsterInframeRender_C_Initialize_FreeSize");
static_assert(sizeof(WBP_PalMonsterInframeRender_C_Initialize_FreeSize) == 0x000008, "Wrong size on WBP_PalMonsterInframeRender_C_Initialize_FreeSize");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_Initialize_FreeSize, TextureSizeX) == 0x000000, "Member 'WBP_PalMonsterInframeRender_C_Initialize_FreeSize::TextureSizeX' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_Initialize_FreeSize, TextureSizeY) == 0x000004, "Member 'WBP_PalMonsterInframeRender_C_Initialize_FreeSize::TextureSizeY' has a wrong offset!");

// Function WBP_PalMonsterInframeRender.WBP_PalMonsterInframeRender_C.Initialize_Internal
// 0x00D0 (0x00D0 - 0x0000)
struct WBP_PalMonsterInframeRender_C_Initialize_Internal final
{
public:
	int32                                         TextureSizeX;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TextureSizeY;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextureRenderTarget2D*                 CallFunc_CreateRenderTarget2D_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0040(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*               CallFunc_GetComponentByClass_ReturnValue;          // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_PalMonsterCaptureSet_C*             CallFunc_FinishSpawningActor_ReturnValue;          // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalMonsterInframeRender_C_Initialize_Internal) == 0x000010, "Wrong alignment on WBP_PalMonsterInframeRender_C_Initialize_Internal");
static_assert(sizeof(WBP_PalMonsterInframeRender_C_Initialize_Internal) == 0x0000D0, "Wrong size on WBP_PalMonsterInframeRender_C_Initialize_Internal");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_Initialize_Internal, TextureSizeX) == 0x000000, "Member 'WBP_PalMonsterInframeRender_C_Initialize_Internal::TextureSizeX' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_Initialize_Internal, TextureSizeY) == 0x000004, "Member 'WBP_PalMonsterInframeRender_C_Initialize_Internal::TextureSizeY' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_Initialize_Internal, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_PalMonsterInframeRender_C_Initialize_Internal::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_Initialize_Internal, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'WBP_PalMonsterInframeRender_C_Initialize_Internal::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_Initialize_Internal, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'WBP_PalMonsterInframeRender_C_Initialize_Internal::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_Initialize_Internal, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000030, "Member 'WBP_PalMonsterInframeRender_C_Initialize_Internal::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_Initialize_Internal, CallFunc_CreateRenderTarget2D_ReturnValue) == 0x000038, "Member 'WBP_PalMonsterInframeRender_C_Initialize_Internal::CallFunc_CreateRenderTarget2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_Initialize_Internal, CallFunc_MakeTransform_ReturnValue) == 0x000040, "Member 'WBP_PalMonsterInframeRender_C_Initialize_Internal::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_Initialize_Internal, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000A0, "Member 'WBP_PalMonsterInframeRender_C_Initialize_Internal::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_Initialize_Internal, CallFunc_GetComponentByClass_ReturnValue) == 0x0000A8, "Member 'WBP_PalMonsterInframeRender_C_Initialize_Internal::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_Initialize_Internal, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000B0, "Member 'WBP_PalMonsterInframeRender_C_Initialize_Internal::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_Initialize_Internal, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x0000B8, "Member 'WBP_PalMonsterInframeRender_C_Initialize_Internal::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_Initialize_Internal, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x0000C0, "Member 'WBP_PalMonsterInframeRender_C_Initialize_Internal::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

// Function WBP_PalMonsterInframeRender.WBP_PalMonsterInframeRender_C.OnTimer_CaptureScene
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalMonsterInframeRender_C_OnTimer_CaptureScene final
{
public:
	class ABP_PalMonsterCaptureSet_C*             CallFunc_GetCaptureCameraActor_cameraActor;        // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalMonsterInframeRender_C_OnTimer_CaptureScene) == 0x000008, "Wrong alignment on WBP_PalMonsterInframeRender_C_OnTimer_CaptureScene");
static_assert(sizeof(WBP_PalMonsterInframeRender_C_OnTimer_CaptureScene) == 0x000008, "Wrong size on WBP_PalMonsterInframeRender_C_OnTimer_CaptureScene");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_OnTimer_CaptureScene, CallFunc_GetCaptureCameraActor_cameraActor) == 0x000000, "Member 'WBP_PalMonsterInframeRender_C_OnTimer_CaptureScene::CallFunc_GetCaptureCameraActor_cameraActor' has a wrong offset!");

// Function WBP_PalMonsterInframeRender.WBP_PalMonsterInframeRender_C.PlayNowDisplayingPalCry
// 0x0080 (0x0080 - 0x0000)
struct WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCry final
{
public:
	class FName                                   EmoStateName;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x000C(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetNowDisplayingPalID_PalID;              // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Split_LeftS;                              // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Split_RightS;                             // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Split_ReturnValue;                        // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x006C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default;                             // 0x0074(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCry) == 0x000008, "Wrong alignment on WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCry");
static_assert(sizeof(WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCry) == 0x000080, "Wrong size on WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCry");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCry, EmoStateName) == 0x000000, "Member 'WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCry::EmoStateName' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCry, Temp_bool_Variable) == 0x000008, "Member 'WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCry::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCry, Temp_delegate_Variable) == 0x00000C, "Member 'WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCry::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCry, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCry::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCry, CallFunc_PostEvent_ReturnValue) == 0x000020, "Member 'WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCry::CallFunc_PostEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCry, CallFunc_GetNowDisplayingPalID_PalID) == 0x000024, "Member 'WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCry::CallFunc_GetNowDisplayingPalID_PalID' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCry, CallFunc_Conv_NameToString_ReturnValue) == 0x000030, "Member 'WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCry::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCry, CallFunc_IsValid_ReturnValue_1) == 0x000040, "Member 'WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCry::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCry, CallFunc_Split_LeftS) == 0x000048, "Member 'WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCry::CallFunc_Split_LeftS' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCry, CallFunc_Split_RightS) == 0x000058, "Member 'WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCry::CallFunc_Split_RightS' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCry, CallFunc_Split_ReturnValue) == 0x000068, "Member 'WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCry::CallFunc_Split_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCry, CallFunc_Conv_StringToName_ReturnValue) == 0x00006C, "Member 'WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCry::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCry, K2Node_Select_Default) == 0x000074, "Member 'WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCry::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCry, CallFunc_NotEqual_NameName_ReturnValue) == 0x00007C, "Member 'WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCry::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");

// Function WBP_PalMonsterInframeRender.WBP_PalMonsterInframeRender_C.PlayNowDisplayingPalCryRandom
// 0x0030 (0x0030 - 0x0000)
struct WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCryRandom final
{
public:
	TArray<class FName>                           EmoStateNames;                                     // 0x0000(0x0010)(Edit, BlueprintVisible)
	TArray<class FName>                           K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Random_OutItem;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Random_OutIndex;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCryRandom) == 0x000008, "Wrong alignment on WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCryRandom");
static_assert(sizeof(WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCryRandom) == 0x000030, "Wrong size on WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCryRandom");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCryRandom, EmoStateNames) == 0x000000, "Member 'WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCryRandom::EmoStateNames' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCryRandom, K2Node_MakeArray_Array) == 0x000010, "Member 'WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCryRandom::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCryRandom, CallFunc_Array_Random_OutItem) == 0x000020, "Member 'WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCryRandom::CallFunc_Array_Random_OutItem' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCryRandom, CallFunc_Array_Random_OutIndex) == 0x000028, "Member 'WBP_PalMonsterInframeRender_C_PlayNowDisplayingPalCryRandom::CallFunc_Array_Random_OutIndex' has a wrong offset!");

// Function WBP_PalMonsterInframeRender.WBP_PalMonsterInframeRender_C.RequestCapture
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalMonsterInframeRender_C_RequestCapture final
{
public:
	class FName                                   CharacterID;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalMonsterInframeRender_C_RequestCapture) == 0x000004, "Wrong alignment on WBP_PalMonsterInframeRender_C_RequestCapture");
static_assert(sizeof(WBP_PalMonsterInframeRender_C_RequestCapture) == 0x000008, "Wrong size on WBP_PalMonsterInframeRender_C_RequestCapture");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_RequestCapture, CharacterID) == 0x000000, "Member 'WBP_PalMonsterInframeRender_C_RequestCapture::CharacterID' has a wrong offset!");

// Function WBP_PalMonsterInframeRender.WBP_PalMonsterInframeRender_C.Reset
// 0x0001 (0x0001 - 0x0000)
struct WBP_PalMonsterInframeRender_C_Reset final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalMonsterInframeRender_C_Reset) == 0x000001, "Wrong alignment on WBP_PalMonsterInframeRender_C_Reset");
static_assert(sizeof(WBP_PalMonsterInframeRender_C_Reset) == 0x000001, "Wrong size on WBP_PalMonsterInframeRender_C_Reset");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_Reset, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'WBP_PalMonsterInframeRender_C_Reset::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_PalMonsterInframeRender.WBP_PalMonsterInframeRender_C.ResetRotation
// 0x0001 (0x0001 - 0x0000)
struct WBP_PalMonsterInframeRender_C_ResetRotation final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalMonsterInframeRender_C_ResetRotation) == 0x000001, "Wrong alignment on WBP_PalMonsterInframeRender_C_ResetRotation");
static_assert(sizeof(WBP_PalMonsterInframeRender_C_ResetRotation) == 0x000001, "Wrong size on WBP_PalMonsterInframeRender_C_ResetRotation");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_ResetRotation, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'WBP_PalMonsterInframeRender_C_ResetRotation::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_PalMonsterInframeRender.WBP_PalMonsterInframeRender_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_PalMonsterInframeRender_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalMonsterInframeRender_C_Tick) == 0x000008, "Wrong alignment on WBP_PalMonsterInframeRender_C_Tick");
static_assert(sizeof(WBP_PalMonsterInframeRender_C_Tick) == 0x000048, "Wrong size on WBP_PalMonsterInframeRender_C_Tick");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_PalMonsterInframeRender_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PalMonsterInframeRender_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_PalMonsterInframeRender_C_Tick::InDeltaTime' has a wrong offset!");

}

