#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.ChangeBattleBGMType
// 0x0004 (0x0004 - 0x0000)
struct BP_PalAudioWorldSubsystem_C_ChangeBattleBGMType final
{
public:
	EPalBattleBGMType                             GameType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalAudioStateGroup                           AudioType;                                         // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalAudioStateGroup                           CallFunc_Map_Find_Value;                           // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAudioWorldSubsystem_C_ChangeBattleBGMType) == 0x000001, "Wrong alignment on BP_PalAudioWorldSubsystem_C_ChangeBattleBGMType");
static_assert(sizeof(BP_PalAudioWorldSubsystem_C_ChangeBattleBGMType) == 0x000004, "Wrong size on BP_PalAudioWorldSubsystem_C_ChangeBattleBGMType");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ChangeBattleBGMType, GameType) == 0x000000, "Member 'BP_PalAudioWorldSubsystem_C_ChangeBattleBGMType::GameType' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ChangeBattleBGMType, AudioType) == 0x000001, "Member 'BP_PalAudioWorldSubsystem_C_ChangeBattleBGMType::AudioType' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ChangeBattleBGMType, CallFunc_Map_Find_Value) == 0x000002, "Member 'BP_PalAudioWorldSubsystem_C_ChangeBattleBGMType::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ChangeBattleBGMType, CallFunc_Map_Find_ReturnValue) == 0x000003, "Member 'BP_PalAudioWorldSubsystem_C_ChangeBattleBGMType::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.CreateDebugModel
// 0x0110 (0x0110 - 0x0000)
struct BP_PalAudioWorldSubsystem_C_CreateDebugModel final
{
public:
	class AActor*                                 NewParam;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0010(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterCameraComponent*           CallFunc_GetComponentByClass_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x0090(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CallFunc_AddComponentByClass_ReturnValue;          // 0x0100(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAudioWorldSubsystem_C_CreateDebugModel) == 0x000010, "Wrong alignment on BP_PalAudioWorldSubsystem_C_CreateDebugModel");
static_assert(sizeof(BP_PalAudioWorldSubsystem_C_CreateDebugModel) == 0x000110, "Wrong size on BP_PalAudioWorldSubsystem_C_CreateDebugModel");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_CreateDebugModel, NewParam) == 0x000000, "Member 'BP_PalAudioWorldSubsystem_C_CreateDebugModel::NewParam' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_CreateDebugModel, CallFunc_GetPalmi_ReturnValue) == 0x000008, "Member 'BP_PalAudioWorldSubsystem_C_CreateDebugModel::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_CreateDebugModel, CallFunc_MakeTransform_ReturnValue) == 0x000010, "Member 'BP_PalAudioWorldSubsystem_C_CreateDebugModel::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_CreateDebugModel, CallFunc_GetComponentByClass_ReturnValue) == 0x000070, "Member 'BP_PalAudioWorldSubsystem_C_CreateDebugModel::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_CreateDebugModel, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000078, "Member 'BP_PalAudioWorldSubsystem_C_CreateDebugModel::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_CreateDebugModel, CallFunc_MakeTransform_ReturnValue_1) == 0x000090, "Member 'BP_PalAudioWorldSubsystem_C_CreateDebugModel::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_CreateDebugModel, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000F0, "Member 'BP_PalAudioWorldSubsystem_C_CreateDebugModel::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_CreateDebugModel, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000F8, "Member 'BP_PalAudioWorldSubsystem_C_CreateDebugModel::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_CreateDebugModel, CallFunc_AddComponentByClass_ReturnValue) == 0x000100, "Member 'BP_PalAudioWorldSubsystem_C_CreateDebugModel::CallFunc_AddComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_CreateDebugModel, CallFunc_SetStaticMesh_ReturnValue) == 0x000108, "Member 'BP_PalAudioWorldSubsystem_C_CreateDebugModel::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");

// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.ExecuteUbergraph_BP_PalAudioWorldSubsystem
// 0x0168 (0x0168 - 0x0000)
struct BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EPalBattleBGMType Rank)>       K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class APalPlayerCharacter* Player)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTime;                            // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool IsBattle)>                K2Node_CreateDelegate_OutputDelegate_2;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalInvaderManager*                     CallFunc_GetInvaderManager_ReturnValue;            // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalInvaderManager*                     CallFunc_GetInvaderManager_ReturnValue_1;          // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalInvaderManager*                     CallFunc_GetInvaderManager_ReturnValue_2;          // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FPalIncidentBroadcastParameter& Parameter)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FPalIncidentBroadcastParameter& Parameter)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0080(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalInvaderManager*                     CallFunc_GetInvaderManager_ReturnValue_3;          // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FPalIncidentBroadcastParameter& Parameter)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x0098(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_1;                   // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EPalPlayerBattleFinishType FinishType)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x00B0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_2;                   // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_3;                   // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_4;                   // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    K2Node_CustomEvent_Player;                         // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_Pawn;                                 // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            K2Node_Event_Controller;                           // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalTimeManager*                        CallFunc_GetTimeManager_ReturnValue;               // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x00F8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x0108(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalTimeManager*                        CallFunc_GetTimeManager_ReturnValue_1;             // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;            // 0x0120(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalSoundOptions                       K2Node_MakeStruct_PalSoundOptions;                 // 0x0130(0x0004)(NoDestructor)
	int32                                         CallFunc_PlaySound_ReturnValue;                    // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_5;                   // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalArenaSequencer* ArenaSequencer)> K2Node_CreateDelegate_OutputDelegate_10;           // 0x0140(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_6;                   // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_11;           // 0x0158(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem) == 0x000008, "Wrong alignment on BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem");
static_assert(sizeof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem) == 0x000168, "Wrong size on BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, EntryPoint) == 0x000000, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, Temp_bool_IsClosed_Variable) == 0x000014, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, Temp_bool_Has_Been_Initd_Variable) == 0x000028, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, K2Node_Event_DeltaTime) == 0x00002C, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, CallFunc_GetPalmi_ReturnValue) == 0x000030, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, K2Node_CreateDelegate_OutputDelegate_2) == 0x000038, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, CallFunc_GetInvaderManager_ReturnValue) == 0x000050, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::CallFunc_GetInvaderManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, CallFunc_GetInvaderManager_ReturnValue_1) == 0x000058, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::CallFunc_GetInvaderManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, CallFunc_IsValid_ReturnValue_1) == 0x000060, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, CallFunc_GetInvaderManager_ReturnValue_2) == 0x000068, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::CallFunc_GetInvaderManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, K2Node_CreateDelegate_OutputDelegate_3) == 0x000070, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, K2Node_CreateDelegate_OutputDelegate_4) == 0x000080, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, CallFunc_GetInvaderManager_ReturnValue_3) == 0x000090, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::CallFunc_GetInvaderManager_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, K2Node_CreateDelegate_OutputDelegate_5) == 0x000098, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, CallFunc_GetPalmi_ReturnValue_1) == 0x0000A8, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::CallFunc_GetPalmi_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, K2Node_CreateDelegate_OutputDelegate_6) == 0x0000B0, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, CallFunc_GetPalmi_ReturnValue_2) == 0x0000C0, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::CallFunc_GetPalmi_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, CallFunc_GetPalmi_ReturnValue_3) == 0x0000C8, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::CallFunc_GetPalmi_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, CallFunc_GetPalmi_ReturnValue_4) == 0x0000D0, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::CallFunc_GetPalmi_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, K2Node_CustomEvent_Player) == 0x0000D8, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::K2Node_CustomEvent_Player' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, K2Node_Event_Pawn) == 0x0000E0, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::K2Node_Event_Pawn' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, K2Node_Event_Controller) == 0x0000E8, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::K2Node_Event_Controller' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, CallFunc_GetTimeManager_ReturnValue) == 0x0000F0, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::CallFunc_GetTimeManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, K2Node_CreateDelegate_OutputDelegate_7) == 0x0000F8, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, K2Node_CreateDelegate_OutputDelegate_8) == 0x000108, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, CallFunc_GetTimeManager_ReturnValue_1) == 0x000118, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::CallFunc_GetTimeManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, K2Node_CreateDelegate_OutputDelegate_9) == 0x000120, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, K2Node_MakeStruct_PalSoundOptions) == 0x000130, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::K2Node_MakeStruct_PalSoundOptions' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, CallFunc_PlaySound_ReturnValue) == 0x000134, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::CallFunc_PlaySound_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, CallFunc_GetPalmi_ReturnValue_5) == 0x000138, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::CallFunc_GetPalmi_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, K2Node_CreateDelegate_OutputDelegate_10) == 0x000140, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, CallFunc_GetPalmi_ReturnValue_6) == 0x000150, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::CallFunc_GetPalmi_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem, K2Node_CreateDelegate_OutputDelegate_11) == 0x000158, "Member 'BP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");

// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.FindMaxPriorityAmbientSoundArea
// 0x0040 (0x0040 - 0x0000)
struct BP_PalAudioWorldSubsystem_C_FindMaxPriorityAmbientSoundArea final
{
public:
	class APalAmbientSoundAreaBase*               AmbinetSoundArea;                                  // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalAmbientSoundAreaBase*               TargetAmbientSoundArea;                            // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxPriority;                                       // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalAmbientSoundAreaBase*               CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalAmbientSoundAreaBase*               CallFunc_Array_Get_Item_1;                         // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAudioWorldSubsystem_C_FindMaxPriorityAmbientSoundArea) == 0x000008, "Wrong alignment on BP_PalAudioWorldSubsystem_C_FindMaxPriorityAmbientSoundArea");
static_assert(sizeof(BP_PalAudioWorldSubsystem_C_FindMaxPriorityAmbientSoundArea) == 0x000040, "Wrong size on BP_PalAudioWorldSubsystem_C_FindMaxPriorityAmbientSoundArea");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_FindMaxPriorityAmbientSoundArea, AmbinetSoundArea) == 0x000000, "Member 'BP_PalAudioWorldSubsystem_C_FindMaxPriorityAmbientSoundArea::AmbinetSoundArea' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_FindMaxPriorityAmbientSoundArea, TargetAmbientSoundArea) == 0x000008, "Member 'BP_PalAudioWorldSubsystem_C_FindMaxPriorityAmbientSoundArea::TargetAmbientSoundArea' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_FindMaxPriorityAmbientSoundArea, MaxPriority) == 0x000010, "Member 'BP_PalAudioWorldSubsystem_C_FindMaxPriorityAmbientSoundArea::MaxPriority' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_FindMaxPriorityAmbientSoundArea, Temp_int_Array_Index_Variable) == 0x000014, "Member 'BP_PalAudioWorldSubsystem_C_FindMaxPriorityAmbientSoundArea::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_FindMaxPriorityAmbientSoundArea, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'BP_PalAudioWorldSubsystem_C_FindMaxPriorityAmbientSoundArea::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_FindMaxPriorityAmbientSoundArea, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'BP_PalAudioWorldSubsystem_C_FindMaxPriorityAmbientSoundArea::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_FindMaxPriorityAmbientSoundArea, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_PalAudioWorldSubsystem_C_FindMaxPriorityAmbientSoundArea::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_FindMaxPriorityAmbientSoundArea, CallFunc_Array_IsEmpty_ReturnValue) == 0x000028, "Member 'BP_PalAudioWorldSubsystem_C_FindMaxPriorityAmbientSoundArea::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_FindMaxPriorityAmbientSoundArea, CallFunc_Array_Get_Item_1) == 0x000030, "Member 'BP_PalAudioWorldSubsystem_C_FindMaxPriorityAmbientSoundArea::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_FindMaxPriorityAmbientSoundArea, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'BP_PalAudioWorldSubsystem_C_FindMaxPriorityAmbientSoundArea::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_FindMaxPriorityAmbientSoundArea, CallFunc_Less_IntInt_ReturnValue) == 0x00003C, "Member 'BP_PalAudioWorldSubsystem_C_FindMaxPriorityAmbientSoundArea::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_FindMaxPriorityAmbientSoundArea, CallFunc_Greater_IntInt_ReturnValue) == 0x00003D, "Member 'BP_PalAudioWorldSubsystem_C_FindMaxPriorityAmbientSoundArea::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.IsPlayingArea
// 0x0010 (0x0010 - 0x0000)
struct BP_PalAudioWorldSubsystem_C_IsPlayingArea final
{
public:
	class APalAmbientSoundAreaBase*               AmbientSoundArea;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Identical_ReturnValue;              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Identical_ReturnValue_1;            // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAudioWorldSubsystem_C_IsPlayingArea) == 0x000008, "Wrong alignment on BP_PalAudioWorldSubsystem_C_IsPlayingArea");
static_assert(sizeof(BP_PalAudioWorldSubsystem_C_IsPlayingArea) == 0x000010, "Wrong size on BP_PalAudioWorldSubsystem_C_IsPlayingArea");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_IsPlayingArea, AmbientSoundArea) == 0x000000, "Member 'BP_PalAudioWorldSubsystem_C_IsPlayingArea::AmbientSoundArea' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_IsPlayingArea, ReturnValue) == 0x000008, "Member 'BP_PalAudioWorldSubsystem_C_IsPlayingArea::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_IsPlayingArea, CallFunc_Array_Identical_ReturnValue) == 0x000009, "Member 'BP_PalAudioWorldSubsystem_C_IsPlayingArea::CallFunc_Array_Identical_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_IsPlayingArea, CallFunc_Array_Identical_ReturnValue_1) == 0x00000A, "Member 'BP_PalAudioWorldSubsystem_C_IsPlayingArea::CallFunc_Array_Identical_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_IsPlayingArea, CallFunc_BooleanAND_ReturnValue) == 0x00000B, "Member 'BP_PalAudioWorldSubsystem_C_IsPlayingArea::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.On Change Battle BGM
// 0x0020 (0x0020 - 0x0000)
struct BP_PalAudioWorldSubsystem_C_On_Change_Battle_BGM final
{
public:
	EPalBattleBGMType                             Rank;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EPalAudioState                                Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalAudioState                                CallFunc_Map_Find_Value;                           // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalAudioState                                K2Node_Select_Default;                             // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAudioWorldSubsystem_C_On_Change_Battle_BGM) == 0x000008, "Wrong alignment on BP_PalAudioWorldSubsystem_C_On_Change_Battle_BGM");
static_assert(sizeof(BP_PalAudioWorldSubsystem_C_On_Change_Battle_BGM) == 0x000020, "Wrong size on BP_PalAudioWorldSubsystem_C_On_Change_Battle_BGM");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_On_Change_Battle_BGM, Rank) == 0x000000, "Member 'BP_PalAudioWorldSubsystem_C_On_Change_Battle_BGM::Rank' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_On_Change_Battle_BGM, Temp_bool_Variable) == 0x000001, "Member 'BP_PalAudioWorldSubsystem_C_On_Change_Battle_BGM::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_On_Change_Battle_BGM, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000008, "Member 'BP_PalAudioWorldSubsystem_C_On_Change_Battle_BGM::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_On_Change_Battle_BGM, Temp_byte_Variable) == 0x000018, "Member 'BP_PalAudioWorldSubsystem_C_On_Change_Battle_BGM::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_On_Change_Battle_BGM, CallFunc_Map_Find_Value) == 0x000019, "Member 'BP_PalAudioWorldSubsystem_C_On_Change_Battle_BGM::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_On_Change_Battle_BGM, CallFunc_Map_Find_ReturnValue) == 0x00001A, "Member 'BP_PalAudioWorldSubsystem_C_On_Change_Battle_BGM::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_On_Change_Battle_BGM, K2Node_Select_Default) == 0x00001B, "Member 'BP_PalAudioWorldSubsystem_C_On_Change_Battle_BGM::K2Node_Select_Default' has a wrong offset!");

// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnArenaSequenceChanged
// 0x0040 (0x0040 - 0x0000)
struct BP_PalAudioWorldSubsystem_C_OnArenaSequenceChanged final
{
public:
	int32                                         CurrentIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalAudioState                                ArenaNewState;                                     // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Add_ByteByte_ReturnValue;                 // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAudioWorldSubsystem_C_OnArenaSequenceChanged) == 0x000008, "Wrong alignment on BP_PalAudioWorldSubsystem_C_OnArenaSequenceChanged");
static_assert(sizeof(BP_PalAudioWorldSubsystem_C_OnArenaSequenceChanged) == 0x000040, "Wrong size on BP_PalAudioWorldSubsystem_C_OnArenaSequenceChanged");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnArenaSequenceChanged, CurrentIndex) == 0x000000, "Member 'BP_PalAudioWorldSubsystem_C_OnArenaSequenceChanged::CurrentIndex' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnArenaSequenceChanged, ArenaNewState) == 0x000004, "Member 'BP_PalAudioWorldSubsystem_C_OnArenaSequenceChanged::ArenaNewState' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnArenaSequenceChanged, CallFunc_MakeLiteralByte_ReturnValue) == 0x000005, "Member 'BP_PalAudioWorldSubsystem_C_OnArenaSequenceChanged::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnArenaSequenceChanged, CallFunc_Conv_IntToByte_ReturnValue) == 0x000006, "Member 'BP_PalAudioWorldSubsystem_C_OnArenaSequenceChanged::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnArenaSequenceChanged, CallFunc_Add_ByteByte_ReturnValue) == 0x000007, "Member 'BP_PalAudioWorldSubsystem_C_OnArenaSequenceChanged::CallFunc_Add_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnArenaSequenceChanged, CallFunc_GetValidValue_ReturnValue) == 0x000008, "Member 'BP_PalAudioWorldSubsystem_C_OnArenaSequenceChanged::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnArenaSequenceChanged, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000010, "Member 'BP_PalAudioWorldSubsystem_C_OnArenaSequenceChanged::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnArenaSequenceChanged, K2Node_SwitchEnum_CmpSuccess) == 0x000020, "Member 'BP_PalAudioWorldSubsystem_C_OnArenaSequenceChanged::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnArenaSequenceChanged, CallFunc_Concat_StrStr_ReturnValue) == 0x000028, "Member 'BP_PalAudioWorldSubsystem_C_OnArenaSequenceChanged::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnArenaSequenceChanged, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000038, "Member 'BP_PalAudioWorldSubsystem_C_OnArenaSequenceChanged::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnArenaSequenceChanged, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000039, "Member 'BP_PalAudioWorldSubsystem_C_OnArenaSequenceChanged::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnArenaSequenceChanged, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x00003A, "Member 'BP_PalAudioWorldSubsystem_C_OnArenaSequenceChanged::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");

// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnArenaSequenceStart
// 0x0018 (0x0018 - 0x0000)
struct BP_PalAudioWorldSubsystem_C_OnArenaSequenceStart final
{
public:
	class UPalArenaSequencer*                     ArenaSequencer;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 CurrentIndex)>           K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAudioWorldSubsystem_C_OnArenaSequenceStart) == 0x000008, "Wrong alignment on BP_PalAudioWorldSubsystem_C_OnArenaSequenceStart");
static_assert(sizeof(BP_PalAudioWorldSubsystem_C_OnArenaSequenceStart) == 0x000018, "Wrong size on BP_PalAudioWorldSubsystem_C_OnArenaSequenceStart");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnArenaSequenceStart, ArenaSequencer) == 0x000000, "Member 'BP_PalAudioWorldSubsystem_C_OnArenaSequenceStart::ArenaSequencer' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnArenaSequenceStart, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_PalAudioWorldSubsystem_C_OnArenaSequenceStart::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnArrivedRaid
// 0x0098 (0x0098 - 0x0000)
struct BP_PalAudioWorldSubsystem_C_OnArrivedRaid final
{
public:
	struct FPalIncidentBroadcastParameter         Param;                                             // 0x0000(0x0090)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_92[0x2];                                       // 0x0092(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAudioWorldSubsystem_C_OnArrivedRaid) == 0x000008, "Wrong alignment on BP_PalAudioWorldSubsystem_C_OnArrivedRaid");
static_assert(sizeof(BP_PalAudioWorldSubsystem_C_OnArrivedRaid) == 0x000098, "Wrong size on BP_PalAudioWorldSubsystem_C_OnArrivedRaid");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnArrivedRaid, Param) == 0x000000, "Member 'BP_PalAudioWorldSubsystem_C_OnArrivedRaid::Param' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnArrivedRaid, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000090, "Member 'BP_PalAudioWorldSubsystem_C_OnArrivedRaid::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnArrivedRaid, CallFunc_Array_Contains_ReturnValue) == 0x000091, "Member 'BP_PalAudioWorldSubsystem_C_OnArrivedRaid::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnArrivedRaid, CallFunc_Array_AddUnique_ReturnValue) == 0x000094, "Member 'BP_PalAudioWorldSubsystem_C_OnArrivedRaid::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");

// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnBattleModeChanged
// 0x0001 (0x0001 - 0x0000)
struct BP_PalAudioWorldSubsystem_C_OnBattleModeChanged final
{
public:
	bool                                          IsBattleMode;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAudioWorldSubsystem_C_OnBattleModeChanged) == 0x000001, "Wrong alignment on BP_PalAudioWorldSubsystem_C_OnBattleModeChanged");
static_assert(sizeof(BP_PalAudioWorldSubsystem_C_OnBattleModeChanged) == 0x000001, "Wrong size on BP_PalAudioWorldSubsystem_C_OnBattleModeChanged");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnBattleModeChanged, IsBattleMode) == 0x000000, "Member 'BP_PalAudioWorldSubsystem_C_OnBattleModeChanged::IsBattleMode' has a wrong offset!");

// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnBattleRankDown
// 0x0002 (0x0002 - 0x0000)
struct BP_PalAudioWorldSubsystem_C_OnBattleRankDown final
{
public:
	EPalPlayerBattleFinishType                    Finish;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAudioWorldSubsystem_C_OnBattleRankDown) == 0x000001, "Wrong alignment on BP_PalAudioWorldSubsystem_C_OnBattleRankDown");
static_assert(sizeof(BP_PalAudioWorldSubsystem_C_OnBattleRankDown) == 0x000002, "Wrong size on BP_PalAudioWorldSubsystem_C_OnBattleRankDown");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnBattleRankDown, Finish) == 0x000000, "Member 'BP_PalAudioWorldSubsystem_C_OnBattleRankDown::Finish' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnBattleRankDown, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'BP_PalAudioWorldSubsystem_C_OnBattleRankDown::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnChangeOneDayTimeType
// 0x0038 (0x0038 - 0x0000)
struct BP_PalAudioWorldSubsystem_C_OnChangeOneDayTimeType final
{
public:
	EPalOneDayTimeType                            OneDayTimeType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UAkAudioEvent*>                  TargetAmbientEvents;                               // 0x0008(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue_1;              // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27[0x1];                                       // 0x0027(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Get_Item;                           // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsNotEmpty_ReturnValue;             // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAudioWorldSubsystem_C_OnChangeOneDayTimeType) == 0x000008, "Wrong alignment on BP_PalAudioWorldSubsystem_C_OnChangeOneDayTimeType");
static_assert(sizeof(BP_PalAudioWorldSubsystem_C_OnChangeOneDayTimeType) == 0x000038, "Wrong size on BP_PalAudioWorldSubsystem_C_OnChangeOneDayTimeType");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnChangeOneDayTimeType, OneDayTimeType) == 0x000000, "Member 'BP_PalAudioWorldSubsystem_C_OnChangeOneDayTimeType::OneDayTimeType' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnChangeOneDayTimeType, TargetAmbientEvents) == 0x000008, "Member 'BP_PalAudioWorldSubsystem_C_OnChangeOneDayTimeType::TargetAmbientEvents' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnChangeOneDayTimeType, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BP_PalAudioWorldSubsystem_C_OnChangeOneDayTimeType::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnChangeOneDayTimeType, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'BP_PalAudioWorldSubsystem_C_OnChangeOneDayTimeType::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnChangeOneDayTimeType, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'BP_PalAudioWorldSubsystem_C_OnChangeOneDayTimeType::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnChangeOneDayTimeType, CallFunc_Array_IsEmpty_ReturnValue) == 0x000024, "Member 'BP_PalAudioWorldSubsystem_C_OnChangeOneDayTimeType::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnChangeOneDayTimeType, CallFunc_Array_IsEmpty_ReturnValue_1) == 0x000025, "Member 'BP_PalAudioWorldSubsystem_C_OnChangeOneDayTimeType::CallFunc_Array_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnChangeOneDayTimeType, CallFunc_BooleanAND_ReturnValue) == 0x000026, "Member 'BP_PalAudioWorldSubsystem_C_OnChangeOneDayTimeType::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnChangeOneDayTimeType, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_PalAudioWorldSubsystem_C_OnChangeOneDayTimeType::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnChangeOneDayTimeType, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'BP_PalAudioWorldSubsystem_C_OnChangeOneDayTimeType::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnChangeOneDayTimeType, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'BP_PalAudioWorldSubsystem_C_OnChangeOneDayTimeType::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnChangeOneDayTimeType, CallFunc_Array_IsNotEmpty_ReturnValue) == 0x000031, "Member 'BP_PalAudioWorldSubsystem_C_OnChangeOneDayTimeType::CallFunc_Array_IsNotEmpty_ReturnValue' has a wrong offset!");

// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnEndRaid
// 0x00A8 (0x00A8 - 0x0000)
struct BP_PalAudioWorldSubsystem_C_OnEndRaid final
{
public:
	struct FPalIncidentBroadcastParameter         Parameter;                                         // 0x0000(0x0090)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGuid                                  Guid;                                              // 0x0090(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue_1;           // 0x00A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue_1;             // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAudioWorldSubsystem_C_OnEndRaid) == 0x000008, "Wrong alignment on BP_PalAudioWorldSubsystem_C_OnEndRaid");
static_assert(sizeof(BP_PalAudioWorldSubsystem_C_OnEndRaid) == 0x0000A8, "Wrong size on BP_PalAudioWorldSubsystem_C_OnEndRaid");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnEndRaid, Parameter) == 0x000000, "Member 'BP_PalAudioWorldSubsystem_C_OnEndRaid::Parameter' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnEndRaid, Guid) == 0x000090, "Member 'BP_PalAudioWorldSubsystem_C_OnEndRaid::Guid' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnEndRaid, CallFunc_Array_RemoveItem_ReturnValue) == 0x0000A0, "Member 'BP_PalAudioWorldSubsystem_C_OnEndRaid::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnEndRaid, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000A1, "Member 'BP_PalAudioWorldSubsystem_C_OnEndRaid::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnEndRaid, CallFunc_Array_Contains_ReturnValue) == 0x0000A2, "Member 'BP_PalAudioWorldSubsystem_C_OnEndRaid::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnEndRaid, CallFunc_Array_RemoveItem_ReturnValue_1) == 0x0000A3, "Member 'BP_PalAudioWorldSubsystem_C_OnEndRaid::CallFunc_Array_RemoveItem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnEndRaid, CallFunc_Array_Contains_ReturnValue_1) == 0x0000A4, "Member 'BP_PalAudioWorldSubsystem_C_OnEndRaid::CallFunc_Array_Contains_ReturnValue_1' has a wrong offset!");

// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnPlayerEnterAmbientArea
// 0x0028 (0x0028 - 0x0000)
struct BP_PalAudioWorldSubsystem_C_OnPlayerEnterAmbientArea final
{
public:
	class APalPlayerCharacter*                    Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalAmbientSoundAreaBase*               AmbientSoundArea;                                  // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAudioWorldSubsystem_C_OnPlayerEnterAmbientArea) == 0x000008, "Wrong alignment on BP_PalAudioWorldSubsystem_C_OnPlayerEnterAmbientArea");
static_assert(sizeof(BP_PalAudioWorldSubsystem_C_OnPlayerEnterAmbientArea) == 0x000028, "Wrong size on BP_PalAudioWorldSubsystem_C_OnPlayerEnterAmbientArea");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnPlayerEnterAmbientArea, Player) == 0x000000, "Member 'BP_PalAudioWorldSubsystem_C_OnPlayerEnterAmbientArea::Player' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnPlayerEnterAmbientArea, AmbientSoundArea) == 0x000008, "Member 'BP_PalAudioWorldSubsystem_C_OnPlayerEnterAmbientArea::AmbientSoundArea' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnPlayerEnterAmbientArea, CallFunc_Array_AddUnique_ReturnValue) == 0x000010, "Member 'BP_PalAudioWorldSubsystem_C_OnPlayerEnterAmbientArea::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnPlayerEnterAmbientArea, CallFunc_GetPalmi_ReturnValue) == 0x000018, "Member 'BP_PalAudioWorldSubsystem_C_OnPlayerEnterAmbientArea::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnPlayerEnterAmbientArea, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000020, "Member 'BP_PalAudioWorldSubsystem_C_OnPlayerEnterAmbientArea::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnPlayerEnterBaseCamp
// 0x0020 (0x0020 - 0x0000)
struct BP_PalAudioWorldSubsystem_C_OnPlayerEnterBaseCamp final
{
public:
	class APalPlayerCharacter*                    Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBaseCampModel*                      BaseCampModel;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAudioWorldSubsystem_C_OnPlayerEnterBaseCamp) == 0x000008, "Wrong alignment on BP_PalAudioWorldSubsystem_C_OnPlayerEnterBaseCamp");
