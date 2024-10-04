#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function WBP_EnemyGauge.WBP_EnemyGauge_C.AnmEvent_LowHealth
// 0x0001 (0x0001 - 0x0000)
struct WBP_EnemyGauge_C_AnmEvent_LowHealth final
{
public:
	bool                                          IsDisplay;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EnemyGauge_C_AnmEvent_LowHealth) == 0x000001, "Wrong alignment on WBP_EnemyGauge_C_AnmEvent_LowHealth");
static_assert(sizeof(WBP_EnemyGauge_C_AnmEvent_LowHealth) == 0x000001, "Wrong size on WBP_EnemyGauge_C_AnmEvent_LowHealth");
static_assert(offsetof(WBP_EnemyGauge_C_AnmEvent_LowHealth, IsDisplay) == 0x000000, "Member 'WBP_EnemyGauge_C_AnmEvent_LowHealth::IsDisplay' has a wrong offset!");

// Function WBP_EnemyGauge.WBP_EnemyGauge_C.ChangeEnemyMode
// 0x0010 (0x0010 - 0x0000)
struct WBP_EnemyGauge_C_ChangeEnemyMode final
{
public:
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EnemyGauge_C_ChangeEnemyMode) == 0x000004, "Wrong alignment on WBP_EnemyGauge_C_ChangeEnemyMode");
static_assert(sizeof(WBP_EnemyGauge_C_ChangeEnemyMode) == 0x000010, "Wrong size on WBP_EnemyGauge_C_ChangeEnemyMode");
static_assert(offsetof(WBP_EnemyGauge_C_ChangeEnemyMode, CallFunc_Conv_ColorToLinearColor_ReturnValue) == 0x000000, "Member 'WBP_EnemyGauge_C_ChangeEnemyMode::CallFunc_Conv_ColorToLinearColor_ReturnValue' has a wrong offset!");

// Function WBP_EnemyGauge.WBP_EnemyGauge_C.ChangeFriendMode
// 0x0010 (0x0010 - 0x0000)
struct WBP_EnemyGauge_C_ChangeFriendMode final
{
public:
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EnemyGauge_C_ChangeFriendMode) == 0x000004, "Wrong alignment on WBP_EnemyGauge_C_ChangeFriendMode");
static_assert(sizeof(WBP_EnemyGauge_C_ChangeFriendMode) == 0x000010, "Wrong size on WBP_EnemyGauge_C_ChangeFriendMode");
static_assert(offsetof(WBP_EnemyGauge_C_ChangeFriendMode, CallFunc_Conv_ColorToLinearColor_ReturnValue) == 0x000000, "Member 'WBP_EnemyGauge_C_ChangeFriendMode::CallFunc_Conv_ColorToLinearColor_ReturnValue' has a wrong offset!");

