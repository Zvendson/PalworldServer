#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "UMG_structs.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_IngameMenu_Mission.WBP_IngameMenu_Mission_C
// 0x0170 (0x05C8 - 0x0458)
class UWBP_IngameMenu_Mission_C final : public UPalUIBaseCampTaskBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0458(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_LevelUp;                                       // 0x0460(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_CampInfo;                                      // 0x0468(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_LevelNum;                                     // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_PalNum;                                       // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonButton_C*                    WBP_CommonButton;                                  // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_MissionLevelEffect_C*   WBP_IngameMenu_MissionLevelEffect;                 // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_MissionLevelEffect_C*   WBP_IngameMenu_MissionLevelEffect_1;               // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_MissionList_C*          WBP_IngameMenu_MissionList;                        // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_MissionList_C*          WBP_IngameMenu_MissionList_1;                      // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_MissionList_C*          WBP_IngameMenu_MissionList_2;                      // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_MissionList_C*          WBP_IngameMenu_MissionList_3;                      // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_btn_C*                        WBP_Menu_btn;                                      // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInGameMenuItemSlotButton_C*     WBP_PalInGameMenuItemSlotButton;                   // 0x04C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInGameMenuItemSlotButton_C*     WBP_PalInGameMenuItemSlotButton_1;                 // 0x04C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInGameMenuItemSlotButton_C*     WBP_PalInGameMenuItemSlotButton_2;                 // 0x04D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInGameMenuItemSlotButton_C*     WBP_PalInGameMenuItemSlotButton_3;                 // 0x04D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   TabActionName;                                     // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_IngameMenu_MissionList_C*>  MissionList;                                       // 0x04E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FPalBaseCampTaskCheckedData            ChedckedData;                                      // 0x04F8(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPalBaseCampTaskDataSet                TaskData;                                          // 0x0558(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                    BuildOBjectNumTaskInfoMsgID;                       // 0x0580(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    WorkerNumTaskInfoMsgID;                            // 0x0590(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          CanLevelup;                                        // 0x05A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A1[0x3];                                      // 0x05A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LastLevel;                                         // 0x05A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           TaskUpdateTimer;                                   // 0x05A8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          ButtonActive;                                      // 0x05B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B1[0x7];                                      // 0x05B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    PalLimitMsgId;                                     // 0x05B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void BndEvt__WBP_IngameMenu_Mission_WBP_CommonButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__WBP_IngameMenu_Mission_WBP_Menu_btn_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature();
	void ClosePanel();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_IngameMenu_Mission(int32 EntryPoint);
	void Finished_37D37A8647957B4095DAF6B247AB02F5();
	void OnSetup();
	void OnUpdateCampStatus(class UPalBaseCampModel* Model);
	void UpdateCampInfo();
	void UpdateCampInfoMax();
	void UpdateLevelEffectInfo(int32 Level);

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IngameMenu_Mission_C">();
	}
	static class UWBP_IngameMenu_Mission_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IngameMenu_Mission_C>();
	}
};
static_assert(alignof(UWBP_IngameMenu_Mission_C) == 0x000008, "Wrong alignment on UWBP_IngameMenu_Mission_C");
static_assert(sizeof(UWBP_IngameMenu_Mission_C) == 0x0005C8, "Wrong size on UWBP_IngameMenu_Mission_C");
static_assert(offsetof(UWBP_IngameMenu_Mission_C, UberGraphFrame) == 0x000458, "Member 'UWBP_IngameMenu_Mission_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Mission_C, Anm_LevelUp) == 0x000460, "Member 'UWBP_IngameMenu_Mission_C::Anm_LevelUp' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Mission_C, Anm_CampInfo) == 0x000468, "Member 'UWBP_IngameMenu_Mission_C::Anm_CampInfo' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Mission_C, Text_LevelNum) == 0x000470, "Member 'UWBP_IngameMenu_Mission_C::Text_LevelNum' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Mission_C, Text_PalNum) == 0x000478, "Member 'UWBP_IngameMenu_Mission_C::Text_PalNum' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Mission_C, WBP_CommonButton) == 0x000480, "Member 'UWBP_IngameMenu_Mission_C::WBP_CommonButton' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Mission_C, WBP_IngameMenu_MissionLevelEffect) == 0x000488, "Member 'UWBP_IngameMenu_Mission_C::WBP_IngameMenu_MissionLevelEffect' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Mission_C, WBP_IngameMenu_MissionLevelEffect_1) == 0x000490, "Member 'UWBP_IngameMenu_Mission_C::WBP_IngameMenu_MissionLevelEffect_1' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Mission_C, WBP_IngameMenu_MissionList) == 0x000498, "Member 'UWBP_IngameMenu_Mission_C::WBP_IngameMenu_MissionList' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Mission_C, WBP_IngameMenu_MissionList_1) == 0x0004A0, "Member 'UWBP_IngameMenu_Mission_C::WBP_IngameMenu_MissionList_1' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Mission_C, WBP_IngameMenu_MissionList_2) == 0x0004A8, "Member 'UWBP_IngameMenu_Mission_C::WBP_IngameMenu_MissionList_2' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Mission_C, WBP_IngameMenu_MissionList_3) == 0x0004B0, "Member 'UWBP_IngameMenu_Mission_C::WBP_IngameMenu_MissionList_3' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Mission_C, WBP_Menu_btn) == 0x0004B8, "Member 'UWBP_IngameMenu_Mission_C::WBP_Menu_btn' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Mission_C, WBP_PalInGameMenuItemSlotButton) == 0x0004C0, "Member 'UWBP_IngameMenu_Mission_C::WBP_PalInGameMenuItemSlotButton' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Mission_C, WBP_PalInGameMenuItemSlotButton_1) == 0x0004C8, "Member 'UWBP_IngameMenu_Mission_C::WBP_PalInGameMenuItemSlotButton_1' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Mission_C, WBP_PalInGameMenuItemSlotButton_2) == 0x0004D0, "Member 'UWBP_IngameMenu_Mission_C::WBP_PalInGameMenuItemSlotButton_2' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Mission_C, WBP_PalInGameMenuItemSlotButton_3) == 0x0004D8, "Member 'UWBP_IngameMenu_Mission_C::WBP_PalInGameMenuItemSlotButton_3' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Mission_C, TabActionName) == 0x0004E0, "Member 'UWBP_IngameMenu_Mission_C::TabActionName' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Mission_C, MissionList) == 0x0004E8, "Member 'UWBP_IngameMenu_Mission_C::MissionList' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Mission_C, ChedckedData) == 0x0004F8, "Member 'UWBP_IngameMenu_Mission_C::ChedckedData' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Mission_C, TaskData) == 0x000558, "Member 'UWBP_IngameMenu_Mission_C::TaskData' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Mission_C, BuildOBjectNumTaskInfoMsgID) == 0x000580, "Member 'UWBP_IngameMenu_Mission_C::BuildOBjectNumTaskInfoMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Mission_C, WorkerNumTaskInfoMsgID) == 0x000590, "Member 'UWBP_IngameMenu_Mission_C::WorkerNumTaskInfoMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Mission_C, CanLevelup) == 0x0005A0, "Member 'UWBP_IngameMenu_Mission_C::CanLevelup' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Mission_C, LastLevel) == 0x0005A4, "Member 'UWBP_IngameMenu_Mission_C::LastLevel' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Mission_C, TaskUpdateTimer) == 0x0005A8, "Member 'UWBP_IngameMenu_Mission_C::TaskUpdateTimer' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Mission_C, ButtonActive) == 0x0005B0, "Member 'UWBP_IngameMenu_Mission_C::ButtonActive' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Mission_C, PalLimitMsgId) == 0x0005B8, "Member 'UWBP_IngameMenu_Mission_C::PalLimitMsgId' has a wrong offset!");

}

