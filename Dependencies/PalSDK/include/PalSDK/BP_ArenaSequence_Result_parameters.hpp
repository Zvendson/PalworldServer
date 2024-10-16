#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "AkAudio_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_ArenaSequence_Result.BP_ArenaSequence_Result_C.End Process
// 0x0020 (0x0020 - 0x0000)
struct BP_ArenaSequence_Result_C_End_Process final
{
public:
	class UPalArenaInstanceModel*                 CallFunc_GetInstanceModel_ReturnValue;             // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalNetworkTransmitter*                 CallFunc_GetNetworkTransmitter_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalNetworkArenaComponent*              CallFunc_GetArena_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOutsiderSequencer_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_Result_C_End_Process) == 0x000008, "Wrong alignment on BP_ArenaSequence_Result_C_End_Process");
static_assert(sizeof(BP_ArenaSequence_Result_C_End_Process) == 0x000020, "Wrong size on BP_ArenaSequence_Result_C_End_Process");
static_assert(offsetof(BP_ArenaSequence_Result_C_End_Process, CallFunc_GetInstanceModel_ReturnValue) == 0x000000, "Member 'BP_ArenaSequence_Result_C_End_Process::CallFunc_GetInstanceModel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_End_Process, CallFunc_GetNetworkTransmitter_ReturnValue) == 0x000008, "Member 'BP_ArenaSequence_Result_C_End_Process::CallFunc_GetNetworkTransmitter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_End_Process, CallFunc_GetArena_ReturnValue) == 0x000010, "Member 'BP_ArenaSequence_Result_C_End_Process::CallFunc_GetArena_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_End_Process, CallFunc_IsOutsiderSequencer_ReturnValue) == 0x000018, "Member 'BP_ArenaSequence_Result_C_End_Process::CallFunc_IsOutsiderSequencer_ReturnValue' has a wrong offset!");

// Function BP_ArenaSequence_Result.BP_ArenaSequence_Result_C.ExecuteUbergraph_BP_ArenaSequence_Result
// 0x01C0 (0x01C0 - 0x0000)
struct BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalArenaPlayerIndex                          Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalArenaPlayerIndex                          Temp_byte_Variable_1;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bIsSkipped)>              K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalArenaSequencer*                     CallFunc_GetOuterSequencer_ReturnValue;            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalArenaInstanceModel*                 CallFunc_GetInstanceModel_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerController*                   K2Node_DynamicCast_AsPal_Player_Controller;        // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalArenaLevelInstance*                 CallFunc_GetArenaLevelInstance_ReturnValue;        // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58[0x8];                                       // 0x0058(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0060(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCutsceneActor*                      CallFunc_SpawnCutsceneActor_ReturnValue;           // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalArenaPlayerIndex                          Temp_byte_Variable_2;                              // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalArenaPlayerIndex                          Temp_byte_Variable_3;                              // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bIsSkipped;                     // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalArenaBattleResult                         Temp_byte_Variable_4;                              // 0x00CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_Array_Get_Item;                           // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DD[0x3];                                       // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalArenaSequencer*                     CallFunc_GetOuterSequencer_ReturnValue_1;          // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<EPalArenaPlayerIndex, struct FPalArenaPlayerInfo> CallFunc_GetArenaPlayerInfoMap_ReturnValue;        // 0x00E8(0x0050)(ConstParm)
	EPalArenaPlayerIndex                          K2Node_Select_Default;                             // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalArenaPlayerInfo                    CallFunc_Map_Find_Value;                           // 0x0140(0x0048)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18A[0x6];                                      // 0x018A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetNickName_outName;                      // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOutsiderSequencer_ReturnValue;          // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A1[0x3];                                      // 0x01A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A9[0x3];                                      // 0x01A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOutsiderSequencer_ReturnValue_1;        // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result) == 0x000010, "Wrong alignment on BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result");
