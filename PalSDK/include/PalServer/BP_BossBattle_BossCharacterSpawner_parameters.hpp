#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function BP_BossBattle_BossCharacterSpawner.BP_BossBattle_BossCharacterSpawner_C.GetDebugNo
// 0x0020 (0x0020 - 0x0000)
struct BP_BossBattle_BossCharacterSpawner_C_GetDebugNo final
{
public:
	int32                                         BitFlag;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_And_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BossBattle_BossCharacterSpawner_C_GetDebugNo) == 0x000008, "Wrong alignment on BP_BossBattle_BossCharacterSpawner_C_GetDebugNo");
static_assert(sizeof(BP_BossBattle_BossCharacterSpawner_C_GetDebugNo) == 0x000020, "Wrong size on BP_BossBattle_BossCharacterSpawner_C_GetDebugNo");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_GetDebugNo, BitFlag) == 0x000000, "Member 'BP_BossBattle_BossCharacterSpawner_C_GetDebugNo::BitFlag' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_GetDebugNo, Result) == 0x000004, "Member 'BP_BossBattle_BossCharacterSpawner_C_GetDebugNo::Result' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_GetDebugNo, CallFunc_GetPalDebugSetting_ReturnValue) == 0x000008, "Member 'BP_BossBattle_BossCharacterSpawner_C_GetDebugNo::CallFunc_GetPalDebugSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_GetDebugNo, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_BossBattle_BossCharacterSpawner_C_GetDebugNo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_GetDebugNo, CallFunc_And_IntInt_ReturnValue) == 0x000014, "Member 'BP_BossBattle_BossCharacterSpawner_C_GetDebugNo::CallFunc_And_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_GetDebugNo, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000018, "Member 'BP_BossBattle_BossCharacterSpawner_C_GetDebugNo::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_BossBattle_BossCharacterSpawner.BP_BossBattle_BossCharacterSpawner_C.IsSkipCutscene
// 0x0018 (0x0018 - 0x0000)
struct BP_BossBattle_BossCharacterSpawner_C_IsSkipCutscene final
{
public:
	bool                                          Skip;                                              // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BossBattle_BossCharacterSpawner_C_IsSkipCutscene) == 0x000008, "Wrong alignment on BP_BossBattle_BossCharacterSpawner_C_IsSkipCutscene");
static_assert(sizeof(BP_BossBattle_BossCharacterSpawner_C_IsSkipCutscene) == 0x000018, "Wrong size on BP_BossBattle_BossCharacterSpawner_C_IsSkipCutscene");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_IsSkipCutscene, Skip) == 0x000000, "Member 'BP_BossBattle_BossCharacterSpawner_C_IsSkipCutscene::Skip' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_IsSkipCutscene, CallFunc_GetPalDebugSetting_ReturnValue) == 0x000008, "Member 'BP_BossBattle_BossCharacterSpawner_C_IsSkipCutscene::CallFunc_GetPalDebugSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_IsSkipCutscene, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_BossBattle_BossCharacterSpawner_C_IsSkipCutscene::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_BossBattle_BossCharacterSpawner.BP_BossBattle_BossCharacterSpawner_C.OnOtherSpawned__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_BossBattle_BossCharacterSpawner_C_OnOtherSpawned__DelegateSignature final
{
public:
	class UPalIndividualCharacterHandle*          SpawnCharacterHandle;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BossBattle_BossCharacterSpawner_C_OnOtherSpawned__DelegateSignature) == 0x000008, "Wrong alignment on BP_BossBattle_BossCharacterSpawner_C_OnOtherSpawned__DelegateSignature");
static_assert(sizeof(BP_BossBattle_BossCharacterSpawner_C_OnOtherSpawned__DelegateSignature) == 0x000008, "Wrong size on BP_BossBattle_BossCharacterSpawner_C_OnOtherSpawned__DelegateSignature");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_OnOtherSpawned__DelegateSignature, SpawnCharacterHandle) == 0x000000, "Member 'BP_BossBattle_BossCharacterSpawner_C_OnOtherSpawned__DelegateSignature::SpawnCharacterHandle' has a wrong offset!");

