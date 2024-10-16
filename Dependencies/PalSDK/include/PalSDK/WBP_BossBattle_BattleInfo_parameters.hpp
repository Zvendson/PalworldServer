#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_BossBattle_BattleInfo.WBP_BossBattle_BattleInfo_C.ActUICombatResult
// 0x0001 (0x0001 - 0x0000)
struct WBP_BossBattle_BattleInfo_C_ActUICombatResult final
{
public:
	EPalBossBattleCombatResult                    CombatResult;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BossBattle_BattleInfo_C_ActUICombatResult) == 0x000001, "Wrong alignment on WBP_BossBattle_BattleInfo_C_ActUICombatResult");
static_assert(sizeof(WBP_BossBattle_BattleInfo_C_ActUICombatResult) == 0x000001, "Wrong size on WBP_BossBattle_BattleInfo_C_ActUICombatResult");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ActUICombatResult, CombatResult) == 0x000000, "Member 'WBP_BossBattle_BattleInfo_C_ActUICombatResult::CombatResult' has a wrong offset!");

// Function WBP_BossBattle_BattleInfo.WBP_BossBattle_BattleInfo_C.ExecuteUbergraph_WBP_BossBattle_BattleInfo
// 0x01E0 (0x01E0 - 0x0000)
struct WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalBossBattleCombatResult                    K2Node_CustomEvent_CombatResult;                   // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36[0x2];                                       // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result_1;  // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1; // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalBossTower*                          K2Node_CustomEvent_BossTower;                      // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0074(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0088(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_92[0x2];                                       // 0x0092(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_CalcRemainBattleTime_ReturnValue;         // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue;                // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  K2Node_CustomEvent_CampId_1;                       // 0x00A8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  K2Node_CustomEvent_CampId;                         // 0x00B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalRaidBossBattleFinishType                  K2Node_CustomEvent_EndType;                        // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CA[0x6];                                       // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalRaidBossManager*                    CallFunc_GetRaidBossManager_ReturnValue;           // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DA[0x2];                                       // 0x00DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetRemainTimer_ReturnValue;               // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalRaidBossComponent*                  CallFunc_FindRaidComponent_ReturnValue;            // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EC[0x4];                                       // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_PalRaidBossComponent_C*             K2Node_DynamicCast_AsBP_Pal_Raid_Boss_Component;   // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F9[0x3];                                       // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x00FC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10C[0x4];                                      // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result_2;  // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2; // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result_3;  // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue_3; // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue_1;              // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0148(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x0158(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_1;                   // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0170(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidPlayerInCamp_ReturnValue;          // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_17A[0x2];                                      // 0x017A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_PalRaidBossComponent_C*             CallFunc_Array_Get_Item;                           // 0x0180(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x0188(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue_1;      // 0x019A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19B[0x5];                                      // 0x019B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalRaidBossManager*                    CallFunc_GetRaidBossManager_ReturnValue_1;         // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A9[0x7];                                      // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalRaidBossComponent*                  CallFunc_FindRaidComponent_ReturnValue_1;          // 0x01B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_PalRaidBossComponent_C*             K2Node_DynamicCast_AsBP_Pal_Raid_Boss_Component_1; // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue_2;      // 0x01C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x01C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x01C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue_3;      // 0x01C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C6[0x2];                                      // 0x01C6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_2;                   // 0x01C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_12;                   // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D1[0x7];                                      // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_FTrunc_A_ImplicitCast;                    // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo) == 0x000008, "Wrong alignment on WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo");
static_assert(sizeof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo) == 0x0001E0, "Wrong size on WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, EntryPoint) == 0x000000, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, K2Node_CustomEvent_CombatResult) == 0x000034, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::K2Node_CustomEvent_CombatResult' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, K2Node_SwitchEnum_CmpSuccess) == 0x000035, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000038, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000040, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_CreatePlayAnimationProxyObject_Result_1) == 0x000050, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_CreatePlayAnimationProxyObject_Result_1' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1) == 0x000058, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_IsValid_ReturnValue_1) == 0x000060, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, K2Node_CustomEvent_BossTower) == 0x000068, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::K2Node_CustomEvent_BossTower' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_IsValid_ReturnValue_2) == 0x000070, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, K2Node_CreateDelegate_OutputDelegate_3) == 0x000074, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000088, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_IsValid_ReturnValue_3) == 0x000090, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x000091, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_CalcRemainBattleTime_ReturnValue) == 0x000094, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_CalcRemainBattleTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_GetPalmi_ReturnValue) == 0x000098, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_GetHUDService_ReturnValue) == 0x0000A0, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_GetHUDService_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, K2Node_CustomEvent_CampId_1) == 0x0000A8, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::K2Node_CustomEvent_CampId_1' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, K2Node_CustomEvent_CampId) == 0x0000B8, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::K2Node_CustomEvent_CampId' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, K2Node_CustomEvent_EndType) == 0x0000C8, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::K2Node_CustomEvent_EndType' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, K2Node_SwitchEnum_CmpSuccess_1) == 0x0000C9, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_GetRaidBossManager_ReturnValue) == 0x0000D0, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_GetRaidBossManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_IsValid_ReturnValue_4) == 0x0000D8, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_IsValid_ReturnValue_5) == 0x0000D9, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_GetRemainTimer_ReturnValue) == 0x0000DC, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_GetRemainTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_FindRaidComponent_ReturnValue) == 0x0000E0, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_FindRaidComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_FTrunc_ReturnValue) == 0x0000E8, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, K2Node_DynamicCast_AsBP_Pal_Raid_Boss_Component) == 0x0000F0, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::K2Node_DynamicCast_AsBP_Pal_Raid_Boss_Component' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, K2Node_DynamicCast_bSuccess) == 0x0000F8, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, K2Node_CreateDelegate_OutputDelegate_4) == 0x0000FC, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_CreatePlayAnimationProxyObject_Result_2) == 0x000110, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_CreatePlayAnimationProxyObject_Result_2' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2) == 0x000118, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_IsValid_ReturnValue_6) == 0x000120, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_CreatePlayAnimationProxyObject_Result_3) == 0x000128, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_CreatePlayAnimationProxyObject_Result_3' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_CreatePlayAnimationProxyObject_ReturnValue_3) == 0x000130, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_CreatePlayAnimationProxyObject_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_IsValid_ReturnValue_7) == 0x000138, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_GetHUDService_ReturnValue_1) == 0x000140, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_GetHUDService_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, K2Node_CreateDelegate_OutputDelegate_5) == 0x000148, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, K2Node_CreateDelegate_OutputDelegate_6) == 0x000158, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_GetPalmi_ReturnValue_1) == 0x000168, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_GetPalmi_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000170, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_IsValidPlayerInCamp_ReturnValue) == 0x000178, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_IsValidPlayerInCamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_IsValid_ReturnValue_8) == 0x000179, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_Array_Add_ReturnValue) == 0x00017C, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_Array_Get_Item) == 0x000180, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, K2Node_CreateDelegate_OutputDelegate_7) == 0x000188, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_IsValid_ReturnValue_9) == 0x000198, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_Array_IsEmpty_ReturnValue) == 0x000199, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_K2_IsValidTimerHandle_ReturnValue_1) == 0x00019A, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_K2_IsValidTimerHandle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_GetRaidBossManager_ReturnValue_1) == 0x0001A0, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_GetRaidBossManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_IsValid_ReturnValue_10) == 0x0001A8, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_FindRaidComponent_ReturnValue_1) == 0x0001B0, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_FindRaidComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, K2Node_DynamicCast_AsBP_Pal_Raid_Boss_Component_1) == 0x0001B8, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::K2Node_DynamicCast_AsBP_Pal_Raid_Boss_Component_1' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, K2Node_DynamicCast_bSuccess_1) == 0x0001C0, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_Array_Contains_ReturnValue) == 0x0001C1, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_K2_IsValidTimerHandle_ReturnValue_2) == 0x0001C2, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_K2_IsValidTimerHandle_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_Array_RemoveItem_ReturnValue) == 0x0001C3, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_IsValid_ReturnValue_11) == 0x0001C4, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_K2_IsValidTimerHandle_ReturnValue_3) == 0x0001C5, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_K2_IsValidTimerHandle_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_GetPalmi_ReturnValue_2) == 0x0001C8, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_GetPalmi_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_IsValid_ReturnValue_12) == 0x0001D0, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo, CallFunc_FTrunc_A_ImplicitCast) == 0x0001D8, "Member 'WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo::CallFunc_FTrunc_A_ImplicitCast' has a wrong offset!");

