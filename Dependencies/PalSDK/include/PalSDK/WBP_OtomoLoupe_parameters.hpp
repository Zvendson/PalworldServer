#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_OtomoLoupe.WBP_OtomoLoupe_C.CalcScreenPosition
// 0x00C8 (0x00C8 - 0x0000)
struct WBP_OtomoLoupe_C_CalcScreenPosition final
{
public:
	struct FVector                                CallFunc_GetTargetWorldLocation_outVector;         // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_GetCameraRotation_ReturnValue;            // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Dot_VectorVector_ReturnValue;             // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OtomoLoupe_C_CalcScreenPosition) == 0x000008, "Wrong alignment on WBP_OtomoLoupe_C_CalcScreenPosition");
static_assert(sizeof(WBP_OtomoLoupe_C_CalcScreenPosition) == 0x0000C8, "Wrong size on WBP_OtomoLoupe_C_CalcScreenPosition");
static_assert(offsetof(WBP_OtomoLoupe_C_CalcScreenPosition, CallFunc_GetTargetWorldLocation_outVector) == 0x000000, "Member 'WBP_OtomoLoupe_C_CalcScreenPosition::CallFunc_GetTargetWorldLocation_outVector' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_CalcScreenPosition, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000018, "Member 'WBP_OtomoLoupe_C_CalcScreenPosition::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_CalcScreenPosition, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_OtomoLoupe_C_CalcScreenPosition::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_CalcScreenPosition, CallFunc_GetCameraRotation_ReturnValue) == 0x000028, "Member 'WBP_OtomoLoupe_C_CalcScreenPosition::CallFunc_GetCameraRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_CalcScreenPosition, CallFunc_GetForwardVector_ReturnValue) == 0x000040, "Member 'WBP_OtomoLoupe_C_CalcScreenPosition::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_CalcScreenPosition, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000058, "Member 'WBP_OtomoLoupe_C_CalcScreenPosition::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_CalcScreenPosition, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000070, "Member 'WBP_OtomoLoupe_C_CalcScreenPosition::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_CalcScreenPosition, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000078, "Member 'WBP_OtomoLoupe_C_CalcScreenPosition::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_CalcScreenPosition, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000090, "Member 'WBP_OtomoLoupe_C_CalcScreenPosition::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_CalcScreenPosition, CallFunc_Normal_ReturnValue) == 0x0000A8, "Member 'WBP_OtomoLoupe_C_CalcScreenPosition::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_CalcScreenPosition, CallFunc_Dot_VectorVector_ReturnValue) == 0x0000C0, "Member 'WBP_OtomoLoupe_C_CalcScreenPosition::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");

// Function WBP_OtomoLoupe.WBP_OtomoLoupe_C.ExecuteUbergraph_WBP_OtomoLoupe
// 0x0004 (0x0004 - 0x0000)
struct WBP_OtomoLoupe_C_ExecuteUbergraph_WBP_OtomoLoupe final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OtomoLoupe_C_ExecuteUbergraph_WBP_OtomoLoupe) == 0x000004, "Wrong alignment on WBP_OtomoLoupe_C_ExecuteUbergraph_WBP_OtomoLoupe");
static_assert(sizeof(WBP_OtomoLoupe_C_ExecuteUbergraph_WBP_OtomoLoupe) == 0x000004, "Wrong size on WBP_OtomoLoupe_C_ExecuteUbergraph_WBP_OtomoLoupe");
static_assert(offsetof(WBP_OtomoLoupe_C_ExecuteUbergraph_WBP_OtomoLoupe, EntryPoint) == 0x000000, "Member 'WBP_OtomoLoupe_C_ExecuteUbergraph_WBP_OtomoLoupe::EntryPoint' has a wrong offset!");