// Function BP_BossBattle_BossCharacterSpawner.BP_BossBattle_BossCharacterSpawner_C.RequestBossSpawn
// 0x03C0 (0x03C0 - 0x0000)
struct BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn final
{
public:
	class FName                                   CharacterID;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Level;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBossBattleManager*                  CallFunc_GetBossBattleManager_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPalInstanceID& ID)> K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsServer_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterManager*                   CallFunc_GetCharacterManager_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  K2Node_MakeStruct_Guid;                            // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalIndividualCharacterSaveParameter   CallFunc_GetInitializedCharacterSaveParemter_outParameter; // 0x0060(0x02A8)()
	bool                                          CallFunc_GetInitializedCharacterSaveParemter_ReturnValue; // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_309[0x7];                                      // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0310(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0328(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0340(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FNetworkActorSpawnParameters           K2Node_MakeStruct_NetworkActorSpawnParameters;     // 0x0348(0x0070)(NoDestructor)
	class UPalIndividualCharacterHandle*          CallFunc_SpawnNewCharacter_ReturnValue;            // 0x03B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn) == 0x000008, "Wrong alignment on BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn");
static_assert(sizeof(BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn) == 0x0003C0, "Wrong size on BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn, CharacterID) == 0x000000, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn::CharacterID' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn, Level) == 0x000008, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn::Level' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn, CallFunc_GetBossBattleManager_ReturnValue) == 0x000010, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn::CallFunc_GetBossBattleManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn, CallFunc_GetIsServer_ReturnValue) == 0x000028, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn::CallFunc_GetIsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn, CallFunc_GetCharacterManager_ReturnValue) == 0x000030, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn::CallFunc_GetCharacterManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn, K2Node_MakeStruct_Guid) == 0x000038, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn::K2Node_MakeStruct_Guid' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000048, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn, CallFunc_GetInitializedCharacterSaveParemter_outParameter) == 0x000060, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn::CallFunc_GetInitializedCharacterSaveParemter_outParameter' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn, CallFunc_GetInitializedCharacterSaveParemter_ReturnValue) == 0x000308, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn::CallFunc_GetInitializedCharacterSaveParemter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn, CallFunc_Add_VectorVector_ReturnValue) == 0x000310, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000328, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000340, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn, K2Node_MakeStruct_NetworkActorSpawnParameters) == 0x000348, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn::K2Node_MakeStruct_NetworkActorSpawnParameters' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn, CallFunc_SpawnNewCharacter_ReturnValue) == 0x0003B8, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestBossSpawn::CallFunc_SpawnNewCharacter_ReturnValue' has a wrong offset!");

