#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace PalServer::Params
{

// Function WBP_PlayerInventoryWeightInfo.WBP_PlayerInventoryWeightInfo_C.CREATEDELEGATE_PROXYFUNCTION_0
// 0x0010 (0x0010 - 0x0000)
struct WBP_PlayerInventoryWeightInfo_C_CREATEDELEGATE_PROXYFUNCTION_0 final
{
public:
	float                                         ChangedWeight;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_OnUpdateCurrentWeightBuff_ChangedCurrentWeight_ImplicitCast; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerInventoryWeightInfo_C_CREATEDELEGATE_PROXYFUNCTION_0) == 0x000008, "Wrong alignment on WBP_PlayerInventoryWeightInfo_C_CREATEDELEGATE_PROXYFUNCTION_0");
static_assert(sizeof(WBP_PlayerInventoryWeightInfo_C_CREATEDELEGATE_PROXYFUNCTION_0) == 0x000010, "Wrong size on WBP_PlayerInventoryWeightInfo_C_CREATEDELEGATE_PROXYFUNCTION_0");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_CREATEDELEGATE_PROXYFUNCTION_0, ChangedWeight) == 0x000000, "Member 'WBP_PlayerInventoryWeightInfo_C_CREATEDELEGATE_PROXYFUNCTION_0::ChangedWeight' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_CREATEDELEGATE_PROXYFUNCTION_0, CallFunc_OnUpdateCurrentWeightBuff_ChangedCurrentWeight_ImplicitCast) == 0x000008, "Member 'WBP_PlayerInventoryWeightInfo_C_CREATEDELEGATE_PROXYFUNCTION_0::CallFunc_OnUpdateCurrentWeightBuff_ChangedCurrentWeight_ImplicitCast' has a wrong offset!");

// Function WBP_PlayerInventoryWeightInfo.WBP_PlayerInventoryWeightInfo_C.ExecuteUbergraph_WBP_PlayerInventoryWeightInfo
// 0x0098 (0x0098 - 0x0000)
struct WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(float ChangedWeight)>          K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalPlayerInventoryData*                CallFunc_GetLocalInventoryData_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetNowItemWeight_ReturnValue;             // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E[0x2];                                       // 0x004E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(float NowWeight)>              K2Node_CreateDelegate_OutputDelegate_1;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(float MaxWeight)>              K2Node_CreateDelegate_OutputDelegate_2;            // 0x0060(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_OnUpdateCurrentWeightBuff_ChangedCurrentWeight_ImplicitCast; // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_UpdateWeight_Internal_NowWeight_ImplicitCast; // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_UpdateWeight_Internal_MaxWeight_ImplicitCast; // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo) == 0x000008, "Wrong alignment on WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo");
static_assert(sizeof(WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo) == 0x000098, "Wrong size on WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo, EntryPoint) == 0x000000, "Member 'WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo, CallFunc_GetEndTime_ReturnValue) == 0x000020, "Member 'WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo, CallFunc_PlayAnimation_ReturnValue_1) == 0x000028, "Member 'WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo, CallFunc_PlayAnimation_ReturnValue_2) == 0x000030, "Member 'WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo, CallFunc_PlayAnimation_ReturnValue_3) == 0x000038, "Member 'WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo, CallFunc_GetLocalInventoryData_ReturnValue) == 0x000040, "Member 'WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo::CallFunc_GetLocalInventoryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo, CallFunc_GetNowItemWeight_ReturnValue) == 0x000048, "Member 'WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo::CallFunc_GetNowItemWeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo, CallFunc_IsValid_ReturnValue) == 0x00004C, "Member 'WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo, CallFunc_IsValid_ReturnValue_1) == 0x00004D, "Member 'WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo, K2Node_CreateDelegate_OutputDelegate_1) == 0x000050, "Member 'WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo, K2Node_CreateDelegate_OutputDelegate_2) == 0x000060, "Member 'WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo, K2Node_CreateDelegate_OutputDelegate_3) == 0x000070, "Member 'WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo, CallFunc_OnUpdateCurrentWeightBuff_ChangedCurrentWeight_ImplicitCast) == 0x000080, "Member 'WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo::CallFunc_OnUpdateCurrentWeightBuff_ChangedCurrentWeight_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo, CallFunc_UpdateWeight_Internal_NowWeight_ImplicitCast) == 0x000088, "Member 'WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo::CallFunc_UpdateWeight_Internal_NowWeight_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo, CallFunc_UpdateWeight_Internal_MaxWeight_ImplicitCast) == 0x000090, "Member 'WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo::CallFunc_UpdateWeight_Internal_MaxWeight_ImplicitCast' has a wrong offset!");

