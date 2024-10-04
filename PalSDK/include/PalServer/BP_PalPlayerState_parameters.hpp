#pragma once

#include "Basic.hpp"


namespace PalServer::Params
{

// Function BP_PalPlayerState.BP_PalPlayerState_C.ExecuteUbergraph_BP_PalPlayerState
// 0x0030 (0x0030 - 0x0000)
struct BP_PalPlayerState_C_ExecuteUbergraph_BP_PalPlayerState final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsSaveSuccess;                       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalSaveGameManager*                    CallFunc_GetSaveGameManager_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsWorldOwner_ReturnValue;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool IsSuccess)>               K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerState_C_ExecuteUbergraph_BP_PalPlayerState) == 0x000008, "Wrong alignment on BP_PalPlayerState_C_ExecuteUbergraph_BP_PalPlayerState");
static_assert(sizeof(BP_PalPlayerState_C_ExecuteUbergraph_BP_PalPlayerState) == 0x000030, "Wrong size on BP_PalPlayerState_C_ExecuteUbergraph_BP_PalPlayerState");
static_assert(offsetof(BP_PalPlayerState_C_ExecuteUbergraph_BP_PalPlayerState, EntryPoint) == 0x000000, "Member 'BP_PalPlayerState_C_ExecuteUbergraph_BP_PalPlayerState::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerState_C_ExecuteUbergraph_BP_PalPlayerState, K2Node_Event_bIsSaveSuccess) == 0x000004, "Member 'BP_PalPlayerState_C_ExecuteUbergraph_BP_PalPlayerState::K2Node_Event_bIsSaveSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerState_C_ExecuteUbergraph_BP_PalPlayerState, CallFunc_GetSaveGameManager_ReturnValue) == 0x000008, "Member 'BP_PalPlayerState_C_ExecuteUbergraph_BP_PalPlayerState::CallFunc_GetSaveGameManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerState_C_ExecuteUbergraph_BP_PalPlayerState, CallFunc_IsWorldOwner_ReturnValue) == 0x000010, "Member 'BP_PalPlayerState_C_ExecuteUbergraph_BP_PalPlayerState::CallFunc_IsWorldOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerState_C_ExecuteUbergraph_BP_PalPlayerState, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'BP_PalPlayerState_C_ExecuteUbergraph_BP_PalPlayerState::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerState_C_ExecuteUbergraph_BP_PalPlayerState, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000028, "Member 'BP_PalPlayerState_C_ExecuteUbergraph_BP_PalPlayerState::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");

// Function BP_PalPlayerState.BP_PalPlayerState_C.LoadTitleLevel
// 0x0001 (0x0001 - 0x0000)
struct BP_PalPlayerState_C_LoadTitleLevel final
{
public:
	bool                                          bIsSaveSuccess;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerState_C_LoadTitleLevel) == 0x000001, "Wrong alignment on BP_PalPlayerState_C_LoadTitleLevel");
static_assert(sizeof(BP_PalPlayerState_C_LoadTitleLevel) == 0x000001, "Wrong size on BP_PalPlayerState_C_LoadTitleLevel");
static_assert(offsetof(BP_PalPlayerState_C_LoadTitleLevel, bIsSaveSuccess) == 0x000000, "Member 'BP_PalPlayerState_C_LoadTitleLevel::bIsSaveSuccess' has a wrong offset!");

}

