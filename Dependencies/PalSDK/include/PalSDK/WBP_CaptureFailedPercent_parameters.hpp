#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_CaptureFailedPercent.WBP_CaptureFailedPercent_C.ExecuteUbergraph_WBP_CaptureFailedPercent
// 0x0004 (0x0004 - 0x0000)
struct WBP_CaptureFailedPercent_C_ExecuteUbergraph_WBP_CaptureFailedPercent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CaptureFailedPercent_C_ExecuteUbergraph_WBP_CaptureFailedPercent) == 0x000004, "Wrong alignment on WBP_CaptureFailedPercent_C_ExecuteUbergraph_WBP_CaptureFailedPercent");
static_assert(sizeof(WBP_CaptureFailedPercent_C_ExecuteUbergraph_WBP_CaptureFailedPercent) == 0x000004, "Wrong size on WBP_CaptureFailedPercent_C_ExecuteUbergraph_WBP_CaptureFailedPercent");
static_assert(offsetof(WBP_CaptureFailedPercent_C_ExecuteUbergraph_WBP_CaptureFailedPercent, EntryPoint) == 0x000000, "Member 'WBP_CaptureFailedPercent_C_ExecuteUbergraph_WBP_CaptureFailedPercent::EntryPoint' has a wrong offset!");

// Function WBP_CaptureFailedPercent.WBP_CaptureFailedPercent_C.OnOverClearTimer__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_CaptureFailedPercent_C_OnOverClearTimer__DelegateSignature final
{
public:
	class UWBP_CaptureFailedPercent_C*            SelfWidget;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CaptureFailedPercent_C_OnOverClearTimer__DelegateSignature) == 0x000008, "Wrong alignment on WBP_CaptureFailedPercent_C_OnOverClearTimer__DelegateSignature");
static_assert(sizeof(WBP_CaptureFailedPercent_C_OnOverClearTimer__DelegateSignature) == 0x000008, "Wrong size on WBP_CaptureFailedPercent_C_OnOverClearTimer__DelegateSignature");
static_assert(offsetof(WBP_CaptureFailedPercent_C_OnOverClearTimer__DelegateSignature, SelfWidget) == 0x000000, "Member 'WBP_CaptureFailedPercent_C_OnOverClearTimer__DelegateSignature::SelfWidget' has a wrong offset!");

// Function WBP_CaptureFailedPercent.WBP_CaptureFailedPercent_C.Set Percent
// 0x00D8 (0x00D8 - 0x0000)
struct WBP_CaptureFailedPercent_C_Set_Percent final
{
public:
	double                                        Percent;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue_1;                      // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0028(0x0018)()
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0058(0x0018)()
	int32                                         CallFunc_Percent_IntInt_ReturnValue_1;             // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue_1;              // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue_2;              // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0080(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x0098(0x0018)()
	int32                                         CallFunc_Percent_IntInt_ReturnValue_2;             // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_4;             // 0x00B8(0x0018)()
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1; // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CaptureFailedPercent_C_Set_Percent) == 0x000008, "Wrong alignment on WBP_CaptureFailedPercent_C_Set_Percent");
static_assert(sizeof(WBP_CaptureFailedPercent_C_Set_Percent) == 0x0000D8, "Wrong size on WBP_CaptureFailedPercent_C_Set_Percent");
static_assert(offsetof(WBP_CaptureFailedPercent_C_Set_Percent, Percent) == 0x000000, "Member 'WBP_CaptureFailedPercent_C_Set_Percent::Percent' has a wrong offset!");
static_assert(offsetof(WBP_CaptureFailedPercent_C_Set_Percent, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000008, "Member 'WBP_CaptureFailedPercent_C_Set_Percent::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureFailedPercent_C_Set_Percent, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000010, "Member 'WBP_CaptureFailedPercent_C_Set_Percent::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureFailedPercent_C_Set_Percent, CallFunc_Round_ReturnValue) == 0x000018, "Member 'WBP_CaptureFailedPercent_C_Set_Percent::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureFailedPercent_C_Set_Percent, CallFunc_Round_ReturnValue_1) == 0x00001C, "Member 'WBP_CaptureFailedPercent_C_Set_Percent::CallFunc_Round_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureFailedPercent_C_Set_Percent, CallFunc_Divide_IntInt_ReturnValue) == 0x000020, "Member 'WBP_CaptureFailedPercent_C_Set_Percent::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureFailedPercent_C_Set_Percent, CallFunc_Less_IntInt_ReturnValue) == 0x000024, "Member 'WBP_CaptureFailedPercent_C_Set_Percent::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureFailedPercent_C_Set_Percent, CallFunc_Conv_IntToText_ReturnValue) == 0x000028, "Member 'WBP_CaptureFailedPercent_C_Set_Percent::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureFailedPercent_C_Set_Percent, CallFunc_SelectFloat_ReturnValue) == 0x000040, "Member 'WBP_CaptureFailedPercent_C_Set_Percent::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureFailedPercent_C_Set_Percent, CallFunc_Less_IntInt_ReturnValue_1) == 0x000048, "Member 'WBP_CaptureFailedPercent_C_Set_Percent::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureFailedPercent_C_Set_Percent, CallFunc_Percent_IntInt_ReturnValue) == 0x00004C, "Member 'WBP_CaptureFailedPercent_C_Set_Percent::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureFailedPercent_C_Set_Percent, CallFunc_SelectFloat_ReturnValue_1) == 0x000050, "Member 'WBP_CaptureFailedPercent_C_Set_Percent::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureFailedPercent_C_Set_Percent, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000058, "Member 'WBP_CaptureFailedPercent_C_Set_Percent::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureFailedPercent_C_Set_Percent, CallFunc_Percent_IntInt_ReturnValue_1) == 0x000070, "Member 'WBP_CaptureFailedPercent_C_Set_Percent::CallFunc_Percent_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureFailedPercent_C_Set_Percent, CallFunc_Divide_IntInt_ReturnValue_1) == 0x000074, "Member 'WBP_CaptureFailedPercent_C_Set_Percent::CallFunc_Divide_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureFailedPercent_C_Set_Percent, CallFunc_Divide_IntInt_ReturnValue_2) == 0x000078, "Member 'WBP_CaptureFailedPercent_C_Set_Percent::CallFunc_Divide_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CaptureFailedPercent_C_Set_Percent, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000080, "Member 'WBP_CaptureFailedPercent_C_Set_Percent::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CaptureFailedPercent_C_Set_Percent, CallFunc_Conv_IntToText_ReturnValue_3) == 0x000098, "Member 'WBP_CaptureFailedPercent_C_Set_Percent::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_CaptureFailedPercent_C_Set_Percent, CallFunc_Percent_IntInt_ReturnValue_2) == 0x0000B0, "Member 'WBP_CaptureFailedPercent_C_Set_Percent::CallFunc_Percent_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CaptureFailedPercent_C_Set_Percent, CallFunc_Conv_IntToText_ReturnValue_4) == 0x0000B8, "Member 'WBP_CaptureFailedPercent_C_Set_Percent::CallFunc_Conv_IntToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_CaptureFailedPercent_C_Set_Percent, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast) == 0x0000D0, "Member 'WBP_CaptureFailedPercent_C_Set_Percent::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_CaptureFailedPercent_C_Set_Percent, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1) == 0x0000D4, "Member 'WBP_CaptureFailedPercent_C_Set_Percent::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1' has a wrong offset!");

