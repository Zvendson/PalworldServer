#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function BP_LevelInstance_BossRoomBase.BP_LevelInstance_BossRoomBase_C.ExecuteUbergraph_BP_LevelInstance_BossRoomBase
// 0x0028 (0x0028 - 0x0000)
struct BP_LevelInstance_BossRoomBase_C_ExecuteUbergraph_BP_LevelInstance_BossRoomBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalBossType                                  K2Node_Event_BossType;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_JoinPlayerNum;                        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBossBattleManager*                  CallFunc_GetBossBattleManager_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsServer_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LevelInstance_BossRoomBase_C_ExecuteUbergraph_BP_LevelInstance_BossRoomBase) == 0x000008, "Wrong alignment on BP_LevelInstance_BossRoomBase_C_ExecuteUbergraph_BP_LevelInstance_BossRoomBase");
static_assert(sizeof(BP_LevelInstance_BossRoomBase_C_ExecuteUbergraph_BP_LevelInstance_BossRoomBase) == 0x000028, "Wrong size on BP_LevelInstance_BossRoomBase_C_ExecuteUbergraph_BP_LevelInstance_BossRoomBase");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_ExecuteUbergraph_BP_LevelInstance_BossRoomBase, EntryPoint) == 0x000000, "Member 'BP_LevelInstance_BossRoomBase_C_ExecuteUbergraph_BP_LevelInstance_BossRoomBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_ExecuteUbergraph_BP_LevelInstance_BossRoomBase, K2Node_Event_BossType) == 0x000004, "Member 'BP_LevelInstance_BossRoomBase_C_ExecuteUbergraph_BP_LevelInstance_BossRoomBase::K2Node_Event_BossType' has a wrong offset!");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_ExecuteUbergraph_BP_LevelInstance_BossRoomBase, K2Node_Event_JoinPlayerNum) == 0x000008, "Member 'BP_LevelInstance_BossRoomBase_C_ExecuteUbergraph_BP_LevelInstance_BossRoomBase::K2Node_Event_JoinPlayerNum' has a wrong offset!");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_ExecuteUbergraph_BP_LevelInstance_BossRoomBase, K2Node_Event_EndPlayReason) == 0x00000C, "Member 'BP_LevelInstance_BossRoomBase_C_ExecuteUbergraph_BP_LevelInstance_BossRoomBase::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_ExecuteUbergraph_BP_LevelInstance_BossRoomBase, K2Node_Event_DeltaSeconds) == 0x000010, "Member 'BP_LevelInstance_BossRoomBase_C_ExecuteUbergraph_BP_LevelInstance_BossRoomBase::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_ExecuteUbergraph_BP_LevelInstance_BossRoomBase, CallFunc_GetBossBattleManager_ReturnValue) == 0x000018, "Member 'BP_LevelInstance_BossRoomBase_C_ExecuteUbergraph_BP_LevelInstance_BossRoomBase::CallFunc_GetBossBattleManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_ExecuteUbergraph_BP_LevelInstance_BossRoomBase, CallFunc_GetIsServer_ReturnValue) == 0x000020, "Member 'BP_LevelInstance_BossRoomBase_C_ExecuteUbergraph_BP_LevelInstance_BossRoomBase::CallFunc_GetIsServer_ReturnValue' has a wrong offset!");

// Function BP_LevelInstance_BossRoomBase.BP_LevelInstance_BossRoomBase_C.GetBossSpawner
// 0x0008 (0x0008 - 0x0000)
struct BP_LevelInstance_BossRoomBase_C_GetBossSpawner final
{
public:
	class ABP_BossBattle_BossCharacterSpawner_C*  BossSpawner_0;                                     // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LevelInstance_BossRoomBase_C_GetBossSpawner) == 0x000008, "Wrong alignment on BP_LevelInstance_BossRoomBase_C_GetBossSpawner");
static_assert(sizeof(BP_LevelInstance_BossRoomBase_C_GetBossSpawner) == 0x000008, "Wrong size on BP_LevelInstance_BossRoomBase_C_GetBossSpawner");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_GetBossSpawner, BossSpawner_0) == 0x000000, "Member 'BP_LevelInstance_BossRoomBase_C_GetBossSpawner::BossSpawner_0' has a wrong offset!");