// Function WBP_PlayerInventoryWeightInfo.WBP_PlayerInventoryWeightInfo_C.OnUpdateCurrentWeightBuff
// 0x0040 (0x0040 - 0x0000)
struct WBP_PlayerInventoryWeightInfo_C_OnUpdateCurrentWeightBuff final
{
public:
	double                                        ChangedCurrentWeight;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Temp_object_Variable_1;                            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     K2Node_Select_Default_1;                           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerInventoryWeightInfo_C_OnUpdateCurrentWeightBuff) == 0x000008, "Wrong alignment on WBP_PlayerInventoryWeightInfo_C_OnUpdateCurrentWeightBuff");
static_assert(sizeof(WBP_PlayerInventoryWeightInfo_C_OnUpdateCurrentWeightBuff) == 0x000040, "Wrong size on WBP_PlayerInventoryWeightInfo_C_OnUpdateCurrentWeightBuff");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_OnUpdateCurrentWeightBuff, ChangedCurrentWeight) == 0x000000, "Member 'WBP_PlayerInventoryWeightInfo_C_OnUpdateCurrentWeightBuff::ChangedCurrentWeight' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_OnUpdateCurrentWeightBuff, Temp_bool_Variable) == 0x000008, "Member 'WBP_PlayerInventoryWeightInfo_C_OnUpdateCurrentWeightBuff::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_OnUpdateCurrentWeightBuff, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000009, "Member 'WBP_PlayerInventoryWeightInfo_C_OnUpdateCurrentWeightBuff::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_OnUpdateCurrentWeightBuff, Temp_byte_Variable) == 0x00000A, "Member 'WBP_PlayerInventoryWeightInfo_C_OnUpdateCurrentWeightBuff::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_OnUpdateCurrentWeightBuff, Temp_byte_Variable_1) == 0x00000B, "Member 'WBP_PlayerInventoryWeightInfo_C_OnUpdateCurrentWeightBuff::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_OnUpdateCurrentWeightBuff, Temp_bool_Variable_1) == 0x00000C, "Member 'WBP_PlayerInventoryWeightInfo_C_OnUpdateCurrentWeightBuff::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_OnUpdateCurrentWeightBuff, Temp_object_Variable) == 0x000010, "Member 'WBP_PlayerInventoryWeightInfo_C_OnUpdateCurrentWeightBuff::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_OnUpdateCurrentWeightBuff, K2Node_Select_Default) == 0x000018, "Member 'WBP_PlayerInventoryWeightInfo_C_OnUpdateCurrentWeightBuff::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_OnUpdateCurrentWeightBuff, Temp_object_Variable_1) == 0x000020, "Member 'WBP_PlayerInventoryWeightInfo_C_OnUpdateCurrentWeightBuff::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_OnUpdateCurrentWeightBuff, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000028, "Member 'WBP_PlayerInventoryWeightInfo_C_OnUpdateCurrentWeightBuff::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_OnUpdateCurrentWeightBuff, CallFunc_BooleanAND_ReturnValue) == 0x000029, "Member 'WBP_PlayerInventoryWeightInfo_C_OnUpdateCurrentWeightBuff::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_OnUpdateCurrentWeightBuff, K2Node_Select_Default_1) == 0x000030, "Member 'WBP_PlayerInventoryWeightInfo_C_OnUpdateCurrentWeightBuff::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_OnUpdateCurrentWeightBuff, CallFunc_Less_DoubleDouble_A_ImplicitCast) == 0x000038, "Member 'WBP_PlayerInventoryWeightInfo_C_OnUpdateCurrentWeightBuff::CallFunc_Less_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function WBP_PlayerInventoryWeightInfo.WBP_PlayerInventoryWeightInfo_C.OnUpdateMaxWeight
// 0x0020 (0x0020 - 0x0000)
struct WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeight final
{
public:
	float                                         MaxWeight;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalPlayerInventoryData*                CallFunc_GetLocalInventoryData_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_UpdateWeight_Internal_MaxWeight_ImplicitCast; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_UpdateWeight_Internal_NowWeight_ImplicitCast; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeight) == 0x000008, "Wrong alignment on WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeight");
