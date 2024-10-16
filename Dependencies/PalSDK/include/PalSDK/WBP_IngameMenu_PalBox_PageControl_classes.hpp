#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_IngameMenu_PalBox_PageControl.WBP_IngameMenu_PalBox_PageControl_C
// 0x0020 (0x0298 - 0x0278)
class UWBP_IngameMenu_PalBox_PageControl_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_NormalToFocus;                                 // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BoxPageImage_00;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsSelected;                                        // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnmEvent_Select();
	void AnmEvent_Unselect();
	void ExecuteUbergraph_WBP_IngameMenu_PalBox_PageControl(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IngameMenu_PalBox_PageControl_C">();
	}
	static class UWBP_IngameMenu_PalBox_PageControl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IngameMenu_PalBox_PageControl_C>();
	}
};
static_assert(alignof(UWBP_IngameMenu_PalBox_PageControl_C) == 0x000008, "Wrong alignment on UWBP_IngameMenu_PalBox_PageControl_C");
static_assert(sizeof(UWBP_IngameMenu_PalBox_PageControl_C) == 0x000298, "Wrong size on UWBP_IngameMenu_PalBox_PageControl_C");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PageControl_C, UberGraphFrame) == 0x000278, "Member 'UWBP_IngameMenu_PalBox_PageControl_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PageControl_C, Anm_NormalToFocus) == 0x000280, "Member 'UWBP_IngameMenu_PalBox_PageControl_C::Anm_NormalToFocus' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PageControl_C, BoxPageImage_00) == 0x000288, "Member 'UWBP_IngameMenu_PalBox_PageControl_C::BoxPageImage_00' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PageControl_C, IsSelected) == 0x000290, "Member 'UWBP_IngameMenu_PalBox_PageControl_C::IsSelected' has a wrong offset!");

}