// Function WBP_EnemyGauge.WBP_EnemyGauge_C.ExecuteUbergraph_WBP_EnemyGauge
// 0x00E0 (0x00E0 - 0x0000)
struct WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result; // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_isDisplay;                      // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_4;              // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_5;              // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_6;              // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_7;              // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B[0x5];                                       // 0x008B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_8;              // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0098(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalUIDelayGaugeCalculator*             CallFunc_SpawnObject_ReturnValue;                  // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                              K2Node_DynamicCast_AsMaterial;                     // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge) == 0x000008, "Wrong alignment on WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge");
static_assert(sizeof(WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge) == 0x0000E0, "Wrong size on WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge");
static_assert(offsetof(WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge, EntryPoint) == 0x000000, "Member 'WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge, CallFunc_GetGameSetting_ReturnValue) == 0x000008, "Member 'WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000020, "Member 'WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000028, "Member 'WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge, CallFunc_PlayAnimation_ReturnValue) == 0x000030, "Member 'WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge, CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result) == 0x000038, "Member 'WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge::CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge, CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue) == 0x000040, "Member 'WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge::CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge, CallFunc_PlayAnimation_ReturnValue_1) == 0x000048, "Member 'WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge, K2Node_CustomEvent_isDisplay) == 0x000051, "Member 'WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge::K2Node_CustomEvent_isDisplay' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge, CallFunc_PlayAnimation_ReturnValue_2) == 0x000058, "Member 'WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge, CallFunc_PlayAnimation_ReturnValue_3) == 0x000060, "Member 'WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge, CallFunc_PlayAnimation_ReturnValue_4) == 0x000068, "Member 'WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge::CallFunc_PlayAnimation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge, CallFunc_PlayAnimation_ReturnValue_5) == 0x000070, "Member 'WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge::CallFunc_PlayAnimation_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge, CallFunc_PlayAnimation_ReturnValue_6) == 0x000078, "Member 'WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge::CallFunc_PlayAnimation_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge, CallFunc_PlayAnimation_ReturnValue_7) == 0x000080, "Member 'WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge::CallFunc_PlayAnimation_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge, CallFunc_IsValid_ReturnValue_1) == 0x000088, "Member 'WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge, K2Node_SwitchEnum_CmpSuccess) == 0x000089, "Member 'WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge, CallFunc_IsValid_ReturnValue_2) == 0x00008A, "Member 'WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge, CallFunc_PlayAnimation_ReturnValue_8) == 0x000090, "Member 'WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge::CallFunc_PlayAnimation_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge, K2Node_CreateDelegate_OutputDelegate_1) == 0x000098, "Member 'WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x0000A8, "Member 'WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x0000B0, "Member 'WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge, CallFunc_IsValid_ReturnValue_3) == 0x0000B8, "Member 'WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge, CallFunc_SpawnObject_ReturnValue) == 0x0000C0, "Member 'WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge, K2Node_DynamicCast_AsMaterial) == 0x0000C8, "Member 'WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge::K2Node_DynamicCast_AsMaterial' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0000D8, "Member 'WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function WBP_EnemyGauge.WBP_EnemyGauge_C.Set Battle Mode
// 0x0001 (0x0001 - 0x0000)
struct WBP_EnemyGauge_C_Set_Battle_Mode final
{
public:
	bool                                          IsBattleMode;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EnemyGauge_C_Set_Battle_Mode) == 0x000001, "Wrong alignment on WBP_EnemyGauge_C_Set_Battle_Mode");
static_assert(sizeof(WBP_EnemyGauge_C_Set_Battle_Mode) == 0x000001, "Wrong size on WBP_EnemyGauge_C_Set_Battle_Mode");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Battle_Mode, IsBattleMode) == 0x000000, "Member 'WBP_EnemyGauge_C_Set_Battle_Mode::IsBattleMode' has a wrong offset!");

// Function WBP_EnemyGauge.WBP_EnemyGauge_C.Set Enable Talent Detail
// 0x02D0 (0x02D0 - 0x0000)
struct WBP_EnemyGauge_C_Set_Enable_Talent_Detail final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       Parameter;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalIndividualCharacterSaveParameter   CallFunc_GetSaveParameter_ReturnValue;             // 0x0018(0x02A8)(ConstParm)
	int32                                         CallFunc_GetSaveParameterValue_Talent_Defense_ReturnValue; // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSaveParameterValue_Talent_Shot_ReturnValue; // 0x02C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSaveParameterValue_Talent_HP_ReturnValue; // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EnemyGauge_C_Set_Enable_Talent_Detail) == 0x000008, "Wrong alignment on WBP_EnemyGauge_C_Set_Enable_Talent_Detail");
static_assert(sizeof(WBP_EnemyGauge_C_Set_Enable_Talent_Detail) == 0x0002D0, "Wrong size on WBP_EnemyGauge_C_Set_Enable_Talent_Detail");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Enable_Talent_Detail, IsEnable) == 0x000000, "Member 'WBP_EnemyGauge_C_Set_Enable_Talent_Detail::IsEnable' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Enable_Talent_Detail, Parameter) == 0x000008, "Member 'WBP_EnemyGauge_C_Set_Enable_Talent_Detail::Parameter' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Enable_Talent_Detail, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_EnemyGauge_C_Set_Enable_Talent_Detail::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Enable_Talent_Detail, CallFunc_GetSaveParameter_ReturnValue) == 0x000018, "Member 'WBP_EnemyGauge_C_Set_Enable_Talent_Detail::CallFunc_GetSaveParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Enable_Talent_Detail, CallFunc_GetSaveParameterValue_Talent_Defense_ReturnValue) == 0x0002C0, "Member 'WBP_EnemyGauge_C_Set_Enable_Talent_Detail::CallFunc_GetSaveParameterValue_Talent_Defense_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Enable_Talent_Detail, CallFunc_GetSaveParameterValue_Talent_Shot_ReturnValue) == 0x0002C4, "Member 'WBP_EnemyGauge_C_Set_Enable_Talent_Detail::CallFunc_GetSaveParameterValue_Talent_Shot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Enable_Talent_Detail, CallFunc_GetSaveParameterValue_Talent_HP_ReturnValue) == 0x0002C8, "Member 'WBP_EnemyGauge_C_Set_Enable_Talent_Detail::CallFunc_GetSaveParameterValue_Talent_HP_ReturnValue' has a wrong offset!");

