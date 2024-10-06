#pragma once

#include "Basic.hpp"


namespace PalServer::Params
{

// Function BP_PalFirePointLightComponent.BP_PalFirePointLightComponent_C.CacheAndClearIntensity
// 0x0008 (0x0008 - 0x0000)
struct BP_PalFirePointLightComponent_C_CacheAndClearIntensity final
{
public:
	double                                        K2Node_VariableSet_MaxIntensityCache_ImplicitCast; // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalFirePointLightComponent_C_CacheAndClearIntensity) == 0x000008, "Wrong alignment on BP_PalFirePointLightComponent_C_CacheAndClearIntensity");
static_assert(sizeof(BP_PalFirePointLightComponent_C_CacheAndClearIntensity) == 0x000008, "Wrong size on BP_PalFirePointLightComponent_C_CacheAndClearIntensity");
static_assert(offsetof(BP_PalFirePointLightComponent_C_CacheAndClearIntensity, K2Node_VariableSet_MaxIntensityCache_ImplicitCast) == 0x000000, "Member 'BP_PalFirePointLightComponent_C_CacheAndClearIntensity::K2Node_VariableSet_MaxIntensityCache_ImplicitCast' has a wrong offset!");

// Function BP_PalFirePointLightComponent.BP_PalFirePointLightComponent_C.ExecuteUbergraph_BP_PalFirePointLightComponent
// 0x0038 (0x0038 - 0x0000)
struct BP_PalFirePointLightComponent_C_ExecuteUbergraph_BP_PalFirePointLightComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetCurrentProgressCurveValue_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetIntensity_NewIntensity_ImplicitCast;   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalFirePointLightComponent_C_ExecuteUbergraph_BP_PalFirePointLightComponent) == 0x000008, "Wrong alignment on BP_PalFirePointLightComponent_C_ExecuteUbergraph_BP_PalFirePointLightComponent");
static_assert(sizeof(BP_PalFirePointLightComponent_C_ExecuteUbergraph_BP_PalFirePointLightComponent) == 0x000038, "Wrong size on BP_PalFirePointLightComponent_C_ExecuteUbergraph_BP_PalFirePointLightComponent");
static_assert(offsetof(BP_PalFirePointLightComponent_C_ExecuteUbergraph_BP_PalFirePointLightComponent, EntryPoint) == 0x000000, "Member 'BP_PalFirePointLightComponent_C_ExecuteUbergraph_BP_PalFirePointLightComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PalFirePointLightComponent_C_ExecuteUbergraph_BP_PalFirePointLightComponent, CallFunc_GetCurrentProgressCurveValue_ReturnValue) == 0x000008, "Member 'BP_PalFirePointLightComponent_C_ExecuteUbergraph_BP_PalFirePointLightComponent::CallFunc_GetCurrentProgressCurveValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalFirePointLightComponent_C_ExecuteUbergraph_BP_PalFirePointLightComponent, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000010, "Member 'BP_PalFirePointLightComponent_C_ExecuteUbergraph_BP_PalFirePointLightComponent::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalFirePointLightComponent_C_ExecuteUbergraph_BP_PalFirePointLightComponent, K2Node_Event_DeltaSeconds) == 0x000018, "Member 'BP_PalFirePointLightComponent_C_ExecuteUbergraph_BP_PalFirePointLightComponent::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_PalFirePointLightComponent_C_ExecuteUbergraph_BP_PalFirePointLightComponent, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000020, "Member 'BP_PalFirePointLightComponent_C_ExecuteUbergraph_BP_PalFirePointLightComponent::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalFirePointLightComponent_C_ExecuteUbergraph_BP_PalFirePointLightComponent, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000028, "Member 'BP_PalFirePointLightComponent_C_ExecuteUbergraph_BP_PalFirePointLightComponent::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalFirePointLightComponent_C_ExecuteUbergraph_BP_PalFirePointLightComponent, CallFunc_SetIntensity_NewIntensity_ImplicitCast) == 0x00002C, "Member 'BP_PalFirePointLightComponent_C_ExecuteUbergraph_BP_PalFirePointLightComponent::CallFunc_SetIntensity_NewIntensity_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalFirePointLightComponent_C_ExecuteUbergraph_BP_PalFirePointLightComponent, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000030, "Member 'BP_PalFirePointLightComponent_C_ExecuteUbergraph_BP_PalFirePointLightComponent::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_PalFirePointLightComponent.BP_PalFirePointLightComponent_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_PalFirePointLightComponent_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalFirePointLightComponent_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_PalFirePointLightComponent_C_ReceiveTick");
static_assert(sizeof(BP_PalFirePointLightComponent_C_ReceiveTick) == 0x000004, "Wrong size on BP_PalFirePointLightComponent_C_ReceiveTick");
static_assert(offsetof(BP_PalFirePointLightComponent_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_PalFirePointLightComponent_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_PalFirePointLightComponent.BP_PalFirePointLightComponent_C.ResetBlinkDuration
// 0x0018 (0x0018 - 0x0000)
struct BP_PalFirePointLightComponent_C_ResetBlinkDuration final
{
public:
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_Min_ImplicitCast;      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_Max_ImplicitCast;      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalFirePointLightComponent_C_ResetBlinkDuration) == 0x000008, "Wrong alignment on BP_PalFirePointLightComponent_C_ResetBlinkDuration");
static_assert(sizeof(BP_PalFirePointLightComponent_C_ResetBlinkDuration) == 0x000018, "Wrong size on BP_PalFirePointLightComponent_C_ResetBlinkDuration");
static_assert(offsetof(BP_PalFirePointLightComponent_C_ResetBlinkDuration, CallFunc_RandomFloatInRange_ReturnValue) == 0x000000, "Member 'BP_PalFirePointLightComponent_C_ResetBlinkDuration::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalFirePointLightComponent_C_ResetBlinkDuration, CallFunc_RandomFloatInRange_Min_ImplicitCast) == 0x000008, "Member 'BP_PalFirePointLightComponent_C_ResetBlinkDuration::CallFunc_RandomFloatInRange_Min_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalFirePointLightComponent_C_ResetBlinkDuration, CallFunc_RandomFloatInRange_Max_ImplicitCast) == 0x000010, "Member 'BP_PalFirePointLightComponent_C_ResetBlinkDuration::CallFunc_RandomFloatInRange_Max_ImplicitCast' has a wrong offset!");

// Function BP_PalFirePointLightComponent.BP_PalFirePointLightComponent_C.GetCurrentProgressCurveValue
// 0x0030 (0x0030 - 0x0000)
struct BP_PalFirePointLightComponent_C_GetCurrentProgressCurveValue final
{
public:
	double                                        ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast;        // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalFirePointLightComponent_C_GetCurrentProgressCurveValue) == 0x000008, "Wrong alignment on BP_PalFirePointLightComponent_C_GetCurrentProgressCurveValue");
static_assert(sizeof(BP_PalFirePointLightComponent_C_GetCurrentProgressCurveValue) == 0x000030, "Wrong size on BP_PalFirePointLightComponent_C_GetCurrentProgressCurveValue");
static_assert(offsetof(BP_PalFirePointLightComponent_C_GetCurrentProgressCurveValue, ReturnValue) == 0x000000, "Member 'BP_PalFirePointLightComponent_C_GetCurrentProgressCurveValue::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalFirePointLightComponent_C_GetCurrentProgressCurveValue, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000008, "Member 'BP_PalFirePointLightComponent_C_GetCurrentProgressCurveValue::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalFirePointLightComponent_C_GetCurrentProgressCurveValue, CallFunc_FClamp_ReturnValue) == 0x000010, "Member 'BP_PalFirePointLightComponent_C_GetCurrentProgressCurveValue::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalFirePointLightComponent_C_GetCurrentProgressCurveValue, CallFunc_GetFloatValue_ReturnValue) == 0x000018, "Member 'BP_PalFirePointLightComponent_C_GetCurrentProgressCurveValue::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalFirePointLightComponent_C_GetCurrentProgressCurveValue, K2Node_FunctionResult_ReturnValue_ImplicitCast) == 0x000020, "Member 'BP_PalFirePointLightComponent_C_GetCurrentProgressCurveValue::K2Node_FunctionResult_ReturnValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalFirePointLightComponent_C_GetCurrentProgressCurveValue, CallFunc_GetFloatValue_InTime_ImplicitCast) == 0x000028, "Member 'BP_PalFirePointLightComponent_C_GetCurrentProgressCurveValue::CallFunc_GetFloatValue_InTime_ImplicitCast' has a wrong offset!");

}

