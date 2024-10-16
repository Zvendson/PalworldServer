#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_EnemyQuestionMarkIcon.WBP_EnemyQuestionMarkIcon_C.CheckEnd
// 0x0020 (0x0020 - 0x0000)
struct WBP_EnemyQuestionMarkIcon_C_CheckEnd final
{
public:
	bool                                          IsEnd;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsCapturedProcessing_ReturnValue;      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDead_ReturnValue;                       // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EnemyQuestionMarkIcon_C_CheckEnd) == 0x000008, "Wrong alignment on WBP_EnemyQuestionMarkIcon_C_CheckEnd");
static_assert(sizeof(WBP_EnemyQuestionMarkIcon_C_CheckEnd) == 0x000020, "Wrong size on WBP_EnemyQuestionMarkIcon_C_CheckEnd");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_CheckEnd, IsEnd) == 0x000000, "Member 'WBP_EnemyQuestionMarkIcon_C_CheckEnd::IsEnd' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_CheckEnd, CallFunc_GetComponentByClass_ReturnValue) == 0x000008, "Member 'WBP_EnemyQuestionMarkIcon_C_CheckEnd::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_CheckEnd, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000010, "Member 'WBP_EnemyQuestionMarkIcon_C_CheckEnd::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_CheckEnd, CallFunc_GetIsCapturedProcessing_ReturnValue) == 0x000018, "Member 'WBP_EnemyQuestionMarkIcon_C_CheckEnd::CallFunc_GetIsCapturedProcessing_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_CheckEnd, CallFunc_IsDead_ReturnValue) == 0x000019, "Member 'WBP_EnemyQuestionMarkIcon_C_CheckEnd::CallFunc_IsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_CheckEnd, CallFunc_IsValid_ReturnValue) == 0x00001A, "Member 'WBP_EnemyQuestionMarkIcon_C_CheckEnd::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_EnemyQuestionMarkIcon.WBP_EnemyQuestionMarkIcon_C.ExecuteUbergraph_WBP_EnemyQuestionMarkIcon
// 0x0130 (0x0130 - 0x0000)
struct WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0018(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetExclamationMarkLocation_ReturnValue;   // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition; // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue; // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X;                          // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x00C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result_1;  // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1; // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F9[0x3];                                       // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x00FC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10C[0x4];                                      // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0110(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDead_ReturnValue;                       // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckEnd_IsEnd;                           // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11A[0x6];                                      // 0x011A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon) == 0x000008, "Wrong alignment on WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon");
static_assert(sizeof(WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon) == 0x000130, "Wrong size on WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon, EntryPoint) == 0x000000, "Member 'WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon, K2Node_Event_MyGeometry) == 0x000018, "Member 'WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon, K2Node_Event_InDeltaTime) == 0x000058, "Member 'WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000060, "Member 'WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon, CallFunc_GetExclamationMarkLocation_ReturnValue) == 0x000068, "Member 'WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon::CallFunc_GetExclamationMarkLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon, CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition) == 0x000080, "Member 'WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon::CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon, CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue) == 0x000090, "Member 'WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon::CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000098, "Member 'WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000A0, "Member 'WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon, CallFunc_BreakVector2D_X) == 0x0000A8, "Member 'WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon, CallFunc_BreakVector2D_Y) == 0x0000B0, "Member 'WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x0000B8, "Member 'WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon, CallFunc_MakeVector2D_ReturnValue) == 0x0000C0, "Member 'WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x0000D0, "Member 'WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x0000D8, "Member 'WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon, CallFunc_IsValid_ReturnValue) == 0x0000E0, "Member 'WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon, CallFunc_CreatePlayAnimationProxyObject_Result_1) == 0x0000E8, "Member 'WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon::CallFunc_CreatePlayAnimationProxyObject_Result_1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon, CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1) == 0x0000F0, "Member 'WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon::CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon, CallFunc_IsValid_ReturnValue_1) == 0x0000F8, "Member 'WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000FC, "Member 'WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon, CallFunc_GetComponentByClass_ReturnValue) == 0x000110, "Member 'WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon, CallFunc_IsDead_ReturnValue) == 0x000118, "Member 'WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon::CallFunc_IsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon, CallFunc_CheckEnd_IsEnd) == 0x000119, "Member 'WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon::CallFunc_CheckEnd_IsEnd' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000120, "Member 'WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon, CallFunc_Delay_Duration_ImplicitCast) == 0x000128, "Member 'WBP_EnemyQuestionMarkIcon_C_ExecuteUbergraph_WBP_EnemyQuestionMarkIcon::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

