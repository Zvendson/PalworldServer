#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function WBP_InGame_Arena.WBP_InGame_Arena_C.ExecuteUbergraph_WBP_InGame_Arena
// 0x0220 (0x0220 - 0x0000)
struct WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Time)>                   K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalArenaSequencer*                     K2Node_CustomEvent_ArenaSequence;                  // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_CurrentIndex;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 CurrentIndex)>           K2Node_CreateDelegate_OutputDelegate_4;            // 0x0058(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result; // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue; // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1; // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1; // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0094(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalArenaPlayerIndex                          CallFunc_GetLocalPlayerIndex_ReturnValue;          // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A5[0x3];                                       // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EPalArenaPlayerIndex, struct FPalArenaPlayerInfo> CallFunc_GetArenaPlayerInfoMap_ReturnValue;        // 0x00A8(0x0050)(ConstParm)
	class UPalArenaSequenceBase*                  CallFunc_GetCurrentSequence_ReturnValue;           // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_ArenaSequence_InBattle_C*           K2Node_DynamicCast_AsBP_Arena_Sequence_in_Battle;  // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_ArenaSequence_PreBattle_C*          K2Node_DynamicCast_AsBP_Arena_Sequence_Pre_Battle; // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalArenaSequenceBase*                  CallFunc_GetCurrentSequence_ReturnValue_1;         // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_2; // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_2; // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_ArenaSequence_Result_C*             K2Node_DynamicCast_AsBP_Arena_Sequence_Result;     // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_142[0x2];                                      // 0x0142(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x0144(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_154[0x4];                                      // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_3; // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_3; // 0x0160(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_169[0x3];                                      // 0x0169(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x016C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& WinnerName)> K2Node_CreateDelegate_OutputDelegate_8;            // 0x017C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18C[0x4];                                      // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_WinnerName;                     // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01A8(0x0018)()
	class UWBP_InGame_Match_Win_C*                CallFunc_Create_ReturnValue;                       // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalPlayerState*                        CallFunc_GetLocalPlayerState_ReturnValue;          // 0x01C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSyncTeleportComponent*              CallFunc_GetSyncTeleportComp_ReturnValue;          // 0x01D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;            // 0x01D8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E9[0x7];                                      // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerState*                        CallFunc_GetLocalPlayerState_ReturnValue_1;        // 0x01F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_10;           // 0x01F8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSyncTeleportComponent*              CallFunc_GetSyncTeleportComp_ReturnValue_1;        // 0x0208(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_11;           // 0x0210(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena) == 0x000008, "Wrong alignment on WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena");
