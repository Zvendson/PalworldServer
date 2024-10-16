#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "CinematicCamera_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalCutsceneCamera.BP_PalCutsceneCamera_C
// 0x0080 (0x0AA0 - 0x0A20)
class ABP_PalCutsceneCamera_C final : public ACineCameraActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A20(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneCaptureComponent2D*               SceneCaptureComponent2D;                           // 0x0A28(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TMap<EPalBossType, TSoftClassPtr<class UClass>> BossDemoWidgetMap;                                 // 0x0A30(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAsyncAction_CreateWidgetAsync*         BossDemoLoadAsyncAction;                           // 0x0A80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	EPalBossType                                  WaitLoadWidgetBossType;                            // 0x0A88(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A89[0x7];                                      // 0x0A89(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_BossDemoBase_C*                    DisplayWidget;                                     // 0x0A90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void DisplayLoadedBossDemoWidget();
	void ExecuteUbergraph_BP_PalCutsceneCamera(int32 EntryPoint);
	void OnComplete_42DB55244656A42BFC71E984CB1360D8(class UUserWidget* UserWidget);
	void PreSetupBossDemoCapture();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void StartLoadBossDemoWidgetAsync(EPalBossType BossType);
	void StopBossDemoWidget();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalCutsceneCamera_C">();
	}
	static class ABP_PalCutsceneCamera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalCutsceneCamera_C>();
	}
};
static_assert(alignof(ABP_PalCutsceneCamera_C) == 0x000010, "Wrong alignment on ABP_PalCutsceneCamera_C");
static_assert(sizeof(ABP_PalCutsceneCamera_C) == 0x000AA0, "Wrong size on ABP_PalCutsceneCamera_C");
static_assert(offsetof(ABP_PalCutsceneCamera_C, UberGraphFrame) == 0x000A20, "Member 'ABP_PalCutsceneCamera_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PalCutsceneCamera_C, SceneCaptureComponent2D) == 0x000A28, "Member 'ABP_PalCutsceneCamera_C::SceneCaptureComponent2D' has a wrong offset!");
static_assert(offsetof(ABP_PalCutsceneCamera_C, BossDemoWidgetMap) == 0x000A30, "Member 'ABP_PalCutsceneCamera_C::BossDemoWidgetMap' has a wrong offset!");
static_assert(offsetof(ABP_PalCutsceneCamera_C, BossDemoLoadAsyncAction) == 0x000A80, "Member 'ABP_PalCutsceneCamera_C::BossDemoLoadAsyncAction' has a wrong offset!");
static_assert(offsetof(ABP_PalCutsceneCamera_C, WaitLoadWidgetBossType) == 0x000A88, "Member 'ABP_PalCutsceneCamera_C::WaitLoadWidgetBossType' has a wrong offset!");
static_assert(offsetof(ABP_PalCutsceneCamera_C, DisplayWidget) == 0x000A90, "Member 'ABP_PalCutsceneCamera_C::DisplayWidget' has a wrong offset!");

}