// Function WBP_CaptureFailedPercent.WBP_CaptureFailedPercent_C.Setup
// 0x0028 (0x0028 - 0x0000)
struct WBP_CaptureFailedPercent_C_Setup final
{
public:
	double                                        DisplayPercent;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CaptureFailedPercent_C_Setup) == 0x000008, "Wrong alignment on WBP_CaptureFailedPercent_C_Setup");
static_assert(sizeof(WBP_CaptureFailedPercent_C_Setup) == 0x000028, "Wrong size on WBP_CaptureFailedPercent_C_Setup");
static_assert(offsetof(WBP_CaptureFailedPercent_C_Setup, DisplayPercent) == 0x000000, "Member 'WBP_CaptureFailedPercent_C_Setup::DisplayPercent' has a wrong offset!");
static_assert(offsetof(WBP_CaptureFailedPercent_C_Setup, CallFunc_GetGameSetting_ReturnValue) == 0x000008, "Member 'WBP_CaptureFailedPercent_C_Setup::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureFailedPercent_C_Setup, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_CaptureFailedPercent_C_Setup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_CaptureFailedPercent_C_Setup, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000020, "Member 'WBP_CaptureFailedPercent_C_Setup::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function WBP_CaptureFailedPercent.WBP_CaptureFailedPercent_C.UpdatePercent
// 0x0020 (0x0020 - 0x0000)
struct WBP_CaptureFailedPercent_C_UpdatePercent final
{
public:
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CaptureFailedPercent_C_UpdatePercent) == 0x000008, "Wrong alignment on WBP_CaptureFailedPercent_C_UpdatePercent");
static_assert(sizeof(WBP_CaptureFailedPercent_C_UpdatePercent) == 0x000020, "Wrong size on WBP_CaptureFailedPercent_C_UpdatePercent");
static_assert(offsetof(WBP_CaptureFailedPercent_C_UpdatePercent, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x000000, "Member 'WBP_CaptureFailedPercent_C_UpdatePercent::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureFailedPercent_C_UpdatePercent, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000008, "Member 'WBP_CaptureFailedPercent_C_UpdatePercent::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureFailedPercent_C_UpdatePercent, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000010, "Member 'WBP_CaptureFailedPercent_C_UpdatePercent::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureFailedPercent_C_UpdatePercent, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000018, "Member 'WBP_CaptureFailedPercent_C_UpdatePercent::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");

}

