#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function BP_ArenaSequence_PartySelect.BP_ArenaSequence_PartySelect_C.EndProcess
// 0x0088 (0x0088 - 0x0000)
struct BP_ArenaSequence_PartySelect_C_EndProcess final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOutsiderSequencer_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_ArenaOutBattleFlag_ReturnValue;           // 0x0014(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalArenaWorldSubsystem*                CallFunc_GetWorldSubsystem_ReturnValue;            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerController*                   K2Node_DynamicCast_AsPal_Player_Controller;        // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalArenaSequencer*                     CallFunc_GetOuterSequencer_ReturnValue;            // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UPalIndividualCharacterHandle*>  CallFunc_GetInArenaPlayerHandles_ReturnValue;      // 0x0048(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_Array_Get_Item;                           // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character;         // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_PartySelect_C_EndProcess) == 0x000008, "Wrong alignment on BP_ArenaSequence_PartySelect_C_EndProcess");
static_assert(sizeof(BP_ArenaSequence_PartySelect_C_EndProcess) == 0x000088, "Wrong size on BP_ArenaSequence_PartySelect_C_EndProcess");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_EndProcess, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_ArenaSequence_PartySelect_C_EndProcess::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_EndProcess, CallFunc_IsServer_ReturnValue) == 0x000004, "Member 'BP_ArenaSequence_PartySelect_C_EndProcess::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_EndProcess, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_ArenaSequence_PartySelect_C_EndProcess::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_EndProcess, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_ArenaSequence_PartySelect_C_EndProcess::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_EndProcess, CallFunc_IsOutsiderSequencer_ReturnValue) == 0x000010, "Member 'BP_ArenaSequence_PartySelect_C_EndProcess::CallFunc_IsOutsiderSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_EndProcess, CallFunc_ArenaOutBattleFlag_ReturnValue) == 0x000014, "Member 'BP_ArenaSequence_PartySelect_C_EndProcess::CallFunc_ArenaOutBattleFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_EndProcess, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000020, "Member 'BP_ArenaSequence_PartySelect_C_EndProcess::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_EndProcess, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000028, "Member 'BP_ArenaSequence_PartySelect_C_EndProcess::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_EndProcess, K2Node_DynamicCast_AsPal_Player_Controller) == 0x000030, "Member 'BP_ArenaSequence_PartySelect_C_EndProcess::K2Node_DynamicCast_AsPal_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_EndProcess, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_ArenaSequence_PartySelect_C_EndProcess::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_EndProcess, CallFunc_GetOuterSequencer_ReturnValue) == 0x000040, "Member 'BP_ArenaSequence_PartySelect_C_EndProcess::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_EndProcess, CallFunc_GetInArenaPlayerHandles_ReturnValue) == 0x000048, "Member 'BP_ArenaSequence_PartySelect_C_EndProcess::CallFunc_GetInArenaPlayerHandles_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_EndProcess, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'BP_ArenaSequence_PartySelect_C_EndProcess::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_EndProcess, CallFunc_Array_Get_Item) == 0x000060, "Member 'BP_ArenaSequence_PartySelect_C_EndProcess::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_EndProcess, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'BP_ArenaSequence_PartySelect_C_EndProcess::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_EndProcess, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000070, "Member 'BP_ArenaSequence_PartySelect_C_EndProcess::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_EndProcess, K2Node_DynamicCast_AsPal_Player_Character) == 0x000078, "Member 'BP_ArenaSequence_PartySelect_C_EndProcess::K2Node_DynamicCast_AsPal_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_EndProcess, K2Node_DynamicCast_bSuccess_1) == 0x000080, "Member 'BP_ArenaSequence_PartySelect_C_EndProcess::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function BP_ArenaSequence_PartySelect.BP_ArenaSequence_PartySelect_C.ExecuteUbergraph_BP_ArenaSequence_PartySelect
// 0x01A8 (0x01A8 - 0x0000)
struct BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bResult)>                 K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOutsiderSequencer_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOutsiderSequencer_ReturnValue_1;        // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalArenaSequencer*                     CallFunc_GetOuterSequencer_ReturnValue;            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalArenaPlayerIndex                          CallFunc_GetLocalPlayerIndex_ReturnValue;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalArenaInstanceModel*                 CallFunc_GetInstanceModel_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLoaded_ForClient_ReturnValue;           // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerController*                   K2Node_DynamicCast_AsPal_Player_Controller;        // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_ArenaOutBattleFlag_ReturnValue;           // 0x005C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_ArenaOutBattleFlag_ReturnValue_1;         // 0x0064(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerState*                        CallFunc_GetLocalPlayerState_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSyncTeleportComponent*              CallFunc_GetSyncTeleportComp_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue_1;              // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalArenaSequencer*                     CallFunc_GetOuterSequencer_ReturnValue_1;          // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalArenaPlayerParty                   K2Node_CustomEvent_ArenaParty;                     // 0x0090(0x0020)()
	TDelegate<void(const struct FPalArenaPlayerParty& ArenaParty)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x00B0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_OpenPalSelectUI_ReturnValue;              // 0x00C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalAudioSettingSystem*                 CallFunc_GetAudioSettingSystem_ReturnValue;        // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAudioSettingSystem*                 CallFunc_GetAudioSettingSystem_ReturnValue_1;      // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerState*                        CallFunc_GetLocalPlayerState_ReturnValue_1;        // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSyncTeleportComponent*              CallFunc_GetSyncTeleportComp_ReturnValue_1;        // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x00F0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_ArenaOutBattleFlag_ReturnValue_2;         // 0x0100(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bResult;                        // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerState*                        CallFunc_GetLocalPlayerState_ReturnValue_2;        // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSyncTeleportComponent*              CallFunc_GetSyncTeleportComp_ReturnValue_2;        // 0x0118(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalPlayerState*                        CallFunc_GetLocalPlayerState_ReturnValue_3;        // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0128(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSyncTeleportComponent*              CallFunc_GetSyncTeleportComp_ReturnValue_3;        // 0x0138(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalizedText_ReturnValue;             // 0x0140(0x0018)()
	struct FGuid                                  CallFunc_Dialog_ReturnValue;                       // 0x0158(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0168(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_ArenaOutBattleFlag_ReturnValue_3;         // 0x0178(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_181[0x7];                                      // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalArenaSequencer*                     CallFunc_GetOuterSequencer_ReturnValue_2;          // 0x0188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0190(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_UpdateTimer_DeltaTime_ImplicitCast;       // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect) == 0x000008, "Wrong alignment on BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect");