static_assert(sizeof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result) == 0x0001C0, "Wrong size on BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result");
static_assert(offsetof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result, EntryPoint) == 0x000000, "Member 'BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result, Temp_byte_Variable) == 0x000004, "Member 'BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result, Temp_byte_Variable_1) == 0x00000C, "Member 'BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result, CallFunc_GetOuterSequencer_ReturnValue) == 0x000020, "Member 'BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result, K2Node_SwitchEnum_CmpSuccess) == 0x000028, "Member 'BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000030, "Member 'BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result, CallFunc_GetInstanceModel_ReturnValue) == 0x000038, "Member 'BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result::CallFunc_GetInstanceModel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result, K2Node_DynamicCast_AsPal_Player_Controller) == 0x000040, "Member 'BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result::K2Node_DynamicCast_AsPal_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result, CallFunc_GetArenaLevelInstance_ReturnValue) == 0x000050, "Member 'BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result::CallFunc_GetArenaLevelInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result, CallFunc_GetTransform_ReturnValue) == 0x000060, "Member 'BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result, CallFunc_SpawnCutsceneActor_ReturnValue) == 0x0000C0, "Member 'BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result::CallFunc_SpawnCutsceneActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result, Temp_byte_Variable_2) == 0x0000C8, "Member 'BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result, Temp_byte_Variable_3) == 0x0000C9, "Member 'BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result, K2Node_CustomEvent_bIsSkipped) == 0x0000CA, "Member 'BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result::K2Node_CustomEvent_bIsSkipped' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result, Temp_byte_Variable_4) == 0x0000CB, "Member 'BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result, CallFunc_Array_Get_Item) == 0x0000D0, "Member 'BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result, CallFunc_Array_Length_ReturnValue) == 0x0000D8, "Member 'BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result, CallFunc_IsValid_ReturnValue) == 0x0000DC, "Member 'BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result, CallFunc_GetOuterSequencer_ReturnValue_1) == 0x0000E0, "Member 'BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result::CallFunc_GetOuterSequencer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result, CallFunc_GetArenaPlayerInfoMap_ReturnValue) == 0x0000E8, "Member 'BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result::CallFunc_GetArenaPlayerInfoMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result, K2Node_Select_Default) == 0x000138, "Member 'BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result, CallFunc_Map_Find_Value) == 0x000140, "Member 'BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result, CallFunc_Map_Find_ReturnValue) == 0x000188, "Member 'BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result, CallFunc_IsValid_ReturnValue_1) == 0x000189, "Member 'BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result, CallFunc_GetNickName_outName) == 0x000190, "Member 'BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result::CallFunc_GetNickName_outName' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result, CallFunc_IsOutsiderSequencer_ReturnValue) == 0x0001A0, "Member 'BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result::CallFunc_IsOutsiderSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result, Temp_int_Loop_Counter_Variable) == 0x0001A4, "Member 'BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result, CallFunc_Less_IntInt_ReturnValue) == 0x0001A8, "Member 'BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result, CallFunc_Add_IntInt_ReturnValue) == 0x0001AC, "Member 'BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result, CallFunc_IsOutsiderSequencer_ReturnValue_1) == 0x0001B0, "Member 'BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result::CallFunc_IsOutsiderSequencer_ReturnValue_1' has a wrong offset!");

// Function BP_ArenaSequence_Result.BP_ArenaSequence_Result_C.GetOffAllPlayer
// 0x00F0 (0x00F0 - 0x0000)
struct BP_ArenaSequence_Result_C_GetOffAllPlayer final
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalArenaSequencer*                     CallFunc_GetOuterSequencer_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<EPalArenaPlayerIndex, struct FPalArenaPlayerInfo> CallFunc_GetArenaPlayerInfoMap_ReturnValue;        // 0x0018(0x0050)(ConstParm)
	TArray<EPalArenaPlayerIndex>                  CallFunc_Map_Keys_Keys;                            // 0x0068(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalArenaPlayerIndex                          CallFunc_Array_Get_Item;                           // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E[0x2];                                       // 0x007E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalArenaPlayerInfo                    CallFunc_Map_Find_Value;                           // 0x0080(0x0048)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetIndividualActor_ReturnValue;           // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetOffFromPal_ReturnValue;                // 0x00DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DB[0x5];                                       // 0x00DB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalRiderComponent*                     CallFunc_GetComponentByClass_ReturnValue;          // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRiding_ReturnValue;                     // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_Result_C_GetOffAllPlayer) == 0x000008, "Wrong alignment on BP_ArenaSequence_Result_C_GetOffAllPlayer");
static_assert(sizeof(BP_ArenaSequence_Result_C_GetOffAllPlayer) == 0x0000F0, "Wrong size on BP_ArenaSequence_Result_C_GetOffAllPlayer");
static_assert(offsetof(BP_ArenaSequence_Result_C_GetOffAllPlayer, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'BP_ArenaSequence_Result_C_GetOffAllPlayer::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_GetOffAllPlayer, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'BP_ArenaSequence_Result_C_GetOffAllPlayer::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_GetOffAllPlayer, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_ArenaSequence_Result_C_GetOffAllPlayer::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_GetOffAllPlayer, CallFunc_IsServer_ReturnValue) == 0x00000C, "Member 'BP_ArenaSequence_Result_C_GetOffAllPlayer::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_GetOffAllPlayer, CallFunc_GetOuterSequencer_ReturnValue) == 0x000010, "Member 'BP_ArenaSequence_Result_C_GetOffAllPlayer::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_GetOffAllPlayer, CallFunc_GetArenaPlayerInfoMap_ReturnValue) == 0x000018, "Member 'BP_ArenaSequence_Result_C_GetOffAllPlayer::CallFunc_GetArenaPlayerInfoMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_GetOffAllPlayer, CallFunc_Map_Keys_Keys) == 0x000068, "Member 'BP_ArenaSequence_Result_C_GetOffAllPlayer::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_GetOffAllPlayer, CallFunc_Array_Length_ReturnValue) == 0x000078, "Member 'BP_ArenaSequence_Result_C_GetOffAllPlayer::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_GetOffAllPlayer, CallFunc_Array_Get_Item) == 0x00007C, "Member 'BP_ArenaSequence_Result_C_GetOffAllPlayer::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_GetOffAllPlayer, CallFunc_Less_IntInt_ReturnValue) == 0x00007D, "Member 'BP_ArenaSequence_Result_C_GetOffAllPlayer::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_GetOffAllPlayer, CallFunc_Map_Find_Value) == 0x000080, "Member 'BP_ArenaSequence_Result_C_GetOffAllPlayer::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_GetOffAllPlayer, CallFunc_Map_Find_ReturnValue) == 0x0000C8, "Member 'BP_ArenaSequence_Result_C_GetOffAllPlayer::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_GetOffAllPlayer, CallFunc_GetIndividualActor_ReturnValue) == 0x0000D0, "Member 'BP_ArenaSequence_Result_C_GetOffAllPlayer::CallFunc_GetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_GetOffAllPlayer, CallFunc_IsValid_ReturnValue) == 0x0000D8, "Member 'BP_ArenaSequence_Result_C_GetOffAllPlayer::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_GetOffAllPlayer, CallFunc_IsValid_ReturnValue_1) == 0x0000D9, "Member 'BP_ArenaSequence_Result_C_GetOffAllPlayer::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_GetOffAllPlayer, CallFunc_GetOffFromPal_ReturnValue) == 0x0000DA, "Member 'BP_ArenaSequence_Result_C_GetOffAllPlayer::CallFunc_GetOffFromPal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_GetOffAllPlayer, CallFunc_GetComponentByClass_ReturnValue) == 0x0000E0, "Member 'BP_ArenaSequence_Result_C_GetOffAllPlayer::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_GetOffAllPlayer, CallFunc_IsRiding_ReturnValue) == 0x0000E8, "Member 'BP_ArenaSequence_Result_C_GetOffAllPlayer::CallFunc_IsRiding_ReturnValue' has a wrong offset!");

