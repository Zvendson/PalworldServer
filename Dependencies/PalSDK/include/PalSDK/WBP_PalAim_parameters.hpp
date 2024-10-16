#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_PalAim.WBP_PalAim_C.DisplayOutlineTarget
// 0x00E8 (0x00E8 - 0x0000)
struct WBP_PalAim_C_DisplayOutlineTarget final
{
public:
	struct FHitResult                             HitResult;                                         // 0x0000(0x00E8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(WBP_PalAim_C_DisplayOutlineTarget) == 0x000008, "Wrong alignment on WBP_PalAim_C_DisplayOutlineTarget");
static_assert(sizeof(WBP_PalAim_C_DisplayOutlineTarget) == 0x0000E8, "Wrong size on WBP_PalAim_C_DisplayOutlineTarget");
static_assert(offsetof(WBP_PalAim_C_DisplayOutlineTarget, HitResult) == 0x000000, "Member 'WBP_PalAim_C_DisplayOutlineTarget::HitResult' has a wrong offset!");

// Function WBP_PalAim.WBP_PalAim_C.EndThrowPalMode
// 0x0001 (0x0001 - 0x0000)
struct WBP_PalAim_C_EndThrowPalMode final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalAim_C_EndThrowPalMode) == 0x000001, "Wrong alignment on WBP_PalAim_C_EndThrowPalMode");
static_assert(sizeof(WBP_PalAim_C_EndThrowPalMode) == 0x000001, "Wrong size on WBP_PalAim_C_EndThrowPalMode");
static_assert(offsetof(WBP_PalAim_C_EndThrowPalMode, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'WBP_PalAim_C_EndThrowPalMode::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_PalAim.WBP_PalAim_C.ExecuteUbergraph_WBP_PalAim
// 0x0100 (0x0100 - 0x0000)
struct WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0008(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue;              // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Divide_Vector2DFloat_ReturnValue;         // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetViewportScale_ReturnValue;             // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DVector2D_ReturnValue;    // 0x00A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x00C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x3];                                       // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetCurrentBulletBlurRate_ReturnValue;     // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EA[0x6];                                       // 0x00EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim) == 0x000008, "Wrong alignment on WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim");
static_assert(sizeof(WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim) == 0x000100, "Wrong size on WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim");
static_assert(offsetof(WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim, EntryPoint) == 0x000000, "Member 'WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim, K2Node_Event_MyGeometry) == 0x000008, "Member 'WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim, K2Node_Event_InDeltaTime) == 0x000048, "Member 'WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim, CallFunc_GetViewportSize_ReturnValue) == 0x000050, "Member 'WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim::CallFunc_GetViewportSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim, CallFunc_GetGameSetting_ReturnValue) == 0x000060, "Member 'WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim, CallFunc_Divide_Vector2DFloat_ReturnValue) == 0x000068, "Member 'WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim::CallFunc_Divide_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim, CallFunc_GetViewportScale_ReturnValue) == 0x000078, "Member 'WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim::CallFunc_GetViewportScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000080, "Member 'WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000088, "Member 'WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim, CallFunc_Multiply_Vector2DFloat_ReturnValue) == 0x000090, "Member 'WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim::CallFunc_Multiply_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim, CallFunc_Multiply_Vector2DVector2D_ReturnValue) == 0x0000A0, "Member 'WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim::CallFunc_Multiply_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim, CallFunc_GetPalmi_ReturnValue) == 0x0000B0, "Member 'WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim, CallFunc_IsValid_ReturnValue) == 0x0000B8, "Member 'WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim, CallFunc_MakeVector2D_ReturnValue) == 0x0000C0, "Member 'WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim, CallFunc_IsValid_ReturnValue_1) == 0x0000D0, "Member 'WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim, CallFunc_GetCurrentBulletBlurRate_ReturnValue) == 0x0000D4, "Member 'WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim::CallFunc_GetCurrentBulletBlurRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000D8, "Member 'WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim, CallFunc_FClamp_ReturnValue) == 0x0000E0, "Member 'WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim, CallFunc_IsValid_ReturnValue_2) == 0x0000E8, "Member 'WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim, CallFunc_BooleanOR_ReturnValue) == 0x0000E9, "Member 'WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x0000F0, "Member 'WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x0000F8, "Member 'WBP_PalAim_C_ExecuteUbergraph_WBP_PalAim::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function WBP_PalAim.WBP_PalAim_C.Get Reticle Hit Result
// 0x0290 (0x0290 - 0x0000)
struct WBP_PalAim_C_Get_Reticle_Hit_Result final
{
public:
	struct FHitResult                             HitResult;                                         // 0x0000(0x00E8)(Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TArray<class AActor*>                         IgnoreActors;                                      // 0x00E8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_GetCameraRotation_ReturnValue;            // 0x0108(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetCameraLocation_ReturnValue;            // 0x0120(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0138(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_154[0x4];                                      // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0158(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0178(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0190(0x0010)(ReferenceParm)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x01A0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalAim_C_Get_Reticle_Hit_Result) == 0x000008, "Wrong alignment on WBP_PalAim_C_Get_Reticle_Hit_Result");
static_assert(sizeof(WBP_PalAim_C_Get_Reticle_Hit_Result) == 0x000290, "Wrong size on WBP_PalAim_C_Get_Reticle_Hit_Result");
static_assert(offsetof(WBP_PalAim_C_Get_Reticle_Hit_Result, HitResult) == 0x000000, "Member 'WBP_PalAim_C_Get_Reticle_Hit_Result::HitResult' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Get_Reticle_Hit_Result, IgnoreActors) == 0x0000E8, "Member 'WBP_PalAim_C_Get_Reticle_Hit_Result::IgnoreActors' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Get_Reticle_Hit_Result, CallFunc_GetLocalPlayerController_ReturnValue) == 0x0000F8, "Member 'WBP_PalAim_C_Get_Reticle_Hit_Result::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Get_Reticle_Hit_Result, CallFunc_IsValid_ReturnValue) == 0x000100, "Member 'WBP_PalAim_C_Get_Reticle_Hit_Result::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Get_Reticle_Hit_Result, CallFunc_GetCameraRotation_ReturnValue) == 0x000108, "Member 'WBP_PalAim_C_Get_Reticle_Hit_Result::CallFunc_GetCameraRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Get_Reticle_Hit_Result, CallFunc_GetCameraLocation_ReturnValue) == 0x000120, "Member 'WBP_PalAim_C_Get_Reticle_Hit_Result::CallFunc_GetCameraLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Get_Reticle_Hit_Result, CallFunc_GetForwardVector_ReturnValue) == 0x000138, "Member 'WBP_PalAim_C_Get_Reticle_Hit_Result::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Get_Reticle_Hit_Result, CallFunc_Array_Add_ReturnValue) == 0x000150, "Member 'WBP_PalAim_C_Get_Reticle_Hit_Result::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Get_Reticle_Hit_Result, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000158, "Member 'WBP_PalAim_C_Get_Reticle_Hit_Result::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Get_Reticle_Hit_Result, CallFunc_GetPalmi_ReturnValue) == 0x000170, "Member 'WBP_PalAim_C_Get_Reticle_Hit_Result::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Get_Reticle_Hit_Result, CallFunc_Add_VectorVector_ReturnValue) == 0x000178, "Member 'WBP_PalAim_C_Get_Reticle_Hit_Result::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Get_Reticle_Hit_Result, K2Node_MakeArray_Array) == 0x000190, "Member 'WBP_PalAim_C_Get_Reticle_Hit_Result::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Get_Reticle_Hit_Result, CallFunc_LineTraceSingle_OutHit) == 0x0001A0, "Member 'WBP_PalAim_C_Get_Reticle_Hit_Result::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Get_Reticle_Hit_Result, CallFunc_LineTraceSingle_ReturnValue) == 0x000288, "Member 'WBP_PalAim_C_Get_Reticle_Hit_Result::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");