static_assert(sizeof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect) == 0x0001A8, "Wrong size on BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, EntryPoint) == 0x000000, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, K2Node_Event_DeltaTime) == 0x000004, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, CallFunc_IsOutsiderSequencer_ReturnValue) == 0x000018, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::CallFunc_IsOutsiderSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, CallFunc_IsOutsiderSequencer_ReturnValue_1) == 0x000019, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::CallFunc_IsOutsiderSequencer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, CallFunc_GetOuterSequencer_ReturnValue) == 0x000020, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, CallFunc_GetLocalPlayerIndex_ReturnValue) == 0x000028, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::CallFunc_GetLocalPlayerIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000029, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, CallFunc_GetHUDService_ReturnValue) == 0x000030, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::CallFunc_GetHUDService_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, CallFunc_GetInstanceModel_ReturnValue) == 0x000038, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::CallFunc_GetInstanceModel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, CallFunc_IsLoaded_ForClient_ReturnValue) == 0x000040, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::CallFunc_IsLoaded_ForClient_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000048, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, K2Node_DynamicCast_AsPal_Player_Controller) == 0x000050, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::K2Node_DynamicCast_AsPal_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, CallFunc_ArenaOutBattleFlag_ReturnValue) == 0x00005C, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::CallFunc_ArenaOutBattleFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, CallFunc_ArenaOutBattleFlag_ReturnValue_1) == 0x000064, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::CallFunc_ArenaOutBattleFlag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, CallFunc_GetLocalPlayerState_ReturnValue) == 0x000070, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::CallFunc_GetLocalPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, CallFunc_GetSyncTeleportComp_ReturnValue) == 0x000078, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::CallFunc_GetSyncTeleportComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, CallFunc_GetHUDService_ReturnValue_1) == 0x000080, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::CallFunc_GetHUDService_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, CallFunc_GetOuterSequencer_ReturnValue_1) == 0x000088, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::CallFunc_GetOuterSequencer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, K2Node_CustomEvent_ArenaParty) == 0x000090, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::K2Node_CustomEvent_ArenaParty' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000B0, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, CallFunc_OpenPalSelectUI_ReturnValue) == 0x0000C0, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::CallFunc_OpenPalSelectUI_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, CallFunc_GetAudioSettingSystem_ReturnValue) == 0x0000D0, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::CallFunc_GetAudioSettingSystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, CallFunc_GetAudioSettingSystem_ReturnValue_1) == 0x0000D8, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::CallFunc_GetAudioSettingSystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, CallFunc_GetLocalPlayerState_ReturnValue_1) == 0x0000E0, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::CallFunc_GetLocalPlayerState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, CallFunc_GetSyncTeleportComp_ReturnValue_1) == 0x0000E8, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::CallFunc_GetSyncTeleportComp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000F0, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, CallFunc_ArenaOutBattleFlag_ReturnValue_2) == 0x000100, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::CallFunc_ArenaOutBattleFlag_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, K2Node_CustomEvent_bResult) == 0x000108, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::K2Node_CustomEvent_bResult' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, CallFunc_GetLocalPlayerState_ReturnValue_2) == 0x000110, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::CallFunc_GetLocalPlayerState_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, CallFunc_GetSyncTeleportComp_ReturnValue_2) == 0x000118, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::CallFunc_GetSyncTeleportComp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, CallFunc_GetLocalPlayerState_ReturnValue_3) == 0x000120, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::CallFunc_GetLocalPlayerState_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, K2Node_CreateDelegate_OutputDelegate_3) == 0x000128, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, CallFunc_GetSyncTeleportComp_ReturnValue_3) == 0x000138, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::CallFunc_GetSyncTeleportComp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, CallFunc_GetLocalizedText_ReturnValue) == 0x000140, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::CallFunc_GetLocalizedText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, CallFunc_Dialog_ReturnValue) == 0x000158, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::CallFunc_Dialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, K2Node_CreateDelegate_OutputDelegate_4) == 0x000168, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, CallFunc_ArenaOutBattleFlag_ReturnValue_3) == 0x000178, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::CallFunc_ArenaOutBattleFlag_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, CallFunc_IsServer_ReturnValue) == 0x000180, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, CallFunc_GetOuterSequencer_ReturnValue_2) == 0x000188, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::CallFunc_GetOuterSequencer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, K2Node_CreateDelegate_OutputDelegate_5) == 0x000190, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect, CallFunc_UpdateTimer_DeltaTime_ImplicitCast) == 0x0001A0, "Member 'BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect::CallFunc_UpdateTimer_DeltaTime_ImplicitCast' has a wrong offset!");

