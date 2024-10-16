#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "Engine_structs.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_DungeonInfo.WBP_DungeonInfo_C
// 0x0078 (0x0480 - 0x0408)
class UWBP_DungeonInfo_C final : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BossExistsImage;                                   // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           DungeonInfo;                                       // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_DungeonName;                                  // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_LevelValue;                                   // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BossBattle_Timer_C*                WBP_BossBattle_Timer;                              // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPalDungeonInfoParameter               DungeonInfoParameter;                              // 0x0438(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   DefaultDisappearText;                              // 0x0460(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameDateTime                          DisappeatTimeAt;                                   // 0x0478(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_DungeonInfo(int32 EntryPoint);
	void SetDungeonBossSpawned(class UPalDungeonInstanceModel* DungeonInstanceModel);
	void SetDungeonDisappearTimeAt(class UPalDungeonInstanceModel* DungeonInstanceModel);
	void SetDungeonLevel(class UPalDungeonInstanceModel* DungeonInstanceModel);
	void SetDungeonName(class UPalDungeonInstanceModel* DungeonInstanceModel);
	void Setup_by_Stage_Model(class UPalStageModelDungeon* InStageModel);
	void SetupEvents(class UPalStageModelDungeon* StageModel);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateDisplayInfo(class UPalDungeonInstanceModel* DungeonInstanceModel);
	void UpdateDungeonDisappearRemainTime();
	void UpdateDungeonInfoByTick();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_DungeonInfo_C">();
	}
	static class UWBP_DungeonInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_DungeonInfo_C>();
	}
};
static_assert(alignof(UWBP_DungeonInfo_C) == 0x000008, "Wrong alignment on UWBP_DungeonInfo_C");
static_assert(sizeof(UWBP_DungeonInfo_C) == 0x000480, "Wrong size on UWBP_DungeonInfo_C");
static_assert(offsetof(UWBP_DungeonInfo_C, UberGraphFrame) == 0x000408, "Member 'UWBP_DungeonInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_DungeonInfo_C, BossExistsImage) == 0x000410, "Member 'UWBP_DungeonInfo_C::BossExistsImage' has a wrong offset!");
static_assert(offsetof(UWBP_DungeonInfo_C, DungeonInfo) == 0x000418, "Member 'UWBP_DungeonInfo_C::DungeonInfo' has a wrong offset!");
static_assert(offsetof(UWBP_DungeonInfo_C, Text_DungeonName) == 0x000420, "Member 'UWBP_DungeonInfo_C::Text_DungeonName' has a wrong offset!");
static_assert(offsetof(UWBP_DungeonInfo_C, Text_LevelValue) == 0x000428, "Member 'UWBP_DungeonInfo_C::Text_LevelValue' has a wrong offset!");
static_assert(offsetof(UWBP_DungeonInfo_C, WBP_BossBattle_Timer) == 0x000430, "Member 'UWBP_DungeonInfo_C::WBP_BossBattle_Timer' has a wrong offset!");
static_assert(offsetof(UWBP_DungeonInfo_C, DungeonInfoParameter) == 0x000438, "Member 'UWBP_DungeonInfo_C::DungeonInfoParameter' has a wrong offset!");
static_assert(offsetof(UWBP_DungeonInfo_C, DefaultDisappearText) == 0x000460, "Member 'UWBP_DungeonInfo_C::DefaultDisappearText' has a wrong offset!");
static_assert(offsetof(UWBP_DungeonInfo_C, DisappeatTimeAt) == 0x000478, "Member 'UWBP_DungeonInfo_C::DisappeatTimeAt' has a wrong offset!");

}