// Function WBP_EnemyGauge.WBP_EnemyGauge_C.Set Level
// 0x0038 (0x0038 - 0x0000)
struct WBP_EnemyGauge_C_Set_Level final
{
public:
	int32                                         Level;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GetLevelPenalty;                                   // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	class UMaterialInterface*                     Temp_object_Variable;                              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_1;                            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     K2Node_Select_Default;                             // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EnemyGauge_C_Set_Level) == 0x000008, "Wrong alignment on WBP_EnemyGauge_C_Set_Level");
static_assert(sizeof(WBP_EnemyGauge_C_Set_Level) == 0x000038, "Wrong size on WBP_EnemyGauge_C_Set_Level");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Level, Level) == 0x000000, "Member 'WBP_EnemyGauge_C_Set_Level::Level' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Level, GetLevelPenalty) == 0x000004, "Member 'WBP_EnemyGauge_C_Set_Level::GetLevelPenalty' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Level, Temp_bool_Variable) == 0x000005, "Member 'WBP_EnemyGauge_C_Set_Level::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Level, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'WBP_EnemyGauge_C_Set_Level::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Level, Temp_object_Variable) == 0x000020, "Member 'WBP_EnemyGauge_C_Set_Level::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Level, Temp_object_Variable_1) == 0x000028, "Member 'WBP_EnemyGauge_C_Set_Level::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Level, K2Node_Select_Default) == 0x000030, "Member 'WBP_EnemyGauge_C_Set_Level::K2Node_Select_Default' has a wrong offset!");

