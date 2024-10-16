#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.ActivateBossAI
// 0x0050 (0x0050 - 0x0000)
struct PalBossBattleSequence_Opening_C_ActivateBossAI final
{
public:
	class UPalBossBattleSequencer*                CallFunc_GetOuterSequencer_ReturnValue;            // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class APalPlayerCharacter*>            CallFunc_GetInRoomPlayers_ReturnValue;             // 0x0008(0x0010)(ReferenceParm)
	class APalPlayerCharacter*                    CallFunc_FindFirstCombatTargetForBossAI_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBossBattleSequencer*                CallFunc_GetOuterSequencer_ReturnValue_1;          // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetBossCharacter_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MonsterAIController_Boss_C*         K2Node_DynamicCast_AsBP_Monster_AIController_Boss; // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PalBossBattleSequence_Opening_C_ActivateBossAI) == 0x000008, "Wrong alignment on PalBossBattleSequence_Opening_C_ActivateBossAI");
static_assert(sizeof(PalBossBattleSequence_Opening_C_ActivateBossAI) == 0x000050, "Wrong size on PalBossBattleSequence_Opening_C_ActivateBossAI");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ActivateBossAI, CallFunc_GetOuterSequencer_ReturnValue) == 0x000000, "Member 'PalBossBattleSequence_Opening_C_ActivateBossAI::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ActivateBossAI, CallFunc_GetInRoomPlayers_ReturnValue) == 0x000008, "Member 'PalBossBattleSequence_Opening_C_ActivateBossAI::CallFunc_GetInRoomPlayers_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ActivateBossAI, CallFunc_FindFirstCombatTargetForBossAI_ReturnValue) == 0x000018, "Member 'PalBossBattleSequence_Opening_C_ActivateBossAI::CallFunc_FindFirstCombatTargetForBossAI_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ActivateBossAI, CallFunc_GetOuterSequencer_ReturnValue_1) == 0x000020, "Member 'PalBossBattleSequence_Opening_C_ActivateBossAI::CallFunc_GetOuterSequencer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ActivateBossAI, CallFunc_GetBossCharacter_ReturnValue) == 0x000028, "Member 'PalBossBattleSequence_Opening_C_ActivateBossAI::CallFunc_GetBossCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ActivateBossAI, CallFunc_GetController_ReturnValue) == 0x000030, "Member 'PalBossBattleSequence_Opening_C_ActivateBossAI::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ActivateBossAI, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'PalBossBattleSequence_Opening_C_ActivateBossAI::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ActivateBossAI, CallFunc_IsValid_ReturnValue_1) == 0x000039, "Member 'PalBossBattleSequence_Opening_C_ActivateBossAI::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ActivateBossAI, K2Node_DynamicCast_AsBP_Monster_AIController_Boss) == 0x000040, "Member 'PalBossBattleSequence_Opening_C_ActivateBossAI::K2Node_DynamicCast_AsBP_Monster_AIController_Boss' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ActivateBossAI, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'PalBossBattleSequence_Opening_C_ActivateBossAI::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.CheckLevelInstanceLoaded
// 0x0090 (0x0090 - 0x0000)
struct PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AllLevelCheckTimeoutTIme;                          // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalBossBattleSequencer*                CallFunc_GetOuterSequencer_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBossBattleInstanceModel*            CallFunc_GetBossBattleInstanceModel_ReturnValue;   // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_FFloor64_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_Int64ToString_ReturnValue;           // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAllLevelLoaded_ReturnValue;             // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEditorBuild_ReturnValue;                // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72[0x6];                                       // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBossBattleSequencer*                CallFunc_GetOuterSequencer_ReturnValue_1;          // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBossBattleInstanceModel*            CallFunc_GetBossBattleInstanceModel_ReturnValue_1; // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded) == 0x000008, "Wrong alignment on PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded");
static_assert(sizeof(PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded) == 0x000090, "Wrong size on PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded");
static_assert(offsetof(PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded, DeltaTime) == 0x000000, "Member 'PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded::DeltaTime' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded, AllLevelCheckTimeoutTIme) == 0x000008, "Member 'PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded::AllLevelCheckTimeoutTIme' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded, CallFunc_GetOuterSequencer_ReturnValue) == 0x000010, "Member 'PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded, CallFunc_GetBossBattleInstanceModel_ReturnValue) == 0x000018, "Member 'PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded::CallFunc_GetBossBattleInstanceModel_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000020, "Member 'PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded, CallFunc_FFloor64_ReturnValue) == 0x000028, "Member 'PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded::CallFunc_FFloor64_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000030, "Member 'PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded, CallFunc_Conv_Int64ToString_ReturnValue) == 0x000038, "Member 'PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded::CallFunc_Conv_Int64ToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded, CallFunc_Concat_StrStr_ReturnValue) == 0x000048, "Member 'PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000058, "Member 'PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000068, "Member 'PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded, CallFunc_IsAllLevelLoaded_ReturnValue) == 0x000070, "Member 'PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded::CallFunc_IsAllLevelLoaded_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded, CallFunc_IsEditorBuild_ReturnValue) == 0x000071, "Member 'PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded::CallFunc_IsEditorBuild_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded, CallFunc_GetOuterSequencer_ReturnValue_1) == 0x000078, "Member 'PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded::CallFunc_GetOuterSequencer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded, CallFunc_GetBossBattleInstanceModel_ReturnValue_1) == 0x000080, "Member 'PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded::CallFunc_GetBossBattleInstanceModel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded, CallFunc_IsValid_ReturnValue) == 0x000088, "Member 'PalBossBattleSequence_Opening_C_CheckLevelInstanceLoaded::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.DecAssetLoadingCount
// 0x0020 (0x0020 - 0x0000)
struct PalBossBattleSequence_Opening_C_DecAssetLoadingCount final
{
public:
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Subtract_Int64Int64_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_Int64ToInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PalBossBattleSequence_Opening_C_DecAssetLoadingCount) == 0x000008, "Wrong alignment on PalBossBattleSequence_Opening_C_DecAssetLoadingCount");
static_assert(sizeof(PalBossBattleSequence_Opening_C_DecAssetLoadingCount) == 0x000020, "Wrong size on PalBossBattleSequence_Opening_C_DecAssetLoadingCount");
static_assert(offsetof(PalBossBattleSequence_Opening_C_DecAssetLoadingCount, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000000, "Member 'PalBossBattleSequence_Opening_C_DecAssetLoadingCount::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_DecAssetLoadingCount, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x000008, "Member 'PalBossBattleSequence_Opening_C_DecAssetLoadingCount::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_DecAssetLoadingCount, CallFunc_Subtract_Int64Int64_ReturnValue) == 0x000010, "Member 'PalBossBattleSequence_Opening_C_DecAssetLoadingCount::CallFunc_Subtract_Int64Int64_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_DecAssetLoadingCount, CallFunc_Conv_Int64ToInt_ReturnValue) == 0x000018, "Member 'PalBossBattleSequence_Opening_C_DecAssetLoadingCount::CallFunc_Conv_Int64ToInt_ReturnValue' has a wrong offset!");

// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.ExecuteUbergraph_PalBossBattleSequence_Opening
// 0x0288 (0x0288 - 0x0000)
struct PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class APalCharacter* SpawnedCharacter)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Loaded_2;                       // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_CustomEvent_SpawnedCharacter;               // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBossBattleSequencer*                CallFunc_GetOuterSequencer_ReturnValue;            // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBossBattleSequencer*                CallFunc_GetOuterSequencer_ReturnValue_1;          // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class APalPlayerCharacter*>            CallFunc_GetInRoomPlayers_ReturnValue;             // 0x0058(0x0010)(ReferenceParm)
	EPalBossType                                  CallFunc_GetBossType_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSkipCutscene_Skip;                      // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsSuccess;                            // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0076(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77[0x1];                                       // 0x0077(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTime;                            // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBossBattleSequencer*                CallFunc_GetOuterSequencer_ReturnValue_2;          // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBossBattleSequencer*                CallFunc_GetOuterSequencer_ReturnValue_3;          // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetJoinedLocalControlPlayer_ReturnValue;  // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          K2Node_DynamicCast_AsAk_Audio_Event;               // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerState*                        CallFunc_GetLocalPlayerState_ReturnValue;          // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSyncTeleportComponent*              CallFunc_GetSyncTeleportComp_ReturnValue;          // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetJoinedLocalControlPlayer_ReturnValue_1; // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBossBattleSequencer*                CallFunc_GetOuterSequencer_ReturnValue_4;          // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x00E0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBossBattleSequencer*                CallFunc_GetOuterSequencer_ReturnValue_5;          // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBossBattleInstanceModel*            CallFunc_GetBossBattleInstanceModel_ReturnValue;   // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_4;            // 0x0100(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBossBattleSequencer*                CallFunc_GetOuterSequencer_ReturnValue_6;          // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBossBattleInstanceModel*            CallFunc_GetBossBattleInstanceModel_ReturnValue_1; // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_5;            // 0x0128(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftClassReference_ReturnValue;    // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAssetLoadingCompleted_NewParam;         // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAssetLoadingCompleted_NewParam_1;       // 0x013A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAssetLoadingCompleted_NewParam_2;       // 0x013B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalActionBase* Action)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x013C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalBossBattleEventBase* BossBattleEvent)> K2Node_CreateDelegate_OutputDelegate_7;            // 0x014C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue_1;                   // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15D[0x3];                                      // 0x015D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBossBattleSequencer*                CallFunc_GetOuterSequencer_ReturnValue_7;          // 0x0160(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable;                               // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_174[0x4];                                      // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_ClassDynamicCast_AsPal_Cutscene_Actor;      // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_181[0x3];                                      // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18C[0x4];                                      // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBossBattleSequencer*                CallFunc_GetOuterSequencer_ReturnValue_8;          // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19C[0x4];                                      // 0x019C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBossBattleInstanceModel*            CallFunc_GetBossBattleInstanceModel_ReturnValue_2; // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftClassReference_ReturnValue_1;  // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A9[0x3];                                      // 0x01A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalBossBattleSequencer*                CallFunc_GetOuterSequencer_ReturnValue_9;          // 0x01B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBossBattleEventBase*                K2Node_CustomEvent_BossBattleEvent;                // 0x01B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_BossBattleEventBase_C*              K2Node_DynamicCast_AsBP_Boss_Battle_Event_Base;    // 0x01C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C9[0x7];                                      // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x01D0(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue_2;                   // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D9[0x7];                                      // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_LevelInstance_BossRoomBase_C*       K2Node_DynamicCast_AsBP_Level_Instance_Boss_Room_Base; // 0x01E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E9[0x7];                                      // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_BossBattle_BossCharacterSpawner_C*  CallFunc_GetBossSpawner_BossSpawner;               // 0x01F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable_1;                            // 0x01F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          K2Node_DynamicCast_AsAk_Audio_Event_1;             // 0x0200(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAssetLoadingCompleted_NewParam_3;       // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20A[0x6];                                      // 0x020A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded_1;                       // 0x0210(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_219[0x7];                                      // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue;                // 0x0220(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetJoinedLocalControlPlayer_ReturnValue_2; // 0x0228(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_231[0x7];                                      // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetJoinedLocalControlPlayer_ReturnValue_3; // 0x0238(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	const class UPalActionBase*                   K2Node_CustomEvent_action;                         // 0x0240(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLoadingAction_isLoadingAction;          // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLoadingAction_isLoadingAction_1;        // 0x0249(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24A[0x6];                                      // 0x024A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetJoinedLocalControlPlayer_ReturnValue_4; // 0x0250(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetJoinedLocalControlPlayer_ReturnValue_5; // 0x0258(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetJoinedLocalControlPlayer_ReturnValue_6; // 0x0260(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         CallFunc_GetCurrentAction_ReturnValue;             // 0x0268(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         CallFunc_GetCurrentAction_ReturnValue_1;           // 0x0270(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27C[0x4];                                      // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_CheckLevelInstanceLoaded_DeltaTime_ImplicitCast; // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening) == 0x000008, "Wrong alignment on PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening");