// Function BP_BossBattle_BossCharacterSpawner.BP_BossBattle_BossCharacterSpawner_C.RequestOtherSpawn
// 0x0408 (0x0408 - 0x0000)
struct BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn final
{
public:
	class FName                                   CharacterID;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Level;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 AIController;                                      // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOutAreaSpawn;                                    // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DebugNo;                                           // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalBossBattleManager*                  CallFunc_GetBossBattleManager_ReturnValue;         // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPalInstanceID& ID)> K2Node_CreateDelegate_OutputDelegate;              // 0x0058(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsServer_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterManager*                   CallFunc_GetCharacterManager_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  K2Node_MakeStruct_Guid;                            // 0x0078(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalIndividualCharacterSaveParameter   CallFunc_GetInitializedCharacterSaveParemter_outParameter; // 0x00A0(0x02A8)()
	bool                                          CallFunc_GetInitializedCharacterSaveParemter_ReturnValue; // 0x0348(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_349[0x7];                                      // 0x0349(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_SelectVector_ReturnValue;                 // 0x0350(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0368(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0380(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FNetworkActorSpawnParameters           K2Node_MakeStruct_NetworkActorSpawnParameters;     // 0x0388(0x0070)(NoDestructor)
	class UPalIndividualCharacterHandle*          CallFunc_SpawnNewCharacter_ReturnValue;            // 0x03F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0400(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn) == 0x000008, "Wrong alignment on BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn");
static_assert(sizeof(BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn) == 0x000408, "Wrong size on BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn, CharacterID) == 0x000000, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn::CharacterID' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn, Level) == 0x000008, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn::Level' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn, AIController) == 0x000010, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn::AIController' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn, IsOutAreaSpawn) == 0x000018, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn::IsOutAreaSpawn' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn, DebugNo) == 0x00001C, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn::DebugNo' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000020, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn, CallFunc_Add_VectorVector_ReturnValue) == 0x000038, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn, CallFunc_GetBossBattleManager_ReturnValue) == 0x000050, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn::CallFunc_GetBossBattleManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn, K2Node_CreateDelegate_OutputDelegate) == 0x000058, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn, CallFunc_GetIsServer_ReturnValue) == 0x000068, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn::CallFunc_GetIsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn, CallFunc_GetCharacterManager_ReturnValue) == 0x000070, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn::CallFunc_GetCharacterManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn, K2Node_MakeStruct_Guid) == 0x000078, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn::K2Node_MakeStruct_Guid' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000088, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn, CallFunc_GetInitializedCharacterSaveParemter_outParameter) == 0x0000A0, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn::CallFunc_GetInitializedCharacterSaveParemter_outParameter' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn, CallFunc_GetInitializedCharacterSaveParemter_ReturnValue) == 0x000348, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn::CallFunc_GetInitializedCharacterSaveParemter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn, CallFunc_SelectVector_ReturnValue) == 0x000350, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn::CallFunc_SelectVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000368, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000380, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn, K2Node_MakeStruct_NetworkActorSpawnParameters) == 0x000388, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn::K2Node_MakeStruct_NetworkActorSpawnParameters' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn, CallFunc_SpawnNewCharacter_ReturnValue) == 0x0003F8, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn::CallFunc_SpawnNewCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn, CallFunc_Array_Add_ReturnValue) == 0x000400, "Member 'BP_BossBattle_BossCharacterSpawner_C_RequestOtherSpawn::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function BP_BossBattle_BossCharacterSpawner.BP_BossBattle_BossCharacterSpawner_C.SetCharacterStartLocation
// 0x0190 (0x0190 - 0x0000)
struct BP_BossBattle_BossCharacterSpawner_C_SetCharacterStartLocation final
{
public:
	class UPalIndividualCharacterHandle*          TargetHandle;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Offset;                                            // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBossBattleManager*                  CallFunc_GetBossBattleManager_ReturnValue;         // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_AdjustActorToFloor_ReturnValue;           // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsServer_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A[0x6];                                       // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x00A0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BossBattle_BossCharacterSpawner_C_SetCharacterStartLocation) == 0x000008, "Wrong alignment on BP_BossBattle_BossCharacterSpawner_C_SetCharacterStartLocation");
static_assert(sizeof(BP_BossBattle_BossCharacterSpawner_C_SetCharacterStartLocation) == 0x000190, "Wrong size on BP_BossBattle_BossCharacterSpawner_C_SetCharacterStartLocation");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SetCharacterStartLocation, TargetHandle) == 0x000000, "Member 'BP_BossBattle_BossCharacterSpawner_C_SetCharacterStartLocation::TargetHandle' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SetCharacterStartLocation, Offset) == 0x000008, "Member 'BP_BossBattle_BossCharacterSpawner_C_SetCharacterStartLocation::Offset' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SetCharacterStartLocation, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000020, "Member 'BP_BossBattle_BossCharacterSpawner_C_SetCharacterStartLocation::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SetCharacterStartLocation, CallFunc_GreaterGreater_VectorRotator_ReturnValue) == 0x000038, "Member 'BP_BossBattle_BossCharacterSpawner_C_SetCharacterStartLocation::CallFunc_GreaterGreater_VectorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SetCharacterStartLocation, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000050, "Member 'BP_BossBattle_BossCharacterSpawner_C_SetCharacterStartLocation::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SetCharacterStartLocation, CallFunc_GetBossBattleManager_ReturnValue) == 0x000058, "Member 'BP_BossBattle_BossCharacterSpawner_C_SetCharacterStartLocation::CallFunc_GetBossBattleManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SetCharacterStartLocation, CallFunc_AdjustActorToFloor_ReturnValue) == 0x000060, "Member 'BP_BossBattle_BossCharacterSpawner_C_SetCharacterStartLocation::CallFunc_AdjustActorToFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SetCharacterStartLocation, CallFunc_GetIsServer_ReturnValue) == 0x000068, "Member 'BP_BossBattle_BossCharacterSpawner_C_SetCharacterStartLocation::CallFunc_GetIsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SetCharacterStartLocation, CallFunc_IsValid_ReturnValue) == 0x000069, "Member 'BP_BossBattle_BossCharacterSpawner_C_SetCharacterStartLocation::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SetCharacterStartLocation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000070, "Member 'BP_BossBattle_BossCharacterSpawner_C_SetCharacterStartLocation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SetCharacterStartLocation, CallFunc_Add_VectorVector_ReturnValue) == 0x000088, "Member 'BP_BossBattle_BossCharacterSpawner_C_SetCharacterStartLocation::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SetCharacterStartLocation, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x0000A0, "Member 'BP_BossBattle_BossCharacterSpawner_C_SetCharacterStartLocation::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SetCharacterStartLocation, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000188, "Member 'BP_BossBattle_BossCharacterSpawner_C_SetCharacterStartLocation::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");