// Function WBP_OtomoLoupe.WBP_OtomoLoupe_C.GetLoupeWidgetSize
// 0x0020 (0x0020 - 0x0000)
struct WBP_OtomoLoupe_C_GetLoupeWidgetSize final
{
public:
	struct FVector2D                              WidgetSize_0;                                      // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;               // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OtomoLoupe_C_GetLoupeWidgetSize) == 0x000008, "Wrong alignment on WBP_OtomoLoupe_C_GetLoupeWidgetSize");
static_assert(sizeof(WBP_OtomoLoupe_C_GetLoupeWidgetSize) == 0x000020, "Wrong size on WBP_OtomoLoupe_C_GetLoupeWidgetSize");
static_assert(offsetof(WBP_OtomoLoupe_C_GetLoupeWidgetSize, WidgetSize_0) == 0x000000, "Member 'WBP_OtomoLoupe_C_GetLoupeWidgetSize::WidgetSize_0' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_GetLoupeWidgetSize, CallFunc_GetDesiredSize_ReturnValue) == 0x000010, "Member 'WBP_OtomoLoupe_C_GetLoupeWidgetSize::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");

// Function WBP_OtomoLoupe.WBP_OtomoLoupe_C.GetTargetWidgetSize
// 0x0020 (0x0020 - 0x0000)
struct WBP_OtomoLoupe_C_GetTargetWidgetSize final
{
public:
	struct FVector2D                              OutVector;                                         // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;               // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OtomoLoupe_C_GetTargetWidgetSize) == 0x000008, "Wrong alignment on WBP_OtomoLoupe_C_GetTargetWidgetSize");
static_assert(sizeof(WBP_OtomoLoupe_C_GetTargetWidgetSize) == 0x000020, "Wrong size on WBP_OtomoLoupe_C_GetTargetWidgetSize");
static_assert(offsetof(WBP_OtomoLoupe_C_GetTargetWidgetSize, OutVector) == 0x000000, "Member 'WBP_OtomoLoupe_C_GetTargetWidgetSize::OutVector' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_GetTargetWidgetSize, CallFunc_GetDesiredSize_ReturnValue) == 0x000010, "Member 'WBP_OtomoLoupe_C_GetTargetWidgetSize::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");

// Function WBP_OtomoLoupe.WBP_OtomoLoupe_C.GetTargetWorldLocation
// 0x0040 (0x0040 - 0x0000)
struct WBP_OtomoLoupe_C_GetTargetWorldLocation final
{
public:
	struct FVector                                OutVector;                                         // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OtomoLoupe_C_GetTargetWorldLocation) == 0x000008, "Wrong alignment on WBP_OtomoLoupe_C_GetTargetWorldLocation");
static_assert(sizeof(WBP_OtomoLoupe_C_GetTargetWorldLocation) == 0x000040, "Wrong size on WBP_OtomoLoupe_C_GetTargetWorldLocation");
static_assert(offsetof(WBP_OtomoLoupe_C_GetTargetWorldLocation, OutVector) == 0x000000, "Member 'WBP_OtomoLoupe_C_GetTargetWorldLocation::OutVector' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_GetTargetWorldLocation, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000018, "Member 'WBP_OtomoLoupe_C_GetTargetWorldLocation::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_GetTargetWorldLocation, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_OtomoLoupe_C_GetTargetWorldLocation::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_GetTargetWorldLocation, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'WBP_OtomoLoupe_C_GetTargetWorldLocation::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_GetTargetWorldLocation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'WBP_OtomoLoupe_C_GetTargetWorldLocation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");

// Function WBP_OtomoLoupe.WBP_OtomoLoupe_C.GetTranslationTarget
// 0x0008 (0x0008 - 0x0000)
struct WBP_OtomoLoupe_C_GetTranslationTarget final
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OtomoLoupe_C_GetTranslationTarget) == 0x000008, "Wrong alignment on WBP_OtomoLoupe_C_GetTranslationTarget");
static_assert(sizeof(WBP_OtomoLoupe_C_GetTranslationTarget) == 0x000008, "Wrong size on WBP_OtomoLoupe_C_GetTranslationTarget");
static_assert(offsetof(WBP_OtomoLoupe_C_GetTranslationTarget, Widget) == 0x000000, "Member 'WBP_OtomoLoupe_C_GetTranslationTarget::Widget' has a wrong offset!");

// Function WBP_OtomoLoupe.WBP_OtomoLoupe_C.IsEnableLoupe
// 0x0030 (0x0030 - 0x0000)
struct WBP_OtomoLoupe_C_IsEnableLoupe final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerController*                   K2Node_DynamicCast_AsPal_Player_Controller;        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRiding_ReturnValue;                     // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B[0x5];                                       // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OtomoLoupe_C_IsEnableLoupe) == 0x000008, "Wrong alignment on WBP_OtomoLoupe_C_IsEnableLoupe");
static_assert(sizeof(WBP_OtomoLoupe_C_IsEnableLoupe) == 0x000030, "Wrong size on WBP_OtomoLoupe_C_IsEnableLoupe");
static_assert(offsetof(WBP_OtomoLoupe_C_IsEnableLoupe, ReturnValue) == 0x000000, "Member 'WBP_OtomoLoupe_C_IsEnableLoupe::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_IsEnableLoupe, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000008, "Member 'WBP_OtomoLoupe_C_IsEnableLoupe::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_IsEnableLoupe, K2Node_DynamicCast_AsPal_Player_Controller) == 0x000010, "Member 'WBP_OtomoLoupe_C_IsEnableLoupe::K2Node_DynamicCast_AsPal_Player_Controller' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_IsEnableLoupe, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_OtomoLoupe_C_IsEnableLoupe::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_IsEnableLoupe, CallFunc_IsRiding_ReturnValue) == 0x000019, "Member 'WBP_OtomoLoupe_C_IsEnableLoupe::CallFunc_IsRiding_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_IsEnableLoupe, CallFunc_IsValid_ReturnValue) == 0x00001A, "Member 'WBP_OtomoLoupe_C_IsEnableLoupe::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_IsEnableLoupe, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000020, "Member 'WBP_OtomoLoupe_C_IsEnableLoupe::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_IsEnableLoupe, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'WBP_OtomoLoupe_C_IsEnableLoupe::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_IsEnableLoupe, CallFunc_IsVisible_ReturnValue) == 0x000029, "Member 'WBP_OtomoLoupe_C_IsEnableLoupe::CallFunc_IsVisible_ReturnValue' has a wrong offset!");

// Function WBP_OtomoLoupe.WBP_OtomoLoupe_C.OnActivateOtomo
// 0x0028 (0x0028 - 0x0000)
struct WBP_OtomoLoupe_C_OnActivateOtomo final
{
public:
	class UPalOtomoHolderComponentBase*           CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedOtomoID_ReturnValue;           // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterSlot*            CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetHandle_ReturnValue;                    // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OtomoLoupe_C_OnActivateOtomo) == 0x000008, "Wrong alignment on WBP_OtomoLoupe_C_OnActivateOtomo");
static_assert(sizeof(WBP_OtomoLoupe_C_OnActivateOtomo) == 0x000028, "Wrong size on WBP_OtomoLoupe_C_OnActivateOtomo");
static_assert(offsetof(WBP_OtomoLoupe_C_OnActivateOtomo, CallFunc_GetOtomoHolderComponent_ReturnValue) == 0x000000, "Member 'WBP_OtomoLoupe_C_OnActivateOtomo::CallFunc_GetOtomoHolderComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_OnActivateOtomo, CallFunc_GetSelectedOtomoID_ReturnValue) == 0x000008, "Member 'WBP_OtomoLoupe_C_OnActivateOtomo::CallFunc_GetSelectedOtomoID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_OnActivateOtomo, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'WBP_OtomoLoupe_C_OnActivateOtomo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_OnActivateOtomo, CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue) == 0x000010, "Member 'WBP_OtomoLoupe_C_OnActivateOtomo::CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_OnActivateOtomo, CallFunc_GetHandle_ReturnValue) == 0x000018, "Member 'WBP_OtomoLoupe_C_OnActivateOtomo::CallFunc_GetHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_OnActivateOtomo, CallFunc_IsValid_ReturnValue_1) == 0x000020, "Member 'WBP_OtomoLoupe_C_OnActivateOtomo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_OtomoLoupe.WBP_OtomoLoupe_C.RoundScreenPosition
// 0x0198 (0x0198 - 0x0000)
struct WBP_OtomoLoupe_C_RoundScreenPosition final
{
public:
	struct FVector2D                              ScreenPosition;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CalcedPosition;                                    // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        borderY;                                           // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        borderX;                                           // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ViewportHalfY;                                     // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ViewportHalfX;                                     // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        OriginalY;                                         // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        OriginalX;                                         // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RoundedScreenPosY;                                 // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RoundedScreenPosX;                                 // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X;                          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_3;      // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_4;      // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_5;      // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x00B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_6;      // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_7;      // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_8;      // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_2;       // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_2;          // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E2[0x6];                                       // 0x00E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_9;      // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMax_ReturnValue;                         // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_3;          // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_FMin_ReturnValue;                         // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_10;     // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMin_ReturnValue_1;                       // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMax_ReturnValue_1;                       // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue;              // 0x0130(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X_1;                        // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y_1;                        // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_2;        // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_11;     // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0168(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x0178(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X_2;                        // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y_2;                        // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OtomoLoupe_C_RoundScreenPosition) == 0x000008, "Wrong alignment on WBP_OtomoLoupe_C_RoundScreenPosition");
static_assert(sizeof(WBP_OtomoLoupe_C_RoundScreenPosition) == 0x000198, "Wrong size on WBP_OtomoLoupe_C_RoundScreenPosition");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, ScreenPosition) == 0x000000, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::ScreenPosition' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CalcedPosition) == 0x000010, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CalcedPosition' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, borderY) == 0x000020, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::borderY' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, borderX) == 0x000028, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::borderX' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, ViewportHalfY) == 0x000030, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::ViewportHalfY' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, ViewportHalfX) == 0x000038, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::ViewportHalfX' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, OriginalY) == 0x000040, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::OriginalY' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, OriginalX) == 0x000048, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::OriginalX' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, RoundedScreenPosY) == 0x000050, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::RoundedScreenPosY' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, RoundedScreenPosX) == 0x000058, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::RoundedScreenPosX' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_BreakVector2D_X) == 0x000060, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_BreakVector2D_Y) == 0x000068, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000070, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000078, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000080, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000088, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_Multiply_DoubleDouble_ReturnValue_3) == 0x000090, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_Multiply_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000098, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_Multiply_DoubleDouble_ReturnValue_4) == 0x0000A0, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_Multiply_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_Multiply_DoubleDouble_ReturnValue_5) == 0x0000A8, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_Multiply_DoubleDouble_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_MakeVector2D_ReturnValue) == 0x0000B0, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_Less_DoubleDouble_ReturnValue) == 0x0000C0, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_Less_DoubleDouble_ReturnValue_1) == 0x0000C1, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_Less_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_Multiply_DoubleDouble_ReturnValue_6) == 0x0000C8, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_Multiply_DoubleDouble_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_Multiply_DoubleDouble_ReturnValue_7) == 0x0000D0, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_Multiply_DoubleDouble_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_Multiply_DoubleDouble_ReturnValue_8) == 0x0000D8, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_Multiply_DoubleDouble_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_Greater_DoubleDouble_ReturnValue_2) == 0x0000E0, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_Greater_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_Less_DoubleDouble_ReturnValue_2) == 0x0000E1, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_Less_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_Multiply_DoubleDouble_ReturnValue_9) == 0x0000E8, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_Multiply_DoubleDouble_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_FMax_ReturnValue) == 0x0000F0, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_Less_DoubleDouble_ReturnValue_3) == 0x0000F8, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_Less_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_FMin_ReturnValue) == 0x000100, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_BooleanOR_ReturnValue) == 0x000108, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_Multiply_DoubleDouble_ReturnValue_10) == 0x000110, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_Multiply_DoubleDouble_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_FMin_ReturnValue_1) == 0x000118, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_FMin_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000120, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_FMax_ReturnValue_1) == 0x000128, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_FMax_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_GetViewportSize_ReturnValue) == 0x000130, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_GetViewportSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_BreakVector2D_X_1) == 0x000140, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_BreakVector2D_Y_1) == 0x000148, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000150, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_Divide_DoubleDouble_ReturnValue_2) == 0x000158, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_Divide_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_Multiply_DoubleDouble_ReturnValue_11) == 0x000160, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_Multiply_DoubleDouble_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_MakeVector2D_ReturnValue_1) == 0x000168, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_Multiply_Vector2DFloat_ReturnValue) == 0x000178, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_Multiply_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_BreakVector2D_X_2) == 0x000188, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_BreakVector2D_X_2' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_RoundScreenPosition, CallFunc_BreakVector2D_Y_2) == 0x000190, "Member 'WBP_OtomoLoupe_C_RoundScreenPosition::CallFunc_BreakVector2D_Y_2' has a wrong offset!");