static_assert(sizeof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening) == 0x000288, "Wrong size on PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, EntryPoint) == 0x000000, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::EntryPoint' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, Temp_int_Variable) == 0x000004, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, K2Node_CreateDelegate_OutputDelegate_2) == 0x000028, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, K2Node_CustomEvent_Loaded_2) == 0x000038, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::K2Node_CustomEvent_Loaded_2' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, K2Node_CustomEvent_SpawnedCharacter) == 0x000040, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::K2Node_CustomEvent_SpawnedCharacter' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_GetOuterSequencer_ReturnValue) == 0x000048, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_GetOuterSequencer_ReturnValue_1) == 0x000050, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_GetOuterSequencer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_GetInRoomPlayers_ReturnValue) == 0x000058, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_GetInRoomPlayers_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_GetBossType_ReturnValue) == 0x000068, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_GetBossType_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_Array_Length_ReturnValue) == 0x00006C, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, Temp_int_Variable_1) == 0x000070, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_IsSkipCutscene_Skip) == 0x000074, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_IsSkipCutscene_Skip' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, K2Node_Event_IsSuccess) == 0x000075, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::K2Node_Event_IsSuccess' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_IsServer_ReturnValue) == 0x000076, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, K2Node_Event_DeltaTime) == 0x000078, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_GetOuterSequencer_ReturnValue_2) == 0x000080, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_GetOuterSequencer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_GetOuterSequencer_ReturnValue_3) == 0x000088, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_GetOuterSequencer_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_GetJoinedLocalControlPlayer_ReturnValue) == 0x000090, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_GetJoinedLocalControlPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, Temp_object_Variable) == 0x000098, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_IsValid_ReturnValue) == 0x0000A0, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, K2Node_DynamicCast_AsAk_Audio_Event) == 0x0000A8, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::K2Node_DynamicCast_AsAk_Audio_Event' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, K2Node_DynamicCast_bSuccess) == 0x0000B0, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_GetLocalPlayerState_ReturnValue) == 0x0000B8, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_GetLocalPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_GetSyncTeleportComp_ReturnValue) == 0x0000C0, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_GetSyncTeleportComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_GetJoinedLocalControlPlayer_ReturnValue_1) == 0x0000C8, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_GetJoinedLocalControlPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_IsValid_ReturnValue_1) == 0x0000D0, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_GetOuterSequencer_ReturnValue_4) == 0x0000D8, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_GetOuterSequencer_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000E0, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_GetOuterSequencer_ReturnValue_5) == 0x0000F0, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_GetOuterSequencer_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_GetBossBattleInstanceModel_ReturnValue) == 0x0000F8, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_GetBossBattleInstanceModel_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, K2Node_CreateDelegate_OutputDelegate_4) == 0x000100, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000110, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_GetOuterSequencer_ReturnValue_6) == 0x000118, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_GetOuterSequencer_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_GetBossBattleInstanceModel_ReturnValue_1) == 0x000120, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_GetBossBattleInstanceModel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, K2Node_CreateDelegate_OutputDelegate_5) == 0x000128, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_IsValidSoftClassReference_ReturnValue) == 0x000138, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_IsValidSoftClassReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_IsAssetLoadingCompleted_NewParam) == 0x000139, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_IsAssetLoadingCompleted_NewParam' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_IsAssetLoadingCompleted_NewParam_1) == 0x00013A, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_IsAssetLoadingCompleted_NewParam_1' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_IsAssetLoadingCompleted_NewParam_2) == 0x00013B, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_IsAssetLoadingCompleted_NewParam_2' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, K2Node_CreateDelegate_OutputDelegate_6) == 0x00013C, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, K2Node_CreateDelegate_OutputDelegate_7) == 0x00014C, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_IsServer_ReturnValue_1) == 0x00015C, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_IsServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_GetOuterSequencer_ReturnValue_7) == 0x000160, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_GetOuterSequencer_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, Temp_class_Variable) == 0x000168, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_Add_IntInt_ReturnValue) == 0x000170, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, K2Node_ClassDynamicCast_AsPal_Cutscene_Actor) == 0x000178, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::K2Node_ClassDynamicCast_AsPal_Cutscene_Actor' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, K2Node_ClassDynamicCast_bSuccess) == 0x000180, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_Add_IntInt_ReturnValue_1) == 0x000184, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, Temp_int_Variable_2) == 0x000188, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_GetOuterSequencer_ReturnValue_8) == 0x000190, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_GetOuterSequencer_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_Add_IntInt_ReturnValue_2) == 0x000198, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_GetBossBattleInstanceModel_ReturnValue_2) == 0x0001A0, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_GetBossBattleInstanceModel_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_IsValidSoftClassReference_ReturnValue_1) == 0x0001A8, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_IsValidSoftClassReference_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_Add_IntInt_ReturnValue_3) == 0x0001AC, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_GetOuterSequencer_ReturnValue_9) == 0x0001B0, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_GetOuterSequencer_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, K2Node_CustomEvent_BossBattleEvent) == 0x0001B8, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::K2Node_CustomEvent_BossBattleEvent' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, K2Node_DynamicCast_AsBP_Boss_Battle_Event_Base) == 0x0001C0, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::K2Node_DynamicCast_AsBP_Boss_Battle_Event_Base' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, K2Node_DynamicCast_bSuccess_1) == 0x0001C8, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, K2Node_CustomEvent_Loaded) == 0x0001D0, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_IsServer_ReturnValue_2) == 0x0001D8, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_IsServer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, K2Node_DynamicCast_AsBP_Level_Instance_Boss_Room_Base) == 0x0001E0, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::K2Node_DynamicCast_AsBP_Level_Instance_Boss_Room_Base' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, K2Node_DynamicCast_bSuccess_2) == 0x0001E8, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_GetBossSpawner_BossSpawner) == 0x0001F0, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_GetBossSpawner_BossSpawner' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, Temp_object_Variable_1) == 0x0001F8, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, K2Node_DynamicCast_AsAk_Audio_Event_1) == 0x000200, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::K2Node_DynamicCast_AsAk_Audio_Event_1' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, K2Node_DynamicCast_bSuccess_3) == 0x000208, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_IsAssetLoadingCompleted_NewParam_3) == 0x000209, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_IsAssetLoadingCompleted_NewParam_3' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, K2Node_CustomEvent_Loaded_1) == 0x000210, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::K2Node_CustomEvent_Loaded_1' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_IsValid_ReturnValue_2) == 0x000218, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_GetHUDService_ReturnValue) == 0x000220, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_GetHUDService_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_GetJoinedLocalControlPlayer_ReturnValue_2) == 0x000228, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_GetJoinedLocalControlPlayer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_IsValid_ReturnValue_3) == 0x000230, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_GetJoinedLocalControlPlayer_ReturnValue_3) == 0x000238, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_GetJoinedLocalControlPlayer_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, K2Node_CustomEvent_action) == 0x000240, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::K2Node_CustomEvent_action' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_IsLoadingAction_isLoadingAction) == 0x000248, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_IsLoadingAction_isLoadingAction' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_IsLoadingAction_isLoadingAction_1) == 0x000249, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_IsLoadingAction_isLoadingAction_1' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_GetJoinedLocalControlPlayer_ReturnValue_4) == 0x000250, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_GetJoinedLocalControlPlayer_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_GetJoinedLocalControlPlayer_ReturnValue_5) == 0x000258, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_GetJoinedLocalControlPlayer_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_GetJoinedLocalControlPlayer_ReturnValue_6) == 0x000260, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_GetJoinedLocalControlPlayer_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_GetCurrentAction_ReturnValue) == 0x000268, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_GetCurrentAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_GetCurrentAction_ReturnValue_1) == 0x000270, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_GetCurrentAction_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, Temp_int_Variable_3) == 0x000278, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening, CallFunc_CheckLevelInstanceLoaded_DeltaTime_ImplicitCast) == 0x000280, "Member 'PalBossBattleSequence_Opening_C_ExecuteUbergraph_PalBossBattleSequence_Opening::CallFunc_CheckLevelInstanceLoaded_DeltaTime_ImplicitCast' has a wrong offset!");

// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.FinishSequence
// 0x0001 (0x0001 - 0x0000)
struct PalBossBattleSequence_Opening_C_FinishSequence final
{
public:
	bool                                          IsSuccess;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PalBossBattleSequence_Opening_C_FinishSequence) == 0x000001, "Wrong alignment on PalBossBattleSequence_Opening_C_FinishSequence");
static_assert(sizeof(PalBossBattleSequence_Opening_C_FinishSequence) == 0x000001, "Wrong size on PalBossBattleSequence_Opening_C_FinishSequence");
static_assert(offsetof(PalBossBattleSequence_Opening_C_FinishSequence, IsSuccess) == 0x000000, "Member 'PalBossBattleSequence_Opening_C_FinishSequence::IsSuccess' has a wrong offset!");

// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.FixPlayerPos
// 0x0190 (0x0190 - 0x0000)
struct PalBossBattleSequence_Opening_C_FixPlayerPos final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_Array_Get_Item;                           // 0x0010(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalBossBattleSequencer*                CallFunc_GetOuterSequencer_ReturnValue;            // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class APalPlayerCharacter*>            CallFunc_GetInRoomPlayers_ReturnValue;             // 0x0078(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_Array_Get_Item_1;                         // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x00A0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue;         // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PalBossBattleSequence_Opening_C_FixPlayerPos) == 0x000010, "Wrong alignment on PalBossBattleSequence_Opening_C_FixPlayerPos");
static_assert(sizeof(PalBossBattleSequence_Opening_C_FixPlayerPos) == 0x000190, "Wrong size on PalBossBattleSequence_Opening_C_FixPlayerPos");
static_assert(offsetof(PalBossBattleSequence_Opening_C_FixPlayerPos, Temp_int_Array_Index_Variable) == 0x000000, "Member 'PalBossBattleSequence_Opening_C_FixPlayerPos::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_FixPlayerPos, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'PalBossBattleSequence_Opening_C_FixPlayerPos::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_FixPlayerPos, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'PalBossBattleSequence_Opening_C_FixPlayerPos::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_FixPlayerPos, CallFunc_Array_Get_Item) == 0x000010, "Member 'PalBossBattleSequence_Opening_C_FixPlayerPos::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_FixPlayerPos, CallFunc_GetOuterSequencer_ReturnValue) == 0x000070, "Member 'PalBossBattleSequence_Opening_C_FixPlayerPos::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_FixPlayerPos, CallFunc_GetInRoomPlayers_ReturnValue) == 0x000078, "Member 'PalBossBattleSequence_Opening_C_FixPlayerPos::CallFunc_GetInRoomPlayers_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_FixPlayerPos, CallFunc_Array_Length_ReturnValue) == 0x000088, "Member 'PalBossBattleSequence_Opening_C_FixPlayerPos::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_FixPlayerPos, CallFunc_Array_Get_Item_1) == 0x000090, "Member 'PalBossBattleSequence_Opening_C_FixPlayerPos::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_FixPlayerPos, CallFunc_Less_IntInt_ReturnValue) == 0x000098, "Member 'PalBossBattleSequence_Opening_C_FixPlayerPos::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_FixPlayerPos, CallFunc_K2_SetActorTransform_SweepHitResult) == 0x0000A0, "Member 'PalBossBattleSequence_Opening_C_FixPlayerPos::CallFunc_K2_SetActorTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_FixPlayerPos, CallFunc_K2_SetActorTransform_ReturnValue) == 0x000188, "Member 'PalBossBattleSequence_Opening_C_FixPlayerPos::CallFunc_K2_SetActorTransform_ReturnValue' has a wrong offset!");

// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.GetLevelSpawnPos
// 0x0080 (0x0080 - 0x0000)
struct PalBossBattleSequence_Opening_C_GetLevelSpawnPos final
{
public:
	struct FVector                                Pos;                                               // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalBossBattleSequencer*                CallFunc_GetOuterSequencer_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalBossType                                  CallFunc_GetBossType_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PalBossBattleSequence_Opening_C_GetLevelSpawnPos) == 0x000008, "Wrong alignment on PalBossBattleSequence_Opening_C_GetLevelSpawnPos");
static_assert(sizeof(PalBossBattleSequence_Opening_C_GetLevelSpawnPos) == 0x000080, "Wrong size on PalBossBattleSequence_Opening_C_GetLevelSpawnPos");
static_assert(offsetof(PalBossBattleSequence_Opening_C_GetLevelSpawnPos, Pos) == 0x000000, "Member 'PalBossBattleSequence_Opening_C_GetLevelSpawnPos::Pos' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_GetLevelSpawnPos, CallFunc_GetOuterSequencer_ReturnValue) == 0x000018, "Member 'PalBossBattleSequence_Opening_C_GetLevelSpawnPos::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_GetLevelSpawnPos, CallFunc_MakeVector_ReturnValue) == 0x000020, "Member 'PalBossBattleSequence_Opening_C_GetLevelSpawnPos::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_GetLevelSpawnPos, CallFunc_GetBossType_ReturnValue) == 0x000038, "Member 'PalBossBattleSequence_Opening_C_GetLevelSpawnPos::CallFunc_GetBossType_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_GetLevelSpawnPos, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00003C, "Member 'PalBossBattleSequence_Opening_C_GetLevelSpawnPos::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_GetLevelSpawnPos, CallFunc_Multiply_IntInt_ReturnValue) == 0x000040, "Member 'PalBossBattleSequence_Opening_C_GetLevelSpawnPos::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_GetLevelSpawnPos, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000048, "Member 'PalBossBattleSequence_Opening_C_GetLevelSpawnPos::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_GetLevelSpawnPos, CallFunc_MakeVector_ReturnValue_1) == 0x000050, "Member 'PalBossBattleSequence_Opening_C_GetLevelSpawnPos::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_GetLevelSpawnPos, CallFunc_Add_VectorVector_ReturnValue) == 0x000068, "Member 'PalBossBattleSequence_Opening_C_GetLevelSpawnPos::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");

// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.InitPlayerCameraRotation
// 0x00D0 (0x00D0 - 0x0000)
struct PalBossBattleSequence_Opening_C_InitPlayerCameraRotation final
{
public:
	class APalPlayerCharacter*                    CallFunc_GetJoinedLocalControlPlayer_ReturnValue;  // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetPlayerStartTransform_ReturnValue;      // 0x0010(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetJoinedLocalControlPlayer_ReturnValue_1; // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PalBossBattleSequence_Opening_C_InitPlayerCameraRotation) == 0x000010, "Wrong alignment on PalBossBattleSequence_Opening_C_InitPlayerCameraRotation");
static_assert(sizeof(PalBossBattleSequence_Opening_C_InitPlayerCameraRotation) == 0x0000D0, "Wrong size on PalBossBattleSequence_Opening_C_InitPlayerCameraRotation");
static_assert(offsetof(PalBossBattleSequence_Opening_C_InitPlayerCameraRotation, CallFunc_GetJoinedLocalControlPlayer_ReturnValue) == 0x000000, "Member 'PalBossBattleSequence_Opening_C_InitPlayerCameraRotation::CallFunc_GetJoinedLocalControlPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_InitPlayerCameraRotation, CallFunc_GetPlayerStartTransform_ReturnValue) == 0x000010, "Member 'PalBossBattleSequence_Opening_C_InitPlayerCameraRotation::CallFunc_GetPlayerStartTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_InitPlayerCameraRotation, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'PalBossBattleSequence_Opening_C_InitPlayerCameraRotation::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_InitPlayerCameraRotation, CallFunc_BreakTransform_Location) == 0x000078, "Member 'PalBossBattleSequence_Opening_C_InitPlayerCameraRotation::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_InitPlayerCameraRotation, CallFunc_BreakTransform_Rotation) == 0x000090, "Member 'PalBossBattleSequence_Opening_C_InitPlayerCameraRotation::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_InitPlayerCameraRotation, CallFunc_BreakTransform_Scale) == 0x0000A8, "Member 'PalBossBattleSequence_Opening_C_InitPlayerCameraRotation::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_InitPlayerCameraRotation, CallFunc_GetJoinedLocalControlPlayer_ReturnValue_1) == 0x0000C0, "Member 'PalBossBattleSequence_Opening_C_InitPlayerCameraRotation::CallFunc_GetJoinedLocalControlPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_InitPlayerCameraRotation, CallFunc_GetController_ReturnValue) == 0x0000C8, "Member 'PalBossBattleSequence_Opening_C_InitPlayerCameraRotation::CallFunc_GetController_ReturnValue' has a wrong offset!");

// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.IsAssetLoadingCompleted
// 0x0002 (0x0002 - 0x0000)
struct PalBossBattleSequence_Opening_C_IsAssetLoadingCompleted final
{
public:
	bool                                          NewParam;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PalBossBattleSequence_Opening_C_IsAssetLoadingCompleted) == 0x000001, "Wrong alignment on PalBossBattleSequence_Opening_C_IsAssetLoadingCompleted");