static_assert(sizeof(WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeight) == 0x000020, "Wrong size on WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeight");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeight, MaxWeight) == 0x000000, "Member 'WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeight::MaxWeight' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeight, CallFunc_GetLocalInventoryData_ReturnValue) == 0x000008, "Member 'WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeight::CallFunc_GetLocalInventoryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeight, CallFunc_UpdateWeight_Internal_MaxWeight_ImplicitCast) == 0x000010, "Member 'WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeight::CallFunc_UpdateWeight_Internal_MaxWeight_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeight, CallFunc_UpdateWeight_Internal_NowWeight_ImplicitCast) == 0x000018, "Member 'WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeight::CallFunc_UpdateWeight_Internal_NowWeight_ImplicitCast' has a wrong offset!");

// Function WBP_PlayerInventoryWeightInfo.WBP_PlayerInventoryWeightInfo_C.OnUpdateMaxWeightBuff
// 0x0040 (0x0040 - 0x0000)
struct WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeightBuff final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalPlayerInventoryData*                CallFunc_GetLocalInventoryData_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     K2Node_Select_Default;                             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeightBuff) == 0x000008, "Wrong alignment on WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeightBuff");
static_assert(sizeof(WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeightBuff) == 0x000040, "Wrong size on WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeightBuff");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeightBuff, Temp_bool_Variable) == 0x000000, "Member 'WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeightBuff::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeightBuff, Temp_byte_Variable) == 0x000001, "Member 'WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeightBuff::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeightBuff, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeightBuff::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeightBuff, Temp_bool_Variable_1) == 0x000003, "Member 'WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeightBuff::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeightBuff, Temp_object_Variable) == 0x000008, "Member 'WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeightBuff::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeightBuff, Temp_object_Variable_1) == 0x000010, "Member 'WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeightBuff::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeightBuff, CallFunc_GetLocalInventoryData_ReturnValue) == 0x000018, "Member 'WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeightBuff::CallFunc_GetLocalInventoryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeightBuff, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000020, "Member 'WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeightBuff::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeightBuff, K2Node_Select_Default) == 0x000028, "Member 'WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeightBuff::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeightBuff, K2Node_Select_Default_1) == 0x000030, "Member 'WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeightBuff::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeightBuff, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000038, "Member 'WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeightBuff::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function WBP_PlayerInventoryWeightInfo.WBP_PlayerInventoryWeightInfo_C.OnUpdateWeight
// 0x0028 (0x0028 - 0x0000)
struct WBP_PlayerInventoryWeightInfo_C_OnUpdateWeight final
{
public:
	float                                         NowWeight;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalPlayerInventoryData*                CallFunc_GetLocalInventoryData_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_UpdateWeight_Internal_NowWeight_ImplicitCast; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_UpdateWeight_Internal_MaxWeight_ImplicitCast; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_OnUpdateCurrentWeightBuff_ChangedCurrentWeight_ImplicitCast; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerInventoryWeightInfo_C_OnUpdateWeight) == 0x000008, "Wrong alignment on WBP_PlayerInventoryWeightInfo_C_OnUpdateWeight");