// Function BP_ArenaSequence_Result.BP_ArenaSequence_Result_C.InactivateCharacter
// 0x0010 (0x0010 - 0x0000)
struct BP_ArenaSequence_Result_C_InactivateCharacter final
{
public:
	class APalCharacter*                          Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetActiveActorFlag_ReturnValue;           // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_Result_C_InactivateCharacter) == 0x000008, "Wrong alignment on BP_ArenaSequence_Result_C_InactivateCharacter");
static_assert(sizeof(BP_ArenaSequence_Result_C_InactivateCharacter) == 0x000010, "Wrong size on BP_ArenaSequence_Result_C_InactivateCharacter");
static_assert(offsetof(BP_ArenaSequence_Result_C_InactivateCharacter, Character) == 0x000000, "Member 'BP_ArenaSequence_Result_C_InactivateCharacter::Character' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_InactivateCharacter, CallFunc_Array_Add_ReturnValue) == 0x000008, "Member 'BP_ArenaSequence_Result_C_InactivateCharacter::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_InactivateCharacter, CallFunc_GetActiveActorFlag_ReturnValue) == 0x00000C, "Member 'BP_ArenaSequence_Result_C_InactivateCharacter::CallFunc_GetActiveActorFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_InactivateCharacter, CallFunc_IsValid_ReturnValue) == 0x00000D, "Member 'BP_ArenaSequence_Result_C_InactivateCharacter::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_ArenaSequence_Result.BP_ArenaSequence_Result_C.IsWinPlayerIndex
// 0x0018 (0x0018 - 0x0000)
struct BP_ArenaSequence_Result_C_IsWinPlayerIndex final
{
public:
	EPalArenaPlayerIndex                          PlayerIndex;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalArenaSequencer*                     CallFunc_GetOuterSequencer_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_Result_C_IsWinPlayerIndex) == 0x000008, "Wrong alignment on BP_ArenaSequence_Result_C_IsWinPlayerIndex");
static_assert(sizeof(BP_ArenaSequence_Result_C_IsWinPlayerIndex) == 0x000018, "Wrong size on BP_ArenaSequence_Result_C_IsWinPlayerIndex");
static_assert(offsetof(BP_ArenaSequence_Result_C_IsWinPlayerIndex, PlayerIndex) == 0x000000, "Member 'BP_ArenaSequence_Result_C_IsWinPlayerIndex::PlayerIndex' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_IsWinPlayerIndex, ReturnValue) == 0x000001, "Member 'BP_ArenaSequence_Result_C_IsWinPlayerIndex::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_IsWinPlayerIndex, CallFunc_GetOuterSequencer_ReturnValue) == 0x000008, "Member 'BP_ArenaSequence_Result_C_IsWinPlayerIndex::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_IsWinPlayerIndex, K2Node_SwitchEnum_CmpSuccess) == 0x000010, "Member 'BP_ArenaSequence_Result_C_IsWinPlayerIndex::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_IsWinPlayerIndex, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'BP_ArenaSequence_Result_C_IsWinPlayerIndex::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_IsWinPlayerIndex, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000012, "Member 'BP_ArenaSequence_Result_C_IsWinPlayerIndex::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");