// Function BP_ArenaSequence_PartySelect.BP_ArenaSequence_PartySelect_C.OnConfirmBreak
// 0x0001 (0x0001 - 0x0000)
struct BP_ArenaSequence_PartySelect_C_OnConfirmBreak final
{
public:
	bool                                          bResult;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_PartySelect_C_OnConfirmBreak) == 0x000001, "Wrong alignment on BP_ArenaSequence_PartySelect_C_OnConfirmBreak");
static_assert(sizeof(BP_ArenaSequence_PartySelect_C_OnConfirmBreak) == 0x000001, "Wrong size on BP_ArenaSequence_PartySelect_C_OnConfirmBreak");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_OnConfirmBreak, bResult) == 0x000000, "Member 'BP_ArenaSequence_PartySelect_C_OnConfirmBreak::bResult' has a wrong offset!");

// Function BP_ArenaSequence_PartySelect.BP_ArenaSequence_PartySelect_C.OnTimerUpdated__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_ArenaSequence_PartySelect_C_OnTimerUpdated__DelegateSignature final
{
public:
	double                                        Time;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_PartySelect_C_OnTimerUpdated__DelegateSignature) == 0x000008, "Wrong alignment on BP_ArenaSequence_PartySelect_C_OnTimerUpdated__DelegateSignature");
static_assert(sizeof(BP_ArenaSequence_PartySelect_C_OnTimerUpdated__DelegateSignature) == 0x000008, "Wrong size on BP_ArenaSequence_PartySelect_C_OnTimerUpdated__DelegateSignature");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_OnTimerUpdated__DelegateSignature, Time) == 0x000000, "Member 'BP_ArenaSequence_PartySelect_C_OnTimerUpdated__DelegateSignature::Time' has a wrong offset!");

