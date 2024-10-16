#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_IngameMenu_CampLevelUp.WBP_IngameMenu_CampLevelUp_C
// 0x0020 (0x0428 - 0x0408)
class UWBP_IngameMenu_CampLevelUp_C final : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_LevelUp_Close;                                 // 0x0410(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_LevelUp;                                       // 0x0418(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_LevelNum;                                     // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_IngameMenu_CampLevelUp(int32 EntryPoint);
	void Finished_CFA6A904409DD4F86430DFBC13F511B5();
	void ShowLevelUp(int32 Level);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IngameMenu_CampLevelUp_C">();
	}
	static class UWBP_IngameMenu_CampLevelUp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IngameMenu_CampLevelUp_C>();
	}
};
static_assert(alignof(UWBP_IngameMenu_CampLevelUp_C) == 0x000008, "Wrong alignment on UWBP_IngameMenu_CampLevelUp_C");
static_assert(sizeof(UWBP_IngameMenu_CampLevelUp_C) == 0x000428, "Wrong size on UWBP_IngameMenu_CampLevelUp_C");
static_assert(offsetof(UWBP_IngameMenu_CampLevelUp_C, UberGraphFrame) == 0x000408, "Member 'UWBP_IngameMenu_CampLevelUp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_CampLevelUp_C, Anm_LevelUp_Close) == 0x000410, "Member 'UWBP_IngameMenu_CampLevelUp_C::Anm_LevelUp_Close' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_CampLevelUp_C, Anm_LevelUp) == 0x000418, "Member 'UWBP_IngameMenu_CampLevelUp_C::Anm_LevelUp' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_CampLevelUp_C, Text_LevelNum) == 0x000420, "Member 'UWBP_IngameMenu_CampLevelUp_C::Text_LevelNum' has a wrong offset!");

}