// Function BP_BossBattle_BossCharacterSpawner.BP_BossBattle_BossCharacterSpawner_C.SetMultiPlayerHPRate
// 0x0070 (0x0070 - 0x0000)
struct BP_BossBattle_BossCharacterSpawner_C_SetMultiPlayerHPRate final
{
public:
	class APalCharacter*                          SpawnCharacter;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBossBattleManager*                  CallFunc_GetBossBattleManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetBossHPMultiPlayerRate_ReturnValue;     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBossBattleManager*                  CallFunc_GetBossBattleManager_ReturnValue_1;       // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_DoubleToString_ReturnValue;          // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_GetBossHPMultiPlayerRate_ReturnValue_1;   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APalPlayerCharacter*>            CallFunc_GetAllActorsOfClass_OutActors;            // 0x0038(0x0010)(ReferenceParm)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFixedPoint64                          CallFunc_GetMaxHP_ReturnValue;                     // 0x0058(0x0008)(NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_DoubleToString_InDouble_ImplicitCast; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BossBattle_BossCharacterSpawner_C_SetMultiPlayerHPRate) == 0x000008, "Wrong alignment on BP_BossBattle_BossCharacterSpawner_C_SetMultiPlayerHPRate");
static_assert(sizeof(BP_BossBattle_BossCharacterSpawner_C_SetMultiPlayerHPRate) == 0x000070, "Wrong size on BP_BossBattle_BossCharacterSpawner_C_SetMultiPlayerHPRate");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SetMultiPlayerHPRate, SpawnCharacter) == 0x000000, "Member 'BP_BossBattle_BossCharacterSpawner_C_SetMultiPlayerHPRate::SpawnCharacter' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SetMultiPlayerHPRate, CallFunc_GetBossBattleManager_ReturnValue) == 0x000008, "Member 'BP_BossBattle_BossCharacterSpawner_C_SetMultiPlayerHPRate::CallFunc_GetBossBattleManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SetMultiPlayerHPRate, CallFunc_GetBossHPMultiPlayerRate_ReturnValue) == 0x000010, "Member 'BP_BossBattle_BossCharacterSpawner_C_SetMultiPlayerHPRate::CallFunc_GetBossHPMultiPlayerRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SetMultiPlayerHPRate, CallFunc_GetBossBattleManager_ReturnValue_1) == 0x000018, "Member 'BP_BossBattle_BossCharacterSpawner_C_SetMultiPlayerHPRate::CallFunc_GetBossBattleManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SetMultiPlayerHPRate, CallFunc_Conv_DoubleToString_ReturnValue) == 0x000020, "Member 'BP_BossBattle_BossCharacterSpawner_C_SetMultiPlayerHPRate::CallFunc_Conv_DoubleToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SetMultiPlayerHPRate, CallFunc_GetBossHPMultiPlayerRate_ReturnValue_1) == 0x000030, "Member 'BP_BossBattle_BossCharacterSpawner_C_SetMultiPlayerHPRate::CallFunc_GetBossHPMultiPlayerRate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SetMultiPlayerHPRate, CallFunc_GetAllActorsOfClass_OutActors) == 0x000038, "Member 'BP_BossBattle_BossCharacterSpawner_C_SetMultiPlayerHPRate::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SetMultiPlayerHPRate, CallFunc_GetComponentByClass_ReturnValue) == 0x000048, "Member 'BP_BossBattle_BossCharacterSpawner_C_SetMultiPlayerHPRate::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SetMultiPlayerHPRate, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'BP_BossBattle_BossCharacterSpawner_C_SetMultiPlayerHPRate::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SetMultiPlayerHPRate, CallFunc_GetMaxHP_ReturnValue) == 0x000058, "Member 'BP_BossBattle_BossCharacterSpawner_C_SetMultiPlayerHPRate::CallFunc_GetMaxHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SetMultiPlayerHPRate, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000060, "Member 'BP_BossBattle_BossCharacterSpawner_C_SetMultiPlayerHPRate::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SetMultiPlayerHPRate, CallFunc_Conv_DoubleToString_InDouble_ImplicitCast) == 0x000068, "Member 'BP_BossBattle_BossCharacterSpawner_C_SetMultiPlayerHPRate::CallFunc_Conv_DoubleToString_InDouble_ImplicitCast' has a wrong offset!");