// Function BP_ArenaSequence_PartySelect.BP_ArenaSequence_PartySelect_C.PrintPartySelectLog
// 0x0208 (0x0208 - 0x0000)
struct BP_ArenaSequence_PartySelect_C_PrintPartySelectLog final
{
public:
	class FString                                 TmpString;                                         // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 EnemyPartyString;                                  // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 MyPartyString;                                     // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_MakeLiteralString_ReturnValue;            // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalArenaSequencer*                     CallFunc_GetOuterSequencer_ReturnValue;            // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalArenaPlayerIndex                          CallFunc_GetLocalPlayerIndex_ReturnValue;          // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalArenaSequencer*                     CallFunc_GetOuterSequencer_ReturnValue_1;          // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<EPalArenaPlayerIndex, struct FPalArenaPlayerInfo> CallFunc_GetArenaPlayerInfoMap_ReturnValue;        // 0x00A8(0x0050)(ConstParm)
	class FString                                 CallFunc_Conv_DoubleToString_ReturnValue;          // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<EPalArenaPlayerIndex>                  CallFunc_Map_Keys_Keys;                            // 0x0108(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EPalArenaPlayerIndex                          CallFunc_Array_Get_Item;                           // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Replace_ReturnValue_1;                    // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_141[0x7];                                      // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Replace_ReturnValue_2;                    // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_159[0x7];                                      // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalArenaPlayerInfo                    CallFunc_Map_Find_Value;                           // 0x0160(0x0048)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A9[0x3];                                      // 0x01A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B2[0x6];                                      // 0x01B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_Array_Get_Item_1;                         // 0x01B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C1[0x7];                                      // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetNickName_outName;                      // 0x01C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D9[0x7];                                      // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x01E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x01F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0204(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog) == 0x000008, "Wrong alignment on BP_ArenaSequence_PartySelect_C_PrintPartySelectLog");
static_assert(sizeof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog) == 0x000208, "Wrong size on BP_ArenaSequence_PartySelect_C_PrintPartySelectLog");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, TmpString) == 0x000000, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::TmpString' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, EnemyPartyString) == 0x000010, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::EnemyPartyString' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, MyPartyString) == 0x000020, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::MyPartyString' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, Temp_int_Array_Index_Variable) == 0x000030, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, CallFunc_Conv_IntToString_ReturnValue) == 0x000038, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, CallFunc_Concat_StrStr_ReturnValue) == 0x000048, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, Temp_int_Loop_Counter_Variable) == 0x000058, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, CallFunc_Add_IntInt_ReturnValue) == 0x00005C, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, Temp_int_Array_Index_Variable_1) == 0x000060, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000068, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, CallFunc_MakeLiteralString_ReturnValue) == 0x000078, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::CallFunc_MakeLiteralString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, Temp_int_Loop_Counter_Variable_1) == 0x000088, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, CallFunc_Add_IntInt_ReturnValue_1) == 0x00008C, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, CallFunc_GetOuterSequencer_ReturnValue) == 0x000090, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, CallFunc_GetLocalPlayerIndex_ReturnValue) == 0x000098, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::CallFunc_GetLocalPlayerIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, CallFunc_GetOuterSequencer_ReturnValue_1) == 0x0000A0, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::CallFunc_GetOuterSequencer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, CallFunc_GetArenaPlayerInfoMap_ReturnValue) == 0x0000A8, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::CallFunc_GetArenaPlayerInfoMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, CallFunc_Conv_DoubleToString_ReturnValue) == 0x0000F8, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::CallFunc_Conv_DoubleToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, CallFunc_Map_Keys_Keys) == 0x000108, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, CallFunc_Replace_ReturnValue) == 0x000118, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, CallFunc_Array_Get_Item) == 0x000128, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, CallFunc_Replace_ReturnValue_1) == 0x000130, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::CallFunc_Replace_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000140, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, CallFunc_Replace_ReturnValue_2) == 0x000148, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::CallFunc_Replace_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, CallFunc_Not_PreBool_ReturnValue) == 0x000158, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, CallFunc_Map_Find_Value) == 0x000160, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, CallFunc_Map_Find_ReturnValue) == 0x0001A8, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, CallFunc_Array_Length_ReturnValue) == 0x0001AC, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, CallFunc_Less_IntInt_ReturnValue) == 0x0001B0, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, CallFunc_Array_IsEmpty_ReturnValue) == 0x0001B1, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, CallFunc_Array_Get_Item_1) == 0x0001B8, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, CallFunc_Not_PreBool_ReturnValue_1) == 0x0001C0, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, CallFunc_GetNickName_outName) == 0x0001C8, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::CallFunc_GetNickName_outName' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, CallFunc_BooleanAND_ReturnValue) == 0x0001D8, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0001E0, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0001F0, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, CallFunc_Array_Length_ReturnValue_1) == 0x000200, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_PrintPartySelectLog, CallFunc_Less_IntInt_ReturnValue_1) == 0x000204, "Member 'BP_ArenaSequence_PartySelect_C_PrintPartySelectLog::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function BP_ArenaSequence_PartySelect.BP_ArenaSequence_PartySelect_C.SendParty
// 0x0018 (0x0018 - 0x0000)
struct BP_ArenaSequence_PartySelect_C_SendParty final
{
public:
	class UPalArenaInstanceModel*                 CallFunc_GetInstanceModel_ReturnValue;             // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalNetworkTransmitter*                 CallFunc_GetNetworkTransmitter_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalNetworkArenaComponent*              CallFunc_GetArena_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_PartySelect_C_SendParty) == 0x000008, "Wrong alignment on BP_ArenaSequence_PartySelect_C_SendParty");
static_assert(sizeof(BP_ArenaSequence_PartySelect_C_SendParty) == 0x000018, "Wrong size on BP_ArenaSequence_PartySelect_C_SendParty");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_SendParty, CallFunc_GetInstanceModel_ReturnValue) == 0x000000, "Member 'BP_ArenaSequence_PartySelect_C_SendParty::CallFunc_GetInstanceModel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_SendParty, CallFunc_GetNetworkTransmitter_ReturnValue) == 0x000008, "Member 'BP_ArenaSequence_PartySelect_C_SendParty::CallFunc_GetNetworkTransmitter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_SendParty, CallFunc_GetArena_ReturnValue) == 0x000010, "Member 'BP_ArenaSequence_PartySelect_C_SendParty::CallFunc_GetArena_ReturnValue' has a wrong offset!");

