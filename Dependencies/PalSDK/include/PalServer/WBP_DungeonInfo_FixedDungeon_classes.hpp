#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C
// 0x0080 (0x0488 - 0x0408)
class UWBP_DungeonInfo_FixedDungeon_C final : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BossExistsImage;                                   // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Dungeon_Info;                                      // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           DungeonInfo;                                       // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_DungeonName;                                  // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_LevelValue;                                   // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BossBattle_Timer_C*                WBP_BossBattle_Timer;                              // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPalDungeonInfoParameter               DungeonInfoParameter;                              // 0x0440(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   DefaultDisappearText;                              // 0x0468(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameDateTime                          BossRespawnTimeAt;                                 // 0x0480(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_DungeonInfo_FixedDungeon(int32 EntryPoint);
	void Set_Dungeon_Level(class UPalDungeonInstanceModel* DungeonInstanceModel);
	void SetBossRespawnTimeAt(class UPalDungeonInstanceModel* DungeonInstanceModel);
	void SetDungeonBossSpawned(class UPalDungeonInstanceModel* DungeonInstanceModel);
	void SetDungeonName(class UPalDungeonInstanceModel* DungeonInstanceModel);
	void Setup_by_Stage_Model(class UPalStageModelDungeon* InStageModel);
	void SetupEvents(class UPalStageModelDungeon* StageModel);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Update_Display_Info(class UPalDungeonInstanceModel* DungeonInstanceModel);
	void UpdateBossRespawnRemainTime();
	void UpdateDungeonInfoByTick();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_DungeonInfo_FixedDungeon_C">();
	}
	static class UWBP_DungeonInfo_FixedDungeon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_DungeonInfo_FixedDungeon_C>();
	}
};
static_assert(alignof(UWBP_DungeonInfo_FixedDungeon_C) == 0x000008, "Wrong alignment on UWBP_DungeonInfo_FixedDungeon_C");
static_assert(sizeof(UWBP_DungeonInfo_FixedDungeon_C) == 0x000488, "Wrong size on UWBP_DungeonInfo_FixedDungeon_C");
static_assert(offsetof(UWBP_DungeonInfo_FixedDungeon_C, UberGraphFrame) == 0x000408, "Member 'UWBP_DungeonInfo_FixedDungeon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_DungeonInfo_FixedDungeon_C, BossExistsImage) == 0x000410, "Member 'UWBP_DungeonInfo_FixedDungeon_C::BossExistsImage' has a wrong offset!");
static_assert(offsetof(UWBP_DungeonInfo_FixedDungeon_C, Dungeon_Info) == 0x000418, "Member 'UWBP_DungeonInfo_FixedDungeon_C::Dungeon_Info' has a wrong offset!");
static_assert(offsetof(UWBP_DungeonInfo_FixedDungeon_C, DungeonInfo) == 0x000420, "Member 'UWBP_DungeonInfo_FixedDungeon_C::DungeonInfo' has a wrong offset!");
static_assert(offsetof(UWBP_DungeonInfo_FixedDungeon_C, Text_DungeonName) == 0x000428, "Member 'UWBP_DungeonInfo_FixedDungeon_C::Text_DungeonName' has a wrong offset!");
static_assert(offsetof(UWBP_DungeonInfo_FixedDungeon_C, Text_LevelValue) == 0x000430, "Member 'UWBP_DungeonInfo_FixedDungeon_C::Text_LevelValue' has a wrong offset!");
static_assert(offsetof(UWBP_DungeonInfo_FixedDungeon_C, WBP_BossBattle_Timer) == 0x000438, "Member 'UWBP_DungeonInfo_FixedDungeon_C::WBP_BossBattle_Timer' has a wrong offset!");
static_assert(offsetof(UWBP_DungeonInfo_FixedDungeon_C, DungeonInfoParameter) == 0x000440, "Member 'UWBP_DungeonInfo_FixedDungeon_C::DungeonInfoParameter' has a wrong offset!");
static_assert(offsetof(UWBP_DungeonInfo_FixedDungeon_C, DefaultDisappearText) == 0x000468, "Member 'UWBP_DungeonInfo_FixedDungeon_C::DefaultDisappearText' has a wrong offset!");
static_assert(offsetof(UWBP_DungeonInfo_FixedDungeon_C, BossRespawnTimeAt) == 0x000480, "Member 'UWBP_DungeonInfo_FixedDungeon_C::BossRespawnTimeAt' has a wrong offset!");

}

