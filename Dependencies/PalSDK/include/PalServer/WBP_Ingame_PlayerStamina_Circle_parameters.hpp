#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace PalServer::Params
{

// Function WBP_Ingame_PlayerStamina_Circle.WBP_Ingame_PlayerStamina_Circle_C.ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle
// 0x0170 (0x0170 - 0x0000)
struct WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0028(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_2;         // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_3;         // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Abs_ReturnValue;                          // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_2;      // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMin_ReturnValue;                         // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMax_ReturnValue;                         // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMax_ReturnValue_1;                       // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_3;      // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMax_ReturnValue_2;                       // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_4;      // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMax_ReturnValue_3;                       // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12A[0x2];                                      // 0x012A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result_1;  // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1; // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14A[0x6];                                      // 0x014A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1; // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_A_ImplicitCast;               // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_CreatePlayAnimationProxyObject_StartAtTime_ImplicitCast; // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle");
static_assert(sizeof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle) == 0x000170, "Wrong size on WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, EntryPoint) == 0x000000, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, K2Node_Event_MyGeometry) == 0x000028, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, K2Node_Event_InDeltaTime) == 0x000068, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000070, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000078, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000080, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_GetDynamicMaterial_ReturnValue_2) == 0x000088, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_GetDynamicMaterial_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_GetDynamicMaterial_ReturnValue_3) == 0x000090, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_GetDynamicMaterial_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_PlayAnimation_ReturnValue) == 0x000098, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0000A0, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_Less_DoubleDouble_ReturnValue) == 0x0000A8, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_Abs_ReturnValue) == 0x0000B0, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000B8, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x0000C0, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x0000C8, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_Subtract_DoubleDouble_ReturnValue_2) == 0x0000D0, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_Subtract_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_FMin_ReturnValue) == 0x0000D8, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_FMax_ReturnValue) == 0x0000E0, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_FMax_ReturnValue_1) == 0x0000E8, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_FMax_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_Subtract_DoubleDouble_ReturnValue_3) == 0x0000F0, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_Subtract_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_FMax_ReturnValue_2) == 0x0000F8, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_FMax_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_Subtract_DoubleDouble_ReturnValue_4) == 0x000100, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_Subtract_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_FMax_ReturnValue_3) == 0x000108, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_FMax_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_PlayAnimation_ReturnValue_1) == 0x000110, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000118, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000120, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_IsValid_ReturnValue) == 0x000128, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000129, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x00012C, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_SelectFloat_ReturnValue) == 0x000130, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_CreatePlayAnimationProxyObject_Result_1) == 0x000138, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_CreatePlayAnimationProxyObject_Result_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1) == 0x000140, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_IsValid_ReturnValue_1) == 0x000148, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_IsVisible_ReturnValue) == 0x000149, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000150, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000158, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x00015C, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_SelectFloat_A_ImplicitCast) == 0x000160, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_SelectFloat_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle, CallFunc_CreatePlayAnimationProxyObject_StartAtTime_ImplicitCast) == 0x000168, "Member 'WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle::CallFunc_CreatePlayAnimationProxyObject_StartAtTime_ImplicitCast' has a wrong offset!");

// Function WBP_Ingame_PlayerStamina_Circle.WBP_Ingame_PlayerStamina_Circle_C.GetChachedSPPercent
// 0x0008 (0x0008 - 0x0000)
struct WBP_Ingame_PlayerStamina_Circle_C_GetChachedSPPercent final
{
public:
	double                                        Percent;                                           // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerStamina_Circle_C_GetChachedSPPercent) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerStamina_Circle_C_GetChachedSPPercent");
static_assert(sizeof(WBP_Ingame_PlayerStamina_Circle_C_GetChachedSPPercent) == 0x000008, "Wrong size on WBP_Ingame_PlayerStamina_Circle_C_GetChachedSPPercent");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_GetChachedSPPercent, Percent) == 0x000000, "Member 'WBP_Ingame_PlayerStamina_Circle_C_GetChachedSPPercent::Percent' has a wrong offset!");

// Function WBP_Ingame_PlayerStamina_Circle.WBP_Ingame_PlayerStamina_Circle_C.SetOtomoMarkVisible
// 0x0001 (0x0001 - 0x0000)
struct WBP_Ingame_PlayerStamina_Circle_C_SetOtomoMarkVisible final
{
public:
	bool                                          IsVisible_0;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerStamina_Circle_C_SetOtomoMarkVisible) == 0x000001, "Wrong alignment on WBP_Ingame_PlayerStamina_Circle_C_SetOtomoMarkVisible");
static_assert(sizeof(WBP_Ingame_PlayerStamina_Circle_C_SetOtomoMarkVisible) == 0x000001, "Wrong size on WBP_Ingame_PlayerStamina_Circle_C_SetOtomoMarkVisible");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_SetOtomoMarkVisible, IsVisible_0) == 0x000000, "Member 'WBP_Ingame_PlayerStamina_Circle_C_SetOtomoMarkVisible::IsVisible_0' has a wrong offset!");

// Function WBP_Ingame_PlayerStamina_Circle.WBP_Ingame_PlayerStamina_Circle_C.SetPercent
// 0x0018 (0x0018 - 0x0000)
struct WBP_Ingame_PlayerStamina_Circle_C_SetPercent final
{
public:
	double                                        Percent;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOverHeated;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B[0x1];                                        // 0x000B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1; // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerStamina_Circle_C_SetPercent) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerStamina_Circle_C_SetPercent");
static_assert(sizeof(WBP_Ingame_PlayerStamina_Circle_C_SetPercent) == 0x000018, "Wrong size on WBP_Ingame_PlayerStamina_Circle_C_SetPercent");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_SetPercent, Percent) == 0x000000, "Member 'WBP_Ingame_PlayerStamina_Circle_C_SetPercent::Percent' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_SetPercent, IsOverHeated) == 0x000008, "Member 'WBP_Ingame_PlayerStamina_Circle_C_SetPercent::IsOverHeated' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_SetPercent, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000009, "Member 'WBP_Ingame_PlayerStamina_Circle_C_SetPercent::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_SetPercent, CallFunc_Less_DoubleDouble_ReturnValue_1) == 0x00000A, "Member 'WBP_Ingame_PlayerStamina_Circle_C_SetPercent::CallFunc_Less_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_SetPercent, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x00000C, "Member 'WBP_Ingame_PlayerStamina_Circle_C_SetPercent::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_SetPercent, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x000010, "Member 'WBP_Ingame_PlayerStamina_Circle_C_SetPercent::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");

// Function WBP_Ingame_PlayerStamina_Circle.WBP_Ingame_PlayerStamina_Circle_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_Ingame_PlayerStamina_Circle_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerStamina_Circle_C_Tick) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerStamina_Circle_C_Tick");
static_assert(sizeof(WBP_Ingame_PlayerStamina_Circle_C_Tick) == 0x000048, "Wrong size on WBP_Ingame_PlayerStamina_Circle_C_Tick");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_Ingame_PlayerStamina_Circle_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerStamina_Circle_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_Ingame_PlayerStamina_Circle_C_Tick::InDeltaTime' has a wrong offset!");

}

