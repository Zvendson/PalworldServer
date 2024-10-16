#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_IngameMenu_Task_Simple.WBP_IngameMenu_Task_Simple_C
// 0x02F8 (0x0570 - 0x0278)
class UWBP_IngameMenu_Task_Simple_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Canvas_RemainPalNum;                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_TaskDetail;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_Alarm;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_WorkMode;                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_21;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_22;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_23;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_24;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_25;                                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_454;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Icon_AlarmMode;                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Icon_Bed;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Icon_Pal;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Icon_WorkMode;                               // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Alarm;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_WorkMode;                                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_AlarmMode;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_BaseCampName;                                 // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_BedInsufficient;                              // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_BedNum;                                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_PalNum;                                       // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_RemainDIsplayPalNum;                          // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_TaskDetail_Base;                              // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Timer;                                        // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_WorkHardType;                                 // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_All;                                   // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_TaskDetail;                            // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_Task_SimpleList_C*      WBP_IngameMenu_Task_SimpleList;                    // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_Task_SimpleList_C*      WBP_IngameMenu_Task_SimpleList_1;                  // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_Task_SimpleList_C*      WBP_IngameMenu_Task_SimpleList_2;                  // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_Task_SimpleList_C*      WBP_IngameMenu_Task_SimpleList_3;                  // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_Task_SimpleList_C*      WBP_IngameMenu_Task_SimpleList_4;                  // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_TaskMaterial_C*         WBP_IngameMenu_TaskMaterial;                       // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                               WrapBox_ItemInfo;                                  // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_IngameMenu_Task_SimpleList_C*> PalDetailWidgetArray;                              // 0x0390(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FSlateFontInfo                         TaskDetailBaseFont;                                // 0x03A0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UMaterial*                              CompletedTaskFontMaterial;                         // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                              IncompletedTaskFontMaterial;                       // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    buildTaskMsgID;                                    // 0x0410(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    WorkerTaskMsgID;                                   // 0x0420(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TMap<EPalBaseCampWorkerDirectionBattleType, struct FDataTableRowHandle> BattleTypeMsgMap;                                  // 0x0430(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EPalBaseCampWorkerDirectionBattleType, TSoftObjectPtr<class UTexture2D>> BattleTypeIconMap;                                 // 0x0480(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EPalBaseCampPassiveEffectWorkHardType, struct FDataTableRowHandle> WorkHardTypeMsgMap;                                // 0x04D0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EPalBaseCampPassiveEffectWorkHardType, TSoftObjectPtr<class UTexture2D>> WorkHardTypeIconMap;                               // 0x0520(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void AddItemInfo(bool IsHideWhenZero, class FName ItemId, int64 ItemNum, int64 GaugeMaxNumBorder);
	void AddTaslDetailText(const class FText& Text, int32 NowNum, int32 RequireNum);
	void ExecuteUbergraph_WBP_IngameMenu_Task_Simple(int32 EntryPoint);
	void OnInitialized();
	void RemoveAllItemDetail();
	void RemoveTaskDetailText();
	void Set_Camp_Name(const class FText& BaseCampName);
	void Set_Camp_Pal_and_Bed_Num(int32 NowPalNum, int32 MaxPalNum, int32 BedNum);
	void Set_Pal_Slots(TArray<class UPalIndividualCharacterSlot*>& Slots, int32 MaxPalNum, int32 Palbed);
	void Set_Task_List(const struct FPalBaseCampTaskCheckedData& TaskCheckedData, const struct FPalBaseCampTaskDataSet& TaskData);
	void SetEnableWorkerBattleTypeInfo(bool IsEnable);
	void SetEnableWorkHardInfo(bool IsEnable);
	void SetRemainDIsplayPalNum(int32 Num);
	void SetRemainTimer(double RemainTime);
	void SetVisibilityTaskDetail(ESlateVisibility NewVisibility);
	void SetWorkerBattleType(EPalBaseCampWorkerDirectionBattleType BattleType);
	void SetWorkHardType(EPalBaseCampPassiveEffectWorkHardType WorkHardType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IngameMenu_Task_Simple_C">();
	}
	static class UWBP_IngameMenu_Task_Simple_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IngameMenu_Task_Simple_C>();
	}
};
static_assert(alignof(UWBP_IngameMenu_Task_Simple_C) == 0x000008, "Wrong alignment on UWBP_IngameMenu_Task_Simple_C");
static_assert(sizeof(UWBP_IngameMenu_Task_Simple_C) == 0x000570, "Wrong size on UWBP_IngameMenu_Task_Simple_C");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, UberGraphFrame) == 0x000278, "Member 'UWBP_IngameMenu_Task_Simple_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, Canvas_RemainPalNum) == 0x000280, "Member 'UWBP_IngameMenu_Task_Simple_C::Canvas_RemainPalNum' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, Canvas_TaskDetail) == 0x000288, "Member 'UWBP_IngameMenu_Task_Simple_C::Canvas_TaskDetail' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, HorizontalBox_Alarm) == 0x000290, "Member 'UWBP_IngameMenu_Task_Simple_C::HorizontalBox_Alarm' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, HorizontalBox_WorkMode) == 0x000298, "Member 'UWBP_IngameMenu_Task_Simple_C::HorizontalBox_WorkMode' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, Image_21) == 0x0002A0, "Member 'UWBP_IngameMenu_Task_Simple_C::Image_21' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, Image_22) == 0x0002A8, "Member 'UWBP_IngameMenu_Task_Simple_C::Image_22' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, Image_23) == 0x0002B0, "Member 'UWBP_IngameMenu_Task_Simple_C::Image_23' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, Image_24) == 0x0002B8, "Member 'UWBP_IngameMenu_Task_Simple_C::Image_24' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, Image_25) == 0x0002C0, "Member 'UWBP_IngameMenu_Task_Simple_C::Image_25' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, Image_454) == 0x0002C8, "Member 'UWBP_IngameMenu_Task_Simple_C::Image_454' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, Image_Icon_AlarmMode) == 0x0002D0, "Member 'UWBP_IngameMenu_Task_Simple_C::Image_Icon_AlarmMode' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, Image_Icon_Bed) == 0x0002D8, "Member 'UWBP_IngameMenu_Task_Simple_C::Image_Icon_Bed' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, Image_Icon_Pal) == 0x0002E0, "Member 'UWBP_IngameMenu_Task_Simple_C::Image_Icon_Pal' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, Image_Icon_WorkMode) == 0x0002E8, "Member 'UWBP_IngameMenu_Task_Simple_C::Image_Icon_WorkMode' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, Overlay_Alarm) == 0x0002F0, "Member 'UWBP_IngameMenu_Task_Simple_C::Overlay_Alarm' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, Overlay_WorkMode) == 0x0002F8, "Member 'UWBP_IngameMenu_Task_Simple_C::Overlay_WorkMode' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, Text_AlarmMode) == 0x000300, "Member 'UWBP_IngameMenu_Task_Simple_C::Text_AlarmMode' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, Text_BaseCampName) == 0x000308, "Member 'UWBP_IngameMenu_Task_Simple_C::Text_BaseCampName' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, Text_BedInsufficient) == 0x000310, "Member 'UWBP_IngameMenu_Task_Simple_C::Text_BedInsufficient' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, Text_BedNum) == 0x000318, "Member 'UWBP_IngameMenu_Task_Simple_C::Text_BedNum' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, Text_PalNum) == 0x000320, "Member 'UWBP_IngameMenu_Task_Simple_C::Text_PalNum' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, Text_RemainDIsplayPalNum) == 0x000328, "Member 'UWBP_IngameMenu_Task_Simple_C::Text_RemainDIsplayPalNum' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, Text_TaskDetail_Base) == 0x000330, "Member 'UWBP_IngameMenu_Task_Simple_C::Text_TaskDetail_Base' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, Text_Timer) == 0x000338, "Member 'UWBP_IngameMenu_Task_Simple_C::Text_Timer' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, Text_WorkHardType) == 0x000340, "Member 'UWBP_IngameMenu_Task_Simple_C::Text_WorkHardType' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, VerticalBox_All) == 0x000348, "Member 'UWBP_IngameMenu_Task_Simple_C::VerticalBox_All' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, VerticalBox_TaskDetail) == 0x000350, "Member 'UWBP_IngameMenu_Task_Simple_C::VerticalBox_TaskDetail' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, WBP_IngameMenu_Task_SimpleList) == 0x000358, "Member 'UWBP_IngameMenu_Task_Simple_C::WBP_IngameMenu_Task_SimpleList' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, WBP_IngameMenu_Task_SimpleList_1) == 0x000360, "Member 'UWBP_IngameMenu_Task_Simple_C::WBP_IngameMenu_Task_SimpleList_1' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, WBP_IngameMenu_Task_SimpleList_2) == 0x000368, "Member 'UWBP_IngameMenu_Task_Simple_C::WBP_IngameMenu_Task_SimpleList_2' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, WBP_IngameMenu_Task_SimpleList_3) == 0x000370, "Member 'UWBP_IngameMenu_Task_Simple_C::WBP_IngameMenu_Task_SimpleList_3' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, WBP_IngameMenu_Task_SimpleList_4) == 0x000378, "Member 'UWBP_IngameMenu_Task_Simple_C::WBP_IngameMenu_Task_SimpleList_4' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, WBP_IngameMenu_TaskMaterial) == 0x000380, "Member 'UWBP_IngameMenu_Task_Simple_C::WBP_IngameMenu_TaskMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, WrapBox_ItemInfo) == 0x000388, "Member 'UWBP_IngameMenu_Task_Simple_C::WrapBox_ItemInfo' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, PalDetailWidgetArray) == 0x000390, "Member 'UWBP_IngameMenu_Task_Simple_C::PalDetailWidgetArray' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, TaskDetailBaseFont) == 0x0003A0, "Member 'UWBP_IngameMenu_Task_Simple_C::TaskDetailBaseFont' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, CompletedTaskFontMaterial) == 0x000400, "Member 'UWBP_IngameMenu_Task_Simple_C::CompletedTaskFontMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, IncompletedTaskFontMaterial) == 0x000408, "Member 'UWBP_IngameMenu_Task_Simple_C::IncompletedTaskFontMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, buildTaskMsgID) == 0x000410, "Member 'UWBP_IngameMenu_Task_Simple_C::buildTaskMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, WorkerTaskMsgID) == 0x000420, "Member 'UWBP_IngameMenu_Task_Simple_C::WorkerTaskMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, BattleTypeMsgMap) == 0x000430, "Member 'UWBP_IngameMenu_Task_Simple_C::BattleTypeMsgMap' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, BattleTypeIconMap) == 0x000480, "Member 'UWBP_IngameMenu_Task_Simple_C::BattleTypeIconMap' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, WorkHardTypeMsgMap) == 0x0004D0, "Member 'UWBP_IngameMenu_Task_Simple_C::WorkHardTypeMsgMap' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_Simple_C, WorkHardTypeIconMap) == 0x000520, "Member 'UWBP_IngameMenu_Task_Simple_C::WorkHardTypeIconMap' has a wrong offset!");

}