// Function BP_ArenaSequence_Result.BP_ArenaSequence_Result_C.OnFinishCutscene
// 0x0001 (0x0001 - 0x0000)
struct BP_ArenaSequence_Result_C_OnFinishCutscene final
{
public:
	bool                                          bIsSkipped;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_Result_C_OnFinishCutscene) == 0x000001, "Wrong alignment on BP_ArenaSequence_Result_C_OnFinishCutscene");
static_assert(sizeof(BP_ArenaSequence_Result_C_OnFinishCutscene) == 0x000001, "Wrong size on BP_ArenaSequence_Result_C_OnFinishCutscene");
static_assert(offsetof(BP_ArenaSequence_Result_C_OnFinishCutscene, bIsSkipped) == 0x000000, "Member 'BP_ArenaSequence_Result_C_OnFinishCutscene::bIsSkipped' has a wrong offset!");

// Function BP_ArenaSequence_Result.BP_ArenaSequence_Result_C.OnWin__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_ArenaSequence_Result_C_OnWin__DelegateSignature final
{
public:
	class FString                                 WinnerName;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_Result_C_OnWin__DelegateSignature) == 0x000008, "Wrong alignment on BP_ArenaSequence_Result_C_OnWin__DelegateSignature");
static_assert(sizeof(BP_ArenaSequence_Result_C_OnWin__DelegateSignature) == 0x000010, "Wrong size on BP_ArenaSequence_Result_C_OnWin__DelegateSignature");
static_assert(offsetof(BP_ArenaSequence_Result_C_OnWin__DelegateSignature, WinnerName) == 0x000000, "Member 'BP_ArenaSequence_Result_C_OnWin__DelegateSignature::WinnerName' has a wrong offset!");

// Function BP_ArenaSequence_Result.BP_ArenaSequence_Result_C.PlayResultMontage
// 0x0030 (0x0030 - 0x0000)
struct BP_ArenaSequence_Result_C_PlayResultMontage final
{
public:
	class APalCharacter*                          Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           AnimMontage;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOutsiderSequencer_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Montage_Play_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_Result_C_PlayResultMontage) == 0x000008, "Wrong alignment on BP_ArenaSequence_Result_C_PlayResultMontage");
static_assert(sizeof(BP_ArenaSequence_Result_C_PlayResultMontage) == 0x000030, "Wrong size on BP_ArenaSequence_Result_C_PlayResultMontage");
static_assert(offsetof(BP_ArenaSequence_Result_C_PlayResultMontage, Character) == 0x000000, "Member 'BP_ArenaSequence_Result_C_PlayResultMontage::Character' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_PlayResultMontage, AnimMontage) == 0x000008, "Member 'BP_ArenaSequence_Result_C_PlayResultMontage::AnimMontage' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_PlayResultMontage, CallFunc_IsOutsiderSequencer_ReturnValue) == 0x000010, "Member 'BP_ArenaSequence_Result_C_PlayResultMontage::CallFunc_IsOutsiderSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_PlayResultMontage, CallFunc_GetMainMesh_ReturnValue) == 0x000018, "Member 'BP_ArenaSequence_Result_C_PlayResultMontage::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_PlayResultMontage, CallFunc_GetAnimInstance_ReturnValue) == 0x000020, "Member 'BP_ArenaSequence_Result_C_PlayResultMontage::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_PlayResultMontage, CallFunc_Montage_Play_ReturnValue) == 0x000028, "Member 'BP_ArenaSequence_Result_C_PlayResultMontage::CallFunc_Montage_Play_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_PlayResultMontage, CallFunc_Array_AddUnique_ReturnValue) == 0x00002C, "Member 'BP_ArenaSequence_Result_C_PlayResultMontage::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");

