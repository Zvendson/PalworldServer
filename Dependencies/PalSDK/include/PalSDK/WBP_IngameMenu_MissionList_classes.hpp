#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_IngameMenu_MissionList.WBP_IngameMenu_MissionList_C
// 0x0038 (0x02B0 - 0x0278)
class UWBP_IngameMenu_MissionList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Check_OffToOn;                                 // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Check;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Camp_Max;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Mission;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_MissionNum;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsChecked;                                         // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_IngameMenu_MissionList(int32 EntryPoint);
	void SetDisplayMax(bool Enable);
	void SetMissionInfo(const class FText& Text, int32 NowProgress, int32 MaxProgress);
	void ToggleCheckMark(bool Enable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IngameMenu_MissionList_C">();
	}
	static class UWBP_IngameMenu_MissionList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IngameMenu_MissionList_C>();
	}
};
static_assert(alignof(UWBP_IngameMenu_MissionList_C) == 0x000008, "Wrong alignment on UWBP_IngameMenu_MissionList_C");
static_assert(sizeof(UWBP_IngameMenu_MissionList_C) == 0x0002B0, "Wrong size on UWBP_IngameMenu_MissionList_C");
static_assert(offsetof(UWBP_IngameMenu_MissionList_C, UberGraphFrame) == 0x000278, "Member 'UWBP_IngameMenu_MissionList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_MissionList_C, Anm_Check_OffToOn) == 0x000280, "Member 'UWBP_IngameMenu_MissionList_C::Anm_Check_OffToOn' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_MissionList_C, Check) == 0x000288, "Member 'UWBP_IngameMenu_MissionList_C::Check' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_MissionList_C, Text_Camp_Max) == 0x000290, "Member 'UWBP_IngameMenu_MissionList_C::Text_Camp_Max' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_MissionList_C, Text_Mission) == 0x000298, "Member 'UWBP_IngameMenu_MissionList_C::Text_Mission' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_MissionList_C, Text_MissionNum) == 0x0002A0, "Member 'UWBP_IngameMenu_MissionList_C::Text_MissionNum' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_MissionList_C, IsChecked) == 0x0002A8, "Member 'UWBP_IngameMenu_MissionList_C::IsChecked' has a wrong offset!");

}