static_assert(sizeof(BP_PalAudioWorldSubsystem_C_OnPlayerEnterBaseCamp) == 0x000020, "Wrong size on BP_PalAudioWorldSubsystem_C_OnPlayerEnterBaseCamp");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnPlayerEnterBaseCamp, Player) == 0x000000, "Member 'BP_PalAudioWorldSubsystem_C_OnPlayerEnterBaseCamp::Player' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnPlayerEnterBaseCamp, BaseCampModel) == 0x000008, "Member 'BP_PalAudioWorldSubsystem_C_OnPlayerEnterBaseCamp::BaseCampModel' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnPlayerEnterBaseCamp, CallFunc_GetPalmi_ReturnValue) == 0x000010, "Member 'BP_PalAudioWorldSubsystem_C_OnPlayerEnterBaseCamp::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnPlayerEnterBaseCamp, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000018, "Member 'BP_PalAudioWorldSubsystem_C_OnPlayerEnterBaseCamp::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnPlayerEnterSpotArea
// 0x0028 (0x0028 - 0x0000)
struct BP_PalAudioWorldSubsystem_C_OnPlayerEnterSpotArea final
{
public:
	class APalPlayerCharacter*                    Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalSpotAreaBase*                       SpotArea;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAudioWorldSubsystem_C_OnPlayerEnterSpotArea) == 0x000008, "Wrong alignment on BP_PalAudioWorldSubsystem_C_OnPlayerEnterSpotArea");
static_assert(sizeof(BP_PalAudioWorldSubsystem_C_OnPlayerEnterSpotArea) == 0x000028, "Wrong size on BP_PalAudioWorldSubsystem_C_OnPlayerEnterSpotArea");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnPlayerEnterSpotArea, Player) == 0x000000, "Member 'BP_PalAudioWorldSubsystem_C_OnPlayerEnterSpotArea::Player' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnPlayerEnterSpotArea, SpotArea) == 0x000008, "Member 'BP_PalAudioWorldSubsystem_C_OnPlayerEnterSpotArea::SpotArea' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnPlayerEnterSpotArea, CallFunc_Array_Add_ReturnValue) == 0x000010, "Member 'BP_PalAudioWorldSubsystem_C_OnPlayerEnterSpotArea::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnPlayerEnterSpotArea, CallFunc_Array_Contains_ReturnValue) == 0x000014, "Member 'BP_PalAudioWorldSubsystem_C_OnPlayerEnterSpotArea::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnPlayerEnterSpotArea, CallFunc_GetPalmi_ReturnValue) == 0x000018, "Member 'BP_PalAudioWorldSubsystem_C_OnPlayerEnterSpotArea::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnPlayerEnterSpotArea, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000020, "Member 'BP_PalAudioWorldSubsystem_C_OnPlayerEnterSpotArea::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnPlayerExitAmbientArea
// 0x0028 (0x0028 - 0x0000)
struct BP_PalAudioWorldSubsystem_C_OnPlayerExitAmbientArea final
{
public:
	class APalPlayerCharacter*                    Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalAmbientSoundAreaBase*               AmbientSoundArea;                                  // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAudioWorldSubsystem_C_OnPlayerExitAmbientArea) == 0x000008, "Wrong alignment on BP_PalAudioWorldSubsystem_C_OnPlayerExitAmbientArea");
static_assert(sizeof(BP_PalAudioWorldSubsystem_C_OnPlayerExitAmbientArea) == 0x000028, "Wrong size on BP_PalAudioWorldSubsystem_C_OnPlayerExitAmbientArea");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnPlayerExitAmbientArea, Player) == 0x000000, "Member 'BP_PalAudioWorldSubsystem_C_OnPlayerExitAmbientArea::Player' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnPlayerExitAmbientArea, AmbientSoundArea) == 0x000008, "Member 'BP_PalAudioWorldSubsystem_C_OnPlayerExitAmbientArea::AmbientSoundArea' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnPlayerExitAmbientArea, CallFunc_Array_RemoveItem_ReturnValue) == 0x000010, "Member 'BP_PalAudioWorldSubsystem_C_OnPlayerExitAmbientArea::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnPlayerExitAmbientArea, CallFunc_Array_Contains_ReturnValue) == 0x000011, "Member 'BP_PalAudioWorldSubsystem_C_OnPlayerExitAmbientArea::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnPlayerExitAmbientArea, CallFunc_GetPalmi_ReturnValue) == 0x000018, "Member 'BP_PalAudioWorldSubsystem_C_OnPlayerExitAmbientArea::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnPlayerExitAmbientArea, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000020, "Member 'BP_PalAudioWorldSubsystem_C_OnPlayerExitAmbientArea::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnPlayerExitBaseCamp
// 0x0020 (0x0020 - 0x0000)
struct BP_PalAudioWorldSubsystem_C_OnPlayerExitBaseCamp final
{
public:
	class APalPlayerCharacter*                    Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBaseCampModel*                      BaseCampModel;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAudioWorldSubsystem_C_OnPlayerExitBaseCamp) == 0x000008, "Wrong alignment on BP_PalAudioWorldSubsystem_C_OnPlayerExitBaseCamp");
static_assert(sizeof(BP_PalAudioWorldSubsystem_C_OnPlayerExitBaseCamp) == 0x000020, "Wrong size on BP_PalAudioWorldSubsystem_C_OnPlayerExitBaseCamp");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnPlayerExitBaseCamp, Player) == 0x000000, "Member 'BP_PalAudioWorldSubsystem_C_OnPlayerExitBaseCamp::Player' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnPlayerExitBaseCamp, BaseCampModel) == 0x000008, "Member 'BP_PalAudioWorldSubsystem_C_OnPlayerExitBaseCamp::BaseCampModel' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnPlayerExitBaseCamp, CallFunc_GetPalmi_ReturnValue) == 0x000010, "Member 'BP_PalAudioWorldSubsystem_C_OnPlayerExitBaseCamp::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnPlayerExitBaseCamp, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000018, "Member 'BP_PalAudioWorldSubsystem_C_OnPlayerExitBaseCamp::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnPlayerExitSpotArea
// 0x0028 (0x0028 - 0x0000)
struct BP_PalAudioWorldSubsystem_C_OnPlayerExitSpotArea final
{
public:
	class APalPlayerCharacter*                    Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalSpotAreaBase*                       SpotArea;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAudioWorldSubsystem_C_OnPlayerExitSpotArea) == 0x000008, "Wrong alignment on BP_PalAudioWorldSubsystem_C_OnPlayerExitSpotArea");