// Function BP_ArenaSequence_Result.BP_ArenaSequence_Result_C.PlayResultSound
// 0x0060 (0x0060 - 0x0000)
struct BP_ArenaSequence_Result_C_PlayResultSound final
{
public:
	EPalArenaPlayerIndex                          LocalPlayerIndex;                                  // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalArenaBattleResult                         BattleResult;                                      // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsWin;                                             // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_1;                   // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalArenaSequencer*                     CallFunc_GetOuterSequencer_ReturnValue;            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalArenaPlayerIndex                          CallFunc_GetLocalPlayerIndex_ReturnValue;          // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x2];                                       // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0034(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_1;                          // 0x0044(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEvent_ReturnValue_1;                  // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_Result_C_PlayResultSound) == 0x000008, "Wrong alignment on BP_ArenaSequence_Result_C_PlayResultSound");
static_assert(sizeof(BP_ArenaSequence_Result_C_PlayResultSound) == 0x000060, "Wrong size on BP_ArenaSequence_Result_C_PlayResultSound");
static_assert(offsetof(BP_ArenaSequence_Result_C_PlayResultSound, LocalPlayerIndex) == 0x000000, "Member 'BP_ArenaSequence_Result_C_PlayResultSound::LocalPlayerIndex' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_PlayResultSound, BattleResult) == 0x000001, "Member 'BP_ArenaSequence_Result_C_PlayResultSound::BattleResult' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_PlayResultSound, IsWin) == 0x000002, "Member 'BP_ArenaSequence_Result_C_PlayResultSound::IsWin' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_PlayResultSound, CallFunc_GetPalmi_ReturnValue) == 0x000008, "Member 'BP_ArenaSequence_Result_C_PlayResultSound::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_PlayResultSound, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000010, "Member 'BP_ArenaSequence_Result_C_PlayResultSound::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_PlayResultSound, CallFunc_GetPalmi_ReturnValue_1) == 0x000018, "Member 'BP_ArenaSequence_Result_C_PlayResultSound::CallFunc_GetPalmi_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_PlayResultSound, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000020, "Member 'BP_ArenaSequence_Result_C_PlayResultSound::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_PlayResultSound, CallFunc_GetOuterSequencer_ReturnValue) == 0x000028, "Member 'BP_ArenaSequence_Result_C_PlayResultSound::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_PlayResultSound, K2Node_SwitchEnum_CmpSuccess) == 0x000030, "Member 'BP_ArenaSequence_Result_C_PlayResultSound::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_PlayResultSound, CallFunc_GetLocalPlayerIndex_ReturnValue) == 0x000031, "Member 'BP_ArenaSequence_Result_C_PlayResultSound::CallFunc_GetLocalPlayerIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_PlayResultSound, Temp_delegate_Variable) == 0x000034, "Member 'BP_ArenaSequence_Result_C_PlayResultSound::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_PlayResultSound, Temp_delegate_Variable_1) == 0x000044, "Member 'BP_ArenaSequence_Result_C_PlayResultSound::Temp_delegate_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_PlayResultSound, CallFunc_PostEvent_ReturnValue) == 0x000054, "Member 'BP_ArenaSequence_Result_C_PlayResultSound::CallFunc_PostEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_PlayResultSound, CallFunc_PostEvent_ReturnValue_1) == 0x000058, "Member 'BP_ArenaSequence_Result_C_PlayResultSound::CallFunc_PostEvent_ReturnValue_1' has a wrong offset!");

