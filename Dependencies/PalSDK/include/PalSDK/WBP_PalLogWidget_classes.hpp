#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_PalLogWidget.WBP_PalLogWidget_C
// 0x0138 (0x0540 - 0x0408)
class UWBP_PalLogWidget_C final : public UPalLogWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Default_In;                                        // 0x0410(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_22;                                    // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ImportantBorder;                                   // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalScrollBox*                          ScrollBox_NormalLog;                               // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_KillDeathLog;                          // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                VeryImportantBorder;                               // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UPalLogWidgetBase*>              NormalLogList;                                     // 0x0440(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UPalLogWidgetBase*>              ImportantLogList;                                  // 0x0450(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	double                                        MoveTime;                                          // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxDisplayImportantLog;                            // 0x0468(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46C[0x4];                                      // 0x046C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftObjectPath                        Icon_Path;                                         // 0x0470(0x0020)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TMap<struct FGuid, class UPalLogWidgetBase*>  VeryImportantLogMap;                               // 0x0490(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                         Normal_Log_Display_Time;                           // 0x04E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Important_Log_Display_Time;                        // 0x04E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  NowDisplayVeryImportantLog;                        // 0x04E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        VeryImportantLogDisplayTime;                       // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        VeryImportantLogDisplayTimer;                      // 0x0500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuid>                          VeryImportantLogIDArray;                           // 0x0508(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UWBP_Notice_Deathlog_C*>         DeathLogList;                                      // 0x0518(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                         Death_Log_Short_Display_Time;                      // 0x0528(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Death_Log_Long_Display_Time;                       // 0x052C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_Notice_Deathlog_C*>         KillLogList;                                       // 0x0530(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void CheckImportantLog(bool* IsRemoved);
	void CheckRemoveLog(const TArray<class UPalLogWidgetBase*>& TargetArray, bool* Removed);
	void CheckVeryImportantLog(double DeltaTime);
	void CREATEDELEGATE_PROXYFUNCTION_0(const struct FPalKillLogDisplayData& DeathLogDisplayData);
	void CreateLogWidget(class UClass* LogWidgeClass, const class FText& Text, const struct FPalLogAdditionalData& AdditionalData, class UPalLogWidgetBase** CreatedWidget);
	void Destruct();
	void DisplayNextVeryImportantLog();
	void ExecuteUbergraph_WBP_PalLogWidget(int32 EntryPoint);
	void On_Added_Normal_Log(const class FText& LogText, const struct FPalLogAdditionalData& LogAdditionalData);
	void OnAddedDeathLog(const struct FPalKillLogDisplayData& DeathLogDisplayData);
	void OnAddedImportantLog(const class FText& LogText, const struct FPalLogAdditionalData& LogAdditionalData);
	void OnAddedKillLog(const struct FPalKillLogDisplayData& KillLogData);
	void OnAddedVeryImportantLog(const struct FGuid& LogId, const class FText& LogText, const struct FPalLogAdditionalData& LogAdditionalData);
	void OnDeathLogEnd(class UWBP_Notice_Deathlog_C* EndedLog);
	void OnInitialized();
	void OnKillLogEnd(class UWBP_Notice_Deathlog_C* EndedLog);
	void OnRemovedVeryImportantLog(const struct FGuid& LogId);
	void SetupWidgetTranslation(class UPalLogWidgetBase* TargetWidget, class UCanvasPanelSlot* RelationSlot);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalLogWidget_C">();
	}
	static class UWBP_PalLogWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalLogWidget_C>();
	}
};
static_assert(alignof(UWBP_PalLogWidget_C) == 0x000008, "Wrong alignment on UWBP_PalLogWidget_C");
static_assert(sizeof(UWBP_PalLogWidget_C) == 0x000540, "Wrong size on UWBP_PalLogWidget_C");
static_assert(offsetof(UWBP_PalLogWidget_C, UberGraphFrame) == 0x000408, "Member 'UWBP_PalLogWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalLogWidget_C, Default_In) == 0x000410, "Member 'UWBP_PalLogWidget_C::Default_In' has a wrong offset!");
static_assert(offsetof(UWBP_PalLogWidget_C, CanvasPanel_22) == 0x000418, "Member 'UWBP_PalLogWidget_C::CanvasPanel_22' has a wrong offset!");
static_assert(offsetof(UWBP_PalLogWidget_C, ImportantBorder) == 0x000420, "Member 'UWBP_PalLogWidget_C::ImportantBorder' has a wrong offset!");
static_assert(offsetof(UWBP_PalLogWidget_C, ScrollBox_NormalLog) == 0x000428, "Member 'UWBP_PalLogWidget_C::ScrollBox_NormalLog' has a wrong offset!");
static_assert(offsetof(UWBP_PalLogWidget_C, VerticalBox_KillDeathLog) == 0x000430, "Member 'UWBP_PalLogWidget_C::VerticalBox_KillDeathLog' has a wrong offset!");
static_assert(offsetof(UWBP_PalLogWidget_C, VeryImportantBorder) == 0x000438, "Member 'UWBP_PalLogWidget_C::VeryImportantBorder' has a wrong offset!");
static_assert(offsetof(UWBP_PalLogWidget_C, NormalLogList) == 0x000440, "Member 'UWBP_PalLogWidget_C::NormalLogList' has a wrong offset!");
static_assert(offsetof(UWBP_PalLogWidget_C, ImportantLogList) == 0x000450, "Member 'UWBP_PalLogWidget_C::ImportantLogList' has a wrong offset!");
static_assert(offsetof(UWBP_PalLogWidget_C, MoveTime) == 0x000460, "Member 'UWBP_PalLogWidget_C::MoveTime' has a wrong offset!");
static_assert(offsetof(UWBP_PalLogWidget_C, MaxDisplayImportantLog) == 0x000468, "Member 'UWBP_PalLogWidget_C::MaxDisplayImportantLog' has a wrong offset!");
static_assert(offsetof(UWBP_PalLogWidget_C, Icon_Path) == 0x000470, "Member 'UWBP_PalLogWidget_C::Icon_Path' has a wrong offset!");
static_assert(offsetof(UWBP_PalLogWidget_C, VeryImportantLogMap) == 0x000490, "Member 'UWBP_PalLogWidget_C::VeryImportantLogMap' has a wrong offset!");
static_assert(offsetof(UWBP_PalLogWidget_C, Normal_Log_Display_Time) == 0x0004E0, "Member 'UWBP_PalLogWidget_C::Normal_Log_Display_Time' has a wrong offset!");
static_assert(offsetof(UWBP_PalLogWidget_C, Important_Log_Display_Time) == 0x0004E4, "Member 'UWBP_PalLogWidget_C::Important_Log_Display_Time' has a wrong offset!");
static_assert(offsetof(UWBP_PalLogWidget_C, NowDisplayVeryImportantLog) == 0x0004E8, "Member 'UWBP_PalLogWidget_C::NowDisplayVeryImportantLog' has a wrong offset!");
static_assert(offsetof(UWBP_PalLogWidget_C, VeryImportantLogDisplayTime) == 0x0004F8, "Member 'UWBP_PalLogWidget_C::VeryImportantLogDisplayTime' has a wrong offset!");
static_assert(offsetof(UWBP_PalLogWidget_C, VeryImportantLogDisplayTimer) == 0x000500, "Member 'UWBP_PalLogWidget_C::VeryImportantLogDisplayTimer' has a wrong offset!");
static_assert(offsetof(UWBP_PalLogWidget_C, VeryImportantLogIDArray) == 0x000508, "Member 'UWBP_PalLogWidget_C::VeryImportantLogIDArray' has a wrong offset!");
static_assert(offsetof(UWBP_PalLogWidget_C, DeathLogList) == 0x000518, "Member 'UWBP_PalLogWidget_C::DeathLogList' has a wrong offset!");
static_assert(offsetof(UWBP_PalLogWidget_C, Death_Log_Short_Display_Time) == 0x000528, "Member 'UWBP_PalLogWidget_C::Death_Log_Short_Display_Time' has a wrong offset!");
static_assert(offsetof(UWBP_PalLogWidget_C, Death_Log_Long_Display_Time) == 0x00052C, "Member 'UWBP_PalLogWidget_C::Death_Log_Long_Display_Time' has a wrong offset!");
static_assert(offsetof(UWBP_PalLogWidget_C, KillLogList) == 0x000530, "Member 'UWBP_PalLogWidget_C::KillLogList' has a wrong offset!");

}