static_assert(sizeof(BP_PalAudioWorldSubsystem_C_OnPlayerExitSpotArea) == 0x000028, "Wrong size on BP_PalAudioWorldSubsystem_C_OnPlayerExitSpotArea");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnPlayerExitSpotArea, Player) == 0x000000, "Member 'BP_PalAudioWorldSubsystem_C_OnPlayerExitSpotArea::Player' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnPlayerExitSpotArea, SpotArea) == 0x000008, "Member 'BP_PalAudioWorldSubsystem_C_OnPlayerExitSpotArea::SpotArea' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnPlayerExitSpotArea, CallFunc_Array_RemoveItem_ReturnValue) == 0x000010, "Member 'BP_PalAudioWorldSubsystem_C_OnPlayerExitSpotArea::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnPlayerExitSpotArea, CallFunc_Array_Contains_ReturnValue) == 0x000011, "Member 'BP_PalAudioWorldSubsystem_C_OnPlayerExitSpotArea::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnPlayerExitSpotArea, CallFunc_GetPalmi_ReturnValue) == 0x000018, "Member 'BP_PalAudioWorldSubsystem_C_OnPlayerExitSpotArea::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnPlayerExitSpotArea, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000020, "Member 'BP_PalAudioWorldSubsystem_C_OnPlayerExitSpotArea::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnSpawnedLocalPlayerCharacter
// 0x0010 (0x0010 - 0x0000)
struct BP_PalAudioWorldSubsystem_C_OnSpawnedLocalPlayerCharacter final
{
public:
	class APawn*                                  Pawn;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            Controller;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAudioWorldSubsystem_C_OnSpawnedLocalPlayerCharacter) == 0x000008, "Wrong alignment on BP_PalAudioWorldSubsystem_C_OnSpawnedLocalPlayerCharacter");
static_assert(sizeof(BP_PalAudioWorldSubsystem_C_OnSpawnedLocalPlayerCharacter) == 0x000010, "Wrong size on BP_PalAudioWorldSubsystem_C_OnSpawnedLocalPlayerCharacter");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnSpawnedLocalPlayerCharacter, Pawn) == 0x000000, "Member 'BP_PalAudioWorldSubsystem_C_OnSpawnedLocalPlayerCharacter::Pawn' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnSpawnedLocalPlayerCharacter, Controller) == 0x000008, "Member 'BP_PalAudioWorldSubsystem_C_OnSpawnedLocalPlayerCharacter::Controller' has a wrong offset!");

// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnStartRaid
// 0x00A8 (0x00A8 - 0x0000)
struct BP_PalAudioWorldSubsystem_C_OnStartRaid final
{
public:
	struct FPalIncidentBroadcastParameter         Parameter;                                         // 0x0000(0x0090)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGuid                                  Guid;                                              // 0x0090(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A2[0x2];                                       // 0x00A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAudioWorldSubsystem_C_OnStartRaid) == 0x000008, "Wrong alignment on BP_PalAudioWorldSubsystem_C_OnStartRaid");
static_assert(sizeof(BP_PalAudioWorldSubsystem_C_OnStartRaid) == 0x0000A8, "Wrong size on BP_PalAudioWorldSubsystem_C_OnStartRaid");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnStartRaid, Parameter) == 0x000000, "Member 'BP_PalAudioWorldSubsystem_C_OnStartRaid::Parameter' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnStartRaid, Guid) == 0x000090, "Member 'BP_PalAudioWorldSubsystem_C_OnStartRaid::Guid' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnStartRaid, CallFunc_Array_Contains_ReturnValue) == 0x0000A0, "Member 'BP_PalAudioWorldSubsystem_C_OnStartRaid::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnStartRaid, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000A1, "Member 'BP_PalAudioWorldSubsystem_C_OnStartRaid::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_OnStartRaid, CallFunc_Array_AddUnique_ReturnValue) == 0x0000A4, "Member 'BP_PalAudioWorldSubsystem_C_OnStartRaid::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");

// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.PlayAmbientSounds
// 0x0048 (0x0048 - 0x0000)
struct BP_PalAudioWorldSubsystem_C_PlayAmbientSounds final
{
public:
	EPalOneDayTimeType                            OneDayTimeType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UAkAudioEvent*>                  TargetAmbientEvents;                               // 0x0008(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalSoundOptions                       K2Node_MakeStruct_PalSoundOptions;                 // 0x0024(0x0004)(NoDestructor)
	class UAkAudioEvent*                          CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySound_ReturnValue;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAudioWorldSubsystem_C_PlayAmbientSounds) == 0x000008, "Wrong alignment on BP_PalAudioWorldSubsystem_C_PlayAmbientSounds");
static_assert(sizeof(BP_PalAudioWorldSubsystem_C_PlayAmbientSounds) == 0x000048, "Wrong size on BP_PalAudioWorldSubsystem_C_PlayAmbientSounds");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_PlayAmbientSounds, OneDayTimeType) == 0x000000, "Member 'BP_PalAudioWorldSubsystem_C_PlayAmbientSounds::OneDayTimeType' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_PlayAmbientSounds, TargetAmbientEvents) == 0x000008, "Member 'BP_PalAudioWorldSubsystem_C_PlayAmbientSounds::TargetAmbientEvents' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_PlayAmbientSounds, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BP_PalAudioWorldSubsystem_C_PlayAmbientSounds::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_PlayAmbientSounds, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'BP_PalAudioWorldSubsystem_C_PlayAmbientSounds::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_PlayAmbientSounds, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'BP_PalAudioWorldSubsystem_C_PlayAmbientSounds::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_PlayAmbientSounds, K2Node_MakeStruct_PalSoundOptions) == 0x000024, "Member 'BP_PalAudioWorldSubsystem_C_PlayAmbientSounds::K2Node_MakeStruct_PalSoundOptions' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_PlayAmbientSounds, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_PalAudioWorldSubsystem_C_PlayAmbientSounds::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_PlayAmbientSounds, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'BP_PalAudioWorldSubsystem_C_PlayAmbientSounds::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_PlayAmbientSounds, CallFunc_PlaySound_ReturnValue) == 0x000034, "Member 'BP_PalAudioWorldSubsystem_C_PlayAmbientSounds::CallFunc_PlaySound_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_PlayAmbientSounds, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'BP_PalAudioWorldSubsystem_C_PlayAmbientSounds::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_PlayAmbientSounds, CallFunc_Array_Add_ReturnValue) == 0x00003C, "Member 'BP_PalAudioWorldSubsystem_C_PlayAmbientSounds::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_PlayAmbientSounds, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000040, "Member 'BP_PalAudioWorldSubsystem_C_PlayAmbientSounds::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.RespawnPlayer
// 0x0008 (0x0008 - 0x0000)
struct BP_PalAudioWorldSubsystem_C_RespawnPlayer final
{
public:
	class APalPlayerCharacter*                    Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAudioWorldSubsystem_C_RespawnPlayer) == 0x000008, "Wrong alignment on BP_PalAudioWorldSubsystem_C_RespawnPlayer");
static_assert(sizeof(BP_PalAudioWorldSubsystem_C_RespawnPlayer) == 0x000008, "Wrong size on BP_PalAudioWorldSubsystem_C_RespawnPlayer");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_RespawnPlayer, Player) == 0x000000, "Member 'BP_PalAudioWorldSubsystem_C_RespawnPlayer::Player' has a wrong offset!");

// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.SetDsiableBattleBGM
// 0x0002 (0x0002 - 0x0000)
struct BP_PalAudioWorldSubsystem_C_SetDsiableBattleBGM final
{
public:
	bool                                          bIsDisable;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAudioWorldSubsystem_C_SetDsiableBattleBGM) == 0x000001, "Wrong alignment on BP_PalAudioWorldSubsystem_C_SetDsiableBattleBGM");