// Function BP_ArenaSequence_Result.BP_ArenaSequence_Result_C.Set Disable Movement
// 0x0048 (0x0048 - 0x0000)
struct BP_ArenaSequence_Result_C_Set_Disable_Movement final
{
public:
	bool                                          IsDisable;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalArenaSequencer*                     CallFunc_GetOuterSequencer_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class APalCharacter*>                  CallFunc_GetInBattleCharacterAll_ReturnValue;      // 0x0018(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterMovementComponent*         CallFunc_GetPalCharacterMovementComponent_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_Result_C_Set_Disable_Movement) == 0x000008, "Wrong alignment on BP_ArenaSequence_Result_C_Set_Disable_Movement");
static_assert(sizeof(BP_ArenaSequence_Result_C_Set_Disable_Movement) == 0x000048, "Wrong size on BP_ArenaSequence_Result_C_Set_Disable_Movement");
static_assert(offsetof(BP_ArenaSequence_Result_C_Set_Disable_Movement, IsDisable) == 0x000000, "Member 'BP_ArenaSequence_Result_C_Set_Disable_Movement::IsDisable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_Set_Disable_Movement, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_ArenaSequence_Result_C_Set_Disable_Movement::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_Set_Disable_Movement, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_ArenaSequence_Result_C_Set_Disable_Movement::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_Set_Disable_Movement, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_ArenaSequence_Result_C_Set_Disable_Movement::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_Set_Disable_Movement, CallFunc_GetOuterSequencer_ReturnValue) == 0x000010, "Member 'BP_ArenaSequence_Result_C_Set_Disable_Movement::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_Set_Disable_Movement, CallFunc_GetInBattleCharacterAll_ReturnValue) == 0x000018, "Member 'BP_ArenaSequence_Result_C_Set_Disable_Movement::CallFunc_GetInBattleCharacterAll_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_Set_Disable_Movement, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_ArenaSequence_Result_C_Set_Disable_Movement::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_Set_Disable_Movement, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_ArenaSequence_Result_C_Set_Disable_Movement::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_Set_Disable_Movement, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'BP_ArenaSequence_Result_C_Set_Disable_Movement::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_Set_Disable_Movement, CallFunc_GetPalCharacterMovementComponent_ReturnValue) == 0x000040, "Member 'BP_ArenaSequence_Result_C_Set_Disable_Movement::CallFunc_GetPalCharacterMovementComponent_ReturnValue' has a wrong offset!");

// Function BP_ArenaSequence_Result.BP_ArenaSequence_Result_C.SetDisableLookAtAllPal
// 0x0048 (0x0048 - 0x0000)
struct BP_ArenaSequence_Result_C_SetDisableLookAtAllPal final
{
public:
	bool                                          IsDisable;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalArenaSequencer*                     CallFunc_GetOuterSequencer_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class APalCharacter*>                  CallFunc_GetInBattleCharacterAll_ReturnValue;      // 0x0018(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLookAtComponent*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_Result_C_SetDisableLookAtAllPal) == 0x000008, "Wrong alignment on BP_ArenaSequence_Result_C_SetDisableLookAtAllPal");
static_assert(sizeof(BP_ArenaSequence_Result_C_SetDisableLookAtAllPal) == 0x000048, "Wrong size on BP_ArenaSequence_Result_C_SetDisableLookAtAllPal");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetDisableLookAtAllPal, IsDisable) == 0x000000, "Member 'BP_ArenaSequence_Result_C_SetDisableLookAtAllPal::IsDisable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetDisableLookAtAllPal, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_ArenaSequence_Result_C_SetDisableLookAtAllPal::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetDisableLookAtAllPal, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_ArenaSequence_Result_C_SetDisableLookAtAllPal::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetDisableLookAtAllPal, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_ArenaSequence_Result_C_SetDisableLookAtAllPal::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetDisableLookAtAllPal, CallFunc_GetOuterSequencer_ReturnValue) == 0x000010, "Member 'BP_ArenaSequence_Result_C_SetDisableLookAtAllPal::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetDisableLookAtAllPal, CallFunc_GetInBattleCharacterAll_ReturnValue) == 0x000018, "Member 'BP_ArenaSequence_Result_C_SetDisableLookAtAllPal::CallFunc_GetInBattleCharacterAll_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetDisableLookAtAllPal, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_ArenaSequence_Result_C_SetDisableLookAtAllPal::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetDisableLookAtAllPal, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_ArenaSequence_Result_C_SetDisableLookAtAllPal::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetDisableLookAtAllPal, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'BP_ArenaSequence_Result_C_SetDisableLookAtAllPal::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetDisableLookAtAllPal, CallFunc_GetComponentByClass_ReturnValue) == 0x000040, "Member 'BP_ArenaSequence_Result_C_SetDisableLookAtAllPal::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

// Function BP_ArenaSequence_Result.BP_ArenaSequence_Result_C.SetupFormation
// 0x06B0 (0x06B0 - 0x0000)
struct BP_ArenaSequence_Result_C_SetupFormation final
{
public:
	TArray<class APalCharacter*>                  InactivatedCharacters;                             // 0x0000(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	struct FPalArenaResultFormation               ResultFormation;                                   // 0x0010(0x0070)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalArenaInstanceModel*                 CallFunc_GetInstanceModel_ReturnValue;             // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalArenaLevelInstance*                 CallFunc_GetArenaLevelInstance_ReturnValue;        // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetPlayerStartTransform_ReturnValue;      // 0x00B0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0110(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0128(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0140(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location_1;                // 0x0160(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;                // 0x0178(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_1;                   // 0x0190(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location_2;                // 0x01A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_2;                // 0x01C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_2;                   // 0x01D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalArenaInstanceModel*                 CallFunc_GetInstanceModel_ReturnValue_1;           // 0x01F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalArenaSequencer*                     CallFunc_GetOuterSequencer_ReturnValue;            // 0x01F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalArenaLevelInstance*                 CallFunc_GetArenaLevelInstance_ReturnValue_1;      // 0x0200(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<EPalArenaPlayerIndex, struct FPalArenaPlayerInfo> CallFunc_GetArenaPlayerInfoMap_ReturnValue;        // 0x0208(0x0050)(ConstParm)
	uint8                                         Pad_258[0x8];                                      // 0x0258(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalArenaResultFormation               CallFunc_GetResultFormation_ReturnValue;           // 0x0260(0x0070)()
	TArray<EPalArenaPlayerIndex>                  CallFunc_Map_Keys_Keys;                            // 0x02D0(0x0010)(ReferenceParm)
	EPalArenaPlayerIndex                          CallFunc_Array_Get_Item;                           // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E1[0x3];                                      // 0x02E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x02E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsWinPlayerIndex_ReturnValue;             // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x02E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2EA[0x6];                                      // 0x02EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalArenaPlayerInfo                    CallFunc_Map_Find_Value;                           // 0x02F0(0x0048)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_339[0x7];                                      // 0x0339(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetIndividualActor_ReturnValue;           // 0x0340(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_Array_Get_Item_1;                         // 0x0348(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetIndividualActor_ReturnValue_1;         // 0x0350(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_Array_Get_Item_2;                         // 0x0358(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_Array_Get_Item_3;                         // 0x0360(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0368(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36C[0x4];                                      // 0x036C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetIndividualActor_ReturnValue_2;         // 0x0370(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0378(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_379[0x7];                                      // 0x0379(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_AdjustActorToFloor_ReturnValue;           // 0x0380(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocationAndRotation_SweepHitResult; // 0x0388(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocationAndRotation_ReturnValue; // 0x0470(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMontange_bExist;                      // 0x0471(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_472[0x6];                                      // 0x0472(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc_FindMontange_ReturnValue;                 // 0x0478(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMontange_bExist_1;                    // 0x0480(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_481[0x7];                                      // 0x0481(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc_FindMontange_ReturnValue_1;               // 0x0488(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0490(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_491[0x7];                                      // 0x0491(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           K2Node_Select_Default;                             // 0x0498(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x04A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x04A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A5[0x3];                                      // 0x04A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_1; // 0x04A8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocationAndRotation_ReturnValue_1; // 0x0590(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_591[0x7];                                      // 0x0591(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_AdjustActorToFloor_ReturnValue_1;         // 0x0598(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x05A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x05A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A2[0x6];                                      // 0x05A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetIndividualActor_ReturnValue_3;         // 0x05A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x05B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x05B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B2[0x6];                                      // 0x05B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x05B8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x06A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_Result_C_SetupFormation) == 0x000010, "Wrong alignment on BP_ArenaSequence_Result_C_SetupFormation");
static_assert(sizeof(BP_ArenaSequence_Result_C_SetupFormation) == 0x0006B0, "Wrong size on BP_ArenaSequence_Result_C_SetupFormation");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, InactivatedCharacters) == 0x000000, "Member 'BP_ArenaSequence_Result_C_SetupFormation::InactivatedCharacters' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, ResultFormation) == 0x000010, "Member 'BP_ArenaSequence_Result_C_SetupFormation::ResultFormation' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, Temp_int_Array_Index_Variable) == 0x000080, "Member 'BP_ArenaSequence_Result_C_SetupFormation::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, Temp_int_Array_Index_Variable_1) == 0x000084, "Member 'BP_ArenaSequence_Result_C_SetupFormation::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, Temp_int_Loop_Counter_Variable) == 0x000088, "Member 'BP_ArenaSequence_Result_C_SetupFormation::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, Temp_bool_Variable) == 0x00008C, "Member 'BP_ArenaSequence_Result_C_SetupFormation::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_Add_IntInt_ReturnValue) == 0x000090, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, Temp_int_Loop_Counter_Variable_1) == 0x000094, "Member 'BP_ArenaSequence_Result_C_SetupFormation::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_Add_IntInt_ReturnValue_1) == 0x000098, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, Temp_int_Array_Index_Variable_2) == 0x00009C, "Member 'BP_ArenaSequence_Result_C_SetupFormation::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_GetInstanceModel_ReturnValue) == 0x0000A0, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_GetInstanceModel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_GetArenaLevelInstance_ReturnValue) == 0x0000A8, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_GetArenaLevelInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_GetPlayerStartTransform_ReturnValue) == 0x0000B0, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_GetPlayerStartTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_BreakTransform_Location) == 0x000110, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_BreakTransform_Rotation) == 0x000128, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_BreakTransform_Scale) == 0x000140, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, Temp_int_Loop_Counter_Variable_2) == 0x000158, "Member 'BP_ArenaSequence_Result_C_SetupFormation::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_Add_IntInt_ReturnValue_2) == 0x00015C, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_BreakTransform_Location_1) == 0x000160, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_BreakTransform_Rotation_1) == 0x000178, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_BreakTransform_Scale_1) == 0x000190, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_BreakTransform_Scale_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_BreakTransform_Location_2) == 0x0001A8, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_BreakTransform_Location_2' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_BreakTransform_Rotation_2) == 0x0001C0, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_BreakTransform_Rotation_2' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_BreakTransform_Scale_2) == 0x0001D8, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_BreakTransform_Scale_2' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_GetInstanceModel_ReturnValue_1) == 0x0001F0, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_GetInstanceModel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_GetOuterSequencer_ReturnValue) == 0x0001F8, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_GetArenaLevelInstance_ReturnValue_1) == 0x000200, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_GetArenaLevelInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_GetArenaPlayerInfoMap_ReturnValue) == 0x000208, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_GetArenaPlayerInfoMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_GetResultFormation_ReturnValue) == 0x000260, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_GetResultFormation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_Map_Keys_Keys) == 0x0002D0, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_Array_Get_Item) == 0x0002E0, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_Array_Length_ReturnValue) == 0x0002E4, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_IsWinPlayerIndex_ReturnValue) == 0x0002E8, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_IsWinPlayerIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_Less_IntInt_ReturnValue) == 0x0002E9, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_Map_Find_Value) == 0x0002F0, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_Map_Find_ReturnValue) == 0x000338, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_GetIndividualActor_ReturnValue) == 0x000340, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_GetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_Array_Get_Item_1) == 0x000348, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_GetIndividualActor_ReturnValue_1) == 0x000350, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_GetIndividualActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_Array_Get_Item_2) == 0x000358, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_Array_Get_Item_3) == 0x000360, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_Array_Length_ReturnValue_1) == 0x000368, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_GetIndividualActor_ReturnValue_2) == 0x000370, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_GetIndividualActor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_Less_IntInt_ReturnValue_1) == 0x000378, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_AdjustActorToFloor_ReturnValue) == 0x000380, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_AdjustActorToFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_K2_SetActorLocationAndRotation_SweepHitResult) == 0x000388, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_K2_SetActorLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_K2_SetActorLocationAndRotation_ReturnValue) == 0x000470, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_K2_SetActorLocationAndRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_FindMontange_bExist) == 0x000471, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_FindMontange_bExist' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_FindMontange_ReturnValue) == 0x000478, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_FindMontange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_FindMontange_bExist_1) == 0x000480, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_FindMontange_bExist_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_FindMontange_ReturnValue_1) == 0x000488, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_FindMontange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_IsValid_ReturnValue) == 0x000490, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, K2Node_Select_Default) == 0x000498, "Member 'BP_ArenaSequence_Result_C_SetupFormation::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_Array_Length_ReturnValue_2) == 0x0004A0, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_Less_IntInt_ReturnValue_2) == 0x0004A4, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_1) == 0x0004A8, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_K2_SetActorLocationAndRotation_ReturnValue_1) == 0x000590, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_K2_SetActorLocationAndRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_AdjustActorToFloor_ReturnValue_1) == 0x000598, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_AdjustActorToFloor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_IsValid_ReturnValue_1) == 0x0005A0, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_IsValid_ReturnValue_2) == 0x0005A1, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_GetIndividualActor_ReturnValue_3) == 0x0005A8, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_GetIndividualActor_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_IsValid_ReturnValue_3) == 0x0005B0, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_IsValid_ReturnValue_4) == 0x0005B1, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x0005B8, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_SetupFormation, CallFunc_K2_SetActorLocation_ReturnValue) == 0x0006A0, "Member 'BP_ArenaSequence_Result_C_SetupFormation::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");