static_assert(sizeof(WBP_PlayerInventoryWeightInfo_C_OnUpdateWeight) == 0x000028, "Wrong size on WBP_PlayerInventoryWeightInfo_C_OnUpdateWeight");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_OnUpdateWeight, NowWeight) == 0x000000, "Member 'WBP_PlayerInventoryWeightInfo_C_OnUpdateWeight::NowWeight' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_OnUpdateWeight, CallFunc_GetLocalInventoryData_ReturnValue) == 0x000008, "Member 'WBP_PlayerInventoryWeightInfo_C_OnUpdateWeight::CallFunc_GetLocalInventoryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_OnUpdateWeight, CallFunc_UpdateWeight_Internal_NowWeight_ImplicitCast) == 0x000010, "Member 'WBP_PlayerInventoryWeightInfo_C_OnUpdateWeight::CallFunc_UpdateWeight_Internal_NowWeight_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_OnUpdateWeight, CallFunc_UpdateWeight_Internal_MaxWeight_ImplicitCast) == 0x000018, "Member 'WBP_PlayerInventoryWeightInfo_C_OnUpdateWeight::CallFunc_UpdateWeight_Internal_MaxWeight_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_OnUpdateWeight, CallFunc_OnUpdateCurrentWeightBuff_ChangedCurrentWeight_ImplicitCast) == 0x000020, "Member 'WBP_PlayerInventoryWeightInfo_C_OnUpdateWeight::CallFunc_OnUpdateCurrentWeightBuff_ChangedCurrentWeight_ImplicitCast' has a wrong offset!");

// Function WBP_PlayerInventoryWeightInfo.WBP_PlayerInventoryWeightInfo_C.UpdateWeight_Internal
// 0x0068 (0x0068 - 0x0000)
struct WBP_PlayerInventoryWeightInfo_C_UpdateWeight_Internal final
{
public:
	double                                        NowWeight;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxWeight;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ForceSkipAnim;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;  // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;            // 0x0028(0x0018)()
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue_1;          // 0x0040(0x0018)()
	double                                        CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_CachedInventoryWeightRate_ImplicitCast; // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerInventoryWeightInfo_C_UpdateWeight_Internal) == 0x000008, "Wrong alignment on WBP_PlayerInventoryWeightInfo_C_UpdateWeight_Internal");
static_assert(sizeof(WBP_PlayerInventoryWeightInfo_C_UpdateWeight_Internal) == 0x000068, "Wrong size on WBP_PlayerInventoryWeightInfo_C_UpdateWeight_Internal");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_UpdateWeight_Internal, NowWeight) == 0x000000, "Member 'WBP_PlayerInventoryWeightInfo_C_UpdateWeight_Internal::NowWeight' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_UpdateWeight_Internal, MaxWeight) == 0x000008, "Member 'WBP_PlayerInventoryWeightInfo_C_UpdateWeight_Internal::MaxWeight' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_UpdateWeight_Internal, ForceSkipAnim) == 0x000010, "Member 'WBP_PlayerInventoryWeightInfo_C_UpdateWeight_Internal::ForceSkipAnim' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_UpdateWeight_Internal, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000018, "Member 'WBP_PlayerInventoryWeightInfo_C_UpdateWeight_Internal::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_UpdateWeight_Internal, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000020, "Member 'WBP_PlayerInventoryWeightInfo_C_UpdateWeight_Internal::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_UpdateWeight_Internal, CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1) == 0x000021, "Member 'WBP_PlayerInventoryWeightInfo_C_UpdateWeight_Internal::CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_UpdateWeight_Internal, CallFunc_Conv_DoubleToText_ReturnValue) == 0x000028, "Member 'WBP_PlayerInventoryWeightInfo_C_UpdateWeight_Internal::CallFunc_Conv_DoubleToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_UpdateWeight_Internal, CallFunc_Conv_DoubleToText_ReturnValue_1) == 0x000040, "Member 'WBP_PlayerInventoryWeightInfo_C_UpdateWeight_Internal::CallFunc_Conv_DoubleToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_UpdateWeight_Internal, CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast) == 0x000058, "Member 'WBP_PlayerInventoryWeightInfo_C_UpdateWeight_Internal::CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_UpdateWeight_Internal, K2Node_VariableSet_CachedInventoryWeightRate_ImplicitCast) == 0x000060, "Member 'WBP_PlayerInventoryWeightInfo_C_UpdateWeight_Internal::K2Node_VariableSet_CachedInventoryWeightRate_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PlayerInventoryWeightInfo_C_UpdateWeight_Internal, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x000064, "Member 'WBP_PlayerInventoryWeightInfo_C_UpdateWeight_Internal::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");

}