// Function WBP_PalAim.WBP_PalAim_C.GetNowSelectedOtomoParameter
// 0x0040 (0x0040 - 0x0000)
struct WBP_PalAim_C_GetNowSelectedOtomoParameter final
{
public:
	class UPalCharacterParameterComponent*        Parameter;                                         // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalOtomoHolderComponentBase*           CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSelectedOtomoID_ReturnValue;           // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetOtomoIndividualHandle_ReturnValue;     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalAim_C_GetNowSelectedOtomoParameter) == 0x000008, "Wrong alignment on WBP_PalAim_C_GetNowSelectedOtomoParameter");
static_assert(sizeof(WBP_PalAim_C_GetNowSelectedOtomoParameter) == 0x000040, "Wrong size on WBP_PalAim_C_GetNowSelectedOtomoParameter");
static_assert(offsetof(WBP_PalAim_C_GetNowSelectedOtomoParameter, Parameter) == 0x000000, "Member 'WBP_PalAim_C_GetNowSelectedOtomoParameter::Parameter' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_GetNowSelectedOtomoParameter, CallFunc_GetOtomoHolderComponent_ReturnValue) == 0x000008, "Member 'WBP_PalAim_C_GetNowSelectedOtomoParameter::CallFunc_GetOtomoHolderComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_GetNowSelectedOtomoParameter, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PalAim_C_GetNowSelectedOtomoParameter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_GetNowSelectedOtomoParameter, CallFunc_GetSelectedOtomoID_ReturnValue) == 0x000014, "Member 'WBP_PalAim_C_GetNowSelectedOtomoParameter::CallFunc_GetSelectedOtomoID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_GetNowSelectedOtomoParameter, CallFunc_GetOtomoIndividualHandle_ReturnValue) == 0x000018, "Member 'WBP_PalAim_C_GetNowSelectedOtomoParameter::CallFunc_GetOtomoIndividualHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_GetNowSelectedOtomoParameter, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000020, "Member 'WBP_PalAim_C_GetNowSelectedOtomoParameter::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_GetNowSelectedOtomoParameter, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'WBP_PalAim_C_GetNowSelectedOtomoParameter::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_GetNowSelectedOtomoParameter, CallFunc_IsValid_ReturnValue_2) == 0x000029, "Member 'WBP_PalAim_C_GetNowSelectedOtomoParameter::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_GetNowSelectedOtomoParameter, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x000030, "Member 'WBP_PalAim_C_GetNowSelectedOtomoParameter::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_GetNowSelectedOtomoParameter, CallFunc_IsValid_ReturnValue_3) == 0x000038, "Member 'WBP_PalAim_C_GetNowSelectedOtomoParameter::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function WBP_PalAim.WBP_PalAim_C.On Changed UISettings
// 0x0070 (0x0070 - 0x0000)
struct WBP_PalAim_C_On_Changed_UISettings final
{
public:
	struct FPalOptionUISettings                   PrevSettings;                                      // 0x0000(0x001C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FPalOptionUISettings                   NewSettings;                                       // 0x001C(0x001C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                          AllComplete;                                       // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable;                              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_1;                            // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_2;                            // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_3;                            // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_4;                            // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     K2Node_Select_Default;                             // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalAim_C_On_Changed_UISettings) == 0x000008, "Wrong alignment on WBP_PalAim_C_On_Changed_UISettings");
static_assert(sizeof(WBP_PalAim_C_On_Changed_UISettings) == 0x000070, "Wrong size on WBP_PalAim_C_On_Changed_UISettings");
static_assert(offsetof(WBP_PalAim_C_On_Changed_UISettings, PrevSettings) == 0x000000, "Member 'WBP_PalAim_C_On_Changed_UISettings::PrevSettings' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_On_Changed_UISettings, NewSettings) == 0x00001C, "Member 'WBP_PalAim_C_On_Changed_UISettings::NewSettings' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_On_Changed_UISettings, AllComplete) == 0x000038, "Member 'WBP_PalAim_C_On_Changed_UISettings::AllComplete' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_On_Changed_UISettings, Temp_int_Variable) == 0x00003C, "Member 'WBP_PalAim_C_On_Changed_UISettings::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_On_Changed_UISettings, Temp_object_Variable) == 0x000040, "Member 'WBP_PalAim_C_On_Changed_UISettings::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_On_Changed_UISettings, Temp_object_Variable_1) == 0x000048, "Member 'WBP_PalAim_C_On_Changed_UISettings::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_On_Changed_UISettings, Temp_object_Variable_2) == 0x000050, "Member 'WBP_PalAim_C_On_Changed_UISettings::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_On_Changed_UISettings, Temp_object_Variable_3) == 0x000058, "Member 'WBP_PalAim_C_On_Changed_UISettings::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_On_Changed_UISettings, Temp_object_Variable_4) == 0x000060, "Member 'WBP_PalAim_C_On_Changed_UISettings::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_On_Changed_UISettings, K2Node_Select_Default) == 0x000068, "Member 'WBP_PalAim_C_On_Changed_UISettings::K2Node_Select_Default' has a wrong offset!");