// Function WBP_OtomoLoupe.WBP_OtomoLoupe_C.SetFinalWidgetOpacity
// 0x0010 (0x0010 - 0x0000)
struct WBP_OtomoLoupe_C_SetFinalWidgetOpacity final
{
public:
	double                                        CalcedOpacity;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OtomoLoupe_C_SetFinalWidgetOpacity) == 0x000008, "Wrong alignment on WBP_OtomoLoupe_C_SetFinalWidgetOpacity");
static_assert(sizeof(WBP_OtomoLoupe_C_SetFinalWidgetOpacity) == 0x000010, "Wrong size on WBP_OtomoLoupe_C_SetFinalWidgetOpacity");
static_assert(offsetof(WBP_OtomoLoupe_C_SetFinalWidgetOpacity, CalcedOpacity) == 0x000000, "Member 'WBP_OtomoLoupe_C_SetFinalWidgetOpacity::CalcedOpacity' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_SetFinalWidgetOpacity, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast) == 0x000008, "Member 'WBP_OtomoLoupe_C_SetFinalWidgetOpacity::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast' has a wrong offset!");

// Function WBP_OtomoLoupe.WBP_OtomoLoupe_C.Setup
// 0x0038 (0x0038 - 0x0000)
struct WBP_OtomoLoupe_C_Setup final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalOtomoHolderComponentBase*           CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_OtomoPalHolderComponent_C*          K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component; // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OtomoLoupe_C_Setup) == 0x000008, "Wrong alignment on WBP_OtomoLoupe_C_Setup");
static_assert(sizeof(WBP_OtomoLoupe_C_Setup) == 0x000038, "Wrong size on WBP_OtomoLoupe_C_Setup");
static_assert(offsetof(WBP_OtomoLoupe_C_Setup, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_OtomoLoupe_C_Setup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_Setup, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'WBP_OtomoLoupe_C_Setup::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_Setup, CallFunc_GetOtomoHolderComponent_ReturnValue) == 0x000020, "Member 'WBP_OtomoLoupe_C_Setup::CallFunc_GetOtomoHolderComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_Setup, K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component) == 0x000028, "Member 'WBP_OtomoLoupe_C_Setup::K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_Setup, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'WBP_OtomoLoupe_C_Setup::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_Setup, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'WBP_OtomoLoupe_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_OtomoLoupe.WBP_OtomoLoupe_C.UpdateArrowImageAngle
// 0x0010 (0x0010 - 0x0000)
struct WBP_OtomoLoupe_C_UpdateArrowImageAngle final
{
public:
	double                                        NewAngle;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetRenderTransformAngle_Angle_ImplicitCast; // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OtomoLoupe_C_UpdateArrowImageAngle) == 0x000008, "Wrong alignment on WBP_OtomoLoupe_C_UpdateArrowImageAngle");
static_assert(sizeof(WBP_OtomoLoupe_C_UpdateArrowImageAngle) == 0x000010, "Wrong size on WBP_OtomoLoupe_C_UpdateArrowImageAngle");
static_assert(offsetof(WBP_OtomoLoupe_C_UpdateArrowImageAngle, NewAngle) == 0x000000, "Member 'WBP_OtomoLoupe_C_UpdateArrowImageAngle::NewAngle' has a wrong offset!");
static_assert(offsetof(WBP_OtomoLoupe_C_UpdateArrowImageAngle, CallFunc_SetRenderTransformAngle_Angle_ImplicitCast) == 0x000008, "Member 'WBP_OtomoLoupe_C_UpdateArrowImageAngle::CallFunc_SetRenderTransformAngle_Angle_ImplicitCast' has a wrong offset!");

}

