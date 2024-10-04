#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_LevelInstance_BossRoomBase.BP_LevelInstance_BossRoomBase_C
// 0x00E8 (0x0420 - 0x0338)
class ABP_LevelInstance_BossRoomBase_C final : public APalBossBattleLevelInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0338(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          TowerBox8;                                         // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          TowerBox7;                                         // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          TowerBox6;                                         // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          TowerBox5;                                         // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          TowerBox4;                                         // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          TowerBox3;                                         // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          TowerBox2;                                         // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          TowerBox1;                                         // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          ForNavMesh_Ground;                                 // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          EdgeBox3;                                          // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          EdgeBox2;                                          // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          EdgeBox1;                                          // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          EdgeBox;                                           // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        GroundCheckPoint;                                  // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          WallBox4;                                          // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          WallBox3;                                          // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          WallBox2;                                          // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          WallBox1;                                          // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CeilingBox;                                        // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SequencerTransform;                                // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_EnemyPoint;                                     // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   PlayerStartPoint;                                  // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_BossBattle_BossCharacterSpawner_C*  BossSpawner;                                       // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSetBoss;                                         // 0x03F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnLoadedLevel;                                     // 0x0408(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsLoaded;                                          // 0x0418(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_LevelInstance_BossRoomBase(int32 EntryPoint);
	void GetBossSpawner(class ABP_BossBattle_BossCharacterSpawner_C** BossSpawner_0);
	void OnLoadedLevel__DelegateSignature();
	void OnSetBoss__DelegateSignature(class APalCharacter* Boss);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void ResetBossLocation();
	void Set_Spawn_Boss_Character(class APalCharacter* Boss);
	void Spawn_Boss_Spawner_Internal(EPalBossType Boss, int32 JoinPlayerNum);
	void SpawnBossSpawner(EPalBossType BossType, int32 JoinPlayerNum);

	bool CheckLevelLoaded() const;
	struct FTransform GetPlayerStartTransform() const;
	struct FTransform GetSequencerTransform() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LevelInstance_BossRoomBase_C">();
	}
	static class ABP_LevelInstance_BossRoomBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LevelInstance_BossRoomBase_C>();
	}
};
static_assert(alignof(ABP_LevelInstance_BossRoomBase_C) == 0x000008, "Wrong alignment on ABP_LevelInstance_BossRoomBase_C");
static_assert(sizeof(ABP_LevelInstance_BossRoomBase_C) == 0x000420, "Wrong size on ABP_LevelInstance_BossRoomBase_C");
static_assert(offsetof(ABP_LevelInstance_BossRoomBase_C, UberGraphFrame) == 0x000338, "Member 'ABP_LevelInstance_BossRoomBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_LevelInstance_BossRoomBase_C, TowerBox8) == 0x000340, "Member 'ABP_LevelInstance_BossRoomBase_C::TowerBox8' has a wrong offset!");
static_assert(offsetof(ABP_LevelInstance_BossRoomBase_C, TowerBox7) == 0x000348, "Member 'ABP_LevelInstance_BossRoomBase_C::TowerBox7' has a wrong offset!");
static_assert(offsetof(ABP_LevelInstance_BossRoomBase_C, TowerBox6) == 0x000350, "Member 'ABP_LevelInstance_BossRoomBase_C::TowerBox6' has a wrong offset!");
static_assert(offsetof(ABP_LevelInstance_BossRoomBase_C, TowerBox5) == 0x000358, "Member 'ABP_LevelInstance_BossRoomBase_C::TowerBox5' has a wrong offset!");
static_assert(offsetof(ABP_LevelInstance_BossRoomBase_C, TowerBox4) == 0x000360, "Member 'ABP_LevelInstance_BossRoomBase_C::TowerBox4' has a wrong offset!");
static_assert(offsetof(ABP_LevelInstance_BossRoomBase_C, TowerBox3) == 0x000368, "Member 'ABP_LevelInstance_BossRoomBase_C::TowerBox3' has a wrong offset!");
static_assert(offsetof(ABP_LevelInstance_BossRoomBase_C, TowerBox2) == 0x000370, "Member 'ABP_LevelInstance_BossRoomBase_C::TowerBox2' has a wrong offset!");
static_assert(offsetof(ABP_LevelInstance_BossRoomBase_C, TowerBox1) == 0x000378, "Member 'ABP_LevelInstance_BossRoomBase_C::TowerBox1' has a wrong offset!");
static_assert(offsetof(ABP_LevelInstance_BossRoomBase_C, ForNavMesh_Ground) == 0x000380, "Member 'ABP_LevelInstance_BossRoomBase_C::ForNavMesh_Ground' has a wrong offset!");
static_assert(offsetof(ABP_LevelInstance_BossRoomBase_C, EdgeBox3) == 0x000388, "Member 'ABP_LevelInstance_BossRoomBase_C::EdgeBox3' has a wrong offset!");
static_assert(offsetof(ABP_LevelInstance_BossRoomBase_C, EdgeBox2) == 0x000390, "Member 'ABP_LevelInstance_BossRoomBase_C::EdgeBox2' has a wrong offset!");
static_assert(offsetof(ABP_LevelInstance_BossRoomBase_C, EdgeBox1) == 0x000398, "Member 'ABP_LevelInstance_BossRoomBase_C::EdgeBox1' has a wrong offset!");
static_assert(offsetof(ABP_LevelInstance_BossRoomBase_C, EdgeBox) == 0x0003A0, "Member 'ABP_LevelInstance_BossRoomBase_C::EdgeBox' has a wrong offset!");
static_assert(offsetof(ABP_LevelInstance_BossRoomBase_C, GroundCheckPoint) == 0x0003A8, "Member 'ABP_LevelInstance_BossRoomBase_C::GroundCheckPoint' has a wrong offset!");
static_assert(offsetof(ABP_LevelInstance_BossRoomBase_C, WallBox4) == 0x0003B0, "Member 'ABP_LevelInstance_BossRoomBase_C::WallBox4' has a wrong offset!");
static_assert(offsetof(ABP_LevelInstance_BossRoomBase_C, WallBox3) == 0x0003B8, "Member 'ABP_LevelInstance_BossRoomBase_C::WallBox3' has a wrong offset!");
static_assert(offsetof(ABP_LevelInstance_BossRoomBase_C, WallBox2) == 0x0003C0, "Member 'ABP_LevelInstance_BossRoomBase_C::WallBox2' has a wrong offset!");
static_assert(offsetof(ABP_LevelInstance_BossRoomBase_C, WallBox1) == 0x0003C8, "Member 'ABP_LevelInstance_BossRoomBase_C::WallBox1' has a wrong offset!");
static_assert(offsetof(ABP_LevelInstance_BossRoomBase_C, CeilingBox) == 0x0003D0, "Member 'ABP_LevelInstance_BossRoomBase_C::CeilingBox' has a wrong offset!");
static_assert(offsetof(ABP_LevelInstance_BossRoomBase_C, SequencerTransform) == 0x0003D8, "Member 'ABP_LevelInstance_BossRoomBase_C::SequencerTransform' has a wrong offset!");
static_assert(offsetof(ABP_LevelInstance_BossRoomBase_C, SM_EnemyPoint) == 0x0003E0, "Member 'ABP_LevelInstance_BossRoomBase_C::SM_EnemyPoint' has a wrong offset!");
static_assert(offsetof(ABP_LevelInstance_BossRoomBase_C, PlayerStartPoint) == 0x0003E8, "Member 'ABP_LevelInstance_BossRoomBase_C::PlayerStartPoint' has a wrong offset!");
static_assert(offsetof(ABP_LevelInstance_BossRoomBase_C, BossSpawner) == 0x0003F0, "Member 'ABP_LevelInstance_BossRoomBase_C::BossSpawner' has a wrong offset!");
static_assert(offsetof(ABP_LevelInstance_BossRoomBase_C, OnSetBoss) == 0x0003F8, "Member 'ABP_LevelInstance_BossRoomBase_C::OnSetBoss' has a wrong offset!");
static_assert(offsetof(ABP_LevelInstance_BossRoomBase_C, OnLoadedLevel) == 0x000408, "Member 'ABP_LevelInstance_BossRoomBase_C::OnLoadedLevel' has a wrong offset!");
static_assert(offsetof(ABP_LevelInstance_BossRoomBase_C, IsLoaded) == 0x000418, "Member 'ABP_LevelInstance_BossRoomBase_C::IsLoaded' has a wrong offset!");

}