// Function WBP_PalAim.WBP_PalAim_C.On Dead Detail
// 0x0038 (0x0038 - 0x0000)
struct WBP_PalAim_C_On_Dead_Detail final
{
public:
	class UPalIndividualCharacterParameter*       CallFunc_GetIndividualCharacterParameterByActor_ReturnValue; // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalOtomoHolderComponentBase*           CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSelectedOtomoID_ReturnValue;           // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetOtomoIndividualHandle_ReturnValue;     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalAim_C_On_Dead_Detail) == 0x000008, "Wrong alignment on WBP_PalAim_C_On_Dead_Detail");
static_assert(sizeof(WBP_PalAim_C_On_Dead_Detail) == 0x000038, "Wrong size on WBP_PalAim_C_On_Dead_Detail");
static_assert(offsetof(WBP_PalAim_C_On_Dead_Detail, CallFunc_GetIndividualCharacterParameterByActor_ReturnValue) == 0x000000, "Member 'WBP_PalAim_C_On_Dead_Detail::CallFunc_GetIndividualCharacterParameterByActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_On_Dead_Detail, CallFunc_GetOtomoHolderComponent_ReturnValue) == 0x000008, "Member 'WBP_PalAim_C_On_Dead_Detail::CallFunc_GetOtomoHolderComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_On_Dead_Detail, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PalAim_C_On_Dead_Detail::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_On_Dead_Detail, CallFunc_GetSelectedOtomoID_ReturnValue) == 0x000014, "Member 'WBP_PalAim_C_On_Dead_Detail::CallFunc_GetSelectedOtomoID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_On_Dead_Detail, CallFunc_GetOtomoIndividualHandle_ReturnValue) == 0x000018, "Member 'WBP_PalAim_C_On_Dead_Detail::CallFunc_GetOtomoIndividualHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_On_Dead_Detail, CallFunc_IsValid_ReturnValue_1) == 0x000020, "Member 'WBP_PalAim_C_On_Dead_Detail::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_On_Dead_Detail, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000028, "Member 'WBP_PalAim_C_On_Dead_Detail::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_On_Dead_Detail, CallFunc_IsValid_ReturnValue_2) == 0x000030, "Member 'WBP_PalAim_C_On_Dead_Detail::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function WBP_PalAim.WBP_PalAim_C.OnChangedWeaon
// 0x0078 (0x0078 - 0x0000)
struct WBP_PalAim_C_OnChangedWeaon final
{
public:
	class APalWeaponBase*                         Weapon;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsGrapplingGun;                                    // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ThrowPalWeapon_C*                   K2Node_DynamicCast_AsBP_Throw_Pal_Weapon;          // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalPlayerInventoryType                       CallFunc_GetPrimaryInventoryType_ReturnValue;      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalWeaponBase*                         CallFunc_GetHasWeapon_ReturnValue;                 // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBI_PalGrapplingAimInterface_C> K2Node_DynamicCast_AsBI_Pal_Grappling_Aim_Interface; // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ThrowWeapon_Dummy_C*                K2Node_DynamicCast_AsBP_Throw_Weapon_Dummy;        // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62[0x6];                                       // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalItemIDManager*                      CallFunc_GetItemIDManager_ReturnValue;             // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalAim_C_OnChangedWeaon) == 0x000008, "Wrong alignment on WBP_PalAim_C_OnChangedWeaon");
static_assert(sizeof(WBP_PalAim_C_OnChangedWeaon) == 0x000078, "Wrong size on WBP_PalAim_C_OnChangedWeaon");
static_assert(offsetof(WBP_PalAim_C_OnChangedWeaon, Weapon) == 0x000000, "Member 'WBP_PalAim_C_OnChangedWeaon::Weapon' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_OnChangedWeaon, IsGrapplingGun) == 0x000008, "Member 'WBP_PalAim_C_OnChangedWeaon::IsGrapplingGun' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_OnChangedWeaon, K2Node_DynamicCast_AsBP_Throw_Pal_Weapon) == 0x000010, "Member 'WBP_PalAim_C_OnChangedWeaon::K2Node_DynamicCast_AsBP_Throw_Pal_Weapon' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_OnChangedWeaon, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_PalAim_C_OnChangedWeaon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_OnChangedWeaon, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'WBP_PalAim_C_OnChangedWeaon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_OnChangedWeaon, CallFunc_GetPalmi_ReturnValue) == 0x000020, "Member 'WBP_PalAim_C_OnChangedWeaon::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_OnChangedWeaon, CallFunc_GetPrimaryInventoryType_ReturnValue) == 0x000028, "Member 'WBP_PalAim_C_OnChangedWeaon::CallFunc_GetPrimaryInventoryType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_OnChangedWeaon, CallFunc_GetHasWeapon_ReturnValue) == 0x000030, "Member 'WBP_PalAim_C_OnChangedWeaon::CallFunc_GetHasWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_OnChangedWeaon, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000038, "Member 'WBP_PalAim_C_OnChangedWeaon::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_OnChangedWeaon, K2Node_DynamicCast_AsBI_Pal_Grappling_Aim_Interface) == 0x000040, "Member 'WBP_PalAim_C_OnChangedWeaon::K2Node_DynamicCast_AsBI_Pal_Grappling_Aim_Interface' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_OnChangedWeaon, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'WBP_PalAim_C_OnChangedWeaon::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_OnChangedWeaon, K2Node_DynamicCast_AsBP_Throw_Weapon_Dummy) == 0x000058, "Member 'WBP_PalAim_C_OnChangedWeaon::K2Node_DynamicCast_AsBP_Throw_Weapon_Dummy' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_OnChangedWeaon, K2Node_DynamicCast_bSuccess_2) == 0x000060, "Member 'WBP_PalAim_C_OnChangedWeaon::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_OnChangedWeaon, CallFunc_IsValid_ReturnValue_1) == 0x000061, "Member 'WBP_PalAim_C_OnChangedWeaon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_OnChangedWeaon, CallFunc_GetItemIDManager_ReturnValue) == 0x000068, "Member 'WBP_PalAim_C_OnChangedWeaon::CallFunc_GetItemIDManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_OnChangedWeaon, CallFunc_IsValid_ReturnValue_2) == 0x000070, "Member 'WBP_PalAim_C_OnChangedWeaon::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function WBP_PalAim.WBP_PalAim_C.OnEndLiftCampPal
// 0x0001 (0x0001 - 0x0000)
struct WBP_PalAim_C_OnEndLiftCampPal final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalAim_C_OnEndLiftCampPal) == 0x000001, "Wrong alignment on WBP_PalAim_C_OnEndLiftCampPal");
static_assert(sizeof(WBP_PalAim_C_OnEndLiftCampPal) == 0x000001, "Wrong size on WBP_PalAim_C_OnEndLiftCampPal");
static_assert(offsetof(WBP_PalAim_C_OnEndLiftCampPal, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'WBP_PalAim_C_OnEndLiftCampPal::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_PalAim.WBP_PalAim_C.OnLiftCampPal
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalAim_C_OnLiftCampPal final
{
public:
	class APalCharacter*                          TargetCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalAim_C_OnLiftCampPal) == 0x000008, "Wrong alignment on WBP_PalAim_C_OnLiftCampPal");
static_assert(sizeof(WBP_PalAim_C_OnLiftCampPal) == 0x000010, "Wrong size on WBP_PalAim_C_OnLiftCampPal");
static_assert(offsetof(WBP_PalAim_C_OnLiftCampPal, TargetCharacter) == 0x000000, "Member 'WBP_PalAim_C_OnLiftCampPal::TargetCharacter' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_OnLiftCampPal, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_PalAim_C_OnLiftCampPal::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_PalAim.WBP_PalAim_C.Raycast Reticle Direction Body
// 0x01D0 (0x01D0 - 0x0000)
struct WBP_PalAim_C_Raycast_Reticle_Direction_Body final
{
public:
	struct FHitResult                             ReticleHitResult;                                  // 0x0000(0x00E8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_Get_Reticle_Hit_Result_hitResult;         // 0x00E8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(WBP_PalAim_C_Raycast_Reticle_Direction_Body) == 0x000008, "Wrong alignment on WBP_PalAim_C_Raycast_Reticle_Direction_Body");
static_assert(sizeof(WBP_PalAim_C_Raycast_Reticle_Direction_Body) == 0x0001D0, "Wrong size on WBP_PalAim_C_Raycast_Reticle_Direction_Body");
static_assert(offsetof(WBP_PalAim_C_Raycast_Reticle_Direction_Body, ReticleHitResult) == 0x000000, "Member 'WBP_PalAim_C_Raycast_Reticle_Direction_Body::ReticleHitResult' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Raycast_Reticle_Direction_Body, CallFunc_Get_Reticle_Hit_Result_hitResult) == 0x0000E8, "Member 'WBP_PalAim_C_Raycast_Reticle_Direction_Body::CallFunc_Get_Reticle_Hit_Result_hitResult' has a wrong offset!");

// Function WBP_PalAim.WBP_PalAim_C.SetGrapplingReticleVisible
// 0x0005 (0x0005 - 0x0000)
struct WBP_PalAim_C_SetGrapplingReticleVisible final
{
public:
	bool                                          IsVisible_0;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalAim_C_SetGrapplingReticleVisible) == 0x000001, "Wrong alignment on WBP_PalAim_C_SetGrapplingReticleVisible");
static_assert(sizeof(WBP_PalAim_C_SetGrapplingReticleVisible) == 0x000005, "Wrong size on WBP_PalAim_C_SetGrapplingReticleVisible");
static_assert(offsetof(WBP_PalAim_C_SetGrapplingReticleVisible, IsVisible_0) == 0x000000, "Member 'WBP_PalAim_C_SetGrapplingReticleVisible::IsVisible_0' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_SetGrapplingReticleVisible, Temp_bool_Variable) == 0x000001, "Member 'WBP_PalAim_C_SetGrapplingReticleVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_SetGrapplingReticleVisible, Temp_byte_Variable) == 0x000002, "Member 'WBP_PalAim_C_SetGrapplingReticleVisible::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_SetGrapplingReticleVisible, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_PalAim_C_SetGrapplingReticleVisible::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_SetGrapplingReticleVisible, K2Node_Select_Default) == 0x000004, "Member 'WBP_PalAim_C_SetGrapplingReticleVisible::K2Node_Select_Default' has a wrong offset!");

// Function WBP_PalAim.WBP_PalAim_C.Setup_AfterCreatedPlayer
// 0x00A8 (0x00A8 - 0x0000)
struct WBP_PalAim_C_Setup_AfterCreatedPlayer final
{
public:
	TDelegate<void(struct FPalOptionUISettings& PrevSettings, struct FPalOptionUISettings& NewSettings)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalOptionSubsystem*                    CallFunc_GetOptionSubsystem_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalOptionUISettings                   CallFunc_GetUISettings_ReturnValue;                // 0x002C(0x001C)(ConstParm, NoDestructor)
	TDelegate<void(class APalCharacter* LiftingPal)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0058(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalOtomoHolderComponentBase*           CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_OtomoPalHolderComponent_C*          K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component; // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class APalWeaponBase* Weapon)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0084(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalAim_C_Setup_AfterCreatedPlayer) == 0x000008, "Wrong alignment on WBP_PalAim_C_Setup_AfterCreatedPlayer");
static_assert(sizeof(WBP_PalAim_C_Setup_AfterCreatedPlayer) == 0x0000A8, "Wrong size on WBP_PalAim_C_Setup_AfterCreatedPlayer");
static_assert(offsetof(WBP_PalAim_C_Setup_AfterCreatedPlayer, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_PalAim_C_Setup_AfterCreatedPlayer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Setup_AfterCreatedPlayer, CallFunc_GetOptionSubsystem_ReturnValue) == 0x000010, "Member 'WBP_PalAim_C_Setup_AfterCreatedPlayer::CallFunc_GetOptionSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Setup_AfterCreatedPlayer, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'WBP_PalAim_C_Setup_AfterCreatedPlayer::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Setup_AfterCreatedPlayer, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'WBP_PalAim_C_Setup_AfterCreatedPlayer::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Setup_AfterCreatedPlayer, CallFunc_GetUISettings_ReturnValue) == 0x00002C, "Member 'WBP_PalAim_C_Setup_AfterCreatedPlayer::CallFunc_GetUISettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Setup_AfterCreatedPlayer, K2Node_CreateDelegate_OutputDelegate_2) == 0x000048, "Member 'WBP_PalAim_C_Setup_AfterCreatedPlayer::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Setup_AfterCreatedPlayer, K2Node_CreateDelegate_OutputDelegate_3) == 0x000058, "Member 'WBP_PalAim_C_Setup_AfterCreatedPlayer::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Setup_AfterCreatedPlayer, CallFunc_GetOtomoHolderComponent_ReturnValue) == 0x000068, "Member 'WBP_PalAim_C_Setup_AfterCreatedPlayer::CallFunc_GetOtomoHolderComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Setup_AfterCreatedPlayer, CallFunc_IsValid_ReturnValue_1) == 0x000070, "Member 'WBP_PalAim_C_Setup_AfterCreatedPlayer::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Setup_AfterCreatedPlayer, K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component) == 0x000078, "Member 'WBP_PalAim_C_Setup_AfterCreatedPlayer::K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Setup_AfterCreatedPlayer, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'WBP_PalAim_C_Setup_AfterCreatedPlayer::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Setup_AfterCreatedPlayer, K2Node_CreateDelegate_OutputDelegate_4) == 0x000084, "Member 'WBP_PalAim_C_Setup_AfterCreatedPlayer::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Setup_AfterCreatedPlayer, CallFunc_GetPalmi_ReturnValue) == 0x000098, "Member 'WBP_PalAim_C_Setup_AfterCreatedPlayer::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Setup_AfterCreatedPlayer, CallFunc_IsValid_ReturnValue_2) == 0x0000A0, "Member 'WBP_PalAim_C_Setup_AfterCreatedPlayer::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Setup_AfterCreatedPlayer, CallFunc_IsValid_ReturnValue_3) == 0x0000A1, "Member 'WBP_PalAim_C_Setup_AfterCreatedPlayer::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function WBP_PalAim.WBP_PalAim_C.Show Assignable Throwing Pal
// 0x0148 (0x0148 - 0x0000)
struct WBP_PalAim_C_Show_Assignable_Throwing_Pal final
{
public:
	struct FHitResult                             HitResult;                                         // 0x0000(0x00E8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FPalUIAimReticleMapObjectThrowableData TempThrowableData;                                 // 0x00E8(0x0010)(Edit, BlueprintVisible, NoDestructor)
	bool                                          ShowPalReticle;                                    // 0x00F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F9[0x3];                                       // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalUIAimReticleMapObjectAssignableData TempAssignableData;                                // 0x00FC(0x000C)(Edit, BlueprintVisible, NoDestructor)
	struct FPalUIAimReticleMapObjectThrowableData CallFunc_IsThrowableToHitResult_outThrowableData;  // 0x0108(0x0010)(NoDestructor)
	struct FPalUIAimReticleMapObjectAssignableData CallFunc_IsAssignableToHitResult_outAssignableData; // 0x0118(0x000C)(NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0125(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_126[0x2];                                      // 0x0126(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetNowSelectedOtomoParameter_parameter;   // 0x0128(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_131[0x3];                                      // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalUIAimReticleMapObjectAssignableData CallFunc_IsAssignableToHitResult_outAssignableData_1; // 0x0134(0x000C)(NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalAim_C_Show_Assignable_Throwing_Pal) == 0x000008, "Wrong alignment on WBP_PalAim_C_Show_Assignable_Throwing_Pal");
static_assert(sizeof(WBP_PalAim_C_Show_Assignable_Throwing_Pal) == 0x000148, "Wrong size on WBP_PalAim_C_Show_Assignable_Throwing_Pal");
static_assert(offsetof(WBP_PalAim_C_Show_Assignable_Throwing_Pal, HitResult) == 0x000000, "Member 'WBP_PalAim_C_Show_Assignable_Throwing_Pal::HitResult' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Show_Assignable_Throwing_Pal, TempThrowableData) == 0x0000E8, "Member 'WBP_PalAim_C_Show_Assignable_Throwing_Pal::TempThrowableData' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Show_Assignable_Throwing_Pal, ShowPalReticle) == 0x0000F8, "Member 'WBP_PalAim_C_Show_Assignable_Throwing_Pal::ShowPalReticle' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Show_Assignable_Throwing_Pal, TempAssignableData) == 0x0000FC, "Member 'WBP_PalAim_C_Show_Assignable_Throwing_Pal::TempAssignableData' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Show_Assignable_Throwing_Pal, CallFunc_IsThrowableToHitResult_outThrowableData) == 0x000108, "Member 'WBP_PalAim_C_Show_Assignable_Throwing_Pal::CallFunc_IsThrowableToHitResult_outThrowableData' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Show_Assignable_Throwing_Pal, CallFunc_IsAssignableToHitResult_outAssignableData) == 0x000118, "Member 'WBP_PalAim_C_Show_Assignable_Throwing_Pal::CallFunc_IsAssignableToHitResult_outAssignableData' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Show_Assignable_Throwing_Pal, CallFunc_NotEqual_NameName_ReturnValue) == 0x000124, "Member 'WBP_PalAim_C_Show_Assignable_Throwing_Pal::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Show_Assignable_Throwing_Pal, CallFunc_IsValid_ReturnValue) == 0x000125, "Member 'WBP_PalAim_C_Show_Assignable_Throwing_Pal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Show_Assignable_Throwing_Pal, CallFunc_GetNowSelectedOtomoParameter_parameter) == 0x000128, "Member 'WBP_PalAim_C_Show_Assignable_Throwing_Pal::CallFunc_GetNowSelectedOtomoParameter_parameter' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Show_Assignable_Throwing_Pal, CallFunc_IsValid_ReturnValue_1) == 0x000130, "Member 'WBP_PalAim_C_Show_Assignable_Throwing_Pal::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Show_Assignable_Throwing_Pal, CallFunc_IsAssignableToHitResult_outAssignableData_1) == 0x000134, "Member 'WBP_PalAim_C_Show_Assignable_Throwing_Pal::CallFunc_IsAssignableToHitResult_outAssignableData_1' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Show_Assignable_Throwing_Pal, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000140, "Member 'WBP_PalAim_C_Show_Assignable_Throwing_Pal::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");