// Function WBP_EnemyGauge.WBP_EnemyGauge_C.Set Work Event Info
// 0x00B8 (0x00B8 - 0x0000)
struct WBP_EnemyGauge_C_Set_Work_Event_Info final
{
public:
	class UPalIndividualCharacterHandle*          Handle;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          NotBattle;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          Character;                                         // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       IndividualParameter;                               // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalBaseCampWorkerEventType                   CallFunc_GetBaseCampWorkerEventType_ReturnValue;   // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0028(0x0018)()
	EPalActionType                                CallFunc_GetCurrentActionType_ReturnValue;         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetIndividualActor_ReturnValue;           // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetWorkingDetailNameFromHandle_outName;   // 0x0060(0x0018)()
	bool                                          CallFunc_GetWorkingDetailNameFromHandle_ReturnValue; // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalBaseCampWorkerEventType                   CallFunc_GetBaseCampWorkerEventType_ReturnValue_1; // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x007B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetBaseCampEventName_outName;             // 0x0080(0x0018)()
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B[0x5];                                       // 0x009B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_SelectText_ReturnValue;                   // 0x00A0(0x0018)()
};
static_assert(alignof(WBP_EnemyGauge_C_Set_Work_Event_Info) == 0x000008, "Wrong alignment on WBP_EnemyGauge_C_Set_Work_Event_Info");
static_assert(sizeof(WBP_EnemyGauge_C_Set_Work_Event_Info) == 0x0000B8, "Wrong size on WBP_EnemyGauge_C_Set_Work_Event_Info");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Work_Event_Info, Handle) == 0x000000, "Member 'WBP_EnemyGauge_C_Set_Work_Event_Info::Handle' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Work_Event_Info, NotBattle) == 0x000008, "Member 'WBP_EnemyGauge_C_Set_Work_Event_Info::NotBattle' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Work_Event_Info, Character) == 0x000010, "Member 'WBP_EnemyGauge_C_Set_Work_Event_Info::Character' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Work_Event_Info, IndividualParameter) == 0x000018, "Member 'WBP_EnemyGauge_C_Set_Work_Event_Info::IndividualParameter' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Work_Event_Info, K2Node_SwitchEnum_CmpSuccess) == 0x000020, "Member 'WBP_EnemyGauge_C_Set_Work_Event_Info::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Work_Event_Info, CallFunc_GetBaseCampWorkerEventType_ReturnValue) == 0x000021, "Member 'WBP_EnemyGauge_C_Set_Work_Event_Info::CallFunc_GetBaseCampWorkerEventType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Work_Event_Info, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000028, "Member 'WBP_EnemyGauge_C_Set_Work_Event_Info::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Work_Event_Info, CallFunc_GetCurrentActionType_ReturnValue) == 0x000040, "Member 'WBP_EnemyGauge_C_Set_Work_Event_Info::CallFunc_GetCurrentActionType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Work_Event_Info, CallFunc_GetIndividualActor_ReturnValue) == 0x000048, "Member 'WBP_EnemyGauge_C_Set_Work_Event_Info::CallFunc_GetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Work_Event_Info, K2Node_SwitchEnum_CmpSuccess_1) == 0x000050, "Member 'WBP_EnemyGauge_C_Set_Work_Event_Info::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Work_Event_Info, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000058, "Member 'WBP_EnemyGauge_C_Set_Work_Event_Info::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Work_Event_Info, CallFunc_GetWorkingDetailNameFromHandle_outName) == 0x000060, "Member 'WBP_EnemyGauge_C_Set_Work_Event_Info::CallFunc_GetWorkingDetailNameFromHandle_outName' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Work_Event_Info, CallFunc_GetWorkingDetailNameFromHandle_ReturnValue) == 0x000078, "Member 'WBP_EnemyGauge_C_Set_Work_Event_Info::CallFunc_GetWorkingDetailNameFromHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Work_Event_Info, CallFunc_GetBaseCampWorkerEventType_ReturnValue_1) == 0x000079, "Member 'WBP_EnemyGauge_C_Set_Work_Event_Info::CallFunc_GetBaseCampWorkerEventType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Work_Event_Info, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00007A, "Member 'WBP_EnemyGauge_C_Set_Work_Event_Info::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Work_Event_Info, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x00007B, "Member 'WBP_EnemyGauge_C_Set_Work_Event_Info::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Work_Event_Info, CallFunc_GetBaseCampEventName_outName) == 0x000080, "Member 'WBP_EnemyGauge_C_Set_Work_Event_Info::CallFunc_GetBaseCampEventName_outName' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Work_Event_Info, CallFunc_BooleanAND_ReturnValue) == 0x000098, "Member 'WBP_EnemyGauge_C_Set_Work_Event_Info::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Work_Event_Info, CallFunc_BooleanOR_ReturnValue) == 0x000099, "Member 'WBP_EnemyGauge_C_Set_Work_Event_Info::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Work_Event_Info, CallFunc_BooleanAND_ReturnValue_1) == 0x00009A, "Member 'WBP_EnemyGauge_C_Set_Work_Event_Info::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_Set_Work_Event_Info, CallFunc_SelectText_ReturnValue) == 0x0000A0, "Member 'WBP_EnemyGauge_C_Set_Work_Event_Info::CallFunc_SelectText_ReturnValue' has a wrong offset!");

// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetElement
// 0x0004 (0x0004 - 0x0000)
struct WBP_EnemyGauge_C_SetElement final
{
public:
	EPalElementType                               Type1;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalElementType                               Type2;                                             // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EnemyGauge_C_SetElement) == 0x000001, "Wrong alignment on WBP_EnemyGauge_C_SetElement");
static_assert(sizeof(WBP_EnemyGauge_C_SetElement) == 0x000004, "Wrong size on WBP_EnemyGauge_C_SetElement");
static_assert(offsetof(WBP_EnemyGauge_C_SetElement, Type1) == 0x000000, "Member 'WBP_EnemyGauge_C_SetElement::Type1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetElement, Type2) == 0x000001, "Member 'WBP_EnemyGauge_C_SetElement::Type2' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetElement, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'WBP_EnemyGauge_C_SetElement::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetElement, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000003, "Member 'WBP_EnemyGauge_C_SetElement::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");

// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetGender
// 0x0001 (0x0001 - 0x0000)
struct WBP_EnemyGauge_C_SetGender final
{
public:
	EPalGenderType                                GenderType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EnemyGauge_C_SetGender) == 0x000001, "Wrong alignment on WBP_EnemyGauge_C_SetGender");
static_assert(sizeof(WBP_EnemyGauge_C_SetGender) == 0x000001, "Wrong size on WBP_EnemyGauge_C_SetGender");
static_assert(offsetof(WBP_EnemyGauge_C_SetGender, GenderType) == 0x000000, "Member 'WBP_EnemyGauge_C_SetGender::GenderType' has a wrong offset!");

// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetGuildName
// 0x0108 (0x0108 - 0x0000)
struct WBP_EnemyGauge_C_SetGuildName final
{
public:
	class FString                                 NewGuildName;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0030(0x0050)(HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0088(0x0010)(ReferenceParm)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00A0(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x00B8(0x0010)(ReferenceParm)
	bool                                          Temp_bool_Variable;                                // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x00D0(0x0018)()
	class FText                                   CallFunc_SelectText_ReturnValue;                   // 0x00E8(0x0018)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EnemyGauge_C_SetGuildName) == 0x000008, "Wrong alignment on WBP_EnemyGauge_C_SetGuildName");
static_assert(sizeof(WBP_EnemyGauge_C_SetGuildName) == 0x000108, "Wrong size on WBP_EnemyGauge_C_SetGuildName");
static_assert(offsetof(WBP_EnemyGauge_C_SetGuildName, NewGuildName) == 0x000000, "Member 'WBP_EnemyGauge_C_SetGuildName::NewGuildName' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetGuildName, Temp_byte_Variable) == 0x000010, "Member 'WBP_EnemyGauge_C_SetGuildName::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetGuildName, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'WBP_EnemyGauge_C_SetGuildName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetGuildName, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'WBP_EnemyGauge_C_SetGuildName::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetGuildName, CallFunc_IsEmpty_ReturnValue) == 0x000080, "Member 'WBP_EnemyGauge_C_SetGuildName::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetGuildName, K2Node_MakeArray_Array) == 0x000088, "Member 'WBP_EnemyGauge_C_SetGuildName::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetGuildName, Temp_byte_Variable_1) == 0x000098, "Member 'WBP_EnemyGauge_C_SetGuildName::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetGuildName, CallFunc_Format_ReturnValue) == 0x0000A0, "Member 'WBP_EnemyGauge_C_SetGuildName::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetGuildName, K2Node_MakeArray_Array_1) == 0x0000B8, "Member 'WBP_EnemyGauge_C_SetGuildName::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetGuildName, Temp_bool_Variable) == 0x0000C8, "Member 'WBP_EnemyGauge_C_SetGuildName::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetGuildName, CallFunc_Format_ReturnValue_1) == 0x0000D0, "Member 'WBP_EnemyGauge_C_SetGuildName::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetGuildName, CallFunc_SelectText_ReturnValue) == 0x0000E8, "Member 'WBP_EnemyGauge_C_SetGuildName::CallFunc_SelectText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetGuildName, K2Node_Select_Default) == 0x000100, "Member 'WBP_EnemyGauge_C_SetGuildName::K2Node_Select_Default' has a wrong offset!");

// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetHPPercent
// 0x0010 (0x0010 - 0x0000)
struct WBP_EnemyGauge_C_SetHPPercent final
{
public:
	double                                        Percent;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercent_percent_ImplicitCast;          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EnemyGauge_C_SetHPPercent) == 0x000008, "Wrong alignment on WBP_EnemyGauge_C_SetHPPercent");
static_assert(sizeof(WBP_EnemyGauge_C_SetHPPercent) == 0x000010, "Wrong size on WBP_EnemyGauge_C_SetHPPercent");
static_assert(offsetof(WBP_EnemyGauge_C_SetHPPercent, Percent) == 0x000000, "Member 'WBP_EnemyGauge_C_SetHPPercent::Percent' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetHPPercent, CallFunc_SetPercent_percent_ImplicitCast) == 0x000008, "Member 'WBP_EnemyGauge_C_SetHPPercent::CallFunc_SetPercent_percent_ImplicitCast' has a wrong offset!");

// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetHPPercent_Force
// 0x0010 (0x0010 - 0x0000)
struct WBP_EnemyGauge_C_SetHPPercent_Force final
{
public:
	double                                        Percent;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercentForce_percent_ImplicitCast;     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EnemyGauge_C_SetHPPercent_Force) == 0x000008, "Wrong alignment on WBP_EnemyGauge_C_SetHPPercent_Force");
static_assert(sizeof(WBP_EnemyGauge_C_SetHPPercent_Force) == 0x000010, "Wrong size on WBP_EnemyGauge_C_SetHPPercent_Force");
static_assert(offsetof(WBP_EnemyGauge_C_SetHPPercent_Force, Percent) == 0x000000, "Member 'WBP_EnemyGauge_C_SetHPPercent_Force::Percent' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetHPPercent_Force, CallFunc_SetPercentForce_percent_ImplicitCast) == 0x000008, "Member 'WBP_EnemyGauge_C_SetHPPercent_Force::CallFunc_SetPercentForce_percent_ImplicitCast' has a wrong offset!");

// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetHungryCondition
// 0x0020 (0x0020 - 0x0000)
struct WBP_EnemyGauge_C_SetHungryCondition final
{
public:
	TArray<EPalUIConditionType>                   Conditions;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalUIConditionType                           Temp_byte_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalUIConditionType                           Temp_byte_Variable_1;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalUIConditionType                           Temp_byte_Variable_4;                              // 0x0016(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalUIConditionType                           Temp_byte_Variable_5;                              // 0x0017(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue_1;             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalUIConditionType                           K2Node_Select_Default;                             // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EnemyGauge_C_SetHungryCondition) == 0x000008, "Wrong alignment on WBP_EnemyGauge_C_SetHungryCondition");
static_assert(sizeof(WBP_EnemyGauge_C_SetHungryCondition) == 0x000020, "Wrong size on WBP_EnemyGauge_C_SetHungryCondition");
static_assert(offsetof(WBP_EnemyGauge_C_SetHungryCondition, Conditions) == 0x000000, "Member 'WBP_EnemyGauge_C_SetHungryCondition::Conditions' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetHungryCondition, Temp_bool_Variable) == 0x000010, "Member 'WBP_EnemyGauge_C_SetHungryCondition::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetHungryCondition, Temp_byte_Variable) == 0x000011, "Member 'WBP_EnemyGauge_C_SetHungryCondition::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetHungryCondition, Temp_byte_Variable_1) == 0x000012, "Member 'WBP_EnemyGauge_C_SetHungryCondition::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetHungryCondition, Temp_bool_Variable_1) == 0x000013, "Member 'WBP_EnemyGauge_C_SetHungryCondition::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetHungryCondition, Temp_byte_Variable_2) == 0x000014, "Member 'WBP_EnemyGauge_C_SetHungryCondition::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetHungryCondition, Temp_byte_Variable_3) == 0x000015, "Member 'WBP_EnemyGauge_C_SetHungryCondition::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetHungryCondition, Temp_byte_Variable_4) == 0x000016, "Member 'WBP_EnemyGauge_C_SetHungryCondition::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetHungryCondition, Temp_byte_Variable_5) == 0x000017, "Member 'WBP_EnemyGauge_C_SetHungryCondition::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetHungryCondition, CallFunc_Array_Contains_ReturnValue) == 0x000018, "Member 'WBP_EnemyGauge_C_SetHungryCondition::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetHungryCondition, CallFunc_Array_Contains_ReturnValue_1) == 0x000019, "Member 'WBP_EnemyGauge_C_SetHungryCondition::CallFunc_Array_Contains_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetHungryCondition, K2Node_Select_Default) == 0x00001A, "Member 'WBP_EnemyGauge_C_SetHungryCondition::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetHungryCondition, CallFunc_BooleanOR_ReturnValue) == 0x00001B, "Member 'WBP_EnemyGauge_C_SetHungryCondition::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetHungryCondition, K2Node_Select_Default_1) == 0x00001C, "Member 'WBP_EnemyGauge_C_SetHungryCondition::K2Node_Select_Default_1' has a wrong offset!");

// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetLowHealthNoticeDisplayFlag
// 0x0001 (0x0001 - 0x0000)
struct WBP_EnemyGauge_C_SetLowHealthNoticeDisplayFlag final
{
public:
	bool                                          IsDisplay;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EnemyGauge_C_SetLowHealthNoticeDisplayFlag) == 0x000001, "Wrong alignment on WBP_EnemyGauge_C_SetLowHealthNoticeDisplayFlag");
static_assert(sizeof(WBP_EnemyGauge_C_SetLowHealthNoticeDisplayFlag) == 0x000001, "Wrong size on WBP_EnemyGauge_C_SetLowHealthNoticeDisplayFlag");
static_assert(offsetof(WBP_EnemyGauge_C_SetLowHealthNoticeDisplayFlag, IsDisplay) == 0x000000, "Member 'WBP_EnemyGauge_C_SetLowHealthNoticeDisplayFlag::IsDisplay' has a wrong offset!");

// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetRank
// 0x0028 (0x0028 - 0x0000)
struct WBP_EnemyGauge_C_SetRank final
{
public:
	int32                                         Rank;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Map_Find_Value;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EnemyGauge_C_SetRank) == 0x000008, "Wrong alignment on WBP_EnemyGauge_C_SetRank");
static_assert(sizeof(WBP_EnemyGauge_C_SetRank) == 0x000028, "Wrong size on WBP_EnemyGauge_C_SetRank");
static_assert(offsetof(WBP_EnemyGauge_C_SetRank, Rank) == 0x000000, "Member 'WBP_EnemyGauge_C_SetRank::Rank' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetRank, CallFunc_Less_IntInt_ReturnValue) == 0x000004, "Member 'WBP_EnemyGauge_C_SetRank::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetRank, CallFunc_Map_Find_Value) == 0x000008, "Member 'WBP_EnemyGauge_C_SetRank::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetRank, CallFunc_Map_Find_ReturnValue) == 0x000010, "Member 'WBP_EnemyGauge_C_SetRank::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetRank, CallFunc_GetGameSetting_ReturnValue) == 0x000018, "Member 'WBP_EnemyGauge_C_SetRank::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetRank, CallFunc_Greater_IntInt_ReturnValue) == 0x000020, "Member 'WBP_EnemyGauge_C_SetRank::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetRank, CallFunc_BooleanOR_ReturnValue) == 0x000021, "Member 'WBP_EnemyGauge_C_SetRank::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetSanityValue
// 0x0010 (0x0010 - 0x0000)
struct WBP_EnemyGauge_C_SetSanityValue final
{
public:
	double                                        NowSanityValue;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxSanityValue;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EnemyGauge_C_SetSanityValue) == 0x000008, "Wrong alignment on WBP_EnemyGauge_C_SetSanityValue");