// Function BP_LevelInstance_BossRoomBase.BP_LevelInstance_BossRoomBase_C.OnSetBoss__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_LevelInstance_BossRoomBase_C_OnSetBoss__DelegateSignature final
{
public:
	class APalCharacter*                          Boss;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LevelInstance_BossRoomBase_C_OnSetBoss__DelegateSignature) == 0x000008, "Wrong alignment on BP_LevelInstance_BossRoomBase_C_OnSetBoss__DelegateSignature");
static_assert(sizeof(BP_LevelInstance_BossRoomBase_C_OnSetBoss__DelegateSignature) == 0x000008, "Wrong size on BP_LevelInstance_BossRoomBase_C_OnSetBoss__DelegateSignature");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_OnSetBoss__DelegateSignature, Boss) == 0x000000, "Member 'BP_LevelInstance_BossRoomBase_C_OnSetBoss__DelegateSignature::Boss' has a wrong offset!");

// Function BP_LevelInstance_BossRoomBase.BP_LevelInstance_BossRoomBase_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_LevelInstance_BossRoomBase_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LevelInstance_BossRoomBase_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_LevelInstance_BossRoomBase_C_ReceiveEndPlay");
static_assert(sizeof(BP_LevelInstance_BossRoomBase_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_LevelInstance_BossRoomBase_C_ReceiveEndPlay");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_LevelInstance_BossRoomBase_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_LevelInstance_BossRoomBase.BP_LevelInstance_BossRoomBase_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_LevelInstance_BossRoomBase_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LevelInstance_BossRoomBase_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_LevelInstance_BossRoomBase_C_ReceiveTick");
static_assert(sizeof(BP_LevelInstance_BossRoomBase_C_ReceiveTick) == 0x000004, "Wrong size on BP_LevelInstance_BossRoomBase_C_ReceiveTick");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_LevelInstance_BossRoomBase_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_LevelInstance_BossRoomBase.BP_LevelInstance_BossRoomBase_C.Set Spawn Boss Character
// 0x0008 (0x0008 - 0x0000)
struct BP_LevelInstance_BossRoomBase_C_Set_Spawn_Boss_Character final
{
public:
	class APalCharacter*                          Boss;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LevelInstance_BossRoomBase_C_Set_Spawn_Boss_Character) == 0x000008, "Wrong alignment on BP_LevelInstance_BossRoomBase_C_Set_Spawn_Boss_Character");
static_assert(sizeof(BP_LevelInstance_BossRoomBase_C_Set_Spawn_Boss_Character) == 0x000008, "Wrong size on BP_LevelInstance_BossRoomBase_C_Set_Spawn_Boss_Character");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_Set_Spawn_Boss_Character, Boss) == 0x000000, "Member 'BP_LevelInstance_BossRoomBase_C_Set_Spawn_Boss_Character::Boss' has a wrong offset!");