// Function WBP_PalAim.WBP_PalAim_C.StartThrowPalMode
// 0x0018 (0x0018 - 0x0000)
struct WBP_PalAim_C_StartThrowPalMode final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalOtomoHolderComponentBase*           CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsALLEmpty_ReturnValue;                   // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalAim_C_StartThrowPalMode) == 0x000008, "Wrong alignment on WBP_PalAim_C_StartThrowPalMode");
static_assert(sizeof(WBP_PalAim_C_StartThrowPalMode) == 0x000018, "Wrong size on WBP_PalAim_C_StartThrowPalMode");
static_assert(offsetof(WBP_PalAim_C_StartThrowPalMode, Temp_bool_Variable) == 0x000000, "Member 'WBP_PalAim_C_StartThrowPalMode::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_StartThrowPalMode, Temp_byte_Variable) == 0x000001, "Member 'WBP_PalAim_C_StartThrowPalMode::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_StartThrowPalMode, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_PalAim_C_StartThrowPalMode::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_StartThrowPalMode, CallFunc_GetOtomoHolderComponent_ReturnValue) == 0x000008, "Member 'WBP_PalAim_C_StartThrowPalMode::CallFunc_GetOtomoHolderComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_StartThrowPalMode, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PalAim_C_StartThrowPalMode::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_StartThrowPalMode, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'WBP_PalAim_C_StartThrowPalMode::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_StartThrowPalMode, CallFunc_IsALLEmpty_ReturnValue) == 0x000012, "Member 'WBP_PalAim_C_StartThrowPalMode::CallFunc_IsALLEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_StartThrowPalMode, K2Node_Select_Default) == 0x000013, "Member 'WBP_PalAim_C_StartThrowPalMode::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_StartThrowPalMode, CallFunc_BooleanOR_ReturnValue) == 0x000014, "Member 'WBP_PalAim_C_StartThrowPalMode::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function WBP_PalAim.WBP_PalAim_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_PalAim_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalAim_C_Tick) == 0x000008, "Wrong alignment on WBP_PalAim_C_Tick");
static_assert(sizeof(WBP_PalAim_C_Tick) == 0x000048, "Wrong size on WBP_PalAim_C_Tick");
static_assert(offsetof(WBP_PalAim_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_PalAim_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_PalAim_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_PalAim.WBP_PalAim_C.UpdateGrapplingReticle
// 0x0018 (0x0018 - 0x0000)
struct WBP_PalAim_C_UpdateGrapplingReticle final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsShowReticle_IsShow;                     // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalAim_C_UpdateGrapplingReticle) == 0x000008, "Wrong alignment on WBP_PalAim_C_UpdateGrapplingReticle");
static_assert(sizeof(WBP_PalAim_C_UpdateGrapplingReticle) == 0x000018, "Wrong size on WBP_PalAim_C_UpdateGrapplingReticle");
static_assert(offsetof(WBP_PalAim_C_UpdateGrapplingReticle, Temp_bool_Variable) == 0x000000, "Member 'WBP_PalAim_C_UpdateGrapplingReticle::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_UpdateGrapplingReticle, Temp_byte_Variable) == 0x000001, "Member 'WBP_PalAim_C_UpdateGrapplingReticle::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_UpdateGrapplingReticle, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_PalAim_C_UpdateGrapplingReticle::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_UpdateGrapplingReticle, CallFunc_IsShowReticle_IsShow) == 0x000003, "Member 'WBP_PalAim_C_UpdateGrapplingReticle::CallFunc_IsShowReticle_IsShow' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_UpdateGrapplingReticle, K2Node_Select_Default) == 0x000004, "Member 'WBP_PalAim_C_UpdateGrapplingReticle::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_UpdateGrapplingReticle, CallFunc_Conv_InterfaceToObject_ReturnValue) == 0x000008, "Member 'WBP_PalAim_C_UpdateGrapplingReticle::CallFunc_Conv_InterfaceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalAim_C_UpdateGrapplingReticle, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PalAim_C_UpdateGrapplingReticle::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