static_assert(sizeof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena) == 0x000220, "Wrong size on WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, EntryPoint) == 0x000000, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, K2Node_CreateDelegate_OutputDelegate_3) == 0x000034, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, K2Node_CustomEvent_ArenaSequence) == 0x000048, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::K2Node_CustomEvent_ArenaSequence' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, K2Node_CustomEvent_CurrentIndex) == 0x000050, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::K2Node_CustomEvent_CurrentIndex' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, K2Node_SwitchInteger_CmpSuccess) == 0x000054, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, K2Node_CreateDelegate_OutputDelegate_4) == 0x000058, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result) == 0x000068, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue) == 0x000070, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, CallFunc_IsValid_ReturnValue) == 0x000078, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1) == 0x000080, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1) == 0x000088, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, CallFunc_IsValid_ReturnValue_1) == 0x000090, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, K2Node_CreateDelegate_OutputDelegate_5) == 0x000094, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, CallFunc_GetLocalPlayerIndex_ReturnValue) == 0x0000A4, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::CallFunc_GetLocalPlayerIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, CallFunc_GetArenaPlayerInfoMap_ReturnValue) == 0x0000A8, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::CallFunc_GetArenaPlayerInfoMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, CallFunc_GetCurrentSequence_ReturnValue) == 0x0000F8, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::CallFunc_GetCurrentSequence_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, K2Node_DynamicCast_AsBP_Arena_Sequence_in_Battle) == 0x000100, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::K2Node_DynamicCast_AsBP_Arena_Sequence_in_Battle' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, K2Node_DynamicCast_bSuccess) == 0x000108, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, K2Node_DynamicCast_AsBP_Arena_Sequence_Pre_Battle) == 0x000110, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::K2Node_DynamicCast_AsBP_Arena_Sequence_Pre_Battle' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, K2Node_DynamicCast_bSuccess_1) == 0x000118, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, CallFunc_GetCurrentSequence_ReturnValue_1) == 0x000120, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::CallFunc_GetCurrentSequence_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_2) == 0x000128, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_2' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_2) == 0x000130, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, K2Node_DynamicCast_AsBP_Arena_Sequence_Result) == 0x000138, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::K2Node_DynamicCast_AsBP_Arena_Sequence_Result' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, K2Node_DynamicCast_bSuccess_2) == 0x000140, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, CallFunc_IsValid_ReturnValue_2) == 0x000141, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, K2Node_CreateDelegate_OutputDelegate_6) == 0x000144, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_3) == 0x000158, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_3' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_3) == 0x000160, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, CallFunc_IsValid_ReturnValue_3) == 0x000168, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, K2Node_CreateDelegate_OutputDelegate_7) == 0x00016C, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, K2Node_CreateDelegate_OutputDelegate_8) == 0x00017C, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, K2Node_CustomEvent_WinnerName) == 0x000190, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::K2Node_CustomEvent_WinnerName' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, CallFunc_GetLocalPlayerController_ReturnValue) == 0x0001A0, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, CallFunc_Conv_StringToText_ReturnValue) == 0x0001A8, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, CallFunc_Create_ReturnValue) == 0x0001C0, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, CallFunc_GetLocalPlayerState_ReturnValue) == 0x0001C8, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::CallFunc_GetLocalPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, CallFunc_GetSyncTeleportComp_ReturnValue) == 0x0001D0, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::CallFunc_GetSyncTeleportComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, K2Node_CreateDelegate_OutputDelegate_9) == 0x0001D8, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, CallFunc_IsValid_ReturnValue_4) == 0x0001E8, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, CallFunc_GetLocalPlayerState_ReturnValue_1) == 0x0001F0, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::CallFunc_GetLocalPlayerState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, K2Node_CreateDelegate_OutputDelegate_10) == 0x0001F8, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, CallFunc_GetSyncTeleportComp_ReturnValue_1) == 0x000208, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::CallFunc_GetSyncTeleportComp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena, K2Node_CreateDelegate_OutputDelegate_11) == 0x000210, "Member 'WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");

// Function WBP_InGame_Arena.WBP_InGame_Arena_C.OnArenaSequenceStart
// 0x0008 (0x0008 - 0x0000)
struct WBP_InGame_Arena_C_OnArenaSequenceStart final
{
public:
	class UPalArenaSequencer*                     ArenaSequence;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InGame_Arena_C_OnArenaSequenceStart) == 0x000008, "Wrong alignment on WBP_InGame_Arena_C_OnArenaSequenceStart");
static_assert(sizeof(WBP_InGame_Arena_C_OnArenaSequenceStart) == 0x000008, "Wrong size on WBP_InGame_Arena_C_OnArenaSequenceStart");
static_assert(offsetof(WBP_InGame_Arena_C_OnArenaSequenceStart, ArenaSequence) == 0x000000, "Member 'WBP_InGame_Arena_C_OnArenaSequenceStart::ArenaSequence' has a wrong offset!");

// Function WBP_InGame_Arena.WBP_InGame_Arena_C.OnSequenceStageChanged
// 0x0004 (0x0004 - 0x0000)
struct WBP_InGame_Arena_C_OnSequenceStageChanged final
{
public:
	int32                                         CurrentIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InGame_Arena_C_OnSequenceStageChanged) == 0x000004, "Wrong alignment on WBP_InGame_Arena_C_OnSequenceStageChanged");
static_assert(sizeof(WBP_InGame_Arena_C_OnSequenceStageChanged) == 0x000004, "Wrong size on WBP_InGame_Arena_C_OnSequenceStageChanged");
static_assert(offsetof(WBP_InGame_Arena_C_OnSequenceStageChanged, CurrentIndex) == 0x000000, "Member 'WBP_InGame_Arena_C_OnSequenceStageChanged::CurrentIndex' has a wrong offset!");

// Function WBP_InGame_Arena.WBP_InGame_Arena_C.WinUI
// 0x0010 (0x0010 - 0x0000)
struct WBP_InGame_Arena_C_WinUI final
{
public:
	class FString                                 WinnerName;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InGame_Arena_C_WinUI) == 0x000008, "Wrong alignment on WBP_InGame_Arena_C_WinUI");
static_assert(sizeof(WBP_InGame_Arena_C_WinUI) == 0x000010, "Wrong size on WBP_InGame_Arena_C_WinUI");
static_assert(offsetof(WBP_InGame_Arena_C_WinUI, WinnerName) == 0x000000, "Member 'WBP_InGame_Arena_C_WinUI::WinnerName' has a wrong offset!");

}