static_assert(sizeof(WBP_EnemyGauge_C_SetSanityValue) == 0x000010, "Wrong size on WBP_EnemyGauge_C_SetSanityValue");
static_assert(offsetof(WBP_EnemyGauge_C_SetSanityValue, NowSanityValue) == 0x000000, "Member 'WBP_EnemyGauge_C_SetSanityValue::NowSanityValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_SetSanityValue, MaxSanityValue) == 0x000008, "Member 'WBP_EnemyGauge_C_SetSanityValue::MaxSanityValue' has a wrong offset!");

// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetTargetName
// 0x0018 (0x0018 - 0x0000)
struct WBP_EnemyGauge_C_SetTargetName final
{
public:
	class FText                                   Name_0;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_EnemyGauge_C_SetTargetName) == 0x000008, "Wrong alignment on WBP_EnemyGauge_C_SetTargetName");
static_assert(sizeof(WBP_EnemyGauge_C_SetTargetName) == 0x000018, "Wrong size on WBP_EnemyGauge_C_SetTargetName");
static_assert(offsetof(WBP_EnemyGauge_C_SetTargetName, Name_0) == 0x000000, "Member 'WBP_EnemyGauge_C_SetTargetName::Name_0' has a wrong offset!");

// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetVisibilityBattleIcon
// 0x0001 (0x0001 - 0x0000)
struct WBP_EnemyGauge_C_SetVisibilityBattleIcon final
{
public:
	ESlateVisibility                              Visibiliy;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EnemyGauge_C_SetVisibilityBattleIcon) == 0x000001, "Wrong alignment on WBP_EnemyGauge_C_SetVisibilityBattleIcon");
static_assert(sizeof(WBP_EnemyGauge_C_SetVisibilityBattleIcon) == 0x000001, "Wrong size on WBP_EnemyGauge_C_SetVisibilityBattleIcon");
static_assert(offsetof(WBP_EnemyGauge_C_SetVisibilityBattleIcon, Visibiliy) == 0x000000, "Member 'WBP_EnemyGauge_C_SetVisibilityBattleIcon::Visibiliy' has a wrong offset!");

// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetVisibilitySanityGauge
// 0x0001 (0x0001 - 0x0000)
struct WBP_EnemyGauge_C_SetVisibilitySanityGauge final
{
public:
	ESlateVisibility                              Visibility_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EnemyGauge_C_SetVisibilitySanityGauge) == 0x000001, "Wrong alignment on WBP_EnemyGauge_C_SetVisibilitySanityGauge");
