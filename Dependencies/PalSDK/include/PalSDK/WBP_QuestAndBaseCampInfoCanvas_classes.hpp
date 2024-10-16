#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "UMG_structs.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C
// 0x00A0 (0x05F0 - 0x0550)
class UWBP_QuestAndBaseCampInfoCanvas_C final : public UPalUIInsideBaseCampCanvas
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0550(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HorizontalBox_Border_Bottom;                       // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_Border_Top;                          // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox;                                       // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BattleEntry_Member_C*              WBP_BattleEntry_Member;                            // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_CampLevelUp_C*          WBP_IngameMenu_CampLevelUp;                        // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_Task_Simple_C*          WBP_IngameMenu_Task_Simple;                        // 0x0580(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_Task_Tutorial_C*        WBP_IngameMenu_Task_Tutorial;                      // 0x0588(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerInputKeyGuideIcon_C*         WBP_PlayerInputKeyGuideIcon;                       // 0x0590(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WorkerSimpleDetail_C*              WBP_WorkerSimpleDetail;                            // 0x0598(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                           TackCheckTimerHandle;                              // 0x05A0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        TraceLength;                                       // 0x05A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class APalCharacter>           NowDisplayInfoCharacter;                           // 0x05B0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FTimerHandle                           CollectWorkerDirectorModelTimer;                   // 0x05E0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Display_Tutorial;                                  // 0x05E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas(int32 EntryPoint);
	void HideBaseCampInfo();
	void On_Enter_Base_Camp(class UPalBaseCampModel* Model);
	void On_Enter_Pal_Box_Area();
	void On_Leave_Base_Camp();
	void On_Update_Tutorial_Quest(class UPalQuestData* UpdatedQuest);
	void OnChangedUISettings(const struct FPalOptionUISettings& PrevSettings, const struct FPalOptionUISettings& NewSettings);
	void OnCompleteTutorialQuest(class UPalQuestData* CompletedQuest);
	void OnInitialized();
	void OnLeavePalBoxArea();
	void OnSetup_AfterCreatedPlayer();
	void OnTimer_CollectWorkerDirectorModel();
	void OnUpdateBaseCampDetail();
	void OnUpdateBaseCampWorkHard(EPalBaseCampPassiveEffectWorkHardType WorkHardType);
	void OnUpdateWorkerBattleType(EPalBaseCampWorkerDirectionBattleType BattleType);
	void SetVerticalBoxVisible(bool IsVisible_0);
	void ShowBaseCampInfo();
	void ShowLevelUp(class UPalBaseCampModel* Model);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void TraceWorkerPal();
	void UpdateItemDetail();
	void UpdatePalDetail();
	void UpdateTask();
	void UpdateWindowBorder();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_QuestAndBaseCampInfoCanvas_C">();
	}
	static class UWBP_QuestAndBaseCampInfoCanvas_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_QuestAndBaseCampInfoCanvas_C>();
	}
};
static_assert(alignof(UWBP_QuestAndBaseCampInfoCanvas_C) == 0x000008, "Wrong alignment on UWBP_QuestAndBaseCampInfoCanvas_C");
static_assert(sizeof(UWBP_QuestAndBaseCampInfoCanvas_C) == 0x0005F0, "Wrong size on UWBP_QuestAndBaseCampInfoCanvas_C");
static_assert(offsetof(UWBP_QuestAndBaseCampInfoCanvas_C, UberGraphFrame) == 0x000550, "Member 'UWBP_QuestAndBaseCampInfoCanvas_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_QuestAndBaseCampInfoCanvas_C, HorizontalBox_Border_Bottom) == 0x000558, "Member 'UWBP_QuestAndBaseCampInfoCanvas_C::HorizontalBox_Border_Bottom' has a wrong offset!");
static_assert(offsetof(UWBP_QuestAndBaseCampInfoCanvas_C, HorizontalBox_Border_Top) == 0x000560, "Member 'UWBP_QuestAndBaseCampInfoCanvas_C::HorizontalBox_Border_Top' has a wrong offset!");
static_assert(offsetof(UWBP_QuestAndBaseCampInfoCanvas_C, VerticalBox) == 0x000568, "Member 'UWBP_QuestAndBaseCampInfoCanvas_C::VerticalBox' has a wrong offset!");
static_assert(offsetof(UWBP_QuestAndBaseCampInfoCanvas_C, WBP_BattleEntry_Member) == 0x000570, "Member 'UWBP_QuestAndBaseCampInfoCanvas_C::WBP_BattleEntry_Member' has a wrong offset!");
static_assert(offsetof(UWBP_QuestAndBaseCampInfoCanvas_C, WBP_IngameMenu_CampLevelUp) == 0x000578, "Member 'UWBP_QuestAndBaseCampInfoCanvas_C::WBP_IngameMenu_CampLevelUp' has a wrong offset!");
static_assert(offsetof(UWBP_QuestAndBaseCampInfoCanvas_C, WBP_IngameMenu_Task_Simple) == 0x000580, "Member 'UWBP_QuestAndBaseCampInfoCanvas_C::WBP_IngameMenu_Task_Simple' has a wrong offset!");
static_assert(offsetof(UWBP_QuestAndBaseCampInfoCanvas_C, WBP_IngameMenu_Task_Tutorial) == 0x000588, "Member 'UWBP_QuestAndBaseCampInfoCanvas_C::WBP_IngameMenu_Task_Tutorial' has a wrong offset!");
static_assert(offsetof(UWBP_QuestAndBaseCampInfoCanvas_C, WBP_PlayerInputKeyGuideIcon) == 0x000590, "Member 'UWBP_QuestAndBaseCampInfoCanvas_C::WBP_PlayerInputKeyGuideIcon' has a wrong offset!");
static_assert(offsetof(UWBP_QuestAndBaseCampInfoCanvas_C, WBP_WorkerSimpleDetail) == 0x000598, "Member 'UWBP_QuestAndBaseCampInfoCanvas_C::WBP_WorkerSimpleDetail' has a wrong offset!");
static_assert(offsetof(UWBP_QuestAndBaseCampInfoCanvas_C, TackCheckTimerHandle) == 0x0005A0, "Member 'UWBP_QuestAndBaseCampInfoCanvas_C::TackCheckTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_QuestAndBaseCampInfoCanvas_C, TraceLength) == 0x0005A8, "Member 'UWBP_QuestAndBaseCampInfoCanvas_C::TraceLength' has a wrong offset!");
static_assert(offsetof(UWBP_QuestAndBaseCampInfoCanvas_C, NowDisplayInfoCharacter) == 0x0005B0, "Member 'UWBP_QuestAndBaseCampInfoCanvas_C::NowDisplayInfoCharacter' has a wrong offset!");
static_assert(offsetof(UWBP_QuestAndBaseCampInfoCanvas_C, CollectWorkerDirectorModelTimer) == 0x0005E0, "Member 'UWBP_QuestAndBaseCampInfoCanvas_C::CollectWorkerDirectorModelTimer' has a wrong offset!");
static_assert(offsetof(UWBP_QuestAndBaseCampInfoCanvas_C, Display_Tutorial) == 0x0005E8, "Member 'UWBP_QuestAndBaseCampInfoCanvas_C::Display_Tutorial' has a wrong offset!");

}