// Function BP_ArenaSequence_Result.BP_ArenaSequence_Result_C.StopMontages
// 0x0038 (0x0038 - 0x0000)
struct BP_ArenaSequence_Result_C_StopMontages final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_GetCurrentActiveMontage_ReturnValue;      // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_Result_C_StopMontages) == 0x000008, "Wrong alignment on BP_ArenaSequence_Result_C_StopMontages");
static_assert(sizeof(BP_ArenaSequence_Result_C_StopMontages) == 0x000038, "Wrong size on BP_ArenaSequence_Result_C_StopMontages");
static_assert(offsetof(BP_ArenaSequence_Result_C_StopMontages, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_ArenaSequence_Result_C_StopMontages::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_StopMontages, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_ArenaSequence_Result_C_StopMontages::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_StopMontages, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_ArenaSequence_Result_C_StopMontages::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_StopMontages, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'BP_ArenaSequence_Result_C_StopMontages::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_StopMontages, CallFunc_Array_Get_Item) == 0x000010, "Member 'BP_ArenaSequence_Result_C_StopMontages::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_StopMontages, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'BP_ArenaSequence_Result_C_StopMontages::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_StopMontages, CallFunc_GetMainMesh_ReturnValue) == 0x000020, "Member 'BP_ArenaSequence_Result_C_StopMontages::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_StopMontages, CallFunc_GetAnimInstance_ReturnValue) == 0x000028, "Member 'BP_ArenaSequence_Result_C_StopMontages::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_StopMontages, CallFunc_GetCurrentActiveMontage_ReturnValue) == 0x000030, "Member 'BP_ArenaSequence_Result_C_StopMontages::CallFunc_GetCurrentActiveMontage_ReturnValue' has a wrong offset!");

// Function BP_ArenaSequence_Result.BP_ArenaSequence_Result_C.ToggleLocalInput
// 0x0030 (0x0030 - 0x0000)
struct BP_ArenaSequence_Result_C_ToggleLocalInput final
{
public:
	bool                                          IsDisable;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_ArenaOutBattleFlag_ReturnValue;           // 0x0004(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerController*                   K2Node_DynamicCast_AsPal_Player_Controller;        // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_ArenaOutBattleFlag_ReturnValue_1;         // 0x0024(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ArenaSequence_Result_C_ToggleLocalInput) == 0x000008, "Wrong alignment on BP_ArenaSequence_Result_C_ToggleLocalInput");
static_assert(sizeof(BP_ArenaSequence_Result_C_ToggleLocalInput) == 0x000030, "Wrong size on BP_ArenaSequence_Result_C_ToggleLocalInput");
static_assert(offsetof(BP_ArenaSequence_Result_C_ToggleLocalInput, IsDisable) == 0x000000, "Member 'BP_ArenaSequence_Result_C_ToggleLocalInput::IsDisable' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ToggleLocalInput, CallFunc_ArenaOutBattleFlag_ReturnValue) == 0x000004, "Member 'BP_ArenaSequence_Result_C_ToggleLocalInput::CallFunc_ArenaOutBattleFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ToggleLocalInput, CallFunc_Not_PreBool_ReturnValue) == 0x00000C, "Member 'BP_ArenaSequence_Result_C_ToggleLocalInput::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ToggleLocalInput, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000010, "Member 'BP_ArenaSequence_Result_C_ToggleLocalInput::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ToggleLocalInput, K2Node_DynamicCast_AsPal_Player_Controller) == 0x000018, "Member 'BP_ArenaSequence_Result_C_ToggleLocalInput::K2Node_DynamicCast_AsPal_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ToggleLocalInput, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_ArenaSequence_Result_C_ToggleLocalInput::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ArenaSequence_Result_C_ToggleLocalInput, CallFunc_ArenaOutBattleFlag_ReturnValue_1) == 0x000024, "Member 'BP_ArenaSequence_Result_C_ToggleLocalInput::CallFunc_ArenaOutBattleFlag_ReturnValue_1' has a wrong offset!");

}