// Function BP_LevelInstance_BossRoomBase.BP_LevelInstance_BossRoomBase_C.Spawn Boss Spawner_Internal
// 0x01B0 (0x01B0 - 0x0000)
struct BP_LevelInstance_BossRoomBase_C_Spawn_Boss_Spawner_Internal final
{
public:
	EPalBossType                                  Boss;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         JoinPlayerNum;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalBossBattleManager*                  CallFunc_GetBossBattleManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsServer_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBossBattleManager*                  CallFunc_GetBossBattleManager_ReturnValue_1;       // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalBossBattleStaticInfo               CallFunc_GetStaticInfo_ReturnValue;                // 0x0020(0x00C8)()
	struct FPalBossBattleDifficultyParameter      CallFunc_Map_Find_Value;                           // 0x00E8(0x0050)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0140(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_BossBattle_BossCharacterSpawner_C*  CallFunc_FinishSpawningActor_ReturnValue;          // 0x01A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LevelInstance_BossRoomBase_C_Spawn_Boss_Spawner_Internal) == 0x000010, "Wrong alignment on BP_LevelInstance_BossRoomBase_C_Spawn_Boss_Spawner_Internal");
static_assert(sizeof(BP_LevelInstance_BossRoomBase_C_Spawn_Boss_Spawner_Internal) == 0x0001B0, "Wrong size on BP_LevelInstance_BossRoomBase_C_Spawn_Boss_Spawner_Internal");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_Spawn_Boss_Spawner_Internal, Boss) == 0x000000, "Member 'BP_LevelInstance_BossRoomBase_C_Spawn_Boss_Spawner_Internal::Boss' has a wrong offset!");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_Spawn_Boss_Spawner_Internal, JoinPlayerNum) == 0x000004, "Member 'BP_LevelInstance_BossRoomBase_C_Spawn_Boss_Spawner_Internal::JoinPlayerNum' has a wrong offset!");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_Spawn_Boss_Spawner_Internal, CallFunc_GetBossBattleManager_ReturnValue) == 0x000008, "Member 'BP_LevelInstance_BossRoomBase_C_Spawn_Boss_Spawner_Internal::CallFunc_GetBossBattleManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_Spawn_Boss_Spawner_Internal, CallFunc_GetIsServer_ReturnValue) == 0x000010, "Member 'BP_LevelInstance_BossRoomBase_C_Spawn_Boss_Spawner_Internal::CallFunc_GetIsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_Spawn_Boss_Spawner_Internal, CallFunc_GetBossBattleManager_ReturnValue_1) == 0x000018, "Member 'BP_LevelInstance_BossRoomBase_C_Spawn_Boss_Spawner_Internal::CallFunc_GetBossBattleManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_Spawn_Boss_Spawner_Internal, CallFunc_GetStaticInfo_ReturnValue) == 0x000020, "Member 'BP_LevelInstance_BossRoomBase_C_Spawn_Boss_Spawner_Internal::CallFunc_GetStaticInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_Spawn_Boss_Spawner_Internal, CallFunc_Map_Find_Value) == 0x0000E8, "Member 'BP_LevelInstance_BossRoomBase_C_Spawn_Boss_Spawner_Internal::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_Spawn_Boss_Spawner_Internal, CallFunc_Map_Find_ReturnValue) == 0x000138, "Member 'BP_LevelInstance_BossRoomBase_C_Spawn_Boss_Spawner_Internal::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_Spawn_Boss_Spawner_Internal, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000140, "Member 'BP_LevelInstance_BossRoomBase_C_Spawn_Boss_Spawner_Internal::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_Spawn_Boss_Spawner_Internal, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0001A0, "Member 'BP_LevelInstance_BossRoomBase_C_Spawn_Boss_Spawner_Internal::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_Spawn_Boss_Spawner_Internal, CallFunc_FinishSpawningActor_ReturnValue) == 0x0001A8, "Member 'BP_LevelInstance_BossRoomBase_C_Spawn_Boss_Spawner_Internal::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function BP_LevelInstance_BossRoomBase.BP_LevelInstance_BossRoomBase_C.SpawnBossSpawner
// 0x0008 (0x0008 - 0x0000)
struct BP_LevelInstance_BossRoomBase_C_SpawnBossSpawner final
{
public:
	EPalBossType                                  BossType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         JoinPlayerNum;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LevelInstance_BossRoomBase_C_SpawnBossSpawner) == 0x000004, "Wrong alignment on BP_LevelInstance_BossRoomBase_C_SpawnBossSpawner");
static_assert(sizeof(BP_LevelInstance_BossRoomBase_C_SpawnBossSpawner) == 0x000008, "Wrong size on BP_LevelInstance_BossRoomBase_C_SpawnBossSpawner");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_SpawnBossSpawner, BossType) == 0x000000, "Member 'BP_LevelInstance_BossRoomBase_C_SpawnBossSpawner::BossType' has a wrong offset!");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_SpawnBossSpawner, JoinPlayerNum) == 0x000004, "Member 'BP_LevelInstance_BossRoomBase_C_SpawnBossSpawner::JoinPlayerNum' has a wrong offset!");