// Function WBP_BossBattle_BattleInfo.WBP_BossBattle_BattleInfo_C.GetBossTower
// 0x0008 (0x0008 - 0x0000)
struct WBP_BossBattle_BattleInfo_C_GetBossTower final
{
public:
	class APalBossTower*                          BossTower;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BossBattle_BattleInfo_C_GetBossTower) == 0x000008, "Wrong alignment on WBP_BossBattle_BattleInfo_C_GetBossTower");
static_assert(sizeof(WBP_BossBattle_BattleInfo_C_GetBossTower) == 0x000008, "Wrong size on WBP_BossBattle_BattleInfo_C_GetBossTower");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_GetBossTower, BossTower) == 0x000000, "Member 'WBP_BossBattle_BattleInfo_C_GetBossTower::BossTower' has a wrong offset!");

// Function WBP_BossBattle_BattleInfo.WBP_BossBattle_BattleInfo_C.OnRaidBossBattleEnd
// 0x0014 (0x0014 - 0x0000)
struct WBP_BossBattle_BattleInfo_C_OnRaidBossBattleEnd final
{
public:
	struct FGuid                                  CampID;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalRaidBossBattleFinishType                  EndType;                                           // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BossBattle_BattleInfo_C_OnRaidBossBattleEnd) == 0x000004, "Wrong alignment on WBP_BossBattle_BattleInfo_C_OnRaidBossBattleEnd");
static_assert(sizeof(WBP_BossBattle_BattleInfo_C_OnRaidBossBattleEnd) == 0x000014, "Wrong size on WBP_BossBattle_BattleInfo_C_OnRaidBossBattleEnd");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_OnRaidBossBattleEnd, CampID) == 0x000000, "Member 'WBP_BossBattle_BattleInfo_C_OnRaidBossBattleEnd::CampID' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_OnRaidBossBattleEnd, EndType) == 0x000010, "Member 'WBP_BossBattle_BattleInfo_C_OnRaidBossBattleEnd::EndType' has a wrong offset!");

// Function WBP_BossBattle_BattleInfo.WBP_BossBattle_BattleInfo_C.OnRaidBossBattleStart
// 0x0010 (0x0010 - 0x0000)
struct WBP_BossBattle_BattleInfo_C_OnRaidBossBattleStart final
{
public:
	struct FGuid                                  CampID;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BossBattle_BattleInfo_C_OnRaidBossBattleStart) == 0x000004, "Wrong alignment on WBP_BossBattle_BattleInfo_C_OnRaidBossBattleStart");
static_assert(sizeof(WBP_BossBattle_BattleInfo_C_OnRaidBossBattleStart) == 0x000010, "Wrong size on WBP_BossBattle_BattleInfo_C_OnRaidBossBattleStart");
static_assert(offsetof(WBP_BossBattle_BattleInfo_C_OnRaidBossBattleStart, CampID) == 0x000000, "Member 'WBP_BossBattle_BattleInfo_C_OnRaidBossBattleStart::CampID' has a wrong offset!");

}