static_assert(sizeof(BP_PalAudioWorldSubsystem_C_SetDsiableBattleBGM) == 0x000002, "Wrong size on BP_PalAudioWorldSubsystem_C_SetDsiableBattleBGM");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_SetDsiableBattleBGM, bIsDisable) == 0x000000, "Member 'BP_PalAudioWorldSubsystem_C_SetDsiableBattleBGM::bIsDisable' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_SetDsiableBattleBGM, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000001, "Member 'BP_PalAudioWorldSubsystem_C_SetDsiableBattleBGM::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.Tick_BP
// 0x0004 (0x0004 - 0x0000)
struct BP_PalAudioWorldSubsystem_C_Tick_BP final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAudioWorldSubsystem_C_Tick_BP) == 0x000004, "Wrong alignment on BP_PalAudioWorldSubsystem_C_Tick_BP");
static_assert(sizeof(BP_PalAudioWorldSubsystem_C_Tick_BP) == 0x000004, "Wrong size on BP_PalAudioWorldSubsystem_C_Tick_BP");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_Tick_BP, DeltaTime) == 0x000000, "Member 'BP_PalAudioWorldSubsystem_C_Tick_BP::DeltaTime' has a wrong offset!");

// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.UpdateAmbient
// 0x0068 (0x0068 - 0x0000)
struct BP_PalAudioWorldSubsystem_C_UpdateAmbient final
{
public:
	class APalAmbientSoundAreaBase*               NextAmbientSoundArea;                              // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalAmbientSoundAreaData               CallFunc_GetAmbientSoundAreaData_ReturnValue;      // 0x0010(0x0028)()
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayingArea_ReturnValue;                // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APalAmbientSoundAreaBase*               CallFunc_FindMaxPriorityAmbientSoundArea_AmbinetSoundArea; // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x2];                                       // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Get_Item;                           // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalTimeManager*                        CallFunc_GetTimeManager_ReturnValue;               // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalOneDayTimeType                            CallFunc_GetCurrentDayTimeType_ReturnValue;        // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAudioWorldSubsystem_C_UpdateAmbient) == 0x000008, "Wrong alignment on BP_PalAudioWorldSubsystem_C_UpdateAmbient");
static_assert(sizeof(BP_PalAudioWorldSubsystem_C_UpdateAmbient) == 0x000068, "Wrong size on BP_PalAudioWorldSubsystem_C_UpdateAmbient");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateAmbient, NextAmbientSoundArea) == 0x000000, "Member 'BP_PalAudioWorldSubsystem_C_UpdateAmbient::NextAmbientSoundArea' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateAmbient, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_PalAudioWorldSubsystem_C_UpdateAmbient::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateAmbient, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'BP_PalAudioWorldSubsystem_C_UpdateAmbient::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateAmbient, CallFunc_GetAmbientSoundAreaData_ReturnValue) == 0x000010, "Member 'BP_PalAudioWorldSubsystem_C_UpdateAmbient::CallFunc_GetAmbientSoundAreaData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateAmbient, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'BP_PalAudioWorldSubsystem_C_UpdateAmbient::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateAmbient, CallFunc_IsPlayingArea_ReturnValue) == 0x00003C, "Member 'BP_PalAudioWorldSubsystem_C_UpdateAmbient::CallFunc_IsPlayingArea_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateAmbient, CallFunc_FindMaxPriorityAmbientSoundArea_AmbinetSoundArea) == 0x000040, "Member 'BP_PalAudioWorldSubsystem_C_UpdateAmbient::CallFunc_FindMaxPriorityAmbientSoundArea_AmbinetSoundArea' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateAmbient, CallFunc_Array_IsEmpty_ReturnValue) == 0x000048, "Member 'BP_PalAudioWorldSubsystem_C_UpdateAmbient::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateAmbient, CallFunc_IsValid_ReturnValue) == 0x000049, "Member 'BP_PalAudioWorldSubsystem_C_UpdateAmbient::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateAmbient, CallFunc_Array_Get_Item) == 0x00004C, "Member 'BP_PalAudioWorldSubsystem_C_UpdateAmbient::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateAmbient, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'BP_PalAudioWorldSubsystem_C_UpdateAmbient::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateAmbient, CallFunc_Less_IntInt_ReturnValue) == 0x000054, "Member 'BP_PalAudioWorldSubsystem_C_UpdateAmbient::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateAmbient, CallFunc_GetTimeManager_ReturnValue) == 0x000058, "Member 'BP_PalAudioWorldSubsystem_C_UpdateAmbient::CallFunc_GetTimeManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateAmbient, CallFunc_GetCurrentDayTimeType_ReturnValue) == 0x000060, "Member 'BP_PalAudioWorldSubsystem_C_UpdateAmbient::CallFunc_GetCurrentDayTimeType_ReturnValue' has a wrong offset!");

// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.UpdateDebugDisplay
// 0x0130 (0x0130 - 0x0000)
struct BP_PalAudioWorldSubsystem_C_UpdateDebugDisplay final
{
public:
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSoundPlayerLocation_OutLocation;       // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_CreateDebugModel_NewParam;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue_1;         // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0040(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAudioWorldSubsystem_C_UpdateDebugDisplay) == 0x000008, "Wrong alignment on BP_PalAudioWorldSubsystem_C_UpdateDebugDisplay");
static_assert(sizeof(BP_PalAudioWorldSubsystem_C_UpdateDebugDisplay) == 0x000130, "Wrong size on BP_PalAudioWorldSubsystem_C_UpdateDebugDisplay");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateDebugDisplay, CallFunc_GetPalDebugSetting_ReturnValue) == 0x000000, "Member 'BP_PalAudioWorldSubsystem_C_UpdateDebugDisplay::CallFunc_GetPalDebugSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateDebugDisplay, CallFunc_GetSoundPlayerLocation_OutLocation) == 0x000008, "Member 'BP_PalAudioWorldSubsystem_C_UpdateDebugDisplay::CallFunc_GetSoundPlayerLocation_OutLocation' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateDebugDisplay, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_PalAudioWorldSubsystem_C_UpdateDebugDisplay::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateDebugDisplay, CallFunc_CreateDebugModel_NewParam) == 0x000028, "Member 'BP_PalAudioWorldSubsystem_C_UpdateDebugDisplay::CallFunc_CreateDebugModel_NewParam' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateDebugDisplay, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'BP_PalAudioWorldSubsystem_C_UpdateDebugDisplay::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateDebugDisplay, CallFunc_IsValid_ReturnValue_2) == 0x000031, "Member 'BP_PalAudioWorldSubsystem_C_UpdateDebugDisplay::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateDebugDisplay, CallFunc_GetPalDebugSetting_ReturnValue_1) == 0x000038, "Member 'BP_PalAudioWorldSubsystem_C_UpdateDebugDisplay::CallFunc_GetPalDebugSetting_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateDebugDisplay, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000040, "Member 'BP_PalAudioWorldSubsystem_C_UpdateDebugDisplay::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateDebugDisplay, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000128, "Member 'BP_PalAudioWorldSubsystem_C_UpdateDebugDisplay::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");

// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.UpdateRaid
// 0x0001 (0x0001 - 0x0000)
struct BP_PalAudioWorldSubsystem_C_UpdateRaid final
{
public:
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAudioWorldSubsystem_C_UpdateRaid) == 0x000001, "Wrong alignment on BP_PalAudioWorldSubsystem_C_UpdateRaid");
static_assert(sizeof(BP_PalAudioWorldSubsystem_C_UpdateRaid) == 0x000001, "Wrong size on BP_PalAudioWorldSubsystem_C_UpdateRaid");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateRaid, CallFunc_Array_IsEmpty_ReturnValue) == 0x000000, "Member 'BP_PalAudioWorldSubsystem_C_UpdateRaid::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");

// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.UpdateSpot
// 0x0018 (0x0018 - 0x0000)
struct BP_PalAudioWorldSubsystem_C_UpdateSpot final
{
public:
	EPalAudioState                                SpotName;                                          // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInsideAnySpot;                                   // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalSpotAreaBase*                       CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalAudioState                                CallFunc_GetAudioState_ReturnValue;                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAudioWorldSubsystem_C_UpdateSpot) == 0x000008, "Wrong alignment on BP_PalAudioWorldSubsystem_C_UpdateSpot");
static_assert(sizeof(BP_PalAudioWorldSubsystem_C_UpdateSpot) == 0x000018, "Wrong size on BP_PalAudioWorldSubsystem_C_UpdateSpot");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateSpot, SpotName) == 0x000000, "Member 'BP_PalAudioWorldSubsystem_C_UpdateSpot::SpotName' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateSpot, IsInsideAnySpot) == 0x000001, "Member 'BP_PalAudioWorldSubsystem_C_UpdateSpot::IsInsideAnySpot' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateSpot, CallFunc_Array_LastIndex_ReturnValue) == 0x000004, "Member 'BP_PalAudioWorldSubsystem_C_UpdateSpot::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateSpot, CallFunc_Array_Get_Item) == 0x000008, "Member 'BP_PalAudioWorldSubsystem_C_UpdateSpot::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateSpot, CallFunc_Array_IsEmpty_ReturnValue) == 0x000010, "Member 'BP_PalAudioWorldSubsystem_C_UpdateSpot::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateSpot, CallFunc_GetAudioState_ReturnValue) == 0x000011, "Member 'BP_PalAudioWorldSubsystem_C_UpdateSpot::CallFunc_GetAudioState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateSpot, CallFunc_Not_PreBool_ReturnValue) == 0x000012, "Member 'BP_PalAudioWorldSubsystem_C_UpdateSpot::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.UpdateStatePlayerAlive
// 0x0020 (0x0020 - 0x0000)
struct BP_PalAudioWorldSubsystem_C_UpdateStatePlayerAlive final
{
public:
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_1;                   // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDead_ReturnValue;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAudioWorldSubsystem_C_UpdateStatePlayerAlive) == 0x000008, "Wrong alignment on BP_PalAudioWorldSubsystem_C_UpdateStatePlayerAlive");
static_assert(sizeof(BP_PalAudioWorldSubsystem_C_UpdateStatePlayerAlive) == 0x000020, "Wrong size on BP_PalAudioWorldSubsystem_C_UpdateStatePlayerAlive");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateStatePlayerAlive, CallFunc_GetPalmi_ReturnValue) == 0x000000, "Member 'BP_PalAudioWorldSubsystem_C_UpdateStatePlayerAlive::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateStatePlayerAlive, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_PalAudioWorldSubsystem_C_UpdateStatePlayerAlive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateStatePlayerAlive, CallFunc_GetPalmi_ReturnValue_1) == 0x000010, "Member 'BP_PalAudioWorldSubsystem_C_UpdateStatePlayerAlive::CallFunc_GetPalmi_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateStatePlayerAlive, CallFunc_IsDead_ReturnValue) == 0x000018, "Member 'BP_PalAudioWorldSubsystem_C_UpdateStatePlayerAlive::CallFunc_IsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateStatePlayerAlive, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000019, "Member 'BP_PalAudioWorldSubsystem_C_UpdateStatePlayerAlive::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.UpdateWorldLocation
// 0x0088 (0x0088 - 0x0000)
struct BP_PalAudioWorldSubsystem_C_UpdateWorldLocation final
{
public:
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_1;                   // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterCameraComponent*           CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAudioWorldSubsystem_C_UpdateWorldLocation) == 0x000008, "Wrong alignment on BP_PalAudioWorldSubsystem_C_UpdateWorldLocation");
static_assert(sizeof(BP_PalAudioWorldSubsystem_C_UpdateWorldLocation) == 0x000088, "Wrong size on BP_PalAudioWorldSubsystem_C_UpdateWorldLocation");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateWorldLocation, CallFunc_GetPalmi_ReturnValue) == 0x000000, "Member 'BP_PalAudioWorldSubsystem_C_UpdateWorldLocation::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateWorldLocation, CallFunc_GetPalmi_ReturnValue_1) == 0x000008, "Member 'BP_PalAudioWorldSubsystem_C_UpdateWorldLocation::CallFunc_GetPalmi_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateWorldLocation, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_PalAudioWorldSubsystem_C_UpdateWorldLocation::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateWorldLocation, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'BP_PalAudioWorldSubsystem_C_UpdateWorldLocation::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateWorldLocation, CallFunc_IsValid_ReturnValue_1) == 0x000020, "Member 'BP_PalAudioWorldSubsystem_C_UpdateWorldLocation::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateWorldLocation, CallFunc_GetForwardVector_ReturnValue) == 0x000028, "Member 'BP_PalAudioWorldSubsystem_C_UpdateWorldLocation::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateWorldLocation, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000040, "Member 'BP_PalAudioWorldSubsystem_C_UpdateWorldLocation::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateWorldLocation, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000058, "Member 'BP_PalAudioWorldSubsystem_C_UpdateWorldLocation::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateWorldLocation, CallFunc_Add_VectorVector_ReturnValue) == 0x000070, "Member 'BP_PalAudioWorldSubsystem_C_UpdateWorldLocation::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");

// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.UpdateWorldTime
// 0x0010 (0x0010 - 0x0000)
struct BP_PalAudioWorldSubsystem_C_UpdateWorldTime final
{
public:
	class UPalTimeManager*                        CallFunc_GetTimeManager_ReturnValue;               // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCurrentPalWorldHoursFloat_ReturnValue; // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAudioWorldSubsystem_C_UpdateWorldTime) == 0x000008, "Wrong alignment on BP_PalAudioWorldSubsystem_C_UpdateWorldTime");
static_assert(sizeof(BP_PalAudioWorldSubsystem_C_UpdateWorldTime) == 0x000010, "Wrong size on BP_PalAudioWorldSubsystem_C_UpdateWorldTime");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateWorldTime, CallFunc_GetTimeManager_ReturnValue) == 0x000000, "Member 'BP_PalAudioWorldSubsystem_C_UpdateWorldTime::CallFunc_GetTimeManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateWorldTime, CallFunc_GetCurrentPalWorldHoursFloat_ReturnValue) == 0x000008, "Member 'BP_PalAudioWorldSubsystem_C_UpdateWorldTime::CallFunc_GetCurrentPalWorldHoursFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalAudioWorldSubsystem_C_UpdateWorldTime, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'BP_PalAudioWorldSubsystem_C_UpdateWorldTime::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