// Function BP_LevelInstance_BossRoomBase.BP_LevelInstance_BossRoomBase_C.CheckLevelLoaded
// 0x0150 (0x0150 - 0x0000)
struct BP_LevelInstance_BossRoomBase_C_CheckLevelLoaded final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0008(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x0060(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LevelInstance_BossRoomBase_C_CheckLevelLoaded) == 0x000008, "Wrong alignment on BP_LevelInstance_BossRoomBase_C_CheckLevelLoaded");
static_assert(sizeof(BP_LevelInstance_BossRoomBase_C_CheckLevelLoaded) == 0x000150, "Wrong size on BP_LevelInstance_BossRoomBase_C_CheckLevelLoaded");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_CheckLevelLoaded, ReturnValue) == 0x000000, "Member 'BP_LevelInstance_BossRoomBase_C_CheckLevelLoaded::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_CheckLevelLoaded, Temp_object_Variable) == 0x000008, "Member 'BP_LevelInstance_BossRoomBase_C_CheckLevelLoaded::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_CheckLevelLoaded, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000018, "Member 'BP_LevelInstance_BossRoomBase_C_CheckLevelLoaded::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_CheckLevelLoaded, CallFunc_Add_VectorVector_ReturnValue) == 0x000030, "Member 'BP_LevelInstance_BossRoomBase_C_CheckLevelLoaded::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_CheckLevelLoaded, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000048, "Member 'BP_LevelInstance_BossRoomBase_C_CheckLevelLoaded::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_CheckLevelLoaded, CallFunc_LineTraceSingle_OutHit) == 0x000060, "Member 'BP_LevelInstance_BossRoomBase_C_CheckLevelLoaded::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_CheckLevelLoaded, CallFunc_LineTraceSingle_ReturnValue) == 0x000148, "Member 'BP_LevelInstance_BossRoomBase_C_CheckLevelLoaded::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");

// Function BP_LevelInstance_BossRoomBase.BP_LevelInstance_BossRoomBase_C.GetPlayerStartTransform
// 0x00C0 (0x00C0 - 0x0000)
struct BP_LevelInstance_BossRoomBase_C_GetPlayerStartTransform final
{
public:
	struct FTransform                             ReturnValue;                                       // 0x0000(0x0060)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0060(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LevelInstance_BossRoomBase_C_GetPlayerStartTransform) == 0x000010, "Wrong alignment on BP_LevelInstance_BossRoomBase_C_GetPlayerStartTransform");
static_assert(sizeof(BP_LevelInstance_BossRoomBase_C_GetPlayerStartTransform) == 0x0000C0, "Wrong size on BP_LevelInstance_BossRoomBase_C_GetPlayerStartTransform");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_GetPlayerStartTransform, ReturnValue) == 0x000000, "Member 'BP_LevelInstance_BossRoomBase_C_GetPlayerStartTransform::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_GetPlayerStartTransform, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000060, "Member 'BP_LevelInstance_BossRoomBase_C_GetPlayerStartTransform::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");

// Function BP_LevelInstance_BossRoomBase.BP_LevelInstance_BossRoomBase_C.GetSequencerTransform
// 0x00C0 (0x00C0 - 0x0000)
struct BP_LevelInstance_BossRoomBase_C_GetSequencerTransform final
{
public:
	struct FTransform                             ReturnValue;                                       // 0x0000(0x0060)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0060(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LevelInstance_BossRoomBase_C_GetSequencerTransform) == 0x000010, "Wrong alignment on BP_LevelInstance_BossRoomBase_C_GetSequencerTransform");
static_assert(sizeof(BP_LevelInstance_BossRoomBase_C_GetSequencerTransform) == 0x0000C0, "Wrong size on BP_LevelInstance_BossRoomBase_C_GetSequencerTransform");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_GetSequencerTransform, ReturnValue) == 0x000000, "Member 'BP_LevelInstance_BossRoomBase_C_GetSequencerTransform::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LevelInstance_BossRoomBase_C_GetSequencerTransform, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000060, "Member 'BP_LevelInstance_BossRoomBase_C_GetSequencerTransform::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");

}