// Function BP_BossBattle_BossCharacterSpawner.BP_BossBattle_BossCharacterSpawner_C.SpawnBossDelegate
// 0x0070 (0x0070 - 0x0000)
struct BP_BossBattle_BossCharacterSpawner_C_SpawnBossDelegate final
{
public:
	struct FPalInstanceID                         ID;                                                // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class APalCharacter*                          SpawnCharacter;                                    // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSkipCutscene_Skip;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalBossBattleLevelInstance*            K2Node_DynamicCast_AsPal_Boss_Battle_Level_Instance; // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBossBattleManager*                  CallFunc_GetBossBattleManager_ReturnValue;         // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BossBattle_BossCharacterSpawner_C_SpawnBossDelegate) == 0x000008, "Wrong alignment on BP_BossBattle_BossCharacterSpawner_C_SpawnBossDelegate");
static_assert(sizeof(BP_BossBattle_BossCharacterSpawner_C_SpawnBossDelegate) == 0x000070, "Wrong size on BP_BossBattle_BossCharacterSpawner_C_SpawnBossDelegate");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SpawnBossDelegate, ID) == 0x000000, "Member 'BP_BossBattle_BossCharacterSpawner_C_SpawnBossDelegate::ID' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SpawnBossDelegate, SpawnCharacter) == 0x000030, "Member 'BP_BossBattle_BossCharacterSpawner_C_SpawnBossDelegate::SpawnCharacter' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SpawnBossDelegate, CallFunc_IsSkipCutscene_Skip) == 0x000038, "Member 'BP_BossBattle_BossCharacterSpawner_C_SpawnBossDelegate::CallFunc_IsSkipCutscene_Skip' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SpawnBossDelegate, CallFunc_GetOwner_ReturnValue) == 0x000040, "Member 'BP_BossBattle_BossCharacterSpawner_C_SpawnBossDelegate::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SpawnBossDelegate, K2Node_DynamicCast_AsPal_Boss_Battle_Level_Instance) == 0x000048, "Member 'BP_BossBattle_BossCharacterSpawner_C_SpawnBossDelegate::K2Node_DynamicCast_AsPal_Boss_Battle_Level_Instance' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SpawnBossDelegate, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'BP_BossBattle_BossCharacterSpawner_C_SpawnBossDelegate::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SpawnBossDelegate, CallFunc_GetBossBattleManager_ReturnValue) == 0x000058, "Member 'BP_BossBattle_BossCharacterSpawner_C_SpawnBossDelegate::CallFunc_GetBossBattleManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SpawnBossDelegate, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000060, "Member 'BP_BossBattle_BossCharacterSpawner_C_SpawnBossDelegate::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SpawnBossDelegate, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'BP_BossBattle_BossCharacterSpawner_C_SpawnBossDelegate::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_BossBattle_BossCharacterSpawner.BP_BossBattle_BossCharacterSpawner_C.SpawnOtherDelegate
// 0x00E0 (0x00E0 - 0x0000)
struct BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate final
{
public:
	struct FPalInstanceID                         ID;                                                // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          TargetHandle;                                      // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          SpawnCharacter;                                    // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MonsterBase_C*                      K2Node_DynamicCast_AsBP_Monster_Base;              // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_NPCAIController_C*                  K2Node_DynamicCast_AsBP_NPCAIController;           // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A[0x6];                                       // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A[0x6];                                       // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_Array_Get_Item;                           // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalInstanceID                         CallFunc_GetIndividualID_ReturnValue;              // 0x0090(0x0030)(HasGetValueTypeHash)
	class UPalBossBattleManager*                  CallFunc_GetBossBattleManager_ReturnValue;         // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue; // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x3];                                       // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x3];                                       // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate) == 0x000008, "Wrong alignment on BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate");
static_assert(sizeof(BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate) == 0x0000E0, "Wrong size on BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate, ID) == 0x000000, "Member 'BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate::ID' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate, TargetHandle) == 0x000030, "Member 'BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate::TargetHandle' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate, SpawnCharacter) == 0x000038, "Member 'BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate::SpawnCharacter' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate, Temp_int_Array_Index_Variable) == 0x000040, "Member 'BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate, K2Node_DynamicCast_AsBP_Monster_Base) == 0x000048, "Member 'BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate::K2Node_DynamicCast_AsBP_Monster_Base' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate, CallFunc_GetController_ReturnValue) == 0x000058, "Member 'BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate, K2Node_DynamicCast_AsBP_NPCAIController) == 0x000060, "Member 'BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate::K2Node_DynamicCast_AsBP_NPCAIController' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate, Temp_bool_True_if_break_was_hit_Variable) == 0x000069, "Member 'BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000070, "Member 'BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate, CallFunc_IsValid_ReturnValue) == 0x000078, "Member 'BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate, CallFunc_Not_PreBool_ReturnValue) == 0x000079, "Member 'BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate, CallFunc_Array_Get_Item) == 0x000080, "Member 'BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate, CallFunc_Array_Length_ReturnValue) == 0x000088, "Member 'BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate, CallFunc_GetIndividualID_ReturnValue) == 0x000090, "Member 'BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate::CallFunc_GetIndividualID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate, CallFunc_GetBossBattleManager_ReturnValue) == 0x0000C0, "Member 'BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate::CallFunc_GetBossBattleManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate, CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue) == 0x0000C8, "Member 'BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate::CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate, Temp_int_Loop_Counter_Variable) == 0x0000CC, "Member 'BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate, CallFunc_Less_IntInt_ReturnValue) == 0x0000D0, "Member 'BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate, CallFunc_Add_IntInt_ReturnValue) == 0x0000D4, "Member 'BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate, CallFunc_BooleanAND_ReturnValue) == 0x0000D8, "Member 'BP_BossBattle_BossCharacterSpawner_C_SpawnOtherDelegate::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

