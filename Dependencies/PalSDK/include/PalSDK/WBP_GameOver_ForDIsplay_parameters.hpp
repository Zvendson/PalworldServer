#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_GameOver_ForDIsplay.WBP_GameOver_ForDIsplay_C.ExecuteUbergraph_WBP_GameOver_ForDIsplay
// 0x0260 (0x0260 - 0x0000)
struct WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0008(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x004C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue; // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FCeil_ReturnValue;                        // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0068(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0078(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerState*                        CallFunc_GetLocalPlayerState_ReturnValue;          // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPalLogInfo_DropPal>            CallFunc_GetAndClearLastDropPalInfo_ReturnValue;   // 0x0098(0x0010)(ReferenceParm)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x00A8(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue;           // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x3];                                       // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x00BC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x00CC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x00E0(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UPalOptionSubsystem*                    CallFunc_GetOptionSubsystem_ReturnValue;           // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalOptionWorldSettings                CallFunc_GetOptionWorldSettings_ReturnValue;       // 0x00F8(0x0160)(ConstParm)
	double                                        CallFunc_FCeil_A_ImplicitCast;                     // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay) == 0x000008, "Wrong alignment on WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay");
static_assert(sizeof(WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay) == 0x000260, "Wrong size on WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay");
static_assert(offsetof(WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay, EntryPoint) == 0x000000, "Member 'WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay, K2Node_Event_MyGeometry) == 0x000008, "Member 'WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay, K2Node_Event_InDeltaTime) == 0x000048, "Member 'WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay, K2Node_CreateDelegate_OutputDelegate) == 0x00004C, "Member 'WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x00005C, "Member 'WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay, CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue) == 0x000060, "Member 'WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay::CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay, CallFunc_FCeil_ReturnValue) == 0x000064, "Member 'WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay::CallFunc_FCeil_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay, K2Node_CreateDelegate_OutputDelegate_1) == 0x000068, "Member 'WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay, K2Node_CreateDelegate_OutputDelegate_2) == 0x000078, "Member 'WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay, CallFunc_GetLocalPlayerState_ReturnValue) == 0x000088, "Member 'WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay::CallFunc_GetLocalPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay, CallFunc_GetGameSetting_ReturnValue) == 0x000090, "Member 'WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay, CallFunc_GetAndClearLastDropPalInfo_ReturnValue) == 0x000098, "Member 'WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay::CallFunc_GetAndClearLastDropPalInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0000A8, "Member 'WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay, CallFunc_GetPalDebugSetting_ReturnValue) == 0x0000B0, "Member 'WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay::CallFunc_GetPalDebugSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay, CallFunc_IsValid_ReturnValue) == 0x0000B8, "Member 'WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000BC, "Member 'WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay, K2Node_CreateDelegate_OutputDelegate_4) == 0x0000CC, "Member 'WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x0000E0, "Member 'WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay, CallFunc_GetOptionSubsystem_ReturnValue) == 0x0000E8, "Member 'WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay::CallFunc_GetOptionSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay, CallFunc_IsValid_ReturnValue_1) == 0x0000F0, "Member 'WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay, CallFunc_GetOptionWorldSettings_ReturnValue) == 0x0000F8, "Member 'WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay::CallFunc_GetOptionWorldSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay, CallFunc_FCeil_A_ImplicitCast) == 0x000258, "Member 'WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay::CallFunc_FCeil_A_ImplicitCast' has a wrong offset!");

// Function WBP_GameOver_ForDIsplay.WBP_GameOver_ForDIsplay_C.OnClickedRespawnButton
// 0x0038 (0x0038 - 0x0000)
struct WBP_GameOver_ForDIsplay_C_OnClickedRespawnButton final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsExistRespawnLocation_ReturnValue;       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameter_WorldMap*      CallFunc_SpawnObject_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_Push_ReturnValue;                         // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GameOver_ForDIsplay_C_OnClickedRespawnButton) == 0x000008, "Wrong alignment on WBP_GameOver_ForDIsplay_C_OnClickedRespawnButton");
static_assert(sizeof(WBP_GameOver_ForDIsplay_C_OnClickedRespawnButton) == 0x000038, "Wrong size on WBP_GameOver_ForDIsplay_C_OnClickedRespawnButton");
static_assert(offsetof(WBP_GameOver_ForDIsplay_C_OnClickedRespawnButton, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_GameOver_ForDIsplay_C_OnClickedRespawnButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_ForDIsplay_C_OnClickedRespawnButton, CallFunc_IsExistRespawnLocation_ReturnValue) == 0x000010, "Member 'WBP_GameOver_ForDIsplay_C_OnClickedRespawnButton::CallFunc_IsExistRespawnLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_ForDIsplay_C_OnClickedRespawnButton, CallFunc_GetHUDService_ReturnValue) == 0x000018, "Member 'WBP_GameOver_ForDIsplay_C_OnClickedRespawnButton::CallFunc_GetHUDService_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_ForDIsplay_C_OnClickedRespawnButton, CallFunc_SpawnObject_ReturnValue) == 0x000020, "Member 'WBP_GameOver_ForDIsplay_C_OnClickedRespawnButton::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_ForDIsplay_C_OnClickedRespawnButton, CallFunc_Push_ReturnValue) == 0x000028, "Member 'WBP_GameOver_ForDIsplay_C_OnClickedRespawnButton::CallFunc_Push_ReturnValue' has a wrong offset!");

// Function WBP_GameOver_ForDIsplay.WBP_GameOver_ForDIsplay_C.OnFinishedClose
// 0x0018 (0x0018 - 0x0000)
struct WBP_GameOver_ForDIsplay_C_OnFinishedClose final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerState*                        CallFunc_GetLocalPlayerState_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GameOver_ForDIsplay_C_OnFinishedClose) == 0x000008, "Wrong alignment on WBP_GameOver_ForDIsplay_C_OnFinishedClose");
static_assert(sizeof(WBP_GameOver_ForDIsplay_C_OnFinishedClose) == 0x000018, "Wrong size on WBP_GameOver_ForDIsplay_C_OnFinishedClose");
static_assert(offsetof(WBP_GameOver_ForDIsplay_C_OnFinishedClose, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_GameOver_ForDIsplay_C_OnFinishedClose::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_ForDIsplay_C_OnFinishedClose, CallFunc_GetLocalPlayerState_ReturnValue) == 0x000010, "Member 'WBP_GameOver_ForDIsplay_C_OnFinishedClose::CallFunc_GetLocalPlayerState_ReturnValue' has a wrong offset!");

// Function WBP_GameOver_ForDIsplay.WBP_GameOver_ForDIsplay_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_GameOver_ForDIsplay_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GameOver_ForDIsplay_C_Tick) == 0x000008, "Wrong alignment on WBP_GameOver_ForDIsplay_C_Tick");
static_assert(sizeof(WBP_GameOver_ForDIsplay_C_Tick) == 0x000048, "Wrong size on WBP_GameOver_ForDIsplay_C_Tick");
static_assert(offsetof(WBP_GameOver_ForDIsplay_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_GameOver_ForDIsplay_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_ForDIsplay_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_GameOver_ForDIsplay_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_GameOver_ForDIsplay.WBP_GameOver_ForDIsplay_C.BP_GetDesiredFocusTarget
// 0x0008 (0x0008 - 0x0000)
struct WBP_GameOver_ForDIsplay_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GameOver_ForDIsplay_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_GameOver_ForDIsplay_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_GameOver_ForDIsplay_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong size on WBP_GameOver_ForDIsplay_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_GameOver_ForDIsplay_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_GameOver_ForDIsplay_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");

}