// Function BP_ArenaSequence_PartySelect.BP_ArenaSequence_PartySelect_C.SetParty
// 0x0020 (0x0020 - 0x0000)
struct BP_ArenaSequence_PartySelect_C_SetParty final
{
public:
	struct FPalArenaPlayerParty                   ArenaParty;                                        // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_ArenaSequence_PartySelect_C_SetParty) == 0x000008, "Wrong alignment on BP_ArenaSequence_PartySelect_C_SetParty");
static_assert(sizeof(BP_ArenaSequence_PartySelect_C_SetParty) == 0x000020, "Wrong size on BP_ArenaSequence_PartySelect_C_SetParty");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_SetParty, ArenaParty) == 0x000000, "Member 'BP_ArenaSequence_PartySelect_C_SetParty::ArenaParty' has a wrong offset!");

// Function BP_ArenaSequence_PartySelect.BP_ArenaSequence_PartySelect_C.TickSequence
// 0x0004 (0x0004 - 0x0000)
struct BP_ArenaSequence_PartySelect_C_TickSequence final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_PartySelect_C_TickSequence) == 0x000004, "Wrong alignment on BP_ArenaSequence_PartySelect_C_TickSequence");
static_assert(sizeof(BP_ArenaSequence_PartySelect_C_TickSequence) == 0x000004, "Wrong size on BP_ArenaSequence_PartySelect_C_TickSequence");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_TickSequence, DeltaTime) == 0x000000, "Member 'BP_ArenaSequence_PartySelect_C_TickSequence::DeltaTime' has a wrong offset!");

// Function BP_ArenaSequence_PartySelect.BP_ArenaSequence_PartySelect_C.UpdateTimer
// 0x0020 (0x0020 - 0x0000)
struct BP_ArenaSequence_PartySelect_C_UpdateTimer final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_PartySelect_C_UpdateTimer) == 0x000008, "Wrong alignment on BP_ArenaSequence_PartySelect_C_UpdateTimer");
static_assert(sizeof(BP_ArenaSequence_PartySelect_C_UpdateTimer) == 0x000020, "Wrong size on BP_ArenaSequence_PartySelect_C_UpdateTimer");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_UpdateTimer, DeltaTime) == 0x000000, "Member 'BP_ArenaSequence_PartySelect_C_UpdateTimer::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_UpdateTimer, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000008, "Member 'BP_ArenaSequence_PartySelect_C_UpdateTimer::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_UpdateTimer, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000010, "Member 'BP_ArenaSequence_PartySelect_C_UpdateTimer::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_PartySelect_C_UpdateTimer, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000018, "Member 'BP_ArenaSequence_PartySelect_C_UpdateTimer::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");

}

