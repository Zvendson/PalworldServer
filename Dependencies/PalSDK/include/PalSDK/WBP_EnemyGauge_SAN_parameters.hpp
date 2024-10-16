#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_EnemyGauge_SAN.WBP_EnemyGauge_SAN_C.ExecuteUbergraph_WBP_EnemyGauge_SAN
// 0x0010 (0x0010 - 0x0000)
struct WBP_EnemyGauge_SAN_C_ExecuteUbergraph_WBP_EnemyGauge_SAN final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EnemyGauge_SAN_C_ExecuteUbergraph_WBP_EnemyGauge_SAN) == 0x000008, "Wrong alignment on WBP_EnemyGauge_SAN_C_ExecuteUbergraph_WBP_EnemyGauge_SAN");
static_assert(sizeof(WBP_EnemyGauge_SAN_C_ExecuteUbergraph_WBP_EnemyGauge_SAN) == 0x000010, "Wrong size on WBP_EnemyGauge_SAN_C_ExecuteUbergraph_WBP_EnemyGauge_SAN");
static_assert(offsetof(WBP_EnemyGauge_SAN_C_ExecuteUbergraph_WBP_EnemyGauge_SAN, EntryPoint) == 0x000000, "Member 'WBP_EnemyGauge_SAN_C_ExecuteUbergraph_WBP_EnemyGauge_SAN::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_SAN_C_ExecuteUbergraph_WBP_EnemyGauge_SAN, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'WBP_EnemyGauge_SAN_C_ExecuteUbergraph_WBP_EnemyGauge_SAN::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function WBP_EnemyGauge_SAN.WBP_EnemyGauge_SAN_C.SetSanityValue
// 0x0038 (0x0038 - 0x0000)
struct WBP_EnemyGauge_SAN_C_SetSanityValue final
{
public:
	double                                        NowSanityValue;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxSanityValue;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EnemyGauge_SAN_C_SetSanityValue) == 0x000008, "Wrong alignment on WBP_EnemyGauge_SAN_C_SetSanityValue");
static_assert(sizeof(WBP_EnemyGauge_SAN_C_SetSanityValue) == 0x000038, "Wrong size on WBP_EnemyGauge_SAN_C_SetSanityValue");
static_assert(offsetof(WBP_EnemyGauge_SAN_C_SetSanityValue, NowSanityValue) == 0x000000, "Member 'WBP_EnemyGauge_SAN_C_SetSanityValue::NowSanityValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_SAN_C_SetSanityValue, MaxSanityValue) == 0x000008, "Member 'WBP_EnemyGauge_SAN_C_SetSanityValue::MaxSanityValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_SAN_C_SetSanityValue, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000010, "Member 'WBP_EnemyGauge_SAN_C_SetSanityValue::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_SAN_C_SetSanityValue, CallFunc_FTrunc_ReturnValue) == 0x000018, "Member 'WBP_EnemyGauge_SAN_C_SetSanityValue::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_SAN_C_SetSanityValue, CallFunc_Less_DoubleDouble_ReturnValue) == 0x00001C, "Member 'WBP_EnemyGauge_SAN_C_SetSanityValue::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_SAN_C_SetSanityValue, CallFunc_FTrunc_ReturnValue_1) == 0x000020, "Member 'WBP_EnemyGauge_SAN_C_SetSanityValue::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_SAN_C_SetSanityValue, CallFunc_SelectColor_ReturnValue) == 0x000024, "Member 'WBP_EnemyGauge_SAN_C_SetSanityValue::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_SAN_C_SetSanityValue, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000034, "Member 'WBP_EnemyGauge_SAN_C_SetSanityValue::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

}