static_assert(sizeof(PalBossBattleSequence_Opening_C_IsAssetLoadingCompleted) == 0x000002, "Wrong size on PalBossBattleSequence_Opening_C_IsAssetLoadingCompleted");
static_assert(offsetof(PalBossBattleSequence_Opening_C_IsAssetLoadingCompleted, NewParam) == 0x000000, "Member 'PalBossBattleSequence_Opening_C_IsAssetLoadingCompleted::NewParam' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_IsAssetLoadingCompleted, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000001, "Member 'PalBossBattleSequence_Opening_C_IsAssetLoadingCompleted::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.IsLoadingAction
// 0x0018 (0x0018 - 0x0000)
struct PalBossBattleSequence_Opening_C_IsLoadingAction final
{
public:
	bool                                          IsLoadingAction_0;                                 // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetJoinedLocalControlPlayer_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalActionType                                CallFunc_GetCurrentActionType_ReturnValue;         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PalBossBattleSequence_Opening_C_IsLoadingAction) == 0x000008, "Wrong alignment on PalBossBattleSequence_Opening_C_IsLoadingAction");
static_assert(sizeof(PalBossBattleSequence_Opening_C_IsLoadingAction) == 0x000018, "Wrong size on PalBossBattleSequence_Opening_C_IsLoadingAction");
static_assert(offsetof(PalBossBattleSequence_Opening_C_IsLoadingAction, IsLoadingAction_0) == 0x000000, "Member 'PalBossBattleSequence_Opening_C_IsLoadingAction::IsLoadingAction_0' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_IsLoadingAction, CallFunc_GetJoinedLocalControlPlayer_ReturnValue) == 0x000008, "Member 'PalBossBattleSequence_Opening_C_IsLoadingAction::CallFunc_GetJoinedLocalControlPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_IsLoadingAction, CallFunc_GetCurrentActionType_ReturnValue) == 0x000010, "Member 'PalBossBattleSequence_Opening_C_IsLoadingAction::CallFunc_GetCurrentActionType_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_IsLoadingAction, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'PalBossBattleSequence_Opening_C_IsLoadingAction::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.IsSkipCutscene
// 0x0028 (0x0028 - 0x0000)
struct PalBossBattleSequence_Opening_C_IsSkipCutscene final
{
public:
	bool                                          Skip;                                              // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetJoinedLocalControlPlayer_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PalBossBattleSequence_Opening_C_IsSkipCutscene) == 0x000008, "Wrong alignment on PalBossBattleSequence_Opening_C_IsSkipCutscene");
static_assert(sizeof(PalBossBattleSequence_Opening_C_IsSkipCutscene) == 0x000028, "Wrong size on PalBossBattleSequence_Opening_C_IsSkipCutscene");
static_assert(offsetof(PalBossBattleSequence_Opening_C_IsSkipCutscene, Skip) == 0x000000, "Member 'PalBossBattleSequence_Opening_C_IsSkipCutscene::Skip' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_IsSkipCutscene, CallFunc_IsValidClass_ReturnValue) == 0x000001, "Member 'PalBossBattleSequence_Opening_C_IsSkipCutscene::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_IsSkipCutscene, CallFunc_GetJoinedLocalControlPlayer_ReturnValue) == 0x000008, "Member 'PalBossBattleSequence_Opening_C_IsSkipCutscene::CallFunc_GetJoinedLocalControlPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_IsSkipCutscene, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'PalBossBattleSequence_Opening_C_IsSkipCutscene::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_IsSkipCutscene, CallFunc_GetPalDebugSetting_ReturnValue) == 0x000018, "Member 'PalBossBattleSequence_Opening_C_IsSkipCutscene::CallFunc_GetPalDebugSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_IsSkipCutscene, CallFunc_IsValid_ReturnValue_1) == 0x000020, "Member 'PalBossBattleSequence_Opening_C_IsSkipCutscene::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.LogShow
// 0x0010 (0x0010 - 0x0000)
struct PalBossBattleSequence_Opening_C_LogShow final
{
public:
	class FString                                 String;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PalBossBattleSequence_Opening_C_LogShow) == 0x000008, "Wrong alignment on PalBossBattleSequence_Opening_C_LogShow");
static_assert(sizeof(PalBossBattleSequence_Opening_C_LogShow) == 0x000010, "Wrong size on PalBossBattleSequence_Opening_C_LogShow");
static_assert(offsetof(PalBossBattleSequence_Opening_C_LogShow, String) == 0x000000, "Member 'PalBossBattleSequence_Opening_C_LogShow::String' has a wrong offset!");

// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.OnActionBegin
// 0x0008 (0x0008 - 0x0000)
struct PalBossBattleSequence_Opening_C_OnActionBegin final
{
public:
	const class UPalActionBase*                   Action;                                            // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PalBossBattleSequence_Opening_C_OnActionBegin) == 0x000008, "Wrong alignment on PalBossBattleSequence_Opening_C_OnActionBegin");
static_assert(sizeof(PalBossBattleSequence_Opening_C_OnActionBegin) == 0x000008, "Wrong size on PalBossBattleSequence_Opening_C_OnActionBegin");
static_assert(offsetof(PalBossBattleSequence_Opening_C_OnActionBegin, Action) == 0x000000, "Member 'PalBossBattleSequence_Opening_C_OnActionBegin::Action' has a wrong offset!");

// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.OnEventCreated
// 0x0008 (0x0008 - 0x0000)
struct PalBossBattleSequence_Opening_C_OnEventCreated final
{
public:
	class UPalBossBattleEventBase*                BossBattleEvent;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PalBossBattleSequence_Opening_C_OnEventCreated) == 0x000008, "Wrong alignment on PalBossBattleSequence_Opening_C_OnEventCreated");
static_assert(sizeof(PalBossBattleSequence_Opening_C_OnEventCreated) == 0x000008, "Wrong size on PalBossBattleSequence_Opening_C_OnEventCreated");
static_assert(offsetof(PalBossBattleSequence_Opening_C_OnEventCreated, BossBattleEvent) == 0x000000, "Member 'PalBossBattleSequence_Opening_C_OnEventCreated::BossBattleEvent' has a wrong offset!");

// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.OnFinishCutscene
// 0x0038 (0x0038 - 0x0000)
struct PalBossBattleSequence_Opening_C_OnFinishCutscene final
{
public:
	bool                                          IsSkipped;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBossBattleSequencer*                CallFunc_GetOuterSequencer_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bIsSkipped)>              K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerController*                   K2Node_DynamicCast_AsPal_Player_Controller;        // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PalBossBattleSequence_Opening_C_OnFinishCutscene) == 0x000008, "Wrong alignment on PalBossBattleSequence_Opening_C_OnFinishCutscene");
static_assert(sizeof(PalBossBattleSequence_Opening_C_OnFinishCutscene) == 0x000038, "Wrong size on PalBossBattleSequence_Opening_C_OnFinishCutscene");
static_assert(offsetof(PalBossBattleSequence_Opening_C_OnFinishCutscene, IsSkipped) == 0x000000, "Member 'PalBossBattleSequence_Opening_C_OnFinishCutscene::IsSkipped' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_OnFinishCutscene, CallFunc_GetOuterSequencer_ReturnValue) == 0x000008, "Member 'PalBossBattleSequence_Opening_C_OnFinishCutscene::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_OnFinishCutscene, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'PalBossBattleSequence_Opening_C_OnFinishCutscene::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_OnFinishCutscene, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000020, "Member 'PalBossBattleSequence_Opening_C_OnFinishCutscene::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_OnFinishCutscene, K2Node_DynamicCast_AsPal_Player_Controller) == 0x000028, "Member 'PalBossBattleSequence_Opening_C_OnFinishCutscene::K2Node_DynamicCast_AsPal_Player_Controller' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_OnFinishCutscene, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'PalBossBattleSequence_Opening_C_OnFinishCutscene::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_OnFinishCutscene, CallFunc_IsServer_ReturnValue) == 0x000031, "Member 'PalBossBattleSequence_Opening_C_OnFinishCutscene::CallFunc_IsServer_ReturnValue' has a wrong offset!");

// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.OnLoaded_7D1701CA4A594EE0B85451B16F0DD9FB
// 0x0008 (0x0008 - 0x0000)
struct PalBossBattleSequence_Opening_C_OnLoaded_7D1701CA4A594EE0B85451B16F0DD9FB final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PalBossBattleSequence_Opening_C_OnLoaded_7D1701CA4A594EE0B85451B16F0DD9FB) == 0x000008, "Wrong alignment on PalBossBattleSequence_Opening_C_OnLoaded_7D1701CA4A594EE0B85451B16F0DD9FB");
static_assert(sizeof(PalBossBattleSequence_Opening_C_OnLoaded_7D1701CA4A594EE0B85451B16F0DD9FB) == 0x000008, "Wrong size on PalBossBattleSequence_Opening_C_OnLoaded_7D1701CA4A594EE0B85451B16F0DD9FB");
static_assert(offsetof(PalBossBattleSequence_Opening_C_OnLoaded_7D1701CA4A594EE0B85451B16F0DD9FB, Loaded) == 0x000000, "Member 'PalBossBattleSequence_Opening_C_OnLoaded_7D1701CA4A594EE0B85451B16F0DD9FB::Loaded' has a wrong offset!");

// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.OnLoaded_87511D084D17A2720B719F91D617DC72
// 0x0008 (0x0008 - 0x0000)
struct PalBossBattleSequence_Opening_C_OnLoaded_87511D084D17A2720B719F91D617DC72 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(PalBossBattleSequence_Opening_C_OnLoaded_87511D084D17A2720B719F91D617DC72) == 0x000008, "Wrong alignment on PalBossBattleSequence_Opening_C_OnLoaded_87511D084D17A2720B719F91D617DC72");
static_assert(sizeof(PalBossBattleSequence_Opening_C_OnLoaded_87511D084D17A2720B719F91D617DC72) == 0x000008, "Wrong size on PalBossBattleSequence_Opening_C_OnLoaded_87511D084D17A2720B719F91D617DC72");
static_assert(offsetof(PalBossBattleSequence_Opening_C_OnLoaded_87511D084D17A2720B719F91D617DC72, Loaded) == 0x000000, "Member 'PalBossBattleSequence_Opening_C_OnLoaded_87511D084D17A2720B719F91D617DC72::Loaded' has a wrong offset!");

// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.OnLoaded_95B43418450294BEE8289E863350333C
// 0x0008 (0x0008 - 0x0000)
struct PalBossBattleSequence_Opening_C_OnLoaded_95B43418450294BEE8289E863350333C final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PalBossBattleSequence_Opening_C_OnLoaded_95B43418450294BEE8289E863350333C) == 0x000008, "Wrong alignment on PalBossBattleSequence_Opening_C_OnLoaded_95B43418450294BEE8289E863350333C");
static_assert(sizeof(PalBossBattleSequence_Opening_C_OnLoaded_95B43418450294BEE8289E863350333C) == 0x000008, "Wrong size on PalBossBattleSequence_Opening_C_OnLoaded_95B43418450294BEE8289E863350333C");
static_assert(offsetof(PalBossBattleSequence_Opening_C_OnLoaded_95B43418450294BEE8289E863350333C, Loaded) == 0x000000, "Member 'PalBossBattleSequence_Opening_C_OnLoaded_95B43418450294BEE8289E863350333C::Loaded' has a wrong offset!");

// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.PlayIntroMovie
// 0x00D0 (0x00D0 - 0x0000)
struct PalBossBattleSequence_Opening_C_PlayIntroMovie final
{
public:
	class UClass*                                 StartCutscene;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                    LSActor;                                           // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bIsSkipped)>              K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetBossRoomSequenceRootActor_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBossBattleSequencer*                CallFunc_GetOuterSequencer_ReturnValue;            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetSequencerTransform_ReturnValue;        // 0x0030(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerController*                   K2Node_DynamicCast_AsPal_Player_Controller;        // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetJoinedLocalControlPlayer_ReturnValue;  // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCutsceneActor*                      CallFunc_SpawnCutsceneActor_ReturnValue;           // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UDefaultLevelSequenceInstanceData*      K2Node_DynamicCast_AsDefault_Level_Sequence_Instance_Data; // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PalBossBattleSequence_Opening_C_PlayIntroMovie) == 0x000010, "Wrong alignment on PalBossBattleSequence_Opening_C_PlayIntroMovie");
static_assert(sizeof(PalBossBattleSequence_Opening_C_PlayIntroMovie) == 0x0000D0, "Wrong size on PalBossBattleSequence_Opening_C_PlayIntroMovie");
static_assert(offsetof(PalBossBattleSequence_Opening_C_PlayIntroMovie, StartCutscene) == 0x000000, "Member 'PalBossBattleSequence_Opening_C_PlayIntroMovie::StartCutscene' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_PlayIntroMovie, LSActor) == 0x000008, "Member 'PalBossBattleSequence_Opening_C_PlayIntroMovie::LSActor' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_PlayIntroMovie, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'PalBossBattleSequence_Opening_C_PlayIntroMovie::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_PlayIntroMovie, CallFunc_GetBossRoomSequenceRootActor_ReturnValue) == 0x000020, "Member 'PalBossBattleSequence_Opening_C_PlayIntroMovie::CallFunc_GetBossRoomSequenceRootActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_PlayIntroMovie, CallFunc_GetOuterSequencer_ReturnValue) == 0x000028, "Member 'PalBossBattleSequence_Opening_C_PlayIntroMovie::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_PlayIntroMovie, CallFunc_GetSequencerTransform_ReturnValue) == 0x000030, "Member 'PalBossBattleSequence_Opening_C_PlayIntroMovie::CallFunc_GetSequencerTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_PlayIntroMovie, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000090, "Member 'PalBossBattleSequence_Opening_C_PlayIntroMovie::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_PlayIntroMovie, K2Node_DynamicCast_AsPal_Player_Controller) == 0x000098, "Member 'PalBossBattleSequence_Opening_C_PlayIntroMovie::K2Node_DynamicCast_AsPal_Player_Controller' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_PlayIntroMovie, K2Node_DynamicCast_bSuccess) == 0x0000A0, "Member 'PalBossBattleSequence_Opening_C_PlayIntroMovie::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_PlayIntroMovie, CallFunc_GetJoinedLocalControlPlayer_ReturnValue) == 0x0000A8, "Member 'PalBossBattleSequence_Opening_C_PlayIntroMovie::CallFunc_GetJoinedLocalControlPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_PlayIntroMovie, CallFunc_IsValid_ReturnValue) == 0x0000B0, "Member 'PalBossBattleSequence_Opening_C_PlayIntroMovie::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_PlayIntroMovie, CallFunc_SpawnCutsceneActor_ReturnValue) == 0x0000B8, "Member 'PalBossBattleSequence_Opening_C_PlayIntroMovie::CallFunc_SpawnCutsceneActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_PlayIntroMovie, K2Node_DynamicCast_AsDefault_Level_Sequence_Instance_Data) == 0x0000C0, "Member 'PalBossBattleSequence_Opening_C_PlayIntroMovie::K2Node_DynamicCast_AsDefault_Level_Sequence_Instance_Data' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_PlayIntroMovie, K2Node_DynamicCast_bSuccess_1) == 0x0000C8, "Member 'PalBossBattleSequence_Opening_C_PlayIntroMovie::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.SetPlayerLocation_StartPoint
// 0x01F0 (0x01F0 - 0x0000)
struct PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint final
{
public:
	class UPalBossBattleManager*                  CallFunc_GetBossBattleManager_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBossBattleSequencer*                CallFunc_GetOuterSequencer_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APalPlayerCharacter*>            CallFunc_GetInRoomPlayers_ReturnValue;             // 0x0020(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36[0x2];                                       // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48[0x8];                                       // 0x0048(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0050(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetPlayerSpawnTransformForMultiPlayer_ReturnValue; // 0x0110(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_174[0x4];                                      // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location_1;                // 0x0178(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;                // 0x0190(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_1;                   // 0x01A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                  CallFunc_Conv_RotatorToQuaternion_ReturnValue;     // 0x01C0(0x0020)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Teleport_ReturnValue;                     // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint) == 0x000010, "Wrong alignment on PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint");
static_assert(sizeof(PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint) == 0x0001F0, "Wrong size on PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint");
static_assert(offsetof(PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint, CallFunc_GetBossBattleManager_ReturnValue) == 0x000000, "Member 'PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint::CallFunc_GetBossBattleManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint, CallFunc_GetOuterSequencer_ReturnValue) == 0x000010, "Member 'PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint, CallFunc_GetInRoomPlayers_ReturnValue) == 0x000020, "Member 'PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint::CallFunc_GetInRoomPlayers_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint, CallFunc_IsServer_ReturnValue) == 0x000035, "Member 'PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint, Temp_int_Array_Index_Variable) == 0x000038, "Member 'PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint, CallFunc_Array_Get_Item) == 0x000040, "Member 'PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint, CallFunc_GetTransform_ReturnValue) == 0x000050, "Member 'PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint, CallFunc_BreakTransform_Location) == 0x0000B0, "Member 'PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint, CallFunc_BreakTransform_Rotation) == 0x0000C8, "Member 'PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint, CallFunc_BreakTransform_Scale) == 0x0000E0, "Member 'PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint, CallFunc_Add_VectorVector_ReturnValue) == 0x0000F8, "Member 'PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint, CallFunc_GetPlayerSpawnTransformForMultiPlayer_ReturnValue) == 0x000110, "Member 'PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint::CallFunc_GetPlayerSpawnTransformForMultiPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint, CallFunc_Array_Add_ReturnValue) == 0x000170, "Member 'PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint, CallFunc_BreakTransform_Location_1) == 0x000178, "Member 'PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint, CallFunc_BreakTransform_Rotation_1) == 0x000190, "Member 'PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint, CallFunc_BreakTransform_Scale_1) == 0x0001A8, "Member 'PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint::CallFunc_BreakTransform_Scale_1' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint, CallFunc_Conv_RotatorToQuaternion_ReturnValue) == 0x0001C0, "Member 'PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint::CallFunc_Conv_RotatorToQuaternion_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint, CallFunc_Teleport_ReturnValue) == 0x0001E0, "Member 'PalBossBattleSequence_Opening_C_SetPlayerLocation_StartPoint::CallFunc_Teleport_ReturnValue' has a wrong offset!");

// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.StartUIFadeIn
// 0x0028 (0x0028 - 0x0000)
struct PalBossBattleSequence_Opening_C_StartUIFadeIn final
{
public:
	bool                                          CallFunc_IsSkipCutscene_Skip;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetJoinedLocalControlPlayer_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDDispatchParameter_FadeWidget*    CallFunc_SpawnObject_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PalBossBattleSequence_Opening_C_StartUIFadeIn) == 0x000008, "Wrong alignment on PalBossBattleSequence_Opening_C_StartUIFadeIn");
static_assert(sizeof(PalBossBattleSequence_Opening_C_StartUIFadeIn) == 0x000028, "Wrong size on PalBossBattleSequence_Opening_C_StartUIFadeIn");
static_assert(offsetof(PalBossBattleSequence_Opening_C_StartUIFadeIn, CallFunc_IsSkipCutscene_Skip) == 0x000000, "Member 'PalBossBattleSequence_Opening_C_StartUIFadeIn::CallFunc_IsSkipCutscene_Skip' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_StartUIFadeIn, CallFunc_GetJoinedLocalControlPlayer_ReturnValue) == 0x000008, "Member 'PalBossBattleSequence_Opening_C_StartUIFadeIn::CallFunc_GetJoinedLocalControlPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_StartUIFadeIn, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'PalBossBattleSequence_Opening_C_StartUIFadeIn::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_StartUIFadeIn, CallFunc_SpawnObject_ReturnValue) == 0x000018, "Member 'PalBossBattleSequence_Opening_C_StartUIFadeIn::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_StartUIFadeIn, CallFunc_GetHUDService_ReturnValue) == 0x000020, "Member 'PalBossBattleSequence_Opening_C_StartUIFadeIn::CallFunc_GetHUDService_ReturnValue' has a wrong offset!");

// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.StartUIFadeOut
// 0x0018 (0x0018 - 0x0000)
struct PalBossBattleSequence_Opening_C_StartUIFadeOut final
{
public:
	class APalPlayerCharacter*                    CallFunc_GetJoinedLocalControlPlayer_ReturnValue;  // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PalBossBattleSequence_Opening_C_StartUIFadeOut) == 0x000008, "Wrong alignment on PalBossBattleSequence_Opening_C_StartUIFadeOut");
static_assert(sizeof(PalBossBattleSequence_Opening_C_StartUIFadeOut) == 0x000018, "Wrong size on PalBossBattleSequence_Opening_C_StartUIFadeOut");
static_assert(offsetof(PalBossBattleSequence_Opening_C_StartUIFadeOut, CallFunc_GetJoinedLocalControlPlayer_ReturnValue) == 0x000000, "Member 'PalBossBattleSequence_Opening_C_StartUIFadeOut::CallFunc_GetJoinedLocalControlPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_StartUIFadeOut, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'PalBossBattleSequence_Opening_C_StartUIFadeOut::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Opening_C_StartUIFadeOut, CallFunc_GetHUDService_ReturnValue) == 0x000010, "Member 'PalBossBattleSequence_Opening_C_StartUIFadeOut::CallFunc_GetHUDService_ReturnValue' has a wrong offset!");

// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.TickSequence
// 0x0004 (0x0004 - 0x0000)
struct PalBossBattleSequence_Opening_C_TickSequence final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PalBossBattleSequence_Opening_C_TickSequence) == 0x000004, "Wrong alignment on PalBossBattleSequence_Opening_C_TickSequence");
static_assert(sizeof(PalBossBattleSequence_Opening_C_TickSequence) == 0x000004, "Wrong size on PalBossBattleSequence_Opening_C_TickSequence");
static_assert(offsetof(PalBossBattleSequence_Opening_C_TickSequence, DeltaTime) == 0x000000, "Member 'PalBossBattleSequence_Opening_C_TickSequence::DeltaTime' has a wrong offset!");

// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.TryEventInitialize
// 0x0001 (0x0001 - 0x0000)
struct PalBossBattleSequence_Opening_C_TryEventInitialize final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PalBossBattleSequence_Opening_C_TryEventInitialize) == 0x000001, "Wrong alignment on PalBossBattleSequence_Opening_C_TryEventInitialize");
static_assert(sizeof(PalBossBattleSequence_Opening_C_TryEventInitialize) == 0x000001, "Wrong size on PalBossBattleSequence_Opening_C_TryEventInitialize");
static_assert(offsetof(PalBossBattleSequence_Opening_C_TryEventInitialize, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'PalBossBattleSequence_Opening_C_TryEventInitialize::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C.カスタムイベント_0
// 0x0008 (0x0008 - 0x0000)
struct PalBossBattleSequence_Opening_C__________________________0 final
{
public:
	class APalCharacter*                          SpawnedCharacter;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PalBossBattleSequence_Opening_C__________________________0) == 0x000008, "Wrong alignment on PalBossBattleSequence_Opening_C__________________________0");
static_assert(sizeof(PalBossBattleSequence_Opening_C__________________________0) == 0x000008, "Wrong size on PalBossBattleSequence_Opening_C__________________________0");
static_assert(offsetof(PalBossBattleSequence_Opening_C__________________________0, SpawnedCharacter) == 0x000000, "Member 'PalBossBattleSequence_Opening_C__________________________0::SpawnedCharacter' has a wrong offset!");

}