static_assert(sizeof(WBP_EnemyGauge_C_SetVisibilitySanityGauge) == 0x000001, "Wrong size on WBP_EnemyGauge_C_SetVisibilitySanityGauge");
static_assert(offsetof(WBP_EnemyGauge_C_SetVisibilitySanityGauge, Visibility_0) == 0x000000, "Member 'WBP_EnemyGauge_C_SetVisibilitySanityGauge::Visibility_0' has a wrong offset!");

// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetVisibilityStrongRareMark
// 0x0001 (0x0001 - 0x0000)
struct WBP_EnemyGauge_C_SetVisibilityStrongRareMark final
{
public:
	ESlateVisibility                              Visibility_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EnemyGauge_C_SetVisibilityStrongRareMark) == 0x000001, "Wrong alignment on WBP_EnemyGauge_C_SetVisibilityStrongRareMark");
static_assert(sizeof(WBP_EnemyGauge_C_SetVisibilityStrongRareMark) == 0x000001, "Wrong size on WBP_EnemyGauge_C_SetVisibilityStrongRareMark");
static_assert(offsetof(WBP_EnemyGauge_C_SetVisibilityStrongRareMark, Visibility_0) == 0x000000, "Member 'WBP_EnemyGauge_C_SetVisibilityStrongRareMark::Visibility_0' has a wrong offset!");

// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetWorkSuitability
// 0x0010 (0x0010 - 0x0000)
struct WBP_EnemyGauge_C_SetWorkSuitability final
{
public:
	TArray<EPalWorkSuitability>                   Suitability;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_EnemyGauge_C_SetWorkSuitability) == 0x000008, "Wrong alignment on WBP_EnemyGauge_C_SetWorkSuitability");
static_assert(sizeof(WBP_EnemyGauge_C_SetWorkSuitability) == 0x000010, "Wrong size on WBP_EnemyGauge_C_SetWorkSuitability");
static_assert(offsetof(WBP_EnemyGauge_C_SetWorkSuitability, Suitability) == 0x000000, "Member 'WBP_EnemyGauge_C_SetWorkSuitability::Suitability' has a wrong offset!");

// Function WBP_EnemyGauge.WBP_EnemyGauge_C.TryDisplayLowHealthNotice
// 0x0010 (0x0010 - 0x0000)
struct WBP_EnemyGauge_C_TryDisplayLowHealthNotice final
{
public:
	double                                        NowPercent;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EnemyGauge_C_TryDisplayLowHealthNotice) == 0x000008, "Wrong alignment on WBP_EnemyGauge_C_TryDisplayLowHealthNotice");
static_assert(sizeof(WBP_EnemyGauge_C_TryDisplayLowHealthNotice) == 0x000010, "Wrong size on WBP_EnemyGauge_C_TryDisplayLowHealthNotice");
static_assert(offsetof(WBP_EnemyGauge_C_TryDisplayLowHealthNotice, NowPercent) == 0x000000, "Member 'WBP_EnemyGauge_C_TryDisplayLowHealthNotice::NowPercent' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_TryDisplayLowHealthNotice, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000008, "Member 'WBP_EnemyGauge_C_TryDisplayLowHealthNotice::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_TryDisplayLowHealthNotice, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000009, "Member 'WBP_EnemyGauge_C_TryDisplayLowHealthNotice::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_TryDisplayLowHealthNotice, CallFunc_Less_DoubleDouble_ReturnValue_1) == 0x00000A, "Member 'WBP_EnemyGauge_C_TryDisplayLowHealthNotice::CallFunc_Less_DoubleDouble_ReturnValue_1' has a wrong offset!");

// Function WBP_EnemyGauge.WBP_EnemyGauge_C.UpdateForTick
// 0x0010 (0x0010 - 0x0000)
struct WBP_EnemyGauge_C_UpdateForTick final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Update_deltaTime_ImplicitCast;            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EnemyGauge_C_UpdateForTick) == 0x000008, "Wrong alignment on WBP_EnemyGauge_C_UpdateForTick");
static_assert(sizeof(WBP_EnemyGauge_C_UpdateForTick) == 0x000010, "Wrong size on WBP_EnemyGauge_C_UpdateForTick");
static_assert(offsetof(WBP_EnemyGauge_C_UpdateForTick, DeltaTime) == 0x000000, "Member 'WBP_EnemyGauge_C_UpdateForTick::DeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_EnemyGauge_C_UpdateForTick, CallFunc_Update_deltaTime_ImplicitCast) == 0x000008, "Member 'WBP_EnemyGauge_C_UpdateForTick::CallFunc_Update_deltaTime_ImplicitCast' has a wrong offset!");

}