// Function WBP_EnemyQuestionMarkIcon.WBP_EnemyQuestionMarkIcon_C.Setup
// 0x0080 (0x0080 - 0x0000)
struct WBP_EnemyQuestionMarkIcon_C_Setup final
{
public:
	class APalCharacter*                          TargetPal;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetCameraLocation_ReturnValue;            // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEnemyMarkScale_ReturnValue;            // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MakeVector2D_X_ImplicitCast;              // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MakeVector2D_Y_ImplicitCast;              // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EnemyQuestionMarkIcon_C_Setup) == 0x000008, "Wrong alignment on WBP_EnemyQuestionMarkIcon_C_Setup");
static_assert(sizeof(WBP_EnemyQuestionMarkIcon_C_Setup) == 0x000080, "Wrong size on WBP_EnemyQuestionMarkIcon_C_Setup");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_Setup, TargetPal) == 0x000000, "Member 'WBP_EnemyQuestionMarkIcon_C_Setup::TargetPal' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_Setup, CallFunc_GetGameSetting_ReturnValue) == 0x000008, "Member 'WBP_EnemyQuestionMarkIcon_C_Setup::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_Setup, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'WBP_EnemyQuestionMarkIcon_C_Setup::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_Setup, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'WBP_EnemyQuestionMarkIcon_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_Setup, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000030, "Member 'WBP_EnemyQuestionMarkIcon_C_Setup::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_Setup, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'WBP_EnemyQuestionMarkIcon_C_Setup::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_Setup, CallFunc_IsValid_ReturnValue_2) == 0x000039, "Member 'WBP_EnemyQuestionMarkIcon_C_Setup::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_Setup, CallFunc_GetCameraLocation_ReturnValue) == 0x000040, "Member 'WBP_EnemyQuestionMarkIcon_C_Setup::CallFunc_GetCameraLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_Setup, CallFunc_GetEnemyMarkScale_ReturnValue) == 0x000058, "Member 'WBP_EnemyQuestionMarkIcon_C_Setup::CallFunc_GetEnemyMarkScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_Setup, CallFunc_MakeVector2D_ReturnValue) == 0x000060, "Member 'WBP_EnemyQuestionMarkIcon_C_Setup::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_Setup, CallFunc_MakeVector2D_X_ImplicitCast) == 0x000070, "Member 'WBP_EnemyQuestionMarkIcon_C_Setup::CallFunc_MakeVector2D_X_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_Setup, CallFunc_MakeVector2D_Y_ImplicitCast) == 0x000078, "Member 'WBP_EnemyQuestionMarkIcon_C_Setup::CallFunc_MakeVector2D_Y_ImplicitCast' has a wrong offset!");

// Function WBP_EnemyQuestionMarkIcon.WBP_EnemyQuestionMarkIcon_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_EnemyQuestionMarkIcon_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EnemyQuestionMarkIcon_C_Tick) == 0x000008, "Wrong alignment on WBP_EnemyQuestionMarkIcon_C_Tick");
static_assert(sizeof(WBP_EnemyQuestionMarkIcon_C_Tick) == 0x000048, "Wrong size on WBP_EnemyQuestionMarkIcon_C_Tick");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_EnemyQuestionMarkIcon_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_EnemyQuestionMarkIcon_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_EnemyQuestionMarkIcon_C_Tick::InDeltaTime' has a wrong offset!");

}

